#include "eb/snapshot_store.hpp"

#include <algorithm>
#include <chrono>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <iterator>
#include <stdexcept>
#include <string>
#include <vector>

namespace {
void require(bool value, const char* message) { if (!value) throw std::runtime_error(message); }
template<class Action> void rejects(Action action, const char* message) {
    try { action(); }
    catch (const std::exception&) { return; }
    throw std::runtime_error(message);
}
struct Fixture {
    std::filesystem::path root = std::filesystem::temp_directory_path() /
        ("eb-snapshot-store-" + std::to_string(std::chrono::steady_clock::now().time_since_epoch().count()));
    Fixture() { std::filesystem::create_directory(root); }
    ~Fixture() { std::error_code error; std::filesystem::remove_all(root, error); }
};
std::filesystem::path file_path(const std::filesystem::path& directory, const eb::SaveStateSnapshotInfo& info) {
    return directory / (info.id + ".ebstate");
}
std::vector<std::uint8_t> read_bytes(const std::filesystem::path& path) {
    std::ifstream input(path, std::ios::binary);
    require(bool(input), "Could not read snapshot fixture");
    return {std::istreambuf_iterator<char>(input), std::istreambuf_iterator<char>()};
}
void write_bytes(const std::filesystem::path& path, const std::vector<std::uint8_t>& bytes) {
    std::ofstream output(path, std::ios::binary | std::ios::trunc);
    output.write(reinterpret_cast<const char*>(bytes.data()), std::streamsize(bytes.size()));
    require(bool(output), "Could not write snapshot fixture");
}
void persistence_and_management() {
    Fixture fixture;
    const auto directory = fixture.root / "earthbound-snapshots";
    eb::SnapshotStore store(directory);
    require(store.list().empty() && !std::filesystem::exists(directory), "An empty listing created snapshot storage");
    const std::vector<std::uint8_t> before{0, 1, 2, 255, 19, 0, 64};
    const std::vector<std::uint8_t> later{42, 0, 16, 240, 128};
    const auto first = store.save("Before Paula joins", 0x123456789abcdef0ull, before);
    const auto second = store.save("Before Paula joins", 2345, later);
    const auto unicode = store.save("ポーラ / Café ## snapshot", 3456, before);
    require(first.id != second.id && second.id != unicode.id && first.id != unicode.id,
        "Duplicate snapshot names reused an opaque ID");
    require(first.name == "Before Paula joins" && first.frames == 0x123456789abcdef0ull &&
        first.created_at_unix > 0 && !first.created_at.empty(), "Saving lost snapshot display metadata");
    require(first.id.find("Paula") == std::string::npos && unicode.id.find("Café") == std::string::npos,
        "Snapshot names escaped into filenames");
    eb::SnapshotStore reopened(directory);
    auto listing = reopened.list();
    require(listing.size() == 3, "Reopening the store lost persisted snapshots");
    const auto found = std::find_if(listing.begin(), listing.end(), [&](const auto& entry) { return entry.id == first.id; });
    require(found != listing.end() && found->name == first.name && found->frames == first.frames &&
        found->created_at_unix == first.created_at_unix, "Persisted metadata changed after reopening");
    require(reopened.load(first.id) == before && reopened.load(second.id) == later && reopened.load(unicode.id) == before,
        "Loading returned another snapshot or changed opaque state bytes");
    const auto unicode_entry = std::find_if(listing.begin(), listing.end(), [&](const auto& entry) { return entry.id == unicode.id; });
    require(unicode_entry != listing.end() && unicode_entry->name == unicode.name, "UTF-8 display names did not survive persistence");
    const auto unrelated = directory / "keep.srm";
    const auto unrecognized = directory / "README.ebstate";
    write_bytes(unrelated, later);
    write_bytes(unrecognized, before);
    write_bytes(directory / ".foreign.tmp", before);
    require(reopened.list().size() == 3, "Listing treated unrelated files as snapshot handles");
    reopened.erase(second.id);
    require(reopened.list().size() == 2 && reopened.load(first.id) == before && reopened.load(unicode.id) == before,
        "Deleting a selected snapshot changed another snapshot");
    require(read_bytes(unrelated) == later && read_bytes(unrecognized) == before &&
        std::filesystem::exists(directory / ".foreign.tmp"), "Snapshot deletion changed unrelated files");
    rejects([&] { reopened.load(second.id); }, "A deleted snapshot still loaded");
    rejects([&] { reopened.erase(second.id); }, "Deleting a missing snapshot silently succeeded");
    for (const auto& entry : std::filesystem::directory_iterator(directory))
        require(entry.path().filename().string().find(".snapshot-") != 0, "A successful save left an incomplete temporary file");
}
void malformed_files_and_inputs() {
    Fixture fixture;
    const auto directory = fixture.root / "snapshots";
    eb::SnapshotStore store(directory);
    const std::vector<std::uint8_t> payload{17, 0, 255, 85, 4, 99};
    for (const std::string& name : {std::string(), std::string("   "), std::string("bad\nname"),
                                 std::string(129, 'a'), std::string("null\0name", 9), std::string("\xc0\xaf", 2)})
        rejects([&] { store.save(name, 0, payload); }, "An invalid snapshot display name was accepted");
    rejects([&] { store.save("No state", 0, {}); }, "An empty snapshot state was saved");
    require(!std::filesystem::exists(directory), "Rejected save requests created snapshot files");
    const auto good = store.save(std::string(128, 'a'), 9876, payload);
    const auto corrupt = store.save("Broken payload", 4567, payload);
    const auto corrupt_path = file_path(directory, corrupt);
    auto bytes = read_bytes(corrupt_path);
    bytes[bytes.size() - 9] ^= 1;
    write_bytes(corrupt_path, bytes);
    auto unchanged = payload;
    rejects([&] { unchanged = store.load(corrupt.id); }, "A damaged snapshot payload passed checksum validation");
    require(unchanged == payload && store.load(good.id) == payload, "Failed snapshot loading changed caller state or another snapshot");
    auto listing = store.list();
    const auto broken = std::find_if(listing.begin(), listing.end(), [&](const auto& entry) { return entry.id == corrupt.id; });
    require(broken != listing.end() && broken->name == "Broken payload" && broken->frames == 4567,
        "Listing could not read bounded metadata independently of the state payload");
    store.erase(corrupt.id);
    require(store.list().size() == 1 && store.load(good.id) == payload, "Deleting a corrupt snapshot affected the valid one");
    const auto damaged = store.save("Invalid envelope", 999, payload);
    const auto damaged_path = file_path(directory, damaged);
    const auto original = read_bytes(damaged_path);
    for (unsigned mode = 0; mode < 5; ++mode) {
        auto changed = original;
        if (mode == 0) changed.resize(20);
        if (mode == 1) changed[0] ^= 1;
        if (mode == 2) changed[8] = 255;
        if (mode == 3) changed.push_back(0);
        if (mode == 4) std::fill(changed.begin() + 32, changed.begin() + 40, 255);
        write_bytes(damaged_path, changed);
        rejects([&] { store.load(damaged.id); }, "A truncated, unsupported or malformed snapshot envelope loaded");
        const auto damaged_listing = store.list();
        const auto invalid = std::find_if(damaged_listing.begin(), damaged_listing.end(),
            [&](const auto& entry) { return entry.id == damaged.id; });
        require(invalid != damaged_listing.end() && invalid->created_at == "Metadata unavailable",
            "A malformed snapshot could not be listed for deletion");
        require(store.load(good.id) == payload, "A malformed snapshot affected a different file");
    }
    std::filesystem::resize_file(damaged_path, 128ull * 1024 * 1024 + 177);
    rejects([&] { store.load(damaged.id); }, "An oversized snapshot was read without enforcing the file limit");
    store.erase(damaged.id);
    const auto before = read_bytes(file_path(directory, good));
    for (const std::string& id : {std::string("../keep.srm"), std::string("/tmp/snapshot"), good.id + ".ebstate",
                                std::string("snapshot-0000000000000000000000000000000A"), std::string("snapshot-")}) {
        rejects([&] { store.load(id); }, "An unsafe or invalid snapshot ID was accepted for loading");
        rejects([&] { store.erase(id); }, "An unsafe or invalid snapshot ID was accepted for deletion");
    }
    require(read_bytes(file_path(directory, good)) == before && store.list().size() == 1,
        "Invalid IDs changed stored snapshot files");
}
void symlinks_and_unavailable_storage() {
    Fixture fixture;
    const auto directory = fixture.root / "snapshots";
    eb::SnapshotStore store(directory);
    const std::vector<std::uint8_t> payload{7, 8, 9};
    const auto info = store.save("Link fixture", 1234, payload);
    const auto victim = fixture.root / "outside.bin";
    write_bytes(victim, payload);
    std::filesystem::remove(file_path(directory, info));
    std::error_code error;
    std::filesystem::create_symlink(victim, file_path(directory, info), error);
    if (!error) {
        require(store.list().empty(), "Listing followed a snapshot symlink");
        rejects([&] { store.load(info.id); }, "Snapshot loading followed a symlink");
        rejects([&] { store.erase(info.id); }, "Snapshot deletion accepted a symlink");
        require(read_bytes(victim) == payload && std::filesystem::is_symlink(std::filesystem::symlink_status(file_path(directory, info))),
            "Rejected symlink operations changed their external target or link");
        const auto alias = fixture.root / "alias";
        std::filesystem::create_directory_symlink(directory, alias);
        eb::SnapshotStore linked(alias);
        rejects([&] { linked.list(); }, "Listing followed a linked storage directory");
        rejects([&] { linked.save("Unexpected", 0, payload); }, "Saving followed a linked storage directory");
        rejects([&] { linked.load(info.id); }, "Loading followed a linked storage directory");
        rejects([&] { linked.erase(info.id); }, "Deletion followed a linked storage directory");
    } else std::cout << "Symlink fixture unavailable: " << error.message() << '\n';
    const auto blocked = fixture.root / "regular-file";
    write_bytes(blocked, payload);
    eb::SnapshotStore invalid(blocked);
    rejects([&] { invalid.list(); }, "A regular file was accepted as a snapshot directory");
    rejects([&] { invalid.save("Blocked", 0, payload); }, "Saving replaced an invalid storage directory");
    require(read_bytes(blocked) == payload && read_bytes(victim) == payload, "Unavailable storage failure changed existing files");
}
} // namespace

int main() {
    try {
        persistence_and_management();
        malformed_files_and_inputs();
        symlinks_and_unavailable_storage();
        std::cout << "Snapshot store: persistence, duplicate and UTF-8 names, deletion isolation, corrupt-file recovery, bounds and symlink rejection passed\n";
        return 0;
    } catch (const std::exception& error) { std::cerr << error.what() << '\n'; return 1; }
}
