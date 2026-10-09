#pragma once
#include "eb/native/dialogue/menu_state.hpp"
#include "eb/native/party_trail.hpp"

namespace eb::native { class ActorWorld; }
namespace eb::native::dialogue::ambient {
// Borrowed native field access, supplied by the actual ActorWorld bridge.
// These callbacks address authored role/variable values, never source RAM or
// processor script pointers. The stable owner outlives the layout binding.
struct ActorVariables {
    void *owner{};
    std::uint16_t (*read)(void *,unsigned role,unsigned variable){};
    void (*write)(void *,unsigned role,unsigned variable,std::uint16_t){};
};
// JP unfocused register arithmetic can reach the real follower trail and
// retained menu pool. This adapter reads/writes those same typed fields. It
// has no substitute WRAM image and admits only fields with actual owners.
class Layout {
public:
    explicit Layout(std::array<WindowMenuOption,70> &menus) : menus_(menus) {}
    void bind(PartyTrail &);
    void bind(ActorWorld &);
    void bind(ActorVariables);
    bool contains_word(std::uint16_t address) const noexcept;
    std::uint16_t word(std::uint16_t address) const;
    void store_word(std::uint16_t address,std::uint16_t value);
private:
    bool contains_byte(std::uint16_t address) const noexcept;
    std::uint8_t byte(std::uint16_t address) const;
    void store_byte(std::uint16_t address,std::uint8_t value);
    std::array<WindowMenuOption,70> &menus_;
    PartyTrail *trail_{};
    std::optional<ActorVariables> actors_;
};
}
