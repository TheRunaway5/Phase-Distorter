# Native cutscene port and parity evidence

Updated: 2026-10-08. Cutscene work is in progress. Full cutscene parity remains
an open acceptance gate in the native engine checklist.

The native Continue session now has shared cinematic display and nested event
owners. Regional content is imported from the user's game image. Implementations
live under `cpp/include/eb/native/cutscenes` and `cpp/src/native/cutscenes`, with
separate `coffee`, `sound_stone`, `cast` and `ending` folders. Each family owns
its parser and sequence; shared display, palette, input, actor, audio and retained
scratch owners remain authoritative across entry, suspension and world return.

## Current implementation

| Owner | Authored path | Current acceptance boundary |
| --- | --- | --- |
| `coffee/{resources,text,scene}` | Coffee and tea, dialogue special events 1 and 2 | Real US/JP NPC Talk/Yes callers complete and resume the native world. US coffee/tea and JP tea default full callers match returned graphics, named owners and authored input order; JP coffee retains one extra original poll. Physical scanout and full-scene PCM remain open. |
| `sound_stone/{resources,playback,render,scene}` | Cancelable and mandatory Sound Stone, special events 9 and 16 | All 12 regional direct/cancel/nested full callers match final 65,536 video bytes, staged/displayed colors, party/RNG and input order. Physical NMI timing remains open. |
| `cast/{resources,text,render,scene}` | Cast sequence, special event 11 | Both regional direct/nested callers pass all 12,530 actor/map/queue/OAM/buffer checkpoints and returned video, palette, party, RNG and input order. One US picture, two JP pictures and physical NMI counts remain open. |
| `ending/{resources,render,scene,photograph,photos}` and `credits` | Credits callbacks, saved-photo fades/slides and ending restoration | Actual no-photo startup video and first-callback scratch/palettes match in both regions. Complete regional saved-photo configurations 0 and 5 match authored slot/fade/slide behavior and returned video/palette/party/RNG. Physical work, callback/input timing and pictures remain open; event 12 is not admitted by cinematic services. |
| `display`, `display_view`, `services` | Shared cinematic transport and nested dispatch | Genuine world/Frame/publication continuations, borrowed source storage and immutable render publication. Supported dispatch does not by itself establish source scene parity. |

Name entry, the title cinematic family and the live photographer still require
their complete native authored callers. Saved-photo playback now has its native
sequence owner; its whole-scene physical acceptance remains open. The default
desktop continues to construct `GameSession`; the optional native Continue
path has its own acceptance scope.

## Accepted bounded timed object drawing

The bounded module exposes a genuine redirect-entry queue insertion and
nonempty UPDATE_SCREEN emission from one actual created or retained overlay
map. The independent US/JP reference passes 1,228 compositions and 47 receipt
and lifetime regressions per region, totaling 136,595,763 checks. Both ROM
speeds and instruction budgets 1 and 4,096 preserve original queue, map,
descriptor, scratch, VRAM, DMA, input, elapsed audio and physical-clock state.
The uniform physical sweep covers scanlines 219 through 224 at horizontal
step 16; actual original interrupts witness dispatch, insertion stores,
map clipping and the separate display-selection and next-buffer stores.
A fresh completed OAM_CLEAR
owns the drawing descriptor generation; insertion and screen drawing consume
that generation once. Eager capture and a new clear cannot reuse an active
source preparation. The retained map allocation, imported content, scratch
words and high-pointer bank remain actual borrowed owners.

The entry caller declares the original register, DB7E, index-width and binary
arithmetic facts; it establishes priority and scratch outside the measured
module. Preparation does not manufacture those predecessor stores or reset
queues. Ordinary deferred actor work, full guard-zero RUN, window work,
ending entry and the optional desktop route retain their existing gates.
Genuine created maps and imported authored Mushroom overlays have independent
original/native producers. A separately declared same-allocation linked RAM
input tests the emitter without claiming an authored link-producing caller.
Escaped, cyclic, bank-spanning and more-than-127-record maps reject before
effects; full-capacity aliasing retains its original gate.

## Actor drawing caller

The bounded actor-drawing module now passes original-executable comparison
for both regions: 1,670 compositions and 67 ownership/admission regressions per
region, with 184,236,707 assertions. The uniform interrupt grid spans lines
217 through 224 in 16-clock steps at both memory speeds. Strict witnesses cover
the actual near-wrapper return, map attributes, one-shot priority, callback
and overlay dispatch, and distinct display/next-buffer stores.

It represents the genuine bank-80 per-role near wrapper, ordinary callback
map-attribute stores, no-water/no-overlay branch and main map tail insertion.
The external near call is charged separately; the near/tail insertion shares
the literal insertion body with the existing far redirect without adding a
call. It borrows an actual created actor/map and a declared component entry
owner for the otherwise unavailable full map-high/callback words and disjoint
C-stack locals. Creation retains the imported body-divide word. Actual retained
buffer IDs outside the source's two buffers and same-buffer generations reject
before effects. The entry, actor, map, work clock and display generation remain
owned through insertion and screen consumption.

Full RUN traversal, its locals and predecessor timing, multiple-actor/overlay
preparation and desktop integration remain outside this component. The strict
full Ending gates remain unresolved.

## Accepted normal global actor drawing

The original bank-80 normal global helper (US80DB0F / JP80DAD7) now walks
actual FIRST/NEXT links from the shared ActorWorld. It clips before priority
classification, writes retained linked sorting rows, selects unsigned absolute
Y and preserves each equal-Y replacement and interior splice store. Every role
call shares one actual C-stack page and one fresh clear generation. That
generation becomes prepared only after the global near return and its pending
represented interrupt work; exact response then permits one UPDATE_SCREEN.

