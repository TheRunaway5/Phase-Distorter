# Native dialogue, party and story services

`eb_native_story` owns authored dialogue interpretation and the staff-credit text
scene in ordinary C++ state. It has no CPU, bus, source-instruction dispatcher,
audio-driver or graphics-memory dependency. `eb_native_engine` links this module
when that engine is present. The compatibility `GameSession` still runs the
original dialogue and ending paths; switching the shipped session requires the
remaining native game, UI, audio and scene owners.

## Party and story state

`native/party/State` owns the six source character records (four chosen players
and two guests), raw regional name fields, fourteen inventory positions per
record, four equipped-position bytes, source-width stats and rolling HP/PP
values. The six-slot party and controlled-party lists and their byte counts are
separate values. Party-list entries are one-based character IDs; controlled-list
entries are zero-based character-record indices, as in `CHOSEN_FOUR_PTRS`.
A `party::View` borrows this stable owner; inventory reads it at
the original service stages. `party::dialogue_values` binds the same owner to
the existing text substitutions. The four-player stat-descriptor range does not
reduce inventory's six-record range. No save importer or authored initial party
is implied by zero-initialized state.

The six `display_order` bytes preserve the overworld formation's authored IDs
(`GAME_STATE.unknown96`). They are distinct from membership and controlled-record
order; a guest ID need not select one of the six character records.
`party::Queries` reads the live formation, controlled count and status groups.
Group eight returns the global `party_status` byte plus one without checking
membership. Other groups search the full character word against the membership
bytes, return zero for absent/zero IDs, then return the selected affliction byte
plus one. The result can be 256. An oversized count can still return an early
match; only a scan actually leaving owned storage rejects. Formation is currently
an explicit scene/save input. Full `UPDATE_PARTY` also owns entity association,
NPC setup, movement and palette effects and has not been replaced by a list sort.

`party::advance_meters` implements the original HP/PP roller over these values,
including the frame-counter-selected party member, activation delay, fractional
sentinels, fixed-width wrap/clamp behavior, half-speed arithmetic shift and
flipout targets. `native/story::next_random` owns the two-word RAND update and
its returned byte. Both algorithms are independent of rendering, host clocks,
the compatibility processor and game assets. The scene supplies/persists their
state and source policy. These algorithms alone do not implement `WindowTick`,
visible HP/PP meter artwork, audio playback or the complete world frame service.

## Dialogue

The public interface is in `include/eb/native/dialogue/`. `Program` owns immutable
content blocks and resolves authored four-byte references to validated content
locations. A content location consists of a logical page and a 16-bit offset;
advancing a source cursor wraps its offset without carrying into the next page.
These locations select data only. No operation executes a machine routine.

`import_program` copies only the 61 US or 58 Japanese text extraction sections.
The US import also owns the 768-entry dictionary's 4,544 data bytes. Its pointer
table is consumed at import and becomes validated content locations. No dialogue,
dictionary text, font or artwork is embedded in this source module. The user must
supply an imported regional asset pack.

`Runtime` uses one authoritative `State`: per-window active and saved registers,
the dummy window, the shared register backup, flags and the original ten-slot
stream storage. The source counter retains its signed wrap behavior, including
negative sentinel values after a wrapped return; it is not normalized modulo ten. Nested calls have separate parser continuations. They share window
registers and global state in the same way as the original engine. The US global
secondary backup remains one byte; normal secondary registers remain 16-bit.

The interpreter implements base control flow and register/flag operations,
including four-byte calls and jumps, multiway selection, conditional skips,
secondary-register operations, `1B` storage/swap/backup, and `1F C0` subroutine
selection. US compression occurs only when no control handler is collecting
arguments. Japanese `15` through `17` retain their original no-op behavior.
Comparisons `0B` and `0C` inspect the low 16 bits of the working register. The
source `0F` increments the secondary register.

`18 07` consumes a four-byte little-endian literal followed by one register
selector. Zero selects working memory, one selects argument memory, and every
other byte selects the zero-extended 16-bit secondary register. It reads that
register after the last operand, compares unsigned 32-bit values, and writes
working memory as zero, one or two for less, equal or greater. The other registers
are unchanged. Operand gathering retains dictionary-tail and low-word cursor
behavior without treating literal bytes as commands.

Party commands `19 10` (formation member), `19 16` (status), `19 20`
(controlled count) and `1D 0D` (encoded-status equality) use typed party queries.
All literal operands are collected before zero-operand fallbacks read the live
low-word registers. Status resolves group before character; its comparison byte
is literal. Results are zero-extended into the currently active working register.
`WindowHost::bind_party` borrows one regional party owner for all conversations,
including nested ones; changing owner identity is rejected. An unbound host
retains an explicit query request. `Scene` binds its existing party automatically.
`1C 04` asks the scene to run the existing show-HP/PP operation, including the US
selection-clear frame wait. It consumes no operand and introduces no extra tick.

Glyphs, newlines, prompts, pauses, selections, clear-line and US word-wrap
preparation suspend the interpreter with a named request. Requests remain stable
until their owner completes the operation. `Conversation` connects these requests
to the native output service, acknowledging a glyph only after its ordered sound
and world-tick effects finish. It borrows the host's `TextOutput`, so separate
conversations share the same windows and composition state. `Conversation(program,
menus)` also connects selection to the native `MenuHost`; physical input and game
services remain explicit host effects. Unported commands cannot be acknowledged;
their operand lengths and effects are never guessed. Parser, word-scanner and
conversation work budgets yield without inventing a game tick.

The host starts recursive dialogue with `child.start_nested(entry, parent)`. The
parent must be the current output owner, suspended at a world tick, pause, prompt
or selection request. A child keeps the parent's pending request and local glyph
continuation intact while sharing focus, policy, registers and composition. After
the child finishes, the host explicitly acknowledges the parent's original event.
Audio requests and scheduling-budget yields cannot start nested dialogue. Root
starts, raw output execution and out-of-order parent responses reject while
another conversation owns the renderer.

The state and renderer outlive their borrowing conversations. Destroying an
unfinished conversation invalidates the entire output execution tree: its lost
call cannot be safely resumed or silently treated as a normal return. Published
pixels and game-state changes are retained, and frames can still be sampled, but
the host must rebuild the scene before executing more dialogue. This is an
explicit lifetime-error policy, not an emulation of a game cancellation command.

### Fonts and window text

`FontResources` imports all five US font records (main, Saturn, battle, tiny and
large), the fixed glyph artwork, and the Japanese normal/Saturn resources. Glyph
metrics and raster masks retain their original encodings. US word lookahead reads
128 metric bytes per font, including the 32 adjacent artwork bytes which the source
can address. Padded US glyph strips also retain their actual contiguous imported
bytes; no substitute font or invented blank padding is used. Undeclared glyph
records and malformed font content reject explicitly.

`WordScanner` copies both primary and surviving dictionary cursors from a typed
`Lookahead` request. It measures without consuming the interpreter's streams,
including low-word cursor wrap, compression-bank selection, the special glyph's
eight-pixel width, and the original 16-bit counters. Japanese dialogue does not
run this US-only lookahead. `TextOutput` applies the measured width, source newline
decision and indentation.

`TextOutput` owns the content canvases for open windows and retained physical slots. It implements
glyph composition, palette/flip/priority attributes, cursor positioning, explicit
and conditional newlines, clearing and scrolling. Focus is authoritative in
`State`; partial glyph composition is shared across windows. The source's visible
image history is retained with native indexed images: US tiny-font lower rows,
Japanese Saturn publication reuse, and dangling image references after particular
US fixed-glyph boundary operations. These identities do not allocate graphics
memory or impose the original live-window resource limits. Published `TextFrame`
objects own independent pixel copies and cannot change when later text is drawn.

