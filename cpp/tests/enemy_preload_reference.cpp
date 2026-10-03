// Real regional SPAWN_HORIZONTAL/SELECT/CREATE execute with native artwork.
// Source selection supplies the enemy identity and position; no dormant pose
// or predicted encounter is used to establish widescreen coverage.
#include "eb/main_cpu_65816.hpp"
#include "eb/native/enemy_sprite_catalog.hpp"
#include "eb/native/npc_catalog.hpp"
#include "eb/source_enemy_preload.hpp"
#include "eb/source_entity_admission.hpp"
#include "eb/snes_bus.hpp"
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
unsigned checks{};
std::string context;
void require(bool okay, const char *message) {
    ++checks;
    if (!okay) throw std::runtime_error(std::string(message) + ": " + context);
}
struct Selection { unsigned x, y, encounter, width, height; };
using Event = std::array<unsigned, 5>;
struct Fixture {
    std::unique_ptr<eb::SnesBus> bus;
    eb::MainCpu65816 cpu;
    const eb::SourceProfile &profile;
    bool jp;
    unsigned row, column, select, first, next_actor, free_actor, free_task, next_task;
    unsigned npc, scripts, enabled, enemy_enabled, count, maximum, spawn_counter;
    unsigned create, random, terrain, erase, failures, enemy_ids, current, piracy;
    std::vector<Selection> selections;
    std::vector<Event> events;
    Fixture(const eb::GameAssets &assets, unsigned width, std::span<const std::uint8_t> content = {})
        : bus(std::make_unique<eb::SnesBus>(content.empty() ? std::span<const std::uint8_t>(assets.image) : content,
                                          assets.version)), cpu(*bus),
          profile(eb::source_profile(assets.version)), jp(assets.version == eb::GameVersion::JP) {
        row = jp ? 0xc02a7b : 0xc02a6b; column = jp ? 0xc02b65 : 0xc02b55;
        select = jp ? 0xc02676 : 0xc02668;
        first = jp ? 0xa46 : 0xa50; next_actor = jp ? 0xa94 : 0xa9e;
        free_actor = jp ? 0xa48 : 0xa52; free_task = jp ? 0xa4a : 0xa54;
        next_task = jp ? 0x1250 : 0x125a; npc = jp ? 0x3098 : 0x2c9a;
        scripts = jp ? 0xa58 : 0xa62; enabled = jp ? 0x4dde : 0x4a58;
        enemy_enabled = jp ? 0x4de0 : 0x4a5a; count = jp ? 0x4de2 : 0x4a5c;
        maximum = jp ? 0x4de4 : 0x4a5e; spawn_counter = jp ? 0x4e00 : 0x4a7a;
        create = jp ? 0xc01e5f : 0xc01e49; random = jp ? 0xc08e8b : 0xc08e9a;
        terrain = jp ? 0xc06161 : 0xc05f33; erase = jp ? 0xc0214e : 0xc02140;
        failures = jp ? 0x4dee : 0x4a68; enemy_ids = jp ? 0x3110 : 0x2d12;
        current = jp ? 0x1a38 : 0x1a42; piracy = jp ? 0xb6ea : 0xb539;
        bus->enable_native_sprite_runtime(true); cpu.set_runtime(eb::MainCpuRuntime::Ported);
        cpu.set_world_preload_width(width);
        call(jp ? 0xc0925e : 0xc0927c, 0, 0); // Real source actor/task reset and callbacks.
        call(jp ? 0xc01a7f : 0xc01a69, 0, 0); // Includes absent party roles' no-collision sentinel.
        put(first, 0xffff); pools(22, 70);
        for (unsigned slot = 0; slot < 30; ++slot) {
            put(next_actor + slot * 2, slot == 21 || slot == 29 ? 0xffff : slot * 2 + 2);
            put(npc + slot * 2, 0xffff); put(scripts + slot * 2, 0xffff); put(enemy_ids + slot * 2, 0xffff);
        }
        for (unsigned task = 0; task < 70; ++task)
            put(next_task + task * 2, task == 69 ? 0xffff : task * 2 + 2);
        put(enabled, 1); put(enemy_enabled, 1); put(maximum, 10);
        put(0x24, 0x1234); put(0x26, 0x5678);
        bus->write_byte(0x2100, 15); bus->write_byte(0x2105, 1);
        bus->write_byte(0x2107, 0x39); bus->write_byte(0x2108, 0x59); bus->write_byte(0x212c, 3);
        camera(1312, 6240, 2);
        events.clear();
    }
    void put(unsigned at, unsigned value) { bus->work_ram[at] = value; bus->work_ram[at + 1] = value >> 8; }
    unsigned get(unsigned at) const { return bus->work_ram[at] | unsigned(bus->work_ram[at + 1]) << 8; }
    void pools(unsigned roles, unsigned tasks) {
        put(free_actor, roles ? 0 : 0xffff); put(free_task, tasks ? 0 : 0xffff);
        for (unsigned i = 0; i < roles; ++i)
            put(next_actor + i * 2, i + 1 == roles ? 0xffff : i * 2 + 2);
        for (unsigned i = 0; i < tasks; ++i)
            put(next_task + i * 2, i + 1 == tasks ? 0xffff : i * 2 + 2);
    }
    void camera(unsigned x, unsigned y, unsigned combo) {
        put(profile.wram_background_scroll.layer1_x, x); put(profile.wram_background_scroll.layer1_y, y);
        put(profile.party_state.leader_x, x + 128); put(profile.party_state.leader_y, y + 112);
        put(profile.wram_loaded_map_tile_combination, combo);
    }
    void call(unsigned entry, unsigned a, unsigned x, bool far = true, unsigned y = 0,
              unsigned site = 0xcfff00) {
        cpu.emulation_mode = false; cpu.status_register = eb::MainCpu65816::InterruptDisable;
        cpu.data_bank = 0x7e; cpu.direct_page = 0x1e00; cpu.stack_pointer = 0x1fff;
        cpu.program_counter = site; cpu.accumulator = a; cpu.x_index = x; cpu.y_index = y;
        if (far) cpu.execute_instruction<0x22>(entry, 4);
        else cpu.execute_instruction<0x20>(entry & 0xffff, 3);
        for (unsigned steps = 0; steps < 2000000; ++steps) {
            if (cpu.program_counter == site + (far ? 4 : 3) && cpu.stack_pointer == 0x1fff) return;
            if (cpu.program_counter == select)
                selections.push_back({cpu.accumulator, cpu.x_index, cpu.y_index,
                                      get(jp ? 0x4de8 : 0x4a62), get(jp ? 0x4dea : 0x4a64)});
            if (cpu.program_counter == random) events.push_back({0, get(0x24), get(0x26), 0, 0});
            if (cpu.program_counter == create) events.push_back({1, cpu.accumulator, cpu.x_index, cpu.y_index, 0});
            if (cpu.program_counter == terrain) events.push_back({2, cpu.accumulator, cpu.x_index, cpu.y_index, 0});
            if (cpu.program_counter == erase) events.push_back({3, cpu.accumulator, 0, 0, 0});
            cpu.step_instruction();
        }
        throw std::runtime_error("Actual enemy source traversal did not return: " + cpu.describe_registers());
    }
    void select_cell(unsigned x, unsigned y, unsigned encounter) {
        put(jp ? 0x4de8 : 0x4a62, 8); put(jp ? 0x4dea : 0x4a64, 8);
        call(select, x, y, false, encounter, 0xc0ff00);
    }
    void frame() {
        put(0x2e, 1);
        call(jp ? 0xc088a3 : 0xc088b1, 0, 0); // Real source OAM_CLEAR opens the draw buffer.
        call(jp ? 0xc09445 : 0xc09466, 0, 0);
    }
    unsigned actor_count() const {
        unsigned size = 0, role = get(first);
        while (role != 0xffff) {
            require(role < 60 && !(role & 1) && size < 30, "Corrupt actual source actor chain");
            ++size; role = get(next_actor + role);
        }
        return size;
    }
    unsigned task_count(unsigned role) const {
        unsigned size = 0, task = get((jp ? 0xad0 : 0xada) + role * 2);
        while (task != 0xffff) {
            require(task < 140 && !(task & 1) && size < 70, "Corrupt actual source task chain");
            ++size; task = get(next_task + task);
        }
        return size;
    }
    bool selected(unsigned x, unsigned y, unsigned encounter) const {
        return std::any_of(selections.begin(), selections.end(), [&](const auto &s) {
            return s.x == x && s.y == y && s.encounter == encounter;
        });
    }
};

