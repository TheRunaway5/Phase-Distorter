#pragma once
#include "eb/game_version.hpp"
#include <array>
#include <cstdint>
#include <optional>
#include <span>
#include <stdexcept>

namespace eb::native::display {
// SBRK's two retained display banks. Allocation never clears their contents;
// an exhausted bank waits for a real NMI to select the other one. This owns
// temporary row/descriptor bytes, independently of persistent game state.
class TransientMemory {
public:
  struct Allocation {
    std::span<std::uint8_t> bytes;
    std::span<const std::uint8_t> bank;
    std::uint16_t offset{};
    std::uint32_t identity{};
  };
  void configure(GameVersion version) {
    if(version!=GameVersion::US && version!=GameVersion::JP)
      throw std::invalid_argument("Unknown display transient-memory region");
    if(version_ && *version_!=version)
      throw std::logic_error("Display transient memory has another regional owner");
    version_=version;
  }
  unsigned capacity() const noexcept {return version_==GameVersion::JP?1024:512;}
  unsigned selected_bank() const noexcept {return selected_;}
  unsigned cursor() const noexcept {return cursor_;}
  std::uint16_t base_address() const noexcept {return std::uint16_t(0x2000+selected_*capacity());}
  std::uint16_t current_address() const noexcept {return std::uint16_t(base_address()+cursor_);}
  void set_source_current_address(std::uint16_t address) {
    if(!version_ || address<0x2000 || address>0x2000+2*capacity())
      throw std::out_of_range("Source heap pointer exceeds the retained display banks");
    cursor_=std::uint16_t(address-base_address());
  }
  std::span<std::uint8_t> bank(unsigned index) {
    if(index>1)throw std::out_of_range("Unknown display transient bank");
    return std::span(banks_).subspan(index*capacity(),capacity());
  }
  // LOAD_SPECIAL_SPRITE_PALETTE uses a wrapped low-word WRAM address. Only
  // the actual two regional SBRK banks belong to this owner; another address
  // must be resolved by its real retained owner, never padded or normalized.
  std::array<std::uint16_t,16> read_words16(std::uint16_t source_address) const {
    if(!version_)throw std::logic_error("Photograph palette read requires its actual region");
    const unsigned start=source_address;
    const unsigned size=capacity();
    if(start<0x2000 || start+32>0x2000+2*size)
      throw std::out_of_range("Photograph palette source is outside retained display banks");
    const auto byte=[&](unsigned offset) {
      return banks_[offset];
    };
    std::array<std::uint16_t,16> words{};
    for(unsigned i=0;i<words.size();++i) {
      const unsigned offset=start-0x2000+i*2;
      words[i]=std::uint16_t(byte(offset) | (unsigned(byte(offset+1))<<8));
    }
    return words;
  }
  std::optional<Allocation> allocate(unsigned count) {
    if(count>=capacity())throw std::out_of_range("Display allocation cannot fit its source bank");
    // Literal word arithmetic also preserves a CURRENT pointer loaded before
    // NMI changed BASE. It can still refer to the other actual retained bank.
    const auto address=current_address();
    const auto next=std::uint16_t(address+count);
    if(std::uint16_t(next-capacity())>=base_address())return {};
    const unsigned origin=address-0x2000;
    if(address<0x2000 || origin+count>2*capacity())
      throw std::out_of_range("Admitted source allocation leaves retained heap storage");
    cursor_=std::uint16_t(next-base_address());
    const unsigned actual_bank=origin/capacity(),offset=origin%capacity();
    auto bytes=bank(actual_bank);
    // A stale lower pointer may span the contiguous two-bank heap. Preserve
    // that actual allocation while its source span covers the same owned union.
    if(offset+count>capacity()) {
      auto all=std::span(banks_).first(2*capacity());
      return Allocation{all.subspan(origin,count),all,std::uint16_t(origin),0x7e2000};
    }
    return Allocation{bytes.subspan(offset,count),bytes,std::uint16_t(offset),
                      0x7e2000u+actual_bank*capacity()};
  }
  void after_interrupt() noexcept {selected_^=1;cursor_=0;}
  void after_immediate_transfer() noexcept {cursor_=0;}
  // The linked photograph clear overwrites both actual heap banks. It does
  // not change SBRK's current bank, cursor or allocation admission.
  void clear_for_photograph() {
    if(!version_)throw std::logic_error("Photograph heap clear requires its actual region");
    for(unsigned index=0;index<2;++index)
      for(auto &byte:bank(index))byte=0;
  }
private:
  std::array<std::uint8_t,2048> banks_{};
  std::optional<GameVersion> version_;
  unsigned selected_{},cursor_{};
};
}