Japanese layout without focus resolves `State::unfocused_register_slot`, supplied
by the world adapter from the original ambient lookup word. Closing a Japanese
window removes its rectangle and draw-order membership but retains its canvas,
style and cursor. Saturn composition can still change shared images and scroll
that retained canvas, while fixed glyph placement returns before artwork lookup
or cell access. Source cursor words retain transitions such as zero to `ffff`;
public cursor setters still enforce window bounds. Non-bottom newlines can update
metadata without touching storage. Actual clear, scroll and placement operations
require a defined canvas. A never-open physical slot exposes default metadata,
but sampling its nonexistent canvas rejects explicitly.

`WindowHost::slot_cells()` captures cell membership with live image aliases;
`slot_frame()` captures immutable pixels. Reopening replaces the slot's canvas
without changing earlier frame samples. US close releases and blanks retained
cells, preserving its separate image-reuse rules. `publication_snapshot()` returns
a deep read-only sample of the Japanese shared Saturn images for diagnostics.
These samples do not publish a window, advance dialogue or restore focus.

Printing is a resumable operation. It yields one typed text-sound or world-tick
effect at a time. Nested calls stack local delay counters, character and footer
stages while sampling shared policy at the same stages as the source. Shared
glyph composition and image history are never restored from a parent snapshot.
Host changes between the inner and outer waits of a US special glyph are
observable. Rendering a frame never advances text or waits.

### Inventory dialogue

A menu-bound conversation consumes `1A 05` and its two literal operand bytes:
target window and character. Zero character is resolved from the live argument
word by the inventory service after the regional wrapper runs, not by operand
parsing. `MenuHost::inventory()` requires one imported `SubstitutionResources`
item table and a borrowed `party::View`. Direct calls accept an already resolved
one-based character ID. The service reuses the existing window pool, menu model,
printer, title storage, input and output ownership tree.

The US wrapper conditionally clears focused window one, yields its blink-clear
effect, resets the live cursor, stores stream attributes and clears forced left
alignment. Storing those attributes does not enable return-time restoration:
`18 02` separately controls that flag. An inventory call can overwrite attributes
saved by an earlier `18 02`; resetting a stream disables restoration while
retaining its stored values. Japanese inventory omits this wrapper.

After CREATE, the service reads the live controlled count and captures the
character title before its frame waits. Item and equipment values are read
afterward, in source order, for all fourteen positions, including empty ones.
The US word-copy helper copies only 24 of the requested 25 item-name bytes;
an unequipped label retains byte 24 of the shared temporary buffer. Equipped
labels prefix their marker and can occupy all 25 option-label bytes, terminating
in the adjacent zero pixel-alignment byte. Japanese labels copy ten name bytes
and append the equipment marker at the first zero. The same imported item table
serves raw inventory fields and existing text substitution strings.

All 70 menu slots are allocatable. An exhausted pool retains the original slot
69 fallback without replacing its contents. Failed CREATE also continues: the
unopened target's title is written to a dedicated no-slot title record, while
the previous live window continues to receive item layout. This special private
path does not relax ordinary public window-ID validation. Inventory finishes
two-column layout and page printing without initializing selection. US retains
its clear-instant, window-tick, set-instant sequence.

Inventory and paginated menu footers share the host's 49-byte temporary text
buffer. A permitted nested dialogue callback can overwrite that buffer, and the
parent's resumed footer reads the live bytes. Titles and option-label storage
retain their separate source lifetimes. Scheduling budget exhaustion is not a
callback, and abandoning an unfinished operation invalidates its output tree.

`native_dialogue_inventory_reference` compares complete original DISPLAY_TEXT
streams and native continuations for both regions, including ordered effects,
window/menu state, brushes, published scenes and original PPU pixels. Source-only
diagnostics are reported separately. This service does not claim the complete
Goods menu, shop behavior, native save loading or natural NPC talk activation.

### Fixed-art dialogue animations

`TextAnimationResources` imports the regional `C3E84E/C3E862` sequences as owned
character IDs. The first sequence ends at its first zero within the declared
20-byte range; the second contains nine words. Malformed extents, missing
terminators and unsupported fixed characters reject explicitly. The module does
not embed the authored sequences or retain a machine image. Existing font and
window-graphics owners supply their live artwork.

`WindowHost::animations()` owns `TextAnimations`; configure its resources before
executing selectors one or two. Every window-bound `Conversation` consumes the
single literal operand of `1C 08`, including zero. Other selector bytes return
without drawing, changing attributes or requiring animation resources.

Selector one prints its imported sequence through the direct fixed-art path,
with one `WindowTick` after each character. Selector two prints four characters,
requests eight `WorldTick` calls, then prints five more. Those middle calls use
the existing meter/world/input effect, distinct from the window redraw route.
Instant printing does not remove any of these calls; the world adapter supplies
the original tick semantics, including RNG and early-exit policy. Ordinary glyph
sound, text delay, variable fonts and word lookahead do not enter this fixed path.

Both sequences replace the current window's attributes with palette three on
entry and zero on exit, preserving the font while clearing priority and flips.
They do not restore entry attributes or capture an entry window. Each placement
uses the live focus and artwork; callback changes, closes and reopens affect the
remaining sequence. No-focus fixed placement returns before touching a canvas,
while the existing redraw comparison still uses its explicit ambient slot.

Operations retain only their continuation, imported sequence and current effect.
Window/world callbacks can start nested dialogue or animation work; the parent
keeps its pending effect until explicitly acknowledged. Omitted input responses
retain the shared pressed snapshot. Budget exhaustion adds no game callback,
and abandoned work follows the existing output-tree lifetime policy.

### Authored window context

Window-bound conversations consume `18 05` positioning, `1C 09` number padding
and `1F 30/31` normal/Saturn font assignment through their existing window host.
Positioning consumes two raw bytes; padding consumes one, and font assignment
consumes none. Zero coordinates and padding are literal values. US positioning
uses the shared menu alignment policy to choose tile or pixel coordinates;
Japanese positioning uses tile coordinates without changing the shared brush.
These commands add no sound, redraw or world tick. Font and padding assignment
return on absent focus; positioning uses the explicit ambient physical slot.

Private source positioning and attribute restoration retain raw cursor words,
including positions beyond a window rectangle. Public convenience setters stay
bounded, and later canvas access checks its actual storage. US positioning still
aligns the composition brush and preserves the last nonzero fractional offset;
attribute restoration assigns cursor/style without aligning that brush.

`WindowHost::commands()` owns a `WindowCommands` coordinator for scoped selection
(`18 08/09`) and carried-money display (`18 0A`). It composes the existing menu,
window and money-formatting services. Both selection commands consume exactly one
target-window byte, including literal window zero. The source macro's four-byte
declaration for `18 08` does not match its executed handler. Selection requires
a menu service sharing the window pool, preserves the menu, and writes its
zero-extended 16-bit result only after context restoration finishes.

Scoped selection and wallet display share one host-owned attribute backup,
separate from per-stream `18 02` storage. A nested context command overwrites the
backup that its parent later restores. Saving absent focus replaces only its ID;
restoring a null or closed ID leaves the current focus untouched. A reopened ID
resolves its current physical slot. No operation retains a private rollback copy.

Wallet display saves that backup, opens window 10, sets padding five and instant
printing, clears the current window, then reads the live `MoneyCarried` provider
and uses the regional formatter. It continues after a failed window allocation,
forces instant printing false afterward, and restores the current shared backup.
It has no numeric operand or working-register result. Missing live values remain
explicit errors. HP/PP meter ownership is still a separate host service.

The carried-money cap is 99,999 (`INCREASE_WALLET_BALANCE`), distinct from the
bank-account limit of 9,999,999. Both regional wallet windows support the carried
limit. Larger, corrupted wallet values can make the original formatter write
outside its window canvas; the native implementation retains its storage bounds
checks rather than reproducing those writes into unrelated memory.

