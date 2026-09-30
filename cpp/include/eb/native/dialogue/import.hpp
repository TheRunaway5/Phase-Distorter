#pragma once
#include "eb/native/dialogue/program.hpp"
#include <string_view>

namespace eb::native::dialogue {
struct ImportedSection {
    std::string_view name;
    Location begin;
    std::uint32_t bytes{};
};
struct ImportedProgram {
    std::shared_ptr<const Program> program;
    // Entry IDs follow the extraction sections in ascending imported offset.
    // These source labels are navigation metadata, not translated dialogue.
    std::vector<ImportedSection> sections;
    std::size_t text_bytes{}, dictionary_bytes{};
};
// Import only the declared US/JP text sections and US dictionary. The input is
// a validated local asset image; the Program owns its content independently.
// Reference relocation admits declared content bytes only. No machine program,
// hardware state, routine identifier, font, or authored text is bundled here.
ImportedProgram import_program(std::span<const std::uint8_t> image, GameVersion version);
} // namespace eb::native::dialogue
