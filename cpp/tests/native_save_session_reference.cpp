// Source oracle for the bounded continue handoff. Full LOAD_GAME_SLOT and the
// actual continue branch execute unchanged. Text/map arithmetic fragments stop
// at explicit unported owner boundaries; no dialogue/map/actor work is faked.
#include "eb/main_cpu_65816.hpp"
#include "eb/native/saves/session.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include "native_save_test_data.hpp"
#include <iostream>
#include <memory>

namespace {
using namespace eb::native::saves;
using namespace save_test;
struct Source {
  unsigned load, game, flags, begin_continue, end_continue, begin_text,
      end_text;
  unsigned hotspots, current_interaction, next_interaction, interaction_type,
      respawn_x, respawn_y;
  unsigned selected_speed, hp_speed, text_wait;
  unsigned begin_map_center, end_map_center, begin_map_tiles, end_map_tiles,
      begin_map_scroll, end_map_scroll;
  unsigned camera_x, camera_y, scroll_x, scroll_y;
};
constexpr Source us{0xef0a68, 0x97f5,   0x9c08,   0xc1f847, 0xc1fec2, 0xc1fec9,
                    0xc1ff1c, 0x5e3c,   0x5e02,   0x5e04,   0x5dc0,   0x9d1f,
                    0x9d21,   0x9625,   0x9627,   0x964b,   0xc01408, 0xc01431,
                    0xc0143d, 0xc0144e, 0xc014e1, 0xc014fb, 0x4380,   0x4382,
                    0x31,     0x33};
constexpr Source jp{0xc0f97d, 0x9aa9,   0x9eb3,   0xc1f6c6, 0xc1fc3f, 0xc1fc46,
                    0xc1fc9b, 0x61c2,   0x6188,   0x618a,   0x6146,   0x9fa5,
                    0x9fa7,   0x991d,   0x991f,   0x9943,   0xc0141e, 0xc01447,
                    0xc01453, 0xc01464, 0xc014f7, 0xc01511, 0x4706,   0x4708,
                    0x31,     0x33};
struct Oracle {
  std::unique_ptr<eb::SnesBus> bus;
  eb::MainCpu65816 cpu;
  Source l;
  explicit Oracle(const eb::GameAssets &assets)
      : bus(std::make_unique<eb::SnesBus>(assets.image, assets.version)),
        cpu(*bus), l(assets.version == eb::GameVersion::JP ? jp : us) {
    cpu.set_runtime(eb::MainCpuRuntime::Legacy);
  }
  void reset_cpu(unsigned pc) {
    cpu.emulation_mode = false;
    cpu.status_register = eb::MainCpu65816::InterruptDisable;
    cpu.data_bank = 0x7e;
    cpu.direct_page = 0x1d00;
    cpu.stack_pointer = 0x1fff;
    cpu.program_counter = pc;
    cpu.accumulator = cpu.x_index = cpu.y_index = 0;
  }
  void until(unsigned end) {
    unsigned steps = 0;
    while (cpu.program_counter != end) {
      if (++steps > 100000)
        throw std::runtime_error(
            "Source continue fragment did not reach boundary: " +
            cpu.describe_registers());
      cpu.step_instruction();
    }
  }
  void load(const SaveArchive &archive) {
    bus->work_ram.fill(0xa5);
    std::copy(archive.bytes().begin(), archive.bytes().end(),
              bus->save_ram.begin());
    reset_cpu(0xc0ff00);
    cpu.execute_instruction<0x22>(l.load, 4);
    until(0xc0ff04);
  }
  unsigned get(unsigned address) const {
    return word(bus->work_ram.data() + address);
  }
  void set(unsigned address, unsigned value) {
    put(bus->work_ram.data() + address, value);
  }
  Hotspot hotspot(unsigned i) const {
    const auto *p = bus->work_ram.data() + l.hotspots + i * 14;
    return {std::uint16_t(word(p)),     std::uint16_t(word(p + 2)),
            std::uint16_t(word(p + 4)), std::uint16_t(word(p + 6)),
            std::uint16_t(word(p + 8)), dword(p + 10)};
  }
};
void run(const eb::GameAssets &assets) {
  const auto version = assets.version;
  auto resources = std::make_shared<ContinueResources>(assets.image, version);
  Oracle oracle(assets);
  auto initial = SaveArchive(version, fixture(version, 19)).load(0);
  initial.game.favourite_thing[1] = 1;
  initial.game.party_order = {4, 2, 5, 0, 1, 3};
  unsigned continue_cases = 0, map_fragments = 0, party_captures = 0;
  for (unsigned slot = 0; slot < 2; ++slot) {
    for (unsigned id = 0; id < ContinueResources::hotspot_count; ++id) {
      for (const unsigned mode : {0u, 1u, 3u, 255u}) {
        auto state = initial;
        state.game.text_speed = 1 + id % 3;
        state.game.leader_x = id * 1193;
        state.game.leader_y = 0xffff - id * 871;
        state.game.hotspot_modes = {0, 0};
        state.game.hotspot_ids = {255, 255};
        state.game.hotspot_modes[slot] = mode;
        state.game.hotspot_ids[slot] = id;
        state.game.hotspot_content_references = {0xc1020304, 0x9f887766};
        auto archive = SaveArchive::empty(version);
        archive.save(0, state, 0x12345678);
        Session session(archive, resources);
        const auto selected = session.continue_slot(0);
        oracle.load(archive);
        const std::array old{oracle.hotspot(0), oracle.hotspot(1)};
        oracle.reset_cpu(oracle.l.begin_continue);
        oracle.until(oracle.l.end_continue);
        const auto &h = selected.handoff;
        require(oracle.get(oracle.l.respawn_x) == h.respawn.x &&
                    oracle.get(oracle.l.respawn_y) == h.respawn.y,
                "Source continue respawn differs");
        require(
            oracle.get(oracle.l.current_interaction) == h.current_interaction &&
                oracle.get(oracle.l.next_interaction) == h.next_interaction &&
                oracle.get(oracle.l.interaction_type) ==
                    h.current_interaction_type,
            "Source continue interaction reset differs");
        for (unsigned i = 0; i < 2; ++i)
          require(oracle.hotspot(i) == h.hotspot_updates[i].value_or(old[i]),
                  "Source hotspot restore differs");
        oracle.reset_cpu(oracle.l.begin_text);
        oracle.until(oracle.l.end_text);
        require(oracle.get(oracle.l.selected_speed) == h.text.selected_speed &&
                    oracle.get(oracle.l.text_wait) == h.text.wait &&
                    dword(oracle.bus->work_ram.data() + oracle.l.hp_speed) ==
                        h.text.hp_meter_speed,
                "Source continue text/meter timing differs");
        require(oracle.bus->save_ram == copy(archive.bytes()),
                "Continue fragment unexpectedly wrote SRAM");
        require(std::equal(state.event_flags.begin(), state.event_flags.end(),
                           oracle.bus->work_ram.begin() + oracle.l.flags),
                "Continue altered persisted event flags");
        eb::native::party::State live(version);
        restore_party(selected.state, live);
        auto captured = capture_party(live, selected.state);
        auto encoded = archive;
        encoded.save(0, captured, captured.game.elapsed_timer);
        require(copy(encoded.bytes()) == oracle.bus->save_ram,
                "Party snapshot bridge differs from source-loaded save");
        ++party_captures;
        ++continue_cases;
      }
    }
  }
  constexpr std::array coordinates{0u,   1u,   7u,   8u,   111u,    112u,
                                   127u, 128u, 255u, 256u, 0x7fffu, 0xffffu};
  for (const auto x : coordinates)
    for (const auto y : coordinates) {
      auto state = initial;
      state.game.text_speed = 1;
      state.game.hotspot_modes = {0, 0};
      state.game.leader_x = x;
      state.game.leader_y = y;
      const auto h = prepare_continue(state, *resources);
      oracle.bus->work_ram.fill(0);
      oracle.reset_cpu(oracle.l.begin_map_center);
      oracle.set(0x1d14, x);
      oracle.set(0x1d16, y);
      oracle.until(oracle.l.end_map_center);
      require(oracle.get(oracle.l.camera_x) == h.map.center.x &&
                  oracle.get(oracle.l.camera_y) == h.map.center.y &&
                  oracle.cpu.accumulator == h.map.sector_x &&
                  oracle.cpu.x_index == h.map.sector_y,
              "Source map center/sector arithmetic differs");
      oracle.reset_cpu(oracle.l.begin_map_tiles);
      oracle.set(0x1d02, x >> 3);
      oracle.set(0x1d12, y >> 3);
      oracle.until(oracle.l.end_map_tiles);
      require(oracle.get(0x1d10) == h.map.top_left_tiles.x &&
                  oracle.get(0x1d14) == h.map.top_left_tiles.y,
              "Source map tile anchor differs");
      oracle.reset_cpu(oracle.l.begin_map_scroll);
      oracle.until(oracle.l.end_map_scroll);
      require(oracle.get(oracle.l.scroll_x) == h.map.scroll.x &&
                  oracle.get(oracle.l.scroll_y) == h.map.scroll.y,
              "Source map scroll anchor differs");
      map_fragments += 3;
    }
  const auto l = continue_resource_layout(version);
  const auto &dialogue = resources->dialogue();
  const auto pre_game = dword(dialogue.pre_game_start.data()) & 0x3fffff;
  const auto buzz_buzz = dword(dialogue.buzz_buzz.data()) & 0x3fffff;
  require(assets.image[pre_game] == 0x05 &&
              word(assets.image.data() + pre_game + 1) == 383 &&
              assets.image[pre_game + 3] == 0x02,
          "Pre-game dialogue key does not identify the original paperboy-flag "
          "reset");
  require(
      assets.image[buzz_buzz] == 0x06 &&
          word(assets.image.data() + buzz_buzz + 1) == 18 &&
          assets.image[buzz_buzz + 7] == 0x02,
      "BuzzBuzz dialogue key does not identify the original conditional spawn");
  const auto &new_game = resources->new_game_requirements();
  require(new_game.respawn == Position{8120, 1104} && new_game.money == 20,
          "Imported original new-game position/money differs");
  for (unsigned i = 0; i < 4; ++i) {
    const auto *p = assets.image.data() + l.initial_stats + i * 20;
    require(new_game.characters[i].level == word(p + 6) &&
                new_game.characters[i].additional_experience == word(p + 8) &&
                std::equal(p + 10, p + 20,
                           new_game.characters[i].starting_items.begin()),
            "Original new-game requirements differ");
  }
  std::cout << (version == eb::GameVersion::JP ? "JP" : "US")
            << " native save continuation PASS: " << continue_cases
            << " original load/continue/text cases, " << map_fragments
            << " map arithmetic fragments, " << party_captures
            << " live-party roundtrips; no world activation performed\n";
}
} // namespace
int main(int argc, char **argv) {
  try {
    if (argc < 2)
      throw std::runtime_error("native_save_session_reference pack.ebpak ...");
    for (int i = 1; i < argc; ++i)
      run(eb::load_game_assets(argv[i], eb::asset_profiles()));
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
