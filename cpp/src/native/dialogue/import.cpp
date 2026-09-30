#include "eb/native/dialogue/import.hpp"
#include <algorithm>
#include <array>
#include <stdexcept>
#include <string>

namespace eb::native::dialogue {
namespace {
struct ContentRange { std::uint32_t offset, size; std::string_view name; };
#include "content_layout.inc"
constexpr std::uint32_t dictionary_start = 0x8bc2d;
constexpr std::uint32_t dictionary_end = 0x8cded;
constexpr unsigned dictionary_count = 768;
Location location(std::uint32_t offset) { return {offset >> 16, std::uint16_t(offset)}; }
ReferenceKey key(std::uint32_t value) {
    return {std::uint8_t(value), std::uint8_t(value >> 8), std::uint8_t(value >> 16), std::uint8_t(value >> 24)};
}
std::uint32_t dword(std::span<const std::uint8_t> bytes, unsigned at) {
    return bytes[at] | (std::uint32_t(bytes[at + 1]) << 8) |
           (std::uint32_t(bytes[at + 2]) << 16) | (std::uint32_t(bytes[at + 3]) << 24);
}
} // namespace

ImportedProgram import_program(std::span<const std::uint8_t> image, GameVersion version) {
    if (version != GameVersion::US && version != GameVersion::JP)
        throw std::invalid_argument("Unknown dialogue content region");
    if (image.size() != 0x300000)
        throw std::invalid_argument("Dialogue import needs the complete validated regional asset image");
    const auto sections = version == GameVersion::US ? std::span<const ContentRange>(us_text_ranges) : std::span<const ContentRange>(jp_text_ranges);
    std::vector<ContentBlock> blocks;
    std::vector<Location> entries, dictionary;
    std::vector<ReferenceRange> references;
    ImportedProgram result;
    const auto copy_range = [&](std::uint32_t at, std::uint32_t size) {
        while (size) {
            const auto length = std::min(size, 0x10000u - (at & 0xffffu));
            const auto bytes = image.subspan(at, length);
            blocks.push_back({at >> 16, std::uint16_t(at), {bytes.begin(), bytes.end()}});
            references.push_back({key(0xc00000u + at), location(at), length});
            size -= length;
            at += length;
        }
    };
    for (const auto& section : sections) {
        copy_range(section.offset, section.size);
        entries.push_back(location(section.offset));
        result.sections.push_back({section.name, location(section.offset), section.size});
        result.text_bytes += section.size;
    }
    if (version == GameVersion::US) {
        result.dictionary_bytes = dictionary_end - dictionary_start;
        copy_range(dictionary_start, unsigned(result.dictionary_bytes));
        dictionary.reserve(dictionary_count);
        for (unsigned i = 0; i < dictionary_count; ++i) {
            const auto pointer = dword(image, dictionary_end + i * 4);
            if (pointer < 0xc00000u + dictionary_start || pointer >= 0xc00000u + dictionary_end)
                throw std::invalid_argument("US dialogue dictionary pointer leaves its declared imported data");
            const auto offset = pointer - 0xc00000u;
            const auto begin = image.begin() + offset;
            const auto end = image.begin() + dictionary_end;
            if (std::find(begin, end, 0) == end)
                throw std::invalid_argument("Unterminated imported US dialogue dictionary fragment");
            dictionary.push_back(location(offset));
        }
    }
    result.program = std::make_shared<Program>(version, std::move(blocks), std::move(entries),
        std::vector<ReferenceBinding>{{ReferenceKey{}, std::nullopt}}, std::move(dictionary), std::move(references));
    return result;
}
} // namespace eb::native::dialogue
