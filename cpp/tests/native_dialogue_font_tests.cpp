// Extraction tests use synthetic bytes in independently recorded source ranges.
// Original rendered-output comparison belongs to native_dialogue_output_reference.
#include "eb/native/dialogue/fonts.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <string>

namespace {
using namespace eb::native::dialogue;
void require(bool ok, const char* message) { if (!ok) throw std::runtime_error(message); }
template<class F> void rejected(F f, const char* message) {
    bool failed = false;
    try { f(); } catch (const std::exception&) { failed = true; }
    require(failed, message);
}
struct Input {
    std::vector<std::uint8_t> image = std::vector<std::uint8_t>(0x300000);
    std::vector<std::uint8_t> fixed;
    // Source labels from bank20/bank21 and font_pointer_table.asm, independent
    // of the importer's parser. Declared US glyph count is96 for every font.
    static constexpr std::array<unsigned,5> metrics{0x210c7a,0x201359,0x2118da,0x211f3a,0x21229a};
    static constexpr std::array<unsigned,5> graphics{0x210cda,0x2013b9,0x21193a,0x211f9a,0x2122fa};
    static constexpr std::array<unsigned,5> record{32,32,16,8,32}, rows{16,16,16,8,16};
    void put(unsigned at, unsigned value, unsigned size) {
        while (size--) { image[at++] = value; value >>= 8; }
    }
    explicit Input(eb::GameVersion version) {
        const bool jp = version == eb::GameVersion::JP;
        fixed.assign(jp ? 0x2a00 : 0x1a00, 0xff);
        const unsigned literal = jp ? 4138 : 1803;
        for (unsigned i = 0; i < literal; ++i) fixed[i] = std::uint8_t(i * 13 + (i >> 3));
        // Literal prefix + repeatedFF tail exactly occupies the declared
        // compressed source asset; no asset art is copied into this fixture.
        unsigned at = 0x200000, out = 0;
        while (out < literal) {
            const auto count = std::min(32u, literal - out);
            image[at++] = count - 1;
            for (unsigned i = 0; i < count; ++i) image[at++] = fixed[out++];
        }
        while (out < fixed.size()) {
            const auto count = std::min(1024u, unsigned(fixed.size()) - out);
            if (count <= 32) image[at++] = 0x20 | (count - 1);
            else { image[at++] = 0xe4 | ((count - 1) >> 8); image[at++] = count - 1; }
            image[at++] = 0xff;
            out += count;
        }
        image[at++] = 255;
        require(at == 0x200000 + (jp ? 0x10c2 : 0x754), "Synthetic packed font has the wrong declared extent");
        if (!jp) {
            for (unsigned font = 0; font < 5; ++font) {
                const auto entry = 0x3f054 + font * 12;
                put(entry, metrics[font] + 0xc00000, 4); put(entry + 4, graphics[font] + 0xc00000, 4);
                put(entry + 8, record[font], 2); put(entry + 10, rows[font], 2);
                const auto width = record[font] / rows[font] * 8;
                for (unsigned i = 0; i < 96; ++i) image[metrics[font] + i] = 1 + i % width;
                for (unsigned i = 0; i < 95 * record[font] + 34 * rows[font]; ++i)
                    image[graphics[font] + i] = std::uint8_t(i * 37 + font * 29 + (i >> 4));
            }
        } else {
            for (unsigned i = 0; i < 240; ++i) image[0x3eaed + i] = i % 63;
            for (unsigned i = 0; i < 62; ++i) image[0x3ebdd + i] = 1 + i % 16;
            for (unsigned i = 0; i < 4096; ++i) image[0x20209d + i] = std::uint8_t(i * 37 + (i >> 3));
        }
    }
};
void fixed_art(const FontResources& fonts, const Input& input, unsigned count) {
    for (unsigned character = 16; character < count; ++character) {
        const auto& glyph = fonts.fixed_glyph(character);
        require(!glyph.variable && glyph.advance == 8 && glyph.width == 8 && glyph.height == 16,
                "Fixed dialogue glyph metrics changed");
        // Independent banked tile atlas: row group has sixteen upper tiles,
        // then sixteen lower tiles. Every two bytes encode one pixel row.
        for (unsigned y = 0; y < 16; ++y) for (unsigned x = 0; x < 8; ++x) {
            const auto tile = (character / 16) * 32 + character % 16 + (y / 8) * 16;
            const auto at = tile * 16 + (y % 8) * 2;
            const auto mask = 0x80u >> x;
            const auto expected = unsigned(bool(input.fixed[at] & mask)) + unsigned(bool(input.fixed[at + 1] & mask)) * 2;
            require(glyph.pixel(x,y) == expected, "Fixed dialogue font pixels differ from imported bytes");
        }
    }
    rejected([&]{ fonts.fixed_glyph(15); }, "Flavour-dependent control tiles were exposed as font glyphs");
    rejected([&]{ fonts.fixed_glyph(count); }, "Unimported fixed glyph was silently blank-filled");
}
void us() {
    Input input(eb::GameVersion::US);
    const auto fonts = FontResources::import(input.image, eb::GameVersion::US);
    require(fonts->font_count() == 5, "US importer omitted a declared font");
    fixed_art(*fonts, input, 208);
    for (unsigned font = 0; font < 5; ++font) {
        const auto widths = fonts->word_widths(font);
        require(std::equal(widths.begin(), widths.end(), input.image.begin() + Input::metrics[font]),
                "Word lookahead lost imported metrics or their adjacent32 bytes");
        for (unsigned index = 0; index < 96; ++index) {
            const auto& glyph = fonts->glyph(font, 0x50 + index);
            require(glyph.variable && glyph.advance == input.image[Input::metrics[font] + index] &&
                    glyph.height == Input::rows[font] && glyph.width == Input::record[font] / Input::rows[font] * 8,
                    "US font record dimensions/advance differ");
            for (unsigned y = 0; y < glyph.height; ++y) for (unsigned x = 0; x < 272; ++x) {
                const auto raw = input.image[Input::graphics[font] + index * Input::record[font] +
                                              (x / 8) * Input::rows[font] + y];
                const auto expected = 1 + unsigned(bool(raw & (0x80 >> (x % 8)))) * 2;
                require(fonts->raster_pixel(font, 0x50 + index, x,y) == expected,
                        "US raster lost an imported continuation byte or inverted its mask");
                if (x < glyph.width) require(glyph.pixel(x,y) == expected, "US glyph pixel decode differs");
            }
        }
        for (const auto character : {0x20,0x22,0x2f})
            require(&fonts->glyph(font, character) == &fonts->fixed_glyph(character),
                    "US special/equipped dispatch did not precede variable index validation");
        require(&fonts->glyph(font, 0xd0) == &fonts->glyph(font, 0x50), "US source masked-index wrap changed");
        rejected([&]{ fonts->glyph(font, 0xb0); }, "Undeclared US font record was silently fabricated");
        rejected([&]{ fonts->raster_pixel(font, 0x50, 272,0); }, "US raster exceeded the bounded padding import");
    }
    for (const auto character : {0x20,0x22,0x2f})
        require(&fonts->glyph(0xffff,character) == &fonts->fixed_glyph(character),
                "US special code unnecessarily consulted an unused font selector");
    require(!fonts->following_diacritic(0x63), "US text gained Japanese diacritics");
    rejected([&]{ fonts->glyph(5,0x50); }, "Unknown US font silently fell back");
    const auto before = fonts->glyph(0,0x71).pixels;
    std::fill(input.image.begin(), input.image.end(), 0);
    require(fonts->glyph(0,0x71).pixels == before, "Imported font retained mutable input storage");
}
void jp() {
    Input input(eb::GameVersion::JP);
    const auto fonts = FontResources::import(input.image, eb::GameVersion::JP);
    require(fonts->font_count() == 2, "Japanese importer invented unused US fonts");
    fixed_art(*fonts, input, 336);
    for(unsigned character : {0x100u,0x10fu,0x140u,0x14fu})
        require(&fonts->glyph(0,character)==&fonts->fixed_glyph(character),
                "Japanese wide menu glyph was truncated before fixed-font dispatch");
    unsigned mapped = 0, fallback = 0;
    for (unsigned character = 16; character < 256; ++character) {
        require(&fonts->glyph(0,character) == &fonts->fixed_glyph(character), "Japanese normal font was not fixed");
        const auto& glyph = fonts->glyph(1,character);
        require(&glyph == &fonts->glyph(0xffff,character), "Japanese nonzero font selector changed routing");
        const auto mapping = input.image[0x3eaed + character - 16];
        if (!mapping) {
            ++fallback;
            require(&glyph == &fonts->fixed_glyph(character), "Japanese Saturn zero entry did not preserve fixed fallback");
        } else {
            ++mapped;
            const auto index = mapping - 1;
            require(glyph.variable && glyph.width == 16 && glyph.height == 16 &&
                    glyph.advance == input.image[0x3ebdd + index], "Japanese Saturn advance differs");
            for (unsigned y = 0; y < 16; ++y) for (unsigned x = 0; x < 16; ++x) {
                // Sixteen8x8 tiles per atlas row; each glyph occupies2x2 tiles.
                const auto tile = (index / 8 * 2 + y / 8) * 16 + index % 8 * 2 + x / 8;
                const auto at = 0x20209d + tile * 16 + y % 8 * 2;
                const auto mask = 0x80u >> (x % 8);
                const auto expected = unsigned(bool(input.image[at] & mask)) + unsigned(bool(input.image[at + 1] & mask)) * 2;
                require(glyph.pixel(x,y) == expected, "Japanese Saturn two-plane mask differs");
            }
        }
        const auto mark = fonts->following_diacritic(character);
        const bool voiced = character >= 96 && (character % 16 == 3 || character % 16 == 5 ||
                            character % 16 == 7 || character % 16 == 10);
        const bool semi = character >= 96 && character % 16 == 11;
        require(mark == (voiced ? std::optional<std::uint16_t>(26) :
                         semi ? std::optional<std::uint16_t>(27) : std::nullopt),
                "Japanese following-diacritic selection differs");
    }
    require(mapped > 200 && fallback > 0, "Japanese map test was vacuous");
    rejected([&]{ fonts->word_widths(0); }, "Japanese text exposed a fictitious US lookahead table");
    rejected([&]{ fonts->glyph(1,15); }, "Japanese Saturn map read before its imported start");
}
void jp_page_control() {
    // Source C1C046 reads C3EAED + (014f-16), then width at C3EBDD +
    // (map-1). The actual imported pack selects169 with zero advance; this
    // fixture supplies distinct adjacent artwork rather than copying it.
    Input input(eb::GameVersion::JP);
    input.image[0x3ec2c] = 169;
    input.image[0x3ec85] = 0;
    for (unsigned half = 0; half < 2; ++half)
        for (unsigned i = 0; i < 16; ++i)
            input.image[0x204a9d + half * 256 + i] = std::uint8_t(17 * i + 31 * half + 5);
    auto fonts = FontResources::import(input.image,eb::GameVersion::JP);
    const auto& glyph = fonts->glyph(1,0x14f);
    require(glyph.variable && glyph.advance == 0 && glyph.width == 8 && glyph.height == 16,
            "Japanese wide page control lost its zero-advance source strip");
    require(&fonts->glyph(0xffff,0x14f) == &glyph && !fonts->following_diacritic(0x14f),
            "Japanese wide page control changed Saturn routing or acquired a diacritic");
    for (unsigned y = 0; y < 16; ++y) for (unsigned x = 0; x < 8; ++x) {
        const auto at = 0x204a9d + y / 8 * 256 + y % 8 * 2;
        const auto mask = 0x80u >> x;
        const auto expected = unsigned(bool(input.image[at] & mask)) +
                              2 * unsigned(bool(input.image[at + 1] & mask));
        require(glyph.pixel(x,y) == expected,"Japanese page control fabricated/truncated its adjacent strip");
    }
    const auto saved = glyph.pixels;
    std::fill_n(input.image.begin()+0x204a9d,272,0);
    require(glyph.pixels == saved,"Japanese page control retained mutable imported artwork");
    input.image[0x3ec2c] = 0;
    fonts = FontResources::import(input.image,eb::GameVersion::JP);
    require(&fonts->glyph(1,0x14f) == &fonts->fixed_glyph(0x14f),
            "Japanese page-control zero mapping did not use full-word fixed fallback");
    input.image[0x3ec2c] = 1; input.image[0x3ebdd] = 12;
    fonts = FontResources::import(input.image,eb::GameVersion::JP);
    require(fonts->glyph(1,0x14f).pixels == fonts->glyph(1,17).pixels &&
            fonts->glyph(1,0x14f).advance == 12 && fonts->glyph(1,0x14f).width == 16,
            "Japanese page-control import ignored its live map or second strip");
    rejected([&]{ fonts->glyph(1,0x14e); },"Unproven wide Saturn map was silently exposed");
    input.image[0x3ec2c] = 169; input.image[0x3ec85] = 17;
    rejected([&]{ FontResources::import(input.image,eb::GameVersion::JP); },
             "Unsupported wide page-control raster advance was accepted");
    input.image[0x3ec85] = 0;
    rejected([&]{ FontResources::import(std::span(input.image).first(0x204a9d+256+15),eb::GameVersion::JP); },
             "Truncated adjacent page-control lower strip was accepted");
}
void malformed() {
    Input us(eb::GameVersion::US);
    rejected([&]{ FontResources::import(us.image, static_cast<eb::GameVersion>(255)); }, "Invalid font region accepted");
    rejected([&]{ FontResources::import(std::span(us.image).first(0x200020), eb::GameVersion::US); }, "Truncated font image accepted");
    auto bad = us.image; bad[0x3f05c] = 31;
    rejected([&]{ FontResources::import(bad, eb::GameVersion::US); }, "Malformed font record shape accepted");
    bad = us.image; bad[0x200000] = 0xff;
    rejected([&]{ FontResources::import(bad, eb::GameVersion::US); }, "Truncated decoded fixed artwork accepted");
    Input jp(eb::GameVersion::JP); jp.image[0x3eaed] = 63;
    rejected([&]{ FontResources::import(jp.image, eb::GameVersion::JP); }, "Out-of-range Japanese glyph map accepted");
}
}
int main() {
    try {
        us(); jp(); jp_page_control(); malformed();
        std::cout << "PASS native fonts: five US fonts/128-byte metrics/padding continuations, JP normal/Saturn/fallback/diacritics, fixed artwork and import bounds\n";
    } catch (const std::exception& error) { std::cerr << error.what() << '\n'; return 1; }
}
