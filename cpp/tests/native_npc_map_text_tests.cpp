#include "eb/native/npcs/map_text.hpp"
#include <algorithm>
#include <iostream>
#include <limits>
#include <stdexcept>
#include <vector>

namespace {
using namespace eb::native::npcs;
using eb::GameVersion;
using eb::native::dialogue::ReferenceKey;
unsigned checks{};
void check(bool condition, const char *message) { ++checks; if (!condition) throw std::runtime_error(message); }
template<class F> void rejects(F operation, const char *message) {
    bool caught = false;
    try { operation(); } catch (const std::exception &) { caught = true; }
    check(caught, message);
}
struct Entry { std::uint8_t y, x, type; std::uint16_t found; };
struct Input {
    GameVersion version;
    unsigned offset_table, door_end;
    std::vector<std::uint8_t> image;
    explicit Input(GameVersion region) : version(region),
        offset_table(region == GameVersion::US ? 0x3e230 : 0x3e21a),
        door_end(region == GameVersion::US ? 0xf58ef : 0xf592b), image(0x101400) {
        for (unsigned i = 0; i < 1280; ++i) pointer(i, 0xcf3000);
    }
    void word(unsigned at, std::uint16_t value) { image.at(at) = std::uint8_t(value); image.at(at + 1) = std::uint8_t(value >> 8); }
    void pointer(unsigned index, std::uint32_t value) {
        const auto at = 0x100000 + index * 4;
        for (unsigned i = 0; i < 4; ++i) image.at(at + i) = std::uint8_t(value >> (8 * i));
    }
    void list(unsigned image_offset, std::initializer_list<Entry> entries) {
        word(image_offset, std::uint16_t(entries.size()));
        unsigned at = image_offset + 2;
        for (const auto &entry : entries) {
            image.at(at) = entry.y; image.at(at + 1) = entry.x; image.at(at + 2) = entry.type;
            word(at + 3, entry.found); at += 5;
        }
    }
    void cell(unsigned x, unsigned y, std::uint32_t reference) { pointer((y / 32) * 32 + x / 32, reference); }
    void offsets(unsigned direction, std::uint16_t x, std::uint16_t y) {
        word(offset_table + direction * 2, x); word(offset_table + 16 + direction * 2, y);
    }
    void key(unsigned image_offset, ReferenceKey value) { std::copy(value.begin(), value.end(), image.begin() + image_offset); }
    std::shared_ptr<const MapTextResources> import() const { return MapTextResources::import(image, version); }
};
MapTextState seeded() { return {0x9876, 0x4321, 0xabcd, {0x12, 0x34, 0x56, 0x78}}; }
void lookup_order_and_retention(GameVersion version) {
    Input input(version);
    input.pointer(0, 0xcf3100);
    input.list(0xf3100, {{7, 4, 3, 0x1122}, {4, 7, 2, 0x3344}, {7, 4, 6, 0x5566}});
    const auto resources = input.import();
    auto state = seeded();
    check(resources->lookup(4, 7, state) == 3 && state.door_found == 0x1122 && state.door_found_type == 3,
          "Door lookup changed source Y/X order or first-match precedence");
    check(state.text == seeded().text && state.unread_type == seeded().unread_type,
          "Raw door lookup changed text-only retained state");
    check(resources->lookup(7, 4, state) == 2 && state.door_found == 0x3344,
          "Swapped door coordinates selected the wrong entry");
    const auto held = state;
    check(resources->lookup(1, 1, state) == 0xff && state == held, "List miss cleared retained found fields");
    check(resources->lookup(32, 0, state) == 0xff && state == held, "Empty list cleared retained found fields");
    Input zero(version); zero.pointer(0, 0xcf3100); zero.list(0xf3100, {{1, 2, 0, 0xffff}});
    state = seeded();
    check(zero.import()->lookup(2, 1, state) == 0 && state.door_found == 0xffff && state.door_found_type == 0,
          "Type zero or high found bits were normalized to a miss");
}
void fallback_and_keys(GameVersion version) {
    const ReferenceKey key{0x67, 0x45, 0x23, 0x81};
    for (unsigned direction = 0; direction < 8; ++direction) {
        Input input(version);
        // Independent synthetic offsets exercise each table lane, including
        // word wrapping; fixed pixel residuals must be discarded before add.
        input.offsets(direction, std::uint16_t(0xffff - direction), std::uint16_t(direction + 1));
        const unsigned x = 19 - direction - (direction == 6 ? 1 : 0), y = 11 + direction;
        input.cell(x, y, 0xcf3100); input.list(0xf3100, {{std::uint8_t(y), std::uint8_t(x), 6, 0x8100}});
        input.key(0xf0100, key);
        auto state = seeded();
        check(input.import()->find_talk(20 * 8 + 7, 10 * 8 + 7, direction, state) &&
                  state.door_found == 0x8100 && state.door_found_type == 6 && state.unread_type == 6 && state.text == key,
              "Map fallback lost signed offset, pixel division, west adjustment or high-bit found masking");
    }
    Input adjacent(version); adjacent.pointer(0, 0xcf3100);
    adjacent.list(0xf3100, {{4, 8, 6, 0x100}}); adjacent.key(0xf0100, key);
    auto state = seeded();
    check(adjacent.import()->find_talk(7 * 8, 4 * 8, 0, state) && state.text == key,
          "Map text failed to retry the adjacent X cell after a miss");
    adjacent.list(0xf3100, {{4, 7, 2, 0x3344}, {4, 8, 6, 0x100}});
    state = seeded();
    check(!adjacent.import()->find_talk(7 * 8, 4 * 8, 0, state) && state.door_found == 0x3344 &&
              state.door_found_type == 2 && state.text == seeded().text && state.unread_type == seeded().unread_type,
          "A found non-text door incorrectly continued to adjacent text or discarded its found state");
    adjacent.list(0xf3100, {{4, 7, 0xff, 0x5566}, {4, 8, 6, 0x100}});
    state = seeded();
    check(adjacent.import()->find_talk(7 * 8, 4 * 8, 0, state) && state.door_found == 0x100,
          "Found typeFF did not perform the source adjacent retry");
    adjacent.list(0xf3100, {{4, 7, 0xff, 0x5566}});
    state = seeded();
    check(!adjacent.import()->find_talk(7 * 8, 4 * 8, 0, state) && state.door_found == 0x5566 &&
              state.door_found_type == 0xff && state.unread_type == seeded().unread_type,
          "Failed retry erased the first typeFF match's retained fields");
    adjacent.list(0xf3100, {{4, 7, 6, 0x100}}); adjacent.key(0xf0100, {});
    state = seeded();
    check(adjacent.import()->find_talk(7 * 8, 4 * 8, 0, state) && state.text == ReferenceKey{},
          "A type6 null key became NoTarget instead of a selected map-text result");
}
void wrapping_and_owned_aliases(GameVersion version) {
    Input input(version); input.pointer(0, 0xa54f3100);
    input.list(0xf3100, {{0, 0, 6, 0x100}}); input.key(0xf0100, {1, 2, 3, 4});
    auto resources = input.import();
    for (unsigned y : {0u, 0x4000u, 0x8000u, 0xc000u}) {
        auto state = seeded();
        check(resources->lookup(0, std::uint16_t(y), state) == 6 && state.door_found == 0x100,
              "Wrapped table index or immutable4F alias/high pointer byte was rejected");
    }
    // FFE0 + (0400>>5) wraps to zero before multiplication.
    auto state = seeded();
    check(resources->lookup(0x400, 0xffe0, state) == 6, "First pointer-index addition failed to wrap at16 bits");
    input.pointer(0, 0xcf0100); input.list(0xf0100, {{2, 3, 9, 0x7788}});
    state = seeded();
    check(input.import()->lookup(3, 2, state) == 9 && state.door_found == 0x7788,
          "Owned door-data bytes could not be interpreted through a source list alias");
    input.pointer(0, 0x50'1100); input.list(0x101100, {{2, 3, 9, 0x7788}});
    state = seeded();
    check(input.import()->lookup(3, 2, state) == 9, "Owned pointer-table alias was rejected as a list");
    Input crossing(version); crossing.pointer(0, 0xcf3100);
    crossing.list(0xf3100, {{0, 31, 0xff, 0x9999}});
    // Source cell FFFF is outside the table; x+1 can wrap, but only after
    // that first lookup. Do not sanitize an invalid first access into zero.
    crossing.offsets(0, 0xffff, 0);
    state = seeded();
    rejects([&] { crossing.import()->find_talk(0, 0, 0, state); }, "Unowned first lookup was silently skipped before wrapped retry");
}
void bounds_and_source_order(GameVersion version) {
    Input input(version); const auto original = input.image;
    check(input.import()->version() == version && input.image == original, "Map-text import mutated input or region");
    for (unsigned size : {0u, input.offset_table, input.offset_table + 31, input.door_end - 1,
                          0x100000u, 0x1013ffu})
        rejects([&] { MapTextResources::import(std::span(original).first(size), version); }, "Truncated map-text ranges were accepted");
    rejects([&] { MapTextResources::import(original, static_cast<GameVersion>(255)); }, "Unknown map-text region was accepted");
    auto state = seeded(); const auto saved = state;
    for (unsigned direction : {8u, 65535u, std::numeric_limits<unsigned>::max()}) {
        rejects([&] { input.import()->find_talk(0, 0, direction, state); }, "Direction read past the eight imported offsets");
        check(state == saved, "Rejected direction changed map state");
    }
    // Pointer index1280 is neighboring screen-transition content, not owned.
    rejects([&] { input.import()->lookup(0, 1280, state); }, "Lookup silently imported neighboring pointer-table bytes");
    for (std::uint32_t pointer : {0xcf6000u, 0x7e3100u, 0x8f3100u, 0xd01400u, 0u}) {
        input.pointer(0, pointer); state = saved;
        rejects([&] { input.import()->lookup(0, 0, state); }, "Unowned list reference was treated as an empty map cell");
        check(state == saved, "Failed list header changed retained state");
    }
    input.pointer(0, 0xcf3100);
    input.list(0xf3100, {{0, 0, 6, std::uint16_t((input.door_end - 0xf0000) - 3)}});
    state = saved;
    rejects([&] { input.import()->find_talk(0, 0, 0, state); }, "Partial final text key read outside the owned content");
    check(state.door_found_type == 6 && state.unread_type == 6 && state.text == saved.text,
          "Invalid key lost the source found/type/unread ordering or committed a partial text key");
    input.list(0xf3100, {{0, 0, 6, std::uint16_t((input.door_end - 0xf0000) - 4)}});
    input.key(input.door_end - 4, {4, 3, 2, 1});
    auto resources = input.import(); state = seeded();
    std::fill(input.image.begin(), input.image.end(), 0); input.image.clear(); input.image.shrink_to_fit();
    check(resources->find_talk(0, 0, 0, state) && state.text == ReferenceKey{4, 3, 2, 1},
          "Last complete owned key or ownership after input destruction failed");
}
} // namespace
int main() {
    try {
        for (auto version : {GameVersion::US, GameVersion::JP}) {
            lookup_order_and_retention(version); fallback_and_keys(version);
            wrapping_and_owned_aliases(version); bounds_and_source_order(version);
        }
        std::cout << "PASS native NPC map text: " << checks << " checks\n";
    } catch (const std::exception &error) { std::cerr << error.what() << '\n'; return 1; }
}
