// Software integration proof for the native story publication boundary. Mode1
// ordering comes from snes_ppu_renderer/world_scene, not from the compositor's
// output. These synthetic tests do not claim SDL/OpenGL or display timing proof.
#include "eb/native/story/window_layer.hpp"
#include <algorithm>
#include <array>
#include <cmath>
#include <iostream>
#include <limits>
#include <set>
#include <stdexcept>

namespace {
using eb::DirectSceneFrame;
using eb::DirectSceneMotion;
using eb::native::dialogue::TextFrame;
using eb::native::story::with_window_layer;
unsigned checks{}, samples{};
constexpr std::uint32_t black = 0xff000000, red = 0xffff0000, green = 0xff00ff00,
                        blue = 0xff0000ff, world_color = 0xff2468ac;
void check(bool condition, const char* message) {
    ++checks;
    if (!condition) throw std::runtime_error(message);
}
template<class F> void rejects(F operation, const char* message) {
    bool rejected = false;
    try { operation(); } catch (const std::invalid_argument&) { rejected = true; }
    check(rejected, message);
}
TextFrame text() {
    return {256, 224, std::vector<std::uint8_t>(256 * 224), std::vector<std::uint8_t>(256 * 224)};
}
std::array<std::uint16_t, 32> colors() {
    std::array<std::uint16_t, 32> result{};
    result[0] = 0x7fff; // Deliberately visible palette zero must still be transparent.
    result[1] = 0x001f;
    result[2] = 0x03e0;
    result[3] = 0x7c00;
    return result;
}
void mark(TextFrame& frame, unsigned x, unsigned y, unsigned color, unsigned priority) {
    frame.pixels.at(y * 256 + x) = std::uint8_t(color);
    frame.priority.at(y * 256 + x) = std::uint8_t(priority);
}
DirectSceneFrame world(unsigned width = 320) {
    DirectSceneFrame result;
    result.width = width;
    result.atlas_width = 16;
    result.atlas_height = 48;
    result.frame = 27;
    result.scene_identity = 93;
    result.atlas.resize(16 * 48);
    std::fill_n(result.atlas.begin(), 256, world_color);
    std::fill_n(result.atlas.begin() + 256, 256, green);
    std::fill_n(result.atlas.begin() + 512, 256, blue);
    result.motions = {{41, 0, 0}};
    return result;
}
auto render(std::shared_ptr<const DirectSceneFrame> frame, unsigned scale = 1) {
    return eb::rasterize_direct_scene({std::move(frame), {}}, scale);
}
bool same_quad(const DirectSceneFrame::Quad& a, const DirectSceneFrame::Quad& b) {
    return a.u == b.u && a.v == b.v && a.width == b.width && a.height == b.height &&
           a.x == b.x && a.y == b.y && a.priority == b.priority && a.motion == b.motion &&
           a.object == b.object && a.clip.left == b.clip.left && a.clip.top == b.clip.top &&
           a.clip.right == b.clip.right && a.clip.bottom == b.clip.bottom;
}

void priority_tableaux() {
    // Source Mode1 ranks, independently enumerated for all scenery and OBJ
    // levels. A low BG3 pixel is below every visible BG1/BG2/OBJ pixel; ordinary
    // high BG3 beats only OBJ0; raised high BG3 beats all eight possibilities.
    constexpr std::array<int, 8> ranks{6, 9, 5, 8, 1, 3, 7, 10};
    for (bool raised : {false, true}) {
        for (unsigned layer = 0; layer < ranks.size(); ++layer) {
            auto scene = world();
            scene.quads.push_back({0, 0, 16, 16, 80, 40, ranks[layer], 0, layer >= 4});
            auto ui = text();
            mark(ui, 48, 40, 1, 0);
            mark(ui, 49, 40, 2, 1);
            mark(ui, 50, 40, 0, 1);
            const auto joined = with_window_layer(scene, ui, colors(), raised);
            const auto pixels = render(joined);
            check(pixels[40 * 320 + 80] == world_color, "Low BG3 escaped source Mode1 ordering");
            check(pixels[40 * 320 + 81] == ((raised || layer == 4) ? green : world_color),
                  "High BG3 has the wrong Mode1 or raised priority");
            check(pixels[40 * 320 + 82] == world_color, "Transparent high BG3 covered scenery or OBJ");
            check(joined->quads.size() == 3, "Mixed text priorities did not produce two independent layers");
            check(joined->quads[layer >= 4 ? 2 : 0].object == (layer >= 4),
                  "Window insertion changed scenery/OBJ classification");
        }
        auto backdrop = world();
        backdrop.quads = {{0, 0, 16, 16, 80, 40, -1, 0, false}};
        auto ui = text();
        mark(ui, 48, 40, 1, 0);
        check(render(with_window_layer(backdrop, ui, colors(), raised))[40 * 320 + 80] == red,
              "Low BG3 did not cover the source backdrop");
    }
}

void object_precedence() {
    auto scene = world();
    scene.quads = {{0, 0, 16, 16, 80, 40, 6, 0, false},
                   {0, 0, 16, 16, 120, 40, 5, 0, false},
                   {0, 16, 16, 16, 80, 40, 1, 0, true},
                   {0, 32, 16, 16, 80, 40, 10, 0, true}};
    auto ui = text();
    mark(ui, 48, 40, 1, 1);
    const auto joined = with_window_layer(scene, ui, colors(), false);
    check(joined->quads.size() == 5 && same_quad(joined->quads[0], scene.quads[0]) &&
              same_quad(joined->quads[1], scene.quads[1]) && !joined->quads[2].object &&
              same_quad(joined->quads[3], scene.quads[2]) && same_quad(joined->quads[4], scene.quads[3]),
          "Window layer did not precede the unchanged front-to-back object list");
    check(render(joined)[40 * 320 + 80] == world_color,
          "Later high OBJ escaped first-opaque OBJ selection behind scenery");
    scene.quads.erase(scene.quads.begin(), scene.quads.begin() + 2);
    check(render(with_window_layer(scene, ui, colors(), false))[40 * 320 + 80] == red,
          "Later high OBJ escaped first-opaque OBJ selection behind ordinary high BG3");
    scene.atlas[256] = 0; // Only the first object's one pixel is transparent.
    auto transparent_first = render(with_window_layer(scene, ui, colors(), false));
    check(transparent_first[40 * 320 + 80] == blue,
          "Transparent first OBJ incorrectly masked the later high OBJ");
    check(transparent_first[40 * 320 + 81] == green,
          "Transparent-first exception leaked to an opaque neighboring OBJ pixel");
    check(render(with_window_layer(scene, ui, colors(), true))[40 * 320 + 80] == red,
          "Raised text lost to a high-priority object");
}

void palette_and_geometry() {
    constexpr std::array<unsigned, 32> channel{0,8,16,24,33,41,49,57,66,74,82,90,99,107,115,123,
                                             132,140,148,156,165,173,181,189,198,206,214,222,231,239,247,255};
    auto ui = text();
    auto palette = colors();
    for (unsigned index = 1; index < 32; ++index) {
        palette[index] = std::uint16_t(0x8000 | index | ((31 - index) << 5) | (((index * 7) & 31) << 10));
        mark(ui, index, 0, index, index & 1);
    }
    mark(ui, 0, 223, 1, 0);
    mark(ui, 255, 223, 31, 1);
    // An explicitly opaque black index must not be mistaken for transparent.
    palette[17] = 0;
    for (unsigned width : {256u, 320u, 512u}) {
        auto scene = world(width);
        const auto result = with_window_layer(scene, ui, palette);
        const auto pixels = render(result);
        const unsigned left = (width - 256) / 2;
        check(pixels.size() == width * 224, "UI composition changed output extent");
        for (unsigned index = 1; index < 32; ++index) {
            const auto expected = index == 17 ? black :
                0xff000000u | (channel[index] << 16) | (channel[31 - index] << 8) | channel[(index * 7) & 31];
            check(pixels[left + index] == expected, "Captured BGR555 palette expansion or centering is wrong");
        }
        check(pixels[left] == black && pixels[left + 32] == black,
              "Palette-zero transparency used visible palette color zero");
        check(pixels[223 * width + left] != black && pixels[223 * width + left + 255] != black,
              "Canonical UI clipped its first or final column/row");
        if (left) check(pixels[223 * width + left - 1] == black && pixels[223 * width + left + 256] == black,
                        "Canonical UI leaked into widened scene margins");
        // Read the alpha at the opaque black pixel rather than relying on the
        // rasterizer's black backdrop to distinguish two different outcomes.
        const auto& high = result->quads.back();
        check(result->atlas[(high.v * result->atlas_width) + 17] == black,
              "Nonzero palette index resolving to black lost opacity");
    }
}

void atlas_and_publication() {
    for (unsigned atlas_width : {1u, 73u, 256u, 513u}) {
        auto scene = world();
        scene.atlas_width = atlas_width;
        scene.atlas_height = 7;
        scene.atlas.resize(atlas_width * 7);
        for (unsigned i = 0; i < scene.atlas.size(); ++i) scene.atlas[i] = 0xff000000u | (i + 1);
        scene.quads = {{0, 0, atlas_width, 7, -3, 6, 6, 0, false}};
        scene.quads[0].clip = {1, 8, 100, 12};
        const auto original = scene;
        for (unsigned priorities = 0; priorities < 4; ++priorities) {
            auto ui = text();
            if (priorities & 1) mark(ui, 70, 80, 1, 0);
            if (priorities & 2) mark(ui, 90, 80, 2, 1);
            auto palette = colors();
            const auto result = with_window_layer(scene, ui, palette);
            check(result.get() != &scene, "Even an empty publication must own a world snapshot");
            check(result->frame == original.frame && result->scene_identity == original.scene_identity &&
                      result->width == original.width, "Publication changed the world frame identity");
            check(same_quad(result->quads.front(), original.quads.front()), "Repacking changed world quad or clip");
            const auto expected_width = priorities ? std::max(256u, atlas_width) : atlas_width;
            const auto layers = unsigned(bool(priorities & 1)) + unsigned(bool(priorities & 2));
            check(result->atlas_width == expected_width && result->atlas_height == 7 + layers * 224,
                  "Transparent or single-priority publication allocated the wrong atlas extent");
            for (unsigned y = 0; y < 7; ++y)
                for (unsigned x = 0; x < atlas_width; ++x)
                    check(result->atlas[y * result->atlas_width + x] == original.atlas[y * atlas_width + x],
                          "Repacking moved or changed existing world artwork");
            check(result->motions.size() == original.motions.size() + unsigned(priorities != 0),
                  "Empty text added a motion or visible text failed to add one");
            if (priorities) {
                const auto& motion = result->motions.back();
                check(motion.identity == 0 && motion.x == 0 && motion.y == 0,
                      "Text publication participates in world motion interpolation");
            }
            const auto held_atlas = result->atlas;
            const auto held_pixels = render(result);
            scene.atlas[0] ^= 0x00ffffff;
            mark(ui, 70, 80, 3, 1);
            palette[1] = 0x7fff;
            const auto later = with_window_layer(scene, ui, palette);
            check(result->atlas == held_atlas && render(result) == held_pixels,
                  "A later world/text/palette mutation changed a held publication");
            check(later->atlas[0] != result->atlas[0], "Snapshot mutation test did not actually change world data");
            scene = original;
        }
    }
}

void high_rate_sampling() {
    auto previous_world = world(), current_world = world();
    previous_world.frame = 100;
    current_world.frame = 101;
    previous_world.motions = {{42, 40, 40}, {0, -8, -4}};
    current_world.motions = {{42, 48, 44}, {0, 0, 0}};
    previous_world.quads = {{0, 0, 16, 16, 40, 40, 10, 0, true}};
    current_world.quads = {{0, 0, 16, 16, 48, 44, 10, 0, true}};
    auto old_ui = text(), new_ui = text();
    // New text must appear immediately, not remain mixed with old text until
    // the sampling fraction reaches one. Existing world identity0 also proves
    // that the UI's zero identity cannot accidentally match a prior camera.
    for (unsigned y = 100; y < 108; ++y)
        for (unsigned x = 100; x < 108; ++x) {
            mark(old_ui, x, y, 1, 1);
            mark(new_ui, x, y, 2, 1);
        }
    const auto previous = with_window_layer(previous_world, old_ui, colors());
    const auto current = with_window_layer(current_world, new_ui, colors());
    const auto held = render(previous);
    std::vector<double> phases;
    for (double rate : {144., 300.}) {
        // Times in one completed 60Hz source interval, including both ends.
        for (unsigned sample = 0; sample / rate < 1. / 60; ++sample)
            phases.push_back(sample / rate * 60);
        phases.push_back(1);
    }
    phases.insert(phases.end(), {0.017, 0.113, 0.237, 0.509, 0.743, 0.999, -1, 2,
                                std::numeric_limits<double>::quiet_NaN()});
    DirectSceneMotion sampler;
    sampler.submit(previous);
    sampler.submit(current);
    std::set<std::pair<int, int>> seen_positions;
    for (double phase : phases) {
        const auto picture = sampler.sample(phase);
        const auto& ui_offset = picture.offsets.back();
        check(ui_offset.x == 0 && ui_offset.y == 0, "High-rate or irregular sample moved dialogue UI");
        const double clamped = std::isfinite(phase) ? std::clamp(phase, 0., 1.) : 1.;
        check(std::abs(picture.offsets[0].x - (-8 * (1 - clamped))) < 0.00001 &&
                  std::abs(picture.offsets[0].y - (-4 * (1 - clamped))) < 0.00001,
              "UI insertion interfered with the world's fractional motion");
        check(picture.offsets[1].x == 0 && picture.offsets[1].y == 0,
              "Existing identity-zero world motion was matched to a prior identity");
        const auto pixels = eb::rasterize_direct_scene(picture, 2);
        const int left = int(std::ceil((48 + picture.offsets[0].x) * 2 - .5f));
        const int top = int(std::ceil((44 + picture.offsets[0].y) * 2 - .5f));
        seen_positions.emplace(left, top);
        for (unsigned y = 0; y < 448; ++y)
            for (unsigned x = 0; x < 640; ++x) {
                const bool in_ui = x >= 264 && x < 280 && y >= 200 && y < 216;
                const bool in_actor = int(x) >= left && int(x) < left + 32 &&
                                      int(y) >= top && int(y) < top + 32;
                check(pixels[y * 640 + x] == (in_ui ? green : in_actor ? world_color : black),
                      "Sampled composition moved/blended UI, lost world motion or leaked stale text");
            }
        ++samples;
    }
    check(seen_positions.size() >= 9, "High-rate coverage did not exercise distinct world positions");
    check(render(previous) == held && held[100 * 320 + 132] == red,
          "Sampling a new publication mutated the held old UI frame");
}

void malformed_inputs() {
    auto scene = world();
    auto ui = text();
    const auto palette = colors();
    const auto unchanged = scene.atlas;
    for (unsigned bad_width : {0u, 255u}) {
        auto bad = scene;
        bad.width = bad_width;
        rejects([&] { with_window_layer(bad, ui, palette); }, "Accepted a world narrower than canonical UI");
    }
    for (unsigned dimension = 0; dimension < 2; ++dimension) {
        auto bad = ui;
        (dimension ? bad.height : bad.width) -= 1;
        rejects([&] { with_window_layer(scene, bad, palette); }, "Accepted a noncanonical UI extent");
    }
    for (unsigned plane = 0; plane < 2; ++plane) {
        for (bool longer : {false, true}) {
            auto bad = ui;
            auto& values = plane ? bad.priority : bad.pixels;
            if (longer) values.push_back(0); else values.pop_back();
            rejects([&] { with_window_layer(scene, bad, palette); }, "Accepted a malformed UI plane length");
        }
    }
    for (unsigned value : {32u, 255u}) {
        auto bad = ui;
        bad.pixels.back() = std::uint8_t(value);
        rejects([&] { with_window_layer(scene, bad, palette); }, "Accepted an invalid UI palette index");
    }
    for (unsigned value : {2u, 255u}) {
        auto bad = ui; // Invalid priority on a transparent pixel is still invalid input.
        bad.priority.back() = std::uint8_t(value);
        rejects([&] { with_window_layer(scene, bad, palette); }, "Accepted an invalid transparent UI priority");
    }
    auto bad_atlas = scene;
    bad_atlas.atlas.pop_back();
    rejects([&] { with_window_layer(bad_atlas, ui, palette); }, "Accepted a truncated world atlas");
    bad_atlas = scene;
    bad_atlas.atlas_width = 0;
    bad_atlas.atlas.clear();
    rejects([&] { with_window_layer(bad_atlas, ui, palette); }, "Accepted a zero-width nonempty-height atlas");
    check(scene.atlas == unchanged && std::all_of(ui.pixels.begin(), ui.pixels.end(), [](auto p) { return p == 0; }),
          "Rejected input mutated a publication or world");
    // A world without drawable geometry is a legitimate UI-only publication.
    DirectSceneFrame empty;
    empty.width = 320;
    mark(ui, 0, 0, 1, 0);
    check(render(with_window_layer(empty, ui, palette))[32] == red, "Rejected or lost UI-only composition");
}

void presenter_atlas_limit() {
    // FramePresenter's existing direct-scene consumer accepts at most4096 in
    // either texture dimension. A valid world can still leave too little room
    // for publication, so check the combined extent, not just the input atlas.
    for (unsigned layers : {1u, 2u}) {
        auto scene = world();
        scene.atlas_height = 4096 - layers * 224;
        scene.atlas.assign(std::size_t(scene.atlas_width) * scene.atlas_height, world_color);
        auto ui = text();
        mark(ui, 255, 223, 1, 1);
        if (layers == 2) mark(ui, 0, 0, 2, 0);
        const auto exact = with_window_layer(scene, ui, colors());
        check(exact->atlas_height == 4096 && exact->atlas_width == 256,
              "Exact consumer atlas-height limit was rejected or miscomputed");
        check(exact->atlas[4095 * 256 + 255] == red,
              "Exact-limit publication lost its final artwork row");
        scene.atlas_height += 1;
        scene.atlas.resize(std::size_t(scene.atlas_width) * scene.atlas_height, world_color);
        const auto before = scene.atlas;
        bool rejected = false;
        try { with_window_layer(scene, ui, colors()); }
        catch (const std::length_error&) { rejected = true; }
        catch (const std::invalid_argument&) { rejected = true; }
        check(rejected, "Compositor accepted a 4097-row atlas that FramePresenter rejects");
        check(scene.atlas == before && ui.pixels.back() == 1 && ui.priority.back() == 1,
              "Rejected combined atlas extent changed captured inputs");
    }
    auto scene = world();
    scene.atlas_width = 4096;
    scene.atlas_height = 1;
    scene.atlas.assign(4096, world_color);
    auto ui = text();
    mark(ui, 0, 0, 1, 1);
    check(with_window_layer(scene, ui, colors())->atlas_width == 4096,
          "Exact consumer atlas-width limit was rejected");
    scene.atlas_width = 4097;
    scene.atlas.push_back(world_color);
    const auto before = scene.atlas;
    bool rejected = false;
    try { with_window_layer(scene, ui, colors()); }
    catch (const std::length_error&) { rejected = true; }
    catch (const std::invalid_argument&) { rejected = true; }
    check(rejected, "Compositor accepted a visible-UI atlas wider than FramePresenter supports");
    check(scene.atlas == before && ui.pixels[0] == 1,
          "Rejected excessive atlas width changed captured inputs");
}
} // namespace

int main() {
    try {
        priority_tableaux();
        object_precedence();
        palette_and_geometry();
        atlas_and_publication();
        high_rate_sampling();
        malformed_inputs();
        presenter_atlas_limit();
        std::cout << "Native story window layer: " << checks << " checks, " << samples
                  << " software presentation samples passed\n";
    } catch (const std::exception& error) {
        std::cerr << "Native story window layer failed after " << checks << " checks: " << error.what() << '\n';
        return 1;
    }
}
