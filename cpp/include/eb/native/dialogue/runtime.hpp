#pragma once

#include "eb/native/dialogue/program.hpp"
#include "eb/native/dialogue/window_state.hpp"
#include "eb/native/world_control_commands.hpp"
#include <functional>
#include <map>

namespace eb::native::dialogue {
struct RegisterBackup {
    std::uint32_t working{}, argument{};
    std::uint8_t secondary{};
    bool operator==(const RegisterBackup &) const = default;
};
// The source stores attributes separately from the flag that enables return
// restoration. Inventory replaces the bytes without setting that flag; CC1802
// replaces them and enables it. Reusing a stream disables restoration while
// retaining the stored bytes. There is one authoritative attribute value.
class StreamWindowSave {
  public:
    StreamWindowSave &operator=(const SavedWindowAttributes &attributes) {
        attributes_ = attributes;
        enabled_ = true;
        return *this;
    }
    explicit operator bool() const { return enabled_; }
    const SavedWindowAttributes &operator*() const { return attributes_; }
    const SavedWindowAttributes *operator->() const { return &attributes_; }
    void reset() { enabled_ = false; }
    void update_attributes(const SavedWindowAttributes &attributes) { attributes_ = attributes; }
    const SavedWindowAttributes &attributes() const { return attributes_; }
    bool operator==(const StreamWindowSave &) const = default;

