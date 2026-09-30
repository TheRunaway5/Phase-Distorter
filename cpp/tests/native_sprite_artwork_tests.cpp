#include "eb/native/sprite_resources.hpp"
#include "native_sprite_fixture.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native;
void require(bool pass, const char *message) {
    if (!pass) throw std::runtime_error(message);
}
template<class F> void rejects(F action, const char *message) {
    bool failed = false;
    try { action(); } catch (const std::exception &) { failed = true; }
    require(failed, message);
}
void test() {
    native_sprite_test::Fixture fixture;
    SpriteResources resources(fixture.bytes, fixture.layout);
    const auto normal = resources.acquire(0, 0), mirrored = resources.acquire(0, 1);
    const auto force_normal = resources.acquire(0, 1, SpriteSurface::Normal,
                                               SpriteFrameFormat::FourDirection, SpriteOrientation::Normal);
    const auto force_mirror = resources.acquire(0, 0, SpriteSurface::Normal,
                                               SpriteFrameFormat::FourDirection, SpriteOrientation::Mirrored);
    require(normal == resources.acquire(0, 0), "Default authored cache behavior changed");
    require(normal->indices == force_normal->indices && mirrored->indices == force_mirror->indices,
            "Display orientation changed the loaded payload or retained the pose's mirror");
    require(normal->layout->canvas_width == 16 && normal->layout->canvas_height == 32,
            "Odd source tile height was not padded to the part grid");
    require(std::all_of(normal->canvas->begin(), normal->canvas->begin() + 128,
                        [](auto value) { return !value; }), "Top alignment padding is not transparent");
    SpriteArtwork artwork(*normal);
    const auto blank = artwork.snapshot();
    require(artwork.tile_columns() == 2 && artwork.tile_rows() == 4 && artwork.revision() == 0,
            "Logical tile geometry/revision is incorrect");
    require(std::none_of(blank->indices.begin(), blank->indices.end(), [](auto value) { return value; }),
            "New artwork must start transparent");
    artwork.apply_tiles(*normal, 2, 1);
    std::vector<std::uint8_t> expected(16 * 32);
    // Independent fixture formula: tile2 is left8pixels of the first payload
    // row, below8 alignment pixels. Untouched tiles remain transparent.
    for (unsigned y = 8; y < 16; ++y)
        for (unsigned x = 0; x < 8; ++x)
            expected[y * 16 + x] = (x + (y - 8) * 3) % 16;
    const auto first = artwork.snapshot(SpriteOrientation::Normal);
    require(first->indices == expected, "A partial tile copy changed untouched pixels");
    auto reflected = expected;
    for (unsigned y = 0; y < 32; ++y)
        for (unsigned x = 0; x < 16; ++x)
            reflected[y * 16 + x] = expected[y * 16 + 15 - x];
    require(artwork.snapshot(SpriteOrientation::Mirrored)->indices == reflected,
            "Committed partial artwork did not honor the retained display orientation");
    require(std::none_of(blank->indices.begin(), blank->indices.end(), [](auto value) { return value; }),
            "Published blank snapshot mutated after a transfer");
    auto independent = artwork;
    artwork.apply_tiles(*normal, 6, 1);
    for (unsigned y = 24; y < 32; ++y)
        for (unsigned x = 0; x < 8; ++x)
            expected[y * 16 + x] = (x + (y - 8) * 3) % 16;
    require(artwork.snapshot(SpriteOrientation::Normal)->indices == expected,
            "Later row transfer lost an earlier committed row");
    require(independent.snapshot(SpriteOrientation::Normal)->indices == first->indices &&
                independent.revision() == 1, "Copied actor artwork shared mutable updates");
    const auto shallow = resources.acquire(0, 0, SpriteSurface::Shallow);
    artwork.apply_tiles(*shallow, 2, 1);
    for (unsigned y = 8; y < 16; ++y)
        std::fill_n(expected.begin() + y * 16, 8, 0);
    require(artwork.snapshot(SpriteOrientation::Normal)->indices == expected,
            "Partial surface blanking erased an unrelated retained row");
    require(first->indices != expected, "Old image handle did not retain its original contents");
    artwork.apply_tiles(*mirrored, 0, 8);
    require(artwork.snapshot()->indices == mirrored->indices &&
                artwork.snapshot(SpriteOrientation::Normal)->indices == normal->indices,
            "New authored mirror incorrectly changed retained normal geometry");
    const auto revision = artwork.revision();
    const auto committed = artwork.snapshot();
    artwork.apply_tiles(*normal, 8, 0);
    require(artwork.revision() == revision && artwork.snapshot() == committed,
            "Empty patch changed publication state");
    rejects([&] { artwork.apply_tiles(*normal, 8, 1); }, "Out-of-range patch accepted");
    rejects([&] { artwork.apply_tiles(*normal, 1, unsigned(-1)); }, "Overflowing patch accepted");
    auto malformed = *normal;
    auto changed_layout = std::make_shared<SpriteImage::Layout>(*normal->layout);
    changed_layout->parts[0][0].left++;
    malformed.layout = changed_layout;
    rejects([&] { artwork.apply_tiles(malformed, 0, 1); }, "Changed geometry accepted");
    auto bad_pixels = std::make_shared<std::vector<std::uint8_t>>(*normal->canvas);
    (*bad_pixels)[8 * 16] = 16;
    malformed = *normal;
    malformed.canvas = bad_pixels;
    rejects([&] { artwork.apply_tiles(malformed, 2, 1); }, "Invalid indexed color accepted");
    require(artwork.revision() == revision && artwork.snapshot() == committed,
            "Rejected patch partially changed pixels or publication revision");
    rejects([&] { artwork.snapshot(static_cast<SpriteOrientation>(99)); }, "Invalid orientation accepted");
    rejects([&] { resources.acquire(0, 0, SpriteSurface::Normal, SpriteFrameFormat::FourDirection,
                                    static_cast<SpriteOrientation>(99)); }, "Invalid import orientation accepted");
    SpriteImage missing;
    rejects([&] { SpriteArtwork invalid(missing); }, "Missing imported shape accepted");
    // Odd source widths retain a transparent padding tile in each canvas row.
    fixture.bytes[33] = 0x30;
    SpriteResources odd(fixture.bytes, fixture.layout);
    const auto odd_image = odd.acquire(0, 0);
    require(odd_image->layout->canvas_width == 32, "Odd width has no complete part grid");
    for (unsigned y = 0; y < odd_image->layout->canvas_height; ++y)
        for (unsigned x = 24; x < 32; ++x)
            require((*odd_image->canvas)[y * 32 + x] == 0, "Odd width padding contains payload pixels");
}
}
int main() {
    try {
        test();
        std::cout << "Native sprite artwork: partial tiles, retained orientation, surface rows, immutable copies and rejection atomicity passed\n";
    } catch (const std::exception &error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
