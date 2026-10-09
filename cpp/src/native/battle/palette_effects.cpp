#include "eb/native/battle/palette_effects.hpp"
#include <stdexcept>

namespace eb::native::battle {
PackedPalette& PaletteBankState::palette(unsigned bank) {
    if (bank >= 4) throw std::out_of_range("Invalid alternate palette bank");
    return staged[12 + bank];
}
const PackedPalette& PaletteBankState::palette(unsigned bank) const {
    if (bank >= 4) throw std::out_of_range("Invalid alternate palette bank");
    return staged[12 + bank];
}
bool PaletteBankState::publish_pending() {
    if (!upload_mode) return false;
    if (upload_mode != 8 && upload_mode != 16 && upload_mode != 24)
        throw std::domain_error("Unsupported palette DMA parameter alias");
    const unsigned first = upload_mode == 16 ? 8 : 0;
    const unsigned end = upload_mode == 8 ? 8 : 16;
    upload_mode = 0;
    for (unsigned bank = first; bank < end; ++bank)
        for (unsigned color = 0; color < 16; ++color)
            displayed[bank][color] = std::uint16_t(staged[bank][color] & 0x7fff);
    return true;
}

PaletteEffects::PaletteEffects(PaletteBankState& palettes, PaletteEffectState& state)
    : palettes_(palettes), palette_lifetime_(palettes.source_lifetime()), state_(state) {}

bool PaletteEffects::uses(const PaletteBankState& palettes,
                          const PaletteEffectState& state) const noexcept {
    return !palette_lifetime_.expired()&&&palettes == &palettes_ && &state == &state_;
}

void PaletteEffects::set_speed(std::uint16_t speed) {
    if(palette_lifetime_.expired())throw std::logic_error("Palette effect transport expired");
    palettes_.require_semantic_write();
    state_.speed = speed;
}

void PaletteEffects::reverse(unsigned index, std::uint16_t speed) {
    if(palette_lifetime_.expired())throw std::logic_error("Palette effect transport expired");
    palettes_.require_semantic_write();
    auto& bank = state_.banks.at(index);
    state_.speed = speed;
    bank.frames_left = speed;
    for (unsigned i = 0; i < bank.deltas.size(); ++i) {
        bank.deltas[i] = static_cast<std::uint16_t>(0u - bank.deltas[i]);
        bank.counters[i] = 0;
    }
}

void PaletteEffects::target(unsigned color, std::uint16_t red,
                            std::uint16_t green, std::uint16_t blue) {
    if(palette_lifetime_.expired())throw std::logic_error("Palette effect transport expired");
    palettes_.require_semantic_write();
    // Resolve the owned index before changing either state owner.
    auto& bank = state_.banks.at(color / 16);
    const auto packed = palettes_.palette(color / 16)[color % 16];
    const std::array<std::uint16_t, 3> desired{red, green, blue};
    constexpr std::array<std::uint16_t, 3> unit{1, 32, 1024};
    bank.frames_left = state_.speed;
    for (unsigned channel = 0; channel < 3; ++channel) {
        const auto current = std::uint16_t((packed >> (channel * 5)) & 31u);
        const auto at = (color % 16) * 3 + channel;
        if (desired[channel] > current) {
            bank.steps[at] = std::uint16_t(desired[channel] - current);
            bank.deltas[at] = unit[channel];
        } else if (desired[channel] < current) {
            bank.steps[at] = std::uint16_t(current - desired[channel]);
            bank.deltas[at] = std::uint16_t(0u - unit[channel]);
        } else {
            bank.deltas[at] = 0;
        }
        bank.counters[at] = 0;
    }
}

void PaletteEffects::advance() {
    if(palette_lifetime_.expired())throw std::logic_error("Palette effect transport expired");
    palettes_.require_semantic_write();
    if (state_.speed == 0) {
        for (const auto& bank : state_.banks) {
            if (!bank.frames_left) continue;
            for (unsigned at = 3; at < bank.deltas.size(); ++at)
                if (bank.deltas[at])
                    throw std::domain_error("Zero-speed enemy palette effect does not terminate");
        }
    }
    for (unsigned index = 0; index < state_.banks.size(); ++index) {
        auto& bank = state_.banks[index];
        if (!bank.frames_left) continue;
        --bank.frames_left;
        auto& colors = palettes_.palette(index);
        for (unsigned color = 1; color < colors.size(); ++color) {
            for (unsigned channel = 0; channel < 3; ++channel) {
                const auto at = color * 3 + channel;
                if (!bank.deltas[at]) continue;
                // Source wraps the accumulator before its unsigned repeated
                // subtraction. Quotient/remainder preserve the complete loop,
                // including raw packed-word carries across color channels.
                const auto counter = std::uint16_t(bank.counters[at] + bank.steps[at]);
                const auto count = counter / state_.speed;
                bank.counters[at] = std::uint16_t(counter % state_.speed);
                colors[color] = std::uint16_t(std::uint32_t(colors[color]) +
                    std::uint32_t(bank.deltas[at]) * std::uint32_t(count));
            }
        }
        palettes_.upload_mode = 16;
    }
}
} // namespace eb::native::battle
