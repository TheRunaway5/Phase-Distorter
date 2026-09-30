#include "eb/native/npc_catalog.hpp"
#include <algorithm>
#include <array>
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native;
void require(bool ok, const char *message) {
    if (!ok)
        throw std::runtime_error(message);
}
template <class F> void rejects(F &&call) {
    bool rejected = false;
    try {
        call();
    } catch (const std::exception &) {
        rejected = true;
    }
    require(rejected, "Invalid NPC content/state was accepted");
}
struct Fixture {
    std::vector<std::uint8_t> data = std::vector<std::uint8_t>(0x3000);
    NpcCatalogLayout layout{0, 0x1000, 0x1100, 0x1100, 0x2000, 8, 799};
    void word(unsigned at, unsigned value) {
        data[at] = value;
        data[at + 1] = value >> 8;
    }
    void definition(unsigned id, NpcType type, NpcAppearance appearance, unsigned flag = 0) {
        const unsigned at = layout.definitions + id * 17;
        data[at] = unsigned(type);
        word(at + 1, id * 3);
        data[at + 3] = id & 1 ? 2 : 6;
        word(at + 4, 8 + id);
        word(at + 6, flag);
        data[at + 8] = unsigned(appearance);
    }
    void entry(unsigned at, unsigned id, unsigned x, unsigned y) {
        word(at, id);
        data[at + 2] = y;
        data[at + 3] = x;
    }
    Fixture() {
        for (unsigned i = 0; i < 8; ++i)
            definition(i, NpcType::Person, NpcAppearance::Always);
        definition(2, NpcType::Person, NpcAppearance::FlagOff, 1);
        definition(3, NpcType::Object, NpcAppearance::FlagOn, 8);
        definition(4, NpcType::ItemBox, NpcAppearance::Always);
        definition(5, NpcType::Object, NpcAppearance::Always);
        definition(6, NpcType::Person, NpcAppearance::FlagOn, 9);
        definition(7, NpcType::Object, NpcAppearance::Always);
        std::fill(data.begin() + 0x2000, data.begin() + 0x2a00, 3 * 8 + 7);
        data[0x2020] = 5 * 8 + 2; // Bottom half of the first placement cell.
        word(0, 0x1000);
        word(2, 0x1040);
        word(64, 0x1080);
        word(0x1000, 4);
        entry(0x1002, 2, 240, 40); // Deliberately not sorted by ID or position.
        entry(0x1006, 1, 10, 25);
        entry(0x100a, 3, 200, 128);
        entry(0x100e, 4, 250, 200);
        word(0x1040, 2);
        entry(0x1042, 5, 0, 25);
        entry(0x1046, 6, 255, 30);
        word(0x1080, 1);
        entry(0x1082, 7, 20, 0);
    }
};
std::vector<NpcId> ids(const std::vector<NpcCandidate> &candidates) {
    std::vector<NpcId> result;
    for (const auto &candidate : candidates)
        result.push_back(candidate.placement.npc);
    return result;
}
} // namespace

