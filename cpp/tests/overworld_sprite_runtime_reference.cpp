// Actual production prepare_instruction hooks, with both source resource pools
// poisoned from the first CREATE. This complements the allocation pixel oracle:
// logical source routines run normally; this fixture never intercepts a service.
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include "generated_profile.hpp"
#include <algorithm>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>

namespace {
void require(bool value, const char *message) {
    if (!value)
        throw std::runtime_error(message);
}
struct Fixture {
    std::unique_ptr<eb::SnesBus> hardware;
    eb::SnesBus &bus;
    eb::MainCpu65816 cpu;
    bool jp;
    unsigned first, free_actor, free_task, next_actor, next_task, scripts, sprite;
    unsigned direction, animation, surface, update, second, current, map_pool, graphics_pool;
    unsigned create_pc, delete_pc, release_pc, four_pc, eight_pc;
    Fixture(const eb::GameAssets &assets, bool native = true)
        : hardware(std::make_unique<eb::SnesBus>(assets.image, assets.version)), bus(*hardware), cpu(bus),
          jp(assets.version == eb::GameVersion::JP) {
        first = jp ? 0xa46 : 0xa50;
        free_actor = jp ? 0xa48 : 0xa52;
        free_task = jp ? 0xa4a : 0xa54;
        next_actor = jp ? 0xa94 : 0xa9e;
        next_task = jp ? 0x1250 : 0x125a;
        scripts = jp ? 0xa58 : 0xa62;
        sprite = jp ? 0x30d4 : 0x2cd6;
        direction = jp ? 0x2ef4 : 0x2af6;
        animation = jp ? 0x10e8 : 0x10f2;
        surface = jp ? 0x2fa8 : 0x2baa;
        update = jp ? 0x2c94 : 0x2896;
        second = jp ? 0x2c90 : 0x2892;
        current = jp ? 0x1a38 : 0x1a42;
        map_pool = jp ? 0x4a04 : 0x467e;
        graphics_pool = jp ? 0x4d86 : 0x4a00;
        create_pc = jp ? 0xc01e5f : 0xc01e49;
        delete_pc = jp ? 0xc0214e : 0xc02140;
        release_pc = jp ? 0xc020ff : 0xc020f1;
        four_pc = jp ? 0xc0a4a3 : 0xc0a4c4;
        eight_pc = jp ? 0xc0a773 : 0xc0a794;
        if (native)
            bus.enable_native_sprite_runtime(true);
        std::fill_n(bus.work_ram.begin() + map_pool, 0x380, native ? 0xa5 : 0xff);
        std::fill_n(bus.work_ram.begin() + graphics_pool, 88, native ? 0xff : 0);
        bus.work_ram[0x0d] = 0x80; // Source oracle uses immediate publication.
        bus.video_ram.fill(0x5a);
        auto guard = [this](unsigned at, std::uint8_t value) {
            if ((at >= map_pool && at < map_pool + 0x380) || (at >= graphics_pool && at < graphics_pool + 88))
                throw std::runtime_error("Native runtime touched an original sprite pool at " +
                                         std::to_string(at) + ": " + cpu.describe_registers());
            return value;
        };
        if (native) {
            bus.debug_read_wram = guard;
            bus.debug_write_wram = guard;
        }
        cpu.set_runtime(eb::MainCpuRuntime::Legacy);
        cpu.emulation_mode = false;
        cpu.status_register = eb::MainCpu65816::InterruptDisable;
        cpu.data_bank = 0x7e;
        cpu.direct_page = 0x1e00;
        cpu.stack_pointer = 0x1fff;
        put(first, 0xffff);
        put(free_actor, 0);
        put(free_task, 0);
        for (unsigned slot = 0; slot < 30; ++slot) {
            put(next_actor + slot * 2, slot == 29 ? 0xffff : slot * 2 + 2);
            put(scripts + slot * 2, 0xffff);
        }
        for (unsigned task = 0; task < 70; ++task)
            put(next_task + task * 2, task == 69 ? 0xffff : task * 2 + 2);
    }
    void put(unsigned at, unsigned value) {
        bus.work_ram[at] = value;
        bus.work_ram[at + 1] = value >> 8;
    }
    unsigned get(unsigned at) const { return bus.work_ram[at] | unsigned(bus.work_ram[at + 1]) << 8; }
    unsigned call(unsigned pc, bool far = true, bool alias = false) {
        // Bank $80 mirrors only the upper half. CREATE/delete are in the
        // lower half of $C0, where the corresponding $80 address is RAM/I/O.
        if (alias && (pc & 0x8000))
            pc &= ~0x400000u;
        const unsigned end = (pc & 0xff0000) | 0xff00;
        cpu.program_counter = end;
        if (far)
            cpu.execute_instruction<0x22>(pc, 4);
        else
            cpu.execute_instruction<0x20>(pc & 0xffff, 3);
        for (unsigned steps = 0; steps < 200000; ++steps) {
            if (cpu.program_counter == end + (far ? 4 : 3) && cpu.stack_pointer == 0x1fff)
                return cpu.accumulator;
            cpu.step_instruction();
        }
        throw std::runtime_error("Native sprite runtime service did not return: " + cpu.describe_registers());
    }
    void create(unsigned group, unsigned slot) {
        cpu.accumulator = group;
        cpu.x_index = 1;
        cpu.y_index = slot;
        put(0x1e0e, slot * 3 + 100);
        put(0x1e10, slot * 5 + 100);
        require(call(create_pc, true, slot & 1) == slot, "Source CREATE returned a different logical slot");
        require(get(sprite + slot * 2) == group && get(scripts + slot * 2) == 1,
                "CREATE did not retain source actor state");
        if (const auto runtime = bus.native_sprite_runtime()) {
            const auto item = runtime->snapshot(slot * 2);
            require(item && !item->image, "Live CREATE did not commit an unselected native resource");
        }
    }
    void select(unsigned slot, unsigned facing, unsigned phase, unsigned flags, bool eight) {
        const unsigned offset = slot * 2;
        put(direction + offset, facing);
        put(animation + offset, phase * 2);
        put(surface + offset, flags);
        put(second, phase);
        put(update, offset);
        cpu.y_index = offset;
        require(call(eight ? eight_pc : four_pc, !eight, slot & 1) != 0,
                "Native appearance lost the proven nonzero source predicate");
        require(bool(bus.native_sprite_runtime()->snapshot(offset)->image),
                "Live pose did not publish native art");
    }
};

unsigned authored_return_continuations(const eb::GameAssets &assets) {
    Fixture reference(assets, false), candidate(assets);
    const bool jp = reference.jp;
    const unsigned cursor = jp ? 0x13f4 : 0x13fe, bank = jp ? 0x1480 : 0x148a;
    const unsigned sleep = jp ? 0x1368 : 0x1372, temporary = jp ? 0x150c : 0x1516;
    const unsigned interpreter = jp ? 0xc094e5 : 0xc09506;
    const unsigned first_loop = jp ? 0xc3a0c8 : 0xc3a0d8;
    const auto &profile = eb::source_profile(assets.version);
    const auto resources = candidate.bus.native_sprite_runtime()->resources();
    unsigned short_sprite = 0;
    while (resources->definition(short_sprite).height > 16 || resources->definition(short_sprite).frames < 2)
        ++short_sprite;
    reference.create(short_sprite, 0);
    candidate.create(short_sprite, 0);
    unsigned ticks = 0;
    for (unsigned loop = 0; loop < 3; ++loop)
        for (unsigned flags : {0u, 8u, 12u}) {
            for (auto *fixture : {&reference, &candidate}) {
                fixture->put(cursor, first_loop + loop * 19);
                fixture->put(bank, 0xc3);
                fixture->put(sleep, 0);
                fixture->put(temporary, 0);
                fixture->put(fixture->surface, flags);
                fixture->put(0x1e80, 0);
                fixture->put(0x1e88, 0);
                fixture->put(0x1e8a, 0);
            }
            for (unsigned frame = 0; frame < 48; ++frame) {
                reference.call(interpreter, false);
                candidate.call(interpreter, false);
                for (unsigned field :
                     {cursor, bank, sleep, candidate.direction, candidate.animation, candidate.surface,
                      profile.wram_entity_displayed_sprites, profile.wram_entity_spritemap_pointers.high})
                    require(reference.get(field) == candidate.get(field),
                            "Live native pose changed an authored return consumer's actor/task state");
                require(bool(reference.get(temporary)) == bool(candidate.get(temporary)),
                        "Live native pose changed the authored nonzero branch predicate");
                // The original interpreter reloads X/Y and consumes/overwrites
                // arithmetic flags before the next task. Carry is transport
                // scratch; it has no reader in these audited continuations.
                require(reference.cpu.accumulator == candidate.cpu.accumulator &&
                            reference.cpu.x_index == candidate.cpu.x_index &&
                            reference.cpu.y_index == candidate.cpu.y_index &&
                            reference.cpu.direct_page == candidate.cpu.direct_page &&
                            reference.cpu.stack_pointer == candidate.cpu.stack_pointer &&
                            reference.cpu.data_bank == candidate.cpu.data_bank &&
                            (reference.cpu.status_register & ~eb::MainCpu65816::Carry) ==
                                (candidate.cpu.status_register & ~eb::MainCpu65816::Carry),
                        "Original interpreter did not restore the pose caller's live registers/flags");
                ++ticks;
            }
        }
    require(candidate.bus.native_sprite_runtime()->diagnostics().selections > 20,
            "Authored return continuation fixture did not execute native pose refreshes");
    return ticks;
}

void party_join_hidden_animation(const eb::GameAssets &assets) {
    for (unsigned slot : {25u, 0u})
        for (unsigned direction : {0u, 7u})
            for (bool retained : {false, true}) {
                Fixture reference(assets, false), candidate(assets);
                const unsigned offset = slot * 2;
                const auto &profile = eb::source_profile(assets.version);
                reference.create(2, slot);
                candidate.create(2, slot);
                if (retained) {
                    for (auto *fixture : {&reference, &candidate}) {
                        fixture->put(fixture->direction + offset, 2);
                        fixture->put(fixture->animation + offset, 0);
                        fixture->put(fixture->surface + offset, 0);
                        fixture->put(fixture->update, offset);
                        fixture->call(fixture->eight_pc, false);
                    }
                }
                const auto previous = candidate.bus.native_sprite_runtime()->snapshot(offset)->image;
                for (auto *fixture : {&reference, &candidate}) {
                    // Captured US selector: byte slot 50, direction 0, animation
                    // 0xffff, surface 0, frame table 0xef1ab1 and graphics bank
                    // 0xd2. The cabin-key story reaches this refresh after its
                    // join jingle. CREATE retains the hidden animation sentinel
                    // until the action resets it.
                    fixture->put(fixture->direction + offset, direction);
                    fixture->put(fixture->animation + offset, 0xffff);
                    fixture->put(fixture->surface + offset, 0);
                    fixture->put(fixture->update, offset);
                    fixture->put(0x1e88, offset);
                    fixture->put((fixture->jp ? 0x1af4 : 0x3456) + offset, 0xffff);
                    fixture->cpu.accumulator = fixture->cpu.x_index = offset;
                    fixture->cpu.y_index = 0x9a64;
                }
                // Use the same authored animation callback that admits the failing loader,
                // including its first-refresh fingerprint update and real near call.
                reference.call(reference.jp ? 0xc0a6c2 : 0xc0a6e3);
                candidate.call(candidate.jp ? 0xc0a6c2 : 0xc0a6e3);
                require(reference.get(reference.animation + offset) == 0xffff &&
                            candidate.get(candidate.animation + offset) == 0xffff,
                        "Party join refresh changed the hidden source animation sentinel");
                require(reference.get((reference.jp ? 0x1af4 : 0x3456) + offset) == direction &&
                            candidate.get((candidate.jp ? 0x1af4 : 0x3456) + offset) == direction,
                        "Party join callback lost its authored animation fingerprint update");
                require(reference.get(profile.wram_entity_displayed_sprites + offset) ==
                            candidate.get(profile.wram_entity_displayed_sprites + offset),
                        "Hidden party join refresh changed the source displayed-frame latch");
                require(candidate.bus.native_sprite_runtime()->snapshot(offset)->image == previous,
                        "Hidden party join refresh decoded or replaced unrelated artwork");
                // The following authored action makes the member visible. A hidden
                // refresh must not poison that later ordinary frame selection.
                reference.put(reference.animation + offset, 0);
                candidate.put(candidate.animation + offset, 0);
                reference.call(reference.eight_pc, false);
                candidate.call(candidate.eight_pc, false);
                const auto selected = candidate.bus.native_sprite_runtime()->snapshot(offset);
                require(selected && selected->image &&
                            reference.get(profile.wram_entity_displayed_sprites + offset) ==
                                candidate.get(profile.wram_entity_displayed_sprites + offset),
                        "Joined party member did not recover its authored visible pose");
                // Visible misaligned byte offsets remain an invalid native content request;
                // the hidden creation sentinel exception must not broaden that contract.
                candidate.put(candidate.animation + offset, 1);
                bool rejected = false;
                try {
                    candidate.call(candidate.eight_pc, false);
                } catch (const std::out_of_range &) {
                    rejected = true;
                }
                require(rejected && candidate.bus.native_sprite_runtime()->snapshot(offset)->image == selected->image,
                        "Hidden sentinel exception accepted or damaged a visible misaligned frame");
            }
    std::cout << (assets.version == eb::GameVersion::JP ? "JP" : "US")
              << ": captured Paula party-join hidden animation, retained artwork, visible recovery and validation passed\n";
}

void teleport_arrival_party_slots(const eb::GameAssets &assets) {
    for (bool sparse : {false, true}) {
        Fixture test(assets);
        const unsigned jeff = sparse ? 26 : 25;
        test.create(1, 24);
        test.create(3, jeff);
        test.select(jeff, 6, 0, 0, true);
        const unsigned roster = test.jp ? 0x9b3c : 0x988b;
        const unsigned roles = test.jp ? 0x9b48 : 0x9897;
        const unsigned arrival = test.jp ? 0xc0e8b7 : 0xc0e8ed;
        const unsigned graphics_low = test.jp ? 0x2dc8 : 0x29ca;
        const unsigned graphics_high = test.jp ? 0x2e04 : 0x2a06;
        const auto before_low = test.get(graphics_low + jeff * 2);
        const auto before_high = test.get(graphics_high + jeff * 2);
        test.bus.work_ram[roster] = 1;
        test.bus.work_ram[roster + 1] = 3;
        for (unsigned member = 0; member < 6; ++member) {
            if (member >= 2) test.bus.work_ram[roster + member] = 0;
            test.put(roles + member * 2, member == 0 ? 24 : member == 1 ? jeff : 0xffff);
        }
        // Actual C0E897 arrival call: the original loop visits all six roster
        // entries and passes 24 + index, even when a remaining actor's role
        // differs after a party removal. Empty entries pass character -1.
        for (unsigned member = 0; member < 6; ++member) {
            test.cpu.program_counter = arrival;
            test.cpu.accumulator = std::uint16_t(test.bus.work_ram[roster + member] - 1);
            test.cpu.x_index = 0;
            test.cpu.y_index = 24 + member;
            test.cpu.direct_page = 0x1e00;
            test.cpu.stack_pointer = 0x1fff;
            test.cpu.status_register = eb::MainCpu65816::InterruptDisable;
            test.put(0x1e02, member);
            test.put(0x1e18, 0);
            test.put(test.jp ? 0x514c : 0x4dc6,
                     (test.jp ? 0x9c7f : 0x99ce) + (member == 1 ? 2 * 0x5f : 0));
            for (unsigned step = 0;; ++step) {
                require(step < 10000, "Teleport arrival appearance call did not return");
                test.cpu.step_instruction();
                if (test.cpu.program_counter == arrival + 4 && test.cpu.stack_pointer == 0x1fff) break;
            }
        }
        // Reach the exact failing selector after the teleport fade, rather
        // than merely asserting that the arrival preparation returned.
        test.select(jeff, 6, 0, 0, true);
        require(test.get(graphics_low + jeff * 2) == before_low &&
                    test.get(graphics_high + jeff * 2) == before_high,
                "Teleport arrival assigned an empty roster entry to a live party actor");
        require(test.get(test.scripts + jeff * 2) == 1 &&
                    test.bus.native_sprite_runtime()->diagnostics().live_resources == 2,
                "Teleport arrival changed party actors or their logical tasks");
    }
    std::cout << (assets.version == eb::GameVersion::JP ? "JP" : "US")
              << ": teleport arrival preserves compact/sparse party roles and skips empty roster entries\n";
}

void run(const eb::GameAssets &assets) {
    teleport_arrival_party_slots(assets);
    party_join_hidden_animation(assets);
    Fixture test(assets);
    const auto resources = test.bus.native_sprite_runtime()->resources();
    unsigned largest = 0, blocks = 0;
    for (unsigned group = 0; group < resources->size(); ++group) {
        const auto &def = resources->definition(group);
        const unsigned count = (((def.width / 8) + 1) & ~1u) * (((def.height / 8) + 1) & ~1u) / 4;
        if (count > blocks) {
            largest = group;
            blocks = count;
        }
    }
    require(blocks * 30 > 88, "Resource pressure fixture does not exceed original graphics capacity");
    for (unsigned slot = 0; slot < 30; ++slot) {
        test.create(largest, slot);
        test.select(slot, 0, slot & 1, slot % 3 == 0 ? 12 : 0, slot & 1);
    }
    require(test.bus.native_sprite_runtime()->diagnostics().live_resources == 30,
            "Native allocation did not fill the unchanged 30 logical actor slots");
    auto copied = std::make_unique<eb::SnesBus>(test.bus);
    const auto retained = copied->native_sprite_runtime()->snapshot(14)->image;
    const auto original_id = copied->native_sprite_runtime()->snapshot(14)->id;
    test.put(test.current, 7);
    test.cpu.accumulator = 0xa55a;
    test.call(test.release_pc);
    require(!test.bus.native_sprite_runtime()->snapshot(14) && test.get(test.scripts + 14) == 1 &&
                copied->native_sprite_runtime()->snapshot(14)->image == retained &&
                copied->native_sprite_runtime()->snapshot(14)->id == original_id,
            "Graphics release removed the logical task or mutated a copied native resource owner");
    // Finish the already graphics-released logical actor, then the remaining
    // actors. Neither cleanup path may dereference its neutral source pointer.
    for (unsigned slot = 0; slot < 30; ++slot) {
        test.cpu.accumulator = slot;
        test.call(test.delete_pc, true, slot & 1);
    }
    require(test.get(test.first) == 0xffff &&
                test.bus.native_sprite_runtime()->diagnostics().live_resources == 0,
            "Native full deletion did not release all resources and logical actors");
    const auto counts = test.bus.native_sprite_runtime()->diagnostics();
    require(counts.creations == 30 && counts.graphics_allocations_bypassed == 30 &&
                counts.map_allocations_bypassed == 30 && counts.map_builds_bypassed == 30 &&
                counts.selections == 30 && counts.releases == 30 && counts.map_releases_bypassed == 31 &&
                counts.graphics_releases_bypassed == 31 && !counts.unsupported_services,
            "Live resource services bypass coverage differs");
    require(
        std::all_of(test.bus.video_ram.begin(), test.bus.video_ram.end(), [](auto v) { return v == 0x5a; }),
        "Native allocation or pose selection wrote emulated graphics storage");
    const unsigned continuation_ticks = authored_return_continuations(assets);
    std::cout << (test.jp ? "JP" : "US")
              << ": live CREATE/pose/graphics-release/delete hooks passed for 30 actors (" << blocks * 30
              << " legacy blocks), poisoned pools, ROM aliases and independent bus copies; "
              << continuation_ticks << " original authored return-consumer ticks\n";
}
} // namespace
int main(int argc, char **argv) {
    try {
        if (argc < 2)
            throw std::invalid_argument("overworld_sprite_runtime_reference pack.ebpak ...");
        for (int i = 1; i < argc; ++i)
            run(eb::load_game_assets(argv[i], eb::asset_profiles()));
    } catch (const std::exception &error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
