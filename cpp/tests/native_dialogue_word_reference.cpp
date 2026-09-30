// Independent US UNKNOWN_C445E1 oracle. Runs the complete original scan and
// comparison, with only REDIRECT_PRINT_NEWLINE intercepted. Window rendering
// is covered separately by the output oracle. Metrics and authored bytecode
// are synthetic shared inputs, never native-generated expected results.
#include "eb/game/runtime/runtime.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/native/dialogue/word_wrap.hpp"
#include "eb/snes_bus.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <string>

namespace {
using namespace eb::native::dialogue;
void require(bool ok, const std::string &why) { if (!ok) throw std::runtime_error(why); }
unsigned entry(std::string_view source) {
    for (const auto &routine : eb::game::runtime::ported_routines(eb::GameVersion::US))
        if (routine.source == source) return routine.first_address;
    throw std::runtime_error("Source routine missing: " + std::string(source));
}
unsigned pointer(Location p) { return ((p.page + 0xcf) << 16) | p.offset; }
struct Fixture {
    std::vector<std::uint8_t> primary = std::vector<std::uint8_t>(65536);
    std::vector<std::uint8_t> dictionary = std::vector<std::uint8_t>(65536);
    std::vector<Location> entries = std::vector<Location>(768, Location{2, 0});
    std::array<std::uint8_t, 128> widths{};
    Lookahead start{{1, 0}, {}};
    unsigned font{}, padding{}, column{}, fractional{}, columns = 20;
    Fixture() { for (unsigned i = 0; i < 128; ++i) widths[i] = std::uint8_t(i % 17 + 1); }
    std::shared_ptr<const Program> program() const {
        return std::make_shared<Program>(eb::GameVersion::US,
            std::vector<ContentBlock>{{1, 0, primary}, {2, 0, dictionary}},
            std::vector<Location>{}, std::vector<ReferenceBinding>{}, entries);
    }
    std::vector<std::uint8_t> image() const {
        std::vector<std::uint8_t> image(0x300000);
        std::copy(primary.begin(), primary.end(), image.begin() + 0x100000);
        std::copy(dictionary.begin(), dictionary.end(), image.begin() + 0x110000);
        const auto put32 = [&](unsigned offset, unsigned value) {
            for (unsigned i = 0; i < 4; ++i) image[offset + i] = std::uint8_t(value >> (8 * i));
        };
        for (unsigned i = 0; i < 768; ++i) put32(0x8cded + 4 * i, pointer(entries[i]));
        for (unsigned i = 0; i < 5; ++i) {
            put32(0x3f054 + 12 * i, 0xc90000 + i * 256);
            std::copy(widths.begin(), widths.end(), image.begin() + 0x90000 + i * 256);
        }
        return image;
    }
};
std::uint64_t source_steps{}, cases{};
struct SourceResult { WordMeasure measure; unsigned newlines{}, indent{}; };
SourceResult source(const Fixture &f) {
    auto bus = std::make_unique<eb::SnesBus>(f.image(), eb::GameVersion::US);
    eb::MainCpu65816 cpu(*bus); cpu.set_runtime(eb::MainCpuRuntime::Legacy);
    cpu.emulation_mode = false; cpu.status_register = eb::MainCpu65816::InterruptDisable;
    cpu.data_bank = 0x7e; cpu.direct_page = 0x1e00; cpu.stack_pointer = 0x1fff;
    const auto put = [&](unsigned at, unsigned value) {
        bus->work_ram.at(at) = std::uint8_t(value); bus->work_ram.at(at + 1) = std::uint8_t(value >> 8);
    };
    const auto put32 = [&](unsigned at, unsigned value) { put(at, value); put(at + 2, value >> 16); };
    const auto get = [&](unsigned at) { return unsigned(bus->work_ram.at(at)) | unsigned(bus->work_ram.at(at + 1)) << 8; };
    // Independently audited linked labels and window_stats offsets.
    put(0x8958, 0); put(0x88e4, 0); put(0x8650 + 10, f.columns);
    put(0x8650 + 14, f.column); put(0x8650 + 21, f.font);
    put(0x9e23, f.fractional); put(0x5e6d, f.padding); put(0x9660, 0);
    put32(0x1000, pointer(f.start.primary));
    const auto dictionary = f.start.dictionary ? pointer(*f.start.dictionary) : 0xd3fffe;
    put32(0x1e0e, dictionary); // caller's second argument, after integer slot parameter
    cpu.accumulator = 0x1000; cpu.program_counter = 0xc0ff00;
    cpu.execute_instruction<0x22>(entry("src/unknown/C4/C445E1.asm"), 4);
    const auto newline = entry("src/text/print_newline_redirect.asm");
    SourceResult result{};
    while (cpu.program_counter != 0xc0ff04 || cpu.stack_pointer != 0x1fff) {
        require(++source_steps < 40'000'000, "Word oracle instruction budget exceeded");
        if (cpu.program_counter == 0xc447ae) {
            // Original local accumulator immediately after the scan's stop.
            result.measure.pixels = std::uint16_t(get(cpu.direct_page + 0x18));
        }
        if (cpu.program_counter == newline) {
            ++result.newlines; cpu.execute_instruction<0x6b>(0, 1);
        } else cpu.step_instruction();
    }
    result.measure.characters = std::uint16_t(get(0x9660)); result.indent = bus->work_ram[0x5e75];
    require((get(0x1000) | get(0x1002) << 16) == pointer(f.start.primary), "Source consumed primary cursor");
    require((get(0x1e0e) | get(0x1e10) << 16) == dictionary, "Source consumed caller dictionary cursor");
    require(cpu.direct_page == 0x1e00, "Source failed to restore caller direct page");
    return result;
}
void run(const Fixture &fixture, const std::string &label, unsigned budget = 4096) {
    const auto expected = source(fixture);
    WordScanner native(fixture.program(), fixture.start, fixture.widths, std::uint8_t(fixture.padding));
    unsigned resumes = 0;
    while (!native.advance(budget)) require(++resumes < 200000, label + ": native scan budget exceeded");
    require(native.result() == expected.measure, label + ": word counts differ, source=" +
            std::to_string(expected.measure.characters) + "/" + std::to_string(expected.measure.pixels) +
            " native=" + std::to_string(native.result().characters) + "/" + std::to_string(native.result().pixels));
    require(expected.newlines <= 1 && expected.indent == expected.newlines, label + ": source indentation state differs");
    ++cases;
}
void tests() {
    for (unsigned font = 0; font < 5; ++font) {
        for (unsigned byte = 0x20; byte < 256; ++byte) {
            Fixture f; f.font = font; f.primary[0] = std::uint8_t(byte); f.primary[1] = 0;
            f.padding = byte & 1 ? 0xff : 3; f.fractional = byte & 7; f.column = byte % 23;
            run(f, "font/glyph " + std::to_string(font) + "/" + std::to_string(byte), 1);
        }
    }
    for (unsigned index = 0; index < 768; ++index) {
        Fixture f; f.primary[0] = std::uint8_t(0x15 + index / 256); f.primary[1] = std::uint8_t(index);
        f.primary[2] = 0x2f; f.primary[3] = 0x50; f.dictionary[0] = 0x51; f.dictionary[1] = 0x62;
        run(f, "dictionary " + std::to_string(index), 1);
    }
    for (unsigned stop = 0; stop < 0x20; ++stop) {
        Fixture f; f.primary[0] = 0x51; f.primary[1] = std::uint8_t(stop);
        // Compression codes need a first expanded byte to define the boundary.
        run(f, "control stop " + std::to_string(stop));
    }
    Fixture f; f.start = {{1, 65535}, Location{2, 65535}};
    f.dictionary[65535] = 0x51; f.primary[65535] = 0x16; f.primary[0] = 255;
    f.entries[511] = {2, 32}; f.dictionary[32] = 0x53;
    run(f, "both cursor low-word wraps", 1);
    f = Fixture{}; f.start.dictionary = Location{2, 0}; f.dictionary[0] = 0x17;
    f.primary[0] = 9; f.primary[1] = 0x60; f.entries[521] = {2, 16}; f.dictionary[16] = 0x61;
    run(f, "prefix in surviving dictionary tail", 1);
    f.dictionary[16] = 0x15; run(f, "unexpanded first dictionary prefix", 1);
    f = Fixture{}; std::fill_n(f.dictionary.begin(), 255, 0x51); f.padding = 255; f.widths.fill(255);
    for (unsigned i = 0; i < 300; ++i) { f.primary[i * 2] = 0x15; f.primary[i * 2 + 1] = 0; }
    run(f, "word count and width 16-bit overflow", 113);
}
} // namespace
int main() {
    try { tests(); std::cout << "PASS native word lookahead: " << cases << " complete original C445E1 cases, "
                            << source_steps << " original instructions; all 5 font metric tables and 768 dictionary entries; newline rendering is an explicit seam\n"; }
    catch (const std::exception &e) { std::cerr << e.what() << '\n'; return 1; }
}