The coordinator delegates active ownership through selected child dialogue and
allows nesting only at the existing world/UI boundaries. Scheduling yields do
not permit shared-state changes. Unconfigured conversations expose the typed
request instead of inventing a menu or live player value.

### Authored menu construction

A menu-enabled `Conversation(program, menus)` consumes `19 02/04` and
`1C 07/0C` through the existing menu domain. `19 02` gathers the first label byte
literally; only later bytes 1 and 2 finish gathering. Embedded zero bytes remain
part of the gathered stream, then terminate the label copied into the option.
The 30-byte gathering extent and 25-byte option record are separate bounds.
An overflow rejects at the actual unsupported write instead of truncating data.
US dictionary expansion stays disabled while command operands are being gathered;
a surviving dictionary tail and low-word content-cursor wrap retain their normal
stream behavior.

`MenuHost::commands()` owns a small `MenuCommands` coordinator that borrows the
host's existing printer and option model. It owns no second menu pool. Append
requires the same immutable imported `Program` as selection, allowing shallow
copies but rejecting a separate content set before any option mutation. Append
and selection services bind the window host's option pool to that content for
its lifetime, so another menu service cannot reinterpret retained locations.
Append relocates a selected-text data key only when an option can be added; no-focus and
full-pool returns ignore the key. Appending never executes the selected dialogue.
`19 04` reuses the existing window menu reset, retaining unused record fields and
leaving canvas, style and timing unchanged.

`1C 07/0C` resolve zero operands through the argument register's low 16 bits,
then lay out and print the page. They preserve the current selected ordinal and
page; selection still belongs to its separate command. The first uses centered
layout and the second uncentered layout, both with the supplied column count.
Without focus, layout resolves the explicit live or retained ambient physical
slot, while page printing keeps its original no-focus return. Public operations
and borrowing conversations preserve output ownership across their existing
text/window effects; a scheduling budget is never a new input or world tick.

### Text substitutions

`WindowHost::substitutions()` owns one `TextSubstitutions` service. It implements
plain and wrapped strings, US item-word splitting, decimal numbers, regional
money layout, full-word characters, tile attributes, and stat/name/item/teleport/
PSI selection. `Conversation(program, windows)` consumes `1C 00/01/02/03/05/06/
0A/0B/12` through that service; menu-selected conversations inherit the same
window owner. Output-only conversations retain explicit substitution requests.
Menu layout and number-padding selectors are described above; remaining `1C` selectors still stop
as explicit unsupported operations.

`SubstitutionResources` imports regional catalogs and translates the 96 stat
descriptors to typed `StatKey` fields. No source memory address escapes that
translation. Configure the service with these immutable resources and read-only
live value callbacks before starting dialogue. The callbacks borrow authoritative
world values; they do not introduce a second party/game-state copy. A `TextReader`
is resolved again after each glyph's effects, so changed names and reused source
buffers remain visible. Its extent must contain a NUL or reach the requested
maximum; exhaustion is an error, not a new terminator. US item names retain their
actual imported continuation to NUL, while JP items retain their fixed ten-byte
maximum, including completely occupied fields.

Menus and substitutions share `detail/StringPrinter`, the native `PRINT_STRING`
continuation. Center-next-string, font selection, focus and style remain shared.
The service owns the original shared decimal and word scratch: nested output can
overwrite a suspended parent's remaining characters. Each operation retains only
its pointer/count and layout restoration locals. Nested operations and nested
conversations are allowed at an actual `WindowTick`; parent effects remain
pending until explicitly acknowledged. Scheduling budgets do not advance time.

US number padding advances by six pixels and uses the last explicitly set
nonzero fractional offset, even after a later aligned position. JP padding emits
space glyphs with their normal callbacks. US money measures imported metrics,
temporarily changes alignment/indent, emits both currency markers, and restores
the original cursor against the live focus. Its trailing marker reads the live
geometry/cursor of the captured physical slot. JP retains its distinct cell-based
placement and markers.

After a callback closes the focus, wrapped/centered US layout and money cursor
restoration still resolve the source's explicit ambient physical slot, including
retired output metadata. The adapter supplies `State::unfocused_register_slot`;
the no-window dummy register bank is not a substitute for this positioning
lookup. US glyphs retain their no-focus return and the original shared brush and
indent changes still occur. Japanese glyph entry uses the same ambient slot for
layout and shared Saturn composition, including retained-canvas scrolling.
Absent focus still suppresses placement into the canvas. Cursor restoration can
use retained slots in both regions and preserves raw Japanese cursor words.

Accepted numeric output is 0 through 9,999,999. Source probes show that the
original CLEAN_ROM clamp is actually `FFFF967F`; larger decimal values write
backwards into the focused-window index and, for ten digits, a title-owner word.
The native API rejects those invalid states explicitly rather than changing the
number or inventing window identities. The reference records the original
32-bit behavior separately. US seven-digit money remains supported: its extra
scratch write overlaps a local that the original routine overwrites before use.
Overlong word-buffer writes and out-of-catalog selectors likewise reject.

The compatibility `GameSession` still requires a native world/value/output
adapter. These operations and their tests do not switch the playable session,
complete every dialogue selector, or establish whole-story cutscene parity.

### Window host

`WindowResources` imports the 53 US / 52 Japanese window configurations, frame
artwork, pagination decorations, five flavor selections, full/animated palettes
and Japanese title glyphs. Font and window imports share a bounded internal HAL
decoder in `src/native/dialogue/detail/hal.hpp`; no authored bytes are bundled.

`WindowHost` borrows the same `State` and `TextOutput`. It owns eight reusable
slots, draw order, frame metadata, title reservations and the menu-option links
released by window teardown. Open register banks live only in `State::windows`;
closed slots retain their banks separately until reused. US creation retains the
destination bank; Japanese creation copies the previously active bank. Focus and
draw order are independent: ID 10 inserts at the back, reopening never reorders,
and closing focus leaves it absent.

With windows still open and focus absent, the source's active-register lookup
reads an ambient word outside its logical-ID table. `unfocused_register_slot`
carries that explicit world-owned word. Register access accepts slot 0..7 or
0xffff for the dummy bank; missing input and arbitrary non-record addresses reject
rather than invent a tail-window fallback. When no windows remain, register
access uses the dummy bank without that input. A glyph footer can still need the
word solely to compare against the tail, including after a nested callback closes
the last window; this comparison accepts every 16-bit value without dereferencing
a record.

`Conversation(program, host)` connects `18 00/01/02/03/04/06` to close, open,
save attributes, focus, close-all/hide meters and clear. Stream entry clears its
restore flag; a marked return restores the saved focus/cursor/font/attributes and
number padding before popping the source stream slot. Restoration does not
realign the shared glyph brush, and ignores a saved ID that is no longer open.
Positioning, unsigned comparison, scoped selection and wallet controls are described above. Remaining
`18` selectors stay separate, explicitly unported game services.

Window operations retain call-local continuations and yield typed world ticks,
frame waits, party-blink clearing and meter hiding. A world adapter must fulfill
these effects; acknowledging them alone is not world implementation. Dialogue
may nest within an operation's world tick, and a direct window service can enter
as a child of a conversation callback. Parent events remain pending until their
children return. Close suppression, instant printing and post-callback cleanup
follow the source order.

The persistent 32-by-28 scene composes imported borders, intersection corners,
text, titles and pagination in source order. Cell priority uses the original
attribute addition, including its carry into flip bits. US titles use the shared
Tiny-font brush with six-pixel advances and two frame waits. Their publication
retains extra columns and the resulting overlap with the next title reservation.
`draw_windows()` paints the whole list; `draw_tick()` selects all or just the tail
from the dirty flag; `publish_scene()` publishes the current cells. `scene()` and
`frame()` return immutable pixel snapshots without advancing anything. Stored
scene cells retain live artwork identities, so later writes to shared text or
title images affect subsequent samples just as they do in the source.

