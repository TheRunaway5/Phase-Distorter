#include "eb/native/world_enemy_movement.hpp"
#include "eb/native/world_battle_entry.hpp"
#include <bit>
#include <stdexcept>

namespace eb::native {
namespace {
std::uint16_t wrap(unsigned value) { return std::uint16_t(value); }
std::int16_t signed_word(std::uint16_t value) {
  return std::bit_cast<std::int16_t>(value);
}
bool near(std::uint16_t position, std::uint16_t destination) {
  const auto delta = wrap(unsigned(position) - destination);
  const auto absolute = signed_word(delta) < 0 ? wrap(0u - delta) : delta;
  // CLC; SBC from three tests (2-absolute) for signed negative. The wrapped
  // absolute value of -32768 remains negative and passes this source test.
  return signed_word(absolute) <= 2;
}
} // namespace
EnemyMovementData::EnemyMovementData(std::span<const std::uint8_t> image,
                                     GameVersion version)
    : version_(version) {
  if (version != GameVersion::US && version != GameVersion::JP)
    throw std::invalid_argument("Unknown enemy movement content region");
  const unsigned x = version == GameVersion::US ? 0x4205d : 0x41fa9;
  const unsigned y = version == GameVersion::US ? 0x420bd : 0x42009;
  if (image.size() < y + 128)
    throw std::invalid_argument("Truncated enemy movement component tables");
  for (unsigned i = 0; i < 64; ++i) {
    x_[i] =
        std::uint16_t(image[x + i * 2] | unsigned(image[x + i * 2 + 1]) << 8);
    y_[i] =
        std::uint16_t(image[y + i * 2] | unsigned(image[y + i * 2 + 1]) << 8);
    if (x_[i] > 256 || y_[i] > 256)
      throw std::invalid_argument("Invalid authored angle component factor");
  }
}
std::array<std::uint16_t, 2>
EnemyMovementData::components(std::uint16_t angle,
                              std::uint16_t speed) const noexcept {
  const unsigned index = angle >> 10;
  auto x = wrap(unsigned(speed) * x_[index] >> 8);
  auto y = wrap(unsigned(speed) * y_[index] >> 8);
  if (index < 16 || index >= 49)
    y = wrap(0u - y);
  if (index >= 33)
    x = wrap(0u - x);
  return {x, y};
}
std::array<std::uint32_t, 2>
EnemyMovementData::velocity(std::uint16_t angle,
                            std::uint16_t speed) const noexcept {
  const auto raw = components(angle, speed);
  const auto fixed = [](std::uint16_t value) {
    const auto extended =
        value & 0x8000 ? 0xffff0000u | value : unsigned(value);
    // The original negative fractional conversion fills the low byte with FF,
    // including negative whole components. It is not plain 8.8 -> 16.16 shift.
    return (extended << 8) | (value & 0x8000 ? 0xffu : 0u);
  };
  return {fixed(raw[0]), fixed(raw[1])};
}
WorldEnemyMovement::WorldEnemyMovement(const EnemyMovementData &data,
                                       const GeneratedInputData &angles,
                                       ActorWorld &actors,
                                       WorldPathfinding &paths,
                                       const WorldCollision &collision)
    : data_(data), angles_(angles), actors_(actors), paths_(paths),
      collision_(collision) {
  if (data.version() != actors.version() ||
      angles.version() != actors.version() || !paths.uses(actors, collision))
    throw std::invalid_argument(
        "Enemy path movement requires matching native owners");
}
bool WorldEnemyMovement::uses(const ActorWorld &actors,
                              const WorldCollision &collision,
                              const WorldMapArea &area,
                              const WorldPartyState &formation,
                              const party::State &party) const noexcept {
  return &actors_ == &actors && &collision_ == &collision &&
         paths_.uses(actors, collision, area, formation, party);
}
bool WorldEnemyMovement::uses(const WorldBattleEntry &entry) const noexcept {
  return entry.uses(paths_);
}
void WorldEnemyMovement::check() const {
  if (failed())
    throw std::logic_error("Native enemy path movement failed");
}
bool WorldEnemyMovement::uses(const ActorWorld &actors,
                              const WorldPathfinding &paths,
                              const WorldCollision &collision) const noexcept {
  return &actors_ == &actors && &paths_ == &paths && &collision_ == &collision;
}
CollisionPoint WorldEnemyMovement::target(ActorId id, unsigned shape_id) const {
  const auto point = paths_.current_point(id);
  const auto &shape = collision_.shape(shape_id);
  const auto top = paths_.top_left();
  return {wrap((unsigned(top.x) + point.x) * 8 + shape.anchor_x),
          wrap((unsigned(top.y) + point.y) * 8 + shape.anchor_y -
               shape.surface_offset_y)};
}
void WorldEnemyMovement::tick(ActorId id) {
  check();
  try {
    auto &actor = actors_.actor(id);
    if (actor.behavior.path_state != 0xffff)
      return;
    const unsigned shape = actor.appearance_context.shape;
    const CollisionPoint position{
        std::uint16_t(actor.action().position[0] >> 16),
        std::uint16_t(actor.action().position[1] >> 16)};
    auto destination = target(id, shape);
    if (near(position.x, destination.x) && near(position.y, destination.y)) {
      if (paths_.consume_followed_point(id))
        destination = target(id, shape);
    }
    if (paths_.remaining(id)) {
      const auto angle = angles_.angle(position, destination);
      const auto velocity =
          data_.velocity(angle, actor.behavior.movement_speed);
      actor.action().velocity[0] = velocity[0];
      actor.action().velocity[1] = velocity[1];
      const auto facing = wrap(unsigned(angle) + 0x1000) / 0x2000;
      actor.behavior.moving_direction = facing;
      actor.behavior.direction = facing;
    } else {
      actor.behavior.path_state = 0;
      actor.behavior.obstacle_flags |= 0x80;
    }
  } catch (...) {
    failed_ = true;
    throw;
  }
}
bool WorldEnemyMovement::consume_waypoint(ActorId id) {
  check();
  try {
    auto &actor = actors_.actor(id);
    if (!paths_.remaining(id))
      return false;
    const auto point = target(id, actor.appearance_context.shape);
    paths_.consume_script_point(id);
    actor.action().variables[6] = point.x;
    actor.action().variables[7] = point.y;
    return true;
  } catch (...) {
    failed_ = true;
    throw;
  }
}
} // namespace eb::native