void twoson_selection(const eb::GameAssets &assets) {
    // Actual authored cell18 is partly visible at width522. Native source
    // scanning starts at cell19, so resource readiness alone cannot cover it.
    Fixture native(assets, 256); native.call(native.row, 156, 784);
    require(!native.selected(18, 98, 17) && native.get(native.spawn_counter) != 0,
            "Native source selection fixture was changed or vacuous");
    for (unsigned width : {398u, 522u, 800u, 1024u}) {
        context = assets.title + " real Twoson row width=" + std::to_string(width);
        Fixture wide(assets, width); wide.call(wide.row, 156, 784);
        require(wide.selected(18, 98, 17), "Actual source row omitted Twoson cell(18,98)");
        const int margin = (width - 256) / 2;
        for (unsigned x = unsigned(1312 - margin - 32) / 64; x <= unsigned(1312 + 256 + margin + 31) / 64; ++x)
            require(std::any_of(wide.selections.begin(), wide.selections.end(), [x](auto s) {
                return s.y == 98 && x >= s.x && x < s.x + s.width / 8;
            }), "Authored row traversal leaves a visible/preload cell gap");
    }
}

void source_selection_parity(const eb::GameAssets &assets) {
    // The same authored cell must have exactly the original chance, group,
    // ordered RAND, native CREATE, terrain and publication behavior whenever
    // the reserved physical pools admit it. No boundary is intercepted.
    context = assets.title + " source selected-cell parity";
    Fixture native(assets, 256), wide(assets, 522);
    native.put(native.piracy, 1); wide.put(wide.piracy, 1); // source authored bypass branch
    native.select_cell(18, 98, 17); wide.select_cell(18, 98, 17);
    require(native.events == wide.events, "Widescreen altered source selected-cell RNG/CREATE/terrain order");
    require(native.bus->work_ram == wide.bus->work_ram, "Widescreen altered source selected-cell memory");
    require(wide.get(wide.count) >= 2 && wide.actor_count() == wide.get(wide.count),
            "Real selected-cell CREATE/terrain fixture admitted no group");
    const unsigned admitted = wide.actor_count();
    for (unsigned frame = 0; frame < 4; ++frame)
        wide.frame();
    for (unsigned role = 0; role < admitted; ++role) {
        if (wide.get(wide.npc + role * 2) < 0x8000 || wide.task_count(role) < 3)
            std::cerr << context << " role=" << role << " npc=" << wide.get(wide.npc + role * 2)
                      << " script=" << wide.get(wide.scripts + role * 2) << " tasks=" << wide.task_count(role)
                      << " collision=" << wide.get((wide.jp ? 0x2c9c : 0x289e) + role * 2) << '\n';
        require(wide.get(wide.npc + role * 2) >= 0x8000 && wide.task_count(role) >= 3,
                "Selected enemy lost its source animation/retention or collision worker");
        const auto image = wide.bus->native_sprite_runtime()->snapshot(role * 2);
        require(image && image->image, "Actual source enemy initialization did not select native artwork");
    }
}

