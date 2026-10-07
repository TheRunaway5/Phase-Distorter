#pragma once

#include "eb/native/dialogue/runtime.hpp"
#include "eb/native/dialogue/word_wrap.hpp"

namespace eb::native::dialogue {
class FontResources;
class Conversation;
class WindowHost;
class MenuHost;
class MenuPrinter;
class WindowGraphics;
class WindowInitializationResources;
class TextSubstitutions;
namespace detail {
class StringPrinter;
}

struct PrintPolicy {
    bool instant = true;
    std::uint8_t character_padding{};
    std::uint16_t text_speed{}, sound_mode{}, prompt_mode{};
    bool allow_overflow{};
};
struct TextFrame {
    unsigned width{}, height{};
    // Two-bit artwork expanded to palette indices. Zero remains transparent.
    std::vector<std::uint8_t> pixels;
    std::vector<std::uint8_t> priority;
};
// Native image identity, independent of hardware allocation. Public scene
// handles are const, but the owning renderer can update their pixels when the
// source reuses a partial or released glyph image. Sample frame() to freeze it.
struct TextImage {
    std::array<std::uint8_t, 64> pixels{};
};
struct TextCell {
    std::shared_ptr<const TextImage> image;
    TextStyle style;
    // Fixed-character provenance is distinct from pixel values. Menu movement
    // recognizes authored marker cells even when unrelated images look alike.
    std::optional<std::uint16_t> fixed_character;
    bool lower_half{};
};
struct TextCellGrid {
    WindowGeometry geometry;
    // Row-major cells. This sample freezes cell membership and attributes,
    // while its image handles intentionally retain live publication identity.
    std::vector<TextCell> cells;
};
// Deep, read-only sample of the shared composition strip. The publication
// cursor may lag the brush after raw title or party-name preparation.
struct TextCompositionSnapshot {
    std::vector<std::array<std::uint8_t, 128>> columns;
    unsigned brush_column{}, fractional_offset{}, publication_position{};
    bool partial_publication{};
    bool operator==(const TextCompositionSnapshot &) const = default;
};
// Deep sample of the JP Saturn publication ring. Identities are native image
// columns, independent of source tile addresses or hardware transfer queues.
struct TextPublicationSnapshot {
    std::array<std::array<std::uint8_t, 128>, 48> columns;
    unsigned current_column{};
    bool operator==(const TextPublicationSnapshot &) const = default;
};
enum class TextEffectKind { TextSound, WindowTick };
struct TextEffect {
    TextEffectKind kind{};
    bool operator==(const TextEffect &) const = default;
};
enum class OutputProgress { Suspended, Complete };

// Owns native window surfaces and the source-shared partial glyph composition.
// It consumes output requests, never CPU instructions or hardware allocations.
// Source: src/text/{print_letter,print_newline,ccs/clear_line}{,-jp}.asm;
// C44E61/C44B3A/C44DCA/C44C8C (US), C10A85/C1C046 (JP), and C437B8.
// Native image history preserves observable source brush/release quirks, with
// unbounded published storage and no graphics-memory address or resource cap.
// State::focus is authoritative. Define existing windows before using them;
// creation of frames, menus and original CREATE_WINDOW policy belongs to host.
// Keep this owner at a stable address and alive until every borrowing
// Conversation has been destroyed, including completed conversations.
class TextOutput {
  public:
    TextOutput(std::shared_ptr<const FontResources>, State &);
    ~TextOutput();
    TextOutput(TextOutput &&) = delete;
    TextOutput &operator=(TextOutput &&) = delete;
    TextOutput(const TextOutput &) = delete;
    TextOutput &operator=(const TextOutput &) = delete;
    GameVersion version() const;
    bool bound_to(const State &) const;
    // Raw setup for standalone output. Rejects while a Conversation owns it;
    // runtime creation/reopen/close belongs to the WindowHost lifecycle.
    void define_window(WindowId, WindowGeometry, TextStyle = {}, TextCursor = {});
    const OutputWindow &window(WindowId) const;
    void set_style(WindowId, TextStyle);
    // Source cursor positioning ends US partial-column reuse. Pixel offsets
    // initialize a fresh composition column; changing focus alone does not.
    void set_cursor(WindowId, TextCursor, unsigned pixel_offset = 0);
    void bring_to_front(WindowId);
    PrintPolicy &policy();
    const PrintPolicy &policy() const;
    bool redraw_pending() const;
    void acknowledge_redraw();

    // Begin one Glyph/Newline/ConditionalNewline/ClearLine request without a
    // Conversation owner. These execution methods reject calls while any
    // Conversation owns output. Recursive conversations use private call-local
    // continuations; surfaces, composition and policy remain shared. The host
    // may change policy/focus/style at effects, as the source routines do.
    void begin(const Request &);
    // Direct source PRINT_LETTER entry, including 16-bit menu characters.
    // Authored byte-stream Request::glyph intentionally remains one byte.
    void begin_glyph(std::uint16_t);
    // US C43F77 / JP fixed glyph entry, with one sound/tick footer. This is
    // separate from PRINT_LETTER's double footer for US 20/22/2f characters.
    void begin_fixed_glyph(std::uint16_t);
    OutputProgress advance();
    const std::optional<TextEffect> &effect() const;
    void respond();
    bool complete() const;

