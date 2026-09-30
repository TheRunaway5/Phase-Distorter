// Imported-content/source-selector oracle only. The native catalog never
// links the reference machine or invokes its allocator, scripts or RNG.
#include "eb/native/npc_catalog.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include <algorithm>
#include <array>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <tuple>

namespace {
using namespace eb::native;
unsigned word(std::span<const std::uint8_t> data, unsigned at) {
    return data[at] | unsigned(data[at + 1]) << 8;
}
void require(bool ok, const char *message) {
    if (!ok)
        throw std::runtime_error(message);
}
struct Layout {
    unsigned query, create, first, next, npc, direction, flags, tileset, enabled, objects, photo, random;
};
constexpr Layout us{0xc0222b, 0xc01e49, 0x0a50, 0x0a9e, 0x2c9a, 0x2af6,
                    0x9c08, 0x436e, 0x4a58, 0x4a66, 0xb4ef, 0xc08e9a};
constexpr Layout jp{0xc02239, 0xc01e5f, 0x0a46, 0x0a94, 0x3098, 0x2ef4,
                    0x9eb3, 0x46f4, 0x4dde, 0x4dec, 0xb6b8, 0xc08e8b};
struct Request {
    unsigned npc, sprite, script, x, y;
    bool operator==(const Request &) const = default;
};
struct Oracle {
    std::unique_ptr<eb::SnesBus> bus;
    eb::MainCpu65816 cpu;
    Layout layout;
    std::uint64_t calls{}, requests{};
    explicit Oracle(const eb::GameAssets &assets)
        : bus(std::make_unique<eb::SnesBus>(assets.image, assets.version)), cpu(*bus),
          layout(assets.version == eb::GameVersion::JP ? jp : us) {
        cpu.set_runtime(eb::MainCpuRuntime::Legacy);
        cpu.emulation_mode = false;
        cpu.status_register = eb::MainCpu65816::InterruptDisable;
        cpu.data_bank = 0x7e;
        cpu.direct_page = 0x1e00;
        cpu.stack_pointer = 0x1fff;
        put(layout.enabled, 1);
    }
    void put(unsigned at, unsigned value) {
        bus->work_ram[at] = value;
        bus->work_ram[at + 1] = value >> 8;
    }
    void configure(unsigned camera_x, unsigned camera_y, const NpcVisibility &state) {
        put(0x31, camera_x);
        put(0x33, camera_y);
        put(layout.tileset, state.tileset);
        put(layout.objects, state.objects_only);
        put(layout.photo, state.photograph);
        std::copy(state.event_flags.begin(), state.event_flags.end(), bus->work_ram.begin() + layout.flags);
        require(state.active_npcs.size() < 29, "Too many active IDs for reference fixture");
        put(layout.first, state.active_npcs.empty() ? 0xffff : 0);
        for (unsigned i = 0; i < state.active_npcs.size(); ++i) {
            put(layout.npc + i * 2, state.active_npcs[i]);
            put(layout.next + i * 2, i + 1 == state.active_npcs.size() ? 0xffff : (i + 1) * 2);
        }
    }
    std::vector<Request> cell(unsigned x, unsigned y) {
        std::vector<Request> result;
        cpu.program_counter = 0xc0ff00;
        cpu.accumulator = x;
        cpu.x_index = y;
        cpu.execute_instruction<0x22>(layout.query, 4);
        unsigned steps = 0;
        while (cpu.program_counter != 0xc0ff04 || cpu.stack_pointer != 0x1fff) {
            if (++steps > 2000000)
                throw std::runtime_error("NPC selector oracle did not return: " + cpu.describe_registers());
            if (cpu.program_counter == layout.random)
                throw std::runtime_error("NPC readiness selector unexpectedly consumed RNG");
            if (cpu.program_counter == layout.create) {
                // Observe the selector's requested domain operation, then stub
                // allocation. Caller locals contain its authored NPC and world
                // coordinates; CREATE_ENTITY itself must never run here.
                result.push_back({word(bus->work_ram, cpu.direct_page + 0x20), cpu.accumulator,
                                  cpu.x_index, word(bus->work_ram, cpu.direct_page + 0x0e),
                                  word(bus->work_ram, cpu.direct_page + 0x10)});
                ++requests;
                cpu.accumulator = 29; // Scratch slot is never linked/activated.
                cpu.execute_instruction<0x6b>(0, 1);
            } else {
                cpu.step_instruction();
            }
        }
        ++calls;
        return result;
    }
};

std::vector<Request> native_query(const NpcCatalog &catalog, NpcRectangle bounds,
                                  const NpcVisibility &state, Oracle &oracle) {
    const auto ram = oracle.bus->work_ram;
    const auto instruction_count = oracle.cpu.instruction_count;
    const std::vector<std::uint8_t> flags(state.event_flags.begin(), state.event_flags.end());
    const std::vector<NpcId> active(state.active_npcs.begin(), state.active_npcs.end());
    std::vector<Request> result;
    for (const auto &candidate : catalog.query(bounds, state)) {
        const auto &definition = catalog.definition(candidate.placement.npc);
        result.push_back({candidate.placement.npc, definition.sprite, candidate.script,
                          candidate.placement.x, candidate.placement.y});
    }
    require(oracle.bus->work_ram == ram && oracle.cpu.instruction_count == instruction_count &&
                std::equal(flags.begin(), flags.end(), state.event_flags.begin()) &&
                std::equal(active.begin(), active.end(), state.active_npcs.begin()),
            "Native NPC query mutated gameplay, event flags, active identities or executed the CPU");
    return result;
}
} // namespace