The standalone component declares native/X16/binary bank80, DB7E and
D1E00/S1FFD. Its global locals are D1DE8; each real nested role call enters
D1DE8/S1FF9 and aligns to page1D00. The actual external indirect JSR at
US8094C8 / JP8094A7 is charged separately. Its raw selector and X0 are excluded
caller inputs; this does not establish actual full RUN dispatch or stack depth.
The fact/page entry, current actor graph, creation maps, drawing input and
physical owners remain borrowed through the exact screen consumer.

Fresh original comparisons pass 5,064 compositions and 75 admission/lifecycle
regressions per region, totaling 1,248,444,396 checks. The full matrix enforces
actual original interrupt witnesses after deferred prepend, candidate replacement,
interior splice, nested role attributes/priority, the indirect caller return,
and the distinct display/next-buffer stores. A statically derived 4,300-case
uniform sweep spans lines200..224, horizontal step16 and both ROM speeds;
witness enforcement covers the complete matrix. The previous role, insertion,
foreground, screen and wait comparisons also pass in the same frozen build.

The reference restores only the two original CMP clipping instructions that its
inherited presentation dispatcher widens. It checks immutable cartridge bytes,
uses real instruction preparation and CPU fetch/flags/clocks, and adds no
validation bus reads or cartridge mutation. First RED results remain preserved.
Independent real bare-retirement preparation confirms that pre-admission graph
changes can leave retained graphics; captured actor loss during or after admitted
drawing still rejects before effects. This does not time the retirement caller.

Numeric SELECT drawing, water/overlay callbacks, unrepresented entry pages,
full RUN predecessor/epilogue and desktop source-clock installation remain open.
The strict full Ending timing gates remain unresolved; this bounded helper and
ordinary NativeSession screenshots do not close those full-scene gates.

## Accepted forced-blank window publication

The actual US C2038B / JP C2036C helper now performs both forced-blank
window uploads through the existing shared display transport and physical DMA1
owner. The first copy reads 1,792 bytes from the retained BG2 buffer at
US7E7DFE / JP7E8176 into VRAM word7C00; the second reads the immutable regional
64-byte tail at USC40BE8 / JPC40B34 into word7F80. The last256 BG2 bytes and
unwritten VRAM rows retain their previous values. Raw copy parameter overlaps,
VMAIN/VMADD, DMA registers, heap reset and regional transfer flag follow the
literal store order. Each actual MDMA effect publishes its corresponding
Scene/Tail metadata; the exact completed receipt resumes its original parent.

This remains an explicit source-window opt-in. Binding SourceWorkClock alone
preserves ordinary WindowTick behavior. The semantic predecessor prepares a
genuine WindowPublication suspension outside the helper measurement; admission
requires its preceding dirty-word store already represented. The helper declares
native/X16/binary C2/DB7E/S1FFC with D1E00 or D1D12, and retains one actual
page1D00 owner. The real outer JSL at USC12E37 / JPC13555 is charged separately.
These declared component contexts do not establish full WINDOW_TICK depth.

The same retained BG2 owner is borrowed by WindowHost, cinematic initialization
and restoration, and outlives its session borrowers. Its lifetime, exact entry,
fade, physical/audio clocks, peripheral bindings and original parent receipt
are checked before each atom, including completed but unacknowledged work.
Expired owners, consumed receipts, unsupported callbacks, queued nonblank work
and active glyph/window producers reject before effects.

The independent reference passes 4,324 compositions and42 regressions per region,
totaling 17,414,375 assertions in the coherent build. It executes its own mapped
original896-word cold producer; native preparation uses its own source-derived
writer. Declared nonzero descriptor inputs test transport separately. Both ROM
speeds, budgets1/4096, aligned/nonaligned direct pages, masked interrupts and a
statically derived4,300-case uniform sweep over lines200..224,h16 are covered.
Strict full-matrix witnesses include both DMA completion ordinals, transient
copy-parameter overlaps and the actual outer far-return PC. Actual original
VRAM descriptors and a separately declared artwork atlas establish each
metadata publication; this does not claim original font rasterization or full
PPU/caller timing.

The prefix RAND/meter/palette/draw work, full WINDOW_TICK, active glyph/credits,
nonblank DMA ring, RUN adoption, complete Ending physical timing and desktop
source-clock integration remain open. The strict full-scene gates are retained.

## Accepted literal RAND component

The US C08E9A / JP C08E8B RAND leaf now retires each original instruction
from PHP through RTL using the actual shared primary/secondary RNG words and
retained peripheral multiplier. The original C1 JSL at C12DD7 / C13504 is
charged separately and returns C12DDB / C13508. The conditional BCC preserves
its sampled carry and skips only the genuine ORA instruction. Temporary A8,
saved P, sampled product, PHA/PLA, word stores and final flags follow literal
order. Taken27-atom and untaken28-atom paths cost612/624 FastROM or718/736
SlowROM useful master clocks before the caller, refresh and represented NMI.

The new begin_source_random_window_tick opt-in suspends its real Scene/Window
Tick before semantic RAND. The exact completed receipt records Random once
and resumes Gates without a second RNG call, input poll or clock charge.
Ordinary WindowTick and the existing source-window-publication opt-in retain
their previous behavior. Shared RNG value copies have independent lifetime
identities; a live literal receipt prevents a competing semantic producer or
assignment to its actual words. Weak owner checks and exact parent identity
remain active before every atom and completed but unacknowledged response.

