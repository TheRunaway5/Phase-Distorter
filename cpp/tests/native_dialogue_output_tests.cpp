#include "eb/native/dialogue/fonts.hpp"
#include "eb/native/dialogue/output.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native::dialogue;
unsigned checks{};
void check(bool ok, const char *message) {
    ++checks;
    if (!ok)
        throw std::runtime_error(message);
}
template <class F> void rejects(F f, const char *message) {
    bool failed = false;
    try {
        f();
    } catch (const std::exception &) {
        failed = true;
    }
    check(failed, message);
}
// Synthetic content in the independently recorded linked font ranges. The
// fixture contains no original font artwork; the source-routine oracle is a
// separate executable. Exact-sized HAL encoding also exercises normal import.
std::shared_ptr<const FontResources> fonts(eb::GameVersion version) {
    const bool jp = version == eb::GameVersion::JP;
    std::vector<std::uint8_t> image(0x300000), fixed(jp ? 0x2a00 : 0x1a00, 255);
    for (unsigned code : {26u, 27u, 34u, 47u, 65u})
        for (unsigned y = 0; y < 16; ++y) {
            const auto at = ((code & 0xf0) * 2 + (code & 15)) * 16 + (y / 8) * 256 + (y & 7) * 2;
            if (at + 1 < (jp ? 4138u : 1803u))
                fixed[at + 1] = 0;
        }
    unsigned at = 0x200000, out = 0, literal = jp ? 4138 : 1803;
    while (out < literal) {
        const auto count = std::min(32u, literal - out);
        image[at++] = count - 1;
        for (unsigned i = 0; i < count; ++i)
            image[at++] = fixed[out++];
    }
    while (out < fixed.size()) {
        const auto count = std::min(1024u, unsigned(fixed.size()) - out);
        if (count <= 32)
            image[at++] = 0x20 | (count - 1);
        else {
            image[at++] = 0xe4 | ((count - 1) >> 8);
            image[at++] = count - 1;
        }
        image[at++] = 255;
        out += count;
    }
    image[at++] = 255;
    check(at == 0x200000 + (jp ? 0x10c2 : 0x754), "Synthetic font compressed extent changed");
    const auto put = [&](unsigned p, unsigned value, unsigned bytes) {
        while (bytes--) {
            image[p++] = value;
            value >>= 8;
        }
    };
    if (!jp) {
        constexpr std::array<unsigned, 5> metrics{0x210c7a, 0x201359, 0x2118da, 0x211f3a, 0x21229a};
        constexpr std::array<unsigned, 5> art{0x210cda, 0x2013b9, 0x21193a, 0x211f9a, 0x2122fa};
        constexpr std::array<unsigned, 5> stride{32, 32, 16, 8, 32}, height{16, 16, 16, 8, 16};
        constexpr std::array<unsigned, 5> advance{5, 7, 6, 3, 9};
        for (unsigned font = 0; font < 5; ++font) {
            const auto entry = 0x3f054 + font * 12;
            put(entry, metrics[font] + 0xc00000, 4);
            put(entry + 4, art[font] + 0xc00000, 4);
            put(entry + 8, stride[font], 2);
            put(entry + 10, height[font], 2);
            std::fill_n(image.begin() + metrics[font], 96, advance[font]);
            image[metrics[font] + 35] = 0;
            std::fill_n(image.begin() + art[font], 95 * stride[font] + 34 * height[font], 255);
            for (unsigned y = 0; y < height[font]; ++y) {
                image[art[font] + 33 * stride[font] + y] = 0x0f;
                image[art[font] + 34 * stride[font] + y] = 0xf0;
            }
        }
    } else {
        image[0x3eaed + 0x61 - 16] = 1;
        image[0x3eaed + 0x62 - 16] = 2;
        image[0x3eaed + 0x63 - 16] = 1;
        std::fill_n(image.begin() + 0x3ebdd, 62, 5);
        image[0x3ebdd + 1] = 11;
        std::fill_n(image.begin() + 0x20209d, 4096, 255);
        for (unsigned y = 0; y < 16; ++y) {
            const auto row = (y / 8) * 256 + (y & 7) * 2;
            image[0x20209d + row + 1] = 0;
            image[0x20209d + 32 + row] = 0;
        }
        image[0x03ec2c] = 169;
        image[0x03ec85] = 0;
        for (unsigned y = 0; y < 8; ++y) {
            image[0x204a9d + y * 2] = 0xaa;
            image[0x204a9d + y * 2 + 1] = 0x55;
            image[0x204b9d + y * 2] = 0x55;
            image[0x204b9d + y * 2 + 1] = 0xaa;
        }
    }
    return FontResources::import(image, version);
}
Request request(RequestKind kind, std::uint8_t glyph = 0) {
    Request r;
    r.kind = kind;
    r.glyph = glyph;
    return r;
}
std::vector<TextEffectKind> complete(TextOutput &output) {
    std::vector<TextEffectKind> result;
    while (output.advance() == OutputProgress::Suspended) {
        result.push_back(output.effect()->kind);
        output.respond();
        check(result.size() < 100, "Text output failed to finish a bounded test request");
    }
    return result;
}
void emit(TextOutput &output, std::uint8_t glyph) {
    output.begin(request(RequestKind::Glyph, glyph));
    complete(output);
}
struct Fixture {
    State state;
    TextOutput output;
    explicit Fixture(std::shared_ptr<const FontResources> resource, unsigned columns = 8, unsigned rows = 4)
        : output(std::move(resource), state) {
        state.windows[{0}] = {};
        state.focus = WindowId{0};
        output.define_window({0}, {std::uint16_t(columns), std::uint16_t(rows)}, {0, 0, false, false, false});
    }
};
void us_fonts(const std::shared_ptr<const FontResources> &resources) {
    constexpr std::array<unsigned, 5> advance{5, 7, 6, 3, 9};
    for (unsigned font = 0; font < 5; ++font) {
        Fixture f(resources);
        f.output.set_style({0}, {std::uint16_t(font), 0, false, false, false});
        const auto before = f.output.frame({0});
        emit(f.output, 0x71);
        const auto frame = f.output.frame({0});
        check(f.output.fractional_offset() == advance[font] % 8, "Declared font advance was lost");
        check(f.output.window({0}).cursor == TextCursor{std::uint16_t(advance[font] / 8 + 1), 0},
              "Partial/final glyph column placement changed");
        check(frame->pixels[0] == 1 && frame->pixels[3] == 1 && frame->pixels[4] == 3,
              "Imported variable glyph mask was not composed faithfully");
        check(before->pixels[0] == 3 && before->pixels != frame->pixels,
              "Previously published frame changed");
        check(f.output.last_character() == 0x71, "Last printed US character was lost");
    }
    Fixture fixed(resources);
    emit(fixed.output, 34);
    check(fixed.output.frame({0})->pixels[0] == 13 && !fixed.output.frame({0})->priority[0],
          "Equipped glyph did not select its source palette and priority");
}
void live_cells(const std::shared_ptr<const FontResources> &resources) {
    Fixture f(resources, 4, 4);
    emit(f.output, 0x71);
    const auto sample = f.output.cells({0});
    const auto immutable = f.output.frame({0});
    check(sample.geometry == WindowGeometry{4, 4} && sample.cells.size() == 16,
          "Live cell grid lost its geometry or publication count");
    check(sample.cells.front().image && sample.cells.front().image->pixels[5] == 3,
          "Live cell fixture did not retain a partial composition image");
    f.output.set_style({0}, {0, 2, true, true, true});
    emit(f.output, 0x71);
    const auto current = f.output.cells({0});
    check(sample.cells.front().image == current.cells.front().image &&
              sample.cells.front().image->pixels[5] == 1,
          "A sampled scene did not retain the source's live partial image identity");
    check(sample.cells.front().style == TextStyle{0, 0, false, false, false} &&
              current.cells[1].style == TextStyle{0, 2, true, true, true},
          "Cell attributes were flattened or changed by later window style mutation");
    check(immutable->pixels[5] == 3 && f.output.frame({0})->pixels[5] == 1,
          "Live scene handles changed an already frozen frame snapshot");
}
void layout(const std::shared_ptr<const FontResources> &resources) {
    Fixture f(resources, 4, 4);
    f.output.begin(request(RequestKind::ConditionalNewline));
    check(f.output.window({0}).cursor == TextCursor{}, "Conditional newline moved an empty line");
    emit(f.output, 0x71);
    f.output.begin(request(RequestKind::ConditionalNewline));
    check(f.output.window({0}).cursor == TextCursor{0, 1} && f.output.fractional_offset() == 0,
          "Conditional newline failed to move/reset composition");
    emit(f.output, 0x72);
    const auto retained = f.output.frame({0});
    f.output.begin(request(RequestKind::Newline));
    check(f.output.window({0}).cursor == TextCursor{0, 1}, "Bottom newline did not stay on final line");
    const auto scrolled = f.output.frame({0});
    check(scrolled->pixels[0] == 3 && scrolled->pixels[4] == 1 && scrolled->pixels[16 * 32] == 3,
          "Bottom newline did not scroll and clear exactly one text row");
    check(retained->pixels[0] == 1, "Scrolling mutated an earlier published frame");
    f.output.set_cursor({0}, {0, 0}, 3);
    emit(f.output, 0x71);
    f.output.begin(request(RequestKind::ClearLine));
    check(f.output.window({0}).cursor == TextCursor{0, 0} && f.output.fractional_offset() == 0,
          "Clear line did not reset the current cursor");
    const auto clear = f.output.frame({0});
    check(std::all_of(clear->pixels.begin(), clear->pixels.begin() + 32 * 16, [](auto p) { return p == 3; }),
          "Clear line retained partial glyph ink");
}
void wrap_and_focus(const std::shared_ptr<const FontResources> &resources) {
    Fixture f(resources, 4, 4);
    f.state.word_wrap = true;
    check(f.output.prepare_word({5, 32}).value == 5 && f.output.window({0}).cursor.line == 0,
          "An exactly fitting word wrapped");
    f.output.prepare_word({5, 33});
    check(f.output.window({0}).cursor == TextCursor{0, 1} && f.output.indent_pending(),
          "A word exceeding the line did not wrap with pending indentation");
    emit(f.output, 0x50);
    check(f.output.window({0}).cursor.column == 0 && f.output.indent_pending(),
          "Leading wrapped space was rendered instead of suppressed");
    emit(f.output, 0x71);
    check(f.output.fractional_offset() == 3 && !f.output.indent_pending(),
          "Six-pixel indentation did not precede the next glyph");
    f.state.windows[{1}] = {};
    f.output.define_window({1}, {4, 4}, {0, 0, false, false, false});
    const auto old = f.output.frame({0});
    f.state.focus = WindowId{1};
    emit(f.output, 0x72);
    check(f.output.fractional_offset() == 0 && f.output.window({1}).cursor.column == 1,
          "Focus switch incorrectly reset the shared partial column");
    check(f.output.frame({0})->pixels != old->pixels,
          "Focus switch lost the previous window's active column alias");
    check(old->pixels != f.output.frame({0})->pixels, "Earlier frame failed to remain independent");
    f.state.focus.reset();
    emit(f.output, 0x71);
    check(f.output.complete(), "US output without focus did not return");
}
void cadence(const std::shared_ptr<const FontResources> &resources) {
    Fixture f(resources);
    f.output.policy().instant = false;
    f.output.policy().text_speed = 1;
    f.output.begin(request(RequestKind::Glyph, 0x71));
    check(complete(f.output) == std::vector<TextEffectKind>{TextEffectKind::TextSound,
                                                            TextEffectKind::WindowTick,
                                                            TextEffectKind::WindowTick},
          "Regular cadence order changed");
    f.output.begin(request(RequestKind::Glyph, 47));
    check(complete(f.output) ==
              std::vector<TextEffectKind>{TextEffectKind::TextSound, TextEffectKind::WindowTick,
                                          TextEffectKind::WindowTick, TextEffectKind::TextSound,
                                          TextEffectKind::WindowTick, TextEffectKind::WindowTick},
          "Special glyph lost its inner or outer source cadence");
    f.output.begin(request(RequestKind::Glyph, 0x50));
    check(complete(f.output) ==
              std::vector<TextEffectKind>{TextEffectKind::WindowTick, TextEffectKind::WindowTick},
          "US space played text sound");
    f.output.begin(request(RequestKind::Glyph, 47));
    check(f.output.advance() == OutputProgress::Suspended &&
              f.output.effect()->kind == TextEffectKind::TextSound,
          "Special glyph did not suspend on its first sound");
    const auto pending = f.output.effect();
    check(f.output.advance() == OutputProgress::Suspended && f.output.effect() == pending,
          "Repeated advance skipped an unacknowledged output effect");
    const auto pending_frame = f.output.frame({0});
    const auto pending_window = f.output.window({0});
    const auto pending_fraction = f.output.fractional_offset();
    rejects([&] { f.output.begin(request(RequestKind::Glyph, 0x71)); }, "Active output request was replaced");
    rejects([&] { f.output.begin(request(RequestKind::Newline)); }, "Raw newline replaced a pending glyph");
    rejects([&] { f.output.prepare_word({3, 65535}); }, "Word preparation modified an active output request");
    check(f.output.effect() == pending && !f.output.complete() && f.output.window({0}) == pending_window &&
              f.output.fractional_offset() == pending_fraction &&
              f.output.frame({0})->pixels == pending_frame->pixels &&
              f.output.frame({0})->priority == pending_frame->priority,
          "Rejected raw execution changed its pending continuation or published image");
    f.output.policy().text_speed = 2;
    f.output.respond();
    check(f.output.advance() == OutputProgress::Suspended &&
              f.output.effect()->kind == TextEffectKind::WindowTick,
          "Cadence did not reread speed after sound acknowledgement");
    f.output.policy().instant = true;
    f.output.respond();
    check(complete(f.output) ==
              std::vector<TextEffectKind>{TextEffectKind::WindowTick, TextEffectKind::WindowTick},
          "Captured inner tick count or freshly sampled outer instant policy changed");
    rejects([&] { f.output.respond(); }, "Completed output accepted an extra response");
}
void padding_and_image_lifetime(const std::shared_ptr<const FontResources> &resources) {
    Fixture padded(resources, 256, 4);
    padded.output.policy().character_padding = 255;
    emit(padded.output, 0x71);
    const auto wide = padded.output.frame({0});
    check(padded.output.fractional_offset() == 4 && padded.output.window({0}).cursor.column == 33,
          "Maximum byte padding did not consume complete imported continuation strips");
    check(wide->pixels[0] == 1 && wide->pixels[16] == 3 && wide->pixels[20] == 1,
          "Padding fabricated blank pixels instead of reading the following glyph record");
    Fixture zero(resources);
    emit(zero.output, 0x73);
    check(zero.output.fractional_offset() == 0 && zero.output.window({0}).cursor.column == 1,
          "Zero-advance glyph failed to publish its current column");
    emit(zero.output, 0x73);
    check(zero.output.window({0}).cursor.column == 1, "Zero advance incorrectly created a second column");

    Fixture alias(resources, 2, 4);
    emit(alias.output, 0x71);
    emit(alias.output, 47);
    const auto before = alias.output.frame({0});
    const auto published = alias.output.cells({0});
    check(before->pixels[8 * 16] == 1, "Dangling-image fixture failed to publish lower-row ink");
    emit(alias.output, 32);   // C43F77 releases the old lower row before wrapping.
    emit(alias.output, 0x72); // Earliest reusable image is that still-visible cell.
    const auto after = alias.output.frame({0});
    check(after->pixels[0] == 1 && after->pixels[8 * 16] == 3 && after->pixels[8 * 16 + 4] == 1,
          "Pre-wrap image release/reuse lost its source-visible old-cell alias");
    check(before->pixels[8 * 16] == 1, "Reusing a live image mutated a frozen frame snapshot");
    check(published.cells[2].image->pixels[0] == 3 && published.cells[2].image->pixels[4] == 1,
          "Scene cell handles lost the source-visible released-image alias");
}
void history(const std::shared_ptr<const FontResources> &us, const std::shared_ptr<const FontResources> &jp) {
    Fixture f(us, 28, 8);
    for (unsigned i = 0; i < 180; ++i)
        emit(f.output, 0x71);
    f.output.set_style({0}, {3, 0, false, false, false});
    f.output.set_cursor({0}, {0, 0});
    emit(f.output, 0x71);
    check(f.output.frame({0})->pixels[8 * 224] == 1,
          "Tiny font discarded retained lower rows from a previous brush use");
    Fixture j(jp, 28, 12);
    j.output.set_style({0}, {1, 0, false, false, false});
    emit(j.output, 0x61);
    const auto saved = j.output.frame({0});
    const auto saved_pixels = saved->pixels;
    for (unsigned i = 0; i < 150; ++i)
        emit(j.output, i % 2 ? 0x61 : 0x62);
    check(saved->pixels == saved_pixels && j.output.frame({0})->pixels != saved->pixels,
          "Japanese shared publications corrupted an immutable presentation snapshot");
    check(j.output.saturn_composition_active(), "Japanese Saturn activity was lost");
    emit(j.output, 0x41);
    check(!j.output.saturn_composition_active(), "Japanese fixed fallback did not end Saturn composition");
}
void direct_menu_glyphs(const std::shared_ptr<const FontResources> &resources) {
    Fixture f(resources);
    const bool us = resources->version() == eb::GameVersion::US;
    f.output.policy().instant = false;
    f.output.policy().sound_mode = 2;
    f.output.policy().text_speed = 0;
    f.output.begin_fixed_glyph(47);
    check(complete(f.output) ==
              std::vector<TextEffectKind>{TextEffectKind::TextSound, TextEffectKind::WindowTick},
          "Direct fixed marker acquired a second PRINT_LETTER footer");
    check(f.output.selection_marker_at({0}, {0, 0}), "Fixed marker lost its semantic character identity");
    f.output.policy().instant = true;
    f.output.begin_fixed_glyph(33);
    complete(f.output);
    check(f.output.selection_marker_at({0}, {1, 0}) == us,
          "Selected-marker recognition lost its regional fixed-character semantics");
    f.output.begin_fixed_glyph(0x14f);
    complete(f.output);
    const auto cells = f.output.cells({0});
    check(cells.cells[2].fixed_character == 0x14f && !cells.cells[2].lower_half &&
              cells.cells[10].fixed_character == 0x14f && cells.cells[10].lower_half &&
              !f.output.selection_marker_at({0}, {2, 0}),
          "Wide menu glyph was truncated or classified by pixels instead of provenance");
    const auto &expected = resources->fixed_glyph(us ? 0xcf : 0x14f);
    for (unsigned y = 0; y < 8; ++y)
        for (unsigned x = 0; x < 8; ++x)
            check(cells.cells[2].image->pixels[y * 8 + x] == expected.pixel(x, y) &&
                      cells.cells[10].image->pixels[y * 8 + x] == expected.pixel(x, y + 8),
                  "Wide menu glyph differs from its full imported fixed artwork");
    f.output.set_cursor({0}, {0, 0});
    f.output.begin_glyph(us ? 0x71 : 0x41);
    complete(f.output);
    check(!f.output.selection_marker_at({0}, {0, 0}),
          "Replacing a marker retained stale semantic selection provenance");
    f.output.begin(request(RequestKind::ClearLine));
    complete(f.output);
    check(!f.output.selection_marker_at({0}, {1, 0}), "Clearing a line retained a selectable marker");
}
void japanese_wide_saturn(const std::shared_ptr<const FontResources> &resources) {
    Fixture f(resources);
    f.output.set_style({0}, {1, 0, false, false, false});
    f.output.policy().instant = false;
    f.output.policy().sound_mode = 2;
    f.output.policy().text_speed = 0;
    f.output.begin_glyph(0x14f);
    check(complete(f.output) ==
              std::vector<TextEffectKind>{TextEffectKind::TextSound, TextEffectKind::WindowTick},
          "Wide Saturn character lost its original PRINT_LETTER footer");
    check(f.output.fractional_offset() == 0 && f.output.window({0}).cursor == TextCursor{} &&
              f.output.saturn_composition_active(),
          "Wide Saturn character did not preserve the source zero-advance state");
    const auto sampled = f.output.frame({0});
    for (unsigned y = 0; y < 16; ++y)
        for (unsigned x = 0; x < 8; ++x)
            check(sampled->pixels[y * sampled->width + x] == ((x + y / 8) % 2 ? 2 : 1),
                  "Zero-advance Saturn character did not AND its whole source strip");
    Fixture partial(resources);
    partial.output.set_style({0}, {1, 0, false, false, false});
    emit(partial.output, 0x61);
    const auto before = partial.output.frame({0});
    const auto frozen = before->pixels;
    partial.output.begin_glyph(0x14f);
    complete(partial.output);
    check(partial.output.fractional_offset() == 5 && partial.output.window({0}).cursor == TextCursor{} &&
              partial.output.frame({0})->pixels != frozen && before->pixels == frozen,
          "Zero-advance wide glyph failed to update the existing partial publication faithfully");
}
} // namespace
int main() {
    try {
        const auto us = fonts(eb::GameVersion::US), jp = fonts(eb::GameVersion::JP);
        us_fonts(us);
        live_cells(us);
        layout(us);
        wrap_and_focus(us);
        cadence(us);
        padding_and_image_lifetime(us);
        history(us, jp);
        direct_menu_glyphs(us);
        direct_menu_glyphs(jp);
        japanese_wide_saturn(jp);
        Fixture normal(jp);
        emit(normal.output, 0x41);
        check(normal.output.window({0}).cursor == TextCursor{1, 0} &&
                  normal.output.frame({0})->pixels[0] == 1,
              "Japanese normal fixed glyph output differs");
        rejects([&] { normal.output.prepare_word({1, 1}); }, "Japanese output accepted US word wrapping");
        rejects([&] { normal.output.begin(request(RequestKind::Prompt)); },
                "Output silently handled an unported prompt");
        std::cout << "PASS " << checks
                  << " native text output, cadence, layout, history and ownership checks\n";
    } catch (const std::exception &error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
