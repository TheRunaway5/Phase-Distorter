// Synthetic immutable assets only. Original LOAD_WINDOW_GFX ordering, retained
// staging and composition-history parity belong to the independent oracle.
#include "eb/native/dialogue/initialization_resources.hpp"
#include "native_dialogue_test_assets.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native::dialogue;
unsigned checks{};
void check(bool ok, const char* message) {
    ++checks;
    if (!ok) throw std::runtime_error(message);
}
template<class F> void rejects(F function, const char* message) {
    bool failed = false;
    try { function(); } catch (const std::exception&) { failed = true; }
    check(failed, message);
}
struct Input : dialogue_test_assets::WindowInput {
    static constexpr unsigned battle_entry = 0x03f054 + 24;
    static constexpr unsigned original_battle = 0x21193a;
    unsigned battle_at = original_battle;
    unsigned status_at;
    // Includes a space, low/control glyphs and full-word relocated glyphs.
    // These are test indices, not an embedded authored string or artwork.
    static constexpr std::array<std::uint16_t, 7> status{0x20, 0x0b, 0x10, 0x12f, 0x20, 0x13f, 0x1c};
    explicit Input(eb::GameVersion region) : WindowInput(region),
        status_at(region == eb::GameVersion::US ? 0x045a89 : 0x043868) {
        for (unsigned i = 0; i < status.size(); ++i) put(status_at + i * 2, status[i]);
        put(status_at + status.size() * 2, 0);
        if (region == eb::GameVersion::US) {
            // The unused metric pointer is deliberately not valid content:
            // this source routine never reads it or ordinary font metrics.
            put32(battle_entry, 0x7e0000);
            put32(battle_entry + 4, 0xc00000 + battle_at);
            put(battle_entry + 8, 16);
            put(battle_entry + 10, 16);
            fill_battle();
        }
    }
    static std::uint8_t raster_byte(unsigned index, unsigned row) {
        return std::uint8_t(index * 37 + row * 13 + (index >> 2) + 17);
    }
    void fill_battle() {
        for (unsigned index = 0; index < 128; ++index)
            for (unsigned row = 0; row < 16; ++row)
                image[battle_at + index * 16 + row] = raster_byte(index, row);
    }
    std::shared_ptr<const WindowInitializationResources> load() const {
        return WindowInitializationResources::import(image, version);
    }
};

void resources(eb::GameVersion version) {
    Input f(version);
    auto resources = f.load();
    check(resources->version() == version, "Initialization region changed");
    const auto base = resources->base_artwork();
    check(base.size() == (version == eb::GameVersion::US ? 416 : 672),
          "Immutable artwork included generated or retained staging");
    check(std::equal(base.begin(), base.end(), f.base.begin()),
          "Base cells were relocated, patched or decoded incorrectly during import");
    check(std::equal(resources->flavour_patch().begin(), resources->flavour_patch().end(), f.patch.begin()),
          "Flavour patch cell order or two-bit pixels differ");
    check(std::equal(resources->status_characters().begin(), resources->status_characters().end(),
                     Input::status.begin(), Input::status.end()),
          "Status import dropped spaces, truncated wide codes or included its terminator");
    for (unsigned flavor = 1; flavor <= 5; ++flavor)
        check(resources->uses_flavoured_art(flavor) == f.flavored_for(flavor - 1),
              "Regional flavour predicate changed");
    check(std::equal(base.begin(), base.end(), f.base.begin()),
          "Flavour queries mutated the immutable base artwork");

    if (version == eb::GameVersion::US) {
        // Every encoded byte reaches the raw seven-bit Battle index. This
        // includes ordinary fixed special codes20/22/2f and indexes96..127
        // which read into the declared adjacent resource continuation.
        for (unsigned code = 0; code < 256; ++code) {
            const unsigned index = (code + 128 - 0x50) % 128;
            const auto& glyph = resources->battle_name_glyph(std::uint8_t(code));
            check(glyph.variable && glyph.width == 8 && glyph.height == 16 && glyph.advance == 6,
                  "Name glyph incorrectly used ordinary metrics or fixed-code dispatch");
            for (unsigned y = 0; y < 16; ++y)
                for (unsigned x = 0; x < 8; ++x) {
                    const auto expected = 1 + 2 * unsigned(bool(Input::raster_byte(index, y) & (0x80 >> x)));
                    check(glyph.pixel(x, y) == expected, "Raw Battle name mask or continuation differs");
                }
        }
        check(&resources->battle_name_glyph(0x50) == &resources->battle_name_glyph(0xd0),
              "Name glyphs lost the source masked-index alias");
        check(resources->battle_name_glyph(0x50).pixel(8, 0) == 3,
              "Name glyph exposed pixels beyond its single strip");
    } else {
        rejects([&] { resources->battle_name_glyph(0x50); },
                "Japanese names gained a fictitious Battle font path");
    }

    const auto saved_base = std::vector<WindowArtwork>(base.begin(), base.end());
    const auto saved_patch = resources->flavour_patch();
    const auto copied_patch = std::vector<WindowArtwork>(saved_patch.begin(), saved_patch.end());
    const auto copied_status = std::vector<std::uint16_t>(resources->status_characters().begin(),
                                                        resources->status_characters().end());
    const auto glyph = version == eb::GameVersion::US ? resources->battle_name_glyph(0xcf) : FontGlyph{};
    std::fill(f.image.begin(), f.image.end(), 0);
    check(std::equal(base.begin(), base.end(), saved_base.begin()) &&
              std::equal(saved_patch.begin(), saved_patch.end(), copied_patch.begin()) &&
              std::equal(resources->status_characters().begin(), resources->status_characters().end(),
                         copied_status.begin(), copied_status.end()),
          "Initialization resources retained mutable source-image memory");
    if (version == eb::GameVersion::US)
        check(resources->battle_name_glyph(0xcf).pixels == glyph.pixels,
              "Battle name glyph retained mutable source-image memory");
    rejects([&] { resources->uses_flavoured_art(0); }, "Initialization accepted flavor zero");
    rejects([&] { resources->uses_flavoured_art(6); }, "Initialization passed its flavour table");
}