The actual M16 STA004202 writes both operand latches and starts eight useful
CPU cycles of multiplication. Previous RDMPY remains visible after that store
until its remaining2/1 cycles complete. Math advances once per represented
instruction before physical/refresh charge, including the actual NMI hardware
entry. That entry alone finishes the maximum pending debt before any NMI DMA.
Initial unowned math and generalized pending-math/DMA overlap remain rejected.

The independent mapped-ROM reference passes2,992 compositions and46 meaningful
regressions per region, totaling 2,096,698 assertions. Both ROM speeds,
budgets1/4096, D1E00/D1D12 and retained caller flags are covered. The uniform
2,728-case sweep uses lines223..224,h4 and both conditional seeds, with strict
required interruption witnesses at multiplication, carry, RNG stores, product
load, stack save/restore, PLP and the true outer return. Queued-owner rejection
retains real descriptor bytes, byte credit, producer/consumer indices and
transfer identity. The unchanged semantic RAND/HP/PP reference also passes for
both regions, independently checking values and completed routine results.

This is a declared native binary M16/X16/carry-clear C1-to-C0/DB7E/S1FFC
component with empty VRAM ring and actual default NMI work. It does not prove
inherited CloseAll stack context, the preceding REP31 or later WindowTick
meter/palette/draw work. Whole WINDOW_TICK/RUN/Ending, original full-cutscene
physical/PCM parity and desktop source-clock integration remain open. Isolated
embedded-peripheral destruction and pending-math-only entry are static gates
rather than independent executable cases. The strict full-scene gates remain.

## Accepted literal HP/PP roller component

The named HP_PP_ROLLER leaf at US C2109F / JP C20F3B now retires each original
instruction from REP31 through RTL against the actual shared Party, prompt,
clock, multiplier and borrowed local-page owners. It includes the reached
low-input MULT168, near C20F58 / C20DE9 speed helper and positive/negative
ASR32 paths. The genuine WindowTick JSL C12E14 / C13532 is separately charged
once and returns C12E18 / C13536. Integer and fractional HP/PP updates,
wraparound, clamps, fraction arm/disarm and flipout targets follow literal
order; returned A/X/Y/P/D/S retain actual source effects.

The explicit begin_source_meter_window_tick opt-in uses the actual Window tick
and suspends before its semantic roller. Its existing RAND/Gates/Draw prefix
is excluded semantic preparation. One exact completed receipt resumes the
existing UpdateMeters continuation without a second meter or RNG call. The
ordinary source-window-publication and source-RAND opt-ins retain their prior
behavior. Actual Party, MeterWindows, borrowed page, interrupt, physical and
work identities remain checked before every atom and completed response;
competing semantic meter work rejects the live literal lease.

Main D1DEC and speed-child D1DDE use one borrowed page1D00. Child return words
alias the parent's low/high speed locals. M16 reads preserve counter/OAM-low,
rolling-disabled/flipout-low, half-speed/fastest, fastest/rolling-disabled and
member/next-order bytes. Actual NMI can change frame selection before its LDA,
while the sampled member and later operands remain retained. Multiplication
preserves actual operand latches, previous/new/pending product, quotient and
cycle debt; math, refresh, NMI, input and physical/audio elapsed remain on the
existing actual owners.

The independent mapped-original reference passes14,024 compositions and52
meaningful regressions per region, totaling 63,579,178 assertions. Both ROM
speeds, budgets1/4096, incoming M8/M16/carry/flag variants, all six retained
party rows, actual low/high meter stores, boundary fractions, speed/control
bytes, empty/guest members, genuine reset preparation and masked NMI are
covered. The uniform12,276-case physical sweep uses lines219..224,h4 on three
complementary paths. The source-derived conservative bound is7738 clocks
before the first edge, with separately represented default NMI. All24 required
real original interruption PCs are enforced across the full matrix, including
selected frame/member samples, multiply, speed/ASR locals, each HP/PP low/high
store, flipout targets, restored D and the true external far return.

This accepts a declared native/binary C1-to-C2/DB7E/X16/D1E00/S1FFC component,
completed entry math, empty VRAM ring and actual default NMI. Incoming carry
and accumulator width are preserved until the actual REP31 clears M/X/C.
It does not establish inherited CloseAll/whole WindowTick stack context,
RAND/Gates/Draw timing, later meter glyph/palette/publication work or a completed
same-parent WindowTick/new generation. Consumed and abandoned/expired receipts
are exercised; a retained old leaf versus a new invocation with the same
Party/page/window identities is not isolated. Individual embedded peripheral,
audio, input, tick and WindowHost destruction remain outside executable scope.
Whole RUN/Ending, full-cutscene physical/PCM parity and default desktop
source-clock integration remain open; strict full-scene gates remain intact.

## Staged literal HP/PP meter artwork component

The upload1 UPDATE_HPPP_METER_TILES component passes independent mapped
original/native comparison in both regions: 16,228 compositions and 69 meaningful
regressions per region, totaling 1,293,081,578 assertions. All 37 frozen required
checks pass. Both typed boundaries, ROM speeds and budgets are covered; all 29
required real original interruption PCs are enforced across the full matrix.
This accepts the named artwork producer and reached helpers within the declared
component inputs. Preceding WindowTick timing and the later suffix remain open;
delivery and fresh main-checkout acceptance still require their separate gates.

Two typed boundaries keep the real caller instructions explicit:

| Boundary | Authentic entry | Declared context and call ownership |
| --- | --- | --- |
| `HelperEntry` | US C213AC / JP C2124C REP31 | C2 program, C1 caller, DB7E, D1E00/S1FFC. Upload1 is independently retained; the genuine C1 JSL is excluded. |
| `WindowSetup` | US C12E18 / JP C13536 SEP20 | C1 program, DB7E, D1E00/S1FFF. The actual SEP20, LDA byte1, STA upload and C12E1F/C1353D JSL are included once. |

