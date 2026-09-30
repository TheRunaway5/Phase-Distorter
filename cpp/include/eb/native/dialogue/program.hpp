#pragma once

#include "eb/game_version.hpp"
#include <array>
#include <compare>
#include <cstdint>
#include <memory>
#include <optional>
#include <span>
#include <vector>

namespace eb::native::dialogue {
// A location in imported authored content, never a processor address. Each
// logical page has 65536 positions; source cursor arithmetic wraps within it.
struct Location {
    std::uint32_t page{};
    std::uint16_t offset{};
    auto operator<=>(const Location &) const = default;
};
struct EntryId {
    std::uint32_t value{};
};
// A non-consuming view of the two authored streams used by US word lookahead.
// A dictionary tail can remain active after a primary-stream call or jump.
struct Lookahead {
    Location primary{};
    std::optional<Location> dictionary;
    bool operator==(const Lookahead &) const = default;
};
using ReferenceKey = std::array<std::uint8_t, 4>;
struct ContentBlock {
    std::uint32_t page{};
    std::uint16_t offset{};
    std::vector<std::uint8_t> bytes;
};
struct ReferenceBinding {
    ReferenceKey key{};
    std::optional<Location> target;
};
// Import-only relocation information. Keys are authored four-byte data
// references. A range never grants access outside declared ContentBlocks.
struct ReferenceRange {
    ReferenceKey first{};
    Location target{};
    std::uint32_t size{};
};
class Program {
  public:
    Program(GameVersion version, std::vector<ContentBlock> blocks, std::vector<Location> entries = {},
            std::vector<ReferenceBinding> references = {}, std::vector<Location> dictionary = {},
            std::vector<ReferenceRange> ranges = {});
    GameVersion version() const;
    // Locations are meaningful only inside the imported content that created
    // them. Copies share that immutable content; separate imports do not.
    bool shares_content_with(const Program &) const;
    std::uint8_t byte(Location at) const;
    Location entry(EntryId id) const;
    std::size_t entry_count() const;
    Location dictionary_entry(unsigned index) const;
    std::optional<Location> resolve(ReferenceKey key) const;
    static Location advance(Location at, unsigned bytes = 1);

  private:
    struct Data;
    std::shared_ptr<const Data> data_;
};
} // namespace eb::native::dialogue
