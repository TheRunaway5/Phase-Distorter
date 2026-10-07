#pragma once
#include "eb/game_version.hpp"
#include "eb/native/dialogue/runtime.hpp"
#include <array>
#include <memory>
#include <span>

namespace eb::native::battle::actions {
// A typed native action identity, resolved once from the imported catalog.
// The executor never retains or calls source function pointers.
enum class Kind {
    None,
#define ACTION_KIND(name, us, jp) name,
#include "eb/native/battle/actions/kinds.inc"
#undef ACTION_KIND
};
enum class Text {
#define ACTION_TEXT(name, us, jp) name,
#include "eb/native/battle/actions/messages.inc"
#undef ACTION_TEXT
    Count
};
class Resources {
public:
    static std::shared_ptr<const Resources> import(std::span<const std::uint8_t>, GameVersion);
    GameVersion version() const noexcept { return version_; }
    Kind kind(unsigned action) const { return kinds_.at(action); }
    bool targets_dead(unsigned action) const;
    bool group_contains(unsigned group, unsigned enemy) const;
    const std::array<std::uint16_t,16>& attack_palette(unsigned kind) const { return attack_palettes_.at(kind); }
    std::span<const std::array<std::uint8_t,7>> condiments() const { return condiments_; }
    unsigned prayer(unsigned roll) const { return prayers_.at(roll); }
    const dialogue::ReferenceKey& prayer_text(unsigned prayer) const { return prayer_texts_.at(prayer); }
    const dialogue::ReferenceKey& text(Text value) const { return messages_.at(unsigned(value)); }
private:
    explicit Resources(GameVersion version) : version_(version) {}
    GameVersion version_;
    std::array<Kind,318> kinds_{};
    std::array<std::uint16_t,32> dead_actions_{};
    std::array<std::vector<std::uint16_t>,484> groups_{};
    std::array<std::array<std::uint16_t,16>,3> attack_palettes_{};
    std::vector<std::array<std::uint8_t,7>> condiments_;
    std::array<std::uint8_t,16> prayers_{};
    std::array<dialogue::ReferenceKey,10> prayer_texts_{};
    std::array<dialogue::ReferenceKey,unsigned(Text::Count)> messages_{};
};
} // namespace eb::native::battle::actions