void status_bounds(eb::GameVersion version) {
    Input f(version);
    for (unsigned i = 0; i < 48; ++i) f.put(f.status_at + i * 2, i + 1);
    f.put(f.status_at + 96, 0);
    auto resources = f.load();
    check(resources->status_characters().size() == 48 && resources->status_characters().back() == 48,
          "Status import did not reach the declared final terminator");
    f.put(f.status_at + 96, 0x20);
    f.put(f.status_at + 98, 0); // A zero in the next asset must not rescue it.
    rejects([&] { f.load(); }, "Status import searched beyond its declared49 words");
    f.put(f.status_at, 0);
    f.put(f.status_at + 2, 0xffff);
    resources = f.load();
    check(resources->status_characters().empty(), "Status import ignored its first terminator");
}

void malformed(eb::GameVersion version) {
    const Input valid(version);
    const auto bad = [&](auto change, const char* message) {
        auto f = valid;
        change(f);
        rejects([&] { f.load(); }, message);
    };
    bad([](auto& f) { f.image.resize(0x200000); }, "Missing initialization artwork was accepted");
    bad([](auto& f) { f.image[0x200000] = 255; }, "Short decoded initialization artwork was accepted");
    bad([](auto& f) { f.image[f.flavored + 75] = 0; }, "Malformed initialization patch was accepted");
    rejects([&] { WindowInitializationResources::import(valid.image, eb::GameVersion(99)); },
            "Unknown initialization region was accepted");
    if (version == eb::GameVersion::US) {
        bad([](auto& f) { f.put(Input::battle_entry + 8, 32); }, "Battle name stride changed silently");
        bad([](auto& f) { f.put(Input::battle_entry + 10, 8); }, "Battle name row count changed silently");
        bad([](auto& f) { f.put32(Input::battle_entry + 4, 0x7e0000); },
            "Name import accepted a non-content font pointer");
        bad([](auto& f) { f.put32(Input::battle_entry + 4, 0x1000000); },
            "Name import truncated a pointer beyond24 bits");
        bad([](auto& f) { f.put32(Input::battle_entry + 4, 0xfffff0); },
            "Name import passed the supplied image extent");
        bad([](auto& f) { f.image.resize(Input::original_battle + 128 * 16 - 1); },
            "Name import accepted a truncated final continuation row");
        auto relocated = valid;
        relocated.battle_at = 0x220123;
        relocated.put32(Input::battle_entry + 4, 0xc00000 + relocated.battle_at);
        relocated.fill_battle();
        std::fill_n(relocated.image.begin() + Input::original_battle, 128 * 16, 0);
        const auto resources = relocated.load();
        const auto& glyph = resources->battle_name_glyph(0xcf); // Last masked record.
        for (unsigned y = 0; y < 16; ++y)
            check(glyph.pixel(0, y) == 1 + 2 * unsigned(bool(Input::raster_byte(127, y) & 0x80)),
                  "Name import ignored the descriptor's content pointer");
    }
}
} // namespace
int main() {
    try {
        for (auto version : {eb::GameVersion::US, eb::GameVersion::JP}) {
            resources(version);
            status_bounds(version);
            malformed(version);
        }
        std::cout << "PASS " << checks
                  << " immutable initialization artwork, regional flavour, status and raw name-font checks\n";
    } catch (const std::exception& error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
