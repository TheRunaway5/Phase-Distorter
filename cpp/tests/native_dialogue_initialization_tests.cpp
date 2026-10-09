#include "eb/native/dialogue/window_graphics.hpp"
#include "eb/native/dialogue/conversation.hpp"
#include "native_dialogue_test_assets.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <string>

namespace {
using namespace eb::native::dialogue;
unsigned checks{};
std::string context;
void check(bool value, const char *message) {
    ++checks;
    if (!value) throw std::runtime_error(message);
}
template<class F> void rejects(F function, const char *message) {
    bool failed = false;
    try { function(); } catch (const std::exception &) { failed = true; }
    check(failed, message);
}
struct Assets {
    dialogue_test_assets::WindowInput input;
    std::shared_ptr<const FontResources> fonts;
    std::shared_ptr<const WindowResources> windows;
    std::shared_ptr<const WindowInitializationResources> initialization;
    explicit Assets(eb::GameVersion version, std::span<const std::uint16_t> custom_status = {}) : input(version) {
        dialogue_test_assets::add_text_fonts(input);
        for (unsigned id = 0; id < input.count; ++id) {
            input.put(input.configs + id * 8, 1);
            input.put(input.configs + id * 8 + 2, 1);
            input.put(input.configs + id * 8 + 4, 28);
            input.put(input.configs + id * 8 + 6, 6);
        }
        const unsigned status = version == eb::GameVersion::US ? 0x45a89 : 0x43868;
        for (unsigned i = 0; i < 49; ++i) input.put(status + i * 2, 0);
        // Spaces do not occupy output columns. Wide and control art must be
        // resolved from the live prepared atlas, not PRINT_LETTER dispatch.
        for (auto [at, code] : std::array<std::pair<unsigned,unsigned>,5>{{
                 {0,0x20},{1,0x12f},{2,1},{3,0x20},{4,0x13f}}})
            input.put(status + at * 2, code);
        if (!custom_status.empty()) {
            check(custom_status.size() < 49, "Synthetic status text lacks room for its terminator");
            for (unsigned i = 0; i < 49; ++i) input.put(status + i * 2, 0);
            for (unsigned i = 0; i < custom_status.size(); ++i) input.put(status + i * 2, custom_status[i]);
        }
        if (version == eb::GameVersion::US) {
            // Battle masks differ visibly from all fixed/control artwork.
            std::fill_n(input.image.begin() + 0x21193a + 17 * 16, 16, 0);
            std::fill_n(input.image.begin() + 0x21193a + 18 * 16, 16, 0xaa);
            std::fill_n(input.image.begin() + 0x21193a + 80 * 16, 16, 0);
            // Tiny width3, all-preserving mask: cold output exposes retained
            // lower rows without adding ink of its own.
            std::fill_n(input.image.begin() + 0x211f3a, 96, 3);
            std::fill_n(input.image.begin() + 0x211f9a, 96 * 8, 255);
        }
        fonts = FontResources::import(input.image, version);
        windows = input.import();
        initialization = WindowInitializationResources::import(input.image, version);
    }
};
const Assets &assets(eb::GameVersion version) {
    static const Assets us(eb::GameVersion::US), jp(eb::GameVersion::JP);
    return version == eb::GameVersion::US ? us : jp;
}
struct Names {
    std::array<std::vector<std::uint8_t>,4> bytes;
    PartyNameInputs view() const {
        PartyNameInputs result;
        for (unsigned i = 0; i < bytes.size(); ++i) result.names[i] = bytes[i];
        return result;
    }
};
Names names(eb::GameVersion version) {
    if (version == eb::GameVersion::US)
        return {{{{0}, {0x61,0}, {0x62,0x61,0}, {0x61,0x61,0x61,0}}}};
    return {{{{0,1,0x61,0xff}, {0x62,0,0x10,0x21}, {3,4,5,6}, {0x71,0x72,0x73,0x74}}}};
}
struct Fixture {
    eb::GameVersion version;
    State state;
    TextOutput output;
    WindowHost windows;
    WindowGraphics graphics;
    explicit Fixture(eb::GameVersion region)
        : version(region), output(assets(region).fonts,state),
          windows(assets(region).windows,state,output),
          graphics(assets(region).initialization,output) {}
    void open(unsigned id = 0) {
        auto operation = windows.begin({WindowAction::Open,WindowId{id},{},0});
        for (unsigned i = 0; i < 32; ++i) {
            if (operation->advance() == OutputProgress::Complete) return;
            operation->respond();
        }
        throw std::runtime_error("Window setup did not terminate");
    }
};
void glyph(TextOutput &output, unsigned character) {
    output.begin_glyph(std::uint16_t(character));
    for (unsigned i = 0; i < 32; ++i) {
        if (output.advance() == OutputProgress::Complete) return;
        output.respond();
    }
    throw std::runtime_error("Output glyph did not terminate");
}
std::vector<ArtworkEffect> publish(WindowGraphics &graphics, ArtworkPublication publication,
                                   ArtworkDelivery delivery = ArtworkDelivery::Copy,
                                   ArtworkDisposition disposition = ArtworkDisposition::Published) {
    const auto before = graphics.frame();
    auto operation = graphics.begin_publication(publication,delivery);
    check(operation->advance(0) == Progress::BudgetExhausted && !operation->effect(),
          "Zero artwork budget executed a publication");
    std::vector<ArtworkEffect> effects;
    for (unsigned i = 0; i < 32; ++i) {
        const auto progress = operation->advance();
        if (progress == Progress::Finished) {
            check(operation->complete() && !operation->effect(), "Finished artwork retained an effect");
            return effects;
        }
        check(progress == Progress::Suspended && operation->effect().has_value(),
              "Artwork operation did not suspend at its typed publication");
        const auto pending = operation->effect();
        const auto pixels = graphics.frame()->pixels;
        check(operation->advance() == Progress::Suspended && operation->effect() == pending &&
                  graphics.frame()->pixels == pixels,
              "Repeated scheduling or frame sampling advanced artwork publication");
        effects.push_back(*pending);
        operation->respond(disposition);
    }
    throw std::runtime_error("Artwork publication did not terminate");
}
std::uint8_t transformed(std::uint8_t source, std::uint8_t backdrop) {
    const auto high = source & 2;
    return std::uint8_t(high | (backdrop & 1) | (high ? 0 : 1));
}
WindowArtwork staged_source(const Assets &a, unsigned tile, unsigned flavor) {
    if (tile >= 16 && tile < 23 && a.input.flavored_for(flavor - 1))
        return a.input.patch[tile - 16];
    if (a.input.version == eb::GameVersion::US && tile >= 0x200) tile -= 0x100;
    return a.input.base.at(tile);
}
void generated_content(eb::GameVersion version) {
    const auto &a = assets(version);
    for (unsigned flavor = 1; flavor <= 5; ++flavor) {
        Fixture f(version);
        const auto input = names(version);
        const auto visible = f.graphics.frame();
        f.graphics.prepare(input.view(),flavor);
        check(f.graphics.frame()->pixels == visible->pixels,
              "Preparation implicitly published artwork");
        const auto template_upper = staged_source(a,7,flavor);
        const auto template_lower = staged_source(a,23,flavor);
        for (unsigned member = 0; member < 4; ++member) {
            const auto actual = f.graphics.party_name(member,true);
            check(actual->width == 32 && actual->height == 16, "Generated party label has wrong geometry");
            if (version == eb::GameVersion::JP) {
                for (unsigned y = 0; y < 16; ++y) for (unsigned x = 0; x < 32; ++x) {
                    const auto code = input.bytes[member][x / 8];
                    const unsigned tile = (code / 16) * 32 + code % 16 + (y / 8) * 16;
                    const auto art = staged_source(a,tile,flavor);
                    const auto offset = (y & 7) * 8 + (x & 7);
                    const auto backdrop = y < 8 ? template_upper[offset] : template_lower[offset];
                    check(actual->pixels[y * 32 + x] == transformed(art[offset],backdrop),
                          "JP raw four-byte name changed zero/control routing or lower template");
                }
            }
        }
        if (version == eb::GameVersion::US) {
            const auto actual = f.graphics.party_name(3,true);
            for (unsigned y = 0; y < 16; ++y) for (unsigned x = 0; x < 32; ++x) {
                // Three full-ink8px masks at pixel2,8,14 with fixed6 advance
                // paint x2..21. Every name tile uses the UPPER template.
                const auto mask = std::uint8_t(x >= 2 && x < 22 ? 1 : 3);
                check(actual->pixels[y * 32 + x] == transformed(mask,template_upper[(y & 7) * 8 + (x & 7)]),
                      "US names lost fixed6 overlap or reused a lower template");
            }
        }
        for (unsigned index = 0; index < 3; ++index) {
            const unsigned code = std::array<unsigned,3>{0x12f,1,0x13f}[index];
            const auto actual = f.graphics.status_label(index,true);
            check(actual->width == 8 && actual->height == 16, "Status label has wrong geometry");
            for (unsigned y = 0; y < 16; ++y) for (unsigned x = 0; x < 8; ++x) {
                const unsigned tile = (code / 16) * 32 + code % 16 + (y / 8) * 16;
                const auto source = staged_source(a,tile,flavor);
                const auto offset = (y & 7) * 8 + x;
                check(actual->pixels[y * 8 + x] == transformed(source[offset],
                          y < 8 ? template_upper[offset] : template_lower[offset]),
                      "Packed status labels lost skipped spaces, wide code or lower template");
            }
        }
    }
}
void brush_preservation() {
    Fixture f(eb::GameVersion::US);
    f.open();
    f.output.set_style({0},{2,2,true,false,false});
    f.output.policy().character_padding = 4;
    for (unsigned i = 0; i < 55; ++i) glyph(f.output,0x61);
    const auto before = f.output.composition_snapshot();
    const auto image_cells = f.output.cells({0});
    std::vector<WindowArtwork> old_images;
    for (const auto &cell : image_cells.cells) old_images.push_back(cell.image->pixels);
    const auto frame = f.output.frame({0});
    const auto pixels = frame->pixels;
    const auto window = f.output.window({0});
    f.state.windows.at({0}).active = {0x12345678,0x87654321,0xbeef};
    const auto registers = f.state.windows;
    const auto last = f.output.last_character();
    const auto indent = f.output.indent_pending();
    const auto redraw = f.output.redraw_pending();
    const auto policy = f.output.policy();
    f.graphics.prepare(names(eb::GameVersion::US).view(),2);
    const auto after = f.output.composition_snapshot();
    check(after.columns.size() == 52 && after.brush_column == 2 && after.fractional_offset == 4 &&
              after.publication_position == 0 && !after.partial_publication,
          "Raw fourth name did not leave its source brush/publication positions");
    for (unsigned column = 26; column < 52; ++column)
        check(after.columns[column] == before.columns[column], "Name preparation cleared retained brush tail");
    for (unsigned column = 3; column < 26; ++column)
        check(std::all_of(after.columns[column].begin(),after.columns[column].end(),[](auto p){return p == 3;}),
              "Name preparation did not clear all26 complete columns");
    for (unsigned y = 0; y < 16; ++y) for (unsigned x = 0; x < 8; ++x) {
        check(after.columns[0][y * 8 + x] == (x < 2 ? 3 : 1), "Name first-column mask differs");
        check(after.columns[1][y * 8 + x] == 1, "Name middle-column mask differs");
        check(after.columns[2][y * 8 + x] == (x < 6 ? 1 : 3), "Name overflow mask differs");
    }
    check(f.output.window({0}) == window && f.state.windows == registers && f.state.focus == WindowId{0} &&
              f.output.last_character() == last && f.output.indent_pending() == indent &&
              f.output.redraw_pending() == redraw,
          "Artwork preparation changed text/window state outside the shared brush");
    check(f.output.policy().instant == policy.instant && f.output.policy().character_padding == policy.character_padding &&
              f.output.policy().text_speed == policy.text_speed && f.output.policy().sound_mode == policy.sound_mode &&
              f.output.policy().prompt_mode == policy.prompt_mode && f.output.policy().allow_overflow == policy.allow_overflow,
          "Name preparation replaced live text policy");
    for (unsigned cell = 0; cell < old_images.size(); ++cell)
        check(image_cells.cells[cell].image->pixels == old_images[cell],
              "Raw brush preparation mutated a previously published text image");
    check(f.output.frame({0})->pixels == pixels && frame->pixels == pixels,
          "Name preparation changed visible text or an immutable frame");
}
void cold_tiny_and_validation() {
    Fixture f(eb::GameVersion::US); f.open();
    f.output.set_style({0},{3,0,false,false,false});
    f.output.policy().character_padding = 0;
    const auto input = names(eb::GameVersion::US);
    f.graphics.prepare(input.view(),1);
    const auto prepared = f.output.composition_snapshot();
    glyph(f.output,0x61);
    const auto after = f.output.composition_snapshot();
    context += " cursor=" + std::to_string(f.output.window({0}).cursor.column) +
               "," + std::to_string(f.output.window({0}).cursor.line) +
               " brush=" + std::to_string(after.brush_column) +
               " fraction=" + std::to_string(after.fractional_offset) +
               " publication=" + std::to_string(after.publication_position) +
               " partial=" + std::to_string(after.partial_publication);
    check(f.output.window({0}).cursor == TextCursor{3,0} && after.brush_column == 2 &&
              after.fractional_offset == 7 && after.publication_position == 23 && after.partial_publication,
          "Cold Tiny did not publish the whole pending raw-name span");
    const auto cells = f.output.cells({0});
    for (unsigned column = 0; column < 3; ++column) for (unsigned pixel = 0; pixel < 64; ++pixel) {
        check(cells.cells[column].image->pixels[pixel] == prepared.columns[column][pixel],
              "Cold Tiny omitted an earlier unpublished name column");
        check(cells.cells[column + cells.geometry.columns].image->pixels[pixel] == prepared.columns[column][64 + pixel],
              "Cold Tiny discarded lower-row brush provenance");
    }
    check(prepared.publication_position == 0 && !prepared.partial_publication,
          "A composition snapshot changed after later output");
    auto invalid = input; invalid.bytes[3] = {0x61,0x61};
    const auto stable = f.output.composition_snapshot();
    const auto art = std::vector<WindowArtwork>(f.graphics.prepared_artwork().begin(),f.graphics.prepared_artwork().end());
    rejects([&]{f.graphics.prepare(invalid.view(),1);}, "Unterminated US name was silently capped");
    rejects([&]{f.graphics.prepare(input.view(),0);}, "Invalid initialization flavor was accepted");
    check(f.output.composition_snapshot() == stable &&
              std::equal(art.begin(),art.end(),f.graphics.prepared_artwork().begin()),
          "Rejected initialization partially mutated brush or artwork");
    auto continued = input; continued.bytes[3] = {0x61,0x61,0x61,0x61,0x61,0x30,0};
    f.graphics.prepare(continued.view(),1);
    const auto continuation = f.output.composition_snapshot();
    check(continuation.brush_column == 4 && continuation.fractional_offset == 6 &&
              continuation.publication_position == 0,
          "US source name stopped at its nominal five-byte field or rejected adjacent record96");
    auto empty = input; empty.bytes[3] = {0,0x61,0x61};
    f.graphics.prepare(empty.view(),1);
    const auto blank = f.output.composition_snapshot();
    check(blank.brush_column == 0 && blank.fractional_offset == 2 &&
              std::all_of(blank.columns[0].begin(),blank.columns[0].end(),[](auto p){return p == 3;}),
          "US name did not stop at its first terminator");
}
void japanese_preservation() {
    Fixture f(eb::GameVersion::JP); f.open(); f.output.set_style({0},{1,0,false,false,false});
    glyph(f.output,0x61);
    const auto brush = f.output.composition_snapshot();
    const auto window = f.output.window({0});
    const auto frame = f.output.frame({0});
    const auto cells = f.output.cells({0});
    const auto before = frame->pixels;
    auto input = names(eb::GameVersion::JP);
    input.bytes[3].push_back(0xff);
    f.graphics.prepare(input.view(),4);
    check(f.output.composition_snapshot() == brush && f.output.window({0}) == window &&
              f.output.saturn_composition_active() && f.output.frame({0})->pixels == before && frame->pixels == before,
          "JP artwork preparation touched the independent Saturn brush/window");
    const auto label = f.graphics.party_name(3,true)->pixels;
    input.bytes[3].pop_back();
    f.graphics.prepare(input.view(),4);
    check(f.graphics.party_name(3,true)->pixels == label, "JP name consumed a fifth byte");
    input.bytes[2].resize(3);
    rejects([&]{f.graphics.prepare(input.view(),4);}, "Short Japanese raw name was accepted");
    check(f.output.composition_snapshot() == brush, "Rejected JP name changed Saturn state");
}
void title_then_tiny() {
    for (unsigned count : {3u,21u}) {
        Fixture f(eb::GameVersion::US); f.open();
        f.output.set_style({0},{3,0,false,false,false});
        f.output.policy().character_padding = 0;
        const auto before = f.output.composition_snapshot();
        auto operation = f.windows.begin({WindowAction::Title,WindowId{0},
                                           std::vector<std::uint8_t>(count,0x61),count});
        unsigned waits = 0;
        while (operation->advance() != OutputProgress::Complete) {
            check(operation->effect()->kind == WindowEffectKind::FrameWait,
                  "Raw title composition emitted a glyph footer");
            ++waits; operation->respond();
        }
        const auto prepared = f.output.composition_snapshot();
        const auto first = (before.brush_column + 1) % 52;
        const auto raw_end = (first * 8 + count * 6) % 416;
        check(waits == 2 && prepared.publication_position == first * 8 &&
                  prepared.brush_column == raw_end / 8 && prepared.fractional_offset == raw_end % 8 &&
                  !prepared.partial_publication,
              "Title raw composition lost its separate original publication cursor");
        glyph(f.output,0x61);
        const auto end = (raw_end + 3) % 416;
        const auto columns = ((end / 8 + 52 - first) % 52) + 1;
        const auto published = f.output.composition_snapshot();
        check(f.output.window({0}).cursor == TextCursor{std::uint16_t(columns),0} &&
                  published.publication_position == end && published.partial_publication,
              "First glyph after a title omitted earlier raw title columns");
    }
}
void publication_order_and_live_queue(eb::GameVersion version) {
    Fixture f(version); auto input = names(version); f.graphics.prepare(input.view(),1);
    const auto generated = f.graphics.party_name(3,true)->pixels;
    const auto common = std::vector<ArtworkEffect>{{ArtworkDelivery::Copy,0,0x45},
        {ArtworkDelivery::Copy,0x4f,6},{ArtworkDelivery::Copy,0x5f,11},{ArtworkDelivery::Copy,0x70,10},
        {ArtworkDelivery::Copy,0x80,1},{ArtworkDelivery::Copy,0x90,1}};
    if (version == eb::GameVersion::US) {
        auto expected = common; expected.insert(expected.begin(),{ArtworkDelivery::Copy,0x200,0x180});
        check(publish(f.graphics,ArtworkPublication::GeneratedThenCommon) == expected,
              "US mode1 artwork did not publish generated images before common ranges");
        check(f.graphics.party_name(3)->pixels == generated, "Generated source publication omitted party images");
        const auto published = f.graphics.party_name(3);
        input.bytes[3] = {0}; f.graphics.prepare(input.view(),1);
        check(publish(f.graphics,ArtworkPublication::Common) == common &&
                  f.graphics.party_name(3)->pixels == generated && published->pixels == generated,
              "US common-only publication changed generated labels or an old sample");
        expected = common; expected.push_back({ArtworkDelivery::Copy,0x200,0x180});
        check(publish(f.graphics,ArtworkPublication::CommonThenGenerated) == expected,
              "US mode2 artwork did not publish common ranges before generated images");
    } else {
        check(publish(f.graphics,ArtworkPublication::All) ==
                  std::vector<ArtworkEffect>{{ArtworkDelivery::Copy,0,0x380}},
              "JP artwork publication did not preserve the whole prepared range");
    }
    const auto old_frame = f.graphics.frame(); const auto old_pixels = old_frame->pixels;
    const auto mode = version == eb::GameVersion::US ? ArtworkPublication::GeneratedThenCommon : ArtworkPublication::All;
    const auto effects = publish(f.graphics,mode,ArtworkDelivery::Copy,ArtworkDisposition::Queued);
    check(!effects.empty() && f.graphics.pending_publications() == effects.size() &&
              f.graphics.frame()->pixels == old_pixels,
          "Queued artwork became visible before transfer completion");
    const auto brush = f.output.composition_snapshot();
    auto none = f.graphics.begin_publication(ArtworkPublication::None,ArtworkDelivery::Synchronized);
    check(none->advance() == Progress::Finished && none->complete() && !none->effect() &&
              f.graphics.pending_publications() == effects.size() && f.graphics.frame()->pixels == old_pixels &&
              f.output.composition_snapshot() == brush,
          "No-op source publication waited for or consumed an older pending copy");
    input = names(version);
    input.bytes[3] = version == eb::GameVersion::US ? std::vector<std::uint8_t>{0x62,0} :
                                                     std::vector<std::uint8_t>{0,0,0,0};
    f.graphics.prepare(input.view(),2);
    const auto newest = f.graphics.party_name(3,true)->pixels;
    unsigned count = 0;
    while (f.graphics.publish_next()) ++count;
    check(count == effects.size() && !f.graphics.pending_publications() &&
              f.graphics.party_name(3)->pixels == newest && old_frame->pixels == old_pixels,
          "Queued publication captured stale artwork or mutated an immutable frame");
}
void synchronized_service(eb::GameVersion version) {
    Fixture f(version); auto input = names(version); f.graphics.prepare(input.view(),1);
    const auto mode = version == eb::GameVersion::US ? ArtworkPublication::GeneratedThenCommon : ArtworkPublication::All;
    auto operation = f.graphics.begin_publication(mode,ArtworkDelivery::Synchronized);
    check(operation->advance() == Progress::Suspended && operation->effect()->cell_count == 0x120,
          "Synchronized artwork did not split its first original transfer chunk");
    operation->respond(ArtworkDisposition::Queued);
    const auto before = f.graphics.frame()->pixels;
    check(operation->advance() == Progress::BudgetExhausted && !operation->effect() &&
              !operation->complete() && f.graphics.frame()->pixels == before,
          "Synchronized transfer advanced before service completion or invented a tick");
    rejects([&]{f.graphics.prepare(input.view(),1);}, "Root initialization bypassed a pending transfer owner");
    input.bytes[3] = version == eb::GameVersion::US ? std::vector<std::uint8_t>{0x62,0} :
                                                     std::vector<std::uint8_t>{0,0,0,0};
    f.graphics.prepare_nested(input.view(),2,*operation);
    const auto expected = f.graphics.party_name(3,true)->pixels;
    check(f.graphics.publish_next(), "Synchronized service lost its pending range");
    unsigned effects = 1;
    while (operation->advance() != Progress::Finished) {
        check(operation->effect() && operation->effect()->cell_count <= 0x120,
              "Synchronized transfer exceeded its source chunk bound");
        ++effects; operation->respond();
    }
    check(effects == (version == eb::GameVersion::US ? 8u : 4u) &&
              f.graphics.party_name(3)->pixels == expected && !f.graphics.pending_publications(),
          "Synchronized publication lost regional split count or live staged input");
}
void status_alias_and_wrapping(eb::GameVersion version) {
    // Label16 upper aliases label0 lower. Its character0160 reads label0
    // upper then writes that aliased lower BEFORE reading the lower source.
    std::vector<std::uint16_t> codes(18,1);
    codes[0] = 0x61; codes[16] = 0x160; codes[17] = 0x1020;
    Assets a(version,codes); State state; TextOutput output(a.fonts,state);
    WindowGraphics graphics(a.initialization,output);
    graphics.prepare(names(version).view(),1);
    const auto upper = staged_source(a,0xc1,1);
    const auto lower = staged_source(a,0xd1,1);
    const auto template_upper = staged_source(a,7,1), template_lower = staged_source(a,23,1);
    const auto alias = graphics.status_label(16,true);
    bool distinguishing = false;
    for (unsigned i = 0; i < 64; ++i) {
        const auto first = transformed(upper[i],template_upper[i]);
        check(alias->pixels[i] == transformed(first,template_upper[i]) &&
                  alias->pixels[64 + i] == transformed(first,template_lower[i]),
              "Status upper publication did not precede an aliased lower source read");
        distinguishing = distinguishing || (upper[i] & 2) != (lower[i] & 2);
    }
    check(distinguishing, "Status alias fixture lacks distinct original upper/lower art");
    const auto wrapped = graphics.status_label(17,true);
    for (unsigned y = 0; y < 16; ++y) for (unsigned x = 0; x < 8; ++x) {
        const unsigned at = (y & 7) * 8 + x;
        const auto art = staged_source(a,y < 8 ? 0x40 : 0x50,1);
        check(wrapped->pixels[y * 8 + x] == transformed(art[at],y < 8 ? template_upper[at] : template_lower[at]),
              "Status full-word character lost its source16-bit byte-offset wrap");
    }
}
void retained_artwork(eb::GameVersion version) {
    const auto &a = assets(version); State state; TextOutput output(a.fonts,state);
    std::vector<WindowArtwork> seed(1184);
    for (unsigned i = 0; i < seed.size(); ++i) seed[i].fill(std::uint8_t((i / 256 + i / 16) & 3));
    WindowGraphics graphics(a.initialization,output,seed);
    const auto published = graphics.frame();
    check(std::all_of(published->pixels.begin(),published->pixels.end(),[](auto p){return p == 0;}),
          "Retained staging seed was implicitly visible before publication");
    graphics.prepare(names(version).view(),1);
    const auto stage = graphics.prepared_artwork();
    check(stage.size() == 1184 && stage[0x2e0] == seed[version == eb::GameVersion::US ? 0x1e0 : 0x2e0],
          "Initialization invented blank reserved/title staging artwork");
    if (version == eb::GameVersion::US) {
        check(stage[0x390] == seed[0x290], "Overlapping relocation repeated a segment instead of copying backward");
        const auto prior = std::vector<WindowArtwork>(stage.begin(),stage.end());
        graphics.prepare(names(version).view(),2);
        check(graphics.prepared_artwork()[0x390] == prior[0x290],
              "Reload discarded retained staging from the preceding preparation");
    }
    for (unsigned i = 0x320; i < 0x380; ++i)
        check(graphics.prepared_artwork()[i] == WindowArtwork{}, "Initializer failed to clear the generated tail");
    rejects([&]{WindowGraphics invalid(a.initialization,output,std::span(seed).first(1183));},
            "Truncated retained staging seed was accepted");
    seed[0][0] = 4;
    rejects([&]{WindowGraphics invalid(a.initialization,output,seed);},
            "Retained staging accepted a non-indexed pixel");
}
void complete_window(WindowHost::Operation &operation) {
    for (unsigned i = 0; i < 32; ++i) {
        if (operation.advance() == OutputProgress::Complete) return;
        operation.respond();
    }
    throw std::runtime_error("Bound window helper did not finish");
}
void binding_and_images(eb::GameVersion version) {
    std::weak_ptr<WindowGraphics> lifetime;
    {
        const auto &a = assets(version); State state; TextOutput output(a.fonts,state);
        WindowHost windows(a.windows,state,output);
        auto graphics = std::make_shared<WindowGraphics>(a.initialization,output);
        rejects([&]{graphics->raw_fixed_tail();}, "Unbound graphics invented a fixed window donor");
        rejects([&]{graphics->raw_fixed_tail_identity();}, "Unbound graphics invented a fixed window content identity");
        lifetime = graphics; windows.set_graphics(graphics);
        check(graphics->raw_fixed_tail().data() == a.windows->raw_fixed_tail().data() &&
                  graphics->raw_fixed_tail_identity() == a.windows->raw_fixed_tail_identity(),
              "Bound window graphics failed to retain its actual immutable fixed donor owner");
        rejects([&]{windows.set_graphics(graphics);}, "Window graphics could be rebound after identity publication");
        auto open = windows.begin({WindowAction::Open,WindowId{0},{},0}); complete_window(*open);
        rejects([&]{windows.load_artwork(2);}, "Legacy art loader bypassed bound staged publication");
        output.policy().instant = true;
        // Wide US menu art enters C43F77 directly; PRINT_LETTER would instead
        // treat100 as a masked variable character in its selected font.
        output.begin_fixed_glyph(version == eb::GameVersion::US ? 0x100 : 0x14f);
        while (output.advance() != OutputProgress::Complete) output.respond();
        const auto cells = output.cells({0});
        const auto first = version == eb::GameVersion::US ? 0x200u : 0x28fu;
        const auto before = output.frame({0}); const auto old_pixels = before->pixels;
        check(std::all_of(cells.cells[0].image->pixels.begin(),cells.cells[0].image->pixels.end(),
                          [](auto p){return p == 0;}),
              "Bound fixed glyph bypassed its unpublished artwork identity");
        graphics->prepare(names(version).view(),2);
        check(output.frame({0})->pixels == old_pixels, "Preparation changed a bound fixed glyph before publication");
        const auto mode = version == eb::GameVersion::US ? ArtworkPublication::GeneratedThenCommon : ArtworkPublication::All;
        publish(*graphics,mode);
        const auto stage = graphics->prepared_artwork();
        check(cells.cells[0].image->pixels == stage[first] &&
                  cells.cells[cells.geometry.columns].image->pixels == stage[first + 16],
              "Fixed publication lost full-word atlas provenance or its lower half");
        check(output.cells({0}).cells[0].image == cells.cells[0].image && before->pixels == old_pixels &&
                  output.frame({0})->pixels != old_pixels,
              "Artwork reload replaced a live image identity or changed an immutable frame");
        // Existing blank cells bind the literal upper space tile, even on
        // lower text rows. Their identities update on the common publication.
        check(cells.cells[1].image->pixels == stage[0x40] &&
                  cells.cells[cells.geometry.columns + 1].image->pixels == stage[0x40],
              "Blank window cells lost literal shared space-image provenance");
        graphics.reset();
        check(!lifetime.expired(), "Bound output failed to retain its artwork owner");
    }
    check(lifetime.expired(), "Artwork binding created an ownership cycle");
    Fixture late(version); late.open();
    auto late_graphics = std::make_shared<WindowGraphics>(assets(version).initialization,late.output);
    const auto before = late.output.frame({0})->pixels;
    rejects([&]{late.windows.set_graphics(late_graphics);}, "Graphics binding accepted already-defined windows");
    check(late.output.frame({0})->pixels == before, "Failed late binding changed existing text");
    Fixture other(version);
    rejects([&]{other.windows.set_graphics(late_graphics);}, "Window graphics crossed authoritative output owners");
}
std::shared_ptr<const Program> conversation_program(eb::GameVersion version) {
    return std::make_shared<const Program>(version,std::vector<ContentBlock>{{0,0,{0x61,2}}},
                                          std::vector<Location>{{0,0}});
}
void ownership_and_callbacks(eb::GameVersion version) {
    Fixture f(version); f.open(); f.output.policy().instant = false;
    f.output.policy().text_speed = 0; f.output.policy().sound_mode = 3;
    f.graphics.prepare(names(version).view(),1);
    const auto art = std::vector<WindowArtwork>(f.graphics.prepared_artwork().begin(),f.graphics.prepared_artwork().end());
    f.output.begin_glyph(0x61);
    const auto brush = f.output.composition_snapshot();
    rejects([&]{f.graphics.prepare(names(version).view(),2);},
            "Root artwork preparation entered an unfinished raw glyph");
    check(f.output.composition_snapshot() == brush &&
              std::equal(art.begin(),art.end(),f.graphics.prepared_artwork().begin()),
          "Rejected raw-owner preparation partially changed staging or brush");
    while (f.output.advance() != OutputProgress::Complete) f.output.respond();
    Conversation parent(conversation_program(version),f.windows);
    parent.start(EntryId{0});
    check(parent.advance() == Progress::Suspended && parent.event() &&
              std::holds_alternative<TextEffect>(*parent.event()) &&
              std::get<TextEffect>(*parent.event()).kind == TextEffectKind::WindowTick,
          "Conversation fixture did not reach its source glyph callback");
    const auto event = parent.event();
    const auto cursor = f.output.window({0}).cursor;
    const auto visible = f.output.frame({0})->pixels;
    f.graphics.prepare_nested(names(version).view(),2,parent);
    check(parent.event() == event && parent.advance(0) == Progress::Suspended &&
              f.output.window({0}).cursor == cursor && f.output.frame({0})->pixels == visible,
          "Synchronous nested initialization acknowledged or replaced its parent glyph");
    const auto mode = version == eb::GameVersion::US ? ArtworkPublication::GeneratedThenCommon : ArtworkPublication::All;
    auto child = f.graphics.begin_publication_nested(mode,parent);
    check(child->advance() == Progress::Suspended, "Nested artwork publication did not own its transfer effect");
    const auto held = f.output.composition_snapshot();
    rejects([&]{parent.advance(0);}, "Parent advanced while nested artwork owned output");
    rejects([&]{parent.respond();}, "Parent acknowledged its callback before artwork return");
    rejects([&]{f.output.begin_glyph(0x61);}, "Raw output bypassed nested artwork ownership");
    check(f.output.composition_snapshot() == held, "Out-of-order rejection changed the shared composition");
    child->respond();
    while (child->advance() != Progress::Finished) child->respond();
    check(parent.event() == event && parent.advance() == Progress::Suspended,
          "Artwork completion implicitly acknowledged its suspended parent");
    parent.respond();
    check(parent.advance() == Progress::Finished, "Parent did not resume after explicit callback acknowledgement");
    auto abandoned = f.graphics.begin_publication(mode);
    check(abandoned->advance() == Progress::Suspended, "Abandonment fixture did not acquire an active publication");
    const auto frame = f.graphics.frame()->pixels; abandoned.reset();
    rejects([&]{f.graphics.prepare(names(version).view(),1);}, "Abandoned artwork left execution resumable");
    rejects([&]{f.output.begin_glyph(0x61);}, "Abandoned artwork did not poison shared text execution");
    check(f.graphics.frame()->pixels == frame, "Read-only frame sampling failed after abandoned publication");
}
} // namespace
int main() {
    try {
        for (auto version : {eb::GameVersion::US,eb::GameVersion::JP}) {
            context = version == eb::GameVersion::US ? "US generated" : "JP generated";
            generated_content(version);
            context += " publication"; publication_order_and_live_queue(version);
            context += " synchronized"; synchronized_service(version);
            context += " status alias"; status_alias_and_wrapping(version);
            context += " retained"; retained_artwork(version);
            context += " binding"; binding_and_images(version);
            context += " ownership"; ownership_and_callbacks(version);
        }
        context = "US brush"; brush_preservation();
        context = "US cold Tiny"; cold_tiny_and_validation();
        context = "JP preservation"; japanese_preservation();
        context = "US title publication"; title_then_tiny();
        std::cout << "PASS " << checks << " native initialization, brush, generated artwork and publication checks\n";
        return 0;
    } catch (const std::exception &error) {
        std::cerr << context << ": " << error.what() << '\n'; return 1;
    }
}
