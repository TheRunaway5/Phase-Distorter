#include "eb/native/party/meter_flipout.hpp"
namespace eb::native::party {
MeterFlipout::MeterFlipout(State &party,std::uint16_t &mode,std::uint8_t &half,std::uint8_t &disabled)
    :party_(party),mode_(mode),half_speed_(half),rolling_disabled_(disabled) {}
bool MeterFlipout::uses(const State &party,const std::uint16_t &mode,
                       const std::uint8_t &half,const std::uint8_t &disabled) const noexcept {
    return &party_==&party && &mode_==&mode && &half_speed_==&half && &rolling_disabled_==&disabled;
}
void MeterFlipout::apply(std::uint16_t enabled) noexcept {
    if(!mode_ && enabled) {
        for(unsigned i=0;i<4;++i) {
            auto &character=party_.character(i+1);
            hp_[i]=character.target_hp;pp_[i]=character.target_pp;
            character.current_hp=character.target_hp=999;
            character.current_pp=character.target_pp=0;
        }
    } else if(mode_ && !enabled) {
        for(unsigned i=0;i<4;++i) {
            auto &character=party_.character(i+1);
            character.target_hp=hp_[i];character.target_pp=pp_[i];
        }
    }
    mode_=enabled;
    // RESUME_MUSIC is the source meter-control helper, despite its name.
    half_speed_=rolling_disabled_=0;
}
}
