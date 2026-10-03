#pragma once

#include "eb/native/dialogue/output.hpp"
#include "eb/native/dialogue/menu_state.hpp"
#include "eb/native/dialogue/prompt_state.hpp"
#include "eb/native/dialogue/window_resources.hpp"

namespace eb::native::party { class MeterWindows; class State; }
namespace eb::native::battle { class Roster; struct ActionState; }
namespace eb::native::dialogue {
// A semantic cell in the shared UI surface. Artwork comes from the existing
// WindowGraphics owner; no second font atlas or processor descriptor is held.
struct ArtworkCellReference {
    std::uint16_t artwork_cell{};
    TextStyle style{};
    bool operator==(const ArtworkCellReference &) const = default;
};
class WindowCommands;
class TextAnimations;
class PreparedMessage;
enum class WindowAction {
    Open,
    Close,
    CloseFocus,
    Focus,
    ClearFocus,
    CloseAll,
    CloseAllAndHideMeters,
    Title,
    ResetMenu
};
struct WindowCommand {
    WindowAction action{};
    std::optional<WindowId> id;
    std::vector<std::uint8_t> title;
    unsigned title_limit{};
};
enum class WindowEffectKind { WindowTick, FrameWait, ClearPartyBlink, HideMeters };
struct WindowEffect {
    WindowEffectKind kind{};
    bool operator==(const WindowEffect &) const = default;
};
// Semantic callback registration supplied by the native menu/world owner;
// this is not an authored dialogue entry or a source code address.
struct MenuCallbackId {
    std::uint32_t value{};
    auto operator<=>(const MenuCallbackId &) const = default;
};
struct WindowMetadata {
    std::optional<WindowId> id;
    WindowConfiguration rectangle;
    std::uint8_t number_padding{};
    std::uint16_t first_option = 0xffff, last_option = 0xffff, selected_option = 0xffff;
    std::uint16_t layout_columns = 1, page_number = 1;
    std::optional<MenuCallbackId> cursor_callback;
    std::optional<unsigned> title_owner;
    std::vector<std::uint8_t> title;
};

// Receives actual authored palette writes, including repeated equal colors.
// The publisher is borrowed and must outlive its binding. Ranges distinguish
// full32-color theme publication from the four animated colors at offset20.
enum class WindowPaletteUpload : std::uint8_t { Background = 8, Full = 24 };
class WindowPalettePublication {
  public:
    virtual ~WindowPalettePublication() = default;
    virtual void publish_window_range(unsigned first, std::span<const std::uint16_t>,
                                      WindowPaletteUpload = WindowPaletteUpload::Full) = 0;
};

// Original CREATE/CLOSE and BG2 window composition expressed as native state.
// The caller supplies world/frame effects at the exact yielded boundaries.
// State, output and resources outlive this host; the host outlives borrowers.
class WindowHost {
  public:
    class Operation {
      public:
        ~Operation();
        Operation(const Operation &) = delete;
        Operation &operator=(const Operation &) = delete;
        OutputProgress advance();
        const std::optional<WindowEffect> &effect() const;
        void respond();
        bool complete() const;
        bool succeeded() const;

      private:
        friend class WindowHost;
        friend class Conversation;
        TextOutput::Owner callback_owner(TextOutput &) const;
        struct Execution;
        explicit Operation(std::unique_ptr<Execution>);
        std::unique_ptr<Execution> execution_;
    };
    WindowHost(std::shared_ptr<const WindowResources>, State &, TextOutput &);
    ~WindowHost();
    WindowHost(const WindowHost &) = delete;
    WindowHost &operator=(const WindowHost &) = delete;
    State &state();
    TextOutput &output();
    GameVersion version() const;
    // Bind before creating windows. Fixed text, titles and decorations then
    // retain the initializer's live published artwork identities.
    void set_graphics(std::shared_ptr<WindowGraphics>);
    bool uses(const WindowGraphics &) const noexcept;
    std::unique_ptr<Operation> begin(WindowCommand);
    // A callback's direct window service is a child activation and preserves
    // the suspended parent's unfinished text continuation.
    std::unique_ptr<Operation> begin_nested(WindowCommand, Conversation &parent);
    std::optional<unsigned> slot_for(WindowId) const;
    const WindowMetadata &slot(unsigned) const;
    // Failed inventory CREATE still writes the source no-slot title record.
    // This record has no content surface or draw-order membership.
    const WindowMetadata &dummy_window() const;
    std::span<const std::uint8_t, 49> text_scratch() const;
    WindowMetadata &slot(unsigned);
    const OutputWindow &slot_output(unsigned) const;
    // Includes closed retained canvases. Cells retain live image aliases;
    // frames are deep immutable samples. Undefined canvas storage rejects.
    TextCellGrid slot_cells(unsigned) const;
    std::shared_ptr<const TextFrame> slot_frame(unsigned) const;
    WindowMetadata &metadata(WindowId);
    std::array<WindowMenuOption, 70> &menu_options();
    MenuState &menu_state();
    PromptState &prompt_state();
    // One stable party owner shared by recursive dialogue and the scene.
    // Binding again requires the same identity; no party values are copied.
    // The party must outlive this host, including after a Scene is destroyed.
    void bind_party(const party::State &);
    void bind_party(party::State &&) = delete;
    void bind_party(const party::State &&) = delete;
    // Shared source name/number/item scratch, including recursive dialogues.
    // Bind while output is idle; this stable owner must outlive the host.
    void bind_prepared_message(PreparedMessage &);
    void bind_prepared_message(PreparedMessage &&) = delete;
    PreparedMessage *prepared_message() const;
    // Unbound hosts retain a typed external request instead of guessing data.
    std::optional<std::uint16_t> query_party(const PartyQueryRequest &) const;
    // Borrow the actual physical battle selectors and admitted roster while
    // output is idle. They must outlive every dialogue using this binding.
    void bind_battle(const battle::Roster&, const battle::ActionState&);
    std::optional<std::uint16_t> query_battle(const BattleGrammarRequest&) const;
    // One lazily created substitution owner shares this host's scratch/state.
    TextSubstitutions &substitutions();
    // Context commands share one source attribute backup and the existing
    // formatter/selection services. They own no second window or menu state.
    WindowCommands &commands();
    // Imported fixed-art sequences share the live output artwork, focus and
    // world/input effects with every other dialogue operation.
    TextAnimations &animations();
    std::span<const WindowId> draw_order() const;
    SavedWindowAttributes save_attributes() const;
    // CLOSE's source suppression flag is shared across nested callbacks.
    bool &suppress_close_tick();
    void set_pagination(std::optional<WindowId>, std::optional<unsigned> frame);
    std::optional<WindowId> pagination_window() const;
    std::optional<unsigned> pagination_frame() const;

