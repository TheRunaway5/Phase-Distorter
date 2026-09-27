# Frozen version 1 program sources

This snapshot contains 136 C++ files and eight headers, generated from the US and
Japanese source configurations. Root dispatch selects the matching program from
the validated local asset pack. The two subdirectories each contain 64 bank
translation units, their dispatcher, and code-only import template. Shared SPC700
source is in `spc_translated.cpp`.

The templates retain only source-declared instruction bytes: 262,186 bytes for
US and 248,505 bytes for JP. All other cartridge ranges are zero until asset import:
2,883,542 bytes in 114 US ranges and 2,897,223 bytes in 108 JP ranges. Both templates
were checked for zero bytes throughout every imported range, and importing the
local donor ROMs reconstructed their canonical SHA-256 fingerprints.

`source_profiles.json` contains only rendering addresses and constants. There are
no retail data tables, graphics, fonts, dialogue, sound samples, ROMs, or imported
asset packs here. Instruction comments preserve source filenames and line numbers.
The corresponding assembly tree is not a build dependency of this repository.

See `../cpp/TRANSLATION.md` for the development translation pipeline and
`../NOTICE.md` for provenance. The C++ files are versioned source in this release;
CMake does not regenerate or replace them.
