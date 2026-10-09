#include "native_dialogue_test_assets.hpp"
#include "../src/native/dialogue/detail/hal.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <string>

namespace {
using namespace eb::native::dialogue;
unsigned checks{};
void check(bool ok, const char* message) { ++checks; if (!ok) throw std::runtime_error(message); }
template<class F> void rejects(F function, const char* message) {
    bool rejected = false;
    try { function(); } catch (const std::exception&) { rejected = true; }
    check(rejected,message);
}
using Fixture = dialogue_test_assets::WindowInput;
using dialogue_test_assets::pattern;
unsigned prompt_offset(eb::GameVersion version) {
    return version == eb::GameVersion::JP ? 0x03e3f8 : 0x03e416;
}
void resources(eb::GameVersion version) {
    Fixture f(version);
    const unsigned tail_offset = version == eb::GameVersion::JP ? 0x040b34 : 0x040be8;
    std::array<std::uint8_t,64> raw_tail;
    for (unsigned cell = 0; cell < 32; ++cell) {
        f.put(tail_offset + cell * 2,f.descriptor(cell % 4,cell % 4));
        raw_tail[cell * 2] = f.image[tail_offset + cell * 2];
        raw_tail[cell * 2 + 1] = f.image[tail_offset + cell * 2 + 1];
    }
    // Deliberately differ from original descriptor constants: importing data
    // must preserve each phase's independent attributes, not recreate them.
    constexpr std::array<unsigned,3> prompt_tiles{20,21,17};
    constexpr std::array<unsigned,3> prompt_palettes{7,2,5};
    constexpr std::array<bool,3> prompt_priorities{true,false,true};
    constexpr std::array<bool,3> prompt_horizontal{false,true,true};
    constexpr std::array<bool,3> prompt_vertical{false,true,false};
    for (unsigned phase = 0; phase < 3; ++phase)
        f.put(prompt_offset(version) + phase * 2,prompt_tiles[phase] | prompt_palettes[phase] << 10 |
              (prompt_priorities[phase] ? 0x2000 : 0) | (prompt_horizontal[phase] ? 0x4000 : 0) |
              (prompt_vertical[phase] ? 0x8000 : 0));
    const auto native = f.import();
    check(native->raw_fixed_tail_identity() == 0xc00000u + tail_offset &&
          std::equal(raw_tail.begin(),raw_tail.end(),native->raw_fixed_tail().begin()),
          "Fixed window transfer lost its regional raw donor bytes or immutable content identity");
    check(native->version() == version && native->configuration_count() == f.count &&
          native->configurations().size() == f.count,"Window region or configuration extent differs");
    for (unsigned id = 0; id < f.count; ++id)
        check(native->configuration(id) == Fixture::expected_config(id),"Imported window geometry was normalized or indexed incorrectly");
    const std::array<WindowBorder,5> roles{WindowBorder::Corner,WindowBorder::OverlapCorner,WindowBorder::Horizontal,
                                         WindowBorder::Vertical,WindowBorder::TitleJoin};
    const std::array<unsigned,5> source_tiles{16,19,17,18,22};
    for (unsigned flavor = 0; flavor < 5; ++flavor) {
        check(native->uses_flavoured_art(flavor + 1) == f.flavored_for(flavor),"Regional flavored-art condition differs");
        for (unsigned i = 0; i < roles.size(); ++i)
            check(native->border(roles[i],flavor + 1) == f.expected_art(source_tiles[i],flavor),
                  "Imported border pixels differ from their independent synthetic source artwork");
        for (unsigned frame = 0; frame < 4; ++frame) for (unsigned cell = 0; cell < 4; ++cell) {
            const unsigned row = 3 - frame, descriptor = f.descriptor(row,cell);
            const auto& tile = native->pagination(frame,flavor + 1)[cell];
            check(tile.pixels == f.expected_art(descriptor & 0x3ff,flavor) && tile.palette == ((row + cell) % 8) &&
                  tile.priority == bool((row + cell) & 1) && tile.flip_horizontal == bool(cell & 1) &&
                  tile.flip_vertical == bool(row & 1),"Pagination ignored its imported pointer, relocation, artwork or orientation");
        }
        for (unsigned phase = 0; phase < 3; ++phase) {
            const auto& tile = native->prompt(phase,flavor + 1);
            check(tile.pixels == f.expected_art(prompt_tiles[phase],flavor) &&
                  tile.palette == prompt_palettes[phase] && tile.priority == prompt_priorities[phase] &&
                  tile.flip_horizontal == prompt_horizontal[phase] && tile.flip_vertical == prompt_vertical[phase],
                  "Prompt phases ignored imported artwork, regional flavor condition or independent attributes");
        }
        for (unsigned index = 0; index < 32; ++index) {
            const auto normal = index ? Fixture::color((4 - flavor) * 32 + index) : 0;
            const auto incapacitated = index ? Fixture::color(160 + index) : 0;
            check(native->palette(flavor + 1)[index] == normal && native->palette(flavor + 1,false,true)[index] == normal &&
                  native->palette(flavor + 1,true,true)[index] == normal &&
                  native->palette(flavor + 1,true,false)[index] == incapacitated,
                  "Full palette, transparent zero or incapacitated/disabled-transition rule differs");
        }
        for (unsigned tick : {0u,3u,4u,7u,8u,255u,256u,65535u}) for (unsigned color = 0; color < 4; ++color)
            check(native->animated_palette5(flavor + 1,tick)[color] ==
                  Fixture::color((4 - flavor) * 32 + (tick & 4 ? 4 : 20) + color),
                  "Palette 5 animation did not retain its independent logical-frame phase");
    }
    check(native->palette(0,true,false) == native->palette(5,true,false),
          "Incapacitated override unnecessarily read an unused flavor selector");
    if (version == eb::GameVersion::JP) {
        for (unsigned code = 32; code < 256; ++code)
            check(native->japanese_title_glyph(std::uint16_t(code)) == pattern(code),"Japanese title code or two-bit art differs");
    } else rejects([&]{native->japanese_title_glyph(32);},"US resources exposed Japanese title art");
    const auto held_config = native->configuration(7);
    const auto held_border = native->border(WindowBorder::Corner,2);
    const auto held_palette = native->palette(1);
    const auto held_page = native->pagination(1,2);
    const auto held_prompt = native->prompt(2,2);
    std::fill(f.image.begin(),f.image.end(),0);
    check(native->configuration(7) == held_config && native->border(WindowBorder::Corner,2) == held_border &&
          native->palette(1) == held_palette && native->pagination(1,2) == held_page &&
          native->prompt(2,2) == held_prompt &&
          std::equal(raw_tail.begin(),raw_tail.end(),native->raw_fixed_tail().begin()),
          "Window resources retained borrowed source-image memory");
    rejects([&]{native->configuration(f.count);},"Configuration read passed its declared table");
    rejects([&]{native->border(WindowBorder::Corner,0);},"Flavor zero was treated as a valid flavor");
    rejects([&]{native->border(WindowBorder(99),1);},"Unknown semantic border role was accepted");
    rejects([&]{native->pagination(4,1);},"Pagination read passed its declared four frames");
    rejects([&]{native->prompt(3,1);},"Prompt read passed its declared three decorations");
    rejects([&]{native->prompt(0,0);},"Prompt accepted flavor zero");
    rejects([&]{native->prompt(0,6);},"Prompt read passed its declared flavor table");
    rejects([&]{native->animated_palette5(6,0);},"Palette animation passed its declared flavor table");
    rejects([&]{native->japanese_title_glyph(31);},"Title read preceded its imported font");
    rejects([&]{native->japanese_title_glyph(256);},"Title read passed its imported font");
}
void invalid_resources(eb::GameVersion version) {
    const Fixture valid(version);
    const auto bad = [&](auto change, const char* message) { auto f = valid; change(f); rejects([&]{f.import();},message); };
    bad([](auto& f){f.image.resize(0x200000);},"Missing art asset was accepted");
    bad([](auto& f){f.image[0x200000]=255;},"Premature compressed font terminator was accepted");
    bad([](auto& f){f.image[f.flavored + 75]=0;},"Unterminated flavored art was accepted");
    bad([](auto& f){f.put(f.configs + 4,2);},"Zero-width content rectangle was accepted");
    bad([](auto& f){f.put(f.configs,32);},"Outer rectangle beyond source scene was accepted");
    bad([](auto& f){f.put(f.properties,0xffff);},"Flavor palette outside declared resource was accepted");
    bad([](auto& f){f.put32(f.pointers,0xc00000 + f.rows + 1);},"Misaligned pagination row was accepted");
    bad([](auto& f){f.put32(f.pointers,0xc00000 + f.rows + 32);},"Pagination pointer escaped the declared row data");
    bad([](auto& f){f.put32(f.pointers,0x7e0000);},"Pagination pointer was not an imported content reference");
    bad([](auto& f){f.put(f.rows,0x03ff);},"Pagination accessed unimported/generated artwork");
    bad([](auto& f){f.put(prompt_offset(f.version) + 4,0x03ff);},"Prompt accessed unimported/generated artwork");
    rejects([&]{WindowResources::import(valid.image,eb::GameVersion(99));},"Unsupported resource region was accepted");
}
void bounded_hal() {
    using eb::native::dialogue::detail::decode_hal_exact;
    const std::vector<std::uint8_t> packed{3,1,0x96,0x20,0x80,0x23,0x55,0x41,0x12,0x34,0x62,0xfe,
        0x82,0,0,0xa1,0,1,0xc2,0,3,255};
    const std::vector<std::uint8_t> expected{1,0x96,0x20,0x80,0x55,0x55,0x55,0x55,0x12,0x34,0x12,0x34,
        0xfe,0xff,0,1,0x96,0x20,0x69,0x04,0x80,0x20,0x96};
    check(decode_hal_exact(packed,expected.size()) == expected,"Bounded HAL command meanings changed during extraction");
    const std::vector<std::uint8_t> overlap{0,0xab,0x84,0,0,255};
    check(decode_hal_exact(overlap,6) == std::vector<std::uint8_t>(6,0xab),"HAL forward overlapping copy lost newly decoded bytes");
    const std::vector<std::uint8_t> extended{0xe4,0x20,7,255};
    check(decode_hal_exact(extended,33) == std::vector<std::uint8_t>(33,7),"HAL extended count differs");
    rejects([&]{decode_hal_exact(packed,expected.size() - 1);},"HAL output crossed the declared extent");
    rejects([&]{decode_hal_exact(packed,expected.size() + 1);},"HAL short output was accepted");
    const std::vector<std::pair<std::vector<std::uint8_t>,unsigned>> invalid{
        {{0x80,0,0,255},1}, {{0,1,0xc1,0,0,255},3}, {{0xfc,0,255},1}, {{255,0},0}, {{0xe4},33}};
    for (const auto& [bytes, extent] : invalid)
        rejects([&]{decode_hal_exact(bytes,extent);},"Malformed bounded HAL resource was accepted");
}
}
int main() {
    try {
        bounded_hal();
        for (auto version : {eb::GameVersion::US,eb::GameVersion::JP}) { resources(version); invalid_resources(version); }
        std::cout << "PASS " << checks << " immutable native window resource, regional artwork, prompt, palette, title and import-bound checks\n";
    } catch (const std::exception& error) { std::cerr << error.what() << '\n'; return 1; }
}