Both entries require native/binary/X16 execution and declare actual A/X/Y/P.
Incoming M8/M16 and either carry remain live until literal source instructions
change them. The body finishes at US C21627 / JP C214CF RTL with restored
D1E00/S1FFF and path-dependent registers; final REP30 is represented. These
standalone declarations do not establish containing whole-WindowTick stack
provenance.

The explicit begin_source_meter_tiles_window_tick opt-in suspends the actual
Window tick before UpdateMeters sets upload or calls semantic artwork update.
Its RAND/Gates/Draw/Roll predecessor is excluded semantic preparation. One
fresh completed receipt records UpdateMeters and resumes Palette without a
second semantic update. Lower Scene retains opaque parent/service ownership;
concrete source-clock work remains in the upper library. Existing standalone
window-publication, RAND and roller entry boundaries remain separate.

The body includes the direct drawn-mask ASR8 loop, low-input MULT168, HP/PP
near wrappers, decimal separation, concentration X tiles, ordinary animated
digits and reached16/32-round software division. Software carry, scratch,
index, direct-page and branch effects retire individually. It preserves the
retained frame phase across NMI and rereads later member fields at their real
loads. Early render/member/guest/mask exits preserve upload1; the reached final
byte STZ clears it once. Upload0 PREPARE children and high-input MULT168 paths
remain gated, with no substitute instruction or padded delay.

BG2 is the existing DisplayState.text_tiles owner, borrowed by WindowHost.
Literal descriptor stores update that storage and its derived staged cells
from the same real artwork atlas; published windows and the last256 BG2 bytes
remain unchanged. The four existing shared digit allocations, their adjacent
three-byte decimal workspace, and one12-byte software DIV/MULT scratch owner
retain their source aliases. Only the scratch family's first6 bytes are
reached. The workspace+2 word read overlaps the first digit descriptor, and
the real control.automatic_mode low byte supplies the widened controlled-count
read's neighbor. The JP count is9B55 and its neighbor9B56, verified from the
actual linked instruction. Hardware math retains the existing operand,
product, quotient and pending-debt owner.

One actual SourceMeterRollerEntry page supplies the shared1D00 locals: main
D1DDE, HP/PP1DCE, decimal/X1DBE and fill1DB6. Child parameters and later frame
reuse touch the same bytes rather than copied return structures. Page, Party,
MeterWindows, WindowHost/BG2, control, arithmetic scratch, work, interrupt and
physical/peripheral identities are validated before borrowed reads and each
atom or response. Bound control uses its actual wrapper and state lifetimes;
value copies get fresh identities, and assignment checks the destination
lease before scalar changes. Abandoned, consumed or expired receipts cannot
resume this suffix. Audio retains the existing borrowed-owner contract;
independent audio destruction is not claimed.

The source-derived branch-independent overbound excludes external caller,
refresh and interrupts. It is US3065 atoms, C/R/S13202/6396/4408, or88028 fast
and100820 slow useful clocks; JP3069 atoms,13208/6402/4406, or88060 fast and
100864 slow. Independently maximized sign/compare paths may be mutually
unreachable, so these are conservative source sums rather than a reachable
maximum or an aggregate production charge. WindowSetup adds its actual four
atoms17/11/4, or110 fast/132 slow useful clocks. The deepest foreground stack
is1FEC; the admitted default NMI's19-byte bound reaches1FD9, disjoint from the
shared local page. The bounded physical sweep and required real original interruption witnesses pass within the declared component matrix.

The public boundary and lease adapter live in story/source_meter_tiles.hpp
and source_meter_tiles.cpp. Private story/meter_tiles/execution owns retained
registers, address resolution and instruction accounting; main preserves
caller/helper order, digits owns the reached tile producers, and division
owns the literal software loops. This subfolder keeps the helper internals
behind one small boundary while sharing the real page, scratch and display
owners. Production does not dispatch opcodes or execute the original processor.

Admission still requires represented default NMI, completed entry math, empty
VRAM ring, closed glyph/window work, real artwork and physical/peripheral
affinity in both directions. An ordered same-parent roller-to-artwork pipeline
is not implemented or accepted. Status/palette/publication/world continuation,
full WindowTick prefix, unsuppressed RUN, full Ending, physical/PCM parity and
default desktop source-clock integration remain open. Strict full-scene gates
are retained; staged implementation and isolated helper evidence do not close
them.

## Staged literal window status and palette component

The regional status and conditional palette suffix passes independent mapped
original/native comparison in both regions: 16,018 compositions each, with75 US
and74 JP meaningful regression calls, totaling 82,328,187 assertions. All39 frozen
required checks pass. Both ROM speeds and budgets are covered; all27 required
real original interruption PCs and genuine partial-copy1/16/31 plus prior-upload24
obligations are enforced across the full matrix. The original uniform grid is
unchanged; ten genuine225:0 rising-enable entry cases also prove the first
suffix interruption in each region. This accepts the named suffix
within its declared inputs. Main-checkout delivery remains a separate gate;
full same-parent Window/Ending/default desktop timing remains open.

The measured component starts at US C12E23 / JP C13541 and stops before the
area-clear store at C12E34 / C13552. It includes the actual near status call,
its returned comparison and conditional far palette call, preserving the true
caller return. The entry declares native binary M16/X16, C1/DB7E, D1E00/S1FFF
and actual register inputs. Earlier RAND, drawing, rolling and artwork work
remain semantic preparation outside this measurement. The explicit
begin_source_meter_status_window_tick opt-in suspends before Palette; its exact
completed response advances the same Window tick to Publish once.

