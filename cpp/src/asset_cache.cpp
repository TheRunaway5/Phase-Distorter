#include "eb/asset_cache.hpp"

#include <cerrno>
#include <stdexcept>
#include <system_error>

#ifdef _WIN32
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>
#else
#include <unistd.h>
#endif

namespace eb {
namespace {
bool regular_cache_exists(const std::filesystem::path& path) {
    std::error_code error;
    // symlink_status inspects the entry itself, including dangling links. A
    // link must never make this API follow a donor ROM or another cache folder.
    const auto status = std::filesystem::symlink_status(path, error);
    if (error == std::errc::no_such_file_or_directory) return false;
    if (error) throw std::filesystem::filesystem_error("Cannot inspect cached assets", path, error);
    if (status.type() == std::filesystem::file_type::not_found) return false;
    if (!std::filesystem::is_regular_file(status))
        throw std::filesystem::filesystem_error("Cached assets must be a regular file; directories and symbolic links are not cleared",
            path, std::make_error_code(std::errc::invalid_argument));
    return true;
}
} // namespace

std::filesystem::path cached_asset_path(const std::filesystem::path& preferences, GameVersion game) {
    if (preferences.empty()) throw std::invalid_argument("Asset cache preferences directory is empty");
    switch (game) {
    case GameVersion::US: return preferences / "earthbound.ebpak";
    case GameVersion::JP: return preferences / "mother2.ebpak";
    }
    throw std::invalid_argument("Unknown game version for asset cache");
}

bool cached_assets_present(const std::filesystem::path& preferences, GameVersion game) {
    return regular_cache_exists(cached_asset_path(preferences, game));
}

bool clear_cached_assets(const std::filesystem::path& preferences, GameVersion game) {
    const auto path = cached_asset_path(preferences, game);
    if (!regular_cache_exists(path)) return false;
    // Use a file-only operation instead of filesystem::remove, which also
    // accepts empty directories. If another process replaces the entry after
    // inspection, these operations still never recurse or remove a directory.
#ifdef _WIN32
    if (DeleteFileW(path.c_str())) return true;
    const auto error = GetLastError();
    if (error == ERROR_FILE_NOT_FOUND || error == ERROR_PATH_NOT_FOUND) return false;
    throw std::filesystem::filesystem_error("Cannot clear cached assets", path,
        std::error_code(static_cast<int>(error), std::system_category()));
#else
    if (::unlink(path.c_str()) == 0) return true;
    const int error = errno;
    if (error == ENOENT) return false;
    throw std::filesystem::filesystem_error("Cannot clear cached assets", path,
        std::error_code(error, std::generic_category()));
#endif
}
} // namespace eb
