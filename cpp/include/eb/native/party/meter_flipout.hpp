#pragma once
#include "eb/native/party/state.hpp"
namespace eb::native::party {
// C12D17's retained four-player backups and live meter controls. Enabling
// saves targets only once; disabling restores targets while rolling values
// retain the work performed by the actual HP/PP roller.
class MeterFlipout {
public:
    MeterFlipout(State &,std::uint16_t &mode,std::uint8_t &half_speed,std::uint8_t &rolling_disabled);
    MeterFlipout(const MeterFlipout &) = delete;
    MeterFlipout &operator=(const MeterFlipout &) = delete;
    void apply(std::uint16_t enabled) noexcept;
    bool uses(const State &,const std::uint16_t &,const std::uint8_t &,const std::uint8_t &) const noexcept;
    const std::array<std::uint16_t,4> &hp_backups() const noexcept {return hp_;}
    const std::array<std::uint16_t,4> &pp_backups() const noexcept {return pp_;}
private:
    State &party_;
    std::uint16_t &mode_;
    std::uint8_t &half_speed_,&rolling_disabled_;
    std::array<std::uint16_t,4> hp_{},pp_{};
};
}
