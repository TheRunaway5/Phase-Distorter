# Translated CPU semantics

`Cpu` retains the assembly's accumulator, index registers, flags, banks, direct
page, stack, and instruction address. Generated C++ dispatch selects a compiled
instruction site by its original address. Each site calls `execute<opcode>` with
its linked operand and architectural instruction length. Instruction-fetch bus
reads preserve open-bus state and memory-speed costs; their returned bytes never
select or decode an operation. An unknown instruction address is an error.

The instruction matrix and architectural rules follow the
[WDC W65C816S datasheet](https://www.westerndesigncenter.com/wdc/documentation/w65c816s.pdf).
The independent [SingleStepTests/65816](https://github.com/SingleStepTests/65816)
corpus checks the implementation; no implementation code from that project is
included. Corpus revision and download selection are recorded alongside the
local vectors.

```sh
python3 cpp/tests/fetch_vectors.py --count 200
cmake --build build/cpp --target cpu_vectors
build/cpp/cpu_vectors --cycles --limit 200 build/cpp/vectors/*.json
```

The optional vector runner requires the development package for nlohmann JSON.
Production executables do not depend on it. `--count 10000` downloads the full
corpus (several GB); then omit `--limit` to execute all cases. CTest does not access
the network or automatically download these files.

The harness establishes the hardware invariant S.high=$01 in emulation mode;
the corpus intentionally supplies random high bits in the initial stack field.
MVP/MVN corpus cases span 100 clocks, ending partway into a subsequent instruction
fetch. The runner executes the complete seven-cycle move iterations and includes
the trailing fetch bytes when comparing the observed PC. It does not change the
expected register values or memory values. WAI/STP vectors include indefinite
wait clocks; their register/memory state is checked, and their unbounded cycle
count is excluded from the `--cycles` comparison.

`--cycles` verifies architectural instruction cycle totals. It does **not** verify
bus access order, dummy reads, individual clock phases, or SNES master-clock
speeds. The hardware scheduler separately charges explicit instruction fetches,
data reads, and writes at their region's 6/8/12-clock rate, including MEMSEL's
high-bank FastROM selection. Internal cycles take six clocks. Refresh stalls and
DMA/HDMA advance the video and audio clock without executing CPU instructions.
`Cpu::cycles` excludes these stalls; `Bus::master_clocks()` includes them.

Focused CPU/bus integration cases check those rates, interrupt fetch/stack/vector
accesses, and wide memory operands. Missing dummy accesses, instruction-internal
bus phases, DMA arbitration, and interrupt sampling during instructions remain
fidelity work. The implementation does not claim cycle-accurate SNES execution.

## External corpus corrections

The unmodified pinned corpus produces 44 discrepancies, all accounted for by
existing upstream issues [#3](https://github.com/SingleStepTests/65816/issues/3)
and [#6](https://github.com/SingleStepTests/65816/issues/6): one SBC direct-indexed
pointer must wrap within its page, and 43 JSR (absolute,X) stack writes must cross
from $0100 into $00FF. WDC datasheet sections 7.1/7.2 agree with those corrections.
The corresponding upstream changes are still unmerged. They only change the
input/expected RAM locations; their bus-address traces remain uncorrected and
cannot be used as a bus-phase oracle.

Keep the original files and their result separately. To check the externally
published corrected inputs explicitly:

```sh
mkdir -p build/cpp/vector-corrections
curl -fL https://raw.githubusercontent.com/DirtyHairy/65816/8304ada8c0ae85b5e2a637fbdff4b0491c00520c/v1/e1.e.json -o build/cpp/vector-corrections/e1.e.json
curl -fL https://raw.githubusercontent.com/DirtyHairy/65816/75ee13c6c4bacd2fa1f9e265cbedb1140d01b9e0/v1/fc.e.json -o build/cpp/vector-corrections/fc.e.json
build/cpp/cpu_vectors --cycles --corrections build/cpp/vector-corrections build/cpp/vectors/*.json
```

`--corrections` selects separate input files by basename and reports each
replacement. The runner never edits vectors or silently changes expected results.
It compares all registers and specified memory values, and also rejects writes
to addresses absent from the expected memory state.
