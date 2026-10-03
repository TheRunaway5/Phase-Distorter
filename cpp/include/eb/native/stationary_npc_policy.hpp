#pragma once

#include "eb/native/npc_catalog.hpp"

namespace eb::native {
// These authored programs publish a verified first pose without moving.
// Share the classification between graphical readiness and source admission:
// a supported preview does not need an additional offscreen gameplay role.
constexpr bool supports_stationary_npc_preview(NpcType type, unsigned script) {
    return (type == NpcType::Person || type == NpcType::Object) &&
           (script == 8 || script == 605 || script == 606);
}
} // namespace eb::native
