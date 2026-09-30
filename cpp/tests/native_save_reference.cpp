// Optional original-source oracle. Only this test owns CPU/bus state; all save
// routines execute unchanged, with no service interception or user-file I/O.
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include "native_save_test_data.hpp"
#include <iostream>
#include <memory>
#include <string>

namespace {
using namespace save_test;
using namespace eb::native::saves;
struct SourceLayout {
  unsigned integrity, save, load, copy, erase, game, party, flags, corruption,
      version_loaded;
};
constexpr SourceLayout us{0xef0b9e, 0xef0a4d, 0xef0a68, 0xef0c15, 0xef0bfa,
                          0x97f5,   0x99ce,   0x9c08,   0x9f79,   0x9f77};
constexpr SourceLayout jp{0xc0faa4, 0xc0f962, 0xc0f97d, 0xc0fb1b, 0xc0fb00,
                          0x9aa9,   0x9c7f,   0x9eb3,   0xa17b,   0xa179};
struct Oracle {
  std::unique_ptr<eb::SnesBus> bus;
  eb::MainCpu65816 cpu;
  SourceLayout source;
  Layout format;
  unsigned calls{};
  explicit Oracle(const eb::GameAssets &assets)
      : bus(std::make_unique<eb::SnesBus>(assets.image, assets.version)),
        cpu(*bus), source(assets.version == eb::GameVersion::JP ? jp : us),
        format(layout(assets.version)) {
    cpu.set_runtime(eb::MainCpuRuntime::Legacy);
  }
  void input(const Bytes &bytes) {
    bus->save_ram = bytes;
    bus->work_ram.fill(0);
  }
  void call(unsigned address, unsigned a = 0, unsigned x = 0) {
    cpu.emulation_mode = false;
    cpu.status_register = eb::MainCpu65816::InterruptDisable;
    cpu.data_bank = 0x7e;
    cpu.direct_page = 0x1e00;
    cpu.stack_pointer = 0x1fff;
    cpu.accumulator = a;
    cpu.x_index = x;
    cpu.y_index = 0;
    constexpr unsigned trampoline = 0xc0ff00;
    cpu.program_counter = trampoline;
    cpu.execute_instruction<0x22>(address, 4);
    unsigned steps = 0;
    while (cpu.program_counter != trampoline + 4 ||
           cpu.stack_pointer != 0x1fff) {
      if (++steps > 2000000)
        throw std::runtime_error("Source save routine did not return: " +
                                 cpu.describe_registers());
      cpu.step_instruction();
    }
    ++calls;
  }
  void equal(const SaveArchive &archive, const char *operation) const {
    for (unsigned i = 0; i < bus->save_ram.size(); ++i)
      if (bus->save_ram[i] != archive.bytes()[i])
        throw std::runtime_error(
            std::string(operation) + " differs at SRAM byte " +
            std::to_string(i) + ": source=" + std::to_string(bus->save_ram[i]) +
            " native=" + std::to_string(archive.bytes()[i]));
  }
  void seed_live(const std::uint8_t *payload) {
    std::copy_n(payload, format.game_bytes, bus->work_ram.data() + source.game);
    std::copy_n(payload + format.game_bytes, format.character_bytes * 6,
                bus->work_ram.data() + source.party);
    std::copy_n(payload + format.game_bytes + format.character_bytes * 6, 128,
                bus->work_ram.data() + source.flags);
  }
  void compare_loaded(const std::uint8_t *payload) const {
    require(std::equal(payload, payload + format.game_bytes,
                       bus->work_ram.data() + source.game),
            "Source loaded game fields differ");
    require(std::equal(payload + format.game_bytes,
                       payload + format.game_bytes + 6 * format.character_bytes,
                       bus->work_ram.data() + source.party),
            "Source loaded characters differ");
    require(std::equal(payload + format.game_bytes + 6 * format.character_bytes,
                       payload + format.persisted_bytes(),
                       bus->work_ram.data() + source.flags),
            "Source loaded event flags differ");
    require(dword(bus->work_ram.data() + 0xa7) ==
                dword(payload + format.game_bytes - 5),
            "Source load timer restoration differs");
  }
};

void run(const eb::GameAssets &assets) {
  Oracle oracle(assets);
  const auto version = assets.version;
  const auto format = layout(version);
  unsigned integrity_cases = 0, save_cases = 0, load_cases = 0, copy_cases = 0,
           erase_cases = 0;
  // Matrix includes mismatched but valid redundant copies, distinct corruption
  // types, signature erasure precedence, and damage in checksum-covered
  // padding.
  for (unsigned slot = 0; slot < 3; ++slot) {
    for (unsigned primary = 0; primary < 7; ++primary) {
      for (unsigned backup = 0; backup < 7; ++backup) {
        auto bytes = fixture(version, 37 + slot * 53 + primary * 7 + backup);
        const unsigned base = slot * 2560;
        const auto damage = [&](unsigned block, unsigned kind) {
          if (kind == 1)
            bytes[block + 52] ^= 0x80;
          if (kind == 2)
            bytes[block + 1279] ^= 1;
          if (kind == 3)
            bytes[block] = 0;
          if (kind == 4)
            bytes[block + 20] = 1;
          if (kind == 5)
            bytes[block + 28] ^= 1;
          if (kind == 6)
            bytes[block + 30] ^= 1;
        };
        damage(base, primary);
        damage(base + 1280, backup);
        SaveArchive archive(version, bytes);
        oracle.input(bytes);
        const auto report = archive.repair_integrity();
        oracle.call(oracle.source.integrity);
        oracle.equal(archive, "Integrity repair");
        require(oracle.bus->work_ram[oracle.source.corruption] ==
                    report.lost_slots,
                "Source corruption-report slot mask differs");
        require(word(oracle.bus->work_ram.data() +
                     oracle.source.version_loaded) == format.version,
                "Source loaded version differs");
        ++integrity_cases;
      }
    }
  }
  for (unsigned mask = 1; mask < 8; ++mask) {
    auto bytes = fixture(version, mask * 129);
    for (unsigned slot = 0; slot < 3; ++slot)
      if (mask & (1u << slot)) {
        bytes[slot * 2560 + 28] ^= 1;
        bytes[slot * 2560 + 1280 + 30] ^= 1;
      }
    SaveArchive archive(version, bytes);
    oracle.input(bytes);
    const auto report = archive.repair_integrity();
    oracle.call(oracle.source.integrity);
    oracle.equal(archive, "Multiple corrupt slots");
    require(report.lost_slots == mask &&
                oracle.bus->work_ram[oracle.source.corruption] == mask,
            "Combined corrupt-slot mask differs");
    ++integrity_cases;
  }
  for (unsigned pattern : {0u, 0xffu, 0x1234u, 0x493u, 0x48au}) {
    auto bytes = fixture(version, pattern);
    if (pattern <= 0xff)
      bytes.fill(pattern);
    else
      put(bytes.data() + 8190, pattern);
    SaveArchive archive(version, bytes);
    oracle.input(bytes);
    const auto report = archive.repair_integrity();
    oracle.call(oracle.source.integrity);
    oracle.equal(archive, "Version/reset integrity");
    require(oracle.bus->work_ram[oracle.source.corruption] == report.lost_slots,
            "Version reset corruption mask differs");
    ++integrity_cases;
  }
  for (unsigned seed = 0; seed < 12; ++seed) {
    const auto original = fixture(version, 0x91ab + seed * 17);
    for (unsigned slot = 0; slot < 3; ++slot) {
      SaveArchive archive(version, original);
      const auto *payload = original.data() + slot * 2560 + 32;
      auto state = archive.load(slot);
      check_named_values(state, payload);
      oracle.input(original);
      // LOAD_GAME_SLOT is compared before any native encode has touched
      // source data, then native encoding must reproduce every field.
      oracle.call(oracle.source.load, slot);
      oracle.compare_loaded(payload);
      ++load_cases;
      oracle.seed_live(payload);
      const std::uint32_t timer = 0xf0123410 + seed;
      put(oracle.bus->work_ram.data() + 0xa7, timer);
      put(oracle.bus->work_ram.data() + 0xa9, timer >> 16);
      // Mutate semantically named native fields and independent source
      // offsets, so an internally reversible field swap cannot pass.
      const auto d = version == eb::GameVersion::JP ? 3 : 0;
      state.game.leader_x = 0x8765;
      state.game.leader_y = 0x4321;
      state.game.leader_direction = 7;
      state.game.party_order[5] = 6;
      state.game.text_speed = 2;
      state.game.hotspot_content_references[1] = 0xc0123456;
      auto *g = oracle.bus->work_ram.data() + oracle.source.game;
      put(g + 130 - d, 0x8765);
      put(g + 134 - d, 0x4321);
      put(g + 138 - d, 7);
      g[127 - d] = 6;
      g[193 - d] = 2;
      put(g + 208 - d, 0x3456);
      put(g + 210 - d, 0xc012);
      const auto cd = version == eb::GameVersion::JP ? 1 : 0;
      for (unsigned i = 0; i < 6; ++i) {
        state.characters[i].values.current_hp = 100 + i;
        state.characters[i].values.items[13] = 0xa0 + i;
        state.characters[i].boosted_luck = 0x70 + i;
        auto *c = oracle.bus->work_ram.data() + oracle.source.party +
                  i * format.character_bytes;
        put(c + 69 - cd, 100 + i);
        c[48 - cd] = 0xa0 + i;
        c[91 - cd] = 0x70 + i;
      }
      state.event_flags[127] = 0x96;
      oracle.bus->work_ram[oracle.source.flags + 127] = 0x96;
      archive.save(slot, state, timer);
      oracle.call(oracle.source.save, slot);
      oracle.equal(archive, "Typed save");
      require(dword(g + format.game_bytes - 5) == timer,
              "Source SAVE timer side effect changed");
      ++save_cases;
    }
  }
  const auto original = fixture(version, 7);
  for (unsigned destination = 0; destination < 3; ++destination) {
    for (unsigned source = 0; source < 3; ++source) {
      SaveArchive archive(version, original);
      oracle.input(original);
      archive.copy_slot(destination, source);
      oracle.call(oracle.source.copy, destination, source);
      oracle.equal(archive, "Slot copy");
      ++copy_cases;
    }
    SaveArchive archive(version, original);
    oracle.input(original);
    archive.erase_slot(destination);
    oracle.call(oracle.source.erase, destination);
    oracle.equal(archive, "Slot erase");
    ++erase_cases;
  }
  std::cout << (version == eb::GameVersion::JP ? "JP" : "US")
            << " native saves PASS: " << integrity_cases << " integrity, "
            << load_cases << " load, " << save_cases << " save, " << copy_cases
            << " copy, " << erase_cases << " erase; " << oracle.calls
            << " original-source calls; full8192-byte comparisons\n";
}
} // namespace
int main(int argc, char **argv) {
  try {
    if (argc < 2)
      throw std::runtime_error("native_save_reference pack.ebpak ...");
    for (int i = 1; i < argc; ++i)
      run(eb::load_game_assets(argv[i], eb::asset_profiles()));
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