Actual input, HP/PP meter drawing, audio execution, palette fades and
world/battle services still require their native owners. These
module comparisons do not establish the shipped game's complete UI, timing or
playability. The compatibility session has not been switched to this host.

### General selection menus

`MenuModel` constructs options and lays out the original linked, seventy-slot
pool owned by `WindowHost`. Its coordinate and userdata constructors preserve
reused record fields and the source's slot-69 fallback when no allocation is
available. Layout preserves regional character/pixel measurement, 16-bit
arithmetic, page-zero controls, initial selection and US centered spacing.
Centered US layouts exceeding the source's four-entry temporary tables and
zero-column layouts reject explicitly; the source overwrites unrelated globals
or fails to terminate for those inputs.

`MenuResources` imports the authored next-page label and the two-frame selection
marker, separately from the window border's four-frame pagination artwork.
`MenuPrinter` implements regional page printing, positions, markers and highlight
operations. Fixed characters retain semantic identity independently of their
pixels. Navigation recognizes the source's marker identities, including the
US/Japanese difference for the currently selected arrow. Direct menu glyphs keep
their full sixteen-bit encoding; authored dialogue remains a byte stream.

`MenuHost` implements general `SELECTION_MENU` as a resumable operation. Pressed
directions precede held directions; both precede confirm and cancel. Pressed
movement can wrap, held movement cannot, and sparse layouts use the source's
ordered three-pass marker search. Failed movement runs selection setup again,
including selected-option dialogue and its registered native callback. The
native callback uses `MenuCallbackId`, not a machine-code address. A host must
register and execute that callback; acknowledging it does not implement it.

Call-local continuations retain the original window slot, logical ID, option
and ordinal while callbacks share live focus, pool contents, style and policy.
Selected-option scripts execute through native `Conversation` and may suspend
or invoke nested dialogue and menus. A callback can open another window; source
focus restoration happens after its return. Operations reject out-of-order
responses and poison unfinished execution trees on destruction, following the
same lifetime contract as `Conversation`. The menu host, window host, state and
output must outlive every operation borrowing them.

Blinking changes only the published scene, leaving the window composition
buffer intact. Each phase lasts ten actual input polls. The idle money-meter
request occurs after the original sixty-poll threshold and retains the regional
already-open behavior. Input, sound, native callbacks and meter display are
typed services; work-budget exhaustion and presentation sampling emit none.

`CC11` and `1A04/08/09` use this native selection path. The working-memory result
is written before `CC11`/`1A04` free the current focus's menu. `1A08/09` retain the
options. Inventory construction uses the native service described above. Shop,
party-selection builders and other command trees remain unported services. A window-only conversation
still exposes selection as a request, followed by an explicit cleanup request
where required, so adapters cannot accidentally skip source ordering.

The menu reference fixture executes original constructors, layout, page drawing,
selection and selected-option `DISPLAY_TEXT` in both regions. Its UI/world
seams and starting image history are reported explicitly. In particular, cold
`LOAD_WINDOW_GFX` also renders party names into shared US image history; the
native resource importer has no world-owned party names. Tiny-font comparisons
establish matching history through real rendering on both sides. They do not
prove dynamic initialization. The separate initialization fixture exercises that
path, including cold subsequent printing, without changing the older fixture's
starting assumptions.

### Window graphics and party names

`WindowInitializationResources` imports fixed window artwork, the flavor patch,
full status-label words and the US raw Battle-font masks used by `LOAD_WINDOW_GFX`.
`WindowGraphics` owns retained prepared artwork and a separate published atlas.
The optional constructor seed contains exactly 1,184 decoded two-bit cells;
omitting it starts retained staging at zero. This is native image state, not a
processor or memory bus. Existing published frames own their pixels independently.

`prepare(PartyNameInputs, flavor)` performs the original ordered preparation:
regional decompression inputs, overlapping US relocation, the limited clear,
flavor patch, party names and packed status labels. The US name spans contain the
first zero terminator even when it follows the nominal five-byte name field;
JP reads exactly four raw bytes, including zero and control values. US names use
all 128 masked raw Battle records with six-pixel advances. Ordinary text's font
validation and fixed-code routing do not apply to this raw path.

US preparation changes the shared brush exactly where the original does,
including clearing only its first 26 columns. Its composition position advances
while its publication cursor resets. `TextCompositionSnapshot` exposes an
independent diagnostic sample of both positions and retained pixels. Subsequent
ordinary text publishes the entire pending span. JP preparation leaves the text
brush untouched. Status labels preserve full-word arithmetic, skipped spaces,
ordered upper/lower writes and live source/destination aliases.

Create a shared `WindowGraphics` for the same `TextOutput`, then call
`WindowHost::set_graphics` before opening windows. Fixed text, borders, pagination,
prompts, menu blinks and titles retain its live published image identities.
Preparing artwork alone does not change them. A later publication can overwrite
an already-visible title while leaving its window metadata unchanged. Bound
hosts use explicit preparation/publication; their older decoration-only
`load_artwork` convenience method rejects to prevent bypassing this ordering.

Publication is a resumable operation. The US `Common`, `GeneratedThenCommon`
and `CommonThenGenerated` plans retain the mode 0/1/2 source range order; `None`
represents the source's invalid-mode no-op. The JP `All` plan publishes the full
contiguous region. Select `ArtworkDelivery::Synchronized` for US mode 2 or a JP
synchronous transfer. That delivery splits ranges into at most 288 cells and
waits for outstanding publications before the next chunk and before returning.
Ordinary `Copy` retains unsplit source ranges and may return with queued work.

The video adapter services each `ArtworkEffect` at the actual copy/transfer
boundary. It acknowledges immediate publication or queues the range and later
calls `publish_next()`. Queues refer to live prepared cells, so intervening
preparation affects subsequent publication. Synchronous waits yield
`BudgetExhausted` without inventing a game tick, input sample or frame wait.
The adapter still owns DMA admission, interrupt timing and callback return;
the native module does not implement a video scheduler. Preparation and
publication can enter at supported conversation/menu callbacks through their
typed nested APIs. Transfer callbacks can prepare graphics through the current
publication operation. These APIs preserve suspended parent continuations.

## Pauses and prompts

`PromptHost` owns resumable fixed delays, timed skippable waits, manual dialogue
prompts and frame-only `SKIPPABLE_PAUSE`. `PromptState` belongs to `WindowHost`,
so input locks, current pressed buttons and HP/PP meter policy stay shared
across nested calls. Prompt mode remains the existing print policy field.
Despite their source names, `PAUSE_MUSIC` and `RESUME_MUSIC` change HP/PP rolling
flags here, without producing audio events.

A fixed delay always clears instant printing and yields one `WindowTick`, even
for zero duration, followed by exactly the requested number of `WorldTick`
events. The world event represents C12E42/C1355E, including meters and world/input
work; it does not draw or publish the window buffer. A frame-only pause yields
`FrameWait` instead. The adapter must execute each distinct service and update
`PromptState::pressed` at the corresponding input boundary. `respond(pressed)`
sets that shared snapshot; omitting it on a direct prompt operation retains the
adapter's current value. Conversation/menu response input is forwarded through
nested selected-option dialogue.

Locked prompt and timed-wait entry spins yield only `BudgetExhausted`, with no
input, frame or world event. The host may release the shared lock between work
budgets. The original debug B+R escape is retained. Timed waits select the debug
overworld branch once, and capture their effective duration only after the lock
has cleared. Automatic text-speed waits preserve meter flags; ordinary accepted
prompts clear both rolling-disable and half-speed flags.

