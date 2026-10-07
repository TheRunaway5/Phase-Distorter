#include "eb/native/peripheral_state.hpp"
#include "eb/native/story/audio_clock.hpp"
#include "native_battle_frame_fixture.hpp"
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native;
using battle_frame_test::check;
using battle_frame_test::rejects;
void advance(story::AudioFrameClock& clock, unsigned total) {
    while (total) { const auto n = clock.next_quantum(total); clock.elapsed(n); total -= n; }
}
void inputs_and_clock() {
    PeripheralState state;
    rejects([&] { state.read(0x4210, 0); }, "Missing actual clock silently supplied RDNMI");
    story::TickState ticks;
    ticks.interrupt_mask = 1;
    unsigned nmis = 0;
    story::AudioFrameClock clock(ticks, [&] { ++nmis; }, [] {});
    clock.bind_peripherals(state);
    state.set_buttons(0xa580);
    state.serial_strobe(true); state.serial_strobe(false);
    for (unsigned bit = 0; bit < 16; ++bit)
        check(state.read(0x4016, 0x7e) == (0x7c | ((0xa580 >> (15 - bit)) & 1)), "Serial bit/order or incoming data bus lost");
    check(state.read(0x4016, 0x40) == 0x41, "Exhausted controller latch did not retain one");
    state.serial_strobe(true);
    state.set_buttons(0x8000);
    check(state.read(0x4016, 0) == 1 && state.read(0x4016, 0) == 1 && !state.serial_position(), "Strobed live input advanced the serial latch");
    check(state.read(0x4017, 0xa5) == 0xbc, "Second serial port lost its source open bus mask");
    advance(clock, 225 * 1364);
    check(!nmis && (state.read(0x4212, 0) & 0x81) == 0x81, "Physical auto-read/VBlank start missing");
    check(state.read(0x4210, 0x70) == 0xf2 && state.read(0x4210, 0x70) == 0x72, "RDNMI read did not acknowledge exactly one hardware latch");
    check(!ticks.new_frame_started && !ticks.input_polls, "Hardware latch read changed logical WAIT state");
    advance(clock, 4223);
    check(!state.auto_buttons() && (state.read(0x4212, 0) & 1), "Auto-read completed early");
    state.set_buttons(0x1258);
    advance(clock, 1);
    check(state.read(0x4218, 0) == 0x58 && state.read(0x4219, 0) == 0x12 && !(state.read(0x4212, 0) & 1), "Actual auto-read completion did not sample live input");
    state.raise_irq();
    check(state.read(0x4211, 0x13) == 0x93 && state.read(0x4211, 0x13) == 0x13, "TIMEUP acknowledgement lost");
    state.set_wrio(0x47); check(state.read(0x4213, 0) == 0x47, "WRIO retention lost");
    rejects([&] { state.read(0x2140, 0); }, "Unowned APU reads were fabricated");
    rejects([&] { state.read(0x4320, 0); }, "Unowned HDMA register reads were fabricated");
}
void arithmetic_and_dma() {
    PeripheralState state;
    state.divide_word(65535, 0);
    check(state.quotient() == 65535 && state.product() == 65535, "Hardware division-zero result differs");
    for (unsigned a : {0u, 1u, 255u, 256u, 65535u}) for (unsigned b : {1u, 2u, 127u, 255u}) {
        state.divide_word(std::uint16_t(a), std::uint8_t(b));
        const auto quotient = state.quotient();
        check(quotient == a / b && state.product() == a % b, "Hardware quotient/remainder differs");
        state.multiply_word(std::uint16_t(a), std::uint16_t(b));
        check(state.quotient() == quotient && state.product() == (a >> 8) * (b & 255), "MULT16 did not retain its actual final byte product");
    }
    state.complete_dma(0, 1, 0x18, 0x7ffff0, 32);
    check(state.dma(0)[2] == 16 && state.dma(0)[3] == 0 && state.dma(0)[4] == 0x7f, "DMA source carry escaped its source bank");
    check(state.dma(0)[5] == 0 && state.dma(0)[6] == 0, "Completed DMA retained a nonzero count");
    state.complete_dma(0, 9, 0x18, 0x7f2345, 0);
    check(state.dma(0)[2] == 0x45 && state.dma(0)[3] == 0x23, "Fixed 65536-byte DMA advanced source");
    state.complete_dma(0, 0x10, 0x18, 0x7f0000, 1);
    check(state.dma(0)[2] == 255 && state.dma(0)[3] == 255, "Decrementing DMA did not wrap");
    for (unsigned at = 0x430a; at <= 0x430f; ++at)
        check(state.read(at, 0x63) == ((at >= 0x430c && at <= 0x430e) ? 0x63 : 255), "Retained DMA high registers/open bus/F alias differs");
    rejects([&] { state.complete_dma(2, 0, 0, 0, 0); }, "Unowned channel admission was unsafe");
}
void real_publication(eb::GameVersion version) {
    // Real FrameDisplay, palette owner, live scratch and transactional Scene
    // publisher: the test never seeds a finished DMA register result.
    battle_frame_test::FrameFixture f(version, 4);
    PeripheralState state;
    f.display.bind_peripherals(state, version);
    f.frame_display.request_retained_screen();
    f.colors.upload_mode = 0;
    eb::DirectSceneFrame stamp;
    stamp.width = 256;
    f.publication.capture_next(stamp);
    check(state.dma(0)[1] == 4 && state.dma(0)[2] == 0x20 && state.dma(0)[3] == 7,
          "Real first OAM publication lost retained source address");
    f.frame_display.request_retained_screen();
    f.colors.upload_mode = 24;
    f.publication.capture_next(stamp);
    check(state.dma(0)[1] == 0x22 && state.dma(0)[2] == 0 && state.dma(0)[3] == 4,
          "Palette did not follow actual OAM publication");
    f.scratch.bytes[0xffff] = 0x5a;
    f.scratch.bytes[0] = 0x6b;
    f.display.queue_graphics(0xffff, 2, 0);
    f.colors.upload_mode = 16;
    f.publication.capture_next(stamp);
    check(f.display.vram_byte(0) == 0x5a && f.display.vram_byte(1) == 0x6b,
          "Real queued DMA did not read live wrapped scratch");
    check(state.dma(0)[0] == 1 && state.dma(0)[1] == 0x18 &&
          state.dma(0)[2] == 1 && state.dma(0)[3] == 0 && state.dma(0)[4] == 0x7f,
          "Queued graphics did not follow the palette transfer");
    const auto channel0 = state.dma(0);
    f.display.transfer_graphics_immediate(f.scratch, 0, 2, 2);
    check(state.dma(0) == channel0 && state.dma(1)[2] == 2,
          "Forced-blank graphics replaced retained DMA0");
    f.display.queue_frame(0xff80);
    f.publication.capture_next(stamp);
    const auto source = version == eb::GameVersion::US ? 0xc2e6b3 : 0xc2e5c8;
    check(state.dma(0)[0] == 8 && state.dma(0)[1] == 0x19 && state.dma(0)[2] == (source & 255) &&
          state.dma(0)[3] == ((source >> 8) & 255) && state.dma(0)[4] == 0xc2,
          "Real PSI constant high-byte DMA lost its regional source");
    f.display.queue_clear();
    const auto retained = state.dma(0);
    const auto pending = f.display.pending().size();
    f.colors.upload_mode = 7;
    rejects([&] { f.publication.capture_next(stamp); }, "Invalid palette publication unexpectedly succeeded");
    check(state.dma(0) == retained && f.display.pending().size() == pending,
          "Failed transactional capture consumed DMA register state");
    f.colors.upload_mode = 0;
    f.publication.capture_next(stamp);
    check(state.dma(0)[0] == 9 && state.dma(0)[2] == ((source + 1) & 255),
          "PSI clear lost retained constant source");
}
}
int main() {
    try {
        inputs_and_clock(); arithmetic_and_dma();
        real_publication(eb::GameVersion::US); real_publication(eb::GameVersion::JP);
        std::cout << "PASS actual native peripheral owners: " << battle_frame_test::checks << " checks\n";
    } catch (const std::exception& e) { std::cerr << e.what() << '\n'; return 1; }
}