Status reads and classifies the selected party member's group0 byte. Palette
selection separately rereads the live count, controlled row and status word;
these reads preserve adjacent owned bytes. The original flavor/name word is
masked after its actual load. The admitted count is1..5, controlled rows0..5
and flavor1..5. Count0/6 and arbitrary pointer-table changes remain gated.
The native pointer invariant derives the six actual Party records established
by C43317/C43090; the independent original fixture must run that genuine
producer, without donating its output to native state.

WindowResources retains the actual15 property bytes and the imported regional
palette allocation:448 bytes US,384 bytes JP. The helper reaches only its first
384 bytes. Palette prologue derives D1DEE in the same actual page1D00 used by
the previous meter components. It preserves the real local aliases, nested
returns, foreground stack and restored direct page.

Each of the32 literal word-copy stores updates the single raw staged palette
and existing WindowHost/Scene color projections at that retirement. Later
first-color clear and upload8 request remain distinct source effects. A prior
upload0/8/16/24 is retained until its actual consumer or upload store, allowing
represented default NMI to publish a genuinely partial copy. NMI separately
owns displayed colors and CGRAM; this component adds no synchronous final
palette replacement or early upload request.

The existing ending InitializerWorkState aliases one immovable CopyCounterState
for the actual00A5/A6 word. SourceWork binds that exact counter for its lifetime;
initializer and status operations claim the same instance exclusively. The
32-word copy performs STX64, LSR32 and33 distinct decrements endingFFFF. Admission
does not manufacture or reset another counter. Weak counter, palette and
publisher guards precede their borrowed effects and interrupt dispatch.

The opaque response belongs to one suspended lower operation. Zero-budget and
completed advances still validate actual identities and lifetimes. Abandonment
poisons the live parent; destroying that Scene operation invalidates its child.
Release checks exact weak claims, so an old child cannot release a later one.
Enclosing Scene/Runtime and audio retain their existing owner-outlives-borrowers
contract. Named competing semantic writers reject an active claim; inherited
public raw fields and mutable getter references retain their caller contract.

The public boundary lives in story/source_meter_status.hpp and its adapter;
private story/meter_status/{execution,status,palette} owns the literal sequence.
Native code contains no original gameplay CPU. Only this component's
independent comparison fixture executes original instructions. The native interrupt service remains synchronous:
foreground retirement snapshots expose completed handlers, without claiming a
native per-interrupt-instruction observer.

This component does not establish the complete Window caller or a composed
42..46 pipeline. The publication suffix, foreground/caller work, CloseAll, full
RUN/Ending, custom callbacks, open/glyph producers, optional desktop source-clock
installation, default native desktop migration, live monitor timing and original
full-scene PCM retain their separate gates. Existing strict full Ending failures
remain unchanged and cannot be closed by this staged component.

## Source authority and comparison rules

The regional assembly in `ebsrc` and actual US/JP game images are behavioral
authority. Reference programs execute original helper bodies and full callers
with the test-only processor. Production cinematic modules do not execute a
compatibility gameplay processor. Tests compare the ordered writes, retained
state, transfers, returns and visible pictures appropriate to each boundary.

The inherited translated processor contains nine presentation overrides per
region. Full cinematic references now restore the six actual ROM comparison
instructions after interrupt preparation, and reject the three overlapping
entries if reached. A complete generated-instruction audit found these declared
sites and no other literal differences. These test-only repairs leave production
processor behavior unchanged; earlier receipts that used the widened source
remain separate evidence.

Suspended display operations require an actual publication receipt before they
resume. Tests preserve failures for physical frame counts, input order, palette
and raw graphics. Named helper diagnostics state their narrower entry inputs;
passing a diagnostic does not close the original full caller gate.

## Accepted focused checks

- The actual actor graphics transport passes 20,020 allocation-tag cases, 900
  rounded allocations and 11,136 uploads per region. Uploads cover all 464 sprite
  groups, both frame formats, retained creation geometry, all 65,536 video bytes,
  the displayed reference and the original returned destination. Queue/budget
  suspension uses the actual shared display owner.
- Raw sprite imports pass 464 original geometry helpers and 8,090 frame/format
  imports per region, including 2,250,240 planar bytes and five complete source
  banks. Existing bounded imports remain valid; full-bank access requires the
  actual imported bank.
- Complete raw creation/retirement passes 1,856 cases per region. Original party
  actor initialization passes 384 cases per region, including character startup,
  RNG, retained references, all video bytes, allocation tags and the complete
  896-byte spritemap pool. These helpers
  preserve the previous retired actor's moving direction as the source does.
- Raw object emission passes 12,614 original cases per region, including retained
  OAM bytes, high-table packing, linked parts and clipping. Hardware object
  sampling passes 384 cases per region. The actual completed actor drawing
  producer compares the complete map pool, 1,036 working bytes and 544 OAM bytes;
  the second-controller Select branch has separate numeric traversal and priority
  sorting coverage. Each region passes 467,712 producer cases, 288 linked/overlay
  cases and 464 creations drawn before their first logical pose. Multipart
  bodies and overlays share one actual actor motion anchor; five interpolation
  phases match a rigid translation without changing older frames. These helper
  proofs do not close full Cast picture or phase parity.
- Complete enemy creation and row/column helpers pass 1,251 callers per region,
  including 359 real creations, 19 failed-placement deletes, 4,814 random draws
  and 1,528 terrain probes. The asserted allocation tags, map pool, complete
  video, authored variables, identity, geometry and RNG match. Two genuine
  publication waits are separate native continuation evidence; complete original
  world-frame timing is not established by this leaf fixture.
