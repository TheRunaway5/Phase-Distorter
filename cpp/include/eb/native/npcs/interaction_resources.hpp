#pragma once

#include "eb/game_version.hpp"
#include "eb/native/dialogue/program.hpp"
#include <array>
#include <cstdint>
#include <memory>
#include <span>

namespace eb::native::npcs {
struct InteractionRecord {
    // Preserve the source byte. Interaction services decide how to interpret
    // it; importing does not filter records or resolve their authored text.
    std::uint8_t raw_type{};
    dialogue::ReferenceKey talk_reference{};
    std::uint16_t event_flag{};
    // CHECK reads a full word at offset13 even though npc_config declares its
    // item union member as a byte. Values >=256 mean money plus256. Other
    // types use this storage for an alternate-text DWORD; this field neither
    // resolves that pointer nor claims to contain its upper two bytes.
    std::uint16_t gift_value{};
    dialogue::ReferenceKey alternate_reference{};
    bool operator==(const InteractionRecord &) const = default;
};
struct TalkProbeOffset {
    std::int16_t x{}, y{};
    bool operator==(const TalkProbeOffset &) const = default;
};

// Immutable NPC interaction content, separate from graphical catalog/actor lifetime.
// References are authored data keys, never callable machine addresses. Null
// and currently unresolved keys are retained verbatim; the consuming service
// resolves only the selected key through its bound dialogue::Program.
class InteractionResources {
  public:
    static constexpr unsigned npc_count = 1584;
    static std::shared_ptr<const InteractionResources> import(std::span<const std::uint8_t>, GameVersion);
    GameVersion version() const { return version_; }
    const InteractionRecord &npc(unsigned id) const;
    TalkProbeOffset probe_offset(unsigned direction) const;
    std::uint16_t opposite_direction(unsigned direction) const;

  private:
    explicit InteractionResources(GameVersion version) : version_(version) {}
    GameVersion version_;
    std::array<InteractionRecord, npc_count> npcs_{};
    std::array<TalkProbeOffset, 8> probes_{};
    std::array<std::uint16_t, 8> opposites_{};
};
} // namespace eb::native::npcs
