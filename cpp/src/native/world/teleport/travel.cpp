#include "eb/native/world/teleport/travel.hpp"
#include <stdexcept>
namespace eb::native::world::teleport {
namespace {
void require(bool okay, const char *message) {
  if (!okay)
    throw std::logic_error(message);
}
} // namespace
struct Travel::Operation::State {
  Travel &owner;
  story::BattlePublication *battle{};
  std::uint16_t style{}, destination{};
  CameraPosition position;
  unsigned phase{}, count{};
  bool done{}, executing{}, success{}, freeze_after_actors{};
  std::unique_ptr<WorldRuntime::Operation> runtime;
  std::unique_ptr<WorldMapLoad::Operation> map;
  std::unique_ptr<WorldPartyRelocation::Operation> relocation;
  State(Travel &o, story::BattlePublication *b)
      : owner(o), battle(b), style(o.owners_.world.session.teleport_style),
        destination(
            o.owners_.world.actors.appearance_scene().teleport_destination) {}
  void wait() {
    runtime = owner.owners_.world.runtime.begin(story::TickKind::Frame);
  }
  void actor_frame() {
    runtime = owner.owners_.world.runtime.begin_actor_frame(owner);
  }
};
Travel::Travel(Owners owners)
    : owners_(owners),
      movement_(owners.state, owners.movement_state,
                {owners.world, owners.following, owners.walking, owners.angles,
                 owners.collision, owners.area, owners.input,
                 owners.peripherals}) {
  auto &o = owners_;
  auto &w = o.world;
  require(o.destinations.version() == w.party.version() &&
              o.map_load.uses(w.runtime, w.actors, w.enemies, w.interactions,
                              w.spawn, w.windows, w.scene_colors) &&
              o.relocation.uses(w.runtime, w.actors, w.party) &&
              o.npc_commands.uses(w.actors) &&
              o.presentation.display_fade() == &o.fade &&
              o.presentation.frame_display() == &o.frames,
          "PSI travel requires the actual map, relocation, scene and display "
          "owners");
}
bool Travel::uses(const story::Scene &scene) const noexcept {
  return &owners_.world.runtime.scene() == &scene;
}
void Travel::freeze() {
  for (unsigned role = 0; role < 23; ++role)
    owners_.world.actors.set_authored_pause(role, false, false);
}
void Travel::apply(story::ActorFramePhase phase) {
  require(active_ && !failed_,
          "Teleport actor frame lost its actual travel continuation");
  if (phase == story::ActorFramePhase::BeforeScreen &&
      active_->state_->freeze_after_actors)
    freeze();
}
void Travel::callbacks(ActorTickCallback leader, ActorTickCallback follower) {
  auto &actors = owners_.world.actors;
  for (unsigned role = 23; role < 30; ++role) {
    actors.set_authored_tick_callback(role, role == 23 ? leader : follower);
    // SET_PARTY_TICK_CALLBACKS writes the complete bank word, clearing both
    // source pause bits, including dormant retained reserved roles.
    actors.set_authored_pause(role, true, true);
  }
}
std::unique_ptr<Travel::Operation>
Travel::begin(story::BattlePublication *battle) {
  auto &o = owners_;
  auto &w = o.world;
  require(!active_ && !failed_, "PSI travel is failed or busy");
  w.runtime.require_idle();
  require(w.session.teleport_style >= 1 && w.session.teleport_style <= 5,
          "PSI travel style lacks its complete authored movement owner");
  require(w.actors.appearance_scene().teleport_destination != 0,
          "PSI travel requires its actual pending destination");
  (void)o.destinations.destination(
      w.actors.appearance_scene().teleport_destination);
  require(!o.map_load.busy() && !o.map_load.failed() && !o.relocation.busy() &&
              !o.relocation.failed() &&
              (w.clock.effective_interrupt_mask() & 0x80) && !w.queue.failed(),
          "PSI travel content or publication owner is unavailable");
  require(w.runtime.scene().publication() ==
              (battle
                   ? static_cast<story::ScenePublication *>(battle)
                   : static_cast<story::ScenePublication *>(&o.presentation)),
          "PSI travel lost its actual entry publication owner");
  if (battle)
    require(w.session.teleport_style == 3,
            "Battle travel requires its authored instant PSI style");
  require(bool(w.actors.actor_for_role(23)) &&
              bool(w.actors.actor_for_role(w.formation.current_leader_role)),
          "PSI travel lacks its actual controller and formation leader");
  auto result = std::unique_ptr<Operation>(
      new Operation(std::make_unique<Operation::State>(*this, battle)));
  active_ = result.get();
  return result;
}
Travel::Operation::Operation(std::unique_ptr<State> state)
    : state_(std::move(state)) {}
Travel::Operation::~Operation() {
  if (state_->owner.active_ == this) {
    state_->owner.active_ = nullptr;
    state_->owner.failed_ = true;
  }
}
WorldRuntime::Operation *Travel::Operation::runtime_operation() noexcept {
  return state_->runtime.get();
}
bool Travel::Operation::complete() const noexcept { return state_->done; }
bool Travel::Operation::successful() const {
  require(complete(), "PSI travel result requested before completion");
  return state_->success;
}
dialogue::Progress Travel::Operation::advance(unsigned budget) {
  auto &s = *state_;
  auto &o = s.owner.owners_;
  auto &w = o.world;
  require(!s.owner.failed_ && !s.executing,
          "PSI travel is failed or reentrant");
  if (s.done)
    return dialogue::Progress::Finished;
  s.executing = true;
  try {
    while (budget--) {
      if (s.runtime) {
        const auto progress = s.runtime->advance(1);
        if (progress == dialogue::Progress::Suspended) {
          s.executing = false;
          return progress;
        }
        if (progress != dialogue::Progress::Finished)
          continue;
        s.runtime.reset();
      }
      if (s.map) {
        if (!s.map->advance(1))
          continue;
        s.map.reset();
      }
      if (s.relocation) {
        if (!s.relocation->advance(1))
          continue;
        s.relocation.reset();
      }
      switch (s.phase) {
      case 0:
        o.audio.stop_music();
        s.wait();
        s.phase = 1;
        break;
      case 1:
        s.owner.freeze();
        w.session.effect_in_progress = 1;
        o.state.speed = 0;
        w.session.teleport_speed = 0;
        o.state.state = 0;
        clear_party_sprite_blink(w.actors);
        s.owner.movement_.initialize();
        if (s.style == 3)
          o.state.state = 1;
        else {
          s.owner.movement_.phase(s.style == 1 || s.style == 5
                                      ? MovementPhase::Alpha
                                      : MovementPhase::Beta);
          s.owner.callbacks(ActorTickCallback::TeleportLeader,
                            ActorTickCallback::TeleportFollower);
          o.audio.change_music(13, w.clock.disabled_transitions);
        }
        s.phase = 2;
        break;
      case 2:
        if (o.state.state == 0) {
          s.freeze_after_actors = true;
          s.actor_frame();
          break;
        }
        s.freeze_after_actors = false;
        if (o.state.state == 1) {
          s.success = true;
          s.phase = 3;
        } else if (o.state.state == 2)
          s.phase = 20;
        else
          s.phase = 30;
        break;
      case 3:
        if (s.style != 3) {
          for (unsigned role = 24; role < 30; ++role)
            w.actors.set_authored_collision_object(role, -32768);
          s.owner.movement_.prepare_departure();
          s.owner.callbacks(ActorTickCallback::TeleportLeader,
                            ActorTickCallback::TeleportFollower);
          o.fade.begin_out(1, 4);
        }
        s.phase = 4;
        break;
      case 4:
        if (s.style != 3 && o.fade.active()) {
          s.actor_frame();
          break;
        }
        for (unsigned flag = 1; flag <= 10; ++flag)
          w.windows.state().set_flag(flag, false);
        {
          const auto &target = o.destinations.destination(s.destination);
          o.map_state.teleport_tile_x = target.tile_x;
          o.map_state.teleport_tile_y = target.tile_y;
          s.position = {
              std::uint16_t((target.tile_x << 3) + (s.style == 3 ? 0 : 316)),
              std::uint16_t(target.tile_y << 3)};
        }
        o.music_state.current_map_track = 0xffff;
        o.map_state.loaded_combination.reset();
        o.map_state.loaded_palette.reset();
        if (s.battle)
          w.runtime.return_world_publication(*s.battle, o.presentation, o.fade);
        o.layer.value = 9;
        apply_world_layer_configuration(o.layers, o.layer, o.visual);
        o.layout.mode = 1;
        o.layout.maps = {0x71, 0xb1, 0xf8, o.layout.maps[3]};
        o.layout.graphics = {0x20,
                             std::uint8_t((o.layout.graphics[1] & 0xf0) | 6)};
        o.music.select(s.position.x, s.position.y);
        s.map = o.map_load.begin(s.position);
        s.phase = 5;
        break;
      case 5:
        s.relocation = o.relocation.begin(s.position, 6);
        s.phase = 6;
        break;
      case 6:
        o.music.apply_sector();
        w.runtime.begin_refresh(
            {std::uint16_t(w.interactions.state().leader_x - 128),
             std::uint16_t(w.interactions.state().leader_y - 112)});
        s.phase = 7;
        break;
      case 7:
        if (!w.runtime.advance_streaming(1))
          break;
        o.npc_commands.drain_created();
        w.runtime.refresh_world_capture();
        if (s.style == 3) {
          auto &scene = w.actors.scene();
          scene.camera_x = std::uint16_t(w.interactions.state().leader_x - 128);
          scene.camera_y = std::uint16_t(w.interactions.state().leader_y - 112);
          o.fade.begin_in(1, 1);
          s.phase = 8;
        } else {
          for (unsigned record = 0; record < 6; ++record)
            w.formation.selected_styles[record] = 0xffff;
          for (unsigned role = 24; role < 30; ++role)
            if (const auto id = w.actors.actor_for_role(role))
              require(bool(o.following.prepare_with_style(*id, 0)),
                      "Teleport arrival lacks its actual party artwork");
          s.owner.movement_.prepare_arrival();
          s.owner.callbacks(ActorTickCallback::TeleportLeader,
                            ActorTickCallback::TeleportFollower);
          o.audio.change_music(135, w.clock.disabled_transitions);
          s.count = 0;
          s.phase = 9;
        }
        break;
      case 8:
        if (o.fade.active()) {
          s.actor_frame();
          break;
        }
        s.phase = 12;
        break;
      case 9:
        if (s.count++ < 30) {
          s.wait();
          break;
        }
        o.fade.begin_in(1, 4);
        s.phase = 10;
        break;
      case 10:
        if (o.state.speed >> 16) {
          s.actor_frame();
          break;
        }
        w.actors.scene().camera_x =
            std::uint16_t(w.interactions.state().leader_x - 128);
        w.actors.scene().camera_y =
            std::uint16_t(w.interactions.state().leader_y - 112);
        s.phase = 12;
        break;
      case 12:
        if (s.style == 5) {
          w.actors.set_authored_pause(23, false, false);
          for (unsigned i = 0; i < w.party.party_count; ++i)
            w.actors.set_authored_pause(w.formation.roles.at(i), false, false);
          w.queue.queue().enqueue(8, o.destinations.mastery_message());
        }
        s.phase = 30;
        break;
      case 20:
        w.clock.disabled_transitions = 1;
        o.audio.change_music(14, w.clock.disabled_transitions);
        for (unsigned role = 24; role < 30; ++role)
          w.actors.set_authored_variable(
              role, 7,
              std::uint16_t(w.actors.authored_variable(role, 7) | 0x8000));
        s.owner.movement_.phase(MovementPhase::Failure);
        s.owner.callbacks(ActorTickCallback::TeleportLeader,
                          ActorTickCallback::TeleportFailureFollower);
        w.party.party_status = 1;
        s.count = 0;
        s.phase = 21;
        break;
      case 21:
        if (s.count++ < 180) {
          s.actor_frame();
          break;
        }
        w.party.party_status = 0;
        w.clock.disabled_transitions = 0;
        s.count = 0;
        s.phase = 22;
        break;
      case 22:
        if (s.count++ < 10) {
          s.actor_frame();
          break;
        }
        s.phase = 30;
        break;
      case 30:
        s.owner.callbacks(ActorTickCallback::WorldMaintenance,
                          ActorTickCallback::PartyFollower);
        for (unsigned role = 24; role < 30; ++role) {
          w.actors.set_authored_variable(role, 3, 8);
          w.actors.set_authored_variable(
              role, 7,
              std::uint16_t(w.actors.authored_variable(role, 7) & 0xf7ff));
          w.actors.set_authored_collision_object(
              role,
              std::uint16_t(w.actors.authored_behavior(role).collision_object) &
                  0x7fff);
          w.formation.selected_styles[role - 24] = 0xffff;
        }
        o.audio.change_music(o.music_state.next_track,
                             w.clock.disabled_transitions);
        w.interactions.set_actors_paused(false);
        w.session.effect_in_progress = 0;
        o.state.speed = 0;
        w.session.teleport_speed = 0;
        w.actors.appearance_scene().intangibility_ticks = 0;
        w.actors.appearance_scene().teleport_destination = 0;
        s.phase = 99;
        break;
      case 99:
        s.done = true;
        s.owner.active_ = nullptr;
        s.executing = false;
        return dialogue::Progress::Finished;
      default:
        throw std::logic_error("Invalid PSI travel phase");
      }
    }
    s.executing = false;
    return dialogue::Progress::BudgetExhausted;
  } catch (...) {
    s.executing = false;
    s.owner.failed_ = true;
    throw;
  }
}
} // namespace eb::native::world::teleport
