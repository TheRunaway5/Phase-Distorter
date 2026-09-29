#include "eb/snes_bus.hpp"

#include <array>
#include <iostream>
#include <memory>
#include <type_traits>

// A scene can inspect pixels and game metadata, but its API does not expose
// writable emulated storage. The view itself is never retained by the renderer.
static_assert(std::is_const_v<typename decltype(eb::SceneReadView::work_ram)::element_type>);
static_assert(std::is_const_v<typename decltype(eb::SceneReadView::video_ram)::element_type>);
static_assert(std::is_const_v<typename decltype(eb::SceneReadView::palette_ram)::element_type>);
static_assert(std::is_const_v<typename decltype(eb::SceneReadView::object_attributes)::element_type>);
static_assert(std::is_const_v<typename decltype(eb::SceneReadView::native_framebuffer)::element_type>);
static_assert(std::is_copy_constructible_v<eb::GameSceneRenderer>);
static_assert(std::is_copy_constructible_v<eb::SnesBus>);

namespace {
unsigned checks = 0, failures = 0;
void check(bool condition, const char *message) {
    ++checks;
    if (!condition) {
        ++failures;
        std::cerr << "FAIL: " << message << '\n';
    }
}
void until(eb::SnesBus &bus, unsigned line) {
    while (bus.scanline_index() != line)
        bus.advance_cpu_cycles(1);
}
void backdrop(eb::SnesBus &bus, unsigned color) {
    bus.palette_ram[0] = color;
    bus.palette_ram[1] = color >> 8;
}
void copy_lifetime(eb::GameVersion version) {
    std::unique_ptr<eb::SnesBus> copied;
    {
        auto original = std::make_unique<eb::SnesBus>(std::array<uint8_t, 1>{0}, version);
        original->set_presentation_width(400);
        original->set_presentation_effects_enabled(true);
        original->write_byte(0x2100, 15);
        backdrop(*original, 0x001f);
        until(*original, 2);
        check(original->presentation_pixels()[0] == 0xffff0000, "Fixture renders a red backdrop");
        copied = std::make_unique<eb::SnesBus>(*original);
        check(copied->presentation_pixels().data() != original->presentation_pixels().data(),
              "Copied scene owns independent wide pixels");
        check(copied->presentation_effect_reference().data() !=
                  original->presentation_effect_reference().data(),
              "Copied scene owns independent effect references");
        backdrop(*original, 0x03e0);
        backdrop(*copied, 0x7c00);
        until(*original, 3);
        until(*copied, 3);
        check(original->presentation_pixels()[400] == 0xff00ff00, "Original view reads original hardware");
        check(copied->presentation_pixels()[400] == 0xff0000ff, "Copied view reads copied hardware");
        check(copied->presentation_effect_reference()[400] == 0xff0000ff,
              "Copied effect reference uses its own palette");
        original->set_presentation_width(256);
        original->set_presentation_effects_enabled(false);
        check(copied->presentation_width() == 400 && !copied->presentation_effect_reference().empty(),
              "Original settings do not mutate copied scene policy");
    }
    // The original bus, cartridge and framebuffers no longer exist. In
    // particular, a retained view from the old bus would now be dangling.
    copied->set_presentation_width(512);
    backdrop(*copied, 0x7fff);
    until(*copied, 4);
    check(copied->presentation_pixels()[2 * 512] == 0xffffffff,
          "Copy continues rendering after original hardware is destroyed");
    check(copied->presentation_effect_reference()[2 * 512] == 0xffffffff,
          "Effect metadata survives original lifetime independently");
    copied->set_presentation_width(256);
    check(copied->presentation_pixels().data() == copied->native_framebuffer.data(),
          "Native-sized presentation borrows the copied bus framebuffer");
}
} // namespace

int main() {
    copy_lifetime(eb::GameVersion::US);
    copy_lifetime(eb::GameVersion::JP);
    std::cout << checks << " checks, " << failures << " failures\n";
    return failures ? 1 : 0;
}