Visible prompts publish the imported triangle directly to the displayed scene,
leaving the window buffer intact. The phases last fifteen and ten world steps.
Acceptance in the first phase publishes its erase tile; acceptance in the second
phase leaves that phase's tile. The operation captures the physical window slot
after its initial window tick, then reads that slot's live geometry at every
publication. Focus changes do not move the suspended prompt to another slot.
A visible prompt without a valid physical slot is rejected explicitly.

The interpreter consumes `1F50/51` lock/unlock, `1F60` timed wait and
`1F62` prompt-mode commands with their exact operand widths. Window-bound
conversations update the shared lock; prompt mode updates the existing output
policy. Construct `Conversation(program, prompts)` to consume native pause,
timed-wait and prompt requests. Construct `MenuHost(program, prompts, menu_resources)` to give its
selected-option conversations the same service. Existing window-only and
output-only constructors retain explicit requests. Window/world callbacks may
run nested conversations, prompts or window services; frame-only waits cannot
call back into dialogue. Presentation sampling and work-budget yields never
advance animation or input. This module still requires the world service
adapter; it does not switch the compatibility game session to native dialogue.

## Credits

`include/eb/native/cutscenes/credits.hpp` provides immutable imported script,
font and palette resources and a `CreditsTextScene` that owns its logical tile
canvas, temporary rows, player-name conversion and quarter-pixel scroll state.
The scene implements the staff-text callback's complete command stream and row
wipes. It exposes indexed pixels and fractional scrolling for the native host.
US and Japanese trigger comparisons, font resources and name conversion remain
regional. With a nonempty player name, the original foreground loop stops at
its scroll limit before fetching the final stream terminator. `scroll_complete`
therefore determines scene completion independently of `script_ended`.
The host supplies the current encoded player name each tick so a later
name command reads current game state. It can also seed the retained US converted
name buffer when recreating a scene, since the original initializer leaves that
buffer intact.

A callback tick composes text and queues typed row publications. The host
publishes one pending row at the corresponding foreground scene step, preserving
the original order and visibility cadence. Ending photos, fades, music, exact
sub-frame transfer timing and the later ending sequence still require the host
scene integration. Empty small/tall text rows are rejected: the original zero
transfer length triggers a full graphics-memory transfer. Neither regional staff
resource contains such a row. Invalid converted names that produce an empty row
are also rejected explicitly. Pixel and callback reference tests cover only the stated text
scene scope; they do not establish a complete playable ending.

## Source and verification

Source provenance is recorded in each module and reference fixture. Reference
executables deliberately link the retained source machine; production and unit
executables do not. The metadata generator reads only address, length and label
metadata from `earthbound.yml` and `mother2.yml`:

```sh
python3 cpp/tools/dialogue_content_layout.py --source-root /path/to/ebsrc --check
```

Build the `native_dialogue_tests`, `native_dialogue_import_tests`,
`native_credits_tests`, `native_dialogue_reference`, `native_credits_reference`
and `native_dialogue_assets` targets. The imported-content executables accept
local `.ebpak` paths. Their reports must distinguish synthetic control-flow
coverage from imported content, text-layer pixels from full scene presentation,
and module tests from the shipped application's execution path.

## Window scene composition

When `eb_scene` is available, `eb_native_story_scene` supplies
`native/story::with_window_layer`. It converts a captured, published window
frame and its matching palette into immutable draw-list artwork, centered in
the original 256-column viewport. Source Mode1 BG3 priorities are preserved;
window background primitives precede the object list so OAM overlap retains
its existing semantics. UI motion identity zero keeps text stationary during
high-rate world position interpolation. A visible UI layer must fit with the world
inside the current renderer's 4096-by-4096 atlas limit; larger combinations reject
before producing an unusable draw list. Sampling an old combined frame does not
read live glyph storage, advance dialogue, publish windows or tick actors.

The compositor is read-only. `native/story/scene` now coordinates native
actors, ordinary window/meter ticks and raw input, as described below. The
compatibility game's launch path still remains a separate execution path.


## Native ticks, meters and scene ownership

`native/story/ticks` implements WindowTick, WorldTick (C12E42), the world/frame
wrapper (C1004E) and frame-only waits as distinct continuations. It borrows the
existing party, random, window and meter owners. US menu early-exit reads and
clears `WindowHost::menu_state().early_tick_exit`; it has no duplicate flag.
WindowTick consumes entry RAND before either early-return gate. Budget yields,
repeated pending services and presentation sampling do not advance a frame.

`native/party/meter_windows` owns visible HP/PP window drawing, retained digit
strips, selection, show/hide and the source's dirty/upload state. It imports
labels and status tables through `meter_window_resources`. Updates visit the
original one-of-four phase, preserve early-return upload state, and queue only
the changed digit rows when required. Hidden meters still retain their real
published pixels until the corresponding ordered publication completes. Party
condition and `PartyNameSnapshot` use the same six-record `party::State`; the
snapshot supplies a bounded synchronous input to window-art preparation.

`WindowHost::queue_scene()` enqueues the 28 visible rows and the fixed row28 as
two ordered copies. Meter-area publication touches rows18 through26 only.
Queued sources retain live staging and artwork identities until delivery; old
`TextFrame` samples are deep immutable copies. `tail_frame()` samples row28
separately, without changing the canonical 256-by224 visible frame.

When the native engine is available, `native/story/scene` connects the existing
Conversation/PromptHost/MenuHost chain to actual ActorWorld updates and the
world/window renderer. `Scene::begin(conversation)` borrows an already-started
conversation against its window owner. Supported window ticks, world ticks,
frame waits, meter show/hide/selection and menu input are completed in source order.
Audio callbacks, unknown dialogue operations, camera refresh/activation and
battle work retain explicit requests; their owner must complete them before
responding. An unknown actor operation is never silently acknowledged.

A suspended actor can run a nested conversation through `begin_nested`.
The source actor-disable word prevents recursive actor execution. Nested
ClearObjects clears only the current object output, not actor lifetime; nested
screen publication therefore never asks ActorWorld to draw a partial tick.
Actor completion counts and scene frame counts remain separate: frame-only
waits consume a scene frame without consuming an actor update.

`Operation::complete_frame(raw_controllers)` is the ordinary frame/input
boundary. It delivers queued window copies, advances the byte frame phase and
logical scene count, processes both raw controller words with the original
repeat/merge rules, and captures the displayed window pixels and palette with
the prepared world. The shared prompt debug word controls controller merging.
Hardware polling and demo recording/playback remain external input sources.
A frame request remains pending until the application provides its raw sample.
`WindowGraphics` retains its separate artwork initialization/publication queue;
the initializer's owner must complete it explicitly. The Scene frame boundary
only drains the window tilemap queue and does not claim every NMI transfer.
Scene construction and frame sampling do not run map animation or reprepare an
area; those operations belong to their explicit source entry points.

The connected scene is available as a native library, not the default desktop
session. Natural NPC contact, the remaining authored commands, complete battle
and cutscene lifecycles, world activation and native audio playback remain
required before a complete one-to-one game claim. Differential tick tests name
those boundaries, while separate scene tests exercise real native actors,
synthetic imported map/sprite resources and immutable software rendering.

`native_story_dialogue_assets pack.ebpak ...` runs the imported
`MSG_ONET_DRUG_BOY` with two explicitly prepared formation states and
`MSG_ONET_SHARK_INFO_FRANK` through this scene in both regions. It uses the pack's
unaltered dialogue, regional substitutions, fonts, windows and world resources;
raw A-button edges enter only at actual frame boundaries. The probe requires
completion and verifies the two authored query branches. It records sound intents
without claiming PCM playback. Its empty ActorWorld, chosen map sector and
prepared party/window state establish a connected native dialogue path, not
natural NPC interaction, save bootstrap or complete authored-route parity.

## NPC Talk selection and map text

