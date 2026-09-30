// Opt-in local-pack verification. No authored content is bundled by this test.
#include "eb/asset_store.hpp"
#include "eb/native/npcs/interaction_resources.hpp"
#include "eb/native/npcs/map_text.hpp"
#include "generated_assets.hpp"
#include <iomanip>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include <string_view>

namespace {
void require(bool value, const char *message) { if (!value) throw std::runtime_error(message); }
std::string key_string(const eb::native::dialogue::ReferenceKey &key) {
    std::ostringstream text;
    text << std::hex << std::setfill('0');
    for (auto byte : key) text << std::setw(2) << unsigned(byte);
    return text.str();
}
void verify(const char *path, bool dump) {
    const auto assets = eb::load_game_assets(path, eb::asset_profiles());
    const auto resources = eb::native::npcs::InteractionResources::import(assets.image, assets.version);
    const bool us = assets.version == eb::GameVersion::US;
    const char *region = us ? "US" : "JP";
    // Independent test offsets from the linked NPC_CONFIG_TABLE and the
    // original C042EF/C042C2 operands; no production layout helper is used.
    const unsigned table = us ? 0xf8985 : 0xf89c1;
    const unsigned offsets = us ? 0x3e148 : 0x3e132;
    unsigned null_keys = 0;
    for (unsigned id = 0; id < 1584; ++id) {
        const auto &actual = resources->npc(id);
        const unsigned record = table + 17 * id;
        require(actual.raw_type == assets.image.at(record), "Imported NPC type differs from the source record");
        for (unsigned byte = 0; byte < 4; ++byte)
            require(actual.talk_reference[byte] == assets.image.at(record + 9 + byte),
                    "Imported Talk key differs from the source DWORD");
        null_keys += actual.talk_reference == eb::native::dialogue::ReferenceKey{};
        if (dump) std::cout << "{\"region\":\"" << region << "\",\"npc\":" << id
                            << ",\"type\":" << unsigned(actual.raw_type) << ",\"talk\":\""
                            << key_string(actual.talk_reference) << "\"}\n";
    }
    for (unsigned direction = 0; direction < 8; ++direction) {
        const auto probe = resources->probe_offset(direction);
        const auto opposite = resources->opposite_direction(direction);
        const auto word = [&](unsigned table_index) {
            const auto first = offsets + table_index * 16 + direction * 2;
            return unsigned(assets.image.at(first)) + 256 * unsigned(assets.image.at(first + 1));
        };
        const auto signed_value = [](unsigned value) { return value < 32768 ? int(value) : int(value) - 65536; };
        require(probe.x == signed_value(word(0)) && probe.y == signed_value(word(1)) && opposite == word(2),
                "Imported direction field differs from the original table word");
        if (dump) std::cout << "{\"region\":\"" << region << "\",\"direction\":" << direction
                            << ",\"x\":" << probe.x << ",\"y\":" << probe.y
                            << ",\"opposite\":" << opposite << "}\n";
    }
    const auto map = eb::native::npcs::MapTextResources::import(assets.image, assets.version);
    unsigned matched_cells = 0, text_cells = 0;
    // Independently interpret original list records. This exhaustive nominal
    // map corpus compares every32x32 position in each of1280 authored cells,
    // including first-match ordering and retained state on empty/missed lists.
    for (unsigned cell = 0; cell < 1280; ++cell) {
        const unsigned pointer_at = 0x100000 + cell * 4;
        const unsigned address = unsigned(assets.image.at(pointer_at)) |
                                 unsigned(assets.image.at(pointer_at + 1)) << 8 |
                                 unsigned(assets.image.at(pointer_at + 2)) << 16;
        require(address >= 0xcf0000 && address < 0xd00000, "Original door list is outside the declared source bank");
        const auto first = address - 0xc00000;
        const unsigned count = unsigned(assets.image.at(first)) + 256 * unsigned(assets.image.at(first + 1));
        for (unsigned y = 0; y < 32; ++y) for (unsigned x = 0; x < 32; ++x) {
            eb::native::npcs::MapTextState expected{0x1234, 0x5678, 0x9abc, {1, 2, 3, 4}};
            unsigned type = 0xff;
            for (unsigned entry = 0; entry < count; ++entry) {
                const auto at = first + 2 + entry * 5;
                if (assets.image.at(at) != y || assets.image.at(at + 1) != x) continue;
                type = assets.image.at(at + 2);
                expected.door_found = std::uint16_t(unsigned(assets.image.at(at + 3)) +
                                                   256 * unsigned(assets.image.at(at + 4)));
                expected.door_found_type = std::uint16_t(type);
                ++matched_cells;
                break;
            }
            eb::native::npcs::MapTextState actual{0x1234, 0x5678, 0x9abc, {1, 2, 3, 4}};
            const auto world_x = std::uint16_t(cell % 32 * 32 + x), world_y = std::uint16_t(cell / 32 * 32 + y);
            require(map->lookup(world_x, world_y, actual) == type && actual == expected,
                    "Map lookup differs from independent original door-list decoding");
            if (type == 6) {
                const unsigned at = 0xf0000 + (expected.door_found & 0x7fff);
                for (unsigned byte = 0; byte < 4; ++byte) expected.text[byte] = assets.image.at(at + byte);
                expected.unread_type = 6;
                require(map->find_talk(std::uint16_t(world_x * 8), std::uint16_t((world_y + 1) * 8), 0, actual) &&
                            actual == expected,
                        "Map fallback differs from original type6 raw text reference");
                ++text_cells;
            }
        }
    }
    std::cout << "{\"region\":\"" << region << "\",\"image_sha256\":\"" << eb::sha256(assets.image)
              << "\",\"records\":1584,\"raw_fields_checked\":7944,\"null_keys\":" << null_keys
              << ",\"map_cells_checked\":1310720,\"matched_map_cells\":" << matched_cells
              << ",\"map_text_cells\":" << text_cells
              << ",\"result\":\"pass\"}\n";
}
} // namespace
int main(int argc, char **argv) {
    try {
        bool dump = false;
        int first = 1;
        if (argc > 1 && std::string_view(argv[1]) == "--dump-records") { dump = true; ++first; }
        if (first == argc) throw std::invalid_argument("native_npc_interaction_assets [--dump-records] pack.ebpak ...");
        for (int i = first; i < argc; ++i) verify(argv[i], dump);
    } catch (const std::exception &error) {
        std::cerr << error.what() << '\n'; return 1;
    }
}
