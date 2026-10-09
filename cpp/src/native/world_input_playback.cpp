// Source: C083E3, C083B8 and system/read_joypad.asm. The following C08496
// processed-pad reducer has one existing authoritative implementation.
#include "eb/native/world_input_playback.hpp"
#include "eb/native/npcs/interaction.hpp"
#include "eb/native/story/input.hpp"
#include "eb/native/world_generated_input.hpp"
#include <stdexcept>
#include <utility>

namespace eb::native {
WorldInputPlayback::WorldInputPlayback(npcs::InteractionState &interaction,
                                       story::InputState &input,
                                       WorldRawInputState initial)
    : interaction_(interaction), input_(input), state_(initial) {
  if (active())
    throw std::invalid_argument(
        "Native input playback needs an installed sequence");
}
bool WorldInputPlayback::uses(const npcs::InteractionState &interaction,
                              const story::InputState &input) const noexcept {
  return &interaction_ == &interaction && &input_ == &input;
}
bool WorldInputPlayback::uses(
    const npcs::InteractionState &interaction) const noexcept {
  return &interaction_ == &interaction;
}
void WorldInputPlayback::store_source_raw_word(unsigned pad,std::uint16_t value) {
  if(state_.flags || pad>=state_.raw.size())
    throw std::logic_error("Source raw store requires inactive actual demo input");
  state_.raw[pad]=value;
}
WorldInputInstall WorldInputPlayback::install(
    std::shared_ptr<const GeneratedInputSequence> sequence) {
  if (active())
    return WorldInputInstall::AlreadyActive;
  if (!sequence)
    throw std::invalid_argument("Native input playback requires a sequence");
  const auto first = sequence->runs().front();
  if (!first.frames) {
    clear_flags();
    return WorldInputInstall::Empty;
  }
  interaction_.demo_frames = first.frames;
  state_.initial_pad = first.pad;
  sequence_ = std::move(sequence);
  run_index_ = 0;
  state_.raw.fill(first.pad);
  state_.flags |= playback_flag;
  return WorldInputInstall::Installed;
}
void WorldInputPlayback::clear_flags() noexcept { state_.flags = 0; }
void WorldInputPlayback::read(std::array<std::uint16_t, 2> host) {
  if (active()) {
    // Installed immutable sequences always contain a final zero run. Check a
    // fallible boundary before changing its borrowed countdown, even if a
    // caller changed that countdown after playback reached its terminator.
    const auto remaining = std::uint16_t(interaction_.demo_frames - 1);
    if (!remaining && run_index_ + 1 >= sequence_->runs().size())
      throw std::logic_error("Native input playback exhausted its sequence");
    interaction_.demo_frames = remaining;
    if (remaining)
      return;
    const auto next = sequence_->runs()[++run_index_];
    if (next.frames) {
      interaction_.demo_frames = next.frames;
      state_.raw.fill(next.pad);
      return;
    }
    state_.flags &= std::uint16_t(~playback_flag);
  }
  state_.raw = host;
}
void WorldInputPlayback::poll(std::array<std::uint16_t, 2> host,
                              std::uint16_t debug) {
  if (recording_required())
    throw std::logic_error(
        "Native raw input requires the demo recording service");
  read(host);
  story::poll_input(input_, state_.raw, debug);
}
} // namespace eb::native