- The actual party placement continuation passes 192 complete original C07B52
  cases per region, plus two saturated transfer cases driven through genuine
  Runtime publications. The latter compare final images against the declared
  forced-blank helper boundary; they do not establish physical phase parity.
- Coffee/tea text helpers pass 2,344 US and 10,312 JP cases. Real player-area and
  map-palette helpers pass 24,843 and 1,536 cases per region respectively; the
  palette proof includes the actual adjacent 64-byte transfer queue alias.
- Sound Stone playback core passes 26 regional cases, 30,440 authored waits and
  107,880 ordered objects, with exact source pictures at the tested captures.
- Cast text helpers pass 626 regional cases and 336 ordered transfer plans.
  Exhaustive regional angle and signed vertical-velocity helpers pass all 65,536
  words each. Follow-variable-angle source checks cover retained animation and
  validate admission before any mutation when a raw return lacks its owner.
- The source work clock borrows the actual audio, peripheral, Runtime and raw
  object owners. Original OAM_CLEAR matches 184 regional cases across 23 phases,
  both buffers and both ROM speeds: 292,198 owner/raw/time checks. All 544 OAM
  bytes, four working queues, refresh pauses and final raster/audio phase match
  without advancing logical input/RNG. These cases mask NMI; unknown interrupt
  work and pending/working buffer aliasing remain rejected.
- The literal native-mode NMI entry, vector, display/DMA/fade work, callback,
  timer and return pass 40 original cases per region. Four additional cases
  per region retain a real interrupt across an 8192-byte DMA and hardware flag
  clearing. The real Runtime, audio, display, palette, heap and peripherals are
  borrowed; unsupported callbacks, IRQs and unowned display work reject before
  mutation. Publication responses require a fresh completed timed handler.
- The reset/retain blank helpers pass 40 original cases per region, including
  the near-boundary path that performs two interrupts. Timed cinematic waits
  pin their actual Runtime child and consume its existing handler receipt.
  Clock loss, unrelated work and premature ordinary completion reject safely.
- Literal WAIT and inactive READ_JOYPAD/recording/processed input pass 156
  original cases per region and 5,019,226 checks across both ROM speeds,
  single-instruction and larger budgets, pending-byte wrap, hardware/mirror
  mismatch, auto-read, repeat/debug input, and actual interrupts after both
  flag clears and during input stores. The exact suspended Scene/Runtime
  continuation consumes a single receipt without clearing the late pending
  byte or repeating input, time, callback, DMA or publication work. Masked
  waits retain one immutable capture. Foreign/stale/abandoned owners and lost
  clocks reject safely, including a peripheral attached to the same clock
  that is not its actual auto-read destination. The ordinary completion paths
  cannot bypass a claimed source WAIT. Active demo recording/playback remains
  outside this leaf; its source flag is checked at the literal read sites.
  These explicitly bound helpers do not establish the preceding foreground
  actor/window work or physical timing of the optional desktop NativeSession route.
- Literal UPDATE_SCREEN borrows the actual OAM builder, four retained priority
  queues, frame latches, scroll words, physical peripherals and interrupt owner.
  Its original reference covers 504 differential cases per region plus retained
  high-byte and ownership regressions, using independently mapped original
  producers. Each high-table flush, scroll sample/store, display selection and
  drawing-buffer toggle has its own instruction boundary. The actual suspended
  Scene/Runtime continuation consumes the exact completed helper without a
  second object clear, draw, input poll or publication. Physical NMI can observe
  partial scroll stores and the new display selection before the later toggle.
  Native publication preserves the display-request high byte, matching the
  original X8 STY. Expired interrupt owners and one-way physical/peripheral
  bindings reject before effects; claimed leaves also reject later owner loss.
  Unowned nonempty queues, deferred actor emission, full-capacity OAM aliasing, IRQs and
  unrepresented NMI work remain explicit gates. Producer preparation timing,
  general spritemap emission outside the separately accepted owned-map slice,
  preceding actor/window callers, direct ending
  initializer callers and physical timing of the optional desktop NativeSession route remain outside
  this helper.
- An explicitly admitted no-window, overworld C1004E continuation exposes its
  six prefix instructions, four genuinely suppressed RUN instructions and final
  RTL as separate source-work leaves. Admission requires the actual preexisting
  nonzero actor guard, idle actor/cache owner and completed world capture before
  changing a continuation. The leaves retain each sampled render/battle/guard
  value and acknowledge the exact lower tick stage without manufacturing or
  clearing the actor guard. Existing CLEAR, SCREEN and WAIT calls run once.
  The final return remains pinned through its actual RTL receipt. Generic
  WorldFrame, Window, ActorFrame and nested paths retain their existing behavior.
  The independent reference passes 2,430 composed cases and 28 admission and
  lifecycle regressions per region, totaling 14,049,311 checks. It witnesses
  real interrupts after each sampled branch read and the final far return.
  It charges a genuine regional credits caller JSL separately; the helper
  does not own that caller or its preceding loop work.
  Render/battle branches, guard-zero actor traversal, recursive/cached emission,
  pending world capture, ending initialization and foreground DMA queue callers
  remain outside this admitted composition. Its represented interrupt callbacks
  do not mutate the sampled branch fields; no such callback is invented for the
  comparison. Full ending and physical timing of the optional desktop NativeSession route remain unresolved.
