#include "eb/native/peripheral_state.hpp"
#include <stdexcept>

namespace eb::native {
PeripheralState::PeripheralState() { for (auto& channel : dma_) channel.fill(0xff); }
void PeripheralState::bind_clock(PeripheralClock& clock) {
    if (clock_ && clock_ != &clock) throw std::logic_error("Peripheral state has another physical clock");
    clock_ = &clock;
}
void PeripheralState::serial_strobe(bool value) noexcept {
    if (value || strobe_) { serial_latch_ = buttons_; serial_position_ = 0; }
    strobe_ = value;
}
void PeripheralState::elapsed(unsigned clocks) noexcept {
    if (!auto_clocks_) return;
    if (clocks >= auto_clocks_) { auto_clocks_ = 0; auto_buttons_ = buttons_; }
    else auto_clocks_ -= clocks;
}
void PeripheralState::multiply_byte(std::uint8_t a, std::uint8_t b) noexcept { product_ = a * b; }
void PeripheralState::divide_word(std::uint16_t a, std::uint8_t b) noexcept {
    quotient_ = b ? std::uint16_t(a / b) : 0xffff;
    product_ = b ? std::uint16_t(a % b) : a;
}
void PeripheralState::multiply_word(std::uint16_t a, std::uint16_t b) noexcept {
    multiply_byte(std::uint8_t(b), std::uint8_t(a));
    multiply_byte(std::uint8_t(b >> 8), std::uint8_t(a));
    multiply_byte(std::uint8_t(b), std::uint8_t(a >> 8));
}
void PeripheralState::complete_dma(unsigned channel, std::uint8_t mode, std::uint8_t port,
    std::uint32_t source, std::uint16_t count) {
    auto& r = dma_.at(channel);
    const unsigned size = count ? count : 65536;
    const auto after = std::uint16_t(source + ((mode & 8) ? 0 : (mode & 16) ? -size : size));
    r[0] = mode; r[1] = port; r[2] = std::uint8_t(after); r[3] = std::uint8_t(after >> 8);
    r[4] = std::uint8_t(source >> 16); r[5] = r[6] = 0;
}
void PeripheralState::publish_oam(std::uint8_t id) noexcept {
    if (id) complete_dma(0, 0, 4, id == 1 ? 0x500 : 0x800, 0x220);
}
void PeripheralState::publish_palette(std::uint8_t mode) {
    if (!mode) return;
    // PALETTE_DMA_PARAMETERS: backgrounds, objects, or all256 colors.
    if (mode == 8) complete_dma(0, 0, 0x22, 0x200, 0x100);
    else if (mode == 16) complete_dma(0, 0, 0x22, 0x300, 0x100);
    else if (mode == 24) complete_dma(0, 0, 0x22, 0x200, 0x200);
    else throw std::domain_error("Unsupported palette DMA parameter alias");
}
std::uint8_t PeripheralState::read(std::uint32_t address, std::uint8_t bus) {
    const auto bank = address >> 16;
    const auto at = std::uint16_t(address);
    if (!((bank <= 0x3f) || (bank >= 0x80 && bank <= 0xbf)) || at < 0x3f00 || at >= 0x6000)
        throw std::out_of_range("Live sprite read exceeds the owned peripheral register range");
    if (at == 0x4016) {
        if (strobe_) { serial_latch_ = buttons_; serial_position_ = 0; }
        const auto bit = serial_position_ < 16 ? (serial_latch_ >> (15 - serial_position_)) & 1 : 1;
        if (!strobe_ && serial_position_ < 16) ++serial_position_;
        return std::uint8_t((bus & 0xfc) | bit);
    }
    if (at == 0x4017) return std::uint8_t((bus & 0xe0) | 0x1c);
    if (at == 0x4210) {
        if (!clock_) throw std::logic_error("Live RDNMI read requires the actual physical clock");
        return std::uint8_t((clock_->acknowledge_nmi() ? 0x80 : 0) | (bus & 0x70) | 2);
    }
    if (at == 0x4211) { const bool value = irq_; irq_ = false; return std::uint8_t((value ? 0x80 : 0) | (bus & 0x7f)); }
    if (at == 0x4212) {
        if (!clock_) throw std::logic_error("Live HVBJOY read requires the actual physical clock");
        return std::uint8_t(clock_->blanking_status() | (auto_clocks_ ? 1 : 0) | (bus & 0x3e));
    }
    if (at == 0x4213) return wrio_;
    if (at == 0x4214 || at == 0x4215) return std::uint8_t(quotient_ >> ((at & 1) * 8));
    if (at == 0x4216 || at == 0x4217) return std::uint8_t(product_ >> ((at & 1) * 8));
    if (at == 0x4218 || at == 0x4219) return std::uint8_t(auto_buttons_ >> ((at & 1) * 8));
    if (at >= 0x421a && at <= 0x421f) return 0;
    if (at >= 0x4320 && at < 0x4380)
        throw std::out_of_range("Live read requires the retained HDMA channel owner");
    if (at >= 0x4300 && at < 0x4320) {
        unsigned index = at & 15;
        if (index >= 12 && index <= 14) return bus;
        if (index == 15) index = 11;
        return dma_[(at - 0x4300) / 16][index];
    }
    return bus;
}
} // namespace eb::native