`native/npcs/interaction` implements the original TALK_TO and CHECK entries
(`native/npcs/talk` retains compatibility aliases) over actual live
`ActorWorld` actors. It opens window1, searches in the imported cardinal order,
checks NPC collision before counter/map text, updates the leader's pose, and
turns/stops a selected person before returning that NPC record's dialogue key.
`native/npcs/interaction_resources` owns all 1584 raw type/text records and the
probe/opposite-direction tables. `native/npcs/map_text` owns the bounded door
content and pointer table used by C07477/C065C2. It preserves source word
arithmetic, aliases, retained miss state, typeFF retry, west adjustment, and
null type6 text. Keys resolve only when selected through the bound Program.

`native/entities/npc_collision` is the synchronous ordered collision query.
It preserves strict overlap and word wrapping, the original gates and first
candidate behavior, including non-person blockers. The native input span has
no 23-actor limit; results carry a full actor identity after Talk maps the index
back to its explicitly ordered live actor list. Source differential fixtures
retain the 23 physical-slot input only to compare the original helper.

Talk borrows movement/appearance/lifetime from ActorWorld. Its attached metadata
contains creation hitboxes and raw interaction identity only; changing artwork
does not silently change creation geometry. The world lifecycle must attach
metadata and a unique collision precedence for each live actor, and detach
removed metadata before reusing its precedence. Missing metadata is an error.
Party coordinates and direction are separate source words maintained by the
party movement owner. A first successful probe may retain an odd global
direction when the leader's actor already faces its masked cardinal direction;
NPC opposite-facing consumes that global word, exactly as in the source.

The caller explicitly invokes `set_actors_paused(true/false)` for the original
C0943C/C09451 operations. Each visits currently live actors and sets/clears both
script/physics and tick-callback controls. Resume does not restore old booleans
or an old actor list. TALK_TO itself does not pause, start the returned dialogue,
choose Talk/Check fallback, spawn actors, or advance frames on budget yields.
Borrowed owners and actor/area state must stay stable during an operation.
Abandonment invalidates that Talk owner without undoing partial changes.

`Scene::begin(WindowEffect)` completes a standalone WindowHost operation's
actual yielded WindowTick, FrameWait, ClearPartyBlink or HideMeters effect.
ClearPartyBlink is C07C5B: it is a no-op at zero intangibility and otherwise
exposes a PartySpriteBlink service for the appearance owner. It never clears
meter selection or adds a meter-related frame wait.
The caller responds to its window operation only after Scene completes. The
same implementation serves Conversation's window effects; native actor work,
raw input, window publication and meter requests keep their existing owners.

`native_npc_talk_assets pack.ebpak ...` prepares two real native actors, imported
creation geometry, a map sector, party state and window graphics. It then runs
Talk selection through the standard window and starts the selected record's
unaltered DrugBoy (two party branches) or Frank dialogue. It requires completion,
turning/stopping the target, actor pause/resume and visible object artwork; it
records decoder reads, actual frame boundaries and audio intents. This is an
explicit prepared interaction fixture, not natural NPC spawning, main-menu
input, save bootstrap, complete scene timing or PCM playback proof. The default
desktop session is still separate. Full cutscene/enemy/battle lifecycles and
remaining authored services are required before claiming a complete game port.


## Check, caller sequencing and the interaction queue

`Interactions::begin(InteractionAction::Check)` shares Talk's authoritative actor
metadata and collision order. Check retains its own C4334A map query: three
cells in center/right/left order, south-facing Y adjustment, the source surface
flag offset and type5 text. It refreshes the leader's pose without turning an
object or person. An item box loads the full source gift word, preserves the
old argument for an item, or sets working zero and money argument for a value
at least 256. It records the interacting event flag before returning offset9
text. Selecting a gift does not award it or complete the later gift commands.

`native/story/interaction_calls` implements OPEN_MENU_BUTTON_CHECKTALK: pause
currently live actors, cursor sound, Talk, Check only on a null key, then the
regional no-problem text only if both selections are null. The selected text
runs through Conversation and Scene. The caller clears instant printing, hides
meters, executes CloseAll through its real yielded window effects, performs at
least one WindowTick, reads the authoritative entity-fade status, and resumes
currently live actors only after that status clears. C10004 has its separate
pause/display/fade-wait/resume sequence; it preserves instant mode and does not
add the L-button cleanup. Null queued text still performs the mandatory tick.
All owners must share the same Program, WindowHost and ActorWorld identities.
The mandatory fade reader supplies ENTITY_FADE_ENTITY lifecycle state; neither
brightness nor absence of visible actors is substituted for that state.

`native/npcs/interaction_queue` implements C064E3 publication and one complete
PROCESS_QUEUED_INTERACTIONS consumer call. Its four slots preserve source wrap
and overwrite behavior, current-type suppression, early cursor advancement and
pending recomputation from live indices after callbacks. The outer world loop
owns the empty test. Types0/8/9/10 request C10004, type2 requests a door, and other
types consume without text. Dad's type10 completion compares the captured key
with the original regional width (full key in US, low word in JP) and updates
the borrowed phone state. The caller adapter executes text against the actual
Scene and intangibility word. It completes C07C5B's proven zero-intangibility
no-op, but exposes a typed party-sprite-blink request otherwise. That operation
is distinct from clearing meter selection. Door transitions also remain typed
pending work until their actual owner completes them. No unknown request is
silently acknowledged.

The new Check and caller reference fixtures execute original regional routines
and compare register, callback, window, rendering and sequencing results. Their
actor/world-screen and audio boundaries are named explicitly; prepared fade
status schedules prove control flow, not execution of the full fade event.
`native_interaction_calls_assets` runs imported person, object, fallback and
queued-text/null paths, including the queue producer/consumer connection,
against prepared actual native actors and Scene. Source tests, software pixels
and recorded sound intents do not establish natural actor activation, native
PCM output, a complete gift/door/fade lifecycle, or a playable native startup.
The default desktop session remains the compatibility session.

## Gift boxes and item receipt

`native/party/inventory` mutates the existing party inventories and wallet. It
implements first-space selection, specific or ordered-party receipt, the
post-receipt first-empty result, and signed comparison after wrapping 32-bit
wallet addition. Receipt preserves the original item-write order and samples
the selected party ordinal again after its callbacks. Imported item metadata
is shared with text substitution; the timed-item table remains imported.
Transformation activation borrows the real timer state and random state. It
does not implement future countdown updates or transformation removal.

The dialogue interpreter collects all operands for `1D03`, `1D08`, `1D0E` and
`1D19` before reading register fallbacks. A give command publishes argument
before working memory and resolves the active window again for each write.
The controlled-count comparison retains its unsigned 32-bit argument fallback.
`1FA0/A1/A2` use the selected interaction flag. Opening or closing writes that
flag first, then refreshes the actual selected actor's pose from its own NPC
record's flag without changing motion or advancing animation.

`Scene::bind_inventory` requires the same party and random-state owners as the
rest of the scene, so item receipt and ordinary ticks consume one random sequence.
`Scene::bind_interactions` borrows the actual actor/window interaction owner
and shares its event-flag allocation with ActorWorld. Those owners and that
allocation must remain stable until Scene is destroyed. `InteractionCalls`
performs the interaction binding after validating its shared owners.

An unbound Teddy receipt suspends at the complete party/entity reconciliation
operation. Binding `Scene::bind_teddy_party` drives that operation through the
actual actor and formation owners described below. A failed direct give still
suspends at the original post-scan alias
into saved photograph data; returning a made-up inventory index is forbidden.
The caller must supply the result from that real owner. The authored common
box script normally checks space before attempting a receipt. These explicit
pending operations are not completed gameplay paths.

`1F02` consumes one byte and resolves a zero operand from the live low argument
word. The sound owner receives either a queued effect byte or direct driver
command `0x57` when that low byte is zero. Its acknowledgment starts the full
native World tick (`C12E42`), even in instant-text mode; only that tick's return
allows the interpreter to continue. Audio queue execution and PCM output remain
external. Nested dialogue is permitted during the world callback, never during
the preceding sound request.