    // Logical rendering and publication are explicit. Read-only sampling never
    // redraws, ticks, advances animation or changes interpreter state.
    void draw_window(WindowId);
    void draw_windows();
    void draw_tick();
    void publish_scene();
    // C20293 clears four staged cells above the meter area. No publication,
    // window redraw, input acquisition or logical tick occurs here.
    void clear_auto_fight_indicator();
    // Source C1078D updates only rows18..26, preserving upper windows and row27.
    void publish_meter_area();
    // Deferred source publications retain live staged data until the scene's
    // frame boundary. Meter strips share this ordered queue with full windows.
    // Enqueues visible rows then the fixed row28, as two ordered copies.
    void queue_scene();
    void queue_meter_area();
    bool publish_next();
    unsigned pending_publications() const;
    // Selection blink updates the visible tilemap only. The next ordinary
    // window publication replaces it from the unchanged composition buffer.
    void publish_menu_blink(unsigned x, unsigned y, const std::array<WindowDecoration, 2> &);
    // Uses the captured physical slot, its live geometry and loaded artwork.
    void publish_prompt(unsigned slot, unsigned phase);
    std::shared_ptr<const TextFrame> scene() const;
    std::shared_ptr<const TextFrame> frame() const;
    // The retained offscreen row28 is separate from the canonical 224px view.
    std::shared_ptr<const TextFrame> tail_frame() const;
    // The actual retained32-row UI tilemap, including row28 and the three
    // lower rows untouched by ordinary window publication. A cold host starts
    // with empty lower rows; a restored display supplies their real artwork
    // identities before it can be scrolled into view.
    std::shared_ptr<const TextFrame> full_frame() const;
    void restore_lower_rows(std::span<const ArtworkCellReference, 96>);
    // Immediate startup BG3 DMA clears displayed descriptors only. Staged
    // window rows and queued transfers remain live for their later publisher.
    void clear_published_tilemap();
    void load_artwork(unsigned flavor);
    void bind_palette_publication(WindowPalettePublication &);
    WindowPalettePublication *palette_publication() const noexcept;
    // Replace only the expected live sink. No colors, queued uploads or
    // published windows are copied or consumed by this routing change.
    void replace_palette_publication(const WindowPalettePublication &expected,
                                     WindowPalettePublication &next);
    void clear_palette_publication(const WindowPalettePublication &) noexcept;
    void publish_palette(unsigned flavor, bool incapacitated = false, bool transitions_disabled = false);
    void animate_palette(unsigned flavor, std::uint64_t logical_frame);
    const std::array<std::uint16_t, 32> &palette() const;

  private:
    friend class party::MeterWindows;
    friend class Conversation;
    friend class MenuPrinter;
    friend class MenuHost;
    friend class MenuCommands;
    friend class WindowCommands;
    friend class Inventory;
    friend class PromptHost;
    friend class TextSubstitutions;
    friend class detail::StringPrinter;
    // Every menu service sharing this option pool must interpret stored
    // Locations against the same immutable imported content.
    void bind_menu_program(const Program &);
    std::array<std::uint8_t, 49> &temporary_text_buffer();
    std::unique_ptr<Operation> begin_inventory_title(WindowCommand, TextOutput::Owner);
    void set_inventory_pagination(WindowId, TextOutput::Owner);
    void stage_meter_row(unsigned first_cell, std::span<const ArtworkCellReference>);
    void publish_meter_row(unsigned first_cell, std::span<const ArtworkCellReference>);
    void queue_meter_row(unsigned first_cell,
                         std::shared_ptr<const std::array<ArtworkCellReference, 12>>, unsigned offset);
    void clear_meter_rect(unsigned first_cell, unsigned width, unsigned height);
    void request_meter_redraw();
    void save_context(TextOutput::Owner);
    void restore_context(TextOutput::Owner);
    // C43874's explicit OPEN_WINDOW_TABLE[-1] source lookup is distinct from
    // GET_ACTIVE's no-window dummy register bank. The world provides that
    // ambient physical slot, which may already have been closed.
    const OutputWindow &positioning_window() const;
    void position_source(TextCursor, unsigned fraction, TextOutput::Owner);
    std::unique_ptr<Operation> begin(const Request &, TextOutput::Owner);
    std::unique_ptr<Operation> begin(WindowCommand, TextOutput::Owner, bool owns_activation);
    struct Execution;
    std::unique_ptr<Execution> execution_;
};
} // namespace eb::native::dialogue
