#include "eb/native/sprite_actors.hpp"
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
    require(rejected, "Invalid native actor operation accepted");
}

void frame_format_regression(const eb::native::SpritePalettes &palettes) {
    using namespace eb::native;
    native_sprite_test::Fixture fixture;
    // Bit 1 opts out of surface sinking. The eight-direction loader also
    // retains it in the graphics offset; the four-direction loader clears it.
    fixture.word(41, 514);
    std::shared_ptr<const SpriteImage> four, eight;
    std::shared_ptr<const eb::DirectSceneFrame> retained_frame;
    std::vector<std::uint32_t> retained_pixels;
    {
        auto resources = std::make_shared<SpriteResources>(fixture.bytes, fixture.layout);
        std::fill(fixture.bytes.begin(), fixture.bytes.end(), 0);
        four = resources->acquire(0, 0, SpriteSurface::Normal, SpriteFrameFormat::FourDirection);
        eight = resources->acquire(0, 0, SpriteSurface::Normal, SpriteFrameFormat::EightDirection);
        require(four != eight && four->indices != eight->indices,
                "Format regression fixture lost its distinct artwork");
        SpriteActors actors(resources);
        SpriteActor actor;
        actor.x = 40;
        actor.y = 80;
        actor.format = SpriteFrameFormat::EightDirection;
        const auto id = actors.create(actor);
        const auto compare = [&](const SpriteImage &image) {
            const auto frame = actors.draw({}, palettes, 1, 1);
            const auto pixels = eb::rasterize_direct_scene({frame, {}});
            for (unsigned y = 0; y < 224; ++y)
                for (unsigned x = 0; x < 256; ++x) {
                    const int sx = int(x) - 40 - image.left, sy = int(y) - 79 - image.top;
                    const unsigned color = sx >= 0 && sy >= 0 && sx < int(image.width) &&
                                                   sy < int(image.height)
                                               ? image.indices[sy * image.width + sx]
                                               : 0;
                    require(pixels[y * 256 + x] == (color ? palettes[image.palette][color] : 0xff000000),
                            "Actor creation or update lost the authored frame format");
                }
            return frame;
        };
        retained_frame = compare(*eight);
        retained_pixels = eb::rasterize_direct_scene({retained_frame, {}});
        auto invalid = actor;
        invalid.x = 60;
        invalid.format = static_cast<SpriteFrameFormat>(99);
        rejects([&] { actors.update(id, invalid); });
        require(actors.get(id).x == 40 && actors.get(id).format == SpriteFrameFormat::EightDirection,
                "Rejected frame format partially changed actor state");
        compare(*eight);
        actor.format = SpriteFrameFormat::FourDirection;
        actors.update(id, actor);
        compare(*four);
        actor.format = SpriteFrameFormat::EightDirection;
        actors.update(id, actor);
        compare(*eight);
    }
    require(four->indices != eight->indices, "Catalog destruction damaged retained format images");
    require(eb::rasterize_direct_scene({retained_frame, {}}) == retained_pixels,
            "Actor updates or destruction mutated a retained format frame");
}
} // namespace
int main() {
    try {
        native_sprite_test::Fixture fixture;
        auto resources = std::make_shared<eb::native::SpriteResources>(fixture.bytes, fixture.layout);
        eb::native::SpriteActors actors(resources);
        eb::native::SpritePalettes palettes{};
        for (unsigned p = 0; p < 8; ++p)
            for (unsigned color = 1; color < 16; ++color)
                palettes[p][color] = 0xff000000 | ((p + 1) * 24 << 16) | (color * 16 << 8) | color;
        frame_format_regression(palettes);
        eb::native::SpriteActor actor;
        actor.x = 40;
        actor.y = 80;
        const auto id = actors.create(actor);
        // Both sides of native, wide, ultrawide and maximum view widths.
        // Actor bounds (including authored anchors) decide visibility, not the
        // old 256-pixel screen or a source entity/sprite allocation table.
        unsigned comparisons = 0;
        for (const unsigned width : {256u, 398u, 522u, 1024u})
            for (unsigned pose : {0u, 1u, 14u, 15u})
                for (int x : {-64, -7, 0, 8, 256, 320, int(width) - 1, int(width) + 7, int(width) + 64}) {
                    actor.x = float(x);
                    actor.pose = pose;
                    actors.update(id, actor);
                    const auto frame = actors.draw({0, 0, width}, palettes, 1, 1);
                    const auto image = resources->acquire(0, pose);
                    const auto pixels = eb::rasterize_direct_scene({frame, {}});
                    for (unsigned y = 0; y < 224; ++y)
                        for (unsigned screen_x = 0; screen_x < width; ++screen_x) {
                            const int ix = int(screen_x) - x - image->left, iy = int(y) - 79 - image->top;
                            const unsigned color =
                                ix >= 0 && iy >= 0 && ix < int(image->width) && iy < int(image->height)
                                    ? image->indices[iy * image->width + ix]
                                    : 0;
                            require(
                                pixels[y * width + screen_x] ==
                                    (color ? palettes[image->palette][color] : 0xff000000),
                                "Native actor clipped, misplaced or decoded differently at a screen edge");
                        }
                    require(actors.get(id).x == x && actors.size() == 1, "Drawing mutated an actor");
                    ++comparisons;
                }
        // Culling uses the same one-pixel registration as drawing, including
        // the exact top/bottom bounds when overscan is deliberately disabled.
        actor.x = 40;
        for (const int y : {-7, -6, 248, 249}) {
            actor.y = float(y);
            actors.update(id, actor);
            const auto frame = actors.draw({0, 0, 256, 0}, palettes, 1, 1);
            require(frame->quads.empty() == (y == -7 || y == 249),
                    "Vertical culling disagrees with final sprite pixel registration");
        }
        actor.y = 80;
        // An offscreen actor already owns artwork; camera changes expose it
        // without a simulation tick, spawn callback or resource slot allocation.
        actor.x = 600;
        actor.pose = 0;
        actors.update(id, actor);
        const auto hidden = actors.draw({0, 0, 398}, palettes, 1, 1);
        const auto ready = actors.draw({480, 0, 398}, palettes, 2, 1);
        require(hidden->quads.empty() && ready->quads.size() == 2 && actors.size() == 1,
                "Offscreen artwork was not ready when the camera reached it");
        const auto old_picture = eb::rasterize_direct_scene({ready, {}});
        actor.palette = 2;
        actors.update(id, actor);
        const auto recolored = actors.draw({480, 0, 398}, palettes, 3, 1);
        require(old_picture != eb::rasterize_direct_scene({recolored, {}}), "Palette override was ignored");
        require(eb::rasterize_direct_scene({ready, {}}) == old_picture,
                "Palette change mutated a published frame");
        auto invalid = actor;
        invalid.pose = 99;
        rejects([&] { actors.update(id, invalid); });
        require(actors.get(id).pose == 0, "Rejected update partially changed actor state");
        invalid = actor;
        invalid.x = std::numeric_limits<float>::infinity();
        rejects([&] { actors.create(invalid); });
        invalid = actor;
        invalid.depth_y = std::numeric_limits<float>::quiet_NaN();
        rejects([&] { actors.update(id, invalid); });
        require(!actors.get(id).depth_y, "Rejected depth update partially changed actor state");
        invalid.depth_y = std::numeric_limits<float>::infinity();
        rejects([&] { actors.create(invalid); });
        require(actors.size() == 1, "Rejected creation allocated an actor");
        require(actors.erase(id) && !actors.erase(id), "Actor destruction is not idempotent");
        rejects([&] { actors.get(id); });
        actor.x = 40;
        actor.palette = eb::native::authored_palette;
        const auto replacement = actors.create(actor);
        require(replacement != id, "Reused actor identity could drag old motion into a new actor");
        eb::DirectSceneMotion motion;
        motion.submit(actors.draw({}, palettes, 1, 1));
        actor.x += 1;
        actor.y += 1;
        actors.update(replacement, actor);
        motion.submit(actors.draw({}, palettes, 2, 1));
        std::vector<std::uint32_t> previous;
        for (unsigned phase = 0; phase <= 4; ++phase) {
            const auto sampled = eb::rasterize_direct_scene(motion.sample(phase / 4.), 4);
            require(previous.empty() || previous != sampled,
                    "Host actors lost fractional rendering positions");
            previous = sampled;
            require(actors.get(replacement).x == 41 && actors.get(replacement).y == 81,
                    "Presentation rate affected actor state");
        }
        // Exercise real actor creation/draw/destruction, not just shared_ptrs.
        std::vector<eb::native::ActorId> ids;
        for (unsigned i = 0; i < 20000; ++i)
            ids.push_back(actors.create(actor));
        const auto crowded = actors.draw({}, palettes, 3, 1);
        require(crowded->quads.size() == 40002 && crowded->atlas_height == 16,
                "Actor count imposed source slot limits or duplicated shared artwork");
        for (auto handle : ids)
            require(actors.erase(handle), "Host actor release failed");
        require(actors.size() == 1 && crowded->quads.size() == 40002,
                "Destruction damaged live actors or immutable draw commands");
        // Priority 1 sorts by world Y before layer comparison, matching authored
        // first-opaque sprite overlap even when the lower sprite layer is hidden.
        actor.palette = 1;
        actor.y += 1;
        const auto front = actors.create(actor);
        const auto ordered = actors.draw({}, palettes, 4, 1);
        require(ordered->motions.front().identity == front,
                "World depth order differs from authored sprites");
        actor.visible = false;
        actors.update(front, actor);
        require(actors.draw({}, palettes, 5, 1)->motions.size() == 1 && actors.size() == 2,
                "Hiding a sprite destroyed its actor");
        // Source scripts can offset SCREEN_Y without changing ABS_Y, which is
        // the key used for overlap. Moving a foreground actor visually above
        // another actor must not put it behind that actor.
        {
            eb::native::SpriteActors offset_actors(resources);
            eb::native::SpriteActor back;
            back.x = 40;
            back.y = 80;
            back.palette = 0;
            const auto back_id = offset_actors.create(back);
            auto jumping = back;
            jumping.palette = 1;
            jumping.depth_y = 100;
            const auto front_id = offset_actors.create(jumping);
            const auto image = resources->acquire(0, 0);
            for (const float render_y : {70.f, 90.f}) {
                jumping.y = render_y;
                offset_actors.update(front_id, jumping);
                const auto picture = offset_actors.draw({}, palettes, 1, 1);
                require(picture->motions.front().identity == front_id,
                        "Visual offset changed world overlap order");
                const auto pixels = eb::rasterize_direct_scene({picture, {}});
                const unsigned overlap_y = unsigned(std::max(back.y, jumping.y)) - 8;
                const unsigned ix = 3;
                const unsigned iy = overlap_y - int(jumping.y) - image->top + 1;
                const unsigned color = image->indices[iy * image->width + ix];
                require(color && pixels[overlap_y * 256 + 35] == palettes[1][color],
                        "Visually displaced foreground actor lost opaque overlap");
            }
            jumping.y = 70;
            jumping.depth_y.reset();
            offset_actors.update(front_id, jumping);
            require(offset_actors.draw({}, palettes, 1, 1)->motions.front().identity == back_id,
                    "Actors without explicit world depth stopped sorting by anchor Y");
        }
        std::cout << "PASS " << comparisons
                  << " native edge crossings, frame formats/lifetime, camera/palette isolation, motion and 20001 host actors\n";
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }
}
