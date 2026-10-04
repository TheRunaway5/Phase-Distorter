// Exercise actual source selection, INIT_ENTITY and CREATE through the same
// native artwork hooks used by desktop play. No creation services are mocked.
#include "eb/main_cpu_65816.hpp"
#include "eb/native/npc_catalog.hpp"
#include "eb/native/enemy_sprite_catalog.hpp"
#include "eb/snes_bus.hpp"
#include "eb/source_entity_admission.hpp"
#include "eb/snapshot_archive.hpp"
#include "generated_assets.hpp"
#include "generated_profile.hpp"
#include <algorithm>
#include <array>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>
#include <vector>

namespace {
using namespace eb;
using namespace eb::native;
unsigned checks{};
std::string context;
void check(bool okay, const char *message) {
  ++checks;
  if (!okay) throw std::runtime_error(std::string(message) + ": " + context);
}
struct Fixture {
  std::unique_ptr<SnesBus> owned;
  SnesBus &bus;
  MainCpu65816 cpu;
  bool jp;
  unsigned first, free_actor, free_task, next_actor, next_task, npc, script;
  unsigned enabled, objects, photo, debug, flags, cell, row, create, retention, current;
  unsigned enemy_enabled, enemy_count, enemy_max;
  Fixture(const GameAssets &assets, unsigned width, MainCpuRuntime runtime,
          std::span<const std::uint8_t> content = {})
      : owned(std::make_unique<SnesBus>(content.empty() ? std::span<const std::uint8_t>(assets.image) : content,
                                       assets.version)),
        bus(*owned), cpu(bus), jp(assets.version == GameVersion::JP) {
    first = jp ? 0xa46 : 0xa50; free_actor = jp ? 0xa48 : 0xa52;
    free_task = jp ? 0xa4a : 0xa54; next_actor = jp ? 0xa94 : 0xa9e;
    next_task = jp ? 0x1250 : 0x125a; npc = jp ? 0x3098 : 0x2c9a;
    script = jp ? 0xa58 : 0xa62; enabled = jp ? 0x4dde : 0x4a58;
    objects = jp ? 0x4dec : 0x4a66; photo = jp ? 0xb6b8 : 0xb4ef;
    debug = jp ? 0x46f2 : 0x436c; flags = jp ? 0x9eb3 : 0x9c08;
    cell = jp ? 0xc02239 : 0xc0222b; row = jp ? 0xc0256a : 0xc0255c;
    create = jp ? 0xc01e5f : 0xc01e49; retention = jp ? 0xc0c698 : 0xc0c6b6;
    current = jp ? 0x1a38 : 0x1a42;
    enemy_enabled = jp ? 0x4de0 : 0x4a5a;
    enemy_count = jp ? 0x4de2 : 0x4a5c;
    enemy_max = jp ? 0x4de4 : 0x4a5e;
    bus.enable_native_sprite_runtime(true);
    cpu.set_runtime(runtime);
    cpu.set_world_preload_width(width);
    call(jp ? 0xc0925e : 0xc0927c, 0, 0); // Real source actor/task reset, including frame callbacks.
    call(jp ? 0xc01a7f : 0xc01a69, 0, 0); // Real miscellaneous-object and collision-identity initialization.
    put(first, 0xffff); pools(22, 70);
    for (unsigned i = 0; i < 30; ++i) {
      put(npc + i * 2, 0xffff); put(script + i * 2, 0xffff);
    }
    put(enabled, 1);
    put(enemy_enabled, 0xffff); put(enemy_max, 10);
    // Original resource exhaustion cannot stall any admitted source CREATE.
    const unsigned maps = jp ? 0x4a04 : 0x467e, graphics = jp ? 0x4d86 : 0x4a00;
    std::fill_n(bus.work_ram.begin() + maps, 0x380, 0xa5);
    std::fill_n(bus.work_ram.begin() + graphics, 88, 0xff);
    const auto guard = [maps, graphics](unsigned at, std::uint8_t value) {
      if ((at >= maps && at < maps + 0x380) || (at >= graphics && at < graphics + 88))
        throw std::runtime_error("NPC preload touched an exhausted original graphics pool");
      return value;
    };
    bus.debug_read_wram = guard; bus.debug_write_wram = guard;
    bus.write_byte(0x2100, 15); bus.write_byte(0x2105, 1);
    bus.write_byte(0x2107, 0x39); bus.write_byte(0x2108, 0x59);
    bus.write_byte(0x212c, 3);
  }
  void put(unsigned at, unsigned value) {
    bus.work_ram[at] = value; bus.work_ram[at + 1] = value >> 8;
  }
  unsigned get(unsigned at) const { return bus.work_ram[at] | unsigned(bus.work_ram[at + 1]) << 8; }
  void pools(unsigned roles, unsigned tasks) {
    put(free_actor, roles ? 0 : 0xffff);
    for (unsigned i = 0; i < roles; ++i) put(next_actor + i * 2, i + 1 == roles ? 0xffff : i * 2 + 2);
    put(free_task, tasks ? 0 : 0xffff);
    for (unsigned i = 0; i < tasks; ++i) put(next_task + i * 2, i + 1 == tasks ? 0xffff : i * 2 + 2);
  }
  void camera(unsigned x, unsigned y, unsigned tileset) {
    const auto &p = source_profile(bus.game_version());
    put(p.wram_background_scroll.layer1_x, x); put(p.wram_background_scroll.layer1_y, y);
    put(p.wram_loaded_map_tile_combination, tileset);
    put(p.party_state.leader_x, x + 128); put(p.party_state.leader_y, y + 112);
  }
  unsigned call(unsigned entry, unsigned a, unsigned x, bool far = true, unsigned y = 0) {
    cpu.emulation_mode = false; cpu.status_register = MainCpu65816::InterruptDisable;
    cpu.data_bank = 0x7e; cpu.direct_page = 0x1e00; cpu.stack_pointer = 0x1fff;
    cpu.program_counter = 0xcfff00; cpu.accumulator = a; cpu.x_index = x; cpu.y_index = y;
    if (far) cpu.execute_instruction<0x22>(entry, 4);
    else cpu.execute_instruction<0x20>(entry & 0xffff, 3);
    for (unsigned steps = 0; steps < 250000; ++steps) {
      if (cpu.program_counter == 0xcfff00 + (far ? 4 : 3) && cpu.stack_pointer == 0x1fff)
        return cpu.accumulator;
      cpu.step_instruction();
    }
    throw std::runtime_error("NPC preload source traversal failed to return: " + cpu.describe_registers());
  }
  bool contains(unsigned id) const {
    for (unsigned i = 0; i < 30; ++i) if (get(npc + i * 2) == id) return true;
    return false;
  }
  unsigned actor_count() const {
    unsigned count = 0, slot = get(first);
    while (slot != 0xffff) {
      check(slot < 60 && !(slot & 1) && count < 30, "Source active actor list is corrupt");
      ++count; slot = get(next_actor + slot);
    }
    return count;
  }
  unsigned task_count(unsigned byte_role) const {
    unsigned count = 0, task = get((jp ? 0xad0 : 0xada) + byte_role);
    while (task != 0xffff) {
      check(task < 140 && !(task & 1) && count < 70, "Source actor task chain is corrupt");
      ++count; task = get(next_task + task);
    }
    return count;
  }
  void frame() {
    put(0x2e, 1); // Source NEXT_FRAME_BUF_ID.
    call(jp ? 0xc088a3 : 0xc088b1, 0, 0);
    call(jp ? 0xc09445 : 0xc09466, 0, 0);
  }
};
NpcPlacement anchor(const GameAssets &assets, unsigned id) {
  NpcCatalog catalog(assets.image, npc_catalog_layout(assets.version, false));
  for (unsigned y = 0; y < 40; ++y)
    for (unsigned x = 0; x < 32; ++x)
      for (const auto &p : catalog.cell(x, y)) if (p.npc == id) return p;
  throw std::runtime_error("Missing authored NPC reference placement");
}

// Walking executes these source JSL sites, not the isolated row/cell loaders.
// Static placements retain canonical activation while moving actors scan wide.
void walking_column_handoff(const GameAssets &assets, MainCpuRuntime runtime) {
  for (unsigned id : {328u, 572u, 1530u, 1567u, 1246u, 676u})
    for (unsigned width : {256u, 398u, 522u, 800u, 1024u})
      for (bool right : {false, true}) {
        const auto p = anchor(assets, id);
        context = assets.title + " walking NPC" + std::to_string(id) + " width=" +
                  std::to_string(width) + (right ? " right" : " left");
        Fixture f(assets, width, runtime);
        const NpcCatalog catalog(assets.image, npc_catalog_layout(assets.version));
        const auto &definition = catalog.definition(id);
        if (definition.appearance == NpcAppearance::FlagOn && definition.event_flag)
          f.bus.work_ram[f.flags + (definition.event_flag - 1) / 8] |= 1u << ((definition.event_flag - 1) & 7);
        f.put(f.enabled, 0xffff);

        unsigned canonical_queries = 0, wider_queries = 0;
        for (int x = right ? 304 : -48; right ? x >= 264 : x <= -8; x += right ? -8 : 8) {
          const int camera_x = int(p.x) - x;
          f.camera(std::uint16_t(camera_x), p.y - 112, p.tileset);
          const unsigned pc = right ? (f.jp ? 0xc0160a : 0xc015f4) : (f.jp ? 0xc0165d : 0xc01647);
          f.cpu.emulation_mode = false; f.cpu.status_register = MainCpu65816::InterruptDisable;
          f.cpu.data_bank = 0x7e; f.cpu.direct_page = 0x1e00; f.cpu.stack_pointer = 0x1fff;
          f.cpu.accumulator = (camera_x / 8) + (right ? 34 : -3);
          f.cpu.x_index = (p.y - 112) / 8 - 1; f.cpu.program_counter = pc;
          const auto core_column = f.cpu.accumulator / 32;
          const auto extra = RenderDistance(width).activation_extension(
              f.bus.native_sprite_runtime()->resources()->artwork_bounds()) / 8;
          const auto wide_column = std::uint16_t(f.cpu.accumulator + (right ? int(extra) : -int(extra))) / 32;
          bool snapshotted = false;
          for (unsigned steps = 0; ; ++steps) {
            check(steps < 250000, "Walking source column failed to return");
            if (f.cpu.program_counter == f.cell) {
              canonical_queries += f.cpu.accumulator == core_column;
              wider_queries += f.cpu.accumulator == wide_column;
            }
            f.cpu.step_instruction();
            if (!snapshotted && id == 328 && width == 522 && right &&
                f.cpu.program_counter == pc && f.cpu.stack_pointer == 0x1fff) {
              // Suspend exactly between the canonical and additional scans.
              SnapshotArchive saved; saved(f.bus, f.cpu);
              Fixture restored(assets, width, runtime);
              SnapshotArchive loaded(saved.bytes()); loaded(restored.bus, restored.cpu); loaded.finish();
              for (unsigned more = 0; ; ++more) {
                check(more < 250000, "Restored source column failed to return");
                restored.cpu.step_instruction();
                if (restored.cpu.program_counter == pc + 4 && restored.cpu.stack_pointer == 0x1fff) break;
              }
              // The original independently resumes the same pending call below.
              for (unsigned more = 0; f.cpu.program_counter != pc + 4 || f.cpu.stack_pointer != 0x1fff; ++more) {
                check(more < 250000, "Original pending source column failed to return");
                if (f.cpu.program_counter == f.cell) {
                  canonical_queries += f.cpu.accumulator == core_column;
                  wider_queries += f.cpu.accumulator == wide_column;
                }
                f.cpu.step_instruction();
              }
              check(f.bus.work_ram == restored.bus.work_ram && f.cpu.accumulator == restored.cpu.accumulator &&
                    f.cpu.x_index == restored.cpu.x_index && f.cpu.y_index == restored.cpu.y_index &&
                    f.cpu.status_register == restored.cpu.status_register &&
                    f.cpu.instruction_count == restored.cpu.instruction_count,
                    "Snapshot changed the pending canonical/wide column handoff");
              snapshotted = true;
            }
            if (f.cpu.program_counter == pc + 4 && f.cpu.stack_pointer == 0x1fff) break;
          }
        }
        check(canonical_queries > 0 && (width == 256 || wider_queries > 0),
              "Horizontal streaming skipped its canonical or additional source column");
        check(f.contains(id), "Walking scan failed to activate a canonical stationary NPC/prop");
      }
}
void actual_edges(const GameAssets &assets, MainCpuRuntime runtime) {
  const auto p = anchor(assets, 303);
  check(p.x == 1248 && p.y == 6440, "NPC303 source placement changed");
  NpcCatalog catalog(assets.image, npc_catalog_layout(assets.version, false));
  check(catalog.definition(303).sprite == 68 && catalog.definition(303).script == 12,
        "NPC303 authored movement resource changed");
  for (unsigned width : {256u, 298u, 398u, 522u, 800u, 1024u})
    for (int edge : {-65, -64, 319, 320}) {
      context = assets.title + " NPC303 width=" + std::to_string(width) + " dx=" + std::to_string(edge) +
                (runtime == MainCpuRuntime::Ported ? " ported" : " legacy");
      Fixture f(assets, width, runtime);
      f.camera(std::uint16_t(p.x - edge), p.y - 112, p.tileset);
      f.call(f.cell, p.x / 256, p.y / 256);
      const bool native = edge >= -64 && edge < 320;
      check(f.contains(303) == (native || width > 256), "Visible moving NPC303 was not source activated");
      if (f.contains(303)) {
        unsigned role = 0;
        while (f.get(f.npc + role * 2) != 303) ++role;
        const auto &profile = source_profile(assets.version);
        check(f.get(f.script + role * 2) == 12 &&
              f.get(profile.wram_entity_world_coordinates.x + role * 2) == p.x &&
              f.get(profile.wram_entity_world_coordinates.y + role * 2) == p.y,
              "Extra source CREATE changed NPC303's authored script/position");
        const auto artwork = f.bus.native_sprite_runtime()->snapshot(role * 2);
        check(artwork && !artwork->image, "Dormant NPC303 pose was invented at CREATE");
        // Source initialization deliberately stays hidden until its real action
        // task selects a pose. This test does not invent a dormant pose.
      }
      const unsigned count = f.actor_count();
      f.call(f.cell, p.x / 256, p.y / 256);
      check(f.actor_count() == count, "Repeated source scan duplicated NPC identities");
    }
}
void scene_gates(const GameAssets &assets) {
  const auto p = anchor(assets, 303);
  for (unsigned gate = 0; gate < 9; ++gate) {
    context = assets.title + " scene gate=" + std::to_string(gate);
    Fixture f(assets, 1024, MainCpuRuntime::Ported);
    f.camera(p.x + 65, p.y - 112, p.tileset);
    if (gate == 0) f.bus.write_byte(0x2100, 0x80); // Initial blank must still preload.
    if (gate == 1) f.put(f.photo, 1);
    if (gate == 2) f.put(f.debug, 1);
    if (gate == 3) f.put(source_profile(assets.version).wram_battle_mode_flag, 1);
    if (gate == 4) f.bus.write_byte(0x2130, 0x20);
    if (gate == 5) { f.bus.write_byte(0x212e, 1); f.bus.write_byte(0x2123, 2); }
    if (gate == 6) f.bus.write_byte(0x2105, 3);
    if (gate == 7) f.put(f.enabled, 0);
    if (gate == 8) f.put(f.objects, 1);
    f.call(f.cell, p.x / 256, p.y / 256);
    check(f.contains(303) == (gate == 0), "Guarded NPC preload ignored authored scene isolation");
  }
}
void source_guard(const GameAssets &assets) {
  const auto p = anchor(assets, 303);
  for (unsigned fault = 0; fault < 10; ++fault) {
    context = assets.title + " source capacity fault=" + std::to_string(fault);
    Fixture f(assets, 1024, MainCpuRuntime::Ported);
    f.camera(p.x + 65, p.y - 112, p.tileset);
    if (fault == 0) f.pools(0, 70);
    if (fault == 1) f.pools(22, 0);
    if (fault == 2) f.pools(8, 70);
    if (fault == 3) f.pools(22, 16);
    if (fault == 4) f.put(f.next_actor, 0); // Finite rejection of source free-list cycle.
    if (fault == 5) f.put(f.next_task, 0);
    if (fault == 6) f.put(f.free_actor, 61);
    if (fault == 7) f.put(f.free_task, 141);
    if (fault == 8) f.put(f.enemy_max, 11);
    if (fault == 9) f.put(f.enemy_count, 11);
    f.call(f.cell, p.x / 256, p.y / 256);
    check(!f.contains(303) && ((fault == 2 || fault == 3) || f.actor_count() == 0),
          "Extra source CREATE exhausted/clobbered a logical actor/task pool");
    check(f.bus.native_sprite_runtime()->diagnostics().live_resources == f.actor_count(),
          "Rejected NPC leaked a native creation lease");
  }
  // Even canonical source admission fails safely when INIT_ENTITY cannot find
  // a role: it must never interpret the original allocation failure as role0.
  for (unsigned fault = 0; fault < 2; ++fault) {
    Fixture f(assets, 1024, MainCpuRuntime::Ported);
    f.camera(p.x, p.y - 112, p.tileset); f.pools(fault ? 22 : 0, fault ? 0 : 70);
    f.put(f.npc, 0xa55a);
    f.call(f.cell, p.x / 256, p.y / 256);
    check(f.get(f.npc) == 0xa55a && f.actor_count() == 0, "Full canonical pool clobbered role0");
  }
}
std::vector<std::uint8_t> crowd(const GameAssets &assets, unsigned extra_count, unsigned canonical_count,
                               unsigned preview_script = 0, unsigned preview_type = 1) {
  auto image = assets.image;
  const auto l = npc_catalog_layout(assets.version, false);
  std::fill_n(image.begin() + l.cell_pointers, 32 * 40 * 2, 0);
  const auto put = [&](unsigned at, unsigned value) { image[at] = value; image[at + 1] = value >> 8; };
  unsigned list = l.placements;
  const auto install = [&](unsigned cell_x, unsigned count, unsigned first_id, unsigned local_x) {
    put(l.cell_pointers + (25 * 32 + cell_x) * 2, list & 0xffff);
    put(list, count);
    for (unsigned i = 0; i < count; ++i) {
      const unsigned id = first_id + i, at = list + 2 + i * 4;
      put(at, id); image[at + 2] = 40; image[at + 3] = local_x + i;
      std::copy_n(assets.image.begin() + l.definitions + 303 * 17, 17,
                  image.begin() + l.definitions + id * 17);
      put(l.definitions + id * 17 + 6, 0); image[l.definitions + id * 17 + 8] = 0;
      if (preview_script) {
        image[l.definitions + id * 17] = preview_type;
        put(l.definitions + id * 17 + 4, preview_script);
      }
    }
    list += 2 + count * 4;
  };
  install(3, extra_count, 1, 100); install(4, canonical_count, 100, 100);
  const unsigned sectors = source_profile(assets.version).rom_map_tileset_palette_sectors;
  std::fill_n(image.begin() + sectors, 32 * 80, 0);
  return image;
}
void priority_and_preview(const GameAssets &assets) {
  for (unsigned pending : {0u, 10u, 20u}) {
    context = assets.title + " max-width canonical pending=" + std::to_string(pending);
    const auto content = crowd(assets, 21, pending);
    Fixture f(assets, 1024, MainCpuRuntime::Ported, content);
    f.camera(1024, 6400, 0);
    f.call(f.row, 128, 805);
    for (unsigned id = 100; id < 100 + pending; ++id)
      check(f.contains(id), "Wide row scan consumed a pending canonical NPC's capacity");
    check(f.actor_count() <= 22 && f.bus.native_sprite_runtime()->diagnostics().live_resources == f.actor_count(),
          "Wide crowd traversal exceeded source roles or native resources");
    check(f.actor_count() <= std::max(14u, pending), "Extra NPC admission spent its reserved canonical roles");
  }
  for (unsigned script : {8u, 605u, 606u}) for (unsigned type : {1u, 3u}) {
    context = assets.title + " preview script=" + std::to_string(script) + " type=" + std::to_string(type);
    const auto content = crowd(assets, 1, 0, script, type);
    Fixture f(assets, 1024, MainCpuRuntime::Ported, content);
    f.camera(1024, 6400, 0); f.call(f.row, 128, 805);
    check(!f.contains(1) && f.actor_count() == 0, "Graphical preview NPC unnecessarily occupied an extra source role");
  }
  const auto layout = npc_catalog_layout(assets.version, false);
  for (unsigned type : {1u, 2u, 3u}) for (unsigned appearance : {1u, 2u}) for (bool flag : {false, true}) {
    context = assets.title + " source appearance type=" + std::to_string(type) +
              " style=" + std::to_string(appearance) + " flag=" + std::to_string(flag);
    auto content = crowd(assets, 1, 0);
    const unsigned at = layout.definitions + 17;
    content[at] = type; content[at + 6] = 71; content[at + 7] = 0; content[at + 8] = appearance;
    Fixture f(assets, 1024, MainCpuRuntime::Ported, content);
    if (flag) f.bus.work_ram[f.flags + 70 / 8] |= 1u << (70 & 7);
    f.camera(1024, 6400, 0); f.call(f.row, 128, 805);
    check(f.contains(1) == (flag == (appearance == 2)), "Expanded source loading bypassed NPC appearance conditions");
  }
}
void initialization_task_capacity(const GameAssets &assets) {
  context = assets.title + " crowded first source action frame, 30 free tasks";
  const auto content = crowd(assets, 21, 0);
  Fixture f(assets, 1024, MainCpuRuntime::Ported, content);
  f.put(f.enemy_enabled, 0); // Isolate the proven NPC worker-demand regression.
  f.pools(22, 30); f.camera(1024, 6400, 0);
  f.call(f.row, 128, 805);
  const unsigned admitted = f.actor_count();
  check(admitted > 0, "Crowded initialization task fixture admitted no moving NPCs");
  for (unsigned role = 0; role < admitted; ++role)
    check(f.task_count(role * 2) == 1, "CREATE did not allocate exactly its source main task");
  f.frame();
  unsigned children = 0;
  for (unsigned role = 0; role < admitted; ++role) {
    const unsigned tasks = f.task_count(role * 2);
    children += tasks - 1;
  }
  std::cout << assets.title << " initialization: " << admitted << " source NPC12 CREATEs, "
            << children << " of " << admitted * 2 << " required child tasks\n";
  for (unsigned role = 0; role < admitted; ++role)
    check(f.task_count(role * 2) == 3, "Extra NPC12 lost an authored animation/retention or collision child task");
}
void task_content_proofs(const GameAssets &assets) {
  context = assets.title + " immutable source task content proof";
  const SourceTaskContentProof complete{true, true};
  check(verify_source_task_content(assets.image, assets.version) == complete,
        "Reviewed regional action content did not match its task proof");
  OverworldSpriteRuntime original(assets.image, assets.version), copied(original);
  check(copied.source_task_content_proof() == complete, "Copy lost derived source task content proof");
  SnapshotArchive archive; archive(original);
  OverworldSpriteRuntime restored(assets.image, assets.version);
  SnapshotArchive input(archive.bytes()); input(restored); input.finish();
  check(restored.source_task_content_proof() == complete, "Restore lost independently derived task content proof");
  for (bool movement : {false, true}) {
    auto altered = assets.image;
    altered[movement ? (assets.version == GameVersion::JP ? 0x3a2d4 : 0x3a2e4) : 0x30195] ^= 1;
    OverworldSpriteRuntime changed(altered, assets.version);
    const auto expected = movement ? SourceTaskContentProof{false, true} : SourceTaskContentProof{true, false};
    check(changed.source_task_content_proof() == expected, "Changed authored program retained a task bound");
    OverworldSpriteRuntime changed_copy(changed);
    check(changed_copy.source_task_content_proof() == expected, "Copy borrowed another asset owner's task proof");
    SnapshotArchive restore_same_state(archive.bytes()); restore_same_state(changed); restore_same_state.finish();
    check(changed.source_task_content_proof() == expected, "Snapshot restored serialized rather than derived task proof");
  }
  auto content = crowd(assets, 1, 0);
  check(verify_source_task_content(content, assets.version) == complete,
        "Unrelated NPC definition/placement changes invalidated action content proof");
  const unsigned directory = assets.version == GameVersion::JP ? 0x4002f : 0x400d4;
  // A reviewed program bound may not follow a changed directory to an unknown
  // program, even though the authored action-region signatures still match.
  for (unsigned script : {12u, 16u, 25u, 32u, 588u, 605u, assets.version == GameVersion::JP ? 860u : 864u}) {
    auto changed = content; changed[directory + script * 3] ^= 1;
    Fixture f(assets, 1024, MainCpuRuntime::Ported, changed);
    check(!SourceEntityAdmission::script_task_demand(f.bus.scene_read_view(), script),
          "Changed source action directory inherited an unrelated task bound");
  }
  Fixture unknown(assets, 1024, MainCpuRuntime::Ported, crowd(assets, 1, 0, 601));
  unknown.camera(1024, 6400, 0); unknown.call(unknown.row, 128, 805);
  check(!unknown.contains(1), "Unproven extra moving program bypassed bounded source admission");
  Fixture alias(assets, 1024, MainCpuRuntime::Ported, crowd(assets, 1, 0, 6));
  alias.camera(1024, 6400, 0); alias.call(alias.row, 128, 805);
  check(alias.contains(1), "Reviewed script6 alias lost authoritative extra activation");
}
void enemy_capacity_coexistence(const GameAssets &assets) {
  // Max10 enemies share the source's22-role pool. Each ordinary enemy has up
  // to four tasks, plus one possible butterfly's fifth task. All reservations
  // must protect main tasks and workers before their first source yield.
  const auto data = enemy_sprite_catalog_layout(assets.version);
  unsigned enemy = 0, sprite = 0;
  for (; enemy < data.enemy_count; ++enemy) {
    const unsigned at = data.enemies + enemy * data.enemy_stride + data.enemy_sprite_offset;
    const unsigned script = assets.image[at + 13] | unsigned(assets.image[at + 14]) << 8;
    sprite = assets.image[at] | unsigned(assets.image[at + 1]) << 8;
    if (sprite && (!script || script == 19)) break;
  }
  check(enemy < data.enemy_count && sprite, "Missing authored default19 enemy resource");
  for (unsigned enemies : {0u, 5u, 10u}) {
    context = assets.title + " NPC crowd with " + std::to_string(enemies) + " authored enemies";
    Fixture f(assets, 1024, MainCpuRuntime::Ported, crowd(assets, 21, 0));
    f.camera(1024, 6400, 0);
    const auto &profile = source_profile(assets.version);
    for (unsigned i = 0; i < enemies; ++i) {
      const unsigned role = f.call(f.create, sprite, 19, true, 0xffff);
      check(role < 22, "Canonical enemy coexistence CREATE failed");
      f.put(f.npc + role * 2, 0x8023);
      f.put((f.jp ? 0x3110 : 0x2d12) + role * 2, enemy);
      f.put(profile.wram_entity_world_coordinates.x + role * 2, 1600 + i * 64);
      f.put(profile.wram_entity_world_coordinates.y + role * 2, 6600);
      f.put(f.enemy_count, i + 1);
    }
    f.call(f.row, 128, 805);
    const unsigned total = f.actor_count(), extra = total - enemies;
    check(extra > 0 && total + (10 - enemies) <= 22,
          "Expanded NPCs consumed future authored enemy roles");
    for (unsigned frame = 0; frame < 4; ++frame) f.frame();
    for (unsigned role = 0; role < total; ++role) {
      check(f.task_count(role * 2) == 3, "NPC/enemy coexistence lost an authored worker after initialization");
    }
    const auto capacity = SourceEntityAdmission::inspect(f.bus.scene_read_view());
    check(capacity && capacity->can_admit_enemy_group(10 - enemies, (10 - enemies) * 4) == (enemies != 10),
          "NPC initialization spent reserved future enemy task capacity");
  }
}
void negative_source_camera(const GameAssets &assets) {
  for (unsigned id : {1261u, 72u}) {
    const auto p = anchor(assets, id);
    context = assets.title + " negative authored camera NPC" + std::to_string(id);
    check((id == 1261 && p.x == 80 && p.y == 416 && p.tileset == 30) ||
          (id == 72 && p.x == 8072 && p.y == 96 && p.tileset == 17),
          "Actual negative-camera NPC source placement changed");
    Fixture f(assets, 1024, MainCpuRuntime::Ported);
    f.camera(std::uint16_t(p.x - 128), std::uint16_t(p.y - 112), p.tileset);
    f.put(f.enemy_enabled, 0);
    check(SourceEntityAdmission::ordinary_world(f.bus.scene_read_view()),
          "Valid signed source camera was excluded from ordinary scene admission");
    const auto capacity = SourceEntityAdmission::inspect(f.bus.scene_read_view());
    check(capacity && capacity->can_admit_extra_npc(3),
          "Negative source camera lost its bounded canonical reservations");
    EntityPreload policy; policy.set_world_width(1024);
    f.put(0x1e20, id);
    std::uint32_t operand = 0xffc0; std::uint16_t a = 0;
    policy.adapt(assets.version, f.jp ? 0xc023a3 : 0xc02395, 0xa9, 3, operand, a, &f.bus, 0x1e00);
    check(operand != 0xffc0, "Negative source camera disabled verified moving-NPC preload bounds");
    f.call(f.cell, p.x / 256, p.y / 256);
    check(f.contains(id), "Real source negative-camera placement was not activated");
    unsigned role = 0; while (f.get(f.npc + role * 2) != id) ++role;
    f.put(f.current, role); operand = 384;
    policy.adapt(assets.version, f.jp ? 0xc0c6da : 0xc0c6f8, 0xc9, 3, operand, a, &f.bus, 0x1e00);
    check(operand > 384 && f.call(f.retention, 0, 0) != 0,
          "Negative source camera lost authored retention or expanded bounds");
  }
}
void retention_and_enemy_isolation(const GameAssets &assets) {
  const auto p = anchor(assets, 303);
  for (unsigned width : {398u, 1024u}) for (unsigned id : {303u, 1u, 0xffffu}) {
    context = assets.title + " retention width=" + std::to_string(width) + " NPC=" + std::to_string(id);
    Fixture f(assets, width, MainCpuRuntime::Ported);
    f.camera(p.x + 200, p.y - 112, p.tileset);
    f.put(f.current, 0); f.put(f.npc, id);
    const auto &profile = source_profile(assets.version);
    f.put(profile.wram_entity_world_coordinates.x, p.x);
    f.put(profile.wram_entity_world_coordinates.y, p.y);
    // Source NPC1 is a Person with script605, eligible for graphical preview.
    check((f.call(f.retention, 0, 0) != 0) == (id == 303),
          "Retention extended preview/custom actors or dropped a visible moving NPC");
  }
  Fixture f(assets, 1024, MainCpuRuntime::Ported);
  f.camera(1024, 6400, 0);
  f.put(f.photo, 1); // NPC/enemy extension must leave authored photo paths alone.
  struct Site {unsigned pc, opcode, length, operand, a;};
  const std::array<Site, 5> sites{{
    {f.jp ? 0xc02b55u : 0xc02b45u, 0x69, 3, 5, 17},
    {f.jp ? 0xc02a87u : 0xc02a77u, 0xa8, 1, 0, 152},
    {f.jp ? 0xc0161cu : 0xc01606u, 0x22, 4, f.jp ? 0xc02b65u : 0xc02b55u, 200},
    {f.jp ? 0xc0166fu : 0xc01659u, 0x22, 4, f.jp ? 0xc02b65u : 0xc02b55u, 152},
    {f.jp ? 0xc02530u : 0xc02522u, 0x22, 4, f.create, 68}
  }};
  EntityPreload policy; policy.set_world_width(1024);
  for (const auto &site : sites) {
    std::uint32_t operand = site.operand; std::uint16_t a = site.a;
    policy.adapt(assets.version, site.pc, site.opcode, site.length, operand, a, &f.bus, 0x1e00);
    check(operand == site.operand && a == site.a, "Source admission changed authored photo instructions");
  }
}
} // namespace
int main(int argc, char **argv) {
  try {
    check(argc >= 2, "npc_preload_reference pack.ebpak ...");
    for (int i = 1; i < argc; ++i) {
      const auto assets = load_game_assets(argv[i], asset_profiles());
      for (auto runtime : {MainCpuRuntime::Ported, MainCpuRuntime::Legacy}) {
        walking_column_handoff(assets, runtime); actual_edges(assets, runtime);
      }
      scene_gates(assets); source_guard(assets); priority_and_preview(assets);
      initialization_task_capacity(assets);
      task_content_proofs(assets); negative_source_camera(assets); enemy_capacity_coexistence(assets);
      retention_and_enemy_isolation(assets);
      std::cout << "PASS " << assets.title << ": actual NPC303 source CREATE at both widescreen edges; "
                   "scene gates, poisoned graphics pools, bounded logical admission, canonical priority and preview/enemy isolation\n";
    }
    std::cout << checks << " NPC preload source checks passed\n";
  } catch (const std::exception &error) { std::cerr << error.what() << '\n'; return 1; }
}