std::vector<std::uint8_t> no_pending_npcs(const eb::GameAssets &assets) {
    auto content = assets.image;
    const auto layout = eb::native::npc_catalog_layout(assets.version, false);
    std::fill_n(content.begin() + layout.cell_pointers, 32 * 40 * 2, 0);
    return content;
}
void source_capacity(const eb::GameAssets &assets) {
    const auto content = no_pending_npcs(assets);
    for (unsigned fault = 0; fault < 7; ++fault) {
        context = assets.title + " real source capacity fault=" + std::to_string(fault);
        Fixture expected(assets, 256, content), guarded(assets, 1024, content);
        expected.put(expected.maximum, 0); expected.put(expected.piracy, 1);
        guarded.put(guarded.piracy, 1);
        if (fault == 0) guarded.pools(0, 70);
        if (fault == 1) guarded.pools(22, 0);
        if (fault == 2) guarded.pools(1, 70);
        if (fault == 3) guarded.pools(22, 15);
        if (fault == 4) guarded.put(guarded.next_actor, 0);
        if (fault == 5) guarded.put(guarded.next_task, 0);
        if (fault == 6) guarded.put(guarded.free_actor, 61);
        expected.select_cell(18, 98, 17); guarded.select_cell(18, 98, 17);
        if (fault == 2) {
            // Source also permits partial groups at its population maximum.
            // A later smaller suffix can fit after an earlier prefix rejects.
            require(guarded.actor_count() <= 1 && guarded.get(guarded.count) == guarded.actor_count() &&
                    guarded.bus->native_sprite_runtime()->diagnostics().live_resources == guarded.actor_count(),
                    "Partial selected-group admission exceeded its one real actor role");
            continue;
        }
        require(expected.events == guarded.events && guarded.get(guarded.count) == 0 &&
                guarded.get(guarded.failures) == expected.get(expected.failures) && guarded.get(guarded.failures),
                "Pool admission failed to preserve original selected-group rejection protocol");
        require(guarded.get(guarded.first) == 0xffff &&
                guarded.bus->native_sprite_runtime()->diagnostics().live_resources == 0,
                "Rejected enemy CREATE clobbered/leaked an actor");
    }
    // A real previously selected enemy has only its main task at CREATE.
    // All three possible children must remain reserved before its first yield.
    context = assets.title + " pending source enemy workers";
    Fixture pending(assets, 1024, content);
    pending.pools(22, 18);
    const auto definitions = eb::native::enemy_sprite_catalog_layout(assets.version);
    unsigned enemy = 0, sprite = 0;
    for (; enemy < definitions.enemy_count; ++enemy) {
        const unsigned at = definitions.enemies + enemy * definitions.enemy_stride + definitions.enemy_sprite_offset;
        const unsigned script = assets.image[at + 13] | unsigned(assets.image[at + 14]) << 8;
        if (script == 25) { sprite = assets.image[at] | unsigned(assets.image[at + 1]) << 8; break; }
    }
    require(enemy < definitions.enemy_count && sprite, "Missing actual enemy25 reference definition");
    pending.call(pending.create, sprite, 25, true, 0xffff);
    pending.put(pending.npc, 0x8023); pending.put(pending.enemy_ids, enemy); pending.put(pending.count, 1);
    pending.put(pending.profile.wram_entity_world_coordinates.x, 1248);
    pending.put(pending.profile.wram_entity_world_coordinates.y, 6280);
    pending.put(pending.piracy, 1);
    pending.events.clear(); pending.select_cell(18, 98, 17);
    require(pending.actor_count() == 1 && pending.get(pending.count) == 1 &&
            std::none_of(pending.events.begin(), pending.events.end(), [](auto e) { return e[0] == 1; }),
            "Enemy admission spent a pending enemy's source worker capacity");
    for (unsigned frame = 0; frame < 4; ++frame)
        pending.frame();
    require(pending.task_count(0) == 4, "Pending source enemy25 lost a required child task");
}