  private:
    SavedWindowAttributes attributes_;
    bool enabled_{};
};
struct StreamSlot {
    std::optional<Location> cursor;
    StreamWindowSave saved_window;
    bool operator==(const StreamSlot &) const = default;
};
// This is authoritative native game state, not a mirror of a source RAM image.
// Without a WindowHost, a missing focus selects the dummy register bank. A
// host also retains all eight reusable banks and resolves the source's distinct
// no-window and unfocused-but-open cases. Flags are one-based content IDs.
struct State {
    std::map<WindowId, WindowState> windows;
    std::optional<WindowId> focus;
    WindowState dummy;
    bool window_host_managed{};
    std::array<std::optional<WindowId>, 8> window_slots;
    // Open banks live only in windows; these retain the banks of closed slots.
    std::array<WindowState, 8> retired_window_banks;
    // Source GET_ACTIVE with open windows and focus ffff reads an ambient
    // lookup word. A world adapter must supply that semantic slot explicitly;
    // there is no universal tail/dummy fallback for this source state.
    std::optional<unsigned> unfocused_register_slot;
    WindowState &registers_at(unsigned slot);
    const WindowState &registers_at(unsigned slot) const;
    RegisterBackup backup;
    std::vector<std::uint8_t> event_flags = std::vector<std::uint8_t>(128);
    std::array<StreamSlot, 10> streams;
    // Source counter, not a modulo-ten index: returning through slot zero
    // leaves $ffff. Active frames retain their separately captured slot.
    std::uint16_t stream_slot{};
    // CC_1F_C0's source offset is global, not retained separately per call.
    std::uint16_t subroutine_table_remaining{};
    // US layout lookahead is an explicit presentation service. Japanese
    // DISPLAY_TEXT has no equivalent automatic word-wrap prefetch.
    bool word_wrap{};
    std::uint16_t upcoming_word_length{};
    WindowState &window();
    const WindowState &window() const;
    bool flag(std::uint16_t id) const;
    void set_flag(std::uint16_t id, bool enabled);
};
enum class RequestKind {
    Glyph,
    Newline,
    ConditionalNewline,
    Pause,
    Prompt,
    TimedWait,
    PromptMode,
    InputLock,
    Selection,
    ClearLine,
    WordWrap,
    CloseWindow,
    OpenWindow,
    SaveWindowAttributes,
    FocusWindow,
    CloseAllWindows,
    ClearWindow,
    RestoreWindowAttributes,
    ResetMenu,
    AppendMenuOption,
    LayoutMenu,
    PositionText,
    SetNumberPadding,
    SetFont,
    SelectInWindow,
    ShowWallet,
    // CC1C08's literal selector; rendering and source ticks belong to the
    // window host's animation service, not to parser scheduling.
    TextAnimation,
    // CC1C13 consumes two literal bytes, including zero. The actual scene
    // animation owner executes only while the output prompt mode is nonzero.
    BattleAnimation,
    Inventory,
    // JP1C11 waits for the real formation/movement/palette owner before
    // selecting and printing a conscious member's name. No operand follows.
    RefreshParty,
    PartyQuery,
    ItemCommand,
    // CC1F02 acknowledges the audio boundary before its mandatory world tick.
    ScriptSound,
    SoundWorldTick,
    WorldControl,
    NpcGift,
    ShowMeters,
    // Native text substitution; selector preserves the 1C operation and count
    // contains its resolved word or complete unsigned32-bit numeric operand.
    Substitution,
    // Other recognized command trees stop before unknown inline operands.
    UnsupportedCommand,
    // US1C11 consumes one byte; count is its resolved low argument word.
    // It checks the main font width without printing or changing registers.
    WidthHint,
    // Operandless191E/1F read the shared prepared number/item scratch.
    // This remains external until a stable prepared-message owner is bound.
    PreparedValue,
    BattleGrammar
};
struct MenuAppendRequest {
    // CC19_02/C17889 gather into a 30-byte scratch buffer. The first byte is
    // literal; only subsequent 1/2 delimiters write the final NUL. Embedded
    // NUL bytes do not finish gathering. length includes that final NUL.
    std::array<std::uint8_t, 30> label{};
    std::uint8_t length{};
    // A raw data key remains unresolved until the menu can accept the option.
    // No-focus/full-pool append ignores it without looking up authored data.
    std::optional<ReferenceKey> selected_text;
    bool operator==(const MenuAppendRequest &) const = default;
};
struct MenuLayoutRequest {
    std::uint16_t columns{};
    bool centered{};
    bool operator==(const MenuLayoutRequest &) const = default;
};
struct TextPositionRequest {
    // Raw authored bytes. The host samples the source's shared alignment
    // policy at this command; a scheduling yield is not a game callback.
    std::uint8_t x{}, y{};
    bool operator==(const TextPositionRequest &) const = default;
};
struct WindowSelectionRequest {
    WindowId window;
    bool allow_cancel{};
    bool operator==(const WindowSelectionRequest &) const = default;
};
struct InventoryRequest {
    WindowId window;
    std::uint8_t character{}; // Zero resolves the live low argument word after US preclear.
    unsigned stream_slot{};
    bool operator==(const InventoryRequest &) const = default;
};
enum class ItemCommandKind { FindSpace, Give, AddMoney };
struct ItemCommandRequest {
    ItemCommandKind kind{};
    // Source word selectors stay words until the party helper consumes them.
    // The decoder resolves zero literals at the last operand, in source order.
    std::uint16_t character{}, item{};
    std::uint32_t amount{};
    bool operator==(const ItemCommandRequest &) const = default;
};
struct ItemCommandResult {
    std::uint32_t working{};
    // Only Give publishes argument, before working, after its real callbacks.
    std::optional<std::uint32_t> argument{};
    bool operator==(const ItemCommandResult &) const = default;
};
// PLAY_SOUND consumes the low byte. Zero writes driver command 0x57 directly;
// nonzero enters the sound queue. These are host audio services, not PCM.
enum class ScriptSoundKind { QueueEffect, DirectDriverCommand };
struct ScriptSoundRequest {
    ScriptSoundKind kind{};
    std::uint8_t value{};
    std::uint16_t source_value{};
    bool operator==(const ScriptSoundRequest &) const = default;
};
struct BattleAnimationRequest {
    std::uint16_t ally{}, enemy{};
    bool operator==(const BattleAnimationRequest &) const = default;
};
struct BattleAnimationResult {
    // A zero prompt mode consumes the command without writing working memory.
    bool executed{}, value{};
    bool operator==(const BattleAnimationResult &) const = default;
};
enum class NpcGiftAction { Open, Close, IsOpen };
enum class PartyQueryKind {
    DisplayCharacter, Status, ControlledCount, StatusEquals, FewerControlledThan,
    FirstConscious, ConsciousCount
};
struct PartyQueryRequest {
    PartyQueryKind kind{};
    // Fallbacks are resolved by the original operand handler, after all its
    // bytes arrive. A later service reads the same live party owner.
    std::uint16_t position{}, character{}, group{};
    std::uint8_t expected_status{};
    std::uint32_t amount{};
    bool operator==(const PartyQueryRequest &) const = default;
};
struct BattleGrammarRequest {
    bool target{};
    std::uint8_t operand{};
    bool operator==(const BattleGrammarRequest&) const = default;
};
struct Request {
    RequestKind kind{};
    std::uint64_t serial{};
    Location source{};
    std::uint8_t command{}, selector{}, glyph{};
    unsigned count{};
    // Window services use count for an Open/Focus content ID, Save/Restore
    // stream slot, raw number-padding byte or normal/Saturn font ID.
    // Restore is acknowledged before the stream's Return event.
    bool show_prompt{}, force_wait{};
    // Present only for WordWrap. Rendering never reads diagnostic frames or
    // changes the active interpreter's cursors to inspect the upcoming word.
    std::optional<Lookahead> lookahead;
    std::optional<MenuAppendRequest> menu_append;
    std::optional<MenuLayoutRequest> menu_layout;
    std::optional<TextPositionRequest> text_position;
    std::optional<WindowSelectionRequest> window_selection;
    std::optional<InventoryRequest> inventory{};
    std::optional<PartyQueryRequest> party_query{};
    std::optional<ItemCommandRequest> item_command{};
    std::optional<NpcGiftAction> npc_gift{};
    std::optional<ScriptSoundRequest> script_sound{};
    std::optional<WorldControlCommand> world_control{};
    std::optional<BattleAnimationRequest> battle_animation{};
    // US1C14/15 consume one literal byte; zero selects the count path.
    std::optional<BattleGrammarRequest> battle_grammar{};
    bool operator==(const Request &) const = default;
};
struct Response {
    std::uint16_t value{};
    // Supplied at native world/frame input boundaries. Separate snapshots
    // preserve the source's press-before-held direction priority.
    std::uint16_t pressed{}, held{};
    std::optional<ItemCommandResult> item_result{};
    // Prepared CNUM is genuinely32-bit; other existing service results retain
    // their source16-bit width. CITEM is zero-extended from its byte owner.
    std::optional<std::uint32_t> prepared_value{};
    std::optional<BattleAnimationResult> battle_animation_result{};
};
enum class Progress { Suspended, Finished, BudgetExhausted };
struct FrameSnapshot {
    unsigned stream_slot{};
    std::optional<Location> cursor, dictionary_cursor;
    std::uint8_t pending_command{};
    unsigned argument_count{};
    bool operator==(const FrameSnapshot &) const = default;
};
struct Snapshot {
    std::vector<FrameSnapshot> frames;
    std::optional<Location> returned_cursor;
    // Diagnostic work only: a multi-stage authored command can complete
    // several continuation stages. This is not a command-coverage count.
    std::uint64_t consumed_bytes{}, completed_stages{};
};
enum class EventKind { RegisterChanged, FlagChanged, Call, Return, Jump };
enum class RegisterKind { Working, Argument, Secondary, Saved, GlobalBackup };
struct Event {
    EventKind kind{};
    Location source{};
    std::optional<WindowId> window;
    RegisterKind reg{};
    std::uint32_t value{};
    std::uint16_t flag{};
    std::optional<Location> target;
};
class Runtime {
  public:
    Runtime(std::shared_ptr<const Program> program, State &state);
    ~Runtime();
    Runtime(Runtime &&) noexcept;
    Runtime &operator=(Runtime &&) noexcept;
    Runtime(const Runtime &) = delete;
    Runtime &operator=(const Runtime &) = delete;
    void start(EntryId entry);
    void start(Location location);
    void validate_start() const;
    // Each unit bounds one interpreter dispatch. A US dictionary dispatch
    // consumes at most three content bytes; calls never recursively run a VM.
    Progress advance(unsigned work_budget = 4096);
    const std::optional<Request> &request() const;
    // UnsupportedCommand cannot be acknowledged: no guessed operand length or
    // implied engine effects may let execution pass an unported operation.
    void respond(Response response = {});
    std::optional<Location> returned_cursor() const;
    Snapshot snapshot() const;
    // Read-only semantic observation; observers must not mutate State/runtime.
    void observe(std::function<void(const Event &)> observer);

  private:
    struct Execution;
    std::unique_ptr<Execution> execution_;
};
} // namespace eb::native::dialogue
