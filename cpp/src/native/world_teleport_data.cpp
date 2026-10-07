#include "eb/native/world_teleport.hpp"
#include <stdexcept>

namespace eb::native {
WorldTeleportData::WorldTeleportData(std::span<const std::uint8_t> image, GameVersion version)
    : version_(version) {
    std::size_t at;
    unsigned name;
    if(version==GameVersion::US) {at=0x157880;name=25;}
    else if(version==GameVersion::JP) {at=0x15899e;name=10;}
    else throw std::invalid_argument("Unsupported teleport content region");
    const unsigned stride=name+6;
    if(at>image.size() || image.size()-at<destinations_.size()*stride)
        throw std::invalid_argument("Truncated teleport content");
    const auto word=[&](std::size_t offset) {
        return std::uint16_t(image[offset] | unsigned(image[offset+1])<<8);
    };
    for(auto &row:destinations_) {
        row={word(at+name),word(at+name+2),word(at+name+4)};at+=stride;
    }
}
} // namespace eb::native