- Actual decompression and forced-blank copy work pass 112 cases per region,
  including all seven compression commands, complete retained BUFFER/VRAM,
  raw DMA parameters, refresh and physical timing. Palette-copy/clear and
  text-buffer initialization pass 320 cases per region, comparing each source
  instruction and store, retained counters, palette bytes and unwritten text.
- Actor graphics allocation work passes 360 cases per region. The source world
  scheduler passes 1152 cases per region; task expiry callbacks still require
  their own timed bodies. These helpers have explicit scene clock bindings;
  they do not establish complete CREATE/INIT or cinematic foreground timing.
- Credits callback work passes 16 original cases and 156,320 callbacks per
  region, including full imported scripts, all commands, name conversion,
  retained tails, quarter-scroll carry, queue wrapping and physical scroll
  writes. It borrows the real composition buffer and PartyTrail queue alias.
  The dispatcher selects the actual installed World or Credits owner. US
  completely occupied converted-name fields still require the adjacent live
  DELIVERY_ATTEMPTS byte; native scene admission retains that explicit gate.
  Permanently revoking the installed callback also releases its dispatcher slot,
  so retaining a completed credits result does not reserve the next scene's slot.
  Destructor cleanup remains safe after a subsequent callback is installed.
- Physical scroll port checks cover every BG3 low/high byte pair and 256
  mixed-latch screen publications per region. No pending UPDATE_SCREEN means
  no new scroll-port writes; logical staging and retained pictures remain stable.
- Saved-photo slide arithmetic passes 298 focused regional checks for signed
  fractional division, 16-bit wrapping, quadrants, zero distance, retained
  unrelated layers and the original unsigned loop count at a signed boundary.
- Credits resource checks include three actual decompression streams per region,
  20 photo-flag count cases and 136 saved-photo sprite identities. Original text
  callbacks remain verified beyond the convenience host's completion boundary.

The complete Cast reference includes Continue's original restored window-close
caller before C0B67F. US performs a WindowTick and screen update even when its
windows are empty; JP closes synchronously. The fixture checks input, RNG and
next-buffer equality before the later startup seed. Omitting that real US
caller previously left its reference one buffer behind. The correction changes
the reference entry, without changing production buffer selection or weakening
any raw graphics or physical gate.

The actual Scene selection menu previously reread the same input synchronously.
It now follows the original C12E42 world-tick path. The regression fails with the
previous branch and passes with the correction, exercising fresh input polling,
actor advancement and resumed dialogue in both regions.

An explicit battle window Focus command now follows SET_WINDOW_FOCUS without
eagerly reading the unrelated active-window lookup from retained graphics bytes.
The old path fails on actual US/JP encounter entries; the regression and ordinary
and instant native Continue encounters now complete through map return. Control
and repeatedly sampled runs retain identical pixels, PCM and frame receipts.
This is native-session behavior evidence, not whole-original battle timing parity.

JP unfocused newlines retain the original 16-bit register arithmetic. They can
reach actual animated tile staging, follower history or menu option fields.
The adapters borrow those owners and reject unowned bytes or raw script pointer
fields. Whole-owner and shared-composition source checks cover unconditional
CC00, conditional CC01, zero/nonzero text X and wrapping cursor increments.

## Integrated evidence and remaining differences

The coherent regional session fixtures enter real NPC 723 at (544,7408) for coffee
and NPC 1257 at (352,328) for tea. All four execute L/Talk/Yes, admit and complete one
cinematic and resume 120 world calls with zero gameplay CPU instructions. A
second native session samples widths 320, 398, 1024 and 256 at boundaries;
every-frame canonical pixels and PCM match between the two native sessions,
and retained earlier scenes and the disposable battery fixture stay unchanged.
This fixture establishes presentation sampling independence. Original full-scene
PCM has not been compared by these tests.

Production World/Startup/Runtime share the actual imported actor graphics
lifecycle. Party relocation, battle return, item formation and homesickness
retain each selected upload and service its real publication before advancing
the next member. Four US/JP alpha/beta NativeSession travel flows complete and
resume 120 world calls with zero gameplay CPU instructions. A frozen sanitizer
build also passes these four flows and six focused owner/continuation suites;
this evidence does not establish live desktop or complete cutscene parity.

Actual maintenance and camera callers also suspend NPC and enemy creation on
their real graphics publication child. Twelve US/JP cases compare work budgets
1 and 4,096, including padded enemy sprites and a genuine saturated preceding
DMA. Repeated advancement cannot commit INIT_ENTITY, repeat random/terrain work,
advance actors or poll input while that child is held. Teardown releases retained
creation operations before their borrowed lifecycle is destroyed.

Full default coffee/tea callers now match all returned world video bytes in
three cases: US coffee, US tea and JP tea. They also match the named palette,
window and background owners and authored row/input order. JP coffee retains
one additional original poll: an NMI interrupts the original row clear and
leaves NEW_FRAME_STARTED set before the final fade. A native authored wait
sequence alone does not reproduce that instruction-time phase. Physical
scanout, the coffee half-rate background phase and original full-scene PCM
still require their independent acceptance checks.

The ordinary physical map loader now uploads both rows of every authored overlay
selection after area colors and before window colors/activation. It borrows the
actual immutable sprite banks, preserving the source bank cursor wrap and shared
DMA budget. Photograph loading retains its distinct source path and skips these
ordinary overlay uploads. Six complete original regional loader cases compare
all 196,608 video bytes and the retained scratch owner; no NMI or input poll is
introduced by the overlay helper.

