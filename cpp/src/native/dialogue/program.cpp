#include "eb/native/dialogue/program.hpp"
#include <algorithm>
#include <limits>
#include <stdexcept>

namespace eb::native::dialogue {
namespace {
std::uint32_t reference_value(ReferenceKey key) {
    return std::uint32_t(key[0]) | (std::uint32_t(key[1]) << 8) | (std::uint32_t(key[2]) << 16) |
           (std::uint32_t(key[3]) << 24);
}
} // namespace
struct Program::Data {
    GameVersion version;
    std::vector<ContentBlock> blocks;
    std::vector<Location> entries;
    std::vector<ReferenceBinding> references;
    std::vector<Location> dictionary;
    std::vector<ReferenceRange> ranges;
};
Program::Program(GameVersion version, std::vector<ContentBlock> blocks, std::vector<Location> entries,
                 std::vector<ReferenceBinding> references, std::vector<Location> dictionary,
                 std::vector<ReferenceRange> ranges) {
    if (version != GameVersion::US && version != GameVersion::JP)
        throw std::invalid_argument("Unsupported dialogue game version");
    std::sort(blocks.begin(), blocks.end(), [](const auto &a, const auto &b) {
        return Location{a.page, a.offset} < Location{b.page, b.offset};
    });
    for (std::size_t i = 0; i < blocks.size(); ++i) {
        const auto &block = blocks[i];
        if (block.bytes.empty() || block.bytes.size() > 65536u - block.offset)
            throw std::invalid_argument("Dialogue content block is empty or crosses a logical page");
        if (i && blocks[i - 1].page == block.page &&
            unsigned(blocks[i - 1].offset) + blocks[i - 1].bytes.size() > block.offset)
            throw std::invalid_argument("Overlapping dialogue content blocks");
    }
    for (const auto &range : ranges)
        if (!range.size || range.size > 65536u - range.target.offset ||
            std::uint64_t(reference_value(range.first)) + range.size > (std::uint64_t(1) << 32))
            throw std::invalid_argument("Invalid dialogue reference range");
    std::sort(references.begin(), references.end(),
              [](const auto &a, const auto &b) { return a.key < b.key; });
    for (std::size_t i = 1; i < references.size(); ++i)
        if (references[i - 1].key == references[i].key)
            throw std::invalid_argument("Duplicate dialogue reference binding");
    data_ = std::make_shared<Data>(Data{version, std::move(blocks), std::move(entries), std::move(references),
                                        std::move(dictionary), std::move(ranges)});
    for (const auto entry : data_->entries)
        (void)byte(entry);
    for (const auto entry : data_->dictionary)
        (void)byte(entry);
    for (const auto &binding : data_->references)
        if (binding.target)
            (void)byte(*binding.target);
    for (const auto &range : data_->ranges) {
        (void)byte(range.target);
        (void)byte(advance(range.target, range.size - 1));
    }
}
GameVersion Program::version() const { return data_->version; }
bool Program::shares_content_with(const Program &other) const { return data_ == other.data_; }
std::uint8_t Program::byte(Location at) const {
    const auto found = std::upper_bound(
        data_->blocks.begin(), data_->blocks.end(), at,
        [](Location value, const ContentBlock &block) { return value < Location{block.page, block.offset}; });
    if (found != data_->blocks.begin()) {
        const auto &block = *(found - 1);
        const auto index = unsigned(at.offset) - block.offset;
        if (block.page == at.page && index < block.bytes.size())
            return block.bytes[index];
    }
    throw std::out_of_range("Dialogue fetch outside declared authored content");
}
Location Program::entry(EntryId id) const { return data_->entries.at(id.value); }
std::size_t Program::entry_count() const { return data_->entries.size(); }
Location Program::dictionary_entry(unsigned index) const { return data_->dictionary.at(index); }
std::optional<Location> Program::resolve(ReferenceKey key) const {
    if (key == ReferenceKey{})
        return std::nullopt;
    const auto binding = std::lower_bound(
        data_->references.begin(), data_->references.end(), key,
        [](const ReferenceBinding &item, const ReferenceKey &value) { return item.key < value; });
    if (binding != data_->references.end() && binding->key == key)
        return binding->target;
    const auto value = reference_value(key);
    std::optional<Location> target;
    for (const auto &range : data_->ranges) {
        const auto first = reference_value(range.first);
        if (value >= first && std::uint64_t(value) - first < range.size) {
            const auto candidate = advance(range.target, value - first);
            (void)byte(candidate);
            if (target && *target != candidate)
                throw std::runtime_error("Ambiguous authored dialogue reference");
            target = candidate;
        }
    }
    if (!target)
        throw std::out_of_range("Unresolved authored dialogue reference");
    return target;
}
Location Program::advance(Location at, unsigned bytes) {
    at.offset = std::uint16_t(unsigned(at.offset) + bytes);
    return at;
}
} // namespace eb::native::dialogue
