#include "eb/native/cutscenes/credits.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native::cutscenes;
void require(bool ok, const char* message) { if (!ok) throw std::runtime_error(message); }
std::shared_ptr<const CreditsResources> resources(eb::GameVersion version, std::vector<std::uint8_t> script) {
    CreditsContent content;
    content.version = version;
    content.script = std::move(script);
    content.glyphs.resize(1024);
    for (unsigned i = 1; i < content.glyphs.size(); ++i) content.glyphs[i].fill(1 + i % 3);
    return std::make_shared<const CreditsResources>(std::move(content));
}
void until_cursor(CreditsTextScene& scene, std::size_t cursor, std::span<const std::uint8_t> name = {}) {
    for (unsigned i = 0; i < 10000 && scene.state().cursor < cursor; ++i) scene.advance_tick(name);
    require(scene.state().cursor >= cursor, "Synthetic staff command did not run");
    while (scene.publish_next_row()) {}
}
void commands(eb::GameVersion version) {
    CreditsTextScene scene(resources(version, {1,0x42,0x52,0,2,0x81,0x82,0x83,0,3,2,4,255}));
    const std::array<std::uint8_t, 3> name{0xac,0xae,0xaf};
    scene.advance_tick(name);
    require(scene.state().cursor == (version == eb::GameVersion::JP ? 4u : 0u), "Regional equality threshold changed");
    until_cursor(scene, 4, name);
    require(scene.tile_canvas()[29 * 32 + 15] == 0x2042 && scene.tile_canvas()[29 * 32 + 16] == 0x2052,
            "Small staff line placement/centering changed");
    require(scene.state().next_credit_position == 8 && scene.state().composition_row == 2,
            "Small line state changed");
    until_cursor(scene, 9, name);
    require(scene.tile_canvas()[30 * 32 + 15] == 0x2481 && scene.tile_canvas()[31 * 32 + 15] == 0x2491,
            "Tall staff line's lower row/odd-length centering changed");
    until_cursor(scene, 11, name);
    require(scene.state().next_credit_position == 40 && scene.state().composition_row == 6,
            "Vertical space did not consume a source row pair");
    until_cursor(scene, 12, name);
    if (version == eb::GameVersion::US) {
        require(scene.converted_player_name()[0] == 124 && scene.converted_player_name()[1] == 126 &&
                scene.converted_player_name()[2] == 127, "US punctuation mapping changed");
        require(scene.composition_rows()[6 * 32] == 0x24ec, "US player glyph nibble expansion changed");
    } else require(scene.composition_rows()[6 * 32] == 0x254c, "JP player name was incorrectly US-converted");
    until_cursor(scene, 14, name);
    require(scene.script_ended() && scene.state().next_credit_position == 0xffff, "Staff end sentinel changed");
    while (scene.advance_tick(name)) while (scene.publish_next_row()) {}
    require(scene.state().ticks == (version == eb::GameVersion::JP ? 4520u : 4528u) * 4,
            "Regional quarter-pixel scroll length changed");
    require(std::all_of(scene.tile_canvas().begin(), scene.tile_canvas().end(), [](auto cell) { return cell == 0; }),
            "Ended credits stopped before their final text was wiped");
    const auto final = scene.state();
    require(!scene.advance_tick(name) && scene.state() == final, "Completed scene continued advancing");
}
void names(eb::GameVersion version) {
    CreditsTextScene scene(resources(version, {4,4,255}));
    const std::array<std::uint8_t, 3> first{144,145,172};
    until_cursor(scene, 1, first);
    if (version == eb::GameVersion::US)
        require(scene.converted_player_name()[0] == 96 && scene.converted_player_name()[1] == 65 &&
                scene.converted_player_name()[2] == 124, "US signed-subtraction boundary changed");
    const std::array<std::uint8_t, 1> second{146};
    until_cursor(scene, 2, second);
    if (version == eb::GameVersion::US)
        require(scene.converted_player_name()[0] == 66 && scene.converted_player_name()[1] == 65 &&
                scene.composition_rows()[2 * 32 + 2] == 0x24ec, "Source's retained US name-buffer tail was lost");
    else require(scene.composition_rows()[2 * 32] == 0x2522 && scene.composition_rows()[2 * 32 + 1] == 0,
                 "JP name insertion retained a US conversion tail");
    CreditsTextScene empty(resources(version, {4,255}));
    until_cursor(empty, 1);
    require(empty.state().next_credit_position == 0 && empty.state().composition_row == 2,
            "Empty player name changed spacing or skipped row allocation");
}
void indexed_output() {
    CreditsTextScene scene(resources(eb::GameVersion::JP, {1,0x42,0,255}));
    scene.advance_tick();
    scene.publish_next_row();
    const auto image = scene.indexed_canvas(256);
    require(image[231 * 256 + 128] == 1 && image[230 * 256 + 128] == 0,
            "Indexed glyph sampling/transparent background changed");
    const auto before = scene.state();
    scene.indexed_canvas();
    require(scene.state() == before, "Rendering advanced native credits state");
    // Source BG3VOFS uses displayed scanline1 for output row0. Verify the
    // registration independently at0,1,7,8 pixels and every fractional quarter.
    for (unsigned tick = 1; tick <= 35; ++tick) {
        const auto pixel_scroll = tick / 4;
        if (pixel_scroll == 0 || pixel_scroll == 1 || pixel_scroll == 7 || pixel_scroll == 8) {
            const auto output = scene.indexed_canvas(256);
            const unsigned top = 231 - pixel_scroll;
            require(output[top * 256 + 128] == 1 && output[(top - 1) * 256 + 128] == 0 &&
                    output[(top + 8) * 256 + 128] == 0,
                    "Source scanline registration or quarter-pixel hold changed");
        }
        scene.advance_tick();
        while (scene.publish_next_row()) {}
    }
}
void publication_order() {
    CreditsTextScene scene(resources(eb::GameVersion::JP, {2,0x42,0,255}));
    scene.advance_tick();
    require(scene.pending_rows() == 2 && scene.tile_canvas()[29 * 32 + 16] == 0,
            "Callback published rows before the foreground consumed them");
    const auto state = scene.state();
    require(scene.publish_next_row() && scene.pending_rows() == 1 &&
            scene.tile_canvas()[29 * 32 + 16] == 0x2442 && scene.tile_canvas()[30 * 32 + 16] == 0,
            "Tall text did not publish only its top row first");
    require(scene.publish_next_row() && scene.tile_canvas()[30 * 32 + 16] == 0x2452 &&
            !scene.publish_next_row() && scene.state() == state, "Publishing changed scroll state or lost the lower row");
    CreditsTextScene stalled(resources(eb::GameVersion::JP, {255}));
    bool rejected = false;
    try { while (stalled.advance_tick()) {} } catch (const std::exception&) { rejected = true; }
    require(rejected && stalled.pending_rows() == 127, "Stalled host silently overflowed the source ring");
}
void invalid_content() {
    bool rejected = false;
    try { resources(eb::GameVersion::US, {1,0x42}); } catch (const std::exception&) { rejected = true; }
    require(rejected, "Truncated credits line was silently accepted");
    rejected = false;
    try { resources(static_cast<eb::GameVersion>(255), {255}); } catch (const std::exception&) { rejected = true; }
    require(rejected, "Invalid region was silently interpreted as US");
    rejected = false;
    try { credits_content_layout(static_cast<eb::GameVersion>(255)); } catch (const std::exception&) { rejected = true; }
    require(rejected, "Invalid import region was silently interpreted as US");
    for (const auto version : {eb::GameVersion::US, eb::GameVersion::JP}) {
        for (const auto command : {1,2}) {
            rejected = false;
            try { resources(version, {std::uint8_t(command),0,255}); } catch (const std::exception&) { rejected = true; }
            require(rejected, "Empty source line was misrepresented as a native no-op");
        }
        const auto layout = credits_content_layout(version);
        // A valid terminator just past STAFF_TEXT must not rescue a malformed
        // staff asset by reading the independently declared following asset.
        std::vector<std::uint8_t> image(layout.palette + 16);
        // Valid compressed zero font isolates the script-boundary failure;
        // a broken font must not accidentally satisfy this negative test.
        unsigned packed = layout.compressed_font;
        for (unsigned block = 0; block < layout.font_bytes / 1024; ++block) {
            image[packed++] = 0xe7; image[packed++] = 0xff; image[packed++] = 0;
        }
        image[packed] = 255;
        image[layout.script] = 255;
        require(CreditsResources::import(image, version)->glyphs().size() == 64 + layout.font_bytes / 16,
                "Bounded-import fixture did not contain a valid font");
        std::fill_n(image.begin() + layout.script, layout.script_bytes, 4);
        image[layout.script + layout.script_bytes] = 255;
        rejected = false;
        try { CreditsResources::import(image, version); } catch (const std::exception&) { rejected = true; }
        require(rejected, "Credits import escaped the declared STAFF_TEXT asset extent");
    }
    CreditsTextScene invalid_name(resources(eb::GameVersion::US, {4,255}));
    const std::array<std::uint8_t, 1> unsupported_name{48};
    while (invalid_name.state().scroll_position < 0x10000) invalid_name.advance_tick();
    const auto before = invalid_name.state();
    rejected = false;
    try { invalid_name.advance_tick(unsupported_name); } catch (const std::exception&) { rejected = true; }
    require(rejected && invalid_name.state() == before && invalid_name.pending_rows() == 0,
            "Zero-length converted name did not reject before scene mutation");
    CreditsTextScene unknown(resources(eb::GameVersion::JP, {0x7f,0x33,255}));
    unknown.advance_tick();
    require(unknown.state().cursor == 2 && unknown.state().next_credit_position == 0,
            "Unknown source command did not skip its operand");
    unknown.advance_tick();
    require(unknown.script_ended() && unknown.state().cursor == 4, "End command's extra cursor increment was lost");
}
}
int main() {
    try {
        for (auto version : {eb::GameVersion::US, eb::GameVersion::JP}) { commands(version); names(version); }
        indexed_output(); publication_order(); invalid_content();
        std::cout << "PASS native credits commands, regional names/thresholds, indexed output, complete scroll/wipes and stop semantics\n";
    } catch (const std::exception& error) { std::cerr << error.what() << '\n'; return 1; }
}
