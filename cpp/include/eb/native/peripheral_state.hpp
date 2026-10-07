#pragma once

#include <array>
#include <cstdint>

namespace eb::native {
// The physical clock owns these latches. Reading RDNMI acknowledges that
// latch, independently of the gameplay NEW_FRAME_STARTED byte.
class PeripheralClock {
public:
    virtual ~PeripheralClock() = default;
    virtual bool acknowledge_nmi() noexcept = 0;
    virtual std::uint8_t blanking_status() const noexcept = 0;
};

// Retained peripheral results shared by real native producers. This is not a
// CPU/bus interpreter: callers publish completed DMA/math operations and the
// actual physical clock advances the controller's auto-read interval.
class PeripheralState {
public:
    PeripheralState();
    PeripheralState(const PeripheralState&) = delete;
    PeripheralState& operator=(const PeripheralState&) = delete;
    void bind_clock(PeripheralClock&);
    bool uses(const PeripheralClock& clock) const noexcept { return clock_ == &clock; }
    void set_buttons(std::uint16_t buttons) noexcept { buttons_ = buttons; }
    void serial_strobe(bool) noexcept;
    void begin_auto_read() noexcept { auto_clocks_ = 4224; }
    void elapsed(unsigned master_clocks) noexcept;
    void set_wrio(std::uint8_t value) noexcept { wrio_ = value; }
    void raise_irq() noexcept { irq_ = true; }
    void multiply_byte(std::uint8_t, std::uint8_t) noexcept;
    void divide_word(std::uint16_t, std::uint8_t) noexcept;
    void multiply_word(std::uint16_t, std::uint16_t) noexcept;
    // The caller has completed the actual transfer. Retain its final A1T and
    // zero DAS; fixed sources do not advance and increment wraps within bank.
    void complete_dma(unsigned channel, std::uint8_t mode, std::uint8_t port,
                      std::uint32_t source, std::uint16_t count);
    void publish_oam(std::uint8_t display_id) noexcept;
    void publish_palette(std::uint8_t upload_mode);
    std::uint8_t read(std::uint32_t address, std::uint8_t incoming_bus);
    const std::array<std::uint8_t, 16>& dma(unsigned channel) const { return dma_.at(channel); }
    std::uint16_t quotient() const noexcept { return quotient_; }
    std::uint16_t product() const noexcept { return product_; }
    std::uint16_t auto_buttons() const noexcept { return auto_buttons_; }
    unsigned serial_position() const noexcept { return serial_position_; }
private:
    PeripheralClock* clock_{};
    std::array<std::array<std::uint8_t, 16>, 2> dma_{};
    std::uint16_t buttons_{}, serial_latch_{}, auto_buttons_{}, quotient_{}, product_{};
    unsigned serial_position_{}, auto_clocks_{};
    std::uint8_t wrio_ = 0xff;
    bool strobe_{}, irq_{};
};
} // namespace eb::native
