#include "eb/native/npcs/interaction_resources.hpp"
#include <algorithm>
#include <iostream>
#include <limits>
#include <stdexcept>
#include <vector>

namespace {
using eb::GameVersion;
using namespace eb::native::npcs;
unsigned checks{};
void check(bool condition, const char *message) {
    ++checks;
    if (!condition) throw std::runtime_error(message);
}
template<class F> void rejects(F operation, const char *message) {
    bool caught = false;
    try { operation(); } catch (const std::exception &) { caught = true; }
    check(caught, message);
}
struct Input {
    GameVersion version;
    unsigned definitions, directions;
    std::vector<std::uint8_t> image;
    explicit Input(GameVersion region) : version(region),
        definitions(region == GameVersion::US ? 0xf8985 : 0xf89c1),
        directions(region == GameVersion::US ? 0x3e148 : 0x3e132),
        image(definitions + 1584 * 17, 0xb5) {
        for (unsigned id = 0; id < 1584; ++id) {
            const unsigned at = definitions + id * 17;
            image[at] = std::uint8_t(id);
            const auto reference = key(id);
            std::copy(reference.begin(), reference.end(), image.begin() + at + 9);
            // Offset13 belongs to the item/secondary-reference union. Its
            // poison must never become a fifth key byte or next record type.
            std::fill_n(image.begin() + at + 13, 4, 0xe7);
        }
        constexpr std::array<std::uint16_t, 8> words{0, 1, 0x7fff, 0x8000, 0xffff, 0xfff6, 0x1234, 0xabcd};
        for (unsigned i = 0; i < 8; ++i) {
            put(directions + i * 2, words[i]);
            put(directions + 16 + i * 2, words[7 - i]);
            put(directions + 32 + i * 2, std::uint16_t(0x8100 + i * 0x123));
        }
    }
    static eb::native::dialogue::ReferenceKey key(unsigned id) {
        return {std::uint8_t(id * 19), std::uint8_t(id >> 8), std::uint8_t(id * 7 + 3),
                std::uint8_t(id * 13 + 5)};
    }
    void put(unsigned at, std::uint16_t value) { image.at(at) = std::uint8_t(value); image.at(at + 1) = std::uint8_t(value >> 8); }
    std::shared_ptr<const InteractionResources> import() const { return InteractionResources::import(image, version); }
};
void imported_fields(GameVersion version) {
    Input input(version);
    const auto original = input.image;
    const auto resources = input.import();
    check(resources->version() == version && InteractionResources::npc_count == 1584,
          "NPC interaction region/count changed");
    check(input.image == original, "Import mutated its source image");
    for (unsigned id = 0; id < 1584; ++id) {
        check(resources->npc(id).raw_type == std::uint8_t(id), "Raw NPC type was filtered, normalized or mis-strided");
        check(resources->npc(id).talk_reference == Input::key(id), "Talk key lost record order or one of its four raw bytes");
    }
    constexpr std::array<int, 8> expected{0, 1, 32767, -32768, -1, -10, 4660, -21555};
    for (unsigned i = 0; i < 8; ++i) {
        check(resources->probe_offset(i) == TalkProbeOffset{std::int16_t(expected[i]), std::int16_t(expected[7 - i])},
              "Signed probe word or table order changed");
        check(resources->opposite_direction(i) == std::uint16_t(0x8100 + i * 0x123),
              "Opposite direction was narrowed or normalized instead of retaining its source word");
    }
    for (unsigned id : {1584u, 65535u, std::numeric_limits<unsigned>::max()})
        rejects([&] { resources->npc(id); }, "NPC index escaped the declared catalog");
    for (unsigned direction : {8u, 255u, 65535u, std::numeric_limits<unsigned>::max()}) {
        rejects([&] { resources->probe_offset(direction); }, "Probe index wrapped into an adjacent table");
        rejects([&] { resources->opposite_direction(direction); }, "Opposite index escaped its eight-word table");
    }
    for (unsigned length : {0u, input.directions, input.directions + 47, input.definitions,
                            input.definitions + 1583 * 17, unsigned(original.size() - 1)})
        rejects([&] { InteractionResources::import(std::span(original).first(length), version); },
                "Truncated imported content was accepted");
    rejects([&] { InteractionResources::import(original, static_cast<GameVersion>(255)); },
            "Unknown game region selected one region's assets");
}
void ownership_and_unresolved_keys(GameVersion version) {
    Input input(version);
    const std::array<eb::native::dialogue::ReferenceKey, 4> keys{{
        {0, 0, 0, 0}, {0xff, 0xff, 0xff, 0xff}, {0x34, 0x12, 0x7e, 0}, {0, 0, 0, 0x80}}};
    for (unsigned i = 0; i < keys.size(); ++i)
        std::copy(keys[i].begin(), keys[i].end(), input.image.begin() + input.definitions + i * 17 + 9);
    auto resources = input.import();
    const auto *record = &resources->npc(1583);
    std::fill(input.image.begin(), input.image.end(), 0);
    input.image.clear(); input.image.shrink_to_fit();
    for (unsigned i = 0; i < keys.size(); ++i)
        check(resources->npc(i).talk_reference == keys[i], "Importer resolved, rejected or normalized an unused raw key");
    check(record->talk_reference == Input::key(1583), "Resource borrows input storage after import");
    auto retained = resources;
    resources.reset();
    check(&retained->npc(1583) == record && record->raw_type == std::uint8_t(1583),
          "Immutable record identity changed while an owner remained alive");
    check(retained->probe_offset(3).x == -32768 && retained->opposite_direction(7) == 0x88f5,
          "Direction tables retained borrowed source storage");
}
void signed_extremes(GameVersion version) {
    Input input(version);
    // Exercise every possible offset word through each axis without relying
    // on the implementation's unsigned-to-signed conversion helper.
    for (unsigned group = 0; group < 65536; group += 8) {
        for (unsigned i = 0; i < 8; ++i) {
            input.put(input.directions + i * 2, std::uint16_t(group + i));
            input.put(input.directions + 16 + i * 2, std::uint16_t(65535 - group - i));
        }
        const auto resources = input.import();
        for (unsigned i = 0; i < 8; ++i) {
            const auto value = resources->probe_offset(i);
            const unsigned x = group + i, y = 65535 - group - i;
            check(int(value.x) == (x < 32768 ? int(x) : int(x) - 65536) &&
                      int(value.y) == (y < 32768 ? int(y) : int(y) - 65536),
                  "An authored signed offset word changed value");
        }
    }
}
} // namespace
int main() {
    try {
        for (auto version : {GameVersion::US, GameVersion::JP}) {
            imported_fields(version); ownership_and_unresolved_keys(version); signed_extremes(version);
        }
        std::cout << "PASS native NPC interaction resources: " << checks << " checks\n";
    } catch (const std::exception &error) {
        std::cerr << error.what() << '\n'; return 1;
    }
}
