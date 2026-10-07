#include "eb/native/battle/outcomes.hpp"
#include "eb/native/peripheral_state.hpp"
#include <algorithm>

namespace eb::native::battle {
namespace {
std::uint16_t word(const PsiScratch& scratch, unsigned at) {
    return std::uint16_t(scratch.bytes.at(at) | unsigned(scratch.bytes.at(at + 1)) << 8);
}
void word(PsiScratch& scratch, unsigned at, std::uint16_t value) {
    scratch.bytes.at(at) = std::uint8_t(value); scratch.bytes.at(at + 1) = std::uint8_t(value >> 8);
}
std::uint16_t slope(unsigned from, unsigned to, std::uint16_t divisor) {
    const int numerator = (int(to) - int(from)) * 256;
    const int denominator = divisor < 0x8000 ? int(divisor) : int(divisor) - 65536;
    return std::uint16_t(denominator ? numerator / denominator : numerator < 0 ? 1 : -1);
}
}
void prepare_palette_brightness(PsiScratch& scratch, const PaletteBankState& colors,
                                std::uint16_t style, PeripheralState* peripherals) {
    for (unsigned i = 0; i < 256; ++i) {
        const auto input = colors.staged_palette(i / 16)[i % 16];
        std::uint16_t output = input;
        if (style > 50) output = 0x7fff;
        else if (style < 50) {
            output = 0;
            const auto factor = std::uint16_t(style * 5);
            for (unsigned channel = 0; channel < 3; ++channel) {
                const auto value = std::uint16_t((input >> (channel * 5)) & 31);
                if (peripherals) peripherals->multiply_word(value, factor);
                output |= std::uint16_t(((value * factor) >> 8) << (channel * 5));
            }
        }
        word(scratch, i * 2, output);
    }
}
void prepare_palette_transition(PsiScratch& scratch, const PaletteBankState& colors,
                                std::uint16_t divisor, std::uint16_t mask) {
    std::fill(scratch.bytes.begin() + 0x200, scratch.bytes.begin() + 0x1200, 0);
    for (unsigned i = 0; i < 256; ++i) {
        const auto from = colors.staged_palette(i / 16)[i % 16];
        auto target = word(scratch, i * 2);
        if (!(mask & (1u << (i / 16)))) { target = from; word(scratch, i * 2, from); }
        for (unsigned c = 0; c < 3; ++c) {
            const unsigned a = (from >> (c * 5)) & 31, b = (target >> (c * 5)) & 31;
            word(scratch, 0x200 + c * 0x200 + i * 2, slope(a, b, divisor));
            word(scratch, 0x800 + c * 0x200 + i * 2, std::uint16_t(a << 8));
        }
    }
}
void advance_palette_transition(PsiScratch& scratch, PaletteBankState& colors) {
    for (unsigned i = 0; i < 256; ++i) {
        std::uint16_t packed = 0;
        for (unsigned c = 0; c < 3; ++c) {
            const auto offset = c * 0x200 + i * 2;
            const auto value = std::uint16_t(word(scratch, 0x200 + offset) + word(scratch, 0x800 + offset));
            word(scratch, 0x800 + offset, value);
            unsigned visible = 0;
            if (value & 0x8000) word(scratch, 0x200 + (c == 2 ? 1 : c) * 0x200 + i * 2, 0);
            else {
                visible = (value >> 8) & 31;
                if (visible == 31) word(scratch, 0x200 + offset, 0);
            }
            packed |= std::uint16_t(visible << (c * 5));
        }
        colors.staged_palette(i / 16)[i % 16] = packed;
    }
    colors.upload_mode = 24;
}
void finish_palette_transition(const PsiScratch& scratch, PaletteBankState& colors) {
    for (unsigned i = 0; i < 256; ++i) colors.staged_palette(i / 16)[i % 16] = word(scratch, i * 2);
    colors.upload_mode = 24;
}
} // namespace eb::native::battle
