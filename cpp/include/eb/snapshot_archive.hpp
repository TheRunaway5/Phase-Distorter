#pragma once

#include <array>
#include <bit>
#include <cstdint>
#include <map>
#include <memory>
#include <optional>
#include <span>
#include <stdexcept>
#include <string>
#include <type_traits>
#include <vector>

namespace eb {
// A bounded, explicit-field archive. No padding, process addresses, callbacks,
// allocator identities or borrowed memory are ever copied into a snapshot.
class SnapshotArchive {
  public:
    static constexpr std::size_t maximum_bytes = 128 * 1024 * 1024;
    static constexpr std::uint32_t maximum_items = 32 * 1024 * 1024;
    static constexpr std::uint32_t maximum_objects = 1024 * 1024;
    SnapshotArchive() = default;
    explicit SnapshotArchive(unsigned format_version) : format_version_(format_version) {}
    explicit SnapshotArchive(std::span<const std::uint8_t> input, unsigned format_version = 9)
        : input_(input), loading_(true), format_version_(format_version) {
        if (input.size() > maximum_bytes) throw std::runtime_error("Snapshot exceeds the size limit");
    }
    bool loading() const { return loading_; }
    // The outer session envelope supplies this context. Nested owners use it
    // to retain their old positional layout without embedding extra headers.
    unsigned format_version() const { return format_version_; }
    const std::vector<std::uint8_t> &bytes() const { return output_; }
    std::vector<std::uint8_t> release_bytes() { return std::move(output_); }
    std::size_t remaining() const { return input_.size() - position_; }
    void finish() const {
        if (loading_ && remaining()) throw std::runtime_error("Snapshot contains trailing data");
    }
    template<class... T> void operator()(T &...values) { (value(values), ...); }
    void blob(std::vector<std::uint8_t> &bytes) {
        if (bytes.size() > maximum_bytes) throw std::runtime_error("Snapshot blob exceeds the size limit");
        auto size = static_cast<std::uint32_t>(bytes.size());
        value(size);
        if (size > maximum_bytes) throw std::runtime_error("Snapshot blob exceeds the size limit");
        if (loading_) {
            require(size);
            bytes.assign(input_.begin() + position_, input_.begin() + position_ + size);
            position_ += size;
        } else {
            reserve(size);
            output_.insert(output_.end(), bytes.begin(), bytes.end());
        }
    }
    template<class T> void value(const T &item) {
        if (loading_) throw std::logic_error("Cannot restore a const snapshot field");
        value(const_cast<T &>(item)); // The writing branches never modify fields.
    }
    template<class T> void value(T &item) {
        if constexpr (std::is_same_v<T, bool>) {
            std::uint8_t stored = loading_ ? 0 : (item ? 1 : 0);
            value(stored);
            if (loading_) {
                if (stored > 1) throw std::runtime_error("Invalid snapshot boolean");
                item = stored != 0;
            }
        } else if constexpr (std::is_enum_v<T>) {
            using U = std::underlying_type_t<T>;
            U stored = loading_ ? U{} : static_cast<U>(item);
            value(stored);
            if (loading_) item = static_cast<T>(stored);
        } else if constexpr (std::is_integral_v<T>) {
            using U = std::make_unsigned_t<T>;
            U stored = loading_ ? U{} : static_cast<U>(item);
            if (loading_) {
                require(sizeof(T));
                stored = 0;
                for (unsigned i = 0; i < sizeof(T); ++i)
                    stored |= U(input_[position_++]) << (i * 8);
                item = std::bit_cast<T>(stored);
            } else {
                reserve(sizeof(T));
                for (unsigned i = 0; i < sizeof(T); ++i)
                    output_.push_back(static_cast<std::uint8_t>(stored >> (i * 8)));
            }
        } else if constexpr (std::is_same_v<T, float>) {
            auto stored = loading_ ? std::uint32_t{} : std::bit_cast<std::uint32_t>(item);
            value(stored);
            if (loading_) item = std::bit_cast<float>(stored);
        } else if constexpr (std::is_same_v<T, double>) {
            auto stored = loading_ ? std::uint64_t{} : std::bit_cast<std::uint64_t>(item);
            value(stored);
            if (loading_) item = std::bit_cast<double>(stored);
        } else if constexpr (requires { item.snapshot_io(*this); }) {
            item.snapshot_io(*this);
        } else {
            snapshot_io(*this, item); // Explicit value-type serializers via ADL.
        }
    }
    template<class T, std::size_t N> void value(std::array<T, N> &items) {
        for (auto &item : items) value(item);
    }
    template<class T> void value(std::vector<T> &items) {
        auto size = count(items.size());
        value(size);
        check_count(size);
        check_allocation<T>(size);
        if constexpr (std::is_integral_v<T> || std::is_enum_v<T> || std::is_floating_point_v<T>) {
            if (loading_ && size > remaining() / sizeof(T))
                throw std::runtime_error("Snapshot array is truncated");
        } else if (size > maximum_objects) {
            throw std::runtime_error("Snapshot object array exceeds the item limit");
        }
        if (loading_) items.resize(size);
        for (auto &item : items) value(item);
    }
    template<class T, class ElementIo> void sequence(std::vector<T> &items, ElementIo element_io) {
        auto size = count(items.size());
        value(size);
        check_count(size);
        check_allocation<T>(size);
        if (size > maximum_objects) throw std::runtime_error("Snapshot object array exceeds the item limit");
        if (loading_) items.resize(size);
        for (auto &item : items) element_io(*this, item);
    }
    void value(std::string &item) {
        auto size = count(item.size());
        value(size);
        check_count(size);
        if (loading_) {
            require(size);
            item.assign(reinterpret_cast<const char *>(input_.data() + position_), size);
            position_ += size;
        } else {
            reserve(size);
            output_.insert(output_.end(), item.begin(), item.end());
        }
    }
    template<class T> void value(std::optional<T> &item) {
        bool present = item.has_value();
        value(present);
        if (loading_) {
            if (present) item.emplace();
            else item.reset();
        }
        if (present) value(*item);
    }
    template<class K, class V> void value(std::map<K, V> &items) {
        auto size = count(items.size());
        value(size);
        check_count(size);
        check_allocation<std::pair<const K, V>>(size, 3 * sizeof(void *));
        if (size > maximum_objects) throw std::runtime_error("Snapshot map exceeds the item limit");
        if (loading_) {
            items.clear();
            for (std::uint32_t i = 0; i < size; ++i) {
                K key{};
                V item{};
                (*this)(key, item);
                if (!items.emplace(std::move(key), std::move(item)).second)
                    throw std::runtime_error("Duplicate snapshot map key");
            }
        } else {
            for (auto &[key, item] : items) (*this)(key, item);
        }
    }
    template<class T> void value(std::shared_ptr<T> &item) {
        bool present = bool(item);
        value(present);
        if (loading_) {
            if (!present) { item.reset(); return; }
            auto restored = std::make_shared<std::remove_const_t<T>>();
            value(*restored);
            item = std::move(restored);
        } else if (present) value(*item);
    }
    std::uint32_t count(std::size_t size) const {
        if (size > maximum_items) throw std::runtime_error("Snapshot container exceeds the item limit");
        return static_cast<std::uint32_t>(size);
    }
    void check_count(std::uint32_t size) const {
        if (size > maximum_items || (loading_ && size > remaining()))
            throw std::runtime_error("Invalid snapshot container size");
    }
  private:
    std::span<const std::uint8_t> input_;
    std::vector<std::uint8_t> output_;
    std::size_t position_{};
    bool loading_{};
    unsigned format_version_ = 9;
    template<class T> void check_allocation(std::uint32_t size, std::size_t extra = 0) const {
        if (size > maximum_bytes / (sizeof(T) + extra))
            throw std::runtime_error("Snapshot container exceeds the allocation limit");
    }
    void require(std::size_t count) const {
        if (count > remaining()) throw std::runtime_error("Snapshot is truncated");
    }
    void reserve(std::size_t count) const {
        if (count > maximum_bytes - output_.size()) throw std::runtime_error("Snapshot exceeds the size limit");
    }
};

inline std::uint64_t snapshot_checksum(std::span<const std::uint8_t> bytes) {
    std::uint64_t hash = 14695981039346656037ull;
    for (const auto byte : bytes) { hash ^= byte; hash *= 1099511628211ull; }
    return hash;
}
} // namespace eb
