#include "eb/native/world_palette_shift.hpp"
namespace eb::native {
std::array<std::uint16_t,256> shift_map_palette(
    std::span<const std::uint16_t,256> backup,std::uint16_t delta) noexcept {
  const auto component=[delta](unsigned value) {
    const auto sum=std::uint16_t(value+delta);
    return sum>0x8000?0u:sum>31?31u:unsigned(sum&31);
  };
  std::array<std::uint16_t,256> shifted;
  for(unsigned i=0;i<shifted.size();++i) {
    const auto color=backup[i];
    shifted[i]=std::uint16_t(component(color&31)|(component((color>>5)&31)<<5)|
                             (component((color>>10)&31)<<10));
  }
  return shifted;
}
}