void columns_and_world_edges(const eb::GameAssets &assets) {
    const auto &profile = eb::source_profile(assets.version);
    for (unsigned width : {398u, 522u, 800u, 1024u}) {
        context = assets.title + " actual source columns width=" + std::to_string(width);
        Fixture f(assets, width);
        const unsigned extension = eb::RenderDistance(width).activation_extension(f.bus->native_sprite_runtime()->resources()->artwork_bounds());
        for (bool right : {false, true}) {
            const unsigned x = right ? 2048 - 320 - extension : 2048 + 64 + extension;
            const unsigned combo = assets.image[profile.rom_map_tileset_palette_sectors + (6240 + 112) / 128 * 32 + (x + 128) / 256] >> 3;
            f.camera(x, 6240, combo); f.selections.clear();
            f.call(f.column, x / 8 + (right ? 40 : -8), 784, true, 0,
                   f.jp ? (right ? 0xc0161c : 0xc0166f) : (right ? 0xc01606 : 0xc01659));
            require(std::any_of(f.selections.begin(), f.selections.end(), [](auto s) { return s.x == 32 && s.y == 98; }),
                    "Source refresh JSL failed to widen the requested left/right enemy column");
        }
        for (int camera_x : {-64, -1, 0, 7944}) for (int camera_y : {-88, -1, 0, 6240, 10000}) {
            context = assets.title + " source world edge width=" + std::to_string(width) +
                      " camera=" + std::to_string(camera_x) + "," + std::to_string(camera_y);
            Fixture edge(assets, width);
            const unsigned combo = assets.image[profile.rom_map_tileset_palette_sectors + (camera_y + 112) / 128 * 32 + (camera_x + 128) / 256] >> 3;
            edge.camera(std::uint16_t(camera_x), std::uint16_t(camera_y), combo);
            const int screen_left = camera_x >= 0 ? camera_x / 8 : -((-camera_x + 7) / 8);
            for (unsigned y : {0u, 8u, 784u, 1272u, 1280u, 0xfff0u}) {
                edge.call(edge.row, std::uint16_t(screen_left - 8), y);
                for (bool right : {false, true})
                    edge.call(edge.column, std::uint16_t(screen_left + (right ? 40 : -8)), y, true, 0,
                              edge.jp ? (right ? 0xc0161c : 0xc0166f) : (right ? 0xc01606 : 0xc01659));
            }
            if (camera_x <= 0)
                require(std::any_of(edge.selections.begin(), edge.selections.end(), [](auto s) { return s.x == 0; }),
                        "World-left clamp failed to traverse real cell0");
            for (auto s : edge.selections)
                require(s.x < 128 && s.y < 160 && s.x + s.width / 8 <= 128 && s.y + s.height / 8 <= 160,
                        "Expanded source selector queried outside bounded world encounter/sector metadata");
            for (unsigned role = 0; role < 22; ++role) if (edge.get(edge.npc + role * 2) >= 0x8000 &&
                                                         edge.get(edge.npc + role * 2) < 0x81e4)
                require(edge.get(profile.wram_entity_world_coordinates.x + role * 2) < 8192 &&
                        edge.get(profile.wram_entity_world_coordinates.y + role * 2) < 10240,
                        "Expanded source CREATE placed an enemy outside the world");
        }
    }
}

