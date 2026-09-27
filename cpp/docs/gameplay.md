# Reproducible gameplay checks

These checks run the translated source with real controller inputs. They do not
patch game state, inject a save, or bypass dialogue. Frame numbers are SNES
hardware frames from cold boot with erased SRAM. The scripts retain unsuccessful
movement attempts because those frames also determine NPC positions and events.

## Current timing build

The recorded house route uses `build/cpp` after CPU memory access waits, DMA
clock debt, and WRAM refresh were implemented. It reaches and controls Ness in
his house, completes Mom's opening dialogue and the scripted change from pajamas
to normal clothes, returns downstairs, talks to King, uses the menu's Check
command, invokes the telephone, and exits into nighttime Onett. No battle or
in-game telephone save has yet been demonstrated.

Run the exact route without loading an existing desktop save:

```sh
./build/cpp/eb_cpp --headless --no-save --frames 18195 \
  --input-script cpp/tests/house_dialogue.input \
  --screenshot build/cpp/house-dialogue.ppm
```

The shorter `cpp/tests/new_game.input` performs title/file selection, accepts the
default names, and begins the opening sequence. At frame 12,000 it shows Ness
asleep in his bedroom. The current build executed 181,827,866 CPU instructions
to that point. An independent bsnes 115 run with identical inputs matched every
pixel at native five-bit color precision at that exact frame; see
[../STATUS.md](../STATUS.md) for the reference setup and evidence limits.

The live house route recorded these checkpoints:

| Frame | Observation | Local capture under `build/cpp` |
| --- | --- | --- |
| 12,000 | Ness asleep in the bedroom | `timed-newgame12000.ppm` |
| 13,751 | Controllable Ness has left his bedroom for the upstairs hall | Live probe coordinate log |
| 14,040 | Stairs transition into the downstairs room | Live probe coordinate log |
| 15,221 | Mom asks about the noise | `play-mom-dialogue-wait.ppm` |
| 16,393 | Mom's dialogue has changed Ness into normal clothes and returned him to his bedroom | `play-mom-text8.ppm` |
| 17,113 | Dressed Ness is downstairs again | `play-dressed-downstairs.ppm` |
| 17,812 | Menu Check has produced “No problem here.” | `play-check-phone-wait.ppm` |
| 18,195 | Run ends normally after dialogue/menu input; leader X=7665, Y=344 | `play-live.ppm` |
| 18,375 | Left movement and release ends at X=7500, Y=344; exact bsnes pixel match | `house-left-release.ppm` |
| 19,175 | Home telephone displays “Beeep...” | `phone-talk-wait.ppm` |
| 20,295 | Ness exits his home into nighttime Onett, X=2656, Y=344 | `house-frontdoor-wait.ppm` |

The first live run ended with 273,531,893 CPU instructions, 76,917,170 SPC
instructions, and 9,688,045 synthesized stereo sample frames. Final CPU state
was `PC=C0560A A=002B X=03BF Y=0000 S=1FDE D=1DB2 DB=7E P=04 E=0`;
SPC state was `PC=0BC6 A=C5 X=0E Y=0F SP=CB P=80`. These counts identify the
observed run; they are not a claim of console-level cycle accuracy.

The attempted phone interaction first selected King, whose dialogue appeared
normally; Check correctly reported no problem because the phone is defined as a
person, not a checkable object. A fresh replay followed by 120 frames holding
Left moved Ness from X=7665 to X=7501. JOY1 and the game's PAD_STATE both read
`0x0200` while held. After 60 release frames, at frame 18,375, the native and
bsnes screenshots match all 57,344 raw RGB pixels. Thus the earlier short input
attempts did not establish a movement regression. The frame 18,195 comparison
differs only within 170 character animation pixels; an intermediate moving
frame does not match, so this is not a claim of frame-perfect movement timing.
An independent Snes9x 1.63 WRAM capture also reads X=7665, Y=344 at 18,195
and X=7500, Y=344 at 18,375. At 18,315 its X=7500 differs by one pixel from
the native moving frame's X=7501.

`cpp/tests/phone_route.input` extends the same replay to frame 19,310. It
approaches the phone at X=7662, Y=328 and invokes L; the phone displays
“Beeep...” at frame 19,175, then the A press dismisses it. The initial-story
phone interaction has not offered a save. File persistence tests are separate
evidence and do not demonstrate an in-game telephone save/load.

`cpp/tests/outdoor_route.input` continues to frame 20,295, including the normal
door transition from Ness's downstairs room to nighttime Onett. Reproduce it by
substituting that script and frame limit in the command above.
A fresh final-build replay of this saved script completed with 304,461,784 CPU
instructions, 85,671,082 SPC instructions, and 10,806,203 stereo sample frames.
Its `build/cpp/outdoor-route.ppm` is byte-identical to the original live
`house-frontdoor-wait.ppm` capture. All six memory/register dumps accompany it.
`cpp/tests/exploration_route.input` preserves the complete subsequent live input
through frame 26,097, including walking outdoors and entering/leaving Pokey's
house. Exploration ended normally with 389,727,299 CPU instructions, 109,914,352
SPC instructions, and 13,895,516 synthesized stereo sample frames. The final
leader position was X=2285, Y=368; CPU PC=C04CC3 and SPC PC=0747. The route
does not reach the meteor dialogue or a battle. The SRAM dump is unmodified
game-produced battery memory, not evidence that the player saved by telephone.

## Probe and input format

The optional `game_smoke` target uses the same CPU, bus, SPC, DSP, and generated
source as the frontend. It can advance a persistent process by a chosen number
of frames with a held controller mask. Its only gameplay writes are controller
inputs. It reports read-only leader coordinates and input/menu state, captures
the framebuffer, and preserves raw WRAM, SRAM, VRAM, CGRAM, OAM, and PPU
registers for diagnosis on exit. MMIO
inspection uses a copied bus so it does not change even the live open-bus latch.

```sh
cmake --build build/cpp --target game_smoke
./build/cpp/game_smoke 600 build/cpp/probe.ppm --interactive
# Then type: <duration_frames> <button_mask> <capture.ppm>
# Type quit to end normally and write probe.ppm plus its memory dumps.
```

Main-frontend scripts contain `<absolute_frame> <button_mask>` lines, with `#`
comments. A mask persists until the next line. Relevant masks are A=`0x0080`,
B=`0x8000`, Start=`0x1000`, Up=`0x0800`, Down=`0x0400`, Left=`0x0200`,
Right=`0x0100`, and L=`0x0020`; zero releases all buttons. Thus L invokes the
game's actual talk/check shortcut, including its normal nearby-NPC selection.

## Historical diagnosis

Before the runtime immediate-width translation correction, the new-game route
stopped near frame 8,629 at an uncompiled `PC=005FFF`. At source address C12E2B,
bytes `C9 00 00 F0 04` execute as a three-byte `CMP #$0000` when M=0. The old
dispatch incorrectly consumed only two bytes and treated the third byte as a
BRK. Another source site similarly combines `AND #$00` and a following CLC into
`AND #$1800` at runtime. The translator now compiles explicit M/X width variants
and required overlapping instruction starts. It does not decode arbitrary
runtime code or silently ignore altered instruction bytes.

The corrected translator's earlier fixed-six-clock build reached frame 9,000
with 148,606,321 CPU instructions and frame 12,000 with 198,115,607. Those are
historical diagnosis counts, not the current memory-timing build's results.
Raw failure traces remain ignored build artifacts. The preserved input scripts
allow the current implementation to replay the original failure route.
