#pragma once
#include <array>
#include <memory>
#include <span>
#include <stdexcept>
namespace eb::native::story { class SourceMeterTiles; }
namespace eb::native::math {
// One retained DIV/MULT WRAM family (US00B0..BB, JP00AE..B9). This is
// independent of the hardware multiplier/divider and the C-stack page.
class SoftwareArithmeticState final {
public:
    SoftwareArithmeticState()=default;
    SoftwareArithmeticState(const SoftwareArithmeticState&)=delete;
    SoftwareArithmeticState& operator=(const SoftwareArithmeticState&)=delete;
    std::span<const std::uint8_t,12> bytes() const noexcept {return bytes_;}
    void set_bytes(std::span<const std::uint8_t,12> value) {
        if(lease_)throw std::logic_error("Software arithmetic scratch is claimed");
        std::copy(value.begin(),value.end(),bytes_.begin());
    }
    std::weak_ptr<const void> source_lifetime() const noexcept {return lifetime_;}
    bool source_active() const noexcept {return lease_!=nullptr;}
private:
    friend class story::SourceMeterTiles;
    std::array<std::uint8_t,12> bytes_{};
    const void *lease_{};
    std::shared_ptr<const void> lifetime_=std::make_shared<const unsigned>(0);
};
}