## Party formation and Japanese party-name dialogue

Japanese `1C11` consumes no operand. It requests a real party update, chooses
the first conscious member from the resulting display order, prints through
the existing live name provider, and counts conscious members again after all
name-print callbacks. A count above one prints both original suffix glyphs.
Its helper results never write dialogue working/argument/secondary registers.
An all-unconscious scan returns character zero. The original name helper then
reads storage before the character records; that alias is outside the current
name provider and is rejected explicitly, not treated as an empty name or a
default leader. This boundary remains unfinished.

The US selector is a width hint with one byte operand. A zero byte resolves
the low word of the active argument register. It looks up `(value - 0x50) & 127`
in the main font's raw width table, regardless of the current font, adds the
character padding and current fractional position, and performs the original
16-bit comparison. Exact fits keep the line; overflow runs the normal newline
or scroll operation and sets the next-line indent. It prints no glyph, makes
no world or sound callback, and preserves registers and upcoming-word length.
US width hints require a focused output window; ambient out-of-window source
storage is not assigned a fabricated layout. The Japanese command remains
operandless and does not enter this layout path.
`native_dialogue_width_hint_tests` covers the native parser, layout and owner
contract. The opt-in `native_dialogue_width_hint_reference` uses a locally
imported US pack to execute original `DISPLAY_TEXT`, `CC_1C_11`, `EF01D2` and
the real newline/scroll bodies, comparing cursors, registers and indexed pixels.
Its windows and command streams are synthetic; it does not prove natural
scene activation or hardware presentation.

`native/story/party_formation` connects the existing `WorldParty` to the actual
interaction leader, `native/party/movement_policy`, and WindowHost palette.
It shares party, actor, formation, resource, interaction and clock identities.
`Scene::bind_party_formation` requires that same interaction owner to be bound
first. All borrowed owners must remain stable and outlive their operations.
There is one membership/formation mapping and one source of walking style.

The movement-policy helper reads the first controlled record even when the
controlled count is zero, recognizes exactly the original mushroom status,
and preserves nonzero timer/modifier state. It advances no time. Formation
then refreshes the window palette unconditionally, including when disabled
transitions select the normal palette, without changing the ordinary tick's
cached status. Name selection happens only after those operations complete.

Mushroomized bicycle movement yields an explicit `BicycleDismount` service.
The actual dismount includes music, actor removal/recreation and regional frame
and input behavior; its complete lifecycle is still required. Merely answering
that service is not proof of dismount execution. No dialogue name, palette
tail, invented tick, or replayed policy mutation runs while it is pending.

## Teddy party lifecycle

`native/party/teddy` implements the selection portion of original `C216DB`:
scan `party_order` through the controlled count, stop each character's inventory
at its first empty slot, and keep the first type-four item with the minimum
signed-byte EP. The selected value is an item ID, so its immutable imported
strength can be read at the original lifecycle points. This helper does not
change membership, create actors or maintain another inventory.

`native/story/teddy_party` owns the reconciliation continuation. If the
strength-selected member is already present, it returns without formation,
palette, timer or actor work. Otherwise it removes member 16 and then 17,
and inserts the selected authored Teddy member if there is one. The missing-item
path performs both removals. Other imported type-four strengths retain an
explicit unsupported wrapper boundary: chosen-member add/remove additionally
needs Teddy recursion and transformation rescanning, which this owner does
not fabricate. Ordinary regional Teddy strengths are still imported data.

Membership insertion preserves sorted slots and full/duplicate no-ops before
using the existing `WorldPartyCreation`. Removal shifts the existing display,
role and controlled lists, retains the source's stale final role/mapping,
transfers the removed leader's trail cursor when required, publishes its actual
integer coordinates and direction, and erases the actual actor. It calls the
guest refresh before the ordinary formation update, preserving both source
calls. There is no replacement actor registry or shadow membership list.

Creation already holds its own `WorldParty::Operation`, so
`PartyFormation::TailOperation` executes that operation's movement and palette
services without starting another update. New actors receive imported collision
metadata and the original non-NPC identity before a movement callback can
observe them. Removal detaches that identity before its physical role can be
reused. The add wrapper pauses the actual new actor only after its complete
creation/update returns. The ordinary interaction caller later resumes currently
live actors, including the newcomer.

`Scene::bind_teddy_party` requires its already-bound inventory and formation
owners, including the same immutable item catalog. Item receipt resumes only
after reconciliation completes; an unbound owner still exposes the original
Teddy service. A required bicycle dismount stays suspended at its genuine
lifecycle boundary. Abandonment or failure invalidates the continuation without
rolling back source-visible mutations. Teddy 16/17 never introduce the
chosen-member transformation rescan or an extra random draw.

## Raw actor frames in scripted lifecycles

`TickKind::ActorFrame` represents the four calls made by `C03CFD` during bicycle
dismount: clear objects, run the guarded action-script frame, update the screen,
and wait for one frame/input sample. It enters that sequence directly. Unlike
`WorldFrame`, it neither animates the meter palette nor selects the battle
helper when battle mode is nonzero. It does not roll HP/PP, draw text, consume
randomness, apply instant-text/early-return gates or run world maintenance by
itself. Maintenance happens only if an actual actor callback requests it.

`Scene::begin_nested(TickKind, parent)` admits these raw frames and frame-only
waits while this same scene's parent actor callback is suspended. It shares the
existing tick stack and live action-script guard. Clearing objects still takes
place when that guard suppresses recursive actor work; the subsequent screen
capture and frame/input delivery still occur. The child must finish before the
parent resumes. Repeated presentation reads and budget yields do not advance
either clock or actor traversal. `TickKind::Frame` remains a frame-only wait,
including each of the two US pending-interaction waits in the dismount source.

This is the frame primitive required by dismount, not an acknowledgment of the
whole bicycle operation. The lifecycle still needs late reads of released
role24 coordinates, shared movement/trail resets, real recreation, conditional
sector-music loading and sprite-upload delivery. Sprite selection does not
stand in for asynchronous upload waits; an ordinary world tick does not stand
in for this raw frame sequence. Existing formation and Teddy operations retain
their explicit dismount request until that complete child is implemented.

## Authored positions across actor lifetime

`ActorWorld::authored_position` resolves the current actor's full fixed-point
XYZ while a numeric role is occupied, and its retained position after deletion.
Generic actor deletion captures the latest live action state, including motion
from scripts, physics and scene callbacks. Ordinary actors without authored
roles remain independent of this thirty-role domain. A new world's unused
positions start at zero; an imported saved scene must supply its retained values.

`set_authored_position` replaces a complete position value. The whole-coordinate
form, `set_authored_coordinate`, preserves fractional words and works for both
occupied and released roles. These operations do not change projection, sprite
appearance, direction or activity. Returned positions and `ActionActorState`
copies retain ordinary value semantics. A newly allocated actor's prepared
position supersedes earlier residue; unsuccessful allocation does not change it.

The source's `C039E5` and regional `C03F1E` helpers can write coordinates through
formation mappings even when the mapped role is released. Their complete native
implementations remain open: they also update projected coordinates, direction,
surface and party state. Callers that require those additional live fields still
reject a missing actor. The new position API does not weaken those contracts or
acknowledge a bicycle operation. Dismount must read role24 through this owner
after its actual raw actor frame, then perform the remaining lifecycle work.

## Native battler ownership and initialization

