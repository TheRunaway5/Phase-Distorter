# Source-translated SPC700 execution

`Spc` implements all 256 SPC700 instruction semantics. Generated C++ calls a
constant opcode helper at each original source instruction address, passing its
source-assembled operands and length. Instructions are not decoded from APU RAM.
The compiled dispatch rejects loaded code that differs from its source mapping.

The original S-SMP IPL boot program is also translated at fixed instruction
addresses. Its instructions clear RAM, send the boot-ready bytes, receive each
uploaded byte through the CPU ports, write it into RAM, and jump to the requested
entry point. No game-specific boot acknowledgment is fabricated.

APU memory implements independent CPU communication input/output latches, timer
target/counter/output behavior, DSP address/data ports and the read-only IPL ROM
overlay. Timers advance from the SPC instruction cycle count. The CPU bus clocks
the SPC through an integer accumulator for the asynchronous 1.024 MHz processor.
The DSP hooks expose instruction-cycle increments and register accesses to the
separate DSP implementation; isolated semantic tests may use its register array.

Validation:

- `spc_tests` exercises the full IPL handshake, a real byte upload and entry-point
  jump, all opcode helper coverage, exhaustive 8-bit ADC/SBC values and carry
  inputs, word arithmetic, multiplication/division edge cases, branches, stack,
  direct-page wrapping, bit operations, communication direction and timers.
- `spc_vectors` checks every final architectural register, all expected RAM,
  unexpected writes and whole-instruction cycle counts against the independent
  [SingleStepTests/spc700](https://github.com/SingleStepTests/spc700) corpus pinned
  to `67d15f492b2740964abd4efd1229e0ec9c342228`. All 256,000 vectors pass. The test
  uses flat memory intentionally: these vectors do not represent SNES MMIO.
  SLEEP/STOP observation-window cycle counts are excluded because those opcodes
  halt indefinitely; their architectural results are still checked.

Reproduce the independent run after building the optional `spc_vectors` target
(requires `nlohmann_json` development headers):

```sh
python3 cpp/tests/fetch_spc_vectors.py build/cpp/spc-vectors
./build/cpp/spc_vectors build/cpp/spc-vectors/*.json
```

The opcode/register behavior and IPL listing were independently checked against
[Martin Korth's fullsnes reference](https://problemkaputt.de/fullsnes.htm).
Whole-instruction timing validation does not establish cycle-by-cycle MMIO read
order, unusual TEST-register wait states, SPC-to-DSP phase accuracy, or audio
sample equivalence. Those remain separate fidelity work.
