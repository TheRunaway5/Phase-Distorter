# Compiled game programs and source indices

This directory contains versioned C++ instruction sites generated from the US
and Japanese source configurations. `translated_dispatch.cpp` selects the
matching program from the validated local asset pack. `program_sources.cmake`
is the authoritative compilation inventory; the standalone build does not
require the corresponding assembly checkout or regenerate these files.

The regional `us/program/` and `jp/program/` directories group instructions by
assembly subsystem and owning source file. Their `program_index.json` files map
C++ functions back to original source paths, source lines and instruction
addresses. Each region has its own `game_program_dispatch.cpp` and code-only
asset import template. Shared sound-driver instructions are in
`audio_driver_instructions.cpp`, with source-label provenance in
`audio_program_index.json` and a declaration in `generated_audio_program.hpp`.

The current indices cover 145,774 US and 138,660 JP 65816 instruction sites and
2,163 shared SPC700 sites. These include alternate-width entries; counts do not
establish gameplay correctness. Source-named routines retain names derived from
the original source. Address-only or unknown routines are explicitly classified
as unresolved. Instruction comments preserve source filenames, line numbers,
and macro callers. Instruction-stream hashes are independent of C++ naming and
file grouping.

Each main-program index also records nine guarded `snapshot_overrides` that
preserve the snapshot's existing wider entity-culling constants and
alternate-width cases. The older original assembly checkout has different
bounds; reorganizing the code does not reset the existing runtime behavior.
The code-only import templates retain the original linked instruction bytes.

The templates retain only source-declared instruction bytes: 262,186 bytes for
US and 248,505 bytes for JP. All other cartridge ranges are zero until asset import:
2,883,542 bytes in 114 US ranges and 2,897,223 bytes in 108 JP ranges. Both templates
were checked for zero bytes throughout every imported range, and importing the
local donor ROMs reconstructed their canonical SHA-256 fingerprints.

`generated_profile.hpp`, `generated_profiles.cpp` and `source_profiles.json`
contain named regional timing, debug and rendering metadata: linked addresses,
structure offsets and enum values. For example, character HP uses
`character_layout.current_hp`, and an entity's coordinates use
`wram_entity_screen_coordinates.x` and `.y`. They contain no retail data tables,
graphics, fonts, dialogue, sound samples, ROMs or imported asset packs.

See [source navigation](../cpp/docs/source-navigation.md) for module ownership,
lookup examples and register names, [translation architecture](../cpp/TRANSLATION.md)
for the development pipeline, and [NOTICE.md](../NOTICE.md) for provenance.
Changes belong in the generators and their source evidence, followed by
regeneration and instruction-stream comparison; do not edit generated C++ by hand.
