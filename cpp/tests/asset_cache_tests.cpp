// All deletion tests operate in a newly created temporary fixture directory.
// No SDL preference lookup, real imported pack, user save or donor is accessed.
#include "eb/asset_cache.hpp"

#include <array>
#include <chrono>
#include <fstream>
#include <iostream>
#include <stdexcept>
#include <string>

namespace {
namespace fs = std::filesystem;
void require(bool condition, const char* message) {
    if (!condition) throw std::runtime_error(message);
}
template<class Work> void rejects(Work work, const char* message) {
    bool rejected = false;
    try { work(); } catch (const std::exception&) { rejected = true; }
    require(rejected, message);
}
struct TemporaryDirectory {
    fs::path path;
    TemporaryDirectory() {
        const auto base = fs::temp_directory_path();
        const auto timestamp = std::chrono::steady_clock::now().time_since_epoch().count();
        for (int attempt = 0; attempt < 100; ++attempt) {
            const auto candidate = base / ("phase-distorter-cache-test-" + std::to_string(timestamp) + "-" + std::to_string(attempt));
            if (fs::create_directory(candidate)) { path = candidate; return; }
        }
        throw std::runtime_error("Cannot create an isolated cache-test directory");
    }
    ~TemporaryDirectory() {
        std::error_code ignored;
        if (!path.empty()) fs::remove_all(path, ignored);
    }
};
void write(const fs::path& path, const std::string& text) {
    std::ofstream file(path, std::ios::binary);
    file << text;
    if (!file) throw std::runtime_error("Cannot write synthetic cache fixture");
}
std::string read(const fs::path& path) {
    std::ifstream file(path, std::ios::binary);
    if (!file) throw std::runtime_error("Protected test fixture disappeared");
    return {std::istreambuf_iterator<char>(file), std::istreambuf_iterator<char>()};
}
void require_protected(const fs::path& preferences) {
    for (const auto name : {"donor.sfc", "earthbound.srm", "mother2.srm", "display.cfg", "custom.ebpak"})
        require(read(preferences / name) == std::string("protected ") + name, "Clearing a cache changed unrelated data");
}
} // namespace

int main() {
    try {
        TemporaryDirectory fixture;
        const auto preferences = fixture.path / "preferences with spaces";
        fs::create_directory(preferences);
        const auto us = eb::cached_asset_path(preferences, eb::GameVersion::US);
        const auto jp = eb::cached_asset_path(preferences, eb::GameVersion::JP);
        require(us == preferences / "earthbound.ebpak", "US cache resolved to an unexpected path");
        require(jp == preferences / "mother2.ebpak", "Japanese cache resolved to an unexpected path");
        for (const auto name : {"donor.sfc", "earthbound.srm", "mother2.srm", "display.cfg", "custom.ebpak"})
            write(preferences / name, std::string("protected ") + name);

        for (const auto game : {eb::GameVersion::US, eb::GameVersion::JP}) {
            require(!eb::cached_assets_present(preferences, game), "Missing cache reported present");
            require(!eb::clear_cached_assets(preferences, game), "Missing cache reported removed");
            const auto missing = fixture.path / "missing" / "nested";
            require(!eb::cached_assets_present(missing, game), "Missing preferences directory reported a cache");
            require(!eb::clear_cached_assets(missing, game) && !fs::exists(missing), "Clearing missing cache created a directory");
        }

        // Corrupt and empty packs remain clearable; parsing game assets is not
        // part of cache administration and cannot be a prerequisite to repair.
        write(us, "EBCDATA1 truncated synthetic cache");
        write(jp, "");
        require(eb::cached_assets_present(preferences, eb::GameVersion::US), "Truncated cache not recognized as present");
        require(eb::cached_assets_present(preferences, eb::GameVersion::JP), "Empty cache not recognized as present");
        require(eb::clear_cached_assets(preferences, eb::GameVersion::US), "US cache was not removed");
        require(!fs::exists(us) && fs::exists(jp) && read(jp).empty(), "US clear affected Japanese cache");
        write(us, "still present US");
        require(eb::clear_cached_assets(preferences, eb::GameVersion::JP), "Japanese cache was not removed");
        require(read(us) == "still present US" && !fs::exists(jp), "Japanese clear affected US cache");
        require_protected(preferences);

        const auto invalid = static_cast<eb::GameVersion>(255);
        rejects([&] { eb::cached_asset_path(preferences, invalid); }, "Unknown game accepted by path resolver");
        rejects([&] { eb::cached_assets_present(preferences, invalid); }, "Unknown game accepted by presence check");
        rejects([&] { eb::clear_cached_assets(preferences, invalid); }, "Unknown game accepted by cache clear");
        rejects([&] { eb::clear_cached_assets({}, eb::GameVersion::US); }, "Empty preference path could target the working directory");
        require(read(us) == "still present US", "Rejected cache operation removed valid data");
        eb::clear_cached_assets(preferences, eb::GameVersion::US);

        // An empty directory is also protected, even though filesystem::remove
        // normally accepts one. A nonempty directory must never be traversed.
        fs::create_directory(us);
        rejects([&] { eb::cached_assets_present(preferences, eb::GameVersion::US); }, "Directory reported as a cache file");
        rejects([&] { eb::clear_cached_assets(preferences, eb::GameVersion::US); }, "Empty directory accepted for cache clear");
        require(fs::is_directory(us), "Empty cache-named directory was deleted");
        write(us / "donor.sfc", "nested protected donor");
        rejects([&] { eb::clear_cached_assets(preferences, eb::GameVersion::US); }, "Nonempty cache-named directory accepted");
        require(read(us / "donor.sfc") == "nested protected donor", "Cache clear recursed into a directory");
        fs::remove_all(us);

        // File, dangling and directory symlinks are all rejected. Some Windows
        // installations require Developer Mode or privileges to create them;
        // do not require those privileges to run the ordinary test suite.
        const auto linked_directory = fixture.path / "linked directory";
        fs::create_directory(linked_directory);
        write(linked_directory / "keep.txt", "protected directory target");
        unsigned symlink_cases = 0;
        for (int kind = 0; kind < 3; ++kind) {
            std::error_code error;
            if (kind == 2) fs::create_directory_symlink(linked_directory, us, error);
            else fs::create_symlink(kind == 0 ? preferences / "donor.sfc" : fixture.path / "nonexistent", us, error);
            if (error) {
#ifdef _WIN32
                std::cout << "Symlink fixture unavailable on this Windows host: " << error.message() << '\n';
                continue;
#else
                throw fs::filesystem_error("Cannot create symlink fixture", us, error);
#endif
            }
            ++symlink_cases;
            rejects([&] { eb::cached_assets_present(preferences, eb::GameVersion::US); }, "Symlink followed during cache presence check");
            rejects([&] { eb::clear_cached_assets(preferences, eb::GameVersion::US); }, "Symlink accepted for cache clear");
            require(fs::is_symlink(fs::symlink_status(us)), "Rejected operation unlinked a symbolic link");
            require_protected(preferences);
            require(read(linked_directory / "keep.txt") == "protected directory target", "Directory symlink target was changed");
            fs::remove(us);
        }
        require_protected(preferences);
        std::cout << "Asset cache paths, removal, isolation, corruption, directories and invalid games passed; "
                  << symlink_cases << " symlink cases checked\n";
    } catch (const std::exception& error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