`native/battle/roster` owns all 32 complete battler records as native typed
fields. It implements the complete regional `BATTLE_INIT_PLAYER_STATS` and
`BATTLE_INIT_ENEMY_STATS` operations, the primary-enemy replacement `C2C32C`,
and `COPY_MIRROR_DATA`. Initialization clears the full destination record.
Enemy initialization allocates duplicate labels across all live enemy records,
updates the retained highest enemy level and applies the original starting
shield/status. Resistance levels outside 0..3 retain the source's byte behavior;
brainshock uses the wrapped byte complement before conversion. Enemy offense
and defense deliberately consume only their catalog words' low bytes.

`native/battle/enemy_resources` imports the numerical configuration fields.
Party initialization borrows `party::State`; its five raw resistance levels
now belong to `party::Character` and retain their exact save serialization
positions. Save continuation consequently restores the values into the same
party owner that battle initialization reads. There is no separate battle copy
of the party state or dialogue-specific battler state.

`native/battle/formation` connects the existing formation plan to this roster.
Whole-record permutations move identity together with health, actions and other
state. Only label, row, resource and XY are patched from layout projections;
raw side and consciousness bytes are never normalized through booleans.
Replacement creates a new record identity; mirror retains its destination
identity and accepts either a live record or an external retained backup. The
mirror action, timer and backup lifecycle remain separate unported producers. Physical slot selectors must not follow identity when records move.

The source initializers do not produce the admitted encounter count or current
action selectors. Those remain caller-owned inputs. `WorldEncounterState` owns
the collected enemy list and `WorldPartyState` owns guest HP. The collected list
size must not substitute for the final admitted count: original sprite-width
admission can shorten it. Battle startup and the full action loop remain open. A matching live enemy with a label outside 1..26
causes original out-of-table scratch writes and is rejected before native
mutation. Genuine exhaustion of all 26 labels returns zero, as the source
does; a later scan of that zero label remains outside the owned table domain.


## Prepared dialogue values and visible growth

`native/dialogue/prepared_message` owns the shared attacker/target name buffers,
CNUM and CITEM. `WindowHost` borrows one stable owner; conversations use that
same state for `1C0D`/`1C0E`/`1C0F` printing and `191E`/`191F` queries. A host
without the owner exposes typed requests. Full CNUM queries retain all 32 bits;
CITEM queries zero-extend its byte. The operations consume no extra operands
and do not create a world or audio tick.

Name copies retain the source's exact regional extents, descending overlapping
copy order, explicit terminator and untouched tail. US copies set the selected
enemy ID to `FFFF` while retaining its article flag. US printing uses imported
enemy article bytes and the four-byte capital/lowercase phrases, clearing the
flag only for `FFFF`; Japanese printing does not consult or change this metadata.
Name readers remain live across glyph callbacks. Number formatting captures
CNUM before printing and retains the existing shared decimal scratch behavior.

`native/story/growth_dialogue` connects `VisibleCharacterGrowth` to actual
`Conversation` execution. It validates regional content and shared owners before
starting, applies each producer request's explicit prompt/name/number/item writes
in source order, and retains fields omitted by later messages. Its dialogue
service exposes the child to the existing `Scene` driver and cannot be
acknowledged until that child finishes. Nested growth messages use the real
suspended parent conversation. Music remains an explicit host service.

These modules import authored message content from the player's asset pack.
They do not by themselves implement all battle actions or a complete playable
native engine. The battle-name and shield coordinators described below use
the same prepared-message owner. The original visible-growth
producer's arithmetic remains in `native/character_growth` and
`native/visible_character_growth`; the coordinator supplies its presentation
connection without duplicating that logic.


## Battle names, shield events and dialogue

`native/battle/names` implements `FIX_ATTACKER_NAME`, `FIX_TARGET_NAME`,
`SWAP_ATTACKER_WITH_TARGET` and first-target selection (`C23E32`). It borrows the
actual 32-slot roster, party, imported substitution resources, prepared-message
state and `ActionState`. Attacker and target are optional physical slot selectors;
callers must supply them. Record identity does not replace a selector, and the
admitted enemy count is not inferred from occupied slots or the collected list.

The name owner retains both adjacent regional scratch fields. It preserves odd
word-clear extents, expanded live Ness placeholders, pet-name replacement,
raw article metadata, regional duplicate labels and untouched prepared tails.
Label-A suppression uses the original first-unused-label scan over all 32
records, including the selected battler. Player names use the raw row selector;
a player ID above four leaves the prior prepared name in place. Inputs that
would leave the owned roster or scratch domain are rejected before publishing.

`native/story/battle_dialogue` runs `DISPLAY_IN_BATTLE_TEXT` and
`DISPLAY_TEXT_WAIT` through actual `Conversation` objects. Auto Fight uses the
live saved party byte and controller `PAD_STATE`; B clears that byte and the four
staged indicator cells without publishing a frame. Cleared cells retain their
zero-descriptor identity even when they sample live atlas image zero, so a later
window redraw selects the original plain corner instead of an overlap corner.
The shared meter-cell path preserves that same identity when clearing a meter
rectangle. The numbered entry sets all 32 CNUM bits. Battle mode enables prompt mode two, and the prompt clears only
after the conversation really finishes. Suspended-parent calls use the same
nested output-ownership rules as other story coordinators.

`native/battle/shields` implements the complete `PSI_SHIELD_NULLIFY` and
`WEAKEN_SHIELD` helper flows. It imports action kinds through `ActionResources`,
loads CITEM from the current attacker's argument and displays the original
reflected, absorbed and worn-off messages from the player's content. Reflection
swaps physical selectors and regenerates names. Shield HP decrements as a byte,
including zero wrapping to 255. Reads after dialogue return use the current live
selectors, so callbacks can affect the subsequent state changes. Raw source
flags keep their word values until the original operation writes them.

Shield operations expose their real pending conversation for the scene to drive;
a request cannot be acknowledged as finished while that child is running. This
ports those helpers and their dialogue integration, not the full battle turn
scheduler, enemy AI, menu selection (`C23E8A`) or complete encounter startup.

## Enemy palette effects

`native/battle/palette_effects` implements the complete `C2FAD8`, `C2FADE`,
`C2FB35` and `C2FD99` helpers used by PSI animation, knockouts and revival.
`PaletteBankState` retains the four alternate enemy palettes (source banks
12–15); normal enemy colors remain in the imported resources (banks 8–11).
The caller supplies the actual initial palette words and retains one shared
`PaletteEffectState` across operations. The module does not start an encounter
or advance a clock.

Colors, steps, deltas, counters, duration and shared speed preserve the source
word arithmetic. Equal target channels retain their old step word. Reversal
negates all channel deltas and clears counters, including color zero, while
advancement skips that transparent color. A counter wraps before the unsigned
threshold comparison, and packed color additions retain carries and bit 15.
An active bank stages palette upload mode 16 even when its colors do not change.
That byte is a publication request, not an immediate display update.

Zero speed is valid to set. Advancing an active nonzero delta at zero speed
would never return in the original; the native module rejects that operation
before changing any bank. Inactive banks and active banks with no processed
deltas retain the source's terminating behavior at zero speed.

The combatant scene can borrow the same stable palette owner. Its ordinary
publication selects sprite commands and advances their visual timers once;
an explicit `publish_palettes()` then captures later palette changes onto those
commands without rerunning sprite selection. Retained snapshots own their
colors and remain unchanged during subsequent effects or repeated rendering.
Unbound scenes retain their existing explicit alternate-palette interface;
bound scenes reject a competing palette writer.

Combatant quads identify the actor layer for scene composition. Normal banks
8–11 are ineligible for color math; alternate banks 12–15 are eligible, matching
the source object-palette rule. Captured colors remain literal and immutable.
Connecting battle colors to the scene-wide palette owner and proving composed
window/color effects remain part of the complete battle-frame work.

The complete battle frame still needs PSI animation, meter blinking and the
remaining ordered scene publication. Porting these four helpers and their
combatant rendering connection does not complete `C2DB3F`, `KO_TARGET`,
`REVIVE_TARGET`, battle startup or the turn scheduler.