    // US non-consuming word measure application. No world ticks occur during
    // newline/layout; acknowledge Runtime with the returned character count.
    Response prepare_word(WordMeasure);
    std::uint16_t current_font() const;
    std::array<std::uint8_t, 128> word_widths() const;
    unsigned fractional_offset() const;
    // US explicit subcolumn positioning saves its last nonzero offset for
    // later number padding. Glyph advances and aligned positions retain it.
    std::uint8_t last_pixel_offset_set() const;
    bool indent_pending() const;
    bool saturn_composition_active() const;
    std::uint8_t last_character() const;
    TextCompositionSnapshot composition_snapshot() const;
    TextPublicationSnapshot publication_snapshot() const;
    // Scene publication retains source-visible image aliases and original
    // attributes. The host applies source attribute addition before sampling.
    TextCellGrid cells(WindowId) const;
    bool selection_marker_at(WindowId, TextCursor) const;
    // Every call returns independently owned immutable output. Presentation
    // sampling cannot advance text, effects or the dialogue interpreter.
    std::shared_ptr<const TextFrame> frame(WindowId) const;

  private:
    friend class Conversation;
    friend class WindowHost;
    friend class MenuHost;
    friend class PromptHost;
    friend class MenuPrinter;
    friend class MenuCommands;
    friend class WindowCommands;
    friend class WindowGraphics;
    friend class TextSubstitutions;
    friend class TextAnimations;
    friend class Inventory;
    friend class detail::StringPrinter;
    using Owner = std::uint64_t;
    // TextOutput must outlive and remain at the same address as its borrowing
    // conversations. Children may enter only at a parent's source callback
    // boundary; Conversation validates its interpreter request as well.
    void validate_enter(Owner parent = 0) const;
    Owner enter(Owner parent = 0);
    void leave(Owner);
    void abandon(Owner) noexcept;
    void require_owner(Owner) const;
    const FontResources &font_resources() const;
    void bind_graphics(std::shared_ptr<WindowGraphics>, Owner);
    void begin(const Request &, Owner);
    void begin_glyph(std::uint16_t, Owner);
    void begin_fixed_glyph(std::uint16_t, Owner);
    void draw_fixed_glyph(std::uint16_t, Owner);
    void align_composition(Owner);
    // JP PRINT_NEWLINE's raw register path. Its caller owns these registers;
    // no image canvas is inferred. Scrolling requires a real surface owner.
    void newline_without_scroll(std::uint16_t font, std::uint16_t height,
                                TextCursor &, Owner);
    void highlight_label(std::span<const std::uint8_t>, std::uint16_t limit, bool selected, Owner);
    void highlight_remainder(Owner);
    void prepare_string(std::span<const std::uint8_t>, std::uint16_t limit, bool normal_font,
                        const OutputWindow &, Owner);
    std::uint16_t string_width(std::span<const std::uint8_t>, std::uint16_t limit, bool normal_font,
                               const OutputWindow &, Owner) const;
    void position_pixels(std::uint16_t x, std::uint16_t line, Owner);
    void shift_pixels(std::uint16_t delta, Owner);
    void set_indent(bool, Owner);
    OutputProgress advance(Owner);
    void respond(Owner);
    Response prepare_word(WordMeasure, Owner);
    // Source window lifecycle, called only by the host's current idle owner.
    // Focus, draw order, register/slot retention and world effects belong to
    // WindowHost; these operations own the corresponding image lifetimes.
    void reset_window(WindowId, WindowGeometry, TextStyle, TextCursor, Owner);
    void remove_window(WindowId, unsigned physical_slot, Owner);
    const OutputWindow &slot_output(unsigned) const;
    TextCellGrid slot_cells(unsigned) const;
    std::shared_ptr<const TextFrame> slot_frame(unsigned) const;
    void position_slot(unsigned, TextCursor, unsigned pixel_offset, Owner);
    void clear_window(WindowId, Owner);
    void clear_canvas(WindowId, Owner);
    void restore_window(WindowId, TextStyle, TextCursor, Owner);
    // A closed physical window retains cursor metadata even without a live
    // surface. C43874 still aligns US composition before assigning that state.
    void set_front(std::optional<WindowId>, Owner);
    void mark_redraw(Owner);
    // Meter lifecycle changes the shared redraw bit during a suspended glyph;
    // it does not start or replace the output continuation.
    void request_host_redraw();
    void clear_indent(Owner);
    void reset_reusable_images(Owner);
    // US C444FB only: bytes exclude the terminator. Fixed six-pixel Tiny
    // composition uses shared scratch and returns strlen unflipped columns,
    // including retained excess columns. WindowHost publishes these images
    // with title-slot spill, then performs the two source frame waits.
    std::vector<std::array<std::uint8_t, 64>> compose_title(std::span<const std::uint8_t>, Owner);
    // US LOAD_WINDOW_GFX: each bounded run includes its source terminator,
    // which can follow the nominal five-byte name field. Raw Battle masks
    // share the ordinary brush but neither publish text nor run its footer.
    std::array<std::array<std::uint8_t, 128>, 16> compose_party_names(
        const WindowInitializationResources &,
        const std::array<std::span<const std::uint8_t>, 4> &, Owner);
    struct Execution;
    std::unique_ptr<Execution> execution_;
};
} // namespace eb::native::dialogue
