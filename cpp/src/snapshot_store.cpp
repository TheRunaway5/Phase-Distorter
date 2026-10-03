#include "eb/snapshot_store.hpp"

#include <algorithm>
#include <array>
#include <atomic>
#include <chrono>
#include <ctime>
#include <iomanip>
#include <limits>
#include <random>
#include <sstream>
#include <stdexcept>
#include <system_error>
#include <utility>

#ifdef _WIN32
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>
#else
#include <cerrno>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>
#endif

namespace eb {
namespace {
constexpr std::array<std::uint8_t, 8> magic{'E', 'B', 'S', 'N', 'A', 'P', '0', '1'};
constexpr std::uint64_t max_payload = 128ull * 1024 * 1024;
constexpr std::size_t max_name = 128, fixed_size = 48;

[[noreturn]] void io_error(const char* message) {
#ifdef _WIN32
    throw std::system_error(int(GetLastError()), std::system_category(), message);
#else
    throw std::system_error(errno, std::generic_category(), message);
#endif
}

// Open the file itself, never a symlink/reparse-point target. Exclusive writes
// prevent a preexisting temporary file from being replaced or followed.
class File {
public:
    File(const std::filesystem::path& path, bool writing) {
#ifdef _WIN32
        handle_ = CreateFileW(path.c_str(), writing ? GENERIC_WRITE : GENERIC_READ, FILE_SHARE_READ,
            nullptr, writing ? CREATE_NEW : OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL | FILE_FLAG_OPEN_REPARSE_POINT, nullptr);
        if (handle_ == INVALID_HANDLE_VALUE) io_error("Could not open snapshot file");
        BY_HANDLE_FILE_INFORMATION details{};
        if (!GetFileInformationByHandle(handle_, &details)) {
            const auto error = GetLastError();
            CloseHandle(handle_); handle_ = INVALID_HANDLE_VALUE; SetLastError(error);
            io_error("Could not inspect snapshot file");
        }
        if (details.dwFileAttributes & (FILE_ATTRIBUTE_DIRECTORY | FILE_ATTRIBUTE_REPARSE_POINT)) {
            CloseHandle(handle_); handle_ = INVALID_HANDLE_VALUE;
            throw std::runtime_error("Snapshot files must be ordinary files, not links");
        }
        size_ = (std::uint64_t(details.nFileSizeHigh) << 32) | details.nFileSizeLow;
#else
        handle_ = ::open(path.c_str(), writing ? O_WRONLY | O_CREAT | O_EXCL | O_NOFOLLOW | O_CLOEXEC :
                                              O_RDONLY | O_NOFOLLOW | O_CLOEXEC, 0600);
        if (handle_ < 0) io_error("Could not open snapshot file");
        struct stat details{};
        if (::fstat(handle_, &details) != 0) {
            const auto error = errno; ::close(handle_); handle_ = -1; errno = error;
            io_error("Could not inspect snapshot file");
        }
        if (!S_ISREG(details.st_mode) || details.st_size < 0) {
            ::close(handle_); handle_ = -1;
            throw std::runtime_error("Snapshot files must be ordinary files, not links");
        }
        size_ = std::uint64_t(details.st_size);
#endif
    }
    ~File() {
#ifdef _WIN32
        if (handle_ != INVALID_HANDLE_VALUE) CloseHandle(handle_);
#else
        if (handle_ >= 0) ::close(handle_);
#endif
    }
    File(const File&) = delete;
    File& operator=(const File&) = delete;
    std::uint64_t size() const { return size_; }
    void read(std::span<std::uint8_t> bytes) {
        while (!bytes.empty()) {
            const auto count = std::min<std::size_t>(bytes.size(), 64 * 1024);
#ifdef _WIN32
            DWORD done{};
            if (!ReadFile(handle_, bytes.data(), DWORD(count), &done, nullptr)) io_error("Could not read snapshot file");
#else
            const auto done = ::read(handle_, bytes.data(), count);
            if (done < 0) { if (errno == EINTR) continue; io_error("Could not read snapshot file"); }
#endif
            if (!done) throw std::runtime_error("Snapshot file is truncated");
            bytes = bytes.subspan(std::size_t(done));
        }
    }
    void write(std::span<const std::uint8_t> bytes) {
        while (!bytes.empty()) {
            const auto count = std::min<std::size_t>(bytes.size(), 64 * 1024);
#ifdef _WIN32
            DWORD done{};
            if (!WriteFile(handle_, bytes.data(), DWORD(count), &done, nullptr)) io_error("Could not write snapshot file");
#else
            const auto done = ::write(handle_, bytes.data(), count);
            if (done < 0) { if (errno == EINTR) continue; io_error("Could not write snapshot file"); }
#endif
            if (!done) throw std::runtime_error("Could not complete snapshot file");
            bytes = bytes.subspan(std::size_t(done));
        }
#ifdef _WIN32
        if (!FlushFileBuffers(handle_)) io_error("Could not flush snapshot file");
#else
        if (::fsync(handle_) != 0) io_error("Could not flush snapshot file");
#endif
    }
private:
#ifdef _WIN32
    HANDLE handle_ = INVALID_HANDLE_VALUE;
#else
    int handle_ = -1;
#endif
    std::uint64_t size_{};
};

bool valid_id(std::string_view id) {
    return id.size() == 41 && id.substr(0, 9) == "snapshot-" &&
        std::all_of(id.begin() + 9, id.end(), [](char value) {
            return (value >= '0' && value <= '9') || (value >= 'a' && value <= 'f');
        });
}

void validate_name(std::string_view name) {
    if (name.empty() || name.size() > max_name)
        throw std::runtime_error("Snapshot names must contain 1 to 128 UTF-8 bytes");
    bool nonblank = false;
    for (std::size_t i = 0; i < name.size();) {
        const auto first = static_cast<unsigned char>(name[i]);
        if (first < 32 || first == 127) throw std::runtime_error("Snapshot names cannot contain control characters");
        if (first < 128) { nonblank |= first != ' '; ++i; continue; }
        nonblank = true;
        const unsigned length = first >= 0xc2 && first <= 0xdf ? 2 : first >= 0xe0 && first <= 0xef ? 3 :
                                first >= 0xf0 && first <= 0xf4 ? 4 : 0;
        if (!length || i + length > name.size()) throw std::runtime_error("Snapshot name is not valid UTF-8");
        for (unsigned j = 1; j < length; ++j) {
            const auto next = static_cast<unsigned char>(name[i + j]);
            if (next < 0x80 || next > 0xbf || (j == 1 && ((first == 0xe0 && next < 0xa0) ||
                (first == 0xed && next > 0x9f) || (first == 0xf0 && next < 0x90) || (first == 0xf4 && next > 0x8f))))
                throw std::runtime_error("Snapshot name is not valid UTF-8");
        }
        i += length;
    }
    if (!nonblank) throw std::runtime_error("Enter a name for the snapshot");
}

bool ensure_directory(const std::filesystem::path& directory, bool create) {
    std::error_code error;
    auto status = std::filesystem::symlink_status(directory, error);
    if (error && error != std::errc::no_such_file_or_directory) throw std::filesystem::filesystem_error("Could not inspect snapshot directory", directory, error);
    if (!std::filesystem::exists(status)) {
        if (!create) return false;
        std::filesystem::create_directories(directory);
        status = std::filesystem::symlink_status(directory);
    }
    if (!std::filesystem::is_directory(status) || std::filesystem::is_symlink(status))
        throw std::runtime_error("Snapshot directory must be an ordinary directory, not a link");
    return true;
}

std::filesystem::path state_path(const std::filesystem::path& directory, std::string_view id) {
    if (!valid_id(id)) throw std::runtime_error("Invalid snapshot ID");
    return directory / (std::string(id) + ".ebstate");
}
void require_regular(const std::filesystem::path& path) {
    if (!std::filesystem::is_regular_file(std::filesystem::symlink_status(path)))
        throw std::runtime_error("Snapshot file is missing or is not an ordinary file");
}
std::vector<std::uint8_t> read_file(const std::filesystem::path& path) {
    require_regular(path);
    File file(path, false);
    if (file.size() < fixed_size || file.size() > max_payload + max_name + fixed_size)
        throw std::runtime_error("Snapshot file size is invalid");
    std::vector<std::uint8_t> bytes(std::size_t(file.size()));
    file.read(bytes);
    return bytes;
}
std::uint64_t checksum(std::span<const std::uint8_t> bytes) {
    std::uint64_t value = 14695981039346656037ull;
    for (const auto byte : bytes) { value ^= byte; value *= 1099511628211ull; }
    return value;
}
void append_integer(std::vector<std::uint8_t>& bytes, std::uint64_t value, unsigned width) {
    for (unsigned i = 0; i < width; ++i) bytes.push_back(std::uint8_t(value >> (i * 8)));
}
std::uint64_t read_integer(std::span<const std::uint8_t> bytes, std::size_t& offset, unsigned width) {
    if (offset + width > bytes.size()) throw std::runtime_error("Snapshot file is truncated");
    std::uint64_t value{};
    for (unsigned i = 0; i < width; ++i) value |= std::uint64_t(bytes[offset++]) << (i * 8);
    return value;
}
std::string date_text(std::int64_t timestamp) {
    const auto value = std::time_t(timestamp);
    std::tm date{};
#ifdef _WIN32
    if (localtime_s(&date, &value) != 0) return "Date unavailable";
#else
    if (!localtime_r(&value, &date)) return "Date unavailable";
#endif
    std::ostringstream result;
    result << std::put_time(&date, "%Y-%m-%d %H:%M:%S");
    return result.str();
}
struct Envelope { SaveStateSnapshotInfo info; std::size_t payload_offset{}, payload_size{}; };
Envelope parse(std::span<const std::uint8_t> bytes, const std::string& id) {
    if (bytes.size() < fixed_size || !std::equal(magic.begin(), magic.end(), bytes.begin()))
        throw std::runtime_error("Snapshot file format is invalid");
    std::size_t offset = magic.size();
    if (read_integer(bytes, offset, 4) != 1) throw std::runtime_error("Snapshot file version is unsupported");
    const auto name_size = read_integer(bytes, offset, 4);
    const auto timestamp = read_integer(bytes, offset, 8);
    const auto frames = read_integer(bytes, offset, 8);
    const auto payload_size = read_integer(bytes, offset, 8);
    if (!name_size || name_size > max_name || !payload_size || payload_size > max_payload ||
        timestamp > std::uint64_t(std::numeric_limits<std::int64_t>::max()) ||
        bytes.size() != fixed_size + name_size + payload_size)
        throw std::runtime_error("Snapshot metadata or payload size is invalid");
    const std::string name(reinterpret_cast<const char*>(bytes.data() + offset), std::size_t(name_size));
    validate_name(name);
    const auto payload_offset = offset + std::size_t(name_size);
    std::size_t checksum_offset = bytes.size() - 8;
    if (read_integer(bytes, checksum_offset, 8) != checksum(bytes.first(bytes.size() - 8)))
        throw std::runtime_error("Snapshot file checksum does not match");
    return {{id, name, date_text(std::int64_t(timestamp)), frames, std::int64_t(timestamp)}, payload_offset, std::size_t(payload_size)};
}
SaveStateSnapshotInfo read_metadata(const std::filesystem::path& path, const std::string& id) {
    require_regular(path);
    File file(path, false);
    if (file.size() < fixed_size || file.size() > max_payload + max_name + fixed_size)
        throw std::runtime_error("Snapshot file size is invalid");
    // Listing only needs the fixed header and short name. Validate full state
    // and its checksum on load, so many large snapshots do not stall the menu.
    std::array<std::uint8_t, fixed_size - 8> header{};
    file.read(header);
    if (!std::equal(magic.begin(), magic.end(), header.begin()))
        throw std::runtime_error("Snapshot file format is invalid");
    std::size_t offset = magic.size();
    if (read_integer(header, offset, 4) != 1)
        throw std::runtime_error("Snapshot file version is unsupported");
    const auto name_size = read_integer(header, offset, 4);
    const auto timestamp = read_integer(header, offset, 8);
    const auto frames = read_integer(header, offset, 8);
    const auto payload_size = read_integer(header, offset, 8);
    if (!name_size || name_size > max_name || !payload_size || payload_size > max_payload ||
        timestamp > std::uint64_t(std::numeric_limits<std::int64_t>::max()) ||
        file.size() != fixed_size + name_size + payload_size)
        throw std::runtime_error("Snapshot metadata or payload size is invalid");
    std::vector<std::uint8_t> name_bytes(std::size_t(name_size), 0);
    file.read(name_bytes);
    const std::string name(name_bytes.begin(), name_bytes.end());
    validate_name(name);
    return {id, name, date_text(std::int64_t(timestamp)), frames, std::int64_t(timestamp)};
}
std::string new_id() {
    static std::atomic<std::uint64_t> sequence{};
    std::random_device random;
    const auto time = std::uint64_t(std::chrono::system_clock::now().time_since_epoch().count());
    const auto entropy = (std::uint64_t(random()) << 32) ^ random() ^ ++sequence;
    std::ostringstream result;
    result << "snapshot-" << std::hex << std::setfill('0') << std::setw(16) << time << std::setw(16) << entropy;
    return result.str();
}
} // namespace

SnapshotStore::SnapshotStore(std::filesystem::path directory) : directory_(std::move(directory)) {
    if (directory_.empty()) throw std::runtime_error("Snapshot directory cannot be empty");
}
std::vector<SaveStateSnapshotInfo> SnapshotStore::list() const {
    std::vector<SaveStateSnapshotInfo> snapshots;
    if (!ensure_directory(directory_, false)) return snapshots;
    for (const auto& entry : std::filesystem::directory_iterator(directory_)) {
        if (entry.path().extension() != ".ebstate" || !std::filesystem::is_regular_file(entry.symlink_status())) continue;
        const auto utf8_id = entry.path().stem().u8string();
        const std::string id(utf8_id.begin(), utf8_id.end());
        if (!valid_id(id)) continue;
        try { snapshots.push_back(read_metadata(entry.path(), id)); }
        catch (const std::exception&) {
            snapshots.push_back({id, id + ".ebstate", "Metadata unavailable", 0, 0});
        }
    }
    std::sort(snapshots.begin(), snapshots.end(), [](const auto& a, const auto& b) {
        return a.created_at_unix != b.created_at_unix ? a.created_at_unix > b.created_at_unix : a.id > b.id;
    });
    return snapshots;
}
SaveStateSnapshotInfo SnapshotStore::save(std::string_view name, std::uint64_t frames, std::span<const std::uint8_t> payload) {
    validate_name(name);
    if (payload.empty() || payload.size() > max_payload) throw std::runtime_error("Snapshot state size is invalid");
    ensure_directory(directory_, true);
    const auto timestamp = std::chrono::duration_cast<std::chrono::seconds>(std::chrono::system_clock::now().time_since_epoch()).count();
    std::vector<std::uint8_t> bytes(magic.begin(), magic.end());
    bytes.reserve(fixed_size + name.size() + payload.size());
    append_integer(bytes, 1, 4);
    append_integer(bytes, name.size(), 4);
    append_integer(bytes, std::uint64_t(timestamp), 8);
    append_integer(bytes, frames, 8);
    append_integer(bytes, payload.size(), 8);
    bytes.insert(bytes.end(), name.begin(), name.end());
    bytes.insert(bytes.end(), payload.begin(), payload.end());
    append_integer(bytes, checksum(bytes), 8);
    for (unsigned attempt = 0; attempt < 32; ++attempt) {
        const auto id = new_id();
        const auto destination = state_path(directory_, id);
        const auto temporary = directory_ / ("." + id + ".tmp");
        if (std::filesystem::exists(std::filesystem::symlink_status(destination)) ||
            std::filesystem::exists(std::filesystem::symlink_status(temporary))) continue;
        bool temporary_owned = false;
        try {
            { File output(temporary, true); temporary_owned = true; output.write(bytes); }
            std::filesystem::rename(temporary, destination);
        } catch (...) {
            std::error_code error;
            if (temporary_owned) std::filesystem::remove(temporary, error);
            throw;
        }
        return {id, std::string(name), date_text(timestamp), frames, timestamp};
    }
    throw std::runtime_error("Could not allocate a unique snapshot ID");
}
std::vector<std::uint8_t> SnapshotStore::load(std::string_view id) const {
    const auto path = state_path(directory_, id);
    if (!ensure_directory(directory_, false)) throw std::runtime_error("Snapshot directory does not exist");
    const auto bytes = read_file(path);
    const auto envelope = parse(bytes, std::string(id));
    return {bytes.begin() + std::ptrdiff_t(envelope.payload_offset),
            bytes.begin() + std::ptrdiff_t(envelope.payload_offset + envelope.payload_size)};
}
void SnapshotStore::erase(std::string_view id) {
    const auto path = state_path(directory_, id);
    if (!ensure_directory(directory_, false)) throw std::runtime_error("Snapshot directory does not exist");
    require_regular(path);
    if (!std::filesystem::remove(path)) throw std::runtime_error("Snapshot was already removed");
}
} // namespace eb
