#pragma once

#include "eb/game_version.hpp"
#include "eb/snapshot_types.hpp"

#include <cstdint>
#include <filesystem>
#include <span>
#include <string_view>
#include <vector>

namespace eb {
// One application-selected directory per game. Display names never become
// filenames; state validation and restoration belong to GameSession.
class SnapshotStore {
public:
    explicit SnapshotStore(std::filesystem::path directory);
    std::vector<SaveStateSnapshotInfo> list() const;
    SaveStateSnapshotInfo save(std::string_view name, std::uint64_t frames,
                               std::span<const std::uint8_t> payload);
    std::vector<std::uint8_t> load(std::string_view id) const;
    void erase(std::string_view id);

private:
    std::filesystem::path directory_;
};
} // namespace eb
