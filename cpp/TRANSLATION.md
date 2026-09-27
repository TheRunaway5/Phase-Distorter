# Translation architecture and verification

The build translates two original source configurations: EarthBound US
(`src/bankconfig/US`, `USA`) and Mother 2 Japanese (`src/bankconfig/JP`, `JPN`).
Each has its own linked program, compiled dispatch, asset layout, and source
profile. Japanese support executes the Japanese source program; it does not
replace text in the US program. The generator uses neither the existing C
runtime nor its decompilation tools. Prototype configurations are not generated.

## From original sources to C++

`tools/translate.py` rebuilds every bank of both configurations with `ca65 -g`,
then links with `ld65` and `snes.cfg` in the selected CMake build directory's
`assembly/us/` and `assembly/jp/` folders.
The build needs no donor ROM or extracted `src/bin` directory. It copies the
assembly and includes into an isolated input tree, excluding `src/bin` even if
that directory exists. `tools/asset_layout.py` reads only extraction lengths and
label offsets from `earthbound.yml` and `mother2.yml`, then creates 2,220 US
and 2,224 JP zero placeholders and address-only text symbol declarations.
This preserves the original link layout without reading graphics, text, music, or other extracted assets.
An emitted ca65 debug span associates each individual machine instruction with
its source mnemonic and line, including nested macro expansions. The linker
supplies final addresses and resolved bytes. Listings are also retained with
unlimited emitted bytes, but instruction extraction does not depend on the
listings' collapsed macro text.

Every source instruction becomes a fixed-opcode C++ call to `Cpu::execute<Op>`
in `generated/us/translated_bank_*.cpp` or `generated/jp/translated_bank_*.cpp`.
A common dispatcher selects the program using `Cpu::version`, which comes from
the imported asset profile. Each bank dispatcher maps HiROM aliases
while preserving the actual program bank in architectural state. Operands are
embedded constants. Each profile's `generated_assets.cpp` contains a sparse
image of declared 65816 and SPC700 instruction bytes only. All other locations
in its 3 MiB image template are zero. The executable requires a locally imported asset pack before
starting the game; it does not distribute the original game data.

`Cpu` retains the architectural registers, status flags, stack behavior, and
addressing rules needed to execute those calls faithfully. Its instruction
semantics use an opcode helper, but the game program counter selects compiled
source sites: there is no runtime fetch/decode fallback for unknown code.
`Bus` implements CPU-visible hardware and memory. SDL2/OpenGL presents the
resulting framebuffer and accepts input. SPC700 and S-DSP are separate sound
hardware components.

## Local asset import

`generated_assets.hpp` exposes `asset_profiles()` and
`AssetLayout asset_layout(GameVersion)`: read-only code templates, complementary
imported ranges, and the supported image SHA-256 values. `rom_data(version)` and
`rom_size(version)` describe an incomplete code template, not a playable image.
Callers use `load_game_assets()` to identify the pack and construct
`Bus(assets.image, assets.version)` with its matching program.

| Profile | Compiled instruction bytes | Imported noninstruction bytes | Ranges in each partition |
| --- | ---: | ---: | ---: |
| US | 262,186 | 2,883,542 | 114 |
| JP | 248,505 | 2,897,223 | 108 |

The imported complement includes graphics, text/event data, music, source-authored tables,
cartridge metadata, and other noninstruction bytes. SPC instruction ranges are
located using the linked `AUDIO_SUBPACK_2_DATA_START` symbol and assembler-derived
SPC source boundaries; sound data is excluded from the compiled template.

The importer identifies and validates a user-selected US or Japanese ROM,
optionally removing its 512-byte copier header, and writes only those complementary ranges to a local `.ebpak`.
Loading combines the pack with the compiled source bytes and validates the full
image hash. Corruption, unsupported revisions, and a source-code/image mismatch
are rejected before game execution. The donor ROM is not modified. Asset packs
are local game data and must not be included in install packages.