void scene_gates_and_metadata(const eb::GameAssets &assets) {
    context = assets.title + " complete authored enemy program coverage";
    Fixture definitions(assets, 522);
    const auto layout = eb::native::enemy_sprite_catalog_layout(assets.version);
    for (unsigned enemy = 0; enemy < layout.enemy_count; ++enemy) {
        const unsigned at = layout.enemies + enemy * layout.enemy_stride + layout.enemy_sprite_offset;
        const unsigned sprite = assets.image[at] | unsigned(assets.image[at + 1]) << 8;
        const unsigned configured = assets.image[at + 13] | unsigned(assets.image[at + 14]) << 8;
        if (sprite)
            require(bool(eb::SourceEntityAdmission::script_task_demand(definitions.bus->scene_read_view(), configured ? configured : 19)),
                    "Imported overworld enemy program lacks bounded source-worker admission");
    }
    for (unsigned gate = 0; gate < 9; ++gate) {
        context = assets.title + " source enemy scene gate=" + std::to_string(gate);
        Fixture f(assets, 522);
        if (gate == 0) f.bus->write_byte(0x2100, 0x80); // Real initial LOAD_MAP must still preload.
        if (gate == 1) f.put(f.jp ? 0xb6b8 : 0xb4ef, 1);
        if (gate == 2) f.put(f.jp ? 0x46f2 : 0x436c, 1);
        if (gate == 3) f.put(f.profile.wram_battle_mode_flag, 1);
        if (gate == 4) f.bus->write_byte(0x2130, 0x20);
        if (gate == 5) { f.bus->write_byte(0x212e, 1); f.bus->write_byte(0x2123, 2); }
        if (gate == 6) f.bus->write_byte(0x2105, 3);
        if (gate == 7) f.put(f.enemy_enabled, 0);
        if (gate == 8) f.put(f.profile.wram_loaded_map_tile_combination, 32);
        f.call(f.row, 156, 784);
        require(f.selected(18, 98, 17) == (gate == 0), "Expanded enemy scanning escaped its authored world scene");
    }
    context = assets.title + " malformed source metadata";
    Fixture f(assets, 1024);
    const auto view = f.bus->scene_read_view();
    auto truncated = std::make_unique<eb::SnesBus>(view.cartridge_rom.first(view.source_profile.rom_map_tileset_palette_sectors + 1), assets.version);
    truncated->work_ram = f.bus->work_ram;
    truncated->write_byte(0x2105, 1); truncated->write_byte(0x2107, 0x39);
    truncated->write_byte(0x2108, 0x59); truncated->write_byte(0x212c, 3);
    std::uint32_t operand = 0;
    std::uint16_t accumulator = 156;
    require(eb::adapt_source_enemy_preload(*truncated, 960, f.jp ? 0xc02a87 : 0xc02a77, 0xa8, 1,
                                         operand, accumulator, 0x1e00) && accumulator == 156,
            "Truncated source sector metadata did not fail closed");
    f.put(0x1e0a, 0xffff); f.put(0x1e0c, 0xeeee);
    operand = f.maximum; accumulator = 0;
    require(eb::adapt_source_enemy_preload(*f.bus, 960, f.jp ? 0xc02976 : 0xc02969,
                                         0xcd, 3, operand, accumulator, 0x1e00) && operand == f.count,
            "Invalid authored battle pointer was admitted to CREATE");
}

