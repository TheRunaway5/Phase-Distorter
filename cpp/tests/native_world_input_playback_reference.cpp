// Execute the complete original C083E3 / READ_JOYPAD / C08496 routines.
// Flat oracle memory supplies sampled hardware register words and readiness;
// no playback, recording-off, or processed-input instruction is intercepted.
#include "eb/main_cpu_65816.hpp"
#include "eb/native/npcs/interaction.hpp"
#include "eb/native/story/input.hpp"
#include "eb/native/world_generated_input.hpp"
#include "eb/native/world_input_playback.hpp"
#include "generated_assets.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

namespace {
using namespace eb::native;
std::string context;
void require(bool value, const char *message) {
  if (!value)
    throw std::runtime_error(std::string(message) + ": " + context);
}
auto sequence(std::initializer_list<GeneratedInputRun> runs) {
  return std::make_shared<const GeneratedInputSequence>(
      std::vector<GeneratedInputRun>(runs));
}
struct Original {
  std::vector<std::uint8_t> memory = std::vector<std::uint8_t>(1 << 24);
  eb::MainCpu65816 cpu;
  unsigned debug_address, activity_address;
  std::uint64_t calls{}, instructions{}, comparisons{}, fields{};
  std::uint32_t owned_base{0x11223344};
  explicit Original(eb::GameVersion region)
      : cpu(memory, region),
        debug_address(region == eb::GameVersion::US ? 0x7e436c : 0x7e46f2),
        activity_address(region == eb::GameVersion::US ? 0xa34 : 0xa2a) {
    cpu.set_runtime(eb::MainCpuRuntime::Legacy);
    cpu.observe_memory_write = [&](std::uint32_t at, std::uint8_t) {
      require(
          (at >= 0x1f00 && at < 0x2000) || (at >= 0x65 && at < 0x85) ||
              at == activity_address || at == activity_address + 1,
          "Original playback wrote outside raw/processed input and call stack");
    };
  }
  void word(unsigned at, unsigned value) {
    memory.at(at) = std::uint8_t(value);
    memory.at(at + 1) = std::uint8_t(value >> 8);
  }
  unsigned word(unsigned at) const {
    return memory.at(at) | unsigned(memory.at(at + 1)) << 8;
  }
  void dword(unsigned at, unsigned value) {
    word(at, value);
    word(at + 2, value >> 16);
  }
  unsigned dword(unsigned at) const { return word(at) | word(at + 2) << 16; }
  void seed(const WorldInputPlayback &native,
            const npcs::InteractionState &world,
            const story::InputState &input) {
    for (unsigned pad = 0; pad < 2; ++pad) {
      word(0x77 + pad * 2, native.state().raw[pad]);
      word(0x65 + pad * 2, input.state[pad]);
      word(0x69 + pad * 2, input.held[pad]);
      word(0x6d + pad * 2, input.pressed[pad]);
      word(0x71 + pad * 2, input.repeat_timer[pad]);
    }
    word(0x7b, native.state().flags);
    owned_base = 0x11223344;
    dword(0x7d, owned_base);
    word(0x81, world.demo_frames);
    word(0x83, native.state().initial_pad);
    word(activity_address, input.player_activity);
    word(0x4212, 0); // Hardware sample is ready before the source reader runs.
  }
  void invoke(unsigned entry, bool long_call) {
    cpu.emulation_mode = false;
    cpu.status_register = eb::MainCpu65816::InterruptDisable;
    cpu.direct_page = 0;
    cpu.data_bank = 0;
    cpu.stack_pointer = 0x1fff;
    cpu.program_counter = 0xc0ff00;
    cpu.accumulator = 0xabcd;
    cpu.x_index = 0x1234;
    cpu.y_index = 0x5678;
    const auto returned = long_call ? 0xc0ff04u : 0xc0ff03u;
    if (long_call)
      cpu.execute_instruction<0x22>(entry, 4);
    else
      cpu.execute_instruction<0x20>(entry & 0xffff, 3);
    for (unsigned step = 0; step < 1000; ++step) {
      if (cpu.program_counter == returned && cpu.stack_pointer == 0x1fff) {
        require(cpu.direct_page == 0 && cpu.data_bank == 0,
                "Original input routine changed caller page/bank");
        ++calls;
        return;
      }
      cpu.step_instruction();
      ++instructions;
    }
    throw std::runtime_error("Original input routine did not return: " +
                             cpu.describe_registers());
  }
  void compare(const WorldInputPlayback &native,
               const npcs::InteractionState &world,
               const story::InputState &input) {
    for (unsigned pad = 0; pad < 2; ++pad) {
      require(word(0x77 + pad * 2) == native.state().raw[pad],
              "Raw pad differs");
      require(word(0x65 + pad * 2) == input.state[pad] &&
                  word(0x69 + pad * 2) == input.held[pad] &&
                  word(0x6d + pad * 2) == input.pressed[pad] &&
                  word(0x71 + pad * 2) == input.repeat_timer[pad],
              "Processed/pressed/held/repeat input differs");
      fields += 5;
    }
    require(word(0x7b) == native.state().flags,
            "Recording/playback flags differ");
    require(word(0x81) == world.demo_frames, "Shared demo countdown differs");
    require(word(0x83) == native.state().initial_pad, "Initial pad differs");
    require(dword(0x7d) == owned_base + 3 * native.run_index(),
            "Playback cursor differs");
    require(word(activity_address) == input.player_activity,
            "Player activity differs");
    fields += 5;
    ++comparisons;
  }
  void install(WorldInputPlayback &native, const npcs::InteractionState &world,
               const story::InputState &input,
               std::shared_ptr<const GeneratedInputSequence> content,
               unsigned base = 0x7e3000) {
    for (unsigned i = 0; i < content->runs().size(); ++i) {
      memory.at(base + i * 3) = content->runs()[i].frames;
      word(base + i * 3 + 1, content->runs()[i].pad);
    }
    dword(0x0e, base);
    invoke(0xc083e3, true);
    const auto result = native.install(std::move(content));
    if (result == WorldInputInstall::Installed)
      owned_base = base;
    compare(native, world, input);
  }
  void read(WorldInputPlayback &native, const npcs::InteractionState &world,
            const story::InputState &input, std::array<std::uint16_t, 2> host,
            bool full_poll, std::uint16_t debug = 0) {
    word(0x4218, host[0]);
    word(0x421a, host[1]);
    word(debug_address, debug);
    invoke(full_poll ? 0xc08496 : 0xc0841b, false);
    if (full_poll)
      native.poll(host, debug);
    else
      native.read(host);
    compare(native, world, input);
  }
};
void run(const eb::GameAssets &assets) {
  Original original(assets.version);
  unsigned installs{}, raw_reads{}, full_polls{}, clears{};
  const auto empty = sequence({{0, 0x1234}, {99, 0x7777}, {0, 0xaaaa}});
  const auto route =
      sequence({{2, 0x018f}, {1, 0x0843}, {3, 0x8000}, {0, 0xbeef}});
  for (unsigned flags : {0u, 1u, 0x2000u, 0x3fffu, 0x8000u, 0x8001u, 0xbfffu}) {
    for (bool first_empty : {false, true}) {
      context = "install flags=" + std::to_string(flags) +
                " empty=" + std::to_string(first_empty);
      npcs::InteractionState world;
      world.demo_frames = 0xfedc;
      story::InputState input;
      input.state = {0xabcd, 0x4321};
      input.repeat_timer = {0xfffe, 0x8000};
      WorldInputPlayback native(
          world, input, {{0x1234, 0x5678}, std::uint16_t(flags), 0x9abc});
      original.seed(native, world, input);
      original.install(native, world, input, first_empty ? empty : route);
      ++installs;
      original.install(native, world, input, route, 0x7e4000);
      ++installs;
      original.install(native, world, input, empty, 0x7e5000);
      ++installs;
      for (unsigned i = 0; i < 12; ++i) {
        original.read(native, world, input,
                      {std::uint16_t(i * 79), std::uint16_t(~i)}, false);
        ++raw_reads;
      }
      original.install(native, world, input, empty, 0x7e5000);
      ++installs;
      original.invoke(0xc083b8, true);
      native.clear_flags();
      original.compare(native, world, input);
      ++clears;
    }
  }
  // Exhaustive live countdown coverage compares the complete original reader,
  // including the externally observable active-zero -> FFFF wrap.
  for (unsigned countdown = 0; countdown <= 0xffff; ++countdown) {
    context = "countdown=" + std::to_string(countdown);
    npcs::InteractionState world;
    story::InputState input;
    WorldInputPlayback native(world, input, {{0x1234, 0x5678}, 0x8001, 0xbeef});
    original.seed(native, world, input);
    original.install(native, world, input, route);
    ++installs;
    world.demo_frames = std::uint16_t(countdown);
    original.word(0x81, countdown);
    original.read(native, world, input, {0xffff, 0x1234}, false);
    ++raw_reads;
  }
  // Complete multi-frame reader -> recording-off -> processed-input execution:
  // expiry on this sample, short/long runs, ignored raw nibbles, held-repeat,
  // controller merge/debug changes and host takeover after a zero run.
  for (unsigned flags : {0u, 1u, 0x3fffu})
    for (unsigned duration : {1u, 2u, 3u, 254u, 255u})
      for (unsigned variant = 0; variant < 8; ++variant) {
        const auto content =
            sequence({{std::uint8_t(duration), std::uint16_t(0x0800 | variant)},
                      {1, 0x010f},
                      {3, 0x2000},
                      {255, 0x80f0},
                      {0, 0xffff},
                      {2, 0x7777},
                      {0, 0}});
        context = "stream flags=" + std::to_string(flags) +
                  " duration=" + std::to_string(duration) +
                  " variant=" + std::to_string(variant);
        npcs::InteractionState world;
        story::InputState input;
        input.state = {std::uint16_t(variant * 127),
                       std::uint16_t(variant * 811)};
        input.held = {0xabcd, 0x1234};
        input.pressed = {0x8000, 0x4000};
        input.repeat_timer = {std::uint16_t(variant),
                              std::uint16_t(3 * variant)};
        input.player_activity = 0xfffa;
        WorldInputPlayback native(
            world, input, {{0x1234, 0x5678}, std::uint16_t(flags), 0x9abc});
        original.seed(native, world, input);
        original.install(native, world, input, content);
        ++installs;
        for (unsigned frame = 0; frame < 600; ++frame) {
          const auto debug = std::uint16_t(variant < 4        ? 0
                                           : (frame / 97) & 1 ? 0x0100
                                                              : 0);
          const std::array host{
              std::uint16_t((frame / 37) * 0x187 | (frame & 15)),
              std::uint16_t((frame / 19) * 0x831 | ((frame + 3) & 15))};
          original.read(native, world, input, host, true, debug);
          ++full_polls;
        }
      }
  {
    context = "long authored pad sequence";
    std::vector<GeneratedInputRun> runs;
    for (unsigned i = 0; i < 129; ++i)
      runs.push_back({1, std::uint16_t(i * 19)});
    runs.push_back({0, 0});
    npcs::InteractionState world;
    story::InputState input;
    WorldInputPlayback native(world, input);
    original.seed(native, world, input);
    original.install(
        native, world, input,
        std::make_shared<const GeneratedInputSequence>(std::move(runs)));
    ++installs;
    for (unsigned frame = 0; frame < 135; ++frame) {
      original.read(native, world, input, {0x1234, 0x5678}, true);
      ++full_polls;
    }
  }
  std::cout
      << "PASS " << assets.title << ": " << installs
      << " original installations, " << raw_reads << " original raw reads, "
      << full_polls << " complete original input polls, " << clears
      << " explicit clears, " << original.instructions
      << " source instructions, " << original.fields
      << " compared fields; recording-active full polls remain explicit\n";
}
} // namespace
int main(int argc, char **argv) {
  try {
    require(argc >= 2, "native_world_input_playback_reference pack.ebpak ...");
    for (int i = 1; i < argc; ++i)
      run(eb::load_game_assets(argv[i], eb::asset_profiles()));
  } catch (const std::exception &error) {
    std::cerr << error.what() << '\n';
    return 1;
  }
}
