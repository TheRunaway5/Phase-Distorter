#include "native_sprite_fixture.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>

namespace {
using eb::native::SpriteResources;
using eb::native::SpriteSurface;

void require(bool ok, const char *message) {
    if (!ok)
        throw std::runtime_error(message);
}

unsigned artwork(unsigned x, unsigned y) { return 1 + (3 * x + y + y / 7) % 15; }

native_sprite_test::Fixture fixture(unsigned width, unsigned height, bool flip_y) {
    native_sprite_test::Fixture f;
    f.bytes[32] = height / 8;
    f.bytes[33] = (width / 8) << 4;
    const unsigned columns = (width + 15) / 16, rows = (height + 15) / 16;
    const unsigned count = columns * rows;
    f.bytes[128] = count;
    f.bytes[129] = columns;
    std::fill(f.bytes.begin() + 130, f.bytes.begin() + 210, 0);
    for (unsigned mirror = 0; mirror < 2; ++mirror)
        for (unsigned part = 0; part < count; ++part) {
            const unsigned at = 130 + (mirror * count + part) * 5;
            const unsigned column = mirror ? columns - 1 - part % columns : part % columns;
            f.bytes[at] = std::uint8_t(-32 + (part / columns) * 16);
            f.bytes[at + 2] = (mirror ? 0x40 : 0) | (flip_y ? 0x80 : 0);
            f.bytes[at + 3] = std::uint8_t(-int(columns * 8) + int(column * 16));
            f.bytes[at + 4] = part + 1 == count ? 0x80 : 0;
        }
    for (unsigned pose = 0; pose < 16; ++pose)
        f.word(41 + pose * 2, 512 | (pose & 3));
    std::fill(f.bytes.begin() + 512, f.bytes.end(), 0);
    for (unsigned y = 0; y < height; ++y)
        for (unsigned x = 0; x < width; ++x) {
            const unsigned color = artwork(x, y);
            for (unsigned plane = 0; plane < 4; ++plane)
                if (color & (1u << plane))
                    f.bytes[512 + ((y / 8) * (width / 8) + x / 8) * 32 + (y & 7) * 2 +
                            (plane / 2) * 16 + (plane & 1)] |= 1u << (7 - (x & 7));
        }
    return f;
}
} // namespace

int main() {
    try {
        unsigned checked = 0;
        for (const unsigned width : {8u, 16u, 24u, 32u})
            for (const unsigned height : {8u, 16u, 24u, 32u})
                for (const bool flip_y : {false, true}) {
                    auto f = fixture(width, height, flip_y);
                    SpriteResources resources(f.bytes, f.layout);
                    std::fill(f.bytes.begin(), f.bytes.end(), 0);
                    const unsigned columns = (width + 15) / 16, padding = height % 16;
                    for (unsigned pose = 0; pose < 4; ++pose) {
                        const auto normal = resources.acquire(0, pose);
                        const auto unchanged = normal->indices;
                        for (const auto surface : {SpriteSurface::Normal, SpriteSurface::Shallow,
                                                   SpriteSurface::Deep}) {
                            const unsigned shift = (pose & 2) ? 0 : surface == SpriteSurface::Shallow ? 8
                                                                   : surface == SpriteSurface::Deep    ? 16
                                                                                                       : 0;
                            const auto image = resources.acquire(0, pose, surface);
                            require(image == resources.acquire(0, pose, surface), "Surface cache lost sharing");
                            require(image->width == normal->width && image->height == normal->height &&
                                        image->left == normal->left && image->top == normal->top &&
                                        image->palette == normal->palette,
                                    "Surface changed authored image geometry/palette");
                            if (!shift)
                                require(image == normal, "Normal or opted-out surface did not share its image");
                            std::vector<std::uint8_t> assembled(image->indices.size());
                            for (unsigned part = 0; part < image->parts.size(); ++part) {
                                const auto &piece = image->parts[part];
                                require(piece.upper == normal->parts[part].upper,
                                        "Surface changed body division");
                                for (unsigned y = 0; y < 16; ++y)
                                    for (unsigned x = 0; x < 16; ++x) {
                                        const unsigned source_x = (part % columns) * 16 + ((pose & 1) ? 15 - x : x);
                                        const int source_y = int((part / columns) * 16 + (flip_y ? 15 - y : y)) -
                                                             int(padding + shift);
                                        const unsigned expected = source_x < width && source_y >= 0 &&
                                                                          unsigned(source_y) + shift < height
                                                                      ? artwork(source_x, unsigned(source_y))
                                                                      : 0;
                                        require(piece.indices[y * 16 + x] == expected,
                                                "Surface row shift, clipping or authored flip differs");
                                        auto &pixel = assembled[(piece.top - image->top + y) * image->width +
                                                                piece.left - image->left + x];
                                        if (!pixel)
                                            pixel = expected;
                                    }
                            }
                            require(image->indices == assembled, "Surface parts and composed image differ");
                            require(normal->indices == unchanged, "Surface acquisition mutated existing artwork");
                            ++checked;
                        }
                    }
                    bool rejected = false;
                    try {
                        resources.acquire(0, 0, static_cast<SpriteSurface>(99));
                    } catch (const std::invalid_argument &) {
                        rejected = true;
                    }
                    require(rejected, "Invalid sprite surface was accepted");
                }
        std::cout << "PASS native sprite surfaces: " << checked
                  << " dimension/flip/opt-out cases, immutable artwork and cache sharing\n";
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }
}
