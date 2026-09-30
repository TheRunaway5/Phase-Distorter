#include "eb/native/world_door_transitions.hpp"
#include "eb/native/world_input_playback.hpp"
#include "eb/native/world_walking.hpp"
#include <stdexcept>

namespace eb::native {
namespace {
void require(bool ok, const char *message) {
  if (!ok)
    throw std::logic_error(message);
}
unsigned direction_index(unsigned direction) {
  if (direction >= 4)
    throw std::out_of_range("Door transition direction exceeds authored table");
  return direction;
}
std::uint16_t wrap(unsigned n) { return std::uint16_t(n); }
CollisionPoint offset(CollisionPoint point, CollisionPoint delta) {
  return {wrap(point.x + delta.x), wrap(point.y + delta.y)};
}
} // namespace
WorldDoorTransitionData::WorldDoorTransitionData(
    std::span<const std::uint8_t> bytes, GameVersion version)
    : version_(version) {
  if (version != GameVersion::US && version != GameVersion::JP)
    throw std::invalid_argument("Unsupported door transition region");
  const unsigned escalator = version == GameVersion::US ? 0x6e02 : 0x7030;
  const unsigned stairs = version == GameVersion::US ? 0x3e200 : 0x3e1ea;
  auto word = [&](unsigned at) {
    if (at >= bytes.size() || bytes.size() - at < 2)
      throw std::invalid_argument("Truncated door transition content");
    return std::uint16_t(bytes[at] | unsigned(bytes[at + 1]) << 8);
  };
  for (unsigned table = 0; table < escalator_.size(); ++table)
    for (unsigned i = 0; i < 4; ++i)
      escalator_[table][i] = word(escalator + table * 8 + i * 2);
  for (unsigned table = 0; table < stairs_.size(); ++table)
    for (unsigned i = 0; i < 4; ++i)
      stairs_[table][i] = word(stairs + table * 8 + i * 2);
  for (unsigned i = 0; i < 4; ++i)
    if (escalator_[2][i] >= 8 || stairs_[0][i] >= 8 || stairs_[1][i] >= 8)
      throw std::invalid_argument("Invalid door transition pad direction");
}
std::uint16_t WorldDoorTransitionData::escalator_offset(unsigned direction,
                                                        bool exit) const {
  return escalator_[exit ? 1 : 0][direction_index(direction)];
}
CollisionDirection
WorldDoorTransitionData::escalator_direction(unsigned direction) const {
  return CollisionDirection(escalator_[2][direction_index(direction)]);
}
CollisionPoint WorldDoorTransitionData::stair_offset(unsigned direction,
                                                     bool exit) const {
  const auto i = direction_index(direction);
  return {stairs_[exit ? 4 : 2][i], stairs_[exit ? 5 : 3][i]};
}
CollisionDirection WorldDoorTransitionData::stair_direction(unsigned direction,
                                                            bool exit) const {
  return CollisionDirection(stairs_[exit ? 1 : 0][direction_index(direction)]);
}
WorldDoorTransitions::WorldDoorTransitions(
    const WorldDoorTransitionData &data, const GeneratedInputData &generated,
    const WalkingData &walking, WorldInputPlayback &playback,
    WorldScheduler &scheduler, npcs::InteractionState &leader,
    WorldControlState &control, WorldNavigationState &navigation,
    WorldPartyState &party, WorldDoorTransitionState &state)
    : data_(data), generated_(generated), walking_(walking),
      playback_(playback), scheduler_(scheduler), leader_(leader),
      control_(control), navigation_(navigation), party_(party), state_(state) {
  require(data.version() == generated.version() &&
              data.version() == walking.version(),
          "Door transition content regions differ");
  require(playback.uses(leader),
          "Door transitions require the actual playback countdown owner");
  scheduler_.bind_callbacks(*this);
}
WorldDoorTransitions::~WorldDoorTransitions() {
  scheduler_.clear_callbacks(*this);
}
bool WorldDoorTransitions::failed() const noexcept {
  return failed_ || scheduler_.failed() || !scheduler_.bound_to(*this);
}
bool WorldDoorTransitions::uses(const npcs::InteractionState &leader,
                                const WorldControlState &control,
                                const WorldNavigationState &navigation,
                                const story::InputState &input) const noexcept {
  return &leader_ == &leader && &control_ == &control &&
         &navigation_ == &navigation && playback_.uses(leader, input);
}
void WorldDoorTransitions::check() const {
  require(!failed(), "Native door transition owner failed");
  require(scheduler_.bound_to(*this),
          "Native door transition callback owner changed");
}
void WorldDoorTransitions::check_callback(
    const WorldScheduler &scheduler) const {
  check();
  require(&scheduler == &scheduler_ && scheduler.processing(),
          "Door callback requires its actual scheduled frame phase");
}
void WorldDoorTransitions::schedule(std::uint16_t delay,
                                    WorldScheduledCallback callback) {
  require(scheduler_.schedule(delay, callback).has_value(),
          "Native scheduled door transitions exceeded four source task slots");
}
std::uint16_t WorldDoorTransitions::route(CollisionPoint target) {
  // Real US/JP callers establish Y fraction 63 in the preceding reset loop;
  // X reads uninitialized workspace and demonstrably changes path length.
  // Define that undefined X phase as zero, without retaining an emulated stack.
  return builder_.route(
      generated_, walking_,
      {{leader_.leader_x, leader_.leader_y}, target, {0, 63}});
}
void WorldDoorTransitions::install() {
  playback_.install(
      std::make_shared<const GeneratedInputSequence>(builder_.publish()));
}
void WorldDoorTransitions::execute(const WorldDoorTransitionRequest &request) {
  check();
  if (leader_.demo_frames)
    return;
  try {
    builder_.reset();
    switch (request.kind) {
    case WorldDoorTransitionKind::Escalator:
      escalator(request);
      break;
    case WorldDoorTransitionKind::Stairs:
      stairs(request);
      break;
    default:
      throw std::invalid_argument("Unknown native door transition kind");
    }
  } catch (...) {
    failed_ = true;
    throw;
  }
}
void WorldDoorTransitions::escalator(const WorldDoorTransitionRequest &r) {
  const bool exit = r.control & 0x8000;
  if ((leader_.walking_style == 12) != exit)
    return;
  const unsigned direction =
      (exit ? state_.escalator_entrance : r.control) >> 8;
  CollisionPoint target{
      wrap(unsigned(r.cell.x) * 8 + data_.escalator_offset(direction, exit)),
      wrap(unsigned(r.cell.y) * 8)};
  const auto facing = data_.escalator_direction(direction);
  if (exit)
    leader_.walking_style = 0;
  else {
    state_.escalator_entrance = r.control;
    leader_.leader_direction = std::uint16_t(facing);
  }
  leader_.movement_flags = 3;
  const auto frames = route(target);
  if (exit)
    builder_.repeat_direction(generated_, facing, 16);
  schedule(wrap(unsigned(frames) + 1),
           exit ? WorldScheduledCallback::EscalatorExit
                : WorldScheduledCallback::EscalatorEnter);
  install();
  if (exit)
    state_.escalator_entrance = 0;
  state_.escalator_target = target;
  navigation_.stairs_direction = 0xffff;
}
bool WorldDoorTransitions::can_enter_stairs(std::uint16_t control) {
  const unsigned facing = leader_.leader_direction;
  switch (control) {
  case 0x0000:
  case 0x0100:
    state_.automatic_direction = control ? 2 : 6;
    return !facing || (facing & 3);
  case 0x0200:
  case 0x0300:
    state_.automatic_direction = control == 0x0300 ? 2 : 6;
    return facing & 7;
  default:
    return false;
  }
}
void WorldDoorTransitions::stairs(const WorldDoorTransitionRequest &r) {
  const bool exit = leader_.walking_style != 0;
  if (!exit && !can_enter_stairs(r.control))
    return;
  const unsigned direction = r.control >> 8;
  const auto target =
      offset({wrap(unsigned(r.cell.x) * 8), wrap(unsigned(r.cell.y) * 8)},
             data_.stair_offset(direction, exit));
  if (!exit) {
    leader_.leader_direction = state_.automatic_direction;
    party_.projection.movement_mismatch = 0;
    leader_.movement_flags = 3;
    navigation_.stairs_direction = r.control & 0xff00;
  }
  auto frames = route(target);
  if (!frames)
    frames = 1;
  builder_.repeat_direction(generated_, data_.stair_direction(direction, exit),
                            exit ? 12 : 6);
  schedule(frames, exit ? WorldScheduledCallback::StairsExit
                        : WorldScheduledCallback::StairsEnter);
  state_.stairs_target = target;
  install();
}
void WorldDoorTransitions::snap(CollisionPoint target) {
  leader_.leader_x = target.x;
  leader_.leader_y = target.y;
  control_.x_fraction = control_.y_fraction = 0;
}
void WorldDoorTransitions::escalator_enter(WorldScheduler &scheduler) {
  check_callback(scheduler);
  leader_.walking_style = 12;
  leader_.movement_flags = 0;
  snap(state_.escalator_target);
}
void WorldDoorTransitions::escalator_exit(WorldScheduler &scheduler) {
  check_callback(scheduler);
  navigation_.stairs_direction = 0xffff;
  leader_.walking_style = 0;
  leader_.movement_flags = 0;
  snap(state_.escalator_target);
}
void WorldDoorTransitions::stairs_enter(WorldScheduler &scheduler) {
  check_callback(scheduler);
  const auto direction = navigation_.stairs_direction;
  const bool reached =
      !direction || direction == 256
          ? wrap(unsigned(state_.stairs_target.y) - 1) > leader_.leader_y
          : wrap(unsigned(state_.stairs_target.y) + 1) < leader_.leader_y;
  if (reached) {
    leader_.walking_style = 13;
    snap(state_.stairs_target);
  } else
    schedule(1, WorldScheduledCallback::StairsEnter);
}
void WorldDoorTransitions::stairs_exit(WorldScheduler &scheduler) {
  check_callback(scheduler);
  const auto direction = navigation_.stairs_direction;
  const bool reached = !direction || direction == 256
                           ? leader_.leader_y < state_.stairs_target.y
                           : leader_.leader_y > state_.stairs_target.y;
  if (reached) {
    navigation_.stairs_direction = 0xffff;
    leader_.walking_style = 0;
    leader_.movement_flags = 0;
    snap(state_.stairs_target);
  } else
    schedule(1, WorldScheduledCallback::StairsExit);
}
} // namespace eb::native
