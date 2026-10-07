#include "eb/native/world_integrity.hpp"
#include <stdexcept>
namespace eb::native {
std::uint16_t import_world_integrity_difference(std::span<const std::uint8_t> image,GameVersion version) {
    const unsigned routine=version==GameVersion::JP?0xa0fb:0xa11c;
    const unsigned expected=version==GameVersion::JP?0x1fd20:0x1ffef;
    if(image.size()<=expected+1 || image.size()<=routine+0x34)
        throw std::invalid_argument("Missing world integrity input");
    auto word=[&](unsigned offset) { return std::uint16_t(image[offset]|unsigned(image[offset+1])<<8); };
    std::uint16_t checksum=0;
    for(int i=0x33;i>=0;--i) checksum=std::uint16_t(checksum+word(routine+unsigned(i)));
    return std::uint16_t(checksum-word(expected));
}
} // namespace eb::native