This follows the user-ROM extraction workflow described in the official
[Shipwright README](https://github.com/HarbourMasters/Shipwright/blob/develop/README.md)
and [setup guide](https://www.shipofharkinian.com/setup-guide/windows); no
Shipwright implementation is used. The port supports the two canonical images
listed below. Arbitrarily modified assembly or another ROM revision
requires a deliberate matching import contract, not an automatic hash bypass.

## Version-specific source layout

The Japanese extraction metadata's `EGLOBAL` interval includes a trailing `$40`
that `src/bankconfig/JP/bank09.asm` emits explicitly between the EGLOBAL and
ESYSTEM includes. The JP address-only placeholder therefore reserves 9,632 of
that interval's 9,633 bytes; the original source supplies the remaining byte.
The generator asserts the exact source sequence and reports this reinsertion.
Reserving the whole interval would shift 22 compiled ESYSTEM pointer operands
by one byte. No retail text is needed to preserve the correct boundary.

The intro's `_BEQL` preprocessor alias expands to a long-branch macro in US and
a single `BEQ` in JP. The generator recognizes the original alias declaration
and verifies its emitted opcode, while macro expansion still uses the individual
underlying instruction spans. Neither variant drops its branch sites.

`generated_profile.hpp` exposes `source_profile(GameVersion)`. Its WRAM/ROM
locations and event IDs come from each configuration's linked symbols; the few
buffer-relative layouts follow the corresponding original source routines.
`source_profiles.json` records the resulting values. The renderer consumes this
profile rather than assuming US addresses for Japanese battle, world-map,
Lumine Hall, title, or file-selection state. See
[the presentation source contracts](docs/presentation-scenes.md) for the source
routines and regional differences.

## Instruction widths and overlapping source sites

65816 assembler `.A8`, `.A16`, `.I8`, and `.I16` directives describe how ca65
emits immediate operands; they do not change CPU flags. The runtime M and X
flags still determine how many bytes the processor consumes. The US source examples below
deliberately rely on that distinction:

* At `$C0A275`, `.A8` emits `AND #0` as `29 00`, then `CLC` as `18`. With runtime
  M clear, the processor executes `AND #$1800` and consumes all three bytes.
* At `$C12E2B`, the bytes `C9 00 00 F0 04` are listed as a narrow `CMP #0`,
  apparent `BRK`, and `BEQ`. With runtime M clear, `CMP #$0000` consumes the
  apparent BRK byte and continues at the BEQ. Using source length alone caused
  a real new-game crash after the naming confirmation.

Every variable-width immediate therefore has both narrow and wide operands and
lengths compiled from the linked bytes. The generated branch selects between
these constants using only the architectural M or X flag. Bare source BRK/COP
instructions consume their architectural two bytes, including the signature
byte, even when ca65 reports a one-byte source span.

An alternate width can continue inside another source instruction's operand.
The generator follows these alternate entries at build time, but only through
bytes already emitted as source instructions. Each additional static case
records the containing source location and the preceding instruction that
reaches it. Arbitrary data is not swept into executable cases. Alternate edges
that leave those proven instruction bytes remain explicit unresolved entries
in `mode_variant_audit.json` and fail closed if reached at runtime.

## SPC700 source build and translation

`tools/spc700.py` assembles `src/spc700/main.spc700.s` and its included sources
before the 65816 build. ca65 reads this fresh `assembly/main.spc700.bin`; the old
`build/main.spc700.bin` is not an input.

The helper uses `SPCASM` or an installed `spcasm`. Otherwise it builds upstream
[spcasm v1.1.0](https://codeberg.org/filmroellchen/spcasm/src/tag/v1.1.0), pinned
to commit `ee15b258e7286eb06e9c1fe49adc5cec7d79669f`, with
`nightly-2023-09-01` and `cargo build --locked`. Source and executable caches
live under `build/cpp/tools`. The upstream tag still declares package version
`1.0.0`; provenance records both the pinned tag/commit and actual version output.

Temporary labels surround the SPC source instructions. The assembler's resolved
labels provide exact boundaries, and the instrumented binary must equal the
unmodified source build byte-for-byte, apart from one final zero byte used only
to anchor the last label. Only the unmodified image enters the cartridge.
Data macros remain data. A twelve-byte DB block in `main.spc700.s` is explicitly
identified as six executable instructions, with asserted source bytes and
instruction boundaries.

`spc_translated.cpp` emits fixed-opcode calls to `Spc::execute<Op>`. It validates
the loaded instruction's opcode and operand bytes before executing a compiled
case. Changed or unknown code fails rather than silently using stale constants.
The hardware IPL boot ROM is implemented separately by `Spc`; the driver's
direct jump to `$FFC0` is recorded as an external hardware target. Source
instruction macros are currently rejected if introduced; the existing SPC
macros emit sound data only.

## Current coverage snapshot

These counts describe rebuilt source, not the number of sites reached during
gameplay. They change if source changes.

| Evidence | US | JP |
| --- | ---: | ---: |
| Original 65816 source instruction sites | 119,472 | 113,730 |
| Bytes emitted for those source instructions | 257,586 | 243,905 |
| Original sites inside expanded macros | 34,620 | 32,839 |
| Variable-width immediate source sites | 19,877 | 18,935 |
| Additional overlapping static sites | 26,302 | 24,930 |
| Total emitted 65816 C++ instruction sites | 145,774 | 138,660 |
| Verified declared-source direct control-flow edges | 18,364 | 17,418 |
| Verified declared-source fall-through edges | 113,035 | 107,561 |
| Unresolved alternate-mode edges outside source instruction bytes | 119 | 116 |
| SPC700 source instruction sites, including six byte-encoded instructions | 2,163 | 2,163 |
| SPC700 instruction bytes | 4,600 | 4,600 |

Each supported reconstructed program image is 3,145,728 bytes:

* US SHA-256: `a8fe2226728002786d68c27ddddf0b90a894db52e4dfe268fdf72a68cae5f02e`.
* JP SHA-256: `1f8cfd13177d86b0eb2c8adcf9e1a4f0ec8966fa1583072b65a1b1c0e7961a5d`.

The shared freshly assembled 12,253-byte SPC image has SHA-256
`a5ef99544479b6b24bad1f9908af8f0bb1c7f0b33d696206baef8f2c433d7607`.
All 145,774 US generated instruction records exactly matched the earlier
full-asset assembly build. For both profiles, every retained 65816/SPC source
code byte was independently compared against the validated local donor with
zero differences; filling only the imported complement reproduced its entire
image and expected hash exactly. The donor files were read without modification.
The placeholder-linked intermediates have different hashes by design and are
not playable donor ROMs. These are provenance checks, not runtime fidelity proofs.

All declared source sites are emitted. The 119 US and 116 JP unresolved
alternate-mode edges involve continuations outside proven source instruction
bytes, including flag combinations not established as reachable by the game.
They are distinct from missing declared-source instructions and are not claimed
covered. Indirect control flow, copied or self-modifying code, peripheral timing,
complete gameplay, and visual/audio parity still require runtime evidence;
these counts cannot establish them by themselves.

A US source audit of all 65816 function directories found only one raw byte/word
or binary directive: the three bytes at `src/unknown/C2/C2E6B3.asm:3`. Both uses
copy them to VRAM, so they remain data. No instruction/data mixture was found
in the assembly macros. The four MVN sites clear or copy WRAM data. This audit
found no source-declared executable RAM block; it does not prove every possible
indirect destination or gameplay route.

## Generated reports

CMake tracks the reports and generated headers as outputs and dependencies of
`eb_generate`:

* Root `coverage.json` (schema 2) contains separate US/JP coverage reports;
  `us/coverage.json` and `jp/coverage.json` also expose each report individually.
  They include source/generated counts, input hashes, expected imported image
  hashes, placeholder-link/code-template hashes, code/data range counts,
  control-flow checks, and SPC tool/source provenance.
* `us/source_map.json` and `jp/source_map.json` map every 65816 case to linked
  operands, source spans, alternate wide operands, and overlapping origins.
  Root `source_map.json` indexes these files.
* `spc_source_map.json` records the shared SPC instruction mappings, source
  hashes, tool revision, original/instrumented binary equality, and control flow.
* Each profile's `mode_variant_audit.json` records alternate immediate
  fall-throughs and unresolved edges; the root file indexes both reports.
* `source_profiles.json` records per-version read-only presentation metadata.

No report equates translation coverage with full game correctness.

## Reproduce the checks

Build normally, then run the assembler/emitter integration tests:

```sh
python3 -m unittest discover -s cpp/tests -p test_translate.py -v
ctest --test-dir build/cpp --output-on-failure
```

The translator tests assemble real fixtures and compile/run emitted C++.
They cover nested macros and repeats, inactive source, instruction-like data,
linked-byte disagreements, alias dispatch, both deliberate M-width sequences,
BRK signature length, source-bounded overlapping entries, SPC data macros,
byte-encoded SPC code, and rejection of changed loaded SPC instructions. Asset
fixtures verify that a poisoned `src/bin` is never copied, text labels preserve
their metadata offsets, all noninstruction template bytes are zero, and only
the imported complement is needed to reconstruct the fixture image. The 15
fixtures also compile both profile dispatchers together, select distinct fixed
operands and asset layouts by version, and guard the JP EGLOBAL reinsertion.

A fresh dual-profile source-only build was verified under `build/cpp-dual-clean`.
Its input tree contained only `src` (excluding all `bin` directories), `include`,
`cpp`, `snes.cfg`, `earthbound.yml`, and `mother2.yml`; no donor image, asset pack,
or previous build output was present. It rebuilt both complete generated
programs, the core, and the bounded game/presentation helpers. All seven CTests
enabled without the desktop frontend passed, including all 15 translator
fixtures. The previously source-built `SPCASM` executable was reused as a tool.

Only after compilation, a separate check asserted that every imported range
in both compiled templates contained zero, imported the explicitly supplied
local donors, and validated the reconstructed US and JP image hashes. The clean
runner then booted each profile for 900 frames: both exactly matched all 57,344
RGB pixels of the corresponding normal-build capture. That shared intro frame's
PPM SHA-256 was
`1746239a2ef9aabc8ee4d9e6bf51caa3e328a73088ae7a31eaaf26de1df434af`.
The donors and resulting packs were test inputs, not build inputs. Build, test,
import, and boot logs remain under `build/cpp-dual-clean`.

The source-only build can be reproduced on Linux as follows. Set `SPCASM` to
an installed/source-built assembler if you want to reuse it; otherwise the
isolated copy bootstraps the pinned tool normally.

```sh
proof_dir=$(mktemp -d)
tar --exclude=src/bin --exclude=__pycache__ -cf - \
  src include cpp snes.cfg earthbound.yml mother2.yml | tar -xf - -C "$proof_dir"
test ! -e "$proof_dir/src/bin"
cmake -S "$proof_dir/cpp" -B "$proof_dir/out" \
  -DCMAKE_BUILD_TYPE=Release -DEB_BUILD_FRONTEND=OFF
cmake --build "$proof_dir/out" --parallel 2
ctest --test-dir "$proof_dir/out" --output-on-failure
```

For an independent audit of every helper call during a route, use the GNU/LLD
linker wrapper harness. The following commands work with the Linux static
libraries from the normal build:

```sh
c++ -std=c++20 -O2 -Icpp/include -Ibuild/cpp/generated \
  cpp/tools/runtime_audit.cpp build/cpp/libeb_core.a build/cpp/libeb_dsp.a \
  build/cpp/libeb_assets.a \
  -Wl,--wrap=_ZN2eb3Cpu14execute_opcodeEhjj \
  -Wl,--wrap=_ZN2eb3Spc14execute_opcodeEhtj \
  -o build/cpp/runtime_audit
export EB_ASSET_PACK=/absolute/path/to/your/earthbound.ebpak
./build/cpp/runtime_audit 3600 0
./build/cpp/runtime_audit 3600 0x1000
./build/cpp/runtime_audit 10000 0 cpp/tests/new_game.input
```

The harness checks actual runtime M/X width against each executed immediate's
compiled length, validates SPC loaded bytes, counts every intercepted helper
call, and observes attempted CPU writes to cartridge ROM. It does not simulate
controller actions outside the supplied script or prove unsampled routes.

On the US memory-speed and refresh timing build, the 10,000-frame new-game
route audited 151,608,405 CPU instructions, 2,662,319 immediate calls across
3,666 sites, and 41,832,620 SPC instructions. All width and loaded-code checks
passed. The 13,013,693 observed CPU writes included no writes to cartridge ROM.
Separate 3,600-frame no-input
and held-Start routes passed the same checks. These are bounded runtime
observations, not an assertion that the full port is complete.

## Independent reference captures

`tools/libretro_oracle.py` is an optional test frontend for an independently
installed libretro SNES core. It uses only the
[public libretro API](https://github.com/libretro/libretro-common/blob/master/include/libretro.h),
not emulator implementation code. It is never linked into the port. A validated
user-provided ROM is an explicit oracle input, while the native executable uses
its compiled instruction template and the local imported asset pack. Do not
give the oracle the placeholder-linked `assembly/us/earthbound.sfc` or `assembly/jp/earthbound.sfc` intermediate.

The helper creates a new temporary system/save directory for every process,
does not read RetroArch configuration or existing saves, and records the core
version, core/ROM/input hashes, core options, and captured image geometry in
`report.json`. Exposed SRAM is initialized to the port's fresh value, `0xff`.
Some cores, including the tested bsnes build, expose no memory through the
standard API; their fresh defaults are explicitly reported instead. Input
scripts use the same SNES masks and frame numbering as `eb_cpp`.

For example, with an existing bsnes libretro core:

```sh
BSNES_CORE=/absolute/path/to/bsnes_libretro.so
DONOR_ROM=/absolute/path/to/your/earthbound.sfc
export EB_ASSET_PACK=/absolute/path/to/your/earthbound.ebpak
./build/cpp/eb_cpp --import-rom "$DONOR_ROM" --import-only
python3 cpp/tools/libretro_oracle.py \
  --core "$BSNES_CORE" --rom "$DONOR_ROM" \
  --output build/cpp/oracle/newgame --frames 12000 \
  --input-script cpp/tests/new_game.input \
  --option bsnes_video_gamma=100 --option bsnes_ppu_fast=OFF \
  --option bsnes_dsp_fast=OFF
./build/cpp/eb_cpp --headless --frames 12000 \
  --input-script cpp/tests/new_game.input \
  --screenshot build/cpp/oracle/native12000.ppm
python3 cpp/tools/compare_ppm.py build/cpp/oracle/native12000.ppm \
  build/cpp/oracle/newgame/frame-012000.ppm \
  --output build/cpp/oracle/comparison.json --strict rgb
```

For the no-input intro and title comparisons, run a separate reference without
the input script:

```sh
python3 cpp/tools/libretro_oracle.py \
  --core "$BSNES_CORE" --rom "$DONOR_ROM" \
  --output build/cpp/oracle/boot --frames 3000 --capture 900 \
  --option bsnes_video_gamma=100 --option bsnes_ppu_fast=OFF \
  --option bsnes_dsp_fast=OFF
for task_frame in 900 3000; do
  ./build/cpp/eb_cpp --headless --frames "$task_frame" \
    --screenshot "build/cpp/oracle/native-$task_frame.ppm"
done
python3 cpp/tools/compare_ppm.py build/cpp/oracle/native-900.ppm \
  build/cpp/oracle/boot/frame-000900.ppm --strict rgb
python3 cpp/tools/compare_ppm.py build/cpp/oracle/native-3000.ppm \
  build/cpp/oracle/boot/frame-003000.ppm --strict rgb
```

`--capture 900 1200 3000` saves additional requested frames. `--dump-memory`
saves buffers the core exposes through its public memory API; `--dump-state`
saves an opaque `retro_serialize` snapshot. Neither option interprets an
emulator's internal structures or changes emulated memory. Snes9x publishes a
[snapshot container description](https://github.com/snes9xgit/snes9x/blob/master/docs/snapshots.txt)
for external analysis; offsets inside its PPU block must not be assumed stable.

`compare_ppm.py` rejects differing image geometry. The one exception is an
exactly doubled reference width: it verifies that every adjacent horizontal
pixel pair is identical before losslessly reducing the width. It reports exact
RGB differences and a separate comparison rounded to SNES 5-bit channel levels.
The latter helps distinguish full-brightness expansion conventions, but is not
a substitute for gamma/brightness matching. It never aligns frame phase or
shifts pixels automatically.
`--strict rgb` and `--strict fivebit` return status 1 when the selected
comparison differs; without this option the tool reports diagnostic differences
without treating them as a test failure.

For the US program, the tested bsnes 115 core, with accurate PPU/DSP and gamma
100, produced exact
RGB matches for all 57,344 pixels of the no-input interference scene at frame
900, the no-input title at frame 3,000, and the new-game bedroom at frame 12,000.
These checks followed corrections to the horizontal scroll latch, RGB expansion,
and brightness quantization. Its 512×224 frames contained verified duplicate
horizontal pairs; no phase or spatial alignment was needed. The extended house
route likewise matched exactly at frame 18,375 after a leftward movement and
release: `house_dialogue.input`, followed by mask `0x200` at frame 18,195 and
mask zero at 18,315. Snes9x 1.63 (core revision `5a40cd5`) independently exposed the same final leader
coordinates, X=7500/Y=344, through its WRAM API. Moving and animated frames can
differ in phase; the house frame 18,195 differed in 170 pixels within one
character sprite, while the released frame converged exactly.

These observations cover specific routes and frames. They do not establish
full-game compatibility or cycle-exact timing. In particular, the animated
intro's palette-upload phase is an independent diagnostic case and must not be
classified as a general rendering error solely from unmatched frame numbers.
At frame 1,200, native and Snes9x WRAM palettes and all VRAM bytes agreed;
Snes9x's exported final CGRAM also matched every native palette word, although
the rendered noise palette differed. The bsnes image's noise colors were a
permutation of the native noise colors while city geometry and compositing
agreed. This narrows the remaining investigation to when the animated palette
is uploaded relative to rendering, rather than establishing a color-math defect.
A controlled renderer-only check replaced the palette in a copied native frame
1,199 bus snapshot with the reference palette and rendered frame 1,200. That
produced an exact RGB match. This diagnostic changed only a disposable test
snapshot; it is separate from end-to-end gameplay and did not patch production
state or game logic.
