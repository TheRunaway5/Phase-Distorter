// Complete original C07477 and C065C2 calls, with no internal service stubs.
// Flat source memory separates the C scratch/stack from game fields; this is
// behavior and ordered-global-write proof, not hardware/interrupt timing proof.
// Local packs are opt-in. Synthetic records supplement, never replace, the
// original loaded door content in the authored corpus.
#include "eb/asset_store.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/native/npcs/map_text.hpp"
#include "generated_assets.hpp"
#include <algorithm>
#include <array>
#include <iostream>
#include <stdexcept>
#include <string>
#include <utility>
#include <vector>

namespace {
using namespace eb::native::npcs;
using eb::GameVersion;
using eb::native::dialogue::ReferenceKey;
using Write = std::pair<std::uint32_t, std::uint8_t>;
void require(bool condition, const std::string &message) { if (!condition) throw std::runtime_error(message); }
struct Layout {
    unsigned lookup, talk, found, type, unread, text, interacting, leader_x, leader_y, offsets, door_end;
};
Layout layout(GameVersion version) {
    // Independent linked symbols and game_state fields (JP name field is3
    // bytes shorter). No production resource-layout helper supplies these.
    if (version == GameVersion::US) return {0xc07477, 0xc065c2, 0x5dbc, 0x5dbe, 0x5ddc, 0x5dde,
                                           0x5d62, 0x9877, 0x987b, 0x3e230, 0xf58ef};
    return {0xc076b6, 0xc067f0, 0x6142, 0x6144, 0x6162, 0x6164,
            0x60e8, 0x9b28, 0x9b2c, 0x3e21a, 0xf592b};
}
unsigned word(const std::vector<std::uint8_t> &image, unsigned at) {
    return unsigned(image.at(at)) | unsigned(image.at(at + 1)) << 8;
}
void put(std::vector<std::uint8_t> &image, unsigned at, unsigned value) {
    image.at(at) = std::uint8_t(value); image.at(at + 1) = std::uint8_t(value >> 8);
}
void pointer(std::vector<std::uint8_t> &image, unsigned cell, unsigned value) {
    for (unsigned i = 0; i < 4; ++i) image.at(0x100000 + cell * 4 + i) = std::uint8_t(value >> (i * 8));
}
struct Entry { std::uint8_t y, x, type; std::uint16_t found; };
void list(std::vector<std::uint8_t> &image, unsigned at, std::initializer_list<Entry> entries) {
    put(image, at, unsigned(entries.size())); at += 2;
    for (const auto &entry : entries) {
        image.at(at) = entry.y; image.at(at + 1) = entry.x; image.at(at + 2) = entry.type;
        put(image, at + 3, entry.found); at += 5;
    }
}
struct Totals {
    std::uint64_t steps{}, writes{}, calls{}, lookup_calls{}, talk_calls{}, text_results{}, misses{};
    unsigned original_text_cells{}, original_list_entries{}, synthetic_calls{};
};
struct Original {
    GameVersion version;
    Layout p;
    Totals totals;
    std::vector<std::uint8_t> memory = std::vector<std::uint8_t>(0x1000000);
    std::shared_ptr<const MapTextResources> resources;
    explicit Original(GameVersion region) : version(region), p(layout(region)) {}
    void load(const std::vector<std::uint8_t> &image) {
        require(image.size() <= 0x400000, "Reference image does not fit source cartridge space");
        // These immutable mirrors are the only aliases exercised by the
        // synthetic corpus. The source still executes its real long reads.
        std::copy(image.begin(), image.end(), memory.begin() + 0xc00000);
        std::copy(image.begin(), image.end(), memory.begin() + 0x400000);
        resources = MapTextResources::import(image, version);
    }
    void compare(bool talk, std::uint16_t x, std::uint16_t y, unsigned direction,
                 const std::string &label, MapTextState initial = {0xa123, 0xb456, 0xc789, {0xaa, 0xbb, 0xcc, 0xdd}}) {
        const auto before_calls = totals.calls;
        try {
            std::array<std::uint8_t, 0x20000> expected{};
            const auto set = [&](unsigned at, unsigned value) {
                expected.at(at) = std::uint8_t(value); expected.at(at + 1) = std::uint8_t(value >> 8);
            };
            const auto save_state = [&](const MapTextState &state) {
                set(p.found, state.door_found); set(p.type, state.door_found_type); set(p.unread, state.unread_type);
                std::copy(state.text.begin(), state.text.end(), expected.begin() + p.text);
            };
            save_state(initial); set(p.interacting, 0x7777); set(p.leader_x, x); set(p.leader_y, y);
            std::copy(expected.begin(), expected.end(), memory.begin() + 0x7e0000);
            std::fill(memory.begin(), memory.begin() + 0x10000, 0);
            eb::MainCpu65816 cpu(memory, version);
            cpu.set_runtime(eb::MainCpuRuntime::Legacy);
            cpu.emulation_mode = false; cpu.status_register = eb::MainCpu65816::InterruptDisable;
            cpu.direct_page = 0x1e00; cpu.stack_pointer = 0x1fff; cpu.data_bank = 0x7e;
            cpu.accumulator = talk ? std::uint16_t(direction) : x; cpu.x_index = y;
            cpu.program_counter = 0xc0ff00;
            cpu.execute_instruction<0x22>(talk ? p.talk : p.lookup, 4);
            std::vector<Write> writes;
            cpu.observe_memory_write = [&](std::uint32_t at, std::uint8_t value) {
                if (at >= 0x7e0000 && at < 0x800000) writes.emplace_back(at, value);
                else require(at >= 0x1c00 && at < 0x2000, "Original helper wrote outside C scratch/stack and game fields");
            };
            unsigned steps = 0;
            while (cpu.program_counter != 0xc0ff04 || cpu.stack_pointer != 0x1fff) {
                require(++steps < 100000, "Original complete map helper did not return");
                cpu.step_instruction();
            }
            require(cpu.direct_page == 0x1e00 && cpu.data_bank == 0x7e,
                    "Original map helper failed to preserve its caller frame/bank");
            auto native = initial;
            const bool text = talk && resources->find_talk(x, y, direction, native);
            if (!talk) {
                const auto result = resources->lookup(x, y, native);
                require((cpu.accumulator & 0xff) == result, "Lookup return byte differs from original execution");
                totals.misses += result == 0xff;
            }
            save_state(native);
            if (text) set(p.interacting, 0xfffe);
            require(std::equal(expected.begin(), expected.end(), memory.begin() + 0x7e0000),
                    "Original game fields differ from native map state/target publication");
            // Every successful source lookup writes found then type (even a
            // typeFF match). A selected text then latches unread, copies four
            // key bytes and publishes FFFE. No other global write is allowed.
            std::size_t cursor = 0;
            while (cursor < writes.size() && writes[cursor].first == 0x7e0000 + p.found) {
                const std::array<unsigned, 4> order{p.found, p.found + 1, p.type, p.type + 1};
                for (auto at : order) {
                    require(cursor < writes.size() && writes[cursor].first == 0x7e0000 + at,
                            "Source found/type write order changed"); ++cursor;
                }
            }
            if (text) {
                const std::array<unsigned, 8> order{p.unread, p.unread + 1, p.text, p.text + 1,
                                                   p.text + 2, p.text + 3, p.interacting, p.interacting + 1};
                for (auto at : order) {
                    require(cursor < writes.size() && writes[cursor] == Write{0x7e0000 + at, expected[at]},
                            "Source text/unread/target ordered publication differs from native state"); ++cursor;
                }
            }
            require(cursor == writes.size(), "Source wrote unaccounted map fields");
            totals.steps += steps; totals.writes += writes.size(); ++totals.calls;
            if (talk) ++totals.talk_calls; else ++totals.lookup_calls;
            totals.text_results += text;
        } catch (const std::exception &error) {
            throw std::runtime_error(std::string(version == GameVersion::US ? "US " : "JP ") + label +
                                     " case=" + std::to_string(before_calls) + ": " + error.what());
        }
    }
};
void original_content(Original &original, const std::vector<std::uint8_t> &image) {
    original.load(image);
    for (unsigned cell = 0; cell < 1280; ++cell) {
        const unsigned at = 0x100000 + cell * 4;
        const unsigned pointer = word(image, at) | unsigned(image.at(at + 2)) << 16;
        require(pointer >= 0xcf0000 && pointer < 0xd00000, "Unexpected original door-list bank");
        const unsigned start = pointer - 0xc00000, count = word(image, start);
        if (!count) original.compare(false, std::uint16_t(cell % 32 * 32), std::uint16_t(cell / 32 * 32), 0, "original empty list");
        for (unsigned entry = 0; entry < count; ++entry) {
            const unsigned record = start + 2 + entry * 5;
            const unsigned cell_x = cell % 32 * 32 + image.at(record + 1), cell_y = cell / 32 * 32 + image.at(record);
            original.compare(false, std::uint16_t(cell_x), std::uint16_t(cell_y), 0, "original list entry");
            ++original.totals.original_list_entries;
            if (image.at(record + 2) != 6) continue;
            ++original.totals.original_text_cells;
            for (unsigned direction = 0; direction < 8; ++direction) {
                // Positions are constructed from original imported offsets;
                // expected target/text still comes only from executed helper.
                const auto x = std::uint16_t(cell_x - word(image, original.p.offsets + direction * 2) + (direction == 6));
                const auto y = std::uint16_t(cell_y - word(image, original.p.offsets + 16 + direction * 2));
                original.compare(true, std::uint16_t(x * 8), std::uint16_t(y * 8), direction,
                                 "all original type6 cells/directions");
            }
        }
    }
}
void synthetic_content(Original &original, const std::vector<std::uint8_t> &assets) {
    auto image = assets;
    for (unsigned cell = 0; cell < 1280; ++cell) pointer(image, cell, 0xcf3000);
    put(image, 0xf3000, 0);
    for (unsigned i = 0; i < 16; ++i) put(image, original.p.offsets + 2 * i, 0);
    pointer(image, 0, 0xcf3100);
    const auto compare = [&](bool talk, unsigned x, unsigned y, unsigned direction, const char *label) {
        original.compare(talk, std::uint16_t(x), std::uint16_t(y), direction, label);
        ++original.totals.synthetic_calls;
    };
    for (unsigned type : {0u, 1u, 2u, 5u, 6u, 7u, 127u, 128u, 254u, 255u}) {
        list(image, 0xf3100, {{7, 4, std::uint8_t(type), 0x8100}, {7, 5, 6, 0x100}, {7, 4, 6, 0x200}});
        image[0xf0100] = 0x23; image[0xf0101] = 0x45; image[0xf0102] = 0x7e; image[0xf0103] = 0x81;
        original.load(image);
        compare(false, 4, 7, 0, "raw types and first-match order");
        compare(false, 7, 4, 0, "swapped coordinate miss");
        compare(true, 4 * 8, 7 * 8, 0, "non6/FF adjacent retry/full key");
    }
    list(image, 0xf3100, {{7, 4, 255, 0xabcd}}); original.load(image);
    compare(true, 4 * 8, 7 * 8, 0, "typeFF hit then missed retry retains fields");
    list(image, 0xf3100, {{7, 5, 6, 0x100}});
    std::fill_n(image.begin() + 0xf0100, 4, 0); original.load(image);
    compare(true, 4 * 8, 7 * 8, 0, "first miss/adjacent null text still publishes target");
    for (unsigned direction = 0; direction < 8; ++direction) {
        put(image, original.p.offsets + direction * 2, 0xffff - direction);
        put(image, original.p.offsets + 16 + direction * 2, direction + 1);
        list(image, 0xf3100, {{std::uint8_t(11 + direction), std::uint8_t(19 - direction - (direction == 6)), 6, 0x100}});
        original.load(image);
        compare(true, 20 * 8 + 7, 10 * 8 + 7, direction, "word offsets/west/pixel residuals");
    }
    for (unsigned pointer_value : {0xcf3100u, 0x4f3100u, 0xa5cf3100u, 0x804f3100u}) {
        pointer(image, 0, pointer_value); list(image, 0xf3100, {{0, 0, 6, 0x100}}); original.load(image);
        for (unsigned y : {0u, 0x4000u, 0x8000u, 0xc000u}) compare(false, 0, y, 0, "pointer bank/highbyte and shifted-index aliases");
        compare(false, 0x400, 0xffe0, 0, "wrapped index addition before shift");
    }
    pointer(image, 0, 0xcf0100); list(image, 0xf0100, {{2, 3, 9, 0x7788}}); original.load(image);
    compare(false, 3, 2, 0, "owned door-data alias as a list");
    pointer(image, 0, 0x501100); list(image, 0x101100, {{2, 3, 9, 0x7788}}); original.load(image);
    compare(false, 3, 2, 0, "owned pointer-table alias as a list");
    // Exact last complete owned key; no test silently allows adjacent music.
    pointer(image, 0, 0xcf3100); list(image, 0xf3100, {{0, 0, 6, std::uint16_t(original.p.door_end - 0xf0000 - 4)}});
    for (unsigned i = 0; i < 16; ++i) put(image, original.p.offsets + i * 2, 0);
    for (unsigned i = 0; i < 4; ++i) image.at(original.p.door_end - 4 + i) = std::uint8_t(0xf0 + i);
    original.load(image); compare(true, 0, 0, 0, "last complete owned key");
    pointer(image, 1279, 0xcf3100); list(image, 0xf3100, {{31, 31, 8, 0x3333}}); original.load(image);
    compare(false, 1023, 1279, 0, "last declared pointer/list coordinate");
}
void run(const char *path) {
    const auto assets = eb::load_game_assets(path, eb::asset_profiles());
    Original original(assets.version); original_content(original, assets.image); synthetic_content(original, assets.image);
    const auto &t = original.totals;
    require(t.original_text_cells == 49 && t.text_results >= 49 * 8 && t.misses > 100 && t.synthetic_calls > 50,
            "Map reference corpus lost required source or boundary coverage");
    std::cout << "{\"region\":\"" << (assets.version == GameVersion::US ? "US" : "JP")
              << "\",\"image_sha256\":\"" << eb::sha256(assets.image) << "\",\"complete_calls\":" << t.calls
              << ",\"lookup_calls\":" << t.lookup_calls << ",\"talk_calls\":" << t.talk_calls
              << ",\"original_text_cells\":" << t.original_text_cells << ",\"original_list_entries\":" << t.original_list_entries
              << ",\"synthetic_calls\":" << t.synthetic_calls << ",\"text_results\":" << t.text_results
              << ",\"lookup_ff_returns\":" << t.misses << ",\"ordered_global_writes\":" << t.writes
              << ",\"source_instructions\":" << t.steps << ",\"result\":\"pass\"}\n";
}
} // namespace
int main(int argc, char **argv) {
    try {
        if (argc < 2) {
            std::cout << "Opt-in local packs required: native_npc_map_text_reference pack.ebpak ...\n";
            return 77;
        }
        for (int i = 1; i < argc; ++i) run(argv[i]);
    } catch (const std::exception &error) { std::cerr << error.what() << '\n'; return 1; }
}