int main() {
    try {
        Fixture f;
        NpcCatalog catalog(f.data, f.layout);
        std::fill(f.data.begin(), f.data.end(), 0);
        require(catalog.size() == 8 && catalog.definition(6).sprite == 18 &&
                    catalog.definition(6).script == 14 && catalog.definition(6).direction == 6,
                "NPC definition import changed its authored fields");
        require(catalog.cell(0, 0).size() == 4 && catalog.cell(0, 0)[0].npc == 2 &&
                    catalog.cell(0, 0)[0].x == 240 && catalog.cell(0, 0)[0].y == 40 &&
                    catalog.cell(0, 0)[0].identity == 1 && catalog.cell(1, 0)[0].identity == 5,
                "NPC placement byte order, authored order or identity changed");
        std::array<std::uint8_t, 2> flags{0x80, 1};
        NpcVisibility state{3, flags, {}};
        const NpcRectangle world{-100, -100, 9000, 11000};
        const auto before = catalog.query(world, state);
        require(ids(before) == std::vector<NpcId>({2, 1, 5, 6, 7}), "NPC appearance or map gate differs");
        state.tileset = 5;
        require(ids(catalog.query(world, state)) == std::vector<NpcId>({3, 4}), "128px map-row gate differs");
        state.tileset = 3;
        state.objects_only = true;
        require(ids(catalog.query(world, state)) == std::vector<NpcId>({5, 7}), "Object-only gate differs");
        state.photograph = true; // Photograph mode bypasses the ordinary type filter.
        const auto photo = catalog.query(world, state);
        require(ids(photo) == std::vector<NpcId>({1, 5, 7}), "Photograph appearance/type gate differs");
        for (const auto &candidate : photo)
            require(candidate.script == 799, "Photograph did not select its still-pose script");
        {
            Fixture jp;
            jp.layout.photograph_script = npc_catalog_layout(eb::GameVersion::JP).photograph_script;
            NpcCatalog japanese(jp.data, jp.layout);
            for (const auto &candidate : japanese.query(world, state))
                require(candidate.script == 795, "Japanese photograph script used the US identity");
        }
        state.objects_only = state.photograph = false;
        std::array<NpcId, 2> active{1, 6};
        state.active_npcs = active;
        require(ids(catalog.query(world, state)) == std::vector<NpcId>({2, 5, 7}), "Active identity was duplicated");
        state.active_npcs = {};
        flags[0] = 1;
        flags[1] = 0;
        require(ids(catalog.query(world, state)) == std::vector<NpcId>({1, 5, 7}), "Updated event flags were ignored");
        flags = {0x80, 1};
        require(catalog.query(world, state) == before, "Readiness query altered catalog/placement state");

        unsigned crossings = 0;
        // One real imported anchor (256,25), queried at both edges and both
        // sides of the exact boundary. Widths model normal through ultrawide.
        for (const int width : {256, 398, 522, 1024})
            for (const int screen_x : {-1, 0, 1, width - 1, width, width + 1}) {
                const int left = 256 - screen_x;
                const auto found = ids(catalog.query({left, 20, left + width, 26}, state));
                require((std::find(found.begin(), found.end(), 5) != found.end()) ==
                            (screen_x >= 0 && screen_x < width),
                        "NPC left/right edge inclusion differs");
                ++crossings;
            }
        require(catalog.query({0, 0, 0, 100}, state).empty() &&
                    catalog.query({-9999, -9999, -1, -1}, state).empty() &&
                    catalog.query({8192, 10240, 9999, 19999}, state).empty(),
                "Empty/outside world query returned NPCs");
        rejects([&] { catalog.cell(32, 0); });
        rejects([&] { catalog.cell(0, 40); });
        rejects([&] { catalog.definition(8); });
        rejects([&] { catalog.query({2, 0, 1, 1}, state); });
        state.event_flags = {};
        rejects([&] { catalog.query(world, state); });
        for (unsigned bad = 0; bad < 9; ++bad) {
            Fixture broken;
            if (bad == 0)
                broken.data.resize(10);
            if (bad == 1)
                broken.word(0, 0x0fff);
            if (bad == 2)
                broken.word(0x1000, 0xffff);
            if (bad == 3)
                broken.word(0x1002, 8);
            if (bad == 4)
                broken.data[0x1100] = 0;
            if (bad == 5)
                broken.data[0x1103] = 255;
            if (bad == 6)
                broken.data[0x1108] = 3;
            if (bad == 7)
                broken.layout.placements = broken.layout.placements_end;
            if (bad == 8)
                broken.layout.placements = broken.layout.placements_end = 0;
            rejects([&] { NpcCatalog unused(broken.data, broken.layout); });
        }
        std::cout << "PASS native NPC content/gates/order, " << crossings
                  << " edge crossings, independent asset lifetime and rejected malformed content\n";
    } catch (const std::exception &error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
