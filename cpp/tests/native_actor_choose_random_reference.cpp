// Complete original CHOOSE_RANDOM + RAND + hardware divider versus an actual
// CPU-free ActorWorld/Scene/WorldRuntime call. No source callee interception.
#include "native_actor_choose_random_fixture.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"

namespace {
struct ChoiceOracle {
  std::unique_ptr<eb::SnesBus> bus;
  eb::MainCpu65816 cpu;
  eb::GameVersion version;
  std::uint64_t instructions{};
  ChoiceOracle(const eb::GameAssets &assets)
      : bus(std::make_unique<eb::SnesBus>(assets.image, assets.version)),
        cpu(*bus), version(assets.version) {
    cpu.set_runtime(eb::MainCpuRuntime::Legacy);
  }
  void word(unsigned address, unsigned value) {
    bus->work_ram[address] = std::uint8_t(value);
    bus->work_ram[address + 1] = std::uint8_t(value >> 8);
  }
  unsigned word(unsigned address) const {
    return bus->work_ram[address] | unsigned(bus->work_ram[address + 1]) << 8;
  }
  unsigned run(const RandomScript &script, story::RandomState seed,
               bool carry, unsigned incoming) {
    std::copy_n(script.bytes.begin(), 65536, bus->work_ram.begin() + 65536);
    word(0x24, seed.primary_word);
    word(0x26, seed.secondary_word);
    word(0x1e80, 0);
    word(0x1e82, 0x7f);
    word(0x1e90, 0xdead);
    word(0x1e94, 0xbeef);
    cpu.emulation_mode = false;
    cpu.status_register = eb::MainCpu65816::InterruptDisable |
                          (carry ? eb::MainCpu65816::Carry : 0);
    cpu.data_bank = 0x7e;
    cpu.direct_page = 0x1e00;
    cpu.stack_pointer = 0x1fff;
    cpu.accumulator = std::uint16_t(incoming);
    cpu.x_index = 0xa55a;
    cpu.y_index = std::uint16_t(script.parameter);
    cpu.program_counter = 0xc0ff00;
    cpu.execute_instruction<0x22>(version == eb::GameVersion::JP ? 0xc09f61 : 0xc09f82, 4);
    for (unsigned i = 0; i < 256; ++i) {
      if (cpu.program_counter == 0xc0ff04 && cpu.stack_pointer == 0x1fff)
        return cpu.accumulator;
      cpu.step_instruction();
      ++instructions;
    }
    throw std::runtime_error("Complete source CHOOSE_RANDOM did not return");
  }
};
void original_choices(const eb::GameAssets &assets) {
  const CompiledActionProgram authored(import_action_scripts(assets.image, assets.version),
                                       assets.version);
  unsigned authored_calls = 0;
  for (unsigned i = 0; i < authored.stats().operations; ++i)
    if (authored.operation(i).operation == NativeAction::ChooseRandom) {
      const auto &binding = authored.operation(i);
      const auto &choice = std::get<ChooseRandomOperands>(binding.payload);
      check(binding.parameter_bytes == 1 + unsigned(choice.count) * 2 &&
                choice.choices.size() == (choice.count ? choice.count : 256u),
            "Actual imported actor random choice lost its inline shape");
      ++authored_calls;
    }
  check(authored_calls > 0, "Actual authored catalog has no native random choices");
  ChoiceOracle source(assets);
  unsigned cases = 0;
  for (unsigned count = 0; count < 256; ++count) {
    RandomScript script(assets.version, count);
    Fixture f(assets.version, false, script.data());
    const auto id = f.actors.create(actor());
    f.start();
    // Every count, every possible RAND byte, both incoming carry states over
    // the complete matrix. High random-state bits and task input also vary.
    for (unsigned random = 0; random < 256; ++random) {
      const story::RandomState seed{std::uint16_t(0x8110 ^ ((random & 1) << 14)),
                                    std::uint16_t(0x9200 | random)};
      const auto expected = source.run(script, seed, random & 1, random * 251);
      f.random = seed;
      const auto actual = run_random_actor(f, id, 0, random & 1 ? 1 : 4096);
      check(actual == expected, "Native selected word differs from complete source helper");
      check(source.word(0x24) == f.random.primary_word &&
                source.word(0x26) == f.random.secondary_word,
            "Native shared random state differs from actual original RAND");
      check(source.word(0x1e94) == 5 + count * 2,
            "Source inline continuation differs from typed count length");
      ++cases;
    }
  }
  for (unsigned first : {65529u, 65530u, 65532u}) {
    RandomScript script(assets.version, 3, first);
    Fixture f(assets.version, false, script.data(first));
    const auto id = f.actors.create(actor());
    f.start();
    const story::RandomState seed{16, 2};
    const auto expected = source.run(script, seed, true, 0xffff);
    f.random = seed;
    check(run_random_actor(f, id, first) == expected &&
              source.word(0x1e94) == std::uint16_t(script.parameter + 7),
          "Source wrapping index/continuation differs from actual native actor");
    ++cases;
  }
  std::cout << (assets.version == eb::GameVersion::JP ? "JP" : "US")
            << " actor random choice: " << cases << " complete original calls, "
            << source.instructions << " original instructions, " << authored_calls
            << " actual imported call sites passed\n";
}
} // namespace
int main(int argc, char **argv) {
  try {
    if (argc < 2) throw std::invalid_argument("native_actor_choose_random_reference pack.ebpak ...");
    for (int i = 1; i < argc; ++i)
      original_choices(eb::load_game_assets(argv[i], eb::asset_profiles()));
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
