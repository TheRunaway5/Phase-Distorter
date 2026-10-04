#pragma once

#include "eb/native/npc_catalog.hpp"

namespace eb::native {
// These authored programs publish a verified first pose without moving.
// These programs need no additional offscreen gameplay role for their preview.
constexpr bool supports_stationary_npc_preview(NpcType type, unsigned script) {
    return (type == NpcType::ItemBox && script == 9) ||
           ((type == NpcType::Person || type == NpcType::Object) &&
            (script == 7 || script == 8 || script == 605 || script == 606 || script == 693));
}
// Preserve the existing source retention policy independently of newly proven
// artwork. Adding a preview must not shorten an already active actor's lifetime.
constexpr bool uses_native_stationary_retention(NpcType type, unsigned script) {
    return (type == NpcType::Person || type == NpcType::Object) &&
           (script == 8 || script == 605 || script == 606);
}
} // namespace eb::native
