#pragma once

#include "eb/game_version.hpp"
#include <filesystem>

namespace eb {
// Resolve only the two default import-cache names. This interface deliberately
// accepts a game identity, never a caller-chosen file to delete. Invalid enum
// values and empty preference paths throw; no directories are created and no
// asset contents are read.
std::filesystem::path cached_asset_path(const std::filesystem::path& preferences, GameVersion game);

// Return false for a missing cache. A regular file counts as present even if
// malformed/truncated, so the user can clear a broken import. Directories,
// symbolic links and other non-regular entries throw without following them.
bool cached_assets_present(const std::filesystem::path& preferences, GameVersion game);

// Delete only the selected default cache file, returning whether one existed.
// Never recurse or delete SRAM, preferences, a donor ROM or a custom pack path.
// Symbolic links are rejected. Filesystem errors propagate to the caller; the
// deletion primitive cannot remove a directory even if the entry changes after
// validation. Callers must supply the application's trusted preference folder.
bool clear_cached_assets(const std::filesystem::path& preferences, GameVersion game);
} // namespace eb
