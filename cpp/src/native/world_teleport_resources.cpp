#include "eb/native/world_teleport_resources.hpp"
#include <stdexcept>
#include <algorithm>

namespace eb::native {
WorldTeleportResources::WorldTeleportResources(std::span<const std::uint8_t> bytes,GameVersion version)
    : version_(version) {
    const unsigned destinations=version==GameVersion::US?0x15ebab:
                                version==GameVersion::JP?0x15eb0b:0;
    if (!destinations) throw std::invalid_argument("Unsupported general teleport content region");
    constexpr unsigned transitions=0x101400;
    const std::uint32_t buzz=version==GameVersion::US?0xc5ea35:0xc50425;
    if (destinations>bytes.size() || destination_count*8>bytes.size()-destinations ||
        transitions>bytes.size() || transition_count*12>bytes.size()-transitions)
        throw std::invalid_argument("Truncated general teleport or screen transition content");
    const auto word=[&](unsigned at) {return std::uint16_t(bytes[at]|unsigned(bytes[at+1])<<8);};
    const unsigned sine=version==GameVersion::US?0xb425:0xb404;
    if(sine>bytes.size() || sine_.size()>bytes.size()-sine)
        throw std::invalid_argument("Truncated screen-transition sine content");
    std::copy_n(bytes.begin()+sine,sine_.size(),sine_.begin());
    buzz_buzz_={std::uint8_t(buzz),std::uint8_t(buzz>>8),std::uint8_t(buzz>>16),0};
    for(unsigned index=0;index<destination_count;++index) {
        const unsigned at=destinations+index*8;
        destinations_[index]={word(at),word(at+2),bytes[at+4],bytes[at+5],word(at+6)};
    }
    for(unsigned index=0;index<transition_count;++index) {
        const unsigned at=transitions+index*12;
        transitions_[index]={bytes[at],bytes[at+1],bytes[at+2],bytes[at+3],bytes[at+4],word(at+5),
                             bytes[at+7],bytes[at+8],bytes[at+9],bytes[at+10],bytes[at+11]};
    }
}
std::array<std::uint16_t,2> WorldTeleportResources::motion(std::uint8_t direction,std::uint16_t speed) const noexcept {
    const auto angle=std::uint8_t(unsigned(direction)*4+128);
    const int amplitude=speed<0x8000?int(speed):int(speed)-65536;
    const auto product=[&](std::uint8_t phase) {
        const int sample=sine_[phase]<128?int(sine_[phase]):int(sine_[phase])-256;
        const int value=amplitude*sample;
        return std::uint16_t(value>=0?value/256:(value-255)/256);
    };
    return {product(angle),product(std::uint8_t(angle-64))};
}
} // namespace eb::native
