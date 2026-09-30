#include "native_sprite_fixture.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>

namespace {
void require(bool ok, const char *message) {
    if (!ok)
        throw std::runtime_error(message);
}
template <class F> void rejects(F f) {
    bool rejected = false;
    try {
        f();
    } catch (const std::exception &) {
        rejected = true;
    }
    require(rejected, "Invalid resource accepted");
}
using native_sprite_test::Fixture;
} // namespace
int main() {
    try {
        Fixture f;
        std::shared_ptr<const eb::native::SpriteImage> retained;
        {
            eb::native::SpriteResources resources(f.bytes, f.layout);
            // No external asset lifetime or mutation can change imported artwork.
            std::fill(f.bytes.begin(), f.bytes.end(), 0);
            const auto &def = resources.definition(0);
            require(def.width == 16 && def.height == 24 && def.palette == 5 && def.frames == 16,
                    "Authored sprite metadata changed");
            retained = resources.acquire(0, 0);
            const auto mirror = resources.acquire(0, 1);
            require(retained->left == -8 && retained->top == -24 && retained->height == 32,
                    "Host image lost its authored anchor/padding");
            for (unsigned y = 0; y < 32; ++y)
                for (unsigned x = 0; x < 16; ++x) {
                    require(retained->indices[y * 16 + x] == (y >= 8 ? (x + (y - 8) * 3) % 16 : 0),
                            "Planar content decoded incorrectly");
                    require(mirror->indices[y * 16 + x] == retained->indices[y * 16 + 15 - x],
                            "Mirrored pose differs from authored shape");
                }
            // Resource lifetime is independent of any console sprite slot count.
            std::vector<std::shared_ptr<const eb::native::SpriteImage>> actors;
            for (unsigned i = 0; i < 20000; ++i)
                actors.push_back(resources.acquire(i % 2, i % 16));
            require(actors[0] == retained && resources.acquire(0, 0) == retained,
                    "Live image cache failed to share resources");
            actors.erase(actors.begin(), actors.begin() + 15000);
            require(actors.back()->indices.size() == 512, "Releasing actors damaged live resources");
            rejects([&] { resources.acquire(2, 0); });
            rejects([&] { resources.acquire(0, 16); });
        }
        require(retained->indices[8 * 16 + 3] == 3, "Catalog destruction invalidated an actor image");
        for (unsigned mode = 0; mode < 6; ++mode) {
            Fixture bad;
            if (mode == 0)
                bad.bytes.resize(20);
            if (mode == 1)
                bad.pointer(0, 0x3fffff);
            if (mode == 2)
                bad.bytes[33] = 0;
            if (mode == 3)
                bad.bytes[34] = 1;
            if (mode == 4)
                bad.bytes[134] = 1;
            if (mode == 5)
                bad.bytes[40] = 0x10;
            rejects([&] { eb::native::SpriteResources resources(bad.bytes, bad.layout); });
        }
        std::cout
            << "PASS native sprite content, mirrors, lifetime, 20000 resource handles and malformed assets\n";
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }
}
