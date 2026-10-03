#pragma once

#include <cstdint>
#include <string>

namespace eb {
// IDs are application-owned opaque handles, never UI-derived paths.
struct SaveStateSnapshotInfo {
    std::string id, name, created_at;
    std::uint64_t frames{};
    std::int64_t created_at_unix{};
};

struct SaveStateSnapshotRequest {
    enum class Kind { Save, Load, Delete, Refresh };
    Kind kind;
    // Save carries a display name; Load/Delete carry a copied opaque ID.
    std::string value;
};
} // namespace eb
