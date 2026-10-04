// Opt-in real-content route; no imported assets or player saves are shipped.
#include "eb/asset_store.hpp"
#include "eb/direct_scene.hpp"
#include "eb/game_debug.hpp"
#include "eb/input_replay.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/native/npc_catalog.hpp"
#include "eb/native/saves/archive.hpp"
#include "eb/native/world_enemies.hpp"
#include "eb/overworld_sprite_runtime.hpp"
#include "eb/snes_audio_dsp.hpp"
#include "eb/snes_bus.hpp"
#include "eb/spc700_audio_cpu.hpp"
#include "generated_assets.hpp"
#include "generated_profile.hpp"

#include <algorithm>
#include <array>
#include <cstdlib>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <limits>
#include <map>
#include <memory>
#include <optional>
#include <set>
#include <stdexcept>
#include <string>
#include <vector>

namespace {
void require(bool value, const std::string &message) {
    if (!value) throw std::runtime_error(message);
}
void content(const eb::GameAssets &assets) {
    using namespace eb::native;
    NpcCatalog npcs(assets.image, npc_catalog_layout(assets.version));
    std::array<std::uint8_t, 128> flags{};
    NpcVisibility state{0, flags, {}};
    const NpcRectangle bounds{1792, 2304, 3072, 3328};
    const auto candidates = npcs.query(bounds, state);
    std::vector<NpcId> active;
    std::set<unsigned> ids;
    unsigned people = 0, objects = 0, gifts = 0;
    for (const auto &candidate : candidates) {
        ids.insert(candidate.placement.npc); active.push_back(candidate.placement.npc);
        const auto &definition = npcs.definition(candidate.placement.npc);
        people += definition.type == NpcType::Person;
        objects += definition.type == NpcType::Object;
        gifts += definition.type == NpcType::ItemBox;
    }
    std::set<unsigned> expected;
    for (unsigned id = 1282; id <= 1305; ++id) expected.insert(id);
    for (unsigned id = 1568; id <= 1572; ++id) expected.insert(id);
    require(ids == expected && people == 17 && objects == 7 && gifts == 5,
            "Lost Underworld NPCs, signs, phones, village gate, geysers or gift boxes are missing");
    state.active_npcs = active;
    require(npcs.query(bounds, state).empty(), "Lost Underworld actors were duplicated during activation");
    state.active_npcs = {};
    flags[(651 - 1) / 8] |= 1u << ((651 - 1) & 7);
    const auto opened = npcs.query(bounds, state);
    require(opened.size() == 28 && std::none_of(opened.begin(), opened.end(), [](const auto &candidate) {
                return candidate.placement.npc == 1299;
            }), "Village gate retained the wrong story-flag gate");
    flags.fill(0); state.objects_only = true;
    require(npcs.query(bounds, state).size() == 7, "Lost Underworld object-only activation gate differs");

    const auto enemies = import_enemy_spawn_data(assets.image, assets.version);
    std::set<unsigned> encounters, types;
    for (unsigned y = bounds.top / 64; y < unsigned(bounds.bottom / 64); ++y)
        for (unsigned x = bounds.left / 64; x < unsigned(bounds.right / 64); ++x) {
            if (enemies.sectors[(y / 2) * 32 + x / 4].tileset != 0) continue;
            const auto encounter = enemies.encounter(x, y);
            if (!encounter) continue;
            encounters.insert(encounter);
            for (const auto battle : enemies.encounters.at(encounter).choices)
                for (const auto &member : enemies.battles.at(battle)) types.insert(member.enemy);
        }
    require(encounters == std::set<unsigned>{75, 76, 77, 78, 79} &&
                types == std::set<unsigned>{35, 36, 127},
            "Lost Underworld lost an authored Wetnosaur, Chomposaur or Ego Orb encounter");
    std::cout << "PASS " << assets.title << " Lost Underworld content: 29 placements, appearance/duplicate gates, "
                 "five encounter tables and all three enemy types\n" << std::flush;
}
struct Route {
    eb::SnesBus bus;
    eb::Spc700AudioCpu apu;
    eb::SnesAudioDsp dsp;
    eb::MainCpu65816 cpu;
    eb::GameDebug debug;
    const eb::SourceProfile &profile;
    bool jp, native;
    std::string prefix;
    std::uint64_t steps{};
    Route(const eb::GameAssets &assets, bool host, unsigned width, std::string output)
        : bus(assets.image, assets.version), apu(bus), dsp(apu), cpu(bus), debug(bus, cpu),
          profile(eb::source_profile(assets.version)), jp(assets.version == eb::GameVersion::JP),
          native(host), prefix(std::move(output)) {
        bus.set_logical_clock_policy(eb::LogicalClockPolicy::ActorFrames);
        if (native) bus.enable_native_sprite_runtime(true);
        bus.set_presentation_width(width);
        bus.set_direct_rendering_enabled(true);
        cpu.set_gameplay_timing(true);
        debug.configure({false, false, false, true});
        cpu.reset_from_vector();
    }
    unsigned word(unsigned at) const {
        return bus.work_ram.at(at) | unsigned(bus.work_ram.at(at + 1)) << 8;
    }
    void put(unsigned at, unsigned value) {
        bus.work_ram.at(at) = value;
        bus.work_ram.at(at + 1) = value >> 8;
    }
    void frame(unsigned buttons = 0) {
        bus.set_buttons(buttons);
        const auto start = bus.completed_frames;
        do {
            debug.before_step();
            advance();
        } while (start == bus.completed_frames);
        (void)dsp.take_stereo_samples();
    }
    void advance() {
        require(!cpu.is_stopped, "CPU stopped in Lost Underworld: " + cpu.describe_registers());
        steps += cpu.advance_gameplay(std::numeric_limits<unsigned>::max());
        require(steps < 2000000000ull, "Lost Underworld instruction budget exceeded");
    }
    void complete() {
        const auto end = bus.completed_frames + 1200;
        while (debug.snapshot().busy && bus.completed_frames < end)
            frame(debug.snapshot().status.starts_with("Waiting") && bus.completed_frames % 30 < 5
                      ? (word(jp ? 0x6146 : 0x5dc0) == 0xffff ? 0x8000 : 0x80) : 0);
        require(!debug.snapshot().busy, "World action timed out: " + debug.snapshot().status +
                " style=" + std::to_string(word(profile.party_state.walking_style)) +
                " pending=" + std::to_string(word(profile.action_gates.pending_interactions)) +
                " input=" + std::to_string(word(profile.action_gates.input_disable_frames)) +
                " interaction=" + std::to_string(word(jp ? 0x6146 : 0x5dc0)));
    }
    void warp(unsigned x, unsigned y) {
        // Redirect only the test teleport's unused PSI destination record.
        // The original fade, map load, actor activation and arrival run fully.
        debug.request({eb::GameDebugRequest::Kind::Teleport, 12, {}});
        const auto end = bus.completed_frames + 1200;
        bool redirected = false;
        while (debug.snapshot().busy && bus.completed_frames < end) {
            bus.set_buttons(debug.snapshot().status.starts_with("Waiting") && bus.completed_frames % 30 < 5 ? 0x80 : 0);
            const auto start = bus.completed_frames;
            do {
                debug.before_step();
                if (bus.debug_read_rom && !redirected) {
                    const auto old = bus.debug_read_rom;
                    bus.debug_read_rom = [&, old](unsigned at, std::uint8_t value) {
                        const auto base = profile.teleport_state.destination_table + 16 * profile.teleport_state.entry_size;
                        if (at == base + profile.teleport_state.destination_x) return std::uint8_t(x / 8);
                        if (at == base + profile.teleport_state.destination_x + 1) return std::uint8_t((x / 8) >> 8);
                        if (at == base + profile.teleport_state.destination_y) return std::uint8_t(y / 8);
                        if (at == base + profile.teleport_state.destination_y + 1) return std::uint8_t((y / 8) >> 8);
                        return old(at, value);
                    };
                    redirected = true;
                    // GameDebug keeps this hook until the transition ends.
                    while (start == bus.completed_frames) {
                        debug.before_step();
                        advance();
                    }
                    break;
                }
                advance();
            } while (start == bus.completed_frames);
            (void)dsp.take_stereo_samples();
        }
        require(!debug.snapshot().busy, "Lost Underworld warp timed out: " + debug.snapshot().status +
                    " pending=" + std::to_string(word(profile.action_gates.pending_interactions)) +
                    " input=" + std::to_string(word(profile.action_gates.input_disable_frames)) +
                    " interaction=" + std::to_string(word(jp ? 0x6146 : 0x5dc0)) +
                    " movement=" + std::to_string(word(profile.movement_state.flags)));
        require(word(profile.party_state.leader_x) == x && word(profile.party_state.leader_y) == y,
                "Lost Underworld arrival coordinates differ");
        for (unsigned i = 0; i < 10; ++i) frame();
    }
    void picture(const std::string &label) {
        if (prefix.empty()) return;
        const auto path = prefix + "-" + label + ".ppm";
        if (const auto parent = std::filesystem::path(path).parent_path(); !parent.empty())
            std::filesystem::create_directories(parent);
        std::ofstream out(path, std::ios::binary);
        out << "P6\n" << bus.presentation_width() << " 224\n255\n";
        for (const auto pixel : bus.presentation_pixels()) {
            const std::array<char, 3> rgb{char(pixel >> 16), char(pixel >> 8), char(pixel)};
            out.write(rgb.data(), rgb.size());
        }
        require(bool(out), "Cannot write Lost Underworld picture");
    }
    unsigned dialogue_buttons() const {
        return word(jp ? 0x6146 : 0x5dc0) != 0xffff && bus.completed_frames % 30 < 5 ? 0x80 : 0;
    }
    bool flag(unsigned id) const {
        --id;
        return bus.work_ram.at((jp ? 0x9eb3 : 0x9c08) + id / 8) & (1u << (id & 7));
    }
    unsigned items(unsigned item) const {
        unsigned count = 0;
        for (unsigned i = 0; i < 4; ++i)
            for (unsigned slot = 0; slot < 14; ++slot)
                count += bus.work_ram.at(profile.character_layout.table_address +
                         i * profile.character_layout.entry_size + (jp ? 34 : 35) + slot) == item;
        return count;
    }
    void seed_continue() {
        eb::native::saves::PersistedState save;
        save.version = bus.game_version();
        auto &g = save.game;
        g.favourite_thing[0] = 0x71; g.favourite_thing[1] = 0x72;
        g.favourite_food[0] = g.pet_name[0] = 0x71;
        g.party_order = g.display_order = {1, 2, 3, 4, 0, 0};
        g.controlled_order = {0, 1, 2, 3, 0, 0};
        g.party_count = g.controlled_count = 4;
        g.leader_x = 2600; g.leader_y = 2808; g.leader_direction = 4;
        g.current_party_members = 4; g.text_speed = 1;
        for (unsigned i = 0; i < 4; ++i) {
            auto &c = save.characters[i];
            c.name[0] = 0x71 + i;
            c.values.level = 20;
            c.values.maximum_hp = c.values.current_hp = c.values.target_hp = 300 + i * 10;
            c.values.maximum_pp = c.values.current_pp = c.values.target_pp = 80 + i * 10;
            c.values.offense = c.values.base_offense = 30;
            c.values.defense = c.values.base_defense = 30;
            c.values.speed = c.values.base_speed = 10;
            c.values.vitality = c.values.base_vitality = 10;
            c.values.iq = c.values.base_iq = 10;
        }
        auto archive = eb::native::saves::SaveArchive::empty(save.version);
        archive.save(0, save, 0);
        std::copy(archive.bytes().begin(), archive.bytes().end(), bus.save_ram.begin());
    }
    void damage_party() {
        // Stop at the actor/input boundary so no partially executed rolling
        // meter write can overwrite the test's damaged values afterward.
        main_loop_boundary();
        const auto &c = profile.character_layout;
        for (unsigned i = 0; i < 4; ++i) {
            const auto at = c.table_address + i * c.entry_size;
            put(at + c.current_hp, 100 + i); put(at + c.current_hp_target, 100 + i);
            put(at + c.current_pp, 20 + i); put(at + c.current_pp_target, 20 + i);
            put(at + c.current_hp_fraction, 0); put(at + c.current_pp_fraction, 0);
            std::fill_n(bus.work_ram.begin() + at + c.afflictions, 7, 0);
            bus.work_ram[at + c.afflictions + 1] = 2; // Possessed; no overworld HP loss.
            bus.work_ram[at + c.afflictions + 5] = 1;
        }
    }
    void main_loop_boundary() {
        const auto end = bus.completed_frames + 60;
        while (cpu.program_counter != profile.gameplay_routines.main_loop) {
            require(!cpu.is_stopped, "CPU stopped while staging the damaged party");
            require(bus.completed_frames < end, "Cannot stage party at the main-loop boundary");
            debug.before_step(); cpu.step_instruction(); ++steps;
        }
    }
    void small_party() const {
        std::set<unsigned> sprites;
        for (unsigned slot = 0; slot < 60; slot += 2)
            if (word(profile.wram_entity_script_ids + slot) != 0xffff) {
                const auto sprite = word((jp ? 0x30d4 : 0x2cd6) + slot);
                if (sprite >= 27 && sprite <= 30) sprites.insert(sprite);
            }
        require(sprites == std::set<unsigned>{27, 28, 29, 30},
                "Lost Underworld did not select all four small party sprites");
    }
    void restored_party(unsigned id) const {
        const auto &c = profile.character_layout;
        for (unsigned i = 0; i < 4; ++i) {
            const auto at = c.table_address + i * c.entry_size;
            if (id != 1304) {
                // The source commits recovery to the rolling-meter targets.
                // Current values converge when the corresponding HP/PP UI ticks.
                require(word(at + c.current_hp_target) == word(at + c.max_hp) &&
                            word(at + c.current_pp_target) == word(at + c.max_pp),
                        "Blue geyser did not restore party member " + std::to_string(i + 1) +
                            " HP=" + std::to_string(word(at + c.current_hp)) + "/" + std::to_string(word(at + c.max_hp)) +
                            " PP=" + std::to_string(word(at + c.current_pp)) + "/" + std::to_string(word(at + c.max_pp)) +
                            " HPtarget=" + std::to_string(word(at + c.current_hp_target)) +
                            " PPtarget=" + std::to_string(word(at + c.current_pp_target)) +
                            " x=" + std::to_string(word(profile.party_state.leader_x)) +
                            " y=" + std::to_string(word(profile.party_state.leader_y)));
                require(bus.work_ram[at + c.afflictions + 1] == 2,
                        "Blue geyser unexpectedly cured a persistent ailment");
            } else {
                require(!bus.work_ram[at + c.afflictions + 1] && !bus.work_ram[at + c.afflictions + 5],
                        "Red geyser did not cure every party member's ailments");
                require(word(at + c.current_hp_target) == 100 + i && word(at + c.current_pp_target) == 20 + i,
                        "Red geyser changed a living party member's HP/PP");
            }
        }
    }
    bool recovery_ready(unsigned id) const {
        const auto &c = profile.character_layout;
        for (unsigned i = 0; i < 4; ++i) {
            const auto at = c.table_address + i * c.entry_size;
            if (id == 1304) {
                if (bus.work_ram[at + c.afflictions + 1] || bus.work_ram[at + c.afflictions + 5]) return false;
            } else if (word(at + c.current_hp_target) != word(at + c.max_hp) ||
                       word(at + c.current_pp_target) != word(at + c.max_pp)) return false;
        }
        return true;
    }
    void unchanged_damaged_party() const {
        const auto &c = profile.character_layout;
        for (unsigned i = 0; i < 4; ++i) {
            const auto at = c.table_address + i * c.entry_size;
            require(word(at + c.current_hp_target) == 100 + i && word(at + c.current_pp_target) == 20 + i &&
                        bus.work_ram[at + c.afflictions + 1] == 2 && bus.work_ram[at + c.afflictions + 5] == 1,
                    "Geyser healed or cured a party outside its four-pixel contact radius");
        }
    }
};
eb::native::NpcPlacement placement(const eb::native::NpcCatalog &npcs, unsigned id) {
    for (unsigned y = 0; y < 40; ++y)
        for (unsigned x = 0; x < 32; ++x)
            for (const auto &p : npcs.cell(x, y)) if (p.npc == id) return p;
    throw std::runtime_error("Missing authored NPC placement " + std::to_string(id));
}
void interactions(Route &r, const eb::GameAssets &assets, const eb::native::NpcCatalog &npcs) {
    r.debug.configure({false, false, false, true});
    // Traversal can end during a queued geyser quake. Let the normal debug
    // transition close that interaction before staging the next inventory.
    r.warp(2600, 2808);
    r.main_loop_boundary();
    const auto inventory = r.profile.character_layout.table_address + (r.jp ? 34 : 35);
    const auto empty = std::find(r.bus.work_ram.begin() + inventory, r.bus.work_ram.begin() + inventory + 14, 0);
    require(empty != r.bus.work_ram.begin() + inventory + 14, "Gate-event inventory fixture has no room");
    *empty = 211; // Authored Tendakraut, consumed by the gate event.
    require(!r.flag(651) && !r.flag(616), "Gate fixture is already completed");
    r.warp(0x0920, 0x0a80); // EVENT_771's authored eight-by-four-pixel trigger.
    auto deadline = r.bus.completed_frames + 2400;
    while ((!r.flag(651) || !r.flag(616) || r.word(r.jp ? 0x6146 : 0x5dc0) != 0xffff) &&
           r.bus.completed_frames < deadline) r.frame(r.dialogue_buttons());
    r.picture("village-gate");
    if (!r.flag(651) || !r.flag(616))
        for (unsigned slot = 0; slot < 60; slot += 2)
            if (r.word(r.profile.wram_entity_script_ids + slot) != 0xffff)
                std::cout << "gate actor npc=" << r.word((r.jp ? 0x3098 : 0x2c9a) + slot)
                          << " script=" << r.word(r.profile.wram_entity_script_ids + slot)
                          << " x=" << r.word(r.profile.wram_entity_world_coordinates.x + slot)
                          << " y=" << r.word(r.profile.wram_entity_world_coordinates.y + slot)
                          << " var0=" << r.word(r.profile.wram_entity_script_variable0 + slot)
                          << " var1=" << r.word(r.profile.wram_entity_script_variable1 + slot) << '\n';
    require(r.flag(651) && r.flag(616) && !r.items(211),
            "Tenda cage event did not open the gate and consume Tendakraut: gate=" + std::to_string(r.flag(651)) +
                " boss=" + std::to_string(r.flag(616)) + " item=" + std::to_string(r.items(211)) +
                " x=" + std::to_string(r.word(r.profile.party_state.leader_x)) +
                " y=" + std::to_string(r.word(r.profile.party_state.leader_y)) +
                " interaction=" + std::to_string(r.word(r.jp ? 0x6146 : 0x5dc0)));
    std::cout << "PASS village cage event: gate opened, Tendakraut consumed and story flags retained\n" << std::flush;
    for (unsigned id = 1282; id <= 1302; ++id) {
        if (id == 1299) continue; // Removed by the original cage-opening event.
        const auto p = placement(npcs, id);
        r.warp(p.x, p.y + 8);
        r.small_party();
        r.debug.configure({false, false, true, true});
        // Roaming Tendas may already have moved away from their placement.
        // Approach the actual actor using ordinary input, not seeded bodies.
        for (unsigned tick = 0; tick < 90; ++tick) {
            std::optional<unsigned> slot;
            for (unsigned s = 0; s < 60; s += 2)
                if (r.word((r.jp ? 0x3098 : 0x2c9a) + s) == id &&
                    r.word(r.profile.wram_entity_script_ids + s) != 0xffff) slot = s;
            require(bool(slot), "Authored Lost Underworld NPC did not activate: " + std::to_string(id));
            const int dx = int(r.word(r.profile.wram_entity_world_coordinates.x + *slot)) -
                           int(r.word(r.profile.party_state.leader_x));
            const int dy = int(r.word(r.profile.wram_entity_world_coordinates.y + *slot)) + 8 -
                           int(r.word(r.profile.party_state.leader_y));
            if (std::abs(dx) <= 1 && std::abs(dy) <= 1) break;
            r.frame((dx > 1 ? 0x100 : dx < -1 ? 0x200 : 0) | (dy > 1 ? 0x400 : dy < -1 ? 0x800 : 0));
        }
        r.debug.configure({false, false, false, true});
        for (unsigned i = 0; i < 2; ++i) r.frame(0x800);
        for (unsigned i = 0; i < 2; ++i) r.frame();
        const auto at = eb::native::npc_catalog_layout(assets.version).definitions + id * 17 + 9;
        const unsigned expected = assets.image.at(at) | unsigned(assets.image.at(at + 1)) << 8 |
                                  unsigned(assets.image.at(at + 2)) << 16 | unsigned(assets.image.at(at + 3)) << 24;
        bool read = false;
        r.bus.debug_read_rom = [&](unsigned offset, std::uint8_t value) {
            if (offset == (expected & 0x3fffff)) read = true;
            return value; // Observe actual dialogue entry without replacing content.
        };
        for (unsigned i = 0; i < 3; ++i) r.frame(0x20);
        deadline = r.bus.completed_frames + 90;
        while (!read && r.bus.completed_frames < deadline) r.frame();
        r.bus.debug_read_rom = {};
        require(r.word(r.jp ? 0x60e8 : 0x5d62) == id && read,
                "NPC/sign did not select its authored dialogue: " + std::to_string(id) +
                    " selected=" + std::to_string(r.word(r.jp ? 0x60e8 : 0x5d62)) +
                    " read=" + std::to_string(read));
        r.picture("interaction-" + std::to_string(id));
        deadline = r.bus.completed_frames + 3600;
        while ((r.word(r.jp ? 0x8c28 : 0x88e6) != 0xffff ||
                r.word(r.jp ? 0x6146 : 0x5dc0) != 0xffff) && r.bus.completed_frames < deadline)
            r.frame(r.bus.completed_frames % 30 < 5 ? 0x8000 : 0); // Advance text; cancel service choices.
        require(r.word(r.jp ? 0x8c28 : 0x88e6) == 0xffff && r.word(r.jp ? 0x6146 : 0x5dc0) == 0xffff,
                "Lost Underworld dialogue/service never closed: " + std::to_string(id));
        for (unsigned i = 0; i < 10; ++i) r.frame();
        if (id == 1292) require(r.flag(2), "Talking stone did not set its first-conversation flag");
        std::cout << "PASS NPC/sign=" << id << " authored dialogue opens and closes\n" << std::flush;
    }
}
void run(const eb::GameAssets &assets, const std::string &input, bool native, unsigned width,
         const std::string &prefix, unsigned only, bool interactions_only) {
    content(assets);
    auto route = std::make_unique<Route>(assets, native, width, prefix);
    auto &r = *route;
    if (input.empty()) {
        r.seed_continue();
        while (!r.debug.snapshot().ready && r.bus.completed_frames < 4000)
            r.frame(r.bus.completed_frames > 600 && r.bus.completed_frames % 60 < 5 ? 0x1080 : 0);
        for (unsigned i = 0; i < 120; ++i) r.frame(r.dialogue_buttons());
    } else {
        eb::InputReplay replay(eb::input_script(input));
        while (r.bus.completed_frames < 20295) r.frame(replay.buttons_for_frame(r.bus.completed_frames));
    }
    require(r.debug.snapshot().ready, "Bootstrap did not reach gameplay");
    std::cout << assets.title << " ready=" << r.bus.completed_frames << '\n' << std::flush;
    r.debug.configure({false, false, false, true});
    r.debug.request({eb::GameDebugRequest::Kind::Party, 0, {true, true, true, true}});
    r.complete();
    eb::native::NpcCatalog npcs(assets.image, eb::native::npc_catalog_layout(assets.version));
    std::set<unsigned> enemy_types;
    unsigned enemy_movement_frames = 0;
    std::map<std::array<unsigned, 3>, std::array<unsigned, 2>> enemy_positions;
    const auto observe_enemies = [&] {
        for (unsigned slot = 0; slot < 60; slot += 2) {
            if (r.word(r.profile.wram_entity_script_ids + slot) == 0xffff) continue;
            const auto enemy = r.word((r.jp ? 0x3110 : 0x2d12) + slot);
            if (enemy == 0xffff || enemy == 0 || enemy == 225) continue; // Friendly procedural butterfly.
            enemy_types.insert(enemy);
            const std::array key{slot, enemy, r.word((r.jp ? 0x314c : 0x2d4e) + slot)};
            const std::array position{r.word(r.profile.wram_entity_world_coordinates.x + slot),
                                     r.word(r.profile.wram_entity_world_coordinates.y + slot)};
            const auto old = enemy_positions.find(key);
            if (old != enemy_positions.end() && old->second != position) ++enemy_movement_frames;
            enemy_positions[key] = position;
        }
    };
    if (!interactions_only) for (unsigned id : {1303u, 1304u, 1305u}) {
        if (only && only != id) continue;
        std::optional<eb::native::NpcPlacement> placement;
        for (unsigned y = 0; y < 40; ++y)
            for (unsigned x = 0; x < 32; ++x)
                for (const auto &p : npcs.cell(x, y)) if (p.npc == id) placement = p;
        require(bool(placement), "Missing authored geyser placement");
        r.warp(placement->x, placement->y);
        r.small_party();
        std::cout << "arrival geyser=" << id << " x=" << r.word(r.profile.party_state.leader_x)
                  << " y=" << r.word(r.profile.party_state.leader_y) << '\n' << std::flush;
        r.damage_party();
        r.picture("geyser-" + std::to_string(id) + "-arrival");
        const auto end = r.bus.completed_frames + 5000;
        unsigned active_frames = 0, erupted_frames = 0, rendered_frames = 0, lift_frames = 0, quake_frames = 0;
        std::set<unsigned> poses, directions;
        enemy_positions.clear();
        bool captured = false;
        bool recovered = false;
        unsigned far_eruption_start = 0;
        for (; r.bus.completed_frames < end; r.frame(r.dialogue_buttons())) {
            observe_enemies();
            for (unsigned slot = 0; slot < 60; slot += 2) {
                lift_frames += r.word(r.profile.wram_entity_script_ids + slot) == 679;
                quake_frames += r.word(r.profile.wram_entity_script_ids + slot) == 675;
            }
            for (unsigned slot = 0; slot < 60; slot += 2) {
                if (r.word((r.jp ? 0x3098 : 0x2c9a) + slot) != id ||
                    r.word(r.profile.wram_entity_script_ids + slot) == 0xffff) continue;
                ++active_frames;
                const auto animation = r.word(r.profile.wram_entity_animation_frame + slot);
                const auto direction = r.word((r.jp ? 0x2ef4 : 0x2af6) + slot);
                if (animation != 0xff && animation != 0xffff) {
                    ++erupted_frames;
                    poses.insert(animation);
                    directions.insert(direction);
                    bool rendered = !native;
                    if (native) {
                        const auto actor = r.bus.native_sprite_runtime()->snapshot(slot);
                        const auto scene = r.bus.direct_scene();
                        if (actor && scene)
                            for (const auto &q : scene->quads)
                                if (q.object && q.motion < scene->motions.size() &&
                                    scene->motions[q.motion].identity == ((std::uint64_t{1} << 63) | actor->id))
                                    rendered = true;
                    }
                    rendered_frames += rendered;
                    if (!captured && rendered && animation == 1 && direction == 2) {
                        r.picture("geyser-" + std::to_string(id) + "-eruption"); captured = true;
                    }
                }
            }
            if (!recovered && lift_frames && r.word(r.jp ? 0x6146 : 0x5dc0) == 0xffff && r.recovery_ready(id)) {
                r.restored_party(id);
                // The source lift lands five pixels above the geyser. Keep
                // that actual landing for a second, non-contact eruption.
                require(std::abs(int(r.word(r.profile.party_state.leader_y)) - int(placement->y)) >= 4,
                        "Party lift did not land outside the geyser's contact radius");
                r.damage_party(); recovered = true; far_eruption_start = erupted_frames;
            }
        }
        std::cout << assets.title << (native ? " native" : " source") << " geyser=" << id
                  << " active=" << active_frames << " eruption=" << erupted_frames << " poses=";
        for (auto p : poses) std::cout << p << ',';
        std::cout << " directions=";
        for (auto p : directions) std::cout << p << ',';
        std::cout << " rendered=" << rendered_frames << " lift=" << lift_frames << " quake=" << quake_frames << '\n' << std::flush;
        require(active_frames > 0 && erupted_frames > 0 && poses.size() >= 2,
                "Geyser did not activate and cycle its eruption animation");
        require(recovered && erupted_frames >= far_eruption_start + 212,
                "Geyser never completed recovery followed by a second, non-contact eruption");
        r.unchanged_damaged_party();
        require(rendered_frames > 0 && captured && lift_frames > 0 && quake_frames > 0,
                "Geyser eruption artwork or nearby-party lift was never presented");
        std::cout << "PASS geyser=" << id << " four-member recovery, lift/quake, repeated eruption and no remote healing\n" << std::flush;
    }
    std::cout << "Lost Underworld roaming enemy IDs=";
    for (auto id : enemy_types) std::cout << id << ',';
    std::cout << " movement_frames=" << enemy_movement_frames << '\n' << std::flush;
    require(only || interactions_only || (!enemy_types.empty() && enemy_movement_frames > 0),
            "Lost Underworld route exercised no naturally spawned moving enemies");
    if (!only && !interactions_only) {
        for (unsigned id = 1568; id <= 1572; ++id) {
            std::optional<eb::native::NpcPlacement> placement;
            for (unsigned y = 0; y < 40; ++y)
                for (unsigned x = 0; x < 32; ++x)
                    for (const auto &p : npcs.cell(x, y)) if (p.npc == id) placement = p;
            require(bool(placement), "Missing Lost Underworld gift-box placement");
            const auto at = eb::native::npc_catalog_layout(assets.version).definitions + id * 17 + 13;
            const unsigned item = assets.image.at(at) | unsigned(assets.image.at(at + 1)) << 8;
            const auto event = npcs.definition(id).event_flag;
            require(item && item < 256 && !r.flag(event), "Gift box fixture is not unopened item content");
            const auto before = r.items(item);
            r.warp(placement->x, placement->y + 8);
            enemy_positions.clear();
            for (unsigned i = 0; i < 2; ++i) r.frame(0x800);
            for (unsigned i = 0; i < 2; ++i) r.frame(0);
            for (unsigned i = 0; i < 3; ++i) r.frame(0x20); // Source Check/Talk shortcut.
            const auto end = r.bus.completed_frames + 1200;
            while ((!r.flag(event) || r.items(item) != before + 1) && r.bus.completed_frames < end) {
                r.frame(r.bus.completed_frames % 30 < 5 ? 0x80 : 0);
                observe_enemies();
            }
            require(r.flag(event) && r.items(item) == before + 1,
                    "Lost Underworld gift box did not grant its authored item and persist its opened flag: " + std::to_string(id));
            r.warp(placement->x, placement->y + 8);
            for (unsigned i = 0; i < 2; ++i) r.frame(0x800);
            for (unsigned i = 0; i < 2; ++i) r.frame(0);
            for (unsigned i = 0; i < 3; ++i) r.frame(0x20);
            for (unsigned i = 0; i < 120; ++i) r.frame(r.bus.completed_frames % 30 < 5 ? 0x8000 : 0);
            require(r.flag(event) && r.items(item) == before + 1,
                    "Reloading/rechecking an opened gift box awarded a duplicate item");
            std::cout << "PASS gift=" << id << " item=" << item << " opened_flag=" << event
                      << " reload/recheck retains one reward\n" << std::flush;
        }
        r.warp(2600, 2808);
        enemy_positions.clear();
        r.debug.configure({false, false, true, true});
        // Walk the actual world to admit new source spawn strips. Noclip keeps
        // terrain from trapping this coverage route; it does not bypass enemy
        // terrain selection or force a spawn, random draw or encounter group.
        for (const auto goal : {std::array{2960u, 3136u}, std::array{2192u, 3136u},
                               std::array{2192u, 2448u}, std::array{2800u, 2448u},
                               std::array{2800u, 3000u}}) {
            const auto deadline = r.bus.completed_frames + 2400;
            while (r.bus.completed_frames < deadline) {
                observe_enemies();
                if (enemy_types == std::set<unsigned>{35, 36, 127}) break;
                const int dx = int(goal[0]) - int(r.word(r.profile.party_state.leader_x));
                const int dy = int(goal[1]) - int(r.word(r.profile.party_state.leader_y));
                if (std::abs(dx) <= 2 && std::abs(dy) <= 2) break;
                const unsigned buttons = (dx > 2 ? 0x100 : dx < -2 ? 0x200 : 0) |
                                         (dy > 2 ? 0x400 : dy < -2 ? 0x800 : 0);
                r.frame(r.word(r.jp ? 0x6146 : 0x5dc0) == 0xffff ? buttons : r.dialogue_buttons());
            }
            if (enemy_types == std::set<unsigned>{35, 36, 127}) break;
        }
        std::cout << "Natural spawn-strip traversal enemy IDs=";
        for (auto id : enemy_types) std::cout << id << ',';
        std::cout << " movement_frames=" << enemy_movement_frames << '\n' << std::flush;
        require(enemy_types == std::set<unsigned>{35, 36, 127},
                "Natural Lost Underworld traversal did not activate every enemy species");
        r.picture("roaming-enemies");
    }
    if (!only) interactions(r, assets, npcs);
}
}
int main(int argc, char **argv) {
    if (argc == 1) return 77;
    try {
        std::string assets, replay, prefix;
        bool native = true, interactions_only = false;
        unsigned width = 426;
        unsigned only = 0;
        for (int i = 1; i < argc; ++i) {
            const std::string arg = argv[i];
            if (arg == "--assets" && i + 1 < argc) assets = argv[++i];
            else if (arg == "--replay" && i + 1 < argc) replay = argv[++i];
            else if (arg == "--output" && i + 1 < argc) prefix = argv[++i];
            else if (arg == "--width" && i + 1 < argc) width = unsigned(std::stoul(argv[++i]));
            else if (arg == "--geyser" && i + 1 < argc) only = unsigned(std::stoul(argv[++i]));
            else if (arg == "--source") native = false;
            else if (arg == "--interactions") interactions_only = true;
            else throw std::runtime_error("Unknown/incomplete argument: " + arg);
        }
        require(!assets.empty(), "Supply --assets FILE");
        require(!only || (only >= 1303 && only <= 1305), "Unknown geyser NPC ID");
        require(!only || !interactions_only, "Choose --geyser or --interactions");
        run(eb::load_game_assets(assets, eb::asset_profiles()), replay, native, width, prefix, only, interactions_only);
    } catch (const std::exception &error) { std::cerr << error.what() << '\n'; return 1; }
}
