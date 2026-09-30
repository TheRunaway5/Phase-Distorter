#include "eb/native/npcs/interaction_resources.hpp"
#include "eb/native/npcs/map_text.hpp"
#include <algorithm>
#include <iostream>
#include <limits>
#include <stdexcept>
#include <vector>

namespace {
using eb::GameVersion;
using eb::native::dialogue::ReferenceKey;
using namespace eb::native::npcs;
unsigned checks{};
void check(bool value, const char *message) {
    ++checks;
    if (!value) throw std::runtime_error(message);
}
template<class F> void rejects(F operation, const char *message) {
    bool rejected = false;
    try { operation(); } catch (const std::exception &) { rejected = true; }
    check(rejected, message);
}
struct Input {
    GameVersion version;
    unsigned records, offsets, door_end;
    std::vector<std::uint8_t> image = std::vector<std::uint8_t>(0x101400);
    explicit Input(GameVersion region) : version(region),
        records(region == GameVersion::US ? 0xf8985 : 0xf89c1),
        offsets(region == GameVersion::US ? 0x3e230 : 0x3e21a),
        door_end(region == GameVersion::US ? 0xf58ef : 0xf592b) {
        for (unsigned i = 0; i < 1280; ++i) key(0x100000 + i * 4, {0, 0x30, 0xcf, 0});
    }
    void word(unsigned at, std::uint16_t value) {
        image.at(at) = std::uint8_t(value);
        image.at(at + 1) = std::uint8_t(value >> 8);
    }
    void key(unsigned at, ReferenceKey value) { std::copy(value.begin(), value.end(), image.begin() + at); }
    void one_door(unsigned type, std::uint16_t found) {
        word(0xf3000, 1);
        image.at(0xf3002) = 7;
        image.at(0xf3003) = 11;
        image.at(0xf3004) = std::uint8_t(type);
        word(0xf3005, found);
    }
    std::shared_ptr<const MapTextResources> map() const { return MapTextResources::import(image, version); }
};
MapTextState seeded() { return {0x8123, 5, 0x4567, {0x89, 0xab, 0xcd, 0xef}}; }

void complete_record_fields(GameVersion version) {
    Input input(version);
    const std::array<std::uint16_t, 10> gifts{0, 1, 0xff, 0x100, 0x101, 0x7fff, 0x8000, 0xfeff, 0xff00, 0xffff};
    for (unsigned id = 0; id < 1584; ++id) {
        const auto at = input.records + 17 * id;
        input.image.at(at) = std::uint8_t(id);
        input.word(at + 6, std::uint16_t(0xffffu - id * 37));
        input.image.at(at + 8) = 0x63; // Neither appearance nor key is part of the flag word.
        input.key(at + 9, {std::uint8_t(id), std::uint8_t(id >> 8), 0x7e, 0x81});
        input.word(at + 13, gifts[id % gifts.size()]);
        input.word(at + 15, std::uint16_t(id ^ 0xa55a)); // Upper alternate-pointer bytes stay unrelated.
    }
    const auto original = input.image;
    auto resources = InteractionResources::import(input.image, version);
    check(input.image == original, "Check resource import changed the input image");
    const auto *last = &resources->npc(1583);
    std::fill(input.image.begin(), input.image.end(), 0);
    input.image.clear(); input.image.shrink_to_fit();
    for (unsigned id = 0; id < 1584; ++id) {
        const auto &record = resources->npc(id);
        check(record.raw_type == std::uint8_t(id), "Check import changed an unknown raw type");
        check(record.talk_reference == ReferenceKey{std::uint8_t(id), std::uint8_t(id >> 8), 0x7e, 0x81},
              "Check import resolved or replaced the shared offset9 text key");
        check(record.event_flag == std::uint16_t(0xffffu - id * 37), "Flag word lost its high byte or record stride");
        check(record.gift_value == gifts[id % gifts.size()], "Gift value was byte-truncated or interpreted as a pointer");
    }
    auto retained = resources;
    resources.reset();
    check(&retained->npc(1583) == last && last->gift_value == gifts[1583 % gifts.size()],
          "Check fields borrow the destroyed import image or unstable record storage");
    rejects([&] { retained->npc(1584); }, "Check record index escaped its declared catalog");
    for (unsigned bytes : {input.records + 13, input.records + 1584 * 17 - 1})
        rejects([&] { InteractionResources::import(std::span(original).first(bytes), version); },
                "Check fields accepted a truncated declared NPC record");
}

void raw_cell_offsets(GameVersion version) {
    Input input(version);
    constexpr std::array<std::uint16_t, 8> values{0, 1, 0xffff, 0x8000, 0x7fff, 0xfff8, 0x1234, 0xabcd};
    for (unsigned i = 0; i < 8; ++i) {
        input.word(input.offsets + i * 2, values[i]);
        input.word(input.offsets + 16 + i * 2, values[7 - i]);
    }
    auto resources = input.map();
    std::fill(input.image.begin(), input.image.end(), 0);
    for (unsigned i = 0; i < 8; ++i)
        check(resources->offset(i) == MapTextOffset{values[i], values[7 - i]},
              "Map cell offsets lost source words, lane order or ownership");
    for (auto index : {8u, 65535u, std::numeric_limits<unsigned>::max()})
        rejects([&] { resources->offset(index); }, "Map direction escaped its eight source entries");
}

void matched_selection(GameVersion version) {
    Input input(version);
    const ReferenceKey authored{0x34, 0x12, 0x7e, 0x82}; // Kept raw; not a supported Program location.
    input.key(0xf0100, authored);
    for (unsigned type : {0u, 1u, 4u, 5u, 6u, 7u, 255u}) {
        input.one_door(type, 0x8100);
        auto resources = input.map();
        for (auto expected : {MapTextKind::Check, MapTextKind::Talk}) {
            auto state = seeded();
            const auto found = resources->lookup(11, 7, state);
            check(found == type && state.door_found_type == type && state.door_found == 0x8100,
                  "Raw Check lookup changed type, source order or found high bit");
            const auto before = state;
            const bool selected = resources->select_text(found, expected, state);
            if (type == unsigned(expected))
                check(selected && state.text == authored && state.unread_type == type &&
                          state.door_found == before.door_found && state.door_found_type == before.door_found_type,
                      "Matching map type failed to publish its raw key and unread latch");
            else check(!selected && state == before, "A different map type changed retained text state");
        }
    }
    input.one_door(5, 0x8100);
    auto resources = input.map();
    auto state = seeded();
    check(resources->lookup(11, 7, state) == 5, "Check fixture did not obtain an actual matching door");
    const auto before_miss = state;
    const auto missed = resources->lookup(12, 7, state);
    check(missed == 0xff && state == before_miss, "Miss did not retain the previous type5 descriptor");
    check(!resources->select_text(missed, MapTextKind::Check, state) && state == before_miss,
          "A stale retained type5 became a selected text after an actual lookup miss");
    rejects([&] { resources->select_text(5, static_cast<MapTextKind>(255), state); },
            "Invalid selection policy acquired arbitrary door data");
    check(state == before_miss, "Invalid selection policy changed retained state");

    input.key(0xf0100, {});
    resources = input.map(); state = seeded();
    const auto type = resources->lookup(11, 7, state);
    check(resources->select_text(type, MapTextKind::Check, state) && state.text == ReferenceKey{} && state.unread_type == 5,
          "Null type5 text was conflated with no matching door");
}

void selection_read_boundaries(GameVersion version) {
    Input input(version);
    const ReferenceKey last{0x13, 0x57, 0x9b, 0xdf};
    input.key(input.door_end - 4, last);
    input.one_door(5, std::uint16_t(0x8000 | (input.door_end - 0xf0000 - 4)));
    auto resources = input.map(); auto state = seeded();
    auto type = resources->lookup(11, 7, state);
    check(resources->select_text(type, MapTextKind::Check, state) && state.text == last,
          "Last fully owned reference was rejected or changed");
    input.one_door(5, std::uint16_t(input.door_end - 0xf0000 - 3));
    resources = input.map(); state = seeded(); type = resources->lookup(11, 7, state);
    const auto held = state;
    rejects([&] { resources->select_text(type, MapTextKind::Check, state); },
            "Selection read outside the declared door content");
    check(state.unread_type == 5 && state.text == held.text && state.door_found == held.door_found &&
              state.door_found_type == held.door_found_type,
          "Failed key read did not preserve source latch-before-read ordering or atomic key publication");
    state = held;
    check(!resources->select_text(0xff, MapTextKind::Check, state) && state == held,
          "An actual miss accessed an invalid retained descriptor");
}
} // namespace
int main() {
    try {
        for (auto version : {GameVersion::US, GameVersion::JP}) {
            complete_record_fields(version);
            raw_cell_offsets(version);
            matched_selection(version);
            selection_read_boundaries(version);
        }
        std::cout << "PASS native NPC Check resources: " << checks << " checks\n";
    } catch (const std::exception &error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
