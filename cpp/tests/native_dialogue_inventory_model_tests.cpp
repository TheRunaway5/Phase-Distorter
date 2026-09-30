// Bounded C113D1 menu-record semantics needed by inventory's raw item names.
// Synthetic inputs only; whole INVENTORY_GET_ITEM_NAME/source execution is a
// separate reference fixture. No item provider, equipment logic or renderer is
// replaced by this model test.
#include "eb/native/dialogue/menu_model.hpp"
#include "eb/native/dialogue/window_host.hpp"
#include "eb/native/dialogue/fonts.hpp"
#include "native_dialogue_test_assets.hpp"
#include <algorithm>
#include <array>
#include <iostream>
#include <stdexcept>
#include <vector>

namespace {
using namespace eb::native::dialogue;
unsigned checks{};
void check(bool value, const char* message) {
    ++checks;
    if (!value) throw std::runtime_error(message);
}
template<class F> void rejects(F operation, const char* message) {
    bool rejected = false;
    try { operation(); } catch (const std::invalid_argument&) { rejected = true; }
    check(rejected, message);
}
dialogue_test_assets::WindowInput make_assets(eb::GameVersion version) {
    dialogue_test_assets::WindowInput input(version);
    dialogue_test_assets::add_text_fonts(input);
    // Fourteen inventory entries fit two columns without a page-control entry.
    input.put(input.configs + 4, 30);
    input.put(input.configs + 6, 18);
    if (version == eb::GameVersion::US)
        std::fill_n(input.image.begin() + 0x210c7a, 96, 5);
    return input;
}
struct Fixture {
    dialogue_test_assets::WindowInput input;
    State state;
    std::shared_ptr<const FontResources> fonts;
    TextOutput output;
    WindowHost host;
    MenuModel model;
    explicit Fixture(eb::GameVersion version)
        : input(make_assets(version)), fonts(FontResources::import(input.image, version)),
          output(fonts, state), host(input.import(), state, output), model(host, *fonts) {
        open();
        output.policy().character_padding = 0;
    }
    void open() {
        auto operation = host.begin({WindowAction::Open, WindowId{0}, {}, 0});
        while (operation->advance() == OutputProgress::Suspended) operation->respond();
        check(operation->succeeded(), "Synthetic inventory model window failed to open");
    }
    void reopen() {
        auto operation = host.begin({WindowAction::Close, WindowId{0}, {}, 0});
        while (operation->advance() == OutputProgress::Suspended) operation->respond();
        check(operation->complete(), "Synthetic inventory model window failed to close");
        open();
    }
    WindowMetadata& window() { return host.metadata(WindowId{0}); }
};
WindowMenuOption residue(unsigned index) {
    WindowMenuOption option;
    option.flags = 0;
    option.previous = 62;
    option.next = 63;
    option.page = 0x4321;
    option.x = std::uint16_t(0x8100 + index);
    option.y = std::uint16_t(0x8200 + index);
    option.userdata = std::uint16_t(0x9300 + index);
    option.sound_effect = 0xa7;
    option.selected_text = Location{3, std::uint16_t(0x4567 + index)};
    for (unsigned i = 0; i < option.label.size(); ++i)
        option.label[i] = std::uint8_t(0x80 + i);
    option.pixel_align = std::uint8_t(0xb0 + index);
    return option;
}
void bounded_copy(eb::GameVersion version) {
    Fixture f(version);
    auto& pool = f.host.menu_options();
    for (unsigned i = 0; i < pool.size(); ++i) pool[i] = residue(i);
    f.window().selected_option = 0x1234;
    f.window().page_number = 0x4567;
    const unsigned maximum = version == eb::GameVersion::US ? 25 : 24;
    for (unsigned length = 0; length <= maximum; ++length) {
        std::vector<std::uint8_t> label(length);
        for (unsigned i = 0; i < length; ++i) label[i] = std::uint8_t(0x71 + i % 8);
        const auto before = pool;
        const auto script = std::optional<Location>{Location{7, std::uint16_t(0x8000 + length)}};
        const auto actual = f.model.append(label, script);
        auto expected = before[length];
        expected.flags = 1;
        expected.previous = length ? std::optional<unsigned>{length - 1} : std::nullopt;
        expected.next.reset();
        expected.page = 1;
        expected.sound_effect = 1;
        expected.selected_text = script;
        std::copy(label.begin(), label.end(), expected.label.begin());
        if (length == 25) expected.pixel_align = 0;
        else expected.label[length] = 0;
        check(actual == length && pool[length] == expected,
              "Bounded append changed full-label bytes, terminator placement or record residue");
        check(f.window().first_option == 0 && f.window().last_option == length &&
                  f.window().selected_option == 0x1234 && f.window().page_number == 0x4567,
              "Basic append reset selection/page or chose the wrong source list position");
        for (unsigned i = 0; i < pool.size(); ++i) if (i != length) {
            auto unchanged = before[i];
            if (length && i == length - 1) unchanged.next = length;
            check(pool[i] == unchanged, "Label append wrote outside its record and prior tail link");
        }
    }
    if (version == eb::GameVersion::US) {
        const auto& full = pool[25];
        check(std::find(full.label.begin(), full.label.end(), 0) == full.label.end() && !full.pixel_align,
              "US full 25-byte name was shortened or retained fractional alignment");
        check(f.model.label_width(full.label) == 125 && f.model.label_width(full.label, 24) == 120,
              "Full-name measurement discarded byte25 or ignored its explicit bound");
    }
}
void embedded_zero_and_reuse(eb::GameVersion version) {
    Fixture f(version);
    auto& pool = f.host.menu_options();
    for (unsigned i = 0; i < pool.size(); ++i) pool[i] = residue(i);
    const unsigned maximum = version == eb::GameVersion::US ? 25 : 24;
    std::vector<std::uint8_t> full(maximum, 0x73);
    f.model.append(full);
    f.reopen();
    pool[0].pixel_align = 7;
    const auto before = pool[0];
    // Bytes after an early NUL are not part of the source C string, even if
    // the supplied bounded span is larger than a record.
    std::array<std::uint8_t, 40> short_label;
    short_label.fill(0xee);
    short_label[0] = 0x74;
    short_label[1] = 0;
    check(f.model.append(short_label) == 0, "Released record was not reused in creation order");
    auto expected = before;
    expected.flags = 1;
    expected.previous.reset();
    expected.next.reset();
    expected.page = 1;
    expected.sound_effect = 1;
    expected.selected_text.reset();
    expected.label[0] = 0x74;
    expected.label[1] = 0;
    check(pool[0] == expected, "Short reuse discarded label suffix or cleared pixel alignment");
    std::vector<std::uint8_t> terminated(maximum + 8, 0xef);
    std::fill_n(terminated.begin(), maximum, 0x75);
    terminated[maximum] = 0;
    const auto slot = f.model.append(terminated);
    check(slot == 1 && std::all_of(pool[slot].label.begin(), pool[slot].label.begin() + maximum,
                                  [](auto byte) { return byte == 0x75; }),
          "Explicit maximum-length NUL was included as an extra visible character");
    check(version == eb::GameVersion::US ? pool[slot].pixel_align == 0 : pool[slot].label[24] == 0,
          "Regional full-name terminator landed in the wrong semantic field");
}
void rejection_is_atomic(eb::GameVersion version) {
    Fixture f(version);
    auto& pool = f.host.menu_options();
    for (unsigned i = 0; i < pool.size(); ++i) pool[i] = residue(i);
    const unsigned invalid = version == eb::GameVersion::US ? 26 : 25;
    const auto before = pool;
    std::vector<std::uint8_t> label(invalid, 0x71);
    rejects([&] { f.model.append(label, Location{1, 2}); }, "Cross-record label corruption was accepted");
    check(pool == before && f.window().first_option == 0xffff && f.window().last_option == 0xffff,
          "Rejected label changed free-slot residue or window links");
    label.push_back(0);
    rejects([&] { f.model.append(label); }, "Terminated but over-capacity label was accepted");
    check(pool == before, "Over-capacity terminated label changed pool residue");
}
void fallback_and_last_ordinary_slot(eb::GameVersion version) {
    Fixture f(version);
    auto& pool = f.host.menu_options();
    for (unsigned i = 0; i < pool.size(); ++i) pool[i] = residue(i);
    const std::array<std::uint8_t, 1> label{0x71};
    for (unsigned i = 0; i < 69; ++i)
        check(f.model.append(label) == i, "Shared allocator skipped an ordinary record");
    check(f.model.first_free() == 69, "Fallback record69 was incorrectly reserved from allocation");
    const auto old69 = pool[69];
    const auto full_length = version == eb::GameVersion::US ? 25u : 11u;
    const auto result = f.model.append(std::vector<std::uint8_t>(full_length, 0x72));
    check(result == 69 && !f.model.first_free() && f.window().last_option == 69 &&
              pool[68].next == 69 && pool[69].previous == 68 && !pool[69].next &&
              pool[69].flags == 1 && pool[69].label != old69.label,
          "Successful last-slot allocation was confused with fallback69");
    const auto full = pool;
    // Failure exits before label inspection, including an otherwise rejected
    // span. It must not zero alignment or clear the old selected-text value.
    const std::vector<std::uint8_t> overflow(40, 0x77);
    check(f.model.append(overflow, Location{8, 9}) == 69 && pool == full &&
              f.window().first_option == 0 && f.window().last_option == 69,
          "Full-pool fallback inspected/copied a label or mutated its previous record");
    f.state.focus.reset();
    check(f.model.append(overflow) == 69 && pool == full,
          "No-focus fallback changed an occupied record69");
    Fixture empty(version);
    auto& empty_pool = empty.host.menu_options();
    empty_pool[69] = residue(69);
    const auto unfocused = empty_pool;
    empty.state.focus.reset();
    check(empty.model.append(overflow) == 69 && empty_pool == unfocused && empty.model.first_free() == 0,
          "No-focus fallback allocated or changed a free fallback record");
}
void compact_ordinals(eb::GameVersion version, bool every_position) {
    Fixture f(version);
    auto& pool = f.host.menu_options();
    // Fragment the shared pool with records belonging to unrelated windows.
    // The model's source ordinal concerns the appended list, not item IDs,
    // original inventory positions or global pool indices.
    for (unsigned i = 0; i < pool.size(); ++i) {
        pool[i] = residue(i);
        if (i % 3 == 0) pool[i].flags = 2;
    }
    const std::array<std::uint8_t, 14> inventory = every_position ?
        std::array<std::uint8_t, 14>{4, 4, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18} :
        std::array<std::uint8_t, 14>{4, 0, 4, 7, 0, 9, 0, 11, 12, 0, 13, 0, 14, 15};
    const std::array<unsigned, 14> available{1, 2, 4, 5, 7, 8, 10, 11, 13, 14, 16, 17, 19, 20};
    const std::vector<unsigned> expected_slots(available.begin(), available.begin() + (every_position ? 14 : 9));
    std::vector<unsigned> appended;
    for (unsigned position = 0; position < inventory.size(); ++position) {
        if (!inventory[position]) continue; // Caller-owned omission, not a model feature.
        const std::array<std::uint8_t, 2> label{std::uint8_t(0x70 + inventory[position]), 0};
        appended.push_back(f.model.append(label));
    }
    check(appended == expected_slots &&
              f.model.chain(f.window().first_option) == appended,
          "Compact list order depended on item identity, source position or occupied pool records");
    f.window().selected_option = 0x1234;
    f.window().page_number = 0x4321;
    f.model.layout({2, 0, false, false}, {});
    check(f.window().selected_option == 0x1234 && f.window().page_number == 0x4321,
          "Inventory-style layout unexpectedly prepared or reset selection");
    for (unsigned ordinal = 0; ordinal < appended.size(); ++ordinal) {
        const auto slot = f.model.index_at(f.window().first_option, ordinal);
        check(slot == expected_slots[ordinal] && pool[slot].userdata == std::uint16_t(0x9300 + slot) &&
                  pool[slot].flags == 1 && !pool[slot].selected_text && pool[slot].page == 1 &&
                  pool[slot].x == (ordinal % 2 ? 14 : 0) && pool[slot].y == ordinal / 2,
              "Basic inventory-style list assigned item userdata or lost ordinal layout semantics");
        f.model.select_initial(std::uint16_t(ordinal));
        check(f.window().selected_option == ordinal && f.window().page_number == 1,
              "Selection returned a global pool index instead of compact ordinal");
    }
    check(pool[appended[0]].label == pool[appended[1]].label,
          "Duplicate item labels were unexpectedly deduplicated or changed");
}
void regional_inventory_lengths() {
    Fixture us(eb::GameVersion::US), jp(eb::GameVersion::JP);
    std::array<std::uint8_t, 25> equipped_us;
    equipped_us.fill(0x71);
    equipped_us[0] = 0x22;
    const auto a = us.model.append(equipped_us);
    check(us.host.menu_options()[a].label == equipped_us && !us.host.menu_options()[a].pixel_align,
          "US equipped prefix plus24 raw name bytes did not fill the source label");
    std::array<std::uint8_t, 11> equipped_jp;
    equipped_jp.fill(0x41);
    equipped_jp[10] = 0x22;
    const auto b = jp.model.append(equipped_jp);
    check(std::equal(equipped_jp.begin(), equipped_jp.end(), jp.host.menu_options()[b].label.begin()) &&
              jp.host.menu_options()[b].label[11] == 0,
          "Japanese ten-byte name plus equipment suffix was truncated");
}
} // namespace
int main() {
    try {
        for (auto version : {eb::GameVersion::US, eb::GameVersion::JP}) {
            bounded_copy(version);
            embedded_zero_and_reuse(version);
            rejection_is_atomic(version);
            fallback_and_last_ordinary_slot(version);
            compact_ordinals(version, false);
            compact_ordinals(version, true);
        }
        regional_inventory_lengths();
        std::cout << "PASS native inventory menu model: " << checks << " checks\n";
        return 0;
    } catch (const std::exception& error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
