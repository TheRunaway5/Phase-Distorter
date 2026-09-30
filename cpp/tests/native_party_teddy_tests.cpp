#include "eb/native/party/teddy.hpp"
#include "native_dialogue_substitution_test_assets.hpp"
#include <array>
#include <iostream>
#include <stdexcept>
#include <string>

namespace {
using namespace eb::native::party;
using dialogue_substitution_test_assets::Input;
unsigned checks{};
void check(bool value, const char* message) {
    ++checks;
    if (!value) throw std::runtime_error(message);
}
template<class F> void rejects(F&& action, const char* message) {
    bool rejected{};
    try { action(); } catch (const std::exception&) { rejected = true; }
    check(rejected, message);
}
void item(Input& input, unsigned id, unsigned type, unsigned ep, unsigned strength = 1) {
    const auto at = input.items + id * input.item_stride + input.name_size;
    input.image[at] = std::uint8_t(type);
    input.image[at + 6] = std::uint8_t(strength);
    input.image[at + 8] = std::uint8_t(ep);
}
int signed_byte(unsigned value) { return value < 128 ? int(value) : int(value) - 256; }
void run(eb::GameVersion version) {
    // Three catalogs have disjoint sets of three missing EP values. Every
    // possible pair occurs together in at least one immutable imported table.
    std::array<std::shared_ptr<const eb::native::dialogue::SubstitutionResources>, 3> catalogs;
    for (unsigned catalog = 0; catalog < catalogs.size(); ++catalog) {
        Input input(version);
        for (unsigned id = 1; id <= 253; ++id) item(input, id, 4, (id - 1 + catalog * 3) & 255);
        catalogs[catalog] = input.load();
    }
    State party(version);
    party.controlled_count = 1; party.party_order[0] = 6;
    party.controlled_order.fill(0xff); party.display_order.fill(0xff);
    party.party_count = 0xff; // Neither this count nor the other lists is consulted.
    auto& inventory = party.character(6).items;
    for (unsigned first = 0; first < 256; ++first) for (unsigned second = 0; second < 256; ++second) {
        unsigned catalog{};
        for (; catalog < catalogs.size(); ++catalog)
            if (((first - catalog * 3) & 255) < 253 && ((second - catalog * 3) & 255) < 253) break;
        check(catalog < catalogs.size(), "Exhaustive EP fixture is incomplete");
        const auto a = std::uint8_t(((first - catalog * 3) & 255) + 1);
        const auto b = std::uint8_t(((second - catalog * 3) & 255) + 1);
        inventory = {a,b};
        const auto before = inventory;
        check(select_teddy_item(party, *catalogs[catalog]) ==
                  std::optional<std::uint8_t>(signed_byte(second) < signed_byte(first) ? b : a),
              "Signed EP pair selection differs");
        check(inventory == before, "Selection mutated inventory");
    }
    Input input(version);
    item(input, 1, 4, 2); item(input, 2, 4, 1); item(input, 3, 4, 1);
    item(input, 4, 4, 0x80); item(input, 5, 3, 0x80); item(input, 253, 4, 0xff, 0xff);
    const auto resources = input.load();
    party.party_count = 0;
    for (unsigned record = 1; record <= 6; ++record) {
        party.party_order[0] = std::uint8_t(record);
        for (unsigned position = 0; position < 14; ++position) {
            auto& values = party.character(record).items;
            values.fill(5); values[position] = 4;
            check(select_teddy_item(party, *resources) == 4, "All fourteen positions must be scanned");
            for (unsigned hole = 0; hole < position; ++hole) {
                values[hole] = 0;
                check(!select_teddy_item(party, *resources), "Inventory hole did not end this character scan");
                values[hole] = 5;
            }
            values = {};
        }
    }
    party.party_order = {6,5,4,3,2,1};
    for (unsigned id = 1; id <= 6; ++id) party.character(id).items = {std::uint8_t(id & 1 ? 2 : 3)};
    for (unsigned count = 0; count <= 6; ++count) {
        party.controlled_count = std::uint8_t(count);
        check(select_teddy_item(party, *resources) == (count ? std::optional<std::uint8_t>(3) : std::nullopt),
              "Party traversal count or first-on-tie order differs");
    }
    party.party_order = {1,6,1,6,1,6};
    check(select_teddy_item(party, *resources) == 2, "Duplicate party entries or reversed tie order differs");
    party.character(1).items = {}; party.character(6).items = {253};
    check(select_teddy_item(party, *resources) == 253, "Hole incorrectly stopped the entire party scan");
    check(resources->item_properties(253).parameters[0] == 255, "Raw strength fixture changed");
    party.controlled_count = 0; party.party_order.fill(0xff);
    for (unsigned id = 1; id <= 6; ++id) party.character(id).items.fill(0xff);
    check(!select_teddy_item(party, *resources), "Zero count inspected unvisited storage");
    party.controlled_count = 1;
    for (unsigned id : {0u,7u,16u,255u}) {
        party.party_order[0] = std::uint8_t(id);
        rejects([&] { (void)select_teddy_item(party, *resources); }, "Invalid visited character was accepted");
    }
    party.party_order[0] = 1;
    for (unsigned invalid : {254u,255u}) {
        party.character(1).items = {0,std::uint8_t(invalid)};
        check(!select_teddy_item(party, *resources), "Read unowned item after hole");
        party.character(1).items = {std::uint8_t(invalid)};
        rejects([&] { (void)select_teddy_item(party, *resources); }, "Unowned visited item was accepted");
    }
    party.character(1).items = {2}; party.party_order.fill(1);
    for (unsigned count : {7u,128u,255u}) {
        party.controlled_count = std::uint8_t(count);
        rejects([&] { (void)select_teddy_item(party, *resources); }, "Unowned party-order slot was accepted");
    }
    party.controlled_count = 1;
    for (unsigned type = 0; type < 256; ++type) {
        item(input, 2, type, 0x80, type);
        const auto varied = input.load();
        check(select_teddy_item(party, *varied) == (type == 4 ? std::optional<std::uint8_t>(2) : std::nullopt),
              "Item type must equal four exactly");
    }
    for (unsigned strength = 0; strength < 256; ++strength) {
        item(input, 2, 4, 1, strength);
        check(select_teddy_item(party, *input.load()) == 2, "Selection interpreted lifecycle strength");
    }
    Input other(version == eb::GameVersion::US ? eb::GameVersion::JP : eb::GameVersion::US);
    party.controlled_count = 0;
    rejects([&] { (void)select_teddy_item(party, *other.load()); }, "Mismatched region was accepted");
}
}
int main() {
    try { run(eb::GameVersion::US); run(eb::GameVersion::JP); }
    catch (const std::exception& error) { std::cerr << error.what() << '\n'; return 1; }
    std::cout << "PASS " << checks << " Teddy selection checks across both regions\n";
}
