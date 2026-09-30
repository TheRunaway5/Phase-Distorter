// Original hotspot and queue routines execute here only. Production uses
// host-owned rectangles/queue records and immutable ContinueResources content.
#include "eb/main_cpu_65816.hpp"
#include "eb/native/appearance_service.hpp"
#include "eb/native/npcs/interaction.hpp"
#include "eb/native/story/ticks.hpp"
#include "eb/native/world_hotspots.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <string>

namespace {
using namespace eb::native;
std::string context;
void require(bool ok, const char *why) {
  if (!ok)
    throw std::runtime_error(std::string(why) + ": " + context);
}
struct Layout {
  unsigned evaluate, activate, disable, reload, live, game, displacement;
  unsigned records, current, next, type, pending, teleport;
};
Layout layout(eb::GameVersion version) {
  if (version == eb::GameVersion::US)
    return {0xc073c0, 0xc072cf, 0xc071e5, 0xc07213, 0x5e3c, 0x97f5, 0,
            0x5dea,   0x5e02,   0x5e04,   0x5dc0,   0x5d9a, 0x9f3f};
  return {0xc075fc, 0xc07507, 0xc07413, 0xc07447, 0x61c2, 0x9aa9, 3,
          0x6170,   0x6188,   0x618a,   0x6146,   0x6120, 0xa141};
}
struct Fixture {
  WorldHotspotState state;
  npcs::InteractionState leader;
  story::TickState clock;
  AppearanceSceneContext appearance;
  npcs::InteractionQueueState queued;
  npcs::DadPhoneState phone;
  WorldInteractionQueue queue;
  WorldHotspots hotspots;
  explicit Fixture(eb::GameVersion version)
      : queue(version, queued, appearance.intangibility_ticks, phone),
        hotspots(version, state, leader, clock, appearance, queue) {}
};
struct Original {
  Layout l;
  std::unique_ptr<eb::SnesBus> bus;
  eb::MainCpu65816 cpu;
  std::uint64_t calls{}, instructions{}, fields{};
  explicit Original(const eb::GameAssets &assets)
      : l(layout(assets.version)),
        bus(std::make_unique<eb::SnesBus>(assets.image, assets.version)),
        cpu(*bus) {
    cpu.set_runtime(eb::MainCpuRuntime::Legacy);
  }
  unsigned game(unsigned n) const { return l.game + n - l.displacement; }
  void byte(unsigned at, unsigned v) { bus->work_ram[at] = v; }
  void word(unsigned at, unsigned v) {
    byte(at, v);
    byte(at + 1, v >> 8);
  }
  void dword(unsigned at, unsigned v) {
    word(at, v);
    word(at + 2, v >> 16);
  }
  unsigned word(unsigned at) const {
    return bus->work_ram[at] | unsigned(bus->work_ram[at + 1]) << 8;
  }
  unsigned dword(unsigned at) const { return word(at) | word(at + 2) << 16; }
  void seed(const Fixture &f) {
    for (unsigned i = 0; i < 2; ++i) {
      const auto &h = f.state.live[i];
      const auto at = l.live + i * 14;
      word(at, h.mode);
      word(at + 2, h.x1);
      word(at + 4, h.y1);
      word(at + 6, h.x2);
      word(at + 8, h.y2);
      dword(at + 10, h.content_reference);
      byte(game(200) + i, f.state.saved_modes[i]);
      byte(game(202) + i, f.state.saved_ids[i]);
      dword(game(204) + i * 4, f.state.saved_references[i]);
    }
    for (unsigned i = 0; i < 4; ++i) {
      word(l.records + i * 6, f.queued.records[i].type);
      for (unsigned j = 0; j < 4; ++j)
        byte(l.records + i * 6 + 2 + j, f.queued.records[i].key[j]);
    }
    word(l.current, f.queued.current);
    word(l.next, f.queued.next);
    word(l.type, f.queued.current_type);
    word(l.pending, f.queued.pending);
    word(game(130), f.leader.leader_x);
    word(game(134), f.leader.leader_y);
    word(l.teleport, f.appearance.teleport_destination);
  }
  void invoke(unsigned entry, unsigned a = 0, unsigned x = 0,
              unsigned key = 0) {
    cpu.emulation_mode = false;
    cpu.status_register = eb::MainCpu65816::InterruptDisable;
    cpu.data_bank = 0x7e;
    cpu.direct_page = 0x1e00;
    cpu.stack_pointer = 0x1fff;
    cpu.program_counter = 0xc0ff00;
    cpu.accumulator = a;
    cpu.x_index = x;
    cpu.y_index = 0;
    dword(0x1e0e, key);
    cpu.execute_instruction<0x22>(entry, 4);
    for (unsigned step = 0; step < 10000; ++step) {
      if (cpu.program_counter == 0xc0ff04 && cpu.stack_pointer == 0x1fff) {
        require(cpu.direct_page == 0x1e00 && cpu.data_bank == 0x7e,
                "Hotspot source damaged caller ABI");
        ++calls;
        return;
      }
      cpu.step_instruction();
      ++instructions;
    }
    throw std::runtime_error("Hotspot source failed to return: " +
                             cpu.describe_registers());
  }
  void compare(const Fixture &f) {
    for (unsigned i = 0; i < 2; ++i) {
      const auto &h = f.state.live[i];
      const auto at = l.live + i * 14;
      require(h == saves::Hotspot{std::uint16_t(word(at)),
                                  std::uint16_t(word(at + 2)),
                                  std::uint16_t(word(at + 4)),
                                  std::uint16_t(word(at + 6)),
                                  std::uint16_t(word(at + 8)), dword(at + 10)},
              "Live hotspot mismatch");
      require(bus->work_ram[game(200) + i] == f.state.saved_modes[i] &&
                  bus->work_ram[game(202) + i] == f.state.saved_ids[i] &&
                  dword(game(204) + i * 4) == f.state.saved_references[i],
              "Saved hotspot metadata mismatch");
      fields += 9;
    }
    for (unsigned i = 0; i < 4; ++i) {
      require(word(l.records + i * 6) == f.queued.records[i].type,
              "Queue type mismatch");
      for (unsigned j = 0; j < 4; ++j)
        require(bus->work_ram[l.records + i * 6 + 2 + j] ==
                    f.queued.records[i].key[j],
                "Queue content key mismatch");
      fields += 5;
    }
    require(word(l.current) == f.queued.current &&
                word(l.next) == f.queued.next &&
                word(l.type) == f.queued.current_type &&
                word(l.pending) == f.queued.pending,
            "Queue indices or suppression mismatch");
    require(word(game(130)) == f.leader.leader_x &&
                word(game(134)) == f.leader.leader_y &&
                word(l.teleport) == f.appearance.teleport_destination,
            "Hotspot changed borrowed world inputs");
    fields += 7;
  }
};
void run(const eb::GameAssets &assets) {
  Original original(assets);
  saves::ContinueResources content(assets.image, assets.version);
  unsigned evaluations{}, activations{}, disables{}, reloads{};
  for (unsigned slot = 0; slot < 2; ++slot)
    for (unsigned mode : {0u, 1u, 2u, 9u, 0xffffu})
      for (unsigned variant = 0; variant < 4; ++variant)
        for (unsigned x : {0u, 15u, 16u, 17u, 31u, 32u, 33u, 0xffffu})
          for (unsigned y : {0u, 23u, 24u, 25u, 39u, 40u, 41u, 0xffffu}) {
            Fixture f(assets.version);
            f.state.live = {saves::Hotspot{7, 3, 5, 17, 19, 0x12345678},
                            saves::Hotspot{8, 2, 4, 16, 18, 0x87654321}};
            f.state.saved_modes = {3, 4};
            f.state.saved_ids = {11, 12};
            f.state.saved_references = {0xfeedface, 0xdeadbeef};
            auto &h = f.state.live[slot];
            h = {std::uint16_t(mode), 16, 24, 32, 40, 0xc0012345};
            if (variant == 1)
              h.x2 = h.x1; // Degenerate source rectangle.
            if (variant == 2) {
              h.x1 = 0xfff8;
              h.x2 = 8;
            } // No invented wrapping interior.
            f.leader.leader_x = x;
            f.leader.leader_y = y;
            f.appearance.teleport_destination = variant == 3 ? 3 : 0;
            f.queued.current = (x + y) & 3;
            f.queued.next = (x ^ y) & 3;
            f.queued.current_type = (x & 1) ? 9 : 0xffff;
            f.queued.pending = y & 1;
            context = "evaluate slot=" + std::to_string(slot) +
                      " mode=" + std::to_string(mode) +
                      " variant=" + std::to_string(variant) +
                      " xy=" + std::to_string(x) + "," + std::to_string(y);
            original.seed(f);
            original.invoke(original.l.evaluate, slot);
            f.hotspots.evaluate(slot);
            original.compare(f);
            ++evaluations;
          }
  for (unsigned id = 0; id < saves::ContinueResources::hotspot_count; ++id)
    for (unsigned slot = 1; slot <= 2; ++slot)
      for (unsigned position = 0; position < 9; ++position) {
        Fixture f(assets.version);
        f.state.live[0] = {0xffff, 1, 2, 3, 4, 0xaabbccdd};
        f.state.live[1] = {0xaaaa, 5, 6, 7, 8, 0x44332211};
        const auto h = content.hotspot(id, 0, 0);
        const std::array<std::uint16_t, 3> xs{h.x1, std::uint16_t(h.x1 + 1),
                                              h.x2};
        const std::array<std::uint16_t, 3> ys{h.y1, std::uint16_t(h.y1 + 1),
                                              h.y2};
        f.leader.leader_x = xs[position % 3];
        f.leader.leader_y = ys[position / 3];
        const auto key = 0xabcde000u + id * 2 + slot;
        context = "activate id=" + std::to_string(id) +
                  " slot=" + std::to_string(slot) +
                  " point=" + std::to_string(position);
        original.seed(f);
        original.invoke(original.l.activate, slot, id, key);
        f.hotspots.activate(slot, id, key, content);
        original.compare(f);
        ++activations;
        original.invoke(original.l.disable, slot);
        f.hotspots.disable(slot);
        original.compare(f);
        ++disables;
        f.state.live[slot - 1].mode =
            0xbeef; // Inactive reload must preserve this stale live entry.
        f.state.saved_modes[2 - slot] = std::uint8_t(id + 1);
        f.state.saved_ids[2 - slot] = id;
        f.state.saved_references[2 - slot] = key ^ 0xffffffff;
        original.seed(f);
        original.invoke(original.l.reload);
        f.hotspots.reload(content);
        original.compare(f);
        ++reloads;
      }
  std::cout << "PASS " << assets.title << ": " << evaluations
            << " hotspot evaluations, " << activations << " activations, "
            << disables << " disables, " << reloads << " reloads, "
            << original.instructions << " original instructions, "
            << original.fields << " compared fields\n";
}
} // namespace
int main(int argc, char **argv) {
  try {
    require(argc >= 2, "native_world_hotspots_reference pack.ebpak ...");
    for (int i = 1; i < argc; ++i)
      run(eb::load_game_assets(argv[i], eb::asset_profiles()));
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
