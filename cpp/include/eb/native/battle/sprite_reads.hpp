#pragma once
#include "eb/native/battle/startup_graphics.hpp"
#include "eb/native/peripheral_state.hpp"
namespace eb::native::battle {
class SpriteReads final : public BattleSpriteReadSource {
public:
    explicit SpriteReads(PeripheralState& state) : state_(state) {}
    std::uint8_t read(std::uint32_t address, std::uint8_t bus) override { return state_.read(address, bus); }
    void multiply(std::uint16_t columns, std::uint16_t rows) override { state_.multiply_word(columns, rows); }
private:
    PeripheralState& state_;
};
} // namespace eb::native::battle
