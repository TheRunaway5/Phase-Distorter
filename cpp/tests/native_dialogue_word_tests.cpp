#include "eb/native/dialogue/runtime.hpp"
#include "eb/native/dialogue/word_wrap.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native::dialogue;
void require(bool ok, const char *why) { if (!ok) throw std::runtime_error(why); }
template<class F> void rejects(F call) {
    bool rejected = false;
    try { call(); } catch (const std::exception &) { rejected = true; }
    require(rejected, "Invalid lookahead operation did not reject");
}
struct Fixture {
    std::vector<std::uint8_t> primary = std::vector<std::uint8_t>(65536);
    std::vector<std::uint8_t> dictionary = std::vector<std::uint8_t>(65536);
    std::vector<Location> entries = std::vector<Location>(768, Location{2, 0});
    std::shared_ptr<const Program> program(eb::GameVersion version = eb::GameVersion::US) const {
        return std::make_shared<Program>(version,
            std::vector<ContentBlock>{{1, 0, primary}, {2, 0, dictionary}},
            std::vector<Location>{{1, 0}}, std::vector<ReferenceBinding>{},
            version == eb::GameVersion::US ? entries : std::vector<Location>{});
    }
};
WordMeasure scan(std::shared_ptr<const Program> p, Lookahead cursor,
                 std::array<std::uint8_t, 128> widths, unsigned padding, unsigned budget = 4096) {
    WordScanner scanner(std::move(p), cursor, widths, std::uint8_t(padding));
    require(!scanner.advance(0), "Zero work unexpectedly completed lookahead");
    rejects([&] { (void)scanner.result(); });
    unsigned steps = 0;
    while (!scanner.advance(budget)) require(++steps < 200000, "Fixture did not reach word boundary");
    const auto result = scanner.result();
    require(scanner.finished() && scanner.advance() && scanner.result() == result, "Finished scan changed");
    return result;
}
void tests() {
    std::array<std::uint8_t, 128> widths{};
    for (unsigned i = 0; i < widths.size(); ++i) widths[i] = std::uint8_t(i + 1);
    Fixture f;
    f.primary[0] = 0x51; f.primary[1] = 0x2f; f.primary[2] = 0x52; f.primary[3] = 0x50;
    require(scan(f.program(), {{1, 0}, {}}, widths, 3, 1) == WordMeasure{3, 19}, "Special glyph padding or space stop differs");
    f.primary[3] = 0x1f;
    require(scan(f.program(), {{1, 0}, {}}, widths, 3) == WordMeasure{3, 19}, "Control stop differs");
    for (unsigned i = 0; i < 768; ++i) {
        f.primary[0] = std::uint8_t(0x15 + i / 256); f.primary[1] = std::uint8_t(i); f.primary[2] = 0;
        f.dictionary[0] = 0x51; f.dictionary[1] = 0x52; f.dictionary[2] = 0;
        require(scan(f.program(), {{1, 0}, {}}, widths, 1) == WordMeasure{2, 7}, "Dictionary bank expansion differs");
    }
    f.primary[0] = 0x52; f.primary[1] = 0;
    f.dictionary[0] = 0x51; f.dictionary[1] = 0;
    require(scan(f.program(), {{1, 0}, Location{2, 0}}, widths, 0) == WordMeasure{2, 5}, "Dictionary tail did not precede primary");
    // A dictionary prefix encountered in an old dictionary tail takes its
    // index from the primary stream, just like the original lookahead.
    f.dictionary[0] = 0x16; f.dictionary[8] = 0x53; f.dictionary[9] = 0;
    f.primary[0] = 7; f.primary[1] = 0x52; f.primary[2] = 0; f.entries[263] = {2, 8};
    require(scan(f.program(), {{1, 0}, Location{2, 0}}, widths, 0) == WordMeasure{2, 7}, "Tail prefix used incorrect dictionary index cursor");
    // The first byte of the new dictionary expansion is not recursively expanded.
    f.dictionary[8] = 0x15;
    require(scan(f.program(), {{1, 0}, Location{2, 0}}, widths, 0) == WordMeasure{}, "Dictionary first byte recursively expanded");
    f = Fixture{};
    f.primary[65535] = 0x15; f.primary[0] = 0; f.primary[1] = 0x52; f.primary[2] = 0;
    f.entries[0] = {2, 65535}; f.dictionary[65535] = 0x51; f.dictionary[0] = 0;
    require(scan(f.program(), {{1, 65535}, {}}, widths, 0) == WordMeasure{2, 5}, "Lookahead cursor carried across a page");
    f = Fixture{};
    for (unsigned i = 0; i < 600; ++i) { f.primary[i * 2] = 0x15; f.primary[i * 2 + 1] = 0; }
    std::fill_n(f.dictionary.begin(), 255, 0x51); widths.fill(255);
    require(scan(f.program(), {{1, 0}, {}}, widths, 255, 7) ==
            WordMeasure{std::uint16_t(600 * 255), std::uint16_t(600 * 255 * 510)}, "Source counters did not wrap at 16 bits");
    rejects([&] { WordScanner bad(f.program(eb::GameVersion::JP), {{1, 0}, {}}, widths, 0); });
    rejects([&] { WordScanner bad({}, {{1, 0}, {}}, widths, 0); });

    f = Fixture{}; f.primary[0] = 0x15; f.primary[1] = 0; f.primary[2] = 2;
    f.dictionary[0] = 0x51; f.dictionary[1] = 0x52;
    State state; state.word_wrap = true;
    auto program = f.program(); Runtime runtime(program, state); runtime.start(EntryId{0});
    require(runtime.advance() == Progress::Suspended && runtime.request()->kind == RequestKind::WordWrap,
            "Runtime did not request initial lookahead");
    require(runtime.request()->lookahead == std::optional{Lookahead{{1, 0}, {}}}, "Initial lookahead cursors differ");
    runtime.respond({0}); require(runtime.advance() == Progress::Suspended && runtime.request()->kind == RequestKind::Glyph,
            "Dictionary glyph did not suspend");
    require(!runtime.request()->lookahead, "Non-word request exposed lookahead"); runtime.respond();
    require(runtime.advance() == Progress::Suspended && runtime.request()->kind == RequestKind::WordWrap,
            "Remaining dictionary tail did not request wrapping");
    const auto request = *runtime.request(); const auto before = runtime.snapshot();
    require(request.lookahead == std::optional{Lookahead{{1, 2}, Location{2, 1}}}, "Runtime discarded surviving dictionary cursor");
    widths.fill(2);
    require(scan(program, *request.lookahead, widths, 0) == WordMeasure{1, 2}, "Pending lookahead measured incorrect tail");
    require(runtime.snapshot().frames == before.frames && *runtime.request() == request,
            "Word measurement consumed interpreter state");
}
} // namespace
int main() {
    try { tests(); std::cout << "PASS native word scan: all 768 dictionary entries, dual cursors, boundaries, 16-bit wrap, budgets and runtime handoff\n"; }
    catch (const std::exception &e) { std::cerr << e.what() << '\n'; return 1; }
}
