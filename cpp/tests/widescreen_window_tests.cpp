#include "eb/presentation_pipeline.hpp"
#include "eb/snes_bus.hpp"
#include "generated_profile.hpp"
#include <algorithm>
#include <array>
#include <iostream>
#include <memory>
#include <stdexcept>

namespace {
void require(bool ok, const char *message) {
    if (!ok) throw std::runtime_error(message);
}
void ram_word(eb::SnesBus &bus, unsigned at, unsigned value) {
    bus.work_ram[at] = value; bus.work_ram[at + 1] = value >> 8;
}
void vram_word(eb::SnesBus &bus, unsigned at, unsigned value) {
    bus.video_ram[at] = value; bus.video_ram[at + 1] = value >> 8;
}
void draw(eb::SnesBus &bus) {
    const auto end = bus.completed_frames + 2;
    while (bus.completed_frames < end) bus.advance_cpu_cycles(1000);
}
void windows(eb::GameVersion version, unsigned width, unsigned id, bool filter) {
    auto bus = std::make_unique<eb::SnesBus>(std::array<std::uint8_t, 1>{0}, version);
    const bool jp = version == eb::GameVersion::JP, battle = id == 15 || id == 18;
    const unsigned table = jp ? 0x8c26 : 0x88e4, records = jp ? 0x89c2 : 0x8650,
                   size = jp ? 76 : 82, head = jp ? 0x8c22 : 0x88e0;
    for (unsigned i = 0; i < (jp ? 52 : 53); ++i) ram_word(*bus, table + i * 2, 0xffff);
    // Independent regional CREATE_WINDOW layout: content dimensions exclude
    // the one-tile border. Native row sampling uses y+1, as the source does.
    const unsigned menu_width = id == 15 ? (jp ? 17 : 21) : id == 18 ? (jp ? 12 : 14) : (jp ? 12 : 13);
    const unsigned menu_height = battle ? 6 : 8;
    const auto record = [&](unsigned slot, unsigned window_id, unsigned x, unsigned y, unsigned w, unsigned h) {
        const unsigned at = records + slot * size;
        ram_word(*bus, table + window_id * 2, slot);
        ram_word(*bus, at, slot ? slot - 1 : 0xffff);
        ram_word(*bus, at + 2, slot == 2 ? 0xffff : slot + 1);
        ram_word(*bus, at + 4, window_id);
        ram_word(*bus, at + 6, x); ram_word(*bus, at + 8, y);
        ram_word(*bus, at + 10, w - 2); ram_word(*bus, at + 12, h - 2);
        for (unsigned row = y; row < y + h; ++row)
            for (unsigned col = x; col < x + w; ++col)
                vram_word(*bus, 0xf800 + (row * 32 + col) * 2, 0x2001);
    };
    record(0, id, 1, 1, menu_width, menu_height);
    record(1, 10, 1, 10, jp ? 9 : 8, 4);
    record(2, battle ? 14 : 1, 4, 16, 24, 6);
    ram_word(*bus, head, 0); ram_word(*bus, head + 2, 2);
    const auto source_ram = bus->work_ram;
    const unsigned layer = battle ? 0 : 2;
    bus->write_byte(0x2100, 15); bus->write_byte(0x2105, battle ? 0 : 9);
    bus->write_byte(0x2107 + layer, 0x7c);
    bus->write_byte(layer ? 0x210c : 0x210b, 6);
    bus->write_byte(0x212c, 1u << layer);
    for (unsigned row = 0; row < 8; ++row) vram_word(*bus, 0xc010 + row * 2, 0xff00);
    bus->palette_ram[4] = 0xff; bus->palette_ram[5] = 0x7f;
    ram_word(*bus, eb::source_profile(version).wram_battle_mode_flag, battle);
    bus->set_presentation_width(width); bus->set_presentation_effects_enabled(filter);
    draw(*bus);
    const auto raw = bus->presentation_pixels();
    const unsigned margin = (width - 256) / 2;
    require(raw[16 * width + 8] == 0xffffffff, "Command box is still anchored to the native center");
    require(raw[84 * width + 8] == 0xffffffff, "Money counter did not follow the left-edge command box");
    require(raw[16 * width + 8 + menu_width * 8] == 0xff000000, "Command box duplicated or stretched beyond its native width");
    require(raw[132 * width + margin + 32] == 0xffffffff, "Dialogue moved with the command box");
    require(bus->native_framebuffer[16 * 256 + 8] == 0xffffffff &&
            bus->native_framebuffer[16 * 256 + 8 + menu_width * 8] == 0xff000000,
            "Presentation positioning modified the canonical framebuffer");
    require(std::equal(source_ram.begin() + records, source_ram.begin() + head + 4,
                       bus->work_ram.begin() + records), "Presentation positioning modified source window state");
    if (filter) {
        const auto frame = [&](unsigned number) -> eb::PresentationFrame {
            return {bus->presentation_pixels(), width, 0, number, {}, {}, {}, {true, false, 0},
                    bus->presentation_unfiltered_mask()};
        };
        eb::DisplaySettings settings; settings.reduce_flashing = true; settings.frame_limit = 300;
        eb::PresentationPipeline pipeline({}, settings, 60, 300, true, frame(1));
        bus->palette_ram[4] = 0; bus->palette_ram[5] = 0x7c;
        draw(*bus); pipeline.completed_frame(frame(2)); pipeline.simulation_finished(frame(2), 1, {});
        for (unsigned at : {16 * width + 8, 84 * width + 8, 132 * width + margin + 32})
            require(pipeline.current_picture().pixels[at] == 0xff0000ff &&
                    bus->presentation_unfiltered_mask()[at], "Relocated menu/dialogue retained photosensitivity motion blur");
    }
    // Closing a menu must remove its shifted copy without moving dialogue.
    ram_word(*bus, table + id * 2, 0xffff); ram_word(*bus, table + 20, 0xffff);
    ram_word(*bus, head, 2); ram_word(*bus, records + 2 * size, 0xffff);
    for (unsigned row = 1; row < 14; ++row)
        for (unsigned col = 1; col < 1 + menu_width; ++col)
            vram_word(*bus, 0xf800 + (row * 32 + col) * 2, 0);
    draw(*bus);
    require(bus->presentation_pixels()[16 * width + 8] == 0xff000000,
            "Closed command box left artwork at the widescreen edge");
    require(bus->presentation_pixels()[132 * width + margin + 32] != 0xff000000,
            "Closing command box removed unrelated dialogue");
}
} // namespace
int main() {
    try {
        for (auto version : {eb::GameVersion::US, eb::GameVersion::JP})
            for (unsigned width : {256u, 358u, 398u, 522u, 796u, 1024u})
                for (unsigned id : {0u, 15u, 18u})
                    for (bool filter : {false, true}) windows(version, width, id, filter);
        std::cout << "Regional commands and money keep their left inset at six widths; dialogue remains centered and unfiltered\n";
    } catch (const std::exception &error) { std::cerr << error.what() << '\n'; return 1; }
}
