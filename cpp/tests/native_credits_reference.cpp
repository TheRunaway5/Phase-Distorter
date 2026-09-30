// Independent source oracle for the CPU-free staff-text scene. This test alone
// runs the frozen CREDITS_SCROLL_FRAME{,-jp}.asm and DECOMP implementations.
// Addresses below were checked in each regional linked earthbound.dbg, rather
// than obtained from the production resource importer or semantic adapter.
#include "eb/native/cutscenes/credits.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include <algorithm>
#include <array>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>

namespace {
using namespace eb::native::cutscenes;
void require(bool ok, const char* message) { if (!ok) throw std::runtime_error(message); }
unsigned word(std::span<const std::uint8_t> bytes, unsigned at) {
    return bytes[at] | (unsigned(bytes[at + 1]) << 8);
}
unsigned longword(std::span<const std::uint8_t> bytes, unsigned at) {
    return word(bytes, at) | (word(bytes, at + 2) << 16);
}
struct Layout {
    unsigned callback, decomp, font, font_bytes, staff, staff_bytes, palette;
    unsigned rows, row, next, wipe, script, scroll, head, tail, queue, name;
};
Layout reference_layout(eb::GameVersion version) {
    // src/ending/{credits_scroll_frame,initialize_credits_scene}{,-jp}.asm;
    // src/bankconfig/common/bank21.asm places UNKNOWN_E14DE8 after STAFF_TEXT.
    // GAME_STATE+earthbound_playername is a 24-byte buffer in both versions.
    if (version == eb::GameVersion::JP)
        return {0xc0fb8d,0xc419ea,0xe1d2cc,0x800,0xe13596,0xca8,0xe1d6a6,
                0x8176,0xb6c0,0xb6ac,0xb6ae,0xb6b0,0xb6b4,0xb6be,0xb6bc,0x54dc,0x9ab5};
    return {0xc0f41e,0xc41a9e,0xe1e528,0xc00,0xe1413f,0xca9,0xe1e914,
            0x7dfe,0xb4f7,0xb4e3,0xb4e5,0xb4e7,0xb4eb,0xb4f5,0xb4f3,0x5156,0x9801};
}
struct Oracle {
    eb::GameVersion version;
    Layout layout;
    std::unique_ptr<eb::SnesBus> bus;
    eb::MainCpu65816 cpu;
    unsigned script_start;
    std::array<std::uint8_t, 2048> canvas{};
    std::uint64_t ticks=0, publications=0, steps=0;
    Oracle(std::span<const std::uint8_t> image, eb::GameVersion region, unsigned script)
        : version(region), layout(reference_layout(region)), bus(std::make_unique<eb::SnesBus>(image, region)),
          cpu(*bus), script_start(script) {
        cpu.set_runtime(eb::MainCpuRuntime::Legacy);
        cpu.emulation_mode = false;
        cpu.status_register = eb::MainCpu65816::InterruptDisable;
        cpu.data_bank = 0x7e;
        cpu.direct_page = 0x1e00;
        cpu.stack_pointer = 0x1fff;
        put(layout.script, script); put(layout.script + 2, script >> 16);
        put(layout.wipe, 7);
        bus->work_ram[0x0d] = 0x80;
    }
    void put(unsigned at, unsigned value) {
        bus->work_ram[at] = value; bus->work_ram[at + 1] = value >> 8;
    }
    void call(unsigned entry, bool far) {
        const unsigned trampoline = (entry & 0xff0000) | 0xff00;
        cpu.program_counter = trampoline;
        cpu.accumulator = cpu.x_index = cpu.y_index = 0;
        if (far) cpu.execute_instruction<0x22>(entry, 4);
        else cpu.execute_instruction<0x20>(entry & 0xffff, 3);
        unsigned count = 0;
        while (cpu.program_counter != trampoline + (far ? 4 : 3) || cpu.stack_pointer != 0x1fff) {
            if (++count > 3000000)
                throw std::runtime_error("Credits source did not return: " + cpu.describe_registers());
            cpu.step_instruction();
        }
        steps += count;
        require(cpu.direct_page == 0x1e00 && cpu.data_bank == 0x7e,
                "Credits source did not restore the caller's frame");
    }
    std::vector<std::uint8_t> original_font() {
        put(0x1e0e, layout.font); put(0x1e10, layout.font >> 16);
        put(0x1e12, 0); put(0x1e14, 0x7f);
        call(layout.decomp, true);
        return {bus->work_ram.begin() + 0x10000, bus->work_ram.begin() + 0x10000 + layout.font_bytes};
    }
    void tick(std::span<const std::uint8_t> name) {
        require(name.size() <= 24, "Reference name exceeds the source game-state field");
        std::fill_n(bus->work_ram.begin() + layout.name, 25, 0);
        std::copy(name.begin(), name.end(), bus->work_ram.begin() + layout.name);
        call(layout.callback, false);
        ++ticks;
    }
    unsigned pending() const {
        return (word(bus->work_ram, layout.head) - word(bus->work_ram, layout.tail)) & 127;
    }
    bool publish_next() {
        // Consume exactly one source descriptor, as PROCESS_CREDITS_DMA_QUEUE
        // does. Resolve its source bytes now, preserving composition-ring reuse.
        const auto tail = word(bus->work_ram, layout.tail);
        if (tail == word(bus->work_ram, layout.head)) return false;
        const auto record = layout.queue + tail * 9;
        const auto mode = bus->work_ram[record];
        const auto size = word(bus->work_ram, record + 1);
        const auto source = longword(bus->work_ram, record + 3);
        const auto target = word(bus->work_ram, record + 7);
        require(mode == 0 || mode == 3, "Unexpected source text publication mode");
        require(target >= 0x6c00 && (target - 0x6c00) * 2 + size <= canvas.size(),
                "Source text publication escaped the text surface");
        for (unsigned byte = 0; byte < size; ++byte)
            canvas[(target - 0x6c00) * 2 + byte] = bus->read_byte(source + (mode == 0 ? byte : 0));
        put(layout.tail, (tail + 1) & 127);
        ++publications;
        return true;
    }
    void compare(const CreditsTextScene& native) const {
        const auto& state = native.state();
        const auto& ram = bus->work_ram;
        require(native.pending_rows() == pending(), "Pending publication count differs");
        require(state.ticks == ticks && state.cursor == longword(ram, layout.script) - script_start,
                "Staff cursor/tick differs from original callback");
        require(state.scroll_position == longword(ram, layout.scroll) &&
                (state.scroll_position >> 16) == word(ram, 0x3b), "Quarter-pixel/source integer scroll differs");
        require(state.next_credit_position == word(ram, layout.next) &&
                state.wipe_threshold == word(ram, layout.wipe) && state.composition_row == word(ram, layout.row),
                "Command spacing, temporary rows or wipe progression differs");
        for (unsigned i = 0; i < 512; ++i)
            require(native.composition_rows()[i] == word(ram, layout.rows + i * 2),
                    "Temporary glyph composition differs");
        for (unsigned i = 0; i < 1024; ++i)
            require(native.tile_canvas()[i] == word(canvas, i * 2), "Published text canvas differs");
        if (version == eb::GameVersion::US)
            require(std::equal(native.converted_player_name().begin(), native.converted_player_name().end(),
                               ram.begin() + 0xb4f9), "US converted name buffer differs");
    }
};
std::uint64_t compare_pixels(const CreditsTextScene& scene, const Oracle& oracle,
                             std::span<const std::uint8_t> planar, std::uint64_t& nonzero) {
    const auto output = scene.indexed_canvas();
    const auto scroll = word(oracle.bus->work_ram, 0x3b);
    for (unsigned y = 0; y < 224; ++y) for (unsigned x = 0; x < 256; ++x) {
        const unsigned source_y = (y + 1 + scroll) & 255;
        const auto descriptor = word(oracle.canvas, (source_y / 8 * 32 + x / 8) * 2);
        const unsigned tile = descriptor & 1023;
        unsigned color = 0;
        if (tile >= 64) {
            const unsigned glyph_y = descriptor & 0x8000 ? 7 - (source_y & 7) : source_y & 7;
            const unsigned glyph_x = descriptor & 0x4000 ? 7 - (x & 7) : x & 7;
            const unsigned base = (tile - 64) * 16 + glyph_y * 2;
            require(base + 1 < planar.size(), "Original staff text requests a glyph outside its imported font");
            color = ((planar[base] >> (7 - glyph_x)) & 1) |
                    (((planar[base + 1] >> (7 - glyph_x)) & 1) << 1);
        }
        const auto expected = color ? color + ((descriptor >> 10) & 7) * 4 : 0;
        require(output[y * 256 + x] == expected, "Native indexed artwork differs from original font/composition");
        nonzero += expected != 0;
    }
    return output.size();
}
// An actual PPU frame is a second oracle for displayed-row registration and
// palette expansion. Input is exclusively the original routine's tile canvas,
// original DECOMP output and imported palette, not the native scene's tiles.
class DisplayOracle {
    eb::SnesBus bus_;
    std::array<std::uint16_t, 8> palette_{};
  public:
    DisplayOracle(eb::GameVersion version, std::span<const std::uint8_t> planar,
                  std::span<const std::uint8_t> palette)
        : bus_(std::span(eb::rom_data(version), eb::rom_size(version)), version) {
        std::copy(planar.begin(), planar.end(), bus_.video_ram.begin() + 0xc400);
        std::copy(palette.begin(), palette.end(), bus_.palette_ram.begin());
        for (unsigned i = 0; i < 8; ++i) palette_[i] = word(palette, i * 2);
        bus_.write_byte(0x2100, 15); // full brightness
        bus_.write_byte(0x2105, 1);  // BG3 two-bit tiles
        bus_.write_byte(0x2109, 0x6c);
        bus_.write_byte(0x210c, 6);
        bus_.write_byte(0x212c, 4);  // isolate the source text layer
    }
    std::uint64_t compare(const CreditsTextScene& scene, const Oracle& oracle) {
        std::copy(oracle.canvas.begin(), oracle.canvas.end(), bus_.video_ram.begin() + 0xd800);
        const auto source_scroll = word(oracle.bus->work_ram, 0x3b);
        bus_.write_byte(0x2112, source_scroll);
        bus_.write_byte(0x2112, source_scroll >> 8);
        const auto target = bus_.completed_frames + 2;
        while (bus_.completed_frames < target) bus_.advance_cpu_cycles(1000);
        const auto native = scene.indexed_canvas();
        for (unsigned i = 0; i < native.size(); ++i) {
            require(native[i] < palette_.size(), "Native credits emitted an unavailable palette index");
            const auto color = palette_[native[i]];
            const auto expand = [](unsigned channel) { return (channel << 3) | (channel >> 2); };
            const auto rgb = 0xff000000u | (expand(color & 31) << 16) |
                             (expand((color >> 5) & 31) << 8) | expand((color >> 10) & 31);
            require(bus_.native_framebuffer[i] == rgb, "Indexed credits differ from the actual source text-layer PPU frame");
        }
        return native.size();
    }
};
void name_boundaries(eb::GameVersion version, bool retained) {
    // Frozen instructions are retained by the core; only this test's tiny
    // authored input stream is synthetic. No production layout supplies the oracle.
    std::vector<std::uint8_t> image(eb::rom_data(version), eb::rom_data(version) + eb::rom_size(version));
    const std::vector<std::uint8_t> script{4,4,4,4,3,2,2,0x81,0x82,0x83,0,0x7f,0x55,255};
    std::copy(script.begin(), script.end(), image.begin() + 0x288000);
    CreditsContent content;
    content.version = version; content.script = script; content.glyphs.resize(1024);
    CreditsTextScene scene(std::make_shared<const CreditsResources>(std::move(content)));
    Oracle oracle(image, version, 0xe88000);
    std::array<std::uint8_t, 24> seed{};
    if (retained && version == eb::GameVersion::US) {
        seed.fill(0x51);
        scene = CreditsTextScene(std::make_shared<const CreditsResources>(CreditsContent{version, script,
            std::vector<CreditsGlyph>(1024), {}}), seed);
        std::copy(seed.begin(), seed.end(), oracle.bus->work_ram.begin() + 0xb4f9);
    }
    const std::array<std::uint8_t, 6> first{144,145,172,174,175,146};
    const std::array<std::uint8_t, 1> shorter{147};
    std::array<std::uint8_t, 24> full{};
    for (unsigned i = 0; i < full.size(); ++i) full[i] = 128 + i;
    // Zero, six bytes, shortened one byte (retaining the US suffix), and the
    // complete 24-byte nonzero field all run through the real command 4 loop.
    while (scene.state().ticks < 1400) {
        const auto cursor = scene.state().cursor;
        std::span<const std::uint8_t> name;
        if (cursor == 1) name = first;
        else if (cursor == 2) name = shorter;
        else if (cursor >= 3) name = full;
        try {
            require(oracle.publish_next() == scene.publish_next_row(), "One-row foreground publication differs");
            oracle.compare(scene);
            oracle.tick(name); scene.advance_tick(name); oracle.compare(scene);
        } catch (const std::exception& error) {
            throw std::runtime_error(std::string(version == eb::GameVersion::JP ? "JP" : "US") +
                " synthetic name tick=" + std::to_string(oracle.ticks) + " cursor=" +
                std::to_string(cursor) + ": " + error.what());
        }
    }
    require(scene.script_ended() && oracle.publications >= 9, "Synthetic name/line source coverage was vacuous");
    require(std::all_of(scene.tile_canvas().begin(), scene.tile_canvas().end(), [](auto cell) { return cell == 0; }),
            "Synthetic text did not finish its source wipes");
    std::cout << "PASS " << (version == eb::GameVersion::JP ? "JP" : "US") << (retained ? " retained-buffer name boundaries: " : " fresh-buffer name boundaries: ")
              << oracle.ticks << " ticks, " << oracle.publications << " publications, " << oracle.steps << " steps\n";
}
void delayed_publications(eb::GameVersion version) {
    std::vector<std::uint8_t> image(eb::rom_data(version), eb::rom_data(version) + eb::rom_size(version));
    std::vector<std::uint8_t> script;
    for (unsigned i = 0; i < 10; ++i) { script.push_back(2); script.push_back(0x80 + i); script.push_back(0); }
    script.push_back(255);
    std::copy(script.begin(), script.end(), image.begin() + 0x288000);
    CreditsContent content;
    content.version = version; content.script = script; content.glyphs.resize(1024);
    CreditsTextScene scene(std::make_shared<const CreditsResources>(std::move(content)));
    Oracle oracle(image, version, 0xe88000);
    // Delay consumption until the sixteen temporary rows have been reused.
    // All pending publications remain live references, including the first pair.
    for (unsigned tick = 0; tick < 800; ++tick) {
        oracle.tick({}); scene.advance_tick(); oracle.compare(scene);
    }
    require(scene.script_ended() && scene.pending_rows() > 20, "Delayed-ring coverage was vacuous");
    require(scene.publish_next_row() && oracle.publish_next(), "First delayed text row disappeared");
    oracle.compare(scene);
    require(scene.tile_canvas()[29 * 32 + 16] == 0x2488,
            "Delayed publication snapshotted an old glyph instead of resolving the reused row");
    while (oracle.pending()) {
        require(scene.publish_next_row() && oracle.publish_next(), "Delayed publication queue length differs");
        oracle.compare(scene);
    }
    require(!scene.publish_next_row(), "Native queue retained additional publications");
    std::cout << "PASS " << (version == eb::GameVersion::JP ? "JP" : "US") << " delayed composition ring: "
              << oracle.publications << " ordered publications\n";
}
void imported(const eb::GameAssets& assets, bool named) {
    const auto resources = CreditsResources::import(assets.image, assets.version);
    const auto layout = reference_layout(assets.version);
    Oracle oracle(assets.image, assets.version, layout.staff);
    const auto font = oracle.original_font();
    require(resources->script().size() == layout.staff_bytes && resources->script().back() == 255,
            "Imported staff resource extent/end marker differs from the linked source asset");
    for (unsigned i = 0; i < 8; ++i)
        require(resources->palette()[i] == word(assets.image, layout.palette - 0xc00000 + i * 2),
                "Imported staff palette differs");
    require(resources->glyphs().size() == 64 + font.size() / 16, "Imported staff atlas size differs");
    for (unsigned tile = 0; tile < font.size() / 16; ++tile)
        for (unsigned y = 0; y < 8; ++y) for (unsigned x = 0; x < 8; ++x) {
            const unsigned at = tile * 16 + y * 2;
            const unsigned expected = ((font[at] >> (7 - x)) & 1) | (((font[at + 1] >> (7 - x)) & 1) << 1);
            require(resources->glyphs()[tile + 64][y * 8 + x] == expected,
                    "Imported indexed font differs from the original DECOMP routine");
        }
    DisplayOracle display(assets.version, font,
        std::span(assets.image).subspan(layout.palette - 0xc00000, 16));
    CreditsTextScene scene(resources);
    // Valid game-encoded name bytes; supplied at the original callback boundary.
    const std::array<std::uint8_t, 4> name_bytes = assets.version == eb::GameVersion::JP ?
        std::array<std::uint8_t,4>{0x41,0x42,0x43,0x44} : std::array<std::uint8_t,4>{0x71,0x72,0x73,0x74};
    const auto name = named ? std::span<const std::uint8_t>(name_bytes) : std::span<const std::uint8_t>{};
    std::uint64_t pixels = 0, nonzero = 0, ppu_pixels = 0;
    while (!scene.scroll_complete()) {
        const auto before = scene.state();
        const auto previous_publications = oracle.publications;
        try {
            require(oracle.publish_next() == scene.publish_next_row(), "One-row foreground publication differs");
            oracle.compare(scene);
            oracle.tick(name); scene.advance_tick(name); oracle.compare(scene);
            // Compare visible canvas after every foreground publication and
            // callback. Resample indexed output on publication or integer scroll.
            if (oracle.publications != previous_publications || (before.scroll_position >> 16) != (scene.state().scroll_position >> 16))
                pixels += compare_pixels(scene, oracle, font, nonzero);
            if (scene.state().ticks <= 36 || scene.state().ticks % 128 == 0 || scene.scroll_complete())
                ppu_pixels += display.compare(scene, oracle);
        } catch (const std::exception& error) {
            throw std::runtime_error(assets.title + " authored tick=" + std::to_string(oracle.ticks) +
                " cursor=" + std::to_string(scene.state().cursor) + ": " + error.what());
        }
    }
    const auto expected_cursor = named ? layout.staff_bytes - 1 : layout.staff_bytes + 1;
    std::cout << assets.title << (named ? " named" : " unnamed") << " source stop: cursor="
              << longword(oracle.bus->work_ram, layout.script) - layout.staff << " native_cursor="
              << scene.state().cursor << " end_marker_offset=" << layout.staff_bytes - 1
              << " ended=" << scene.script_ended() << " next=" << scene.state().next_credit_position << '\n';
    // With a nonempty name, command 4 contributes 16 pixels and the final FF is
    // exactly at CREDITS_LENGTH. PLAY_CREDITS resets the callback at that limit,
    // before FF is interpreted. Empty name skips 16 pixels, so FF is reached.
    require(scene.script_ended() == !named && scene.state().cursor == expected_cursor &&
            scene.state().next_credit_position == (named ? resources->scroll_length() : 0xffff),
            "Authored source stop/end-marker condition differs");
    require(nonzero > 0 && oracle.publications > 500, "Authored text rendering coverage was vacuous");
    // PLAY_CREDITS disables the callback and holds the final composition for
    // 2000 frames. Retained cells are source state, not an uncompleted wipe.
    oracle.compare(scene);
    const auto final_pixels = scene.indexed_canvas();
    const auto final_visible = std::count_if(final_pixels.begin(), final_pixels.end(), [](auto pixel) { return pixel != 0; });
    const auto final_cells = std::count_if(scene.tile_canvas().begin(), scene.tile_canvas().end(), [](auto cell) { return cell != 0; });
    std::cout << assets.title << (named ? " named" : " unnamed") << " source held composition: cells="
              << final_cells << " visible_pixels=" << final_visible << " pending_rows=" << oracle.pending() << '\n';

    std::cout << "PASS " << assets.title << (named ? " named" : " unnamed") << " complete staff resource: " << oracle.ticks << " ticks, "
              << oracle.publications << " publications, " << oracle.steps << " source steps, " << pixels
              << " indexed pixels (" << nonzero << " nontransparent), " << ppu_pixels << " actual PPU pixels\n";
}
}
int main(int argc, char** argv) {
    try {
        for (auto version : {eb::GameVersion::US, eb::GameVersion::JP}) {
            name_boundaries(version, false);
            if (version == eb::GameVersion::US) name_boundaries(version, true);
            delayed_publications(version);
        }
        for (int arg = 1; arg < argc; ++arg) {
            const auto assets = eb::load_game_assets(argv[arg], eb::asset_profiles());
            imported(assets, false); imported(assets, true);
        }
    } catch (const std::exception& error) { std::cerr << error.what() << '\n'; return 1; }
}