void retention(const eb::GameAssets &assets) {
    for (unsigned width : {256u, 398u, 522u, 1024u}) for (int dx : {-200, 500}) {
        context = assets.title + " source selected enemy retention width=" + std::to_string(width);
        Fixture f(assets, width);
        f.put(f.current, 0); f.put(f.npc, 0x8021); f.put(f.enemy_ids, 5);
        f.put(f.profile.wram_entity_world_coordinates.x, std::uint16_t(1312 + dx));
        f.put(f.profile.wram_entity_world_coordinates.y, 6280);
        f.call(f.jp ? 0xc0c698 : 0xc0c6b6, 0, 0);
        require((f.cpu.accumulator != 0) == (width > 256), "Selected real enemy was dropped inside widened retention bounds");
        f.put(f.npc, 0xffff);
        f.call(f.jp ? 0xc0c698 : 0xc0c6b6, 0, 0);
        require(!f.cpu.accumulator, "Custom/system actor was given enemy retention");
    }
}
} // namespace
int main(int argc, char **argv) {
    try {
        require(argc >= 2, "Provide one or more imported regional asset packs");
        for (int i = 1; i < argc; ++i) {
            const auto assets = eb::load_game_assets(argv[i], eb::asset_profiles());
            twoson_selection(assets); source_selection_parity(assets); source_capacity(assets);
            columns_and_world_edges(assets); scene_gates_and_metadata(assets); retention(assets);
            std::cout << "PASS " << assets.title << ": real enemy strips, ordered RNG/CREATE/terrain parity, "
                         "pool/worker admission, world edges, scene gates and selected-enemy retention\n";
        }
        std::cout << checks << " source-backed enemy preload checks\n";
    } catch (const std::exception &error) { std::cerr << error.what() << '\n'; return 1; }
}
