#include "eb/native/world/teleport/movement.hpp"
#include "eb/native/world_npc_collision.hpp"
#include <algorithm>
#include <bit>
#include <stdexcept>
namespace eb::native::world::teleport {
namespace {
void require(bool okay, const char *message) {
  if (!okay)
    throw std::logic_error(message);
}
std::uint16_t whole(std::uint32_t n) { return std::uint16_t(n >> 16); }
std::uint32_t position(std::uint16_t n, std::uint16_t fraction) {
  return std::uint32_t(n) << 16 | fraction;
}
std::uint16_t high_byte_signed(std::uint16_t n) {
  return std::uint16_t(std::int16_t(std::int8_t(n >> 8)));
}
} // namespace
Movement::Movement(WorldTeleportState &state, MovementState &movement,
                   MovementOwners owners)
    : state_(state), movement_(movement), owners_(owners) {
  auto &o = owners_;
  auto &w = o.world;
  require(o.walking.version() == w.party.version() &&
              o.angles.version() == w.party.version() &&
              o.following.uses(w.actors, w.party, w.interactions.state(),
                               w.windows.prompt_state()) &&
              w.runtime.scene().uses(o.input) && w.runtime.uses(w.interactions),
          "Teleport movement requires its actual regional input, party and "
          "actor owners");
  w.actors.bind_tick_service(*this);
}
Movement::~Movement() { owners_.world.actors.clear_tick_service(*this); }
bool Movement::uses(const ActorWorld &actors) const noexcept {
  return &owners_.world.actors == &actors;
}
void Movement::velocity(std::uint16_t direction) {
  const unsigned amount =
      state_.state == 1
          ? (owners_.world.area_character_style == 3 ? 0x051e : 0x3333)
      : state_.state == 3                       ? 0x1999
      : owners_.world.area_character_style == 3 ? 0x29fb
                                                : 0x1851;
  state_.speed =
      state_.state == 3 ? state_.speed - amount : state_.speed + amount;
  owners_.world.session.teleport_speed = whole(state_.speed);
  std::uint32_t component = state_.speed;
  if (direction & 1) {
    // Arithmetic shift by8 precedes the wrapped MULT32; a second ASR8
    // follows. This preserves source truncation and signed wrap exactly.
    const auto signed_speed = std::bit_cast<std::int32_t>(state_.speed);
    component = std::uint32_t(signed_speed >> 8) * 0xb505u;
    component = std::uint32_t(std::bit_cast<std::int32_t>(component) >> 8);
  }
  movement_.speed_x = movement_.speed_y = component;
  switch (direction) {
  case 0:
    movement_.speed_y = 0u - movement_.speed_y;
    [[fallthrough]];
  case 4:
    movement_.speed_x = 0;
    break;
  case 6:
    movement_.speed_x = 0u - movement_.speed_x;
    [[fallthrough]];
  case 2:
    movement_.speed_y = 0;
    break;
  case 1:
    movement_.speed_y = 0u - movement_.speed_y;
    break;
  case 7:
    movement_.speed_y = 0u - movement_.speed_y;
    [[fallthrough]];
  case 5:
    movement_.speed_x = 0u - movement_.speed_x;
    break;
  default:
    break;
  }
}
void Movement::initialize() {
  auto &w = owners_.world;
  for (unsigned role = 24; role < 30; ++role) {
    w.actors.set_authored_variable(role, 3, 8);
    w.actors.set_authored_variable(
        role, 7, std::uint16_t(w.actors.authored_variable(role, 7) | 0x800));
  }
  state_.beta_angle = std::uint16_t(story::next_random(w.random) << 8);
  if (w.session.teleport_style == 2)
    state_.beta_progress = 4;
  else {
    state_.beta_progress = 8;
    state_.better_progress = 0;
  }
  state_.beta_x_adjustment = w.interactions.state().leader_x;
  state_.beta_y_adjustment = w.interactions.state().leader_y;
}
std::uint16_t Movement::surface(CollisionPoint at, unsigned role) {
  auto &w = owners_.world;
  const auto id = w.actors.actor_for_role(role);
  require(bool(id),
          "Teleport surface query lacks its live authored party role");
  const auto shape = w.actors.actor(*id).appearance_context.shape;
  auto &leader = w.interactions.state();
  leader.checked_surface_origin = owners_.collision.origin(at, shape);
  leader.surface_flags = owners_.collision.vertical_surfaces(
      [&](CollisionCell cell) {
        const auto *window = w.runtime.collision_window();
        require(
            window && window->initialized(),
            "Teleport terrain requires the actual retained collision window");
        return window->sample(cell);
      },
      at, shape);
  return leader.surface_flags;
}
std::uint16_t Movement::terrain(CollisionPoint from, CollisionPoint to) {
  if (state_.state)
    return 0;
  const auto role = owners_.world.formation.current_leader_role;
  const auto old = surface(from, role);
  return std::uint16_t(old | surface(to, role));
}
void Movement::center(std::uint16_t x, std::uint16_t y) {
  auto &scene = owners_.world.actors.scene();
  scene.camera_x = std::uint16_t(x - 128);
  scene.camera_y = std::uint16_t(y - 112);
  scene.camera_changed = true;
  const auto window = owners_.world.runtime.collision_window();
  require(window && window->initialized(),
          "Teleport camera requires the actual retained collision window");
  window->refresh({scene.camera_x, scene.camera_y}, owners_.area);
}
void Movement::record_trail() {
  auto &w = owners_.world;
  auto &leader = w.interactions.state();
  require(w.trail.next_write < 256,
          "Teleport trail writer exceeds its actual ring");
  auto &point = w.trail.points[w.trail.next_write];
  point.x = leader.leader_x;
  point.y = leader.leader_y;
  point.surface_flags = surface({leader.leader_x, leader.leader_y},
                                w.formation.current_leader_role);
  point.walking_style = 0;
  point.direction = leader.leader_direction;
  w.trail.next_write = std::uint16_t(w.trail.next_write + 1) & 255;
}
void Movement::animation_speed() {
  auto &actors = owners_.world.actors;
  const auto count = std::uint16_t(12 - whole(state_.speed));
  const auto effective = !count || (count & 0x8000) ? 1 : count;
  for (unsigned role = 24; role < 29; ++role)
    actors.set_authored_variable(role, 3, effective);
}
void Movement::alpha() {
  auto &w = owners_.world;
  auto &leader = w.interactions.state();
  w.control.moved_this_tick = 1;
  auto direction = std::uint16_t(
      owners_.walking.direction(0, owners_.input.state[0], w.queue.pending()));
  if (leader.leader_direction == std::uint16_t(direction ^ 4))
    direction = leader.leader_direction;
  if (direction == 0xffff)
    direction = leader.leader_direction;
  leader.leader_direction = direction;
  if (w.actors.appearance_scene().battle_swirl_ticks) {
    state_.state = 2;
    w.control.encounter.mode = 1;
  }
  velocity(direction);
  movement_.next_x =
      position(leader.leader_x, w.control.x_fraction) + movement_.speed_x;
  movement_.next_y =
      position(leader.leader_y, w.control.y_fraction) + movement_.speed_y;
  const CollisionPoint next{whole(movement_.next_x), whole(movement_.next_y)};
  world_npc_collision(w.actors, w.enemies, leader, w.formation, next);
  if (leader.collision_actor)
    state_.state = 2;
  if (terrain({leader.leader_x, leader.leader_y}, next) & 0xc0)
    state_.state = 2;
  if (state_.state != 2) {
    leader.leader_x = next.x;
    leader.leader_y = next.y;
    w.control.x_fraction = std::uint16_t(movement_.next_x);
    w.control.y_fraction = std::uint16_t(movement_.next_y);
  }
  center(leader.leader_x, leader.leader_y);
  record_trail();
  animation_speed();
  if (std::bit_cast<std::int16_t>(whole(state_.speed)) > 9)
    state_.state = 1;
}
void Movement::beta() {
  auto &w = owners_.world;
  auto &leader = w.interactions.state();
  w.control.moved_this_tick = 1;
  if (w.session.teleport_style != 4) {
    const auto input = owners_.input.state[0];
    if (input & 0x800)
      --state_.beta_y_adjustment;
    if (input & 0x400)
      ++state_.beta_y_adjustment;
    if (input & 0x200)
      --state_.beta_x_adjustment;
    if (input & 0x100)
      ++state_.beta_x_adjustment;
  }
  const auto components = owners_.angles.components(
      state_.beta_angle, state_.beta_progress, owners_.peripherals);
  const CollisionPoint next{
      std::uint16_t(high_byte_signed(components[0]) + state_.beta_x_adjustment),
      std::uint16_t(high_byte_signed(components[1]) +
                    state_.beta_y_adjustment)};
  movement_.next_x = position(next.x, std::uint16_t(movement_.next_x));
  movement_.next_y = position(next.y, std::uint16_t(movement_.next_y));
  if (w.session.teleport_style != 4) {
    if (terrain({leader.leader_x, leader.leader_y}, next) & 0xc0)
      state_.state = 2;
    if (w.actors.appearance_scene().battle_swirl_ticks) {
      state_.state = 2;
      w.control.encounter.mode = 1;
    }
    world_npc_collision(w.actors, w.enemies, leader, w.formation, next);
    if (leader.collision_actor)
      state_.state = 2;
  }
  if (state_.state != 2) {
    leader.leader_x = next.x;
    leader.leader_y = next.y;
  }
  leader.leader_direction =
      std::uint16_t((std::bit_cast<std::int16_t>(state_.beta_angle) >> 13) +
                    2) &
      7;
  state_.speed += 0x1851;
  w.session.teleport_speed = whole(state_.speed);
  if (w.session.teleport_style == 2) {
    state_.beta_angle = std::uint16_t(state_.beta_angle + 0xa00);
    state_.beta_progress += 12;
  } else {
    state_.better_progress += 32;
    state_.beta_angle =
        std::uint16_t(state_.beta_angle + state_.better_progress);
    state_.beta_progress += 16;
  }
  center(leader.leader_x, leader.leader_y);
  record_trail();
  animation_speed();
  const auto progress = w.session.teleport_style == 2 ? state_.beta_progress
                                                      : state_.better_progress;
  const unsigned limit = w.session.teleport_style == 2 ? 0x1000 : 0x1800;
  if (std::bit_cast<std::int16_t>(progress) > int(limit)) {
    state_.state = 1;
    constexpr std::array<std::array<std::uint16_t, 2>, 8> components{
        {{0, 0xfffb},
         {5, 0xfffb},
         {5, 0},
         {5, 5},
         {0, 5},
         {0xfffb, 5},
         {0xfffb, 0},
         {0xfffb, 0xfffb}}};
    const auto delta = components.at(leader.leader_direction);
    movement_.speed_x = position(delta[0], std::uint16_t(movement_.speed_x));
    movement_.speed_y = position(delta[1], std::uint16_t(movement_.speed_y));
  }
}
void Movement::prepare_departure() {
  movement_.speed_x &= 65535;
  movement_.speed_y &= 65535;
  const auto &leader = owners_.world.interactions.state();
  movement_.success_screen_x = leader.leader_x;
  movement_.success_screen_y = leader.leader_y;
  movement_.success_screen_speed_x = whole(movement_.speed_x);
  movement_.success_screen_speed_y = whole(movement_.speed_y);
  phase_ = MovementPhase::Departure;
}
void Movement::departure() {
  auto &w = owners_.world;
  auto &leader = w.interactions.state();
  velocity(leader.leader_direction);
  const auto x =
      position(leader.leader_x, w.control.x_fraction) + movement_.speed_x;
  const auto y =
      position(leader.leader_y, w.control.y_fraction) + movement_.speed_y;
  leader.leader_x = whole(x);
  leader.leader_y = whole(y);
  w.control.x_fraction = std::uint16_t(x);
  w.control.y_fraction = std::uint16_t(y);
  movement_.success_screen_x = std::uint16_t(movement_.success_screen_x +
                                             movement_.success_screen_speed_x);
  movement_.success_screen_y = std::uint16_t(movement_.success_screen_y +
                                             movement_.success_screen_speed_y);
  center(movement_.success_screen_x, movement_.success_screen_y);
  record_trail();
}
void Movement::prepare_arrival() {
  state_.speed = 0x80000;
  owners_.world.session.teleport_speed = 8;
  state_.state = 3;
  owners_.world.interactions.state().leader_direction = 6;
  for (unsigned role = 24; role < 30; ++role) {
    owners_.world.actors.set_authored_variable(role, 3, 8);
    owners_.world.actors.set_authored_variable(
        role, 7,
        std::uint16_t(owners_.world.actors.authored_variable(role, 7) | 0x800));
  }
  phase_ = MovementPhase::Arrival;
}
void Movement::arrival() {
  auto &w = owners_.world;
  auto &leader = w.interactions.state();
  velocity(leader.leader_direction);
  const auto x =
      position(leader.leader_x, w.control.x_fraction) + movement_.speed_x;
  const auto y =
      position(leader.leader_y, w.control.y_fraction) + movement_.speed_y;
  leader.leader_x = whole(x);
  leader.leader_y = whole(y);
  w.control.x_fraction = std::uint16_t(x);
  w.control.y_fraction = std::uint16_t(y);
  center(std::uint16_t(leader.leader_x - whole(state_.speed * 2)),
         leader.leader_y);
  record_trail();
  animation_speed();
}
void Movement::follower(ActorId id, bool failure) {
  auto &w = owners_.world;
  auto &actor = w.actors.actor(id);
  const auto role = actor.authored_role();
  require(role && *role >= 24 && *role < 30,
          "Teleport follower lacks its actual reserved party role");
  const auto record = actor.action().variables[1],
             member = actor.action().variables[0];
  require(record < 6, "Teleport follower lacks its actual character record");
  if (failure) {
    actor.behavior.surface_flags = surface(
        {whole(actor.action().position[0]), whole(actor.action().position[1])},
        *role);
    require(bool(owners_.following.prepare_with_style(id, 0xffff)),
            "Teleport failure artwork has no actual party owner");
    return;
  }
  const auto cursor = w.formation.trail_cursors[record];
  require(cursor < 256, "Teleport follower cursor exceeds its actual ring");
  const auto point = w.trail.points[cursor];
  require(bool(owners_.following.prepare_with_style(id, point.walking_style)),
          "Teleport follower artwork has no actual party owner");
  w.actors.set_authored_coordinate(*role, 0, point.x);
  w.actors.set_authored_coordinate(*role, 1, point.y);
  actor.behavior.direction = point.direction;
  actor.behavior.surface_flags = point.surface_flags;
  unsigned next = cursor;
  if (w.party.display_order[0] == std::uint16_t(member + 1))
    ++next;
  else if (whole(state_.speed)) {
    const auto found = std::find(w.party.display_order.begin(),
                                 w.party.display_order.end(), member + 1);
    require(found != w.party.display_order.end() &&
                found != w.party.display_order.begin(),
            "Teleport follower predecessor is outside actual formation");
    const auto position = unsigned(found - w.party.display_order.begin() - 1);
    const auto predecessor =
        w.actors.actor_for_role(w.formation.roles[position]);
    require(bool(predecessor),
            "Teleport follower predecessor lacks its actual actor");
    const auto predecessor_record =
        w.actors.actor(*predecessor).action().variables[1];
    require(predecessor_record < 6,
            "Teleport predecessor character exceeds formation");
    unsigned ahead = w.formation.trail_cursors[predecessor_record];
    require(ahead < 256, "Teleport predecessor cursor exceeds actual ring");
    if (ahead < cursor)
      ahead += 256;
    const auto distance = ahead - cursor;
    if (distance == 6) {
      ++next;
      actor.action().variables[7] &= 0xefff;
    } else if (distance > 6) {
      next += 2;
      actor.action().variables[7] |= 0x1000;
    }
  }
  w.formation.trail_cursors[record] = std::uint16_t(next) & 255;
}
bool Movement::tick(ActorId id, ActorTickCallback callback) {
  if (callback == ActorTickCallback::TeleportFollower) {
    follower(id, false);
    return false;
  }
  if (callback == ActorTickCallback::TeleportFailureFollower) {
    follower(id, true);
    return false;
  }
  require(callback == ActorTickCallback::TeleportLeader &&
              owners_.world.actors.actor(id).authored_role() == 23,
          "Teleport controller callback lacks its actual role23");
  switch (phase_) {
  case MovementPhase::Alpha:
    alpha();
    break;
  case MovementPhase::Beta:
    beta();
    break;
  case MovementPhase::Departure:
    departure();
    break;
  case MovementPhase::Arrival:
    arrival();
    break;
  case MovementPhase::Failure:
    return false;
  }
  return true;
}
} // namespace eb::native::world::teleport