int main(int argc, char **argv) {
    try {
        if (argc < 2)
            throw std::runtime_error("native_npc_catalog_reference pack.ebpak ...");
        for (int argument = 1; argument < argc; ++argument) {
            const auto assets = eb::load_game_assets(argv[argument], eb::asset_profiles());
            const auto layout = npc_catalog_layout(assets.version);
            const NpcCatalog catalog(assets.image, layout);
            unsigned highest_flag = 0, placements = 0;
            for (unsigned id = 0; id < catalog.size(); ++id) {
                const auto at = layout.definitions + id * 17;
                const auto &def = catalog.definition(NpcId(id));
                require(unsigned(def.type) == assets.image[at] && def.sprite == word(assets.image, at + 1) &&
                            def.direction == assets.image[at + 3] && def.script == word(assets.image, at + 4) &&
                            def.event_flag == word(assets.image, at + 6) &&
                            unsigned(def.appearance) == assets.image[at + 8],
                        "NPC definition roundtrip differs from imported record");
                highest_flag = std::max(highest_flag, def.event_flag);
            }
            for (unsigned y = 0; y < 40; ++y)
                for (unsigned x = 0; x < 32; ++x) {
                    const unsigned pointer = word(assets.image, layout.cell_pointers + (y * 32 + x) * 2);
                    const auto list = catalog.cell(x, y);
                    if (!pointer) {
                        require(list.empty(), "Empty source cell has native placements");
                        continue;
                    }
                    const unsigned start = (layout.placements & 0xff0000) | pointer;
                    require(list.size() == word(assets.image, start), "Source cell count differs");
                    for (unsigned i = 0; i < list.size(); ++i) {
                        const unsigned at = start + 2 + i * 4;
                        require(list[i].npc == word(assets.image, at) &&
                                    list[i].x == x * 256 + assets.image[at + 3] &&
                                    list[i].y == y * 256 + assets.image[at + 2],
                                "Source NPC placement coordinates/order differ");
                        ++placements;
                    }
                }
            require(catalog.size() == 1584 && placements == 1582, "Unexpected imported NPC catalog totals");
            Oracle oracle(assets);
            std::vector<std::uint8_t> flags((highest_flag + 7) / 8);
            NpcVisibility state{0, flags, {}};
            // Every authored cell and each represented map identity, under
            // multiple flag patterns and all normal/object/photograph modes.
            for (unsigned pattern = 0; pattern < 3; ++pattern) {
                std::fill(flags.begin(), flags.end(), pattern == 0 ? 0 : pattern == 1 ? 255 : 0xa5);
                for (unsigned mode = 0; mode < 3; ++mode) {
                    state.objects_only = mode == 1;
                    state.photograph = mode == 2;
                    for (unsigned y = 0; y < 40; ++y)
                        for (unsigned x = 0; x < 32; ++x) {
                            const auto list = catalog.cell(x, y);
                            std::array<bool, 32> areas{};
                            for (const auto &entry : list)
                                areas[entry.tileset] = true;
                            for (unsigned area = 0; area < areas.size(); ++area) {
                                if (!areas[area])
                                    continue;
                                state.tileset = area;
                                oracle.configure(x * 256, y * 256, state);
                                const auto expected = oracle.cell(x, y);
                                const auto actual = native_query(catalog,
                                    {int(x * 256), int(y * 256), int((x + 1) * 256), int((y + 1) * 256)},
                                    state, oracle);
                                if (actual != expected)
                                    throw std::runtime_error(assets.title + " NPC selector differs at cell=" +
                                        std::to_string(x) + "," + std::to_string(y) + " flags=" +
                                        std::to_string(pattern) + " mode=" + std::to_string(mode) +
                                        " area=" + std::to_string(area));
                            }
                        }
                }
            }
            // The reported Chaos Theater scene: actual NPC IDs/placements,
            // moved against both original source preparation boundaries.
            state.objects_only = state.photograph = false;
            std::fill(flags.begin(), flags.end(), 255);
            std::array<NpcId, 2> active{229, 230};
            unsigned edge_cases = 0;
            for (bool suppress_active : {false, true}) {
                state.active_npcs = suppress_active ? std::span<const NpcId>(active) : std::span<const NpcId>();
                for (const auto &anchor : catalog.cell(29, 28)) {
                    if (anchor.npc != 227 && anchor.npc != 229 && anchor.npc != 230)
                        continue;
                    state.tileset = anchor.tileset;
                    for (const int edge : {-65, -64, -63, 319, 320, 321}) {
                        const int camera_x = int(anchor.x) - edge, camera_y = int(anchor.y) - 112;
                        oracle.configure(camera_x, camera_y, state);
                        std::vector<Request> expected;
                        for (unsigned y = 0; y < 40; ++y)
                            for (unsigned x = 0; x < 32; ++x) {
                                if (int((x + 1) * 256) <= camera_x - 64 || int(x * 256) >= camera_x + 320 ||
                                    int((y + 1) * 256) <= camera_y - 64 || int(y * 256) >= camera_y + 320)
                                    continue;
                                const auto part = oracle.cell(x, y);
                                expected.insert(expected.end(), part.begin(), part.end());
                            }
                        require(native_query(catalog, {camera_x - 64, camera_y - 64, camera_x + 320, camera_y + 320},
                                             state, oracle) == expected,
                                "Chaos Theater source edge/active-identity query differs");
                        ++edge_cases;
                    }
                }
            }
            std::cout << "PASS " << assets.title << ": " << catalog.size() << " definitions, " << placements
                      << " placements; " << oracle.calls << " source selector calls / " << oracle.requests
                      << " creation requests; " << edge_cases
                      << " real edge cases, no native gameplay mutation/RNG/allocation\n";
        }
    } catch (const std::exception &error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
