#include "eb/asset_store.hpp"
#include "eb/desktop_presentation.hpp"
#include "eb/presentation_pipeline.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include <algorithm>
#include <array>
#include <cstdlib>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <vector>

namespace {
void require(bool ok, const char *message) {
    if (!ok) throw std::runtime_error(message);
}
void render(eb::SnesBus &bus) {
    const auto end = bus.completed_frames + 2;
    while (bus.completed_frames < end) bus.advance_cpu_cycles(1000);
}
eb::PresentationFrame frame(const eb::SnesBus &bus, unsigned number) {
    return {bus.presentation_pixels(), bus.presentation_width(), bus.presentation_fixed_aspect(), number,
            bus.presentation_effect_mask(), bus.presentation_effect_reference(), bus.direct_scene(),
            bus.flashing_context(), bus.presentation_unfiltered_mask()};
}
void intro(eb::GameVersion region, unsigned width, int rate) {
    auto bus = std::make_unique<eb::SnesBus>(std::array<std::uint8_t, 1>{0}, region);
    bus->set_presentation_width(width); bus->set_presentation_effects_enabled(true);
    // GAS_STATION_LOAD's actual shared regional layout: opaque black BG1
    // plus procedural BG2 static added through subscreen color arithmetic.
    bus->write_byte(0x2100, 15); bus->write_byte(0x2105, 3);
    bus->write_byte(0x2107, 0x78); bus->write_byte(0x2108, 0x7c);
    bus->write_byte(0x210b, 0x60); bus->write_byte(0x212c, 1);
    bus->write_byte(0x212d, 2); bus->write_byte(0x2130, 2); bus->write_byte(0x2131, 3);
    bus->palette_ram[66] = 0xff; bus->palette_ram[67] = 0x7f;
    for (unsigned row = 0; row < 8; ++row) {
        bus->video_ram[row * 2] = 255;
        bus->video_ram[0xc000 + row * 2] = 255;
    }
    for (unsigned tile = 0; tile < 1024; ++tile) bus->video_ram[0xf801 + tile * 2] = 8;
    render(*bus);
    eb::DisplaySettings settings; settings.reduce_flashing = true; settings.frame_limit = rate;
    eb::PresentationPipeline filtered({}, settings, 60, rate, true, frame(*bus, 1));
    require(bus->native_framebuffer[0] == 0xffffffff, "Static fixture is not a bright pulse");
    require(filtered.current_picture().pixels[0] == 0xff181818,
            "Intro static bypassed photosensitivity temporal feedback");
    require(bus->presentation_width() == 256 && bus->presentation_fixed_aspect() == 4.0 / 3,
            "War Against Giygas changed dimensions while static was active");
    require(std::equal(bus->presentation_pixels().begin(), bus->presentation_pixels().end(),
                       bus->native_framebuffer.begin()), "Title filtering mutated the original artwork");
    require(std::none_of(bus->presentation_unfiltered_mask().begin(), bus->presentation_unfiltered_mask().end(),
                         [](auto pixel) { return pixel != 0; }), "Title static was mistaken for exempt dialogue");
    // Host refreshes must neither stretch the card nor advance feedback.
    for (unsigned i = 0; i < 5; ++i)
        require(filtered.picture({}).pixels[0] == 0xff181818 &&
                filtered.picture({}).fixed_aspect == 4.0 / 3,
                "Extra host refresh changed title filtering/dimensions");
    for (unsigned row = 0; row < 8; ++row) bus->video_ram[0xc000 + row * 2] = 0;
    render(*bus); filtered.completed_frame(frame(*bus, 2)); filtered.simulation_finished(frame(*bus, 2), 1, {});
    require(filtered.current_picture().pixels[0] == 0xff171717,
            "Dark static pulse discarded its photosensitivity history");
    // C0F21E stops interference before the palette flashes/clean card.
    // The title should retain the same 256x224 canvas and display aspect.
    bus->write_byte(0x212d, 0); bus->write_byte(0x2130, 0); bus->write_byte(0x2131, 0);
    render(*bus);
    require(bus->presentation_width() == 256 && bus->presentation_fixed_aspect() == 4.0 / 3,
            "War Against Giygas resized when static ended");
    filtered.completed_frame(frame(*bus, 3)); filtered.simulation_finished(frame(*bus, 3), 1, {});
    require(filtered.current_picture().pixels[0] == 0xff161616,
            "Ending title static reset or disabled photosensitivity feedback");
    bus->palette_ram[2] = 0xff; bus->palette_ram[3] = 0x7f;
    render(*bus);
    require(bus->native_framebuffer[0] == 0xffffffff, "Palette fixture is not a bright pulse");
    filtered.completed_frame(frame(*bus, 4)); filtered.simulation_finished(frame(*bus, 4), 1, {});
    require(filtered.current_picture().pixels[0] == 0xff2e2e2e,
            "War Against Giygas palette flash bypassed temporal feedback");
    bus->palette_ram[2] = bus->palette_ram[3] = 0;
    render(*bus); filtered.completed_frame(frame(*bus, 5)); filtered.simulation_finished(frame(*bus, 5), 1, {});
    require(filtered.current_picture().pixels[0] == 0xff2d2d2d,
            "Dark title palette pulse discarded feedback history");
    settings.reduce_flashing = false;
    filtered.configure(settings, 60, rate, {});
    filtered.simulation_finished(frame(*bus, 5), 0, {});
    require(std::equal(filtered.current_picture().pixels.begin(), filtered.current_picture().pixels.end(),
                       bus->native_framebuffer.begin()), "Disabling title filter did not restore original pixels");
    // A subsequent ordinary scene returns to the user's requested width.
    bus->write_byte(0x2107, 0x38); render(*bus);
    require(bus->presentation_width() == width && bus->presentation_fixed_aspect() == 0,
            "Leaving the intro lost the selected widescreen width");
    require(!bus->flashing_context().intro, "Title feedback stayed active in the following scene");
}
void source_intro(const char *path) {
    const auto assets = eb::load_game_assets(path, eb::asset_profiles());
    eb::GameSession session(assets.image, assets.version);
    eb::DisplaySettings settings; settings.reduce_flashing = true; settings.frame_limit = 144;
    eb::configure_desktop_presentation(session, settings, 522);
    eb::PresentationPipeline filtered({}, settings, 60, 144, true, session.presentation_frame());
    std::vector<std::uint32_t> previous_raw, previous_filtered;
    unsigned cards = 0, flashes = 0, moving = 0, suppressed = 0;
    bool left = false;
    session.observe_completed_frames([&](eb::PresentationFrame source) {
        filtered.completed_frame(source);
        const auto output = filtered.current_picture();
        if (!source.flashing.intro) {
            if (cards) {
                left = true;
                require(source.width == 522 && source.fixed_aspect == 0,
                        "Real intro did not restore the selected ultrawide view");
            }
            previous_raw.clear(); previous_filtered.clear(); return;
        }
        require(source.width == 256 && output.width == 256 && source.fixed_aspect == 4.0 / 3 &&
                output.fixed_aspect == 4.0 / 3, "Real intro changed card dimensions");
        require(std::equal(source.pixels.begin(), source.pixels.end(), session.native_pixels().begin()),
                "Real intro altered source artwork before filtering");
        require(std::none_of(source.unfiltered_mask.begin(), source.unfiltered_mask.end(),
                            [](auto value) { return value != 0; }), "Real title was exempted as dialogue");
        const bool flash = std::any_of(source.effect_mask.begin(), source.effect_mask.end(),
                                      [](auto value) { return value != 0; });
        flashes += flash; ++cards;
        if (!previous_raw.empty()) {
            unsigned raw_step = 0, filtered_step = 0;
            for (std::size_t i = 0; i < source.pixels.size(); ++i)
                for (unsigned shift : {16u, 8u, 0u}) {
                    const int raw = (source.pixels[i] >> shift) & 255;
                    const int before_raw = (previous_raw[i] >> shift) & 255;
                    const int current = (output.pixels[i] >> shift) & 255;
                    const int before = (previous_filtered[i] >> shift) & 255;
                    raw_step = std::max(raw_step, unsigned(std::abs(raw - before_raw)));
                    filtered_step = std::max(filtered_step, unsigned(std::abs(current - before)));
                }
            require(filtered_step <= 24, "Real title static/palette flash bypassed strength-7 feedback");
            moving += !flash && raw_step != 0;
            suppressed += flash && raw_step > 24 && filtered_step <= 24;
        }
        previous_raw.assign(source.pixels.begin(), source.pixels.end());
        previous_filtered.assign(output.pixels.begin(), output.pixels.end());
    });
    while (session.frames() < 3000) {
        const auto elapsed = session.advance_frame(0);
        filtered.simulation_finished(session.presentation_frame(), elapsed, {});
        session.take_audio_samples();
    }
    require(cards > 500 && moving > 100 && flashes > 0 && suppressed > 0 && left,
            "Replay did not cover original static, palette flashes and the following logo scene");
    std::cout << assets.title << " source intro frames=" << cards << " static/animation=" << moving
              << " flash frames=" << flashes << " suppressed transitions=" << suppressed
              << "; native artwork exact, fixed 4:3, ultrawide restored\n";
}
} // namespace
int main(int argc, char **argv) {
    try {
        if (argc > 1) {
            for (int i = 1; i < argc; ++i) source_intro(argv[i]);
            return 0;
        }
        for (auto region : {eb::GameVersion::US, eb::GameVersion::JP})
            for (unsigned width : {256u, 298u, 398u, 522u, 1024u})
                for (int rate : {60, 144, 300}) intro(region, width, rate);
        std::cout << "Regional intro static and palette flashes are filtered; War Against Giygas keeps native artwork and fixed 4:3 through transitions\n";
    } catch (const std::exception &error) { std::cerr << error.what() << '\n'; return 1; }
}