Complete original no-photo credits callers execute to completion. Binding the
real World graphics lifecycle also binds startup window composition, and the
map loader now retains all 960 collision selectors, including ordered event
substitutions and the untouched adjacent tail. Complete regional map references
pass all 20 original LOAD_TILE_COLLISION helpers and event-resolved selectors.
The default credits reference now uses the actual native startup scratch:
first-callback video, all 65,536 scratch bytes and staged/displayed palettes
match in both regions without original entry seeding. The first callback still
fails the strict physical frame/input gate (3 versus 8/7 NMI publications and
2 versus 1 input polls). In the earlier WAIT-only timing proof, the US timed
caller rejects pending window work before its entry sample. JP reaches its
actual callback with 6 versus 7 NMIs and 2 versus 1 polls, but differs in
10,298 video bytes and 8,968 scratch bytes; palettes match. Preceding callers
remain untimed, and neither timed result establishes full ending parity. The
literal empty-queue UPDATE_SCREEN helper is separately admitted; it cannot
bypass pending window or deferred actor work in the complete caller. The
current timed caller retains the US pending-window gate and rejects JP's
unrepresented deferred actor emission before the ending entry is admitted.
Those strict failures remain separate from the helper's original reference.
The typed
photograph child retains its independently checked false-flag return boundary.
Its complete native saved-photo sequence now supplies map/raw-actor loading,
64-frame palette fade-in, authored directional slides, signed credits-scroll
threshold waits, 64-frame fade-out, the black publication and all 32 slot
attempts. The installed text callback survives every actual child. Unsupported
regional palette aliases are rejected before Scene mutation. No-photo behavior
retains its existing path; cinematic event 12 remains closed.

Four complete original/native saved-photo callers (configurations 0 and 5 in
US and JP) reach restoration. All attempt 32 slots and display one record,
execute both 64-frame fades, and match the original slide endpoints.
Configuration 0 has zero slide frames; configuration 5 has 85 and returns
BG1=(2020,6460), BG2=(65476,60). All four match 65,536 returned video bytes,
256 staged palette words and returned party/RNG. The input host remains the
same constant released-button schedule on both sides; strict counts compare
the unmodified original capture. Physical/state differences are collected
through completion and still fail the test.

| Saved-photo caller | Callbacks native/original | NMIs native/original | Polls native/original |
| --- | ---: | ---: | ---: |
| US configuration 0 | 18,177 / 18,202 | 20,211 / 20,255 | 20,208 / 20,081 |
| JP configuration 0 | 18,145 / 18,170 | 20,179 / 20,222 | 20,176 / 20,069 |
| US configuration 5 | 18,177 / 18,207 | 20,211 / 20,260 | 20,208 / 20,072 |
| JP configuration 5 | 18,145 / 18,175 | 20,179 / 20,227 | 20,176 / 20,058 |

Physical pictures and intermediate live scratch/video remain mismatched.
The separately accepted OAM-clear, WAIT and UPDATE_SCREEN helpers above do
not close these full-caller gates. The earlier 227-target coherent build and
192 native unit cases passed (183 passed, 9 asset-dependent skips). These
results do not establish whole-game, live hardware or original full-scene PCM
parity.

Frozen and main-checkout Cast references agree for all four direct/nested
regional callers. Each passes all 12,530 complete actor, raw map, queue, OAM and
selected-buffer checkpoints, ordered input, final party/RNG, staged/displayed
palettes and all 65,536 returned video bytes. Each US caller matches 128 of 129
sampled physical pictures; frame 10,482 retains a 236-pixel difference. Each JP
caller matches 101 of 103; frames 4,941 and 10,482 retain 160 and 236 differing
pixels. Physical publications still differ: US 12,551 native versus 12,611
original, JP 12,567 versus 12,614. These remain strict full-scene failures.

The remaining US frame 10,482 picture is a publication-phase difference. Its
physical original OAM, palette, object size and mode match the native capture,
but 376 video bytes differ. The original picture uses frame 10,482 OAM with
graphics from actor frame 10,483 already transferred during an interrupt inside
actor creation and priority insertion. Its complete physical video equals the
native video after frame 10,483. A private diagnostic substitutes only those
original video bytes and reproduces the original picture exactly; affected
rows contain only three objects and six tiles. This establishes the work and
interrupt ordering boundary for that US picture, without closing its strict
gate or justifying a sampler change. The two JP pictures require their own
phase evidence.

True-photo helpers for configurations 0, 5 and 31 match complete video/scratch,
staged palettes, raw allocations and created actors in both regions, with full retained
enemy-enable words 0x1234 and 0xffff. Their strict physical NMI gates still fail.
Configuration 31 uses a wrapped palette pointer into the actual display heap;
its native loader borrows those retained words explicitly. Its nine creations
match 243 actor fields, 45 retained raw fields and all 88 allocation tags.
The special-palette helper separately matches all 256 words in 132 US and 135
JP cases, including actual heap aliases and unchanged bank/cursor state.
Photograph fade
helpers preserve the complete scratch slopes/counters and the source's signed
channel behavior. Cast and Ending sample retained raw descriptors using current
VRAM and palette storage without advancing actors during rendering.
Other authored palette aliases outside the owned display banks remain explicit
admission gates until their actual retained owners are bound. This helper repair does
not close complete saved-photo physical parity or admit ending event 12 through
cinematic services.

Frozen Linux native-session menu replays pass for both regional packs with zero
gameplay CPU instructions, unchanged disposable saves, and pixels/PCM equal to
the previous native replay. This is headless regression evidence, not monitor
VRR, controller, full-cutscene PCM or original physical scanout acceptance.

Further acceptance requires the complete regional authored scenes, source
pictures and state at entry/body/return, cancellation and nesting, live desktop
controller/display checks and delivery through the existing native session
checklist. Passing individual modules cannot mark those gates complete.
