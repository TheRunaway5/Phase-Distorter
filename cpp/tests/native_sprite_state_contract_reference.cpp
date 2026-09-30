// Test-only source oracle for six precisely located dead artwork results.
// The actual interpreter, first-frame refresh, area predicate and conditional
// execute normally in both ownership modes. No service is intercepted here.
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include "generated_profile.hpp"
#include "native_sprite_state_contract.hpp"
#include <algorithm>
#include <array>
#include <iostream>
#include <memory>
#include <optional>
#include <stdexcept>
#include <vector>

namespace {
void require(bool value, const char *message) {
  if (!value)
    throw std::runtime_error(message);
}
unsigned normalized(unsigned pc) { return pc | 0xc00000; }
enum class Context {
  FrameArea,
  Animation,
  SlowFrameArea,
  ChildFrame,
  Stationary,
  Path
};
struct ContextCase {
  Context kind;
  unsigned us_cursor, jp_cursor, maximum_sleep, stack_bytes, us_service,
      jp_service;
};
constexpr std::array contexts{
    ContextCase{Context::FrameArea, 0xc3a171, 0xc3a161, 7, 0, 0x40015, 0x40015},
    ContextCase{Context::Animation, 0xc3a07c, 0xc3a072, 0, 0, 0xa6e3, 0xa6c2},
    ContextCase{Context::SlowFrameArea, 0xc3a1fd, 0xc3a1ed, 15, 0, 0x40015,
                0x40015},
    ContextCase{Context::ChildFrame, 0xc3a236, 0xc3a226, 7, 2, 0xa4a8, 0xa487},
    ContextCase{Context::Stationary, 0xc3a2ba, 0xc3a2aa, 7, 0, 0xc6b6, 0xc698},
    ContextCase{Context::Path, 0xc3ab5e, 0xc3ab4e, 0, 2, 0xa8dc, 0xa8bb},
};
using SemanticState = std::vector<unsigned>;
struct Oracle {
  std::unique_ptr<eb::SnesBus> bus;
  eb::MainCpu65816 cpu;
  const eb::SourceProfile &profile;
  bool jp;
  std::optional<unsigned> observed_predicate;
  explicit Oracle(const eb::GameAssets &assets, bool native)
      : bus(std::make_unique<eb::SnesBus>(assets.image, assets.version)),
        cpu(*bus), profile(eb::source_profile(assets.version)),
        jp(assets.version == eb::GameVersion::JP) {
    if (native)
      bus->enable_native_sprite_runtime(true);
    std::fill_n(bus->work_ram.begin() + (jp ? 0x4a04 : 0x467e), 0x380, 0xff);
    put(jp ? 0x0a46 : 0x0a50, 0xffff);
    put(jp ? 0x0a48 : 0x0a52, 0);
    put(jp ? 0x0a4a : 0x0a54, 0);
    for (unsigned i = 0; i < 30; ++i) {
      put(profile.wram_entity_next + i * 2, i == 29 ? 0xffff : i * 2 + 2);
      put(profile.wram_entity_script_ids + i * 2, 0xffff);
    }
    for (unsigned i = 0; i < 70; ++i)
      put((jp ? 0x1250 : 0x125a) + i * 2, i == 69 ? 0xffff : i * 2 + 2);
    bus->work_ram[0x0d] = 0x80; // Source uses immediate artwork publication.
    configure_cpu();
    cpu.accumulator = 1;
    cpu.x_index = 1;
    cpu.y_index = 0;
    put(0x1e0e, 100);
    put(0x1e10, 100);
    call(jp ? 0xc01e5f : 0xc01e49, true);
    require(cpu.accumulator == 0, "Source CREATE did not create actor zero");
  }
  Oracle(const Oracle &other)
      : bus(std::make_unique<eb::SnesBus>(*other.bus)), cpu(*bus),
        profile(other.profile), jp(other.jp) {
    configure_cpu();
  }
  void configure_cpu() {
    cpu.set_runtime(eb::MainCpuRuntime::Legacy);
    cpu.emulation_mode = false;
    cpu.status_register = eb::MainCpu65816::InterruptDisable;
    cpu.data_bank = 0x7e;
    cpu.direct_page = 0x1e00;
    cpu.stack_pointer = 0x1fff;
  }
  unsigned word(unsigned at) const {
    return bus->work_ram.at(at) | unsigned(bus->work_ram.at(at + 1)) << 8;
  }
  void put(unsigned at, unsigned value) {
    bus->work_ram.at(at) = value;
    bus->work_ram.at(at + 1) = value >> 8;
  }
  unsigned temporary() const { return word(jp ? 0x150c : 0x1516); }
  void call(unsigned target, bool far) {
    cpu.program_counter = 0xc0ff00;
    cpu.execute_instruction<0x20>(0xff20, 3);
    // Use an independent outer frame so the interpreter's normal near
    // return is checked with its actual stack boundary.
    const unsigned stack = cpu.stack_pointer;
    if (far)
      cpu.execute_instruction<0x22>(target, 4);
    else
      cpu.execute_instruction<0x20>(target & 0xffff, 3);
    const unsigned end = 0xc0ff20 + (far ? 4 : 3);
    for (unsigned steps = 0; steps < 200000; ++steps) {
      if (cpu.program_counter == end && cpu.stack_pointer == stack) {
        cpu.execute_instruction<0x60>(0, 1);
        require(cpu.stack_pointer == 0x1fff,
                "Continuation changed caller stack");
        return;
      }
      if (normalized(cpu.program_counter) == (jp ? 0xc0994a : 0xc0996b) ||
          normalized(cpu.program_counter) == (jp ? 0xc0993c : 0xc0995d)) {
        require(!observed_predicate,
                "Continuation visited an unexpected second conditional");
        observed_predicate = temporary();
      }
      cpu.step_instruction();
    }
    throw std::runtime_error("Artwork continuation failed to return: " +
                             cpu.describe_registers());
  }
  void seed(unsigned incoming, unsigned sleep, unsigned scene, unsigned surface,
            const ContextCase &context, unsigned path_caller = 0) {
    put(profile.wram_entity_animation_frame,
        context.kind == Context::Animation ? 2 : 1);
    put(profile.wram_entity_surface_flags, surface);
    put(jp ? 0x2ef4 : 0x2af6, 0);
    put(jp ? 0x1a38 : 0x1a42, 0);
    put(0x1e80, 0);
    put(0x1e88, 0);
    put(0x1e8a, 0);
    put(jp ? 0x13f4 : 0x13fe,
        (jp ? context.jp_cursor : context.us_cursor) & 0xffff);
    put(jp ? 0x1480 : 0x148a, 0xc3);
    put(jp ? 0x1368 : 0x1372, sleep);
    put(jp ? 0x12dc : 0x12e6, context.stack_bytes);
    // Actual switch-call and authored EVENT588/590 return destinations.
    const unsigned path_return =
        path_caller == 0 ? (jp ? 0x6b11 : 0x6b17) : (jp ? 0x6b72 : 0x6b78);
    put(jp ? 0x1598 : 0x15a2,
        context.kind == Context::Path ? path_return : (jp ? 0xa212 : 0xa222));
    put(jp ? 0x150c : 0x1516, incoming);
    put(profile.party_state.leader_x, scene == 0 ? 100 : 1000);
    put(profile.party_state.leader_y, 100);
    put((jp ? 0xa147 : 0x9f45) + 2, scene == 2 ? 4 : 0);
    // Force the independent first-refresh path in StepEightAnimation. Its
    // successful result is allowed to remain pending until the next loop.
    put(profile.wram_entity_displayed_sprites + 60, 0xffff);
    put(profile.wram_entity_script_variable0,
        0);                       // Child switch returns to its first branch.
    put(jp ? 0x0f80 : 0x0f8a, 2); // Path arrival tolerance.
    put(jp ? 0x0fbc : 0x0fc6, scene == 0 ? 100 : 200);
    put(jp ? 0x0ff8 : 0x1002, scene == 0 ? 100 : 120);
    put(jp ? 0x2f30 : 0x2b32, 0x0200);
  }
  SemanticState semantic_state() const {
    SemanticState result{word(jp ? 0x13f4 : 0x13fe),
                         word(jp ? 0x1480 : 0x148a),
                         word(jp ? 0x1368 : 0x1372),
                         word(jp ? 0x12dc : 0x12e6),
                         temporary(),
                         word(profile.wram_entity_script_ids),
                         word(profile.wram_first_entity),
                         word(profile.wram_entity_next),
                         word(profile.wram_entity_animation_frame),
                         word(profile.wram_entity_displayed_sprites),
                         word(profile.wram_entity_surface_flags),
                         word(profile.wram_entity_world_coordinates.x),
                         word(profile.wram_entity_world_coordinates.y),
                         word(0x24),
                         word(0x26)};
    for (unsigned i = 0; i < 8; ++i)
      result.push_back(word(profile.wram_entity_script_variable0 + i * 60));
    for (unsigned i = 0; i < 6; ++i)
      result.push_back(word((jp ? 0x0cec : 0x0cf6) + i * 60));
    result.push_back(word(jp ? 0x2ef4 : 0x2af6));
    result.push_back(word(jp ? 0x2f30 : 0x2b32));
    if (result[3] != 0) // Active short-call contents, never unused capacity.
      result.push_back(word(jp ? 0x1598 : 0x15a2));
    return result;
  }
};
void verify(const eb::GameAssets &assets) {
  using namespace eb::test;
  const bool jp = assets.version == eb::GameVersion::JP;
  Oracle source_base(assets, false), native_base(assets, true);
  unsigned total = 0;
  for (const auto &context : contexts) {
    const unsigned cursor = jp ? context.jp_cursor : context.us_cursor;
    const unsigned stack = context.stack_bytes;
    const unsigned max_sleep = context.maximum_sleep;
    const SpriteTemporaryState source{cursor, max_sleep, stack, 0x4080};
    const SpriteTemporaryState native{cursor, max_sleep, stack, 1};
    require(equivalent_dead_sprite_temporary(assets.image, assets.version,
                                             source, native),
            "Exact observed artwork-return context was not recognized");
    for (auto bad : {SpriteTemporaryState{cursor, max_sleep, stack, 0},
                     {cursor, max_sleep, stack, 2},
                     {cursor + 1, max_sleep, stack, 1},
                     {cursor, max_sleep + 1, stack, 1},
                     {cursor, max_sleep, stack + 2, 1}})
      require(!equivalent_dead_sprite_temporary(assets.image, assets.version,
                                                source, bad),
              "Temporary contract accepted a live/control/success mismatch");
    for (unsigned invalid_stack : {0u, 1u, 2u, 3u, 16u}) {
      if (invalid_stack == stack)
        continue;
      auto bad_source = source;
      auto bad_native = native;
      bad_source.used_stack_bytes = bad_native.used_stack_bytes = invalid_stack;
      require(!equivalent_dead_sprite_temporary(assets.image, assets.version,
                                                bad_source, bad_native),
              "Temporary contract accepted matching but unaudited stack depth");
    }
    auto zero = source;
    zero.value = 0;
    require(!equivalent_dead_sprite_temporary(assets.image, assets.version,
                                              zero, native),
            "Temporary contract accepted a failed source refresh");
    auto too_long = source;
    too_long.sleep = max_sleep + 1;
    auto matching_bad_sleep = native;
    matching_bad_sleep.sleep = max_sleep + 1;
    require(!equivalent_dead_sprite_temporary(assets.image, assets.version,
                                              too_long, matching_bad_sleep),
            "Temporary contract accepted sleep beyond its authored pause");
    auto damaged = assets.image;
    for (unsigned at : {cursor - 0xc00000 - 2, cursor - 0xc00000,
                        jp ? context.jp_service : context.us_service}) {
      damaged[at] ^= 1;
      require(!equivalent_dead_sprite_temporary(damaged, assets.version, source,
                                                native),
              "Temporary contract accepted changed authored content");
      damaged[at] ^= 1;
    }
    require(!equivalent_dead_sprite_temporary(
                std::span<const std::uint8_t>(assets.image)
                    .first(cursor - 0xc00000),
                assets.version, source, native),
            "Temporary contract accepted truncated content");

    unsigned cases = 0;
    // Zero and arbitrary values execute too: source ignores them, although
    // the comparison contract separately requires the real resource API's
    // nonzero source / exact native-success value. All tests use actual
    // interpreter and helper execution; no calls or branches are skipped.
    for (unsigned sleep = 0; sleep <= max_sleep; ++sleep)
      for (unsigned scene = 0; scene < 3; ++scene)
        for (unsigned surface : {0u, 8u, 12u})
          for (unsigned caller = 0;
               caller < (context.kind == Context::Path ? 2u : 1u); ++caller) {
            std::optional<SemanticState> expected_source, expected_native;
            for (unsigned incoming : {0x4080u, 1u, 0u, 0x1234u, 0xffffu}) {
              Oracle original(source_base), candidate(native_base);
              original.seed(incoming, sleep, scene, surface, context, caller);
              candidate.seed(incoming, sleep, scene, surface, context, caller);
              for (unsigned tick = 0; tick <= sleep; ++tick) {
                original.call(jp ? 0xc094e5 : 0xc09506, false);
                candidate.call(jp ? 0xc094e5 : 0xc09506, false);
                if (tick < sleep)
                  require(!original.observed_predicate &&
                              !candidate.observed_predicate &&
                              original.temporary() == incoming &&
                              candidate.temporary() == incoming,
                          "Sleeping continuation observed or rewrote the "
                          "pending value");
              }
              const auto a = original.semantic_state(),
                         b = candidate.semantic_state();
              if (context.kind == Context::Animation) {
                require(!original.observed_predicate &&
                            !candidate.observed_predicate,
                        "Unconditional animation loop read a conditional "
                        "temporary");
                require(a.size() == b.size(),
                        "Animation continuation changed stack depth");
                for (unsigned field = 0; field < a.size(); ++field)
                  if (field != 4)
                    require(a[field] == b[field],
                            "Animation continuation changed actor/task state");
                require(equivalent_dead_sprite_temporary(
                            assets.image, assets.version,
                            {(a[1] << 16) | a[0], a[2], a[3], a[4]},
                            {(b[1] << 16) | b[0], b[2], b[3], b[4]}),
                        "Animation continuation lost its exact "
                        "successful-return contract");
              } else {
                const unsigned predicate = context.kind == Context::Path
                                               ? (scene == 0 ? 1 : 0)
                                               : (scene == 1 ? 0 : 0xffff);
                require(original.observed_predicate == predicate &&
                            candidate.observed_predicate == predicate,
                        "Original conditional consumed the old artwork result");
                require(a == b, "Source/native continuation changed actor, "
                                "task or RNG state");
              }
              require((!expected_source || *expected_source == a) &&
                          (!expected_native || *expected_native == b),
                      "Continuation outcome depends on its incoming temporary");
              expected_source = a;
              expected_native = b;
              ++cases;
            }
          }
    total += cases;
    std::cout << (jp ? "JP" : "US") << " cursor=" << std::hex << cursor
              << std::dec << " cases=" << cases
              << " source/native exact independent continuation PASS\n";
  }
  std::cout << (jp ? "JP" : "US") << ": " << total
            << " actual interpreter cases across six exact sites; "
               "sleep/surface/area/path branches; "
               "raw zero/arbitrary inputs; typed zero/native2/context/content "
               "negatives PASS\n";
}
} // namespace
int main(int argc, char **argv) {
  try {
    require(argc > 1, "native_sprite_state_contract_reference pack.ebpak ...");
    for (int i = 1; i < argc; ++i)
      verify(eb::load_game_assets(argv[i], eb::asset_profiles()));
  } catch (const std::exception &error) {
    std::cerr << error.what() << '\n';
    return 1;
  }
}
