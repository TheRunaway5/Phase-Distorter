// Actual source free-role selection, active-list append and deletion. Full
// creation metadata is covered separately by native_actor_creation_reference.
#include "eb/main_cpu_65816.hpp"
#include "eb/native/actor_world.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include "native_sprite_fixture.hpp"
#include <algorithm>
#include <iostream>
#include <memory>
#include <stdexcept>

namespace {
using namespace eb::native;
void require(bool value, const char *message) {
    if (!value) throw std::runtime_error(message);
}
struct Original {
    std::unique_ptr<eb::SnesBus> bus;
    eb::MainCpu65816 cpu;
    bool jp;
    unsigned first, free, next, script, task, minimum, maximum;
    unsigned calls{};
    explicit Original(const eb::GameAssets &assets)
        : bus(std::make_unique<eb::SnesBus>(assets.image, assets.version)), cpu(*bus),
          jp(assets.version == eb::GameVersion::JP), first(jp ? 0xa46 : 0xa50),
          free(jp ? 0xa48 : 0xa52), next(jp ? 0xa94 : 0xa9e),
          script(jp ? 0xa58 : 0xa62), task(jp ? 0xad0 : 0xada),
          minimum(jp ? 0xa42 : 0xa4c), maximum(jp ? 0xa44 : 0xa4e) {
        cpu.set_runtime(eb::MainCpuRuntime::Legacy);
        call(jp ? 0xc0925e : 0xc0927c, true);
    }
    void put(unsigned at, unsigned value) {
        bus->work_ram.at(at) = value;
        bus->work_ram.at(at + 1) = value >> 8;
    }
    unsigned word(unsigned at) const {
        return bus->work_ram.at(at) | unsigned(bus->work_ram.at(at + 1)) << 8;
    }
    void call(unsigned address, bool far = false) {
        cpu.emulation_mode = false;
        cpu.status_register = eb::MainCpu65816::InterruptDisable;
        cpu.data_bank = 0x7e;
        cpu.direct_page = 0x1e00;
        cpu.stack_pointer = 0x1fff;
        cpu.program_counter = 0xc0ff00;
        if (far) cpu.execute_instruction<0x22>(address, 4);
        else cpu.execute_instruction<0x20>(address & 0xffff, 3);
        unsigned steps{};
        const unsigned target = far ? 0xc0ff04 : 0xc0ff03;
        while (cpu.program_counter != target || cpu.stack_pointer != 0x1fff) {
            if (++steps > 10000) throw std::runtime_error("Source actor role helper did not return");
            cpu.step_instruction();
        }
        ++calls;
    }
    std::optional<unsigned> create(AuthoredActorRoles range) {
        put(minimum, range.first * 2);
        put(maximum, range.end * 2);
        call(jp ? 0xc09be1 : 0xc09c02);
        if (cpu.status_register & eb::MainCpu65816::Carry) return {};
        const auto role = cpu.x_index / 2;
        // The role helper itself does not allocate tasks. This focused fixture
        // gives the actor no child tasks; all source list operations run intact.
        put(script + role * 2, 1);
        put(task + role * 2, 0xffff);
        call(jp ? 0xc09c36 : 0xc09c57);
        return role;
    }
    void erase(unsigned role) {
        cpu.x_index = role * 2;
        call(jp ? 0xc09c1a : 0xc09c3b);
    }
    std::vector<unsigned> active() const {
        std::vector<unsigned> order;
        for (auto at = word(first); !(at & 0x8000); at = word(next + at)) {
            require(at < 60 && !(at & 1) && order.size() < 30, "Source active role list is invalid");
            order.push_back(at / 2);
        }
        return order;
    }
    void compare(const ActorWorld &world) const {
        std::vector<unsigned> roles;
        for (auto id : world.actors()) {
            const auto role = world.actor(id).authored_role();
            require(role.has_value(), "Role fixture contains an untagged actor");
            roles.push_back(*role);
        }
        require(roles == active(), "Native active actor role order differs from source");
        for (unsigned role = 0; role < 30; ++role)
            require(bool(world.actor_for_role(role)) == !(word(script + role * 2) & 0x8000),
                    "Native role occupancy differs from source");
    }
};
void verify(const eb::GameAssets &assets) {
    native_sprite_test::Fixture fixture;
    auto sprites = std::make_shared<SpriteResources>(fixture.bytes, fixture.layout);
    const std::array<std::uint8_t, 1> wait{0x09};
    auto scripts = std::make_shared<ActionScriptData>(wait, 0, std::vector<std::uint32_t>{0});
    ActorWorld world(sprites, scripts, assets.version);
    Original original(assets);
    unsigned allocations{}, removals{};
    const auto create = [&](AuthoredActorRoles range) {
        const auto expected = original.create(range);
        const auto id = world.create_authored(WorldActorSpec{}, range);
        require(bool(id) == bool(expected), "Native role allocation success differs from source");
        if (id)
            require(world.actor(*id).authored_role() == expected &&
                        world.actor(*id).appearance_context.phase_id == *expected,
                    "Native authored role or walking phase differs from source");
        original.compare(world);
        ++allocations;
    };
    const auto erase = [&](unsigned role) {
        original.erase(role);
        if (auto id = world.actor_for_role(role)) world.erase(*id);
        original.compare(world);
        ++removals;
    };
    // Explicit reservation, ordinary capacity, all-role creation, LIFO reuse,
    // interior free-list selection, and every valid range including empty ones.
    create({23, 24});
    for (unsigned i = 0; i < 23; ++i) create({0, 22});
    for (unsigned i = 0; i < 10; ++i) create({0, 30});
    for (unsigned role : {7, 3, 23, 0, 29, 7}) erase(role);
    create({1, 6});
    create({0, 22});
    create({23, 24});
    for (unsigned role = 0; role < 30; ++role) erase(role);
    for (unsigned first = 0; first <= 30; ++first)
        for (unsigned end = first; end <= 30; ++end) {
            create({first, end});
            if (!world.actors().empty()) {
                const auto id = world.actors().front();
                erase(*world.actor(id).authored_role());
            }
        }
    std::uint32_t random = 0x13579bdf;
    for (unsigned i = 0; i < 4096; ++i) {
        random = random * 1664525u + 1013904223u;
        if (random & 0x40000000) erase((random >> 16) % 30);
        else {
            const auto first = (random >> 8) % 31;
            create({first, first + (random >> 16) % (31 - first)});
        }
    }
    std::cout << (assets.version == eb::GameVersion::JP ? "JP" : "US")
              << ": source actor roles PASS allocations=" << allocations << " removals=" << removals
              << " source_calls=" << original.calls
              << "; exact selection, reuse, active order, occupancy and native phase; no source helpers stubbed\n";
}
} // namespace
int main(int argc, char **argv) {
    try {
        require(argc > 1, "native_actor_roles_reference pack.ebpak ...");
        for (int i = 1; i < argc; ++i) verify(eb::load_game_assets(argv[i], eb::asset_profiles()));
    } catch (const std::exception &error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
