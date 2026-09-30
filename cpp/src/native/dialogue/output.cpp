// Source-faithful native indexed text composition. Original files:
// src/text/print_letter{,-jp}.asm and print_newline.asm;
// src/text/ccs/clear_line{,-jp}.asm; src/unknown/C4/C44E61.asm,
// C44B3A.asm, C44DCA.asm, C44C8C.asm, C43F77.asm, C45E96.asm;
// src/unknown/C1/C10A85.asm, C1C046.asm; C4/C437B8{,-jp}.asm.
// Menu/string helpers: C43CD2/C43DDB/C43BB9/C43B15/C43EF8/C43E31,
// C43D24/C43D75/C43D95/C447FB and C208B8.
// Raw shared brush preparation: src/system/load_window_gfx.asm and C444FB.
// Processor execution, source image IDs and hardware transfer code are absent.
#include "eb/native/dialogue/output.hpp"
#include "eb/native/dialogue/fonts.hpp"
#include "eb/native/dialogue/initialization_resources.hpp"
#include "eb/native/dialogue/window_graphics.hpp"
#include "detail/text_canvas.hpp"
#include <algorithm>
#include <array>
#include <limits>
#include <stdexcept>

namespace eb::native::dialogue {
namespace {
void require(bool ok, const char *message) {
    if (!ok)
        throw std::invalid_argument(message);
}
struct Column {
    std::array<std::uint8_t, 128> pixels{};
};
using Image = detail::CanvasImage;
using Cell = detail::CanvasCell;
using Surface = detail::TextCanvas;
struct PublishedColumn {
    std::shared_ptr<Image> upper = std::make_shared<Image>();
    std::shared_ptr<Image> lower = std::make_shared<Image>();
    void copy(const Column &column) {
        std::copy_n(column.pixels.begin(), 64, upper->pixels.begin());
        std::copy_n(column.pixels.begin() + 64, 64, lower->pixels.begin());
    }
};
} // namespace
struct TextOutput::Execution {
    std::shared_ptr<const FontResources> fonts;
    std::shared_ptr<WindowGraphics> graphics;
    State &state;
    std::map<WindowId, Surface> surfaces;
    // Closing moves the canvas here. JP retains its cells and aliases; US
    // releases and clears cells first. Metadata has no second host-side copy.
    std::array<Surface, 8> retained;
    std::optional<WindowId> front;
    PrintPolicy policy;
    bool redraw{}, indent{}, saturn_active{};
    std::uint8_t last{};
    std::uint8_t last_pixel_offset_set{};
    unsigned offset{};
    // Native owned artwork, shared by any published cells which still refer
    // to this unfinished column. Focus changes alone retain this relationship.
    // Indexed composition history retains visible source provenance: US Tiny
    // changes only eight rows, so its lower half can come from the earlier use
    // of this 52-column brush strip. This is not a tile allocator: live window
    // columns own separate images and there is no limit on window storage.
    std::vector<std::shared_ptr<Column>> brush_history;
    unsigned brush_column{};
    // C44DCA remembers the pixel position of its last publication separately
    // from VWF_X. Raw title/name composition advances only the latter.
    unsigned publication_position{};
    std::shared_ptr<Column> composition;
    std::shared_ptr<PublishedColumn> active_image;
    // Japanese Saturn republishes through 48 shared images. Reusing an image
    // changes any live window cells still referring to it; immutable frames
    // already returned by frame() have independent pixel copies.
    std::array<std::shared_ptr<PublishedColumn>, 48> saturn_publications;
    struct ReusableImage {
        std::shared_ptr<Image> image;
        bool in_use{};
    };
    std::vector<ReusableImage> reusable_images;
    unsigned saturn_publication = 1;
    bool published{};
    enum class Stage { Complete, Footer, Sound, WaitSetup, Wait, AfterWait };
    // PRINT_LETTER and C43F77 save these values in their relocated direct-page
    // call frames (include/macros.asm: END_STACK_VARS / END_C_FUNCTION). A
    // recursive DISPLAY_TEXT from WINDOW_TICK must preserve the caller's
    // countdown and pending return, but must not restore shared composition.
    struct Activation {
        Owner owner{};
        Stage stage = Stage::Complete;
        std::optional<TextEffect> pending{};
        std::uint16_t character{}, remaining{};
        unsigned footer_count{};
        bool inner_footer{};
    };
    std::vector<Activation> activations{Activation{}};
    Owner next_owner = 1;
    bool poisoned{};

    Activation &active() { return activations.back(); }
    const Activation &active() const { return activations.back(); }
    void require_owner(Owner owner) const {
        require(!poisoned, "Dialogue output execution was abandoned");
        require(active().owner == owner, "Dialogue output belongs to another active conversation");
    }

    Execution(std::shared_ptr<const FontResources> resources, State &owner)
        : fonts(std::move(resources)), state(owner) {
        require(bool(fonts), "Missing dialogue font resources");
        brush_history.resize(japanese() ? 4 : 52);
        for (auto &column : brush_history) {
            column = std::make_shared<Column>();
            // C200D9 initializes every JP Saturn strip. Later C45E96 resets
            // only the first strip and preserves the other three histories.
            if (japanese())
                column->pixels.fill(3);
        }
        composition = brush_history.front();
        for (auto &image : saturn_publications)
            image = std::make_shared<PublishedColumn>();
    }
    bool japanese() const { return fonts->version() == GameVersion::JP; }
    bool focus_is_front() const {
        if (!state.window_host_managed) {
            focused();
            return state.focus == front;
        }
        const auto slot_for = [&](WindowId id) {
            const auto found = std::find(state.window_slots.begin(), state.window_slots.end(), id);
            require(found != state.window_slots.end(), "Dialogue window has no live source slot");
            return unsigned(found - state.window_slots.begin());
        };
        // PRINT_LETTER re-reads only the focus lookup word after an inner
        // C43F77 world tick, not the window payload. A nested close may leave
        // focus absent. Its ambient lookup word remains meaningful even when
        // it is not a valid register bank, and an empty list has tail ffff.
        unsigned focused_slot;
        if (state.focus)
            focused_slot = slot_for(*state.focus);
        else {
            require(state.unfocused_register_slot.has_value(),
                    "Unfocused dialogue footer requires its ambient source slot");
            focused_slot = *state.unfocused_register_slot;
            require(focused_slot <= 0xffff, "Ambient dialogue slot is not a source word");
        }
        return focused_slot == (front ? slot_for(*front) : 0xffff);
    }
    Surface &get(WindowId id) {
        const auto found = surfaces.find(id);
        require(found != surfaces.end(), "Dialogue output window has not been defined");
        require(state.windows.contains(id), "Dialogue output window has no register owner");
        return found->second;
    }
    const Surface &get(WindowId id) const {
        const auto found = surfaces.find(id);
        require(found != surfaces.end(), "Dialogue output window has not been defined");
        require(state.windows.contains(id), "Dialogue output window has no register owner");
        return found->second;
    }
    unsigned slot_for(WindowId id) const {
        require(state.window_host_managed, "Physical output slots require a window host");
        const auto at = std::find(state.window_slots.begin(), state.window_slots.end(), id);
        require(at != state.window_slots.end(), "Dialogue window has no physical slot");
        return unsigned(at - state.window_slots.begin());
    }
    Surface &slot(unsigned index) {
        require(state.window_host_managed, "Physical output slots require a window host");
        const auto &id = state.window_slots.at(index);
        return id ? get(*id) : retained.at(index);
    }
    const Surface &slot(unsigned index) const {
        require(state.window_host_managed, "Physical output slots require a window host");
        const auto &id = state.window_slots.at(index);
        return id ? get(*id) : retained.at(index);
    }
    Surface &focused() {
        require(bool(state.focus), "Dialogue output requires a focused window");
        return get(*state.focus);
    }
    const Surface &focused() const {
        require(bool(state.focus), "Dialogue output requires a focused window");
        return get(*state.focus);
    }
    // JP register/layout entry points use the explicit ambient physical bank
    // even without focus. That does not enable C10BA1 glyph placement. Merely
    // reading metadata must not reject a source-word cursor such as ffff.
    Surface &layout() {
        if (state.focus) return focused();
        require(japanese() && state.unfocused_register_slot.has_value(),
                "Unfocused Japanese text requires its ambient physical slot");
        return slot(*state.unfocused_register_slot);
    }
    void idle() const {
        require(active().stage == Stage::Complete && !active().pending,
                "Dialogue output request is still active");
    }
    void validate_style(const TextStyle &style) const {
        require(style.palette < 8, "Dialogue palette is outside the indexed text palette");
        if (!japanese())
            require(style.font < 5, "Unknown US dialogue font");
    }
    static void validate_cursor(const OutputWindow &window, TextCursor cursor) {
        require(cursor.column <= window.geometry.columns &&
                    cursor.line < window.geometry.tile_rows / 2,
                "Dialogue text cursor leaves its window");
    }
    static void validate_cursor(const Surface &window, TextCursor cursor) {
        validate_cursor(window.state, cursor);
    }
    Cell blank() const {
        const auto &glyph = fonts->fixed_glyph(0x20);
        auto image = std::make_shared<Image>();
        if (graphics)
            graphics->bind_cell(0x40, image);
        else
            for (unsigned y = 0; y < 8; ++y)
                for (unsigned x = 0; x < 8; ++x)
                    image->pixels[y * 8 + x] = glyph.pixel(x, y);
        TextStyle style;
        style.priority = false;
        return {std::move(image), style, 32, false};
    }
    // A released glyph image can remain referenced by a source-visible cell:
    // the fixed-glyph right-edge path releases before wrapping its cursor.
    // Keep that identity alive and deterministically reuse the earliest one.
    // Storage grows without a hardware capacity, address or reserved tile ID.
    std::shared_ptr<Image> acquire_image() {
        for (auto &entry : reusable_images) {
            if (!entry.in_use) {
                entry.in_use = true;
                return entry.image;
            }
        }
        auto image = std::make_shared<Image>();
        image->reusable_identity = reusable_images.size();
        reusable_images.push_back({image, true});
        return image;
    }
    void release(const Cell &cell) {
        if (cell.artwork->reusable_identity)
            reusable_images[*cell.artwork->reusable_identity].in_use = false;
    }
    std::shared_ptr<PublishedColumn> acquire_column() {
        auto result = std::make_shared<PublishedColumn>();
        result->upper = acquire_image();
        result->lower = acquire_image();
        return result;
    }
    void release_row(Surface &surface, unsigned line) {
        surface.require_storage();
        require(line < surface.state.geometry.tile_rows / 2, "Dialogue release leaves its canvas");
        const unsigned first = line * surface.state.geometry.columns * 2;
        const unsigned count = surface.state.geometry.columns * 2;
        for (unsigned i = first; i < first + count; ++i)
            release(surface.cells[i]);
    }
    void reset_composition() {
        offset = 0;
        brush_column = 0;
        publication_position = 0;
        composition = brush_history.front();
        if (japanese()) {
            composition->pixels.fill(3);
            saturn_publication = (saturn_publication + 1) % saturn_publications.size();
        }
        active_image.reset();
        published = false;
        saturn_active = false;
    }
    void align_column(unsigned fraction = 0) {
        brush_column = (brush_column + 1) % brush_history.size();
        composition = brush_history[brush_column];
        if (fraction || japanese())
            composition->pixels.fill(3);
        offset = fraction;
        publication_position = brush_column * 8;
        active_image.reset();
        published = false;
    }
    void clear_row(Surface &surface, unsigned line) {
        surface.require_storage();
        const auto width = surface.state.geometry.columns;
        const auto begin = line * width * 2;
        require(begin + width * 2 <= surface.cells.size(), "Dialogue clear leaves its window");
        const auto empty = blank();
        std::fill_n(surface.cells.begin() + begin, width * 2, empty);
    }
    void scroll(Surface &surface) {
        surface.require_storage();
        const auto width = surface.state.geometry.columns;
        if (!japanese())
            release_row(surface, 0);
        std::move(surface.cells.begin() + width * 2, surface.cells.end(), surface.cells.begin());
        clear_row(surface, surface.state.geometry.tile_rows / 2 - 1);
    }
    void newline() {
        if (!state.focus && !japanese())
            return;
        auto &surface = layout();
        if (!japanese() || surface.state.style.font)
            reset_composition();
        if (surface.state.cursor.line == std::uint16_t(surface.state.geometry.tile_rows / 2 - 1))
            scroll(surface);
        else
            ++surface.state.cursor.line;
        surface.state.cursor.column = 0;
    }
    void position(WindowId id, TextCursor cursor, unsigned fraction) {
        position(get(id).state, cursor, fraction);
    }
    void position(OutputWindow &window, TextCursor cursor, unsigned fraction) {
        validate_cursor(window, cursor);
        position_source(window, cursor, fraction);
    }
    void position_source(OutputWindow &window, TextCursor cursor, unsigned fraction) {
        require(fraction < 8, "Dialogue subcolumn offset must be below eight");
        if (!japanese()) {
            align_column(fraction);
            // C43D24 changes the saved offset only on its nonzero branch.
            // C43D95 later adds this value, independently of live brush X.
            if (fraction)
                last_pixel_offset_set = std::uint8_t(fraction);
        } else
            require(fraction == 0, "Japanese cursor positioning has no pixel offset");
        window.cursor = cursor;
    }
    std::uint16_t measure_string(std::span<const std::uint8_t> text, std::uint16_t limit,
                                 bool normal_font, const OutputWindow &window) const {
        const auto widths = fonts->word_widths(normal_font ? 0 : window.style.font);
        std::uint16_t pixels = 0;
        for (unsigned index = 0; index < limit; ++index) {
            if (index >= text.size())
                throw std::out_of_range("String measurement leaves its live content extent before NUL or maximum");
            const auto character = text[index];
            if (!character)
                break;
            pixels = std::uint16_t(pixels + widths[(unsigned(character) - 0x50) & 127] +
                                   policy.character_padding);
        }
        return pixels;
    }
    // Places two native eight-pixel cells. US dynamic columns have a distinct
    // overflow policy; fixed glyphs and Japanese columns use the fixed path.
    bool place(std::shared_ptr<PublishedColumn> image, TextStyle style, bool dynamic,
               std::optional<std::uint16_t> fixed_character = {}) {
        if (japanese() && !state.focus)
            return false; // C10BA1: no descriptor access, wrap or cursor advance.
        auto &surface = focused();
        surface.require_storage();
        auto &cursor = surface.state.cursor;
        const auto width = surface.state.geometry.columns;
        if (cursor.column == width) {
            cursor.column = 0;
            if (cursor.line == surface.state.geometry.tile_rows / 2 - 1) {
                if (dynamic && !japanese() && policy.allow_overflow)
                    return false;
                scroll(surface);
            } else
                ++cursor.line;
            if (dynamic && !japanese() && state.word_wrap)
                indent = true;
        }
        if (fixed_character && policy.prompt_mode && cursor.column == 0 &&
            (*fixed_character == 32 || *fixed_character == 64)) {
            if (policy.prompt_mode == 1)
                return false;
            if (policy.prompt_mode == 2) {
                image = fixed_column(32);
                fixed_character = 32;
            }
        }
        const unsigned at = unsigned(cursor.line) * width * 2 + cursor.column;
        require(at + width < surface.cells.size(), "Dialogue glyph leaves its window");
        if (dynamic && !japanese())
            release(surface.cells[at]);
        surface.cells[at] = {image->upper, style, fixed_character, false};
        if (dynamic && !japanese())
            release(surface.cells[at + width]);
        surface.cells[at + width] = {image->lower, style, fixed_character, fixed_character.has_value()};
        ++cursor.column;
        return true;
    }
    std::shared_ptr<PublishedColumn> fixed_column(std::uint16_t value) const {
        // US LOAD_WINDOW_GFX publishes this fixed segment a second time for
        // menu glyphs 100..14f. Keep its full character provenance, while the
        // artwork is the same imported glyph as 80..cf.
        const auto art_character = !japanese() && value >= 0x100 && value <= 0x14f ? value - 0x80 : value;
        const auto &glyph = fonts->fixed_glyph(std::uint16_t(art_character));
        auto image = std::make_shared<PublishedColumn>();
        if (graphics) {
            const unsigned first = (value & 0xfff0) + value;
            graphics->bind_cell(first, image->upper);
            graphics->bind_cell(first + 16, image->lower);
        } else {
            for (unsigned y = 0; y < 16; ++y)
                for (unsigned x = 0; x < 8; ++x)
                    (y < 8 ? image->upper : image->lower)->pixels[(y & 7) * 8 + x] = glyph.pixel(x, y);
        }
        return image;
    }
    void fixed(std::uint16_t value) {
        if (japanese() && !state.focus)
            return; // Even unsupported fixed artwork is never looked up.
        auto image = fixed_column(value);
        auto style = focused().state.style;
        if (value == 34) {
            style.palette = 3;
            style.priority = style.flip_horizontal = style.flip_vertical = false;
        }
        place(std::move(image), style, false, value);
    }
    void fixed_entry(std::uint16_t value) {
        if (!state.focus && !japanese())
            return;
        if (japanese()) {
            // Existing native direct fixed entry includes the ordinary footer.
            // No focused placement means neither canvas nor artwork is read.
            fixed(value);
            active().character = value;
            active().footer_count = 1;
            active().inner_footer = false;
            active().stage = Stage::Footer;
            return;
        }
        auto &surface = focused();
        validate_cursor(surface, surface.state.cursor);
        active().character = value;
        active().footer_count = 1;
        active().inner_footer = !japanese();
        if (!japanese()) {
            // C43F77 releases its pre-wrap position before C10A85 potentially
            // wraps. The released cells may remain visible aliases.
            const unsigned before = unsigned(surface.state.cursor.line) * surface.state.geometry.columns * 2 +
                                    surface.state.cursor.column;
            for (unsigned address : {before, before + surface.state.geometry.columns})
                if (address < surface.cells.size())
                    release(surface.cells[address]);
            if (value == 47)
                indent = false;
        }
        fixed(value);
        active().stage = Stage::Footer;
    }
    template <class Pixel>
    std::vector<std::shared_ptr<Column>> compose(unsigned advance, unsigned height, bool japanese_mask,
                                                 Pixel pixel) {
        std::vector<std::shared_ptr<Column>> columns{composition};
        unsigned remaining_width = advance, strip = 0;
        do {
            const auto part = std::min(remaining_width, 8u);
            if (!offset && !japanese_mask)
                for (unsigned y = 0; y < height; ++y)
                    std::fill_n(composition->pixels.begin() + y * 8, 8, 3);
            for (unsigned y = 0; y < height; ++y)
                for (unsigned x = 0; x + offset < 8; ++x)
                    composition->pixels[y * 8 + x + offset] &= pixel(strip * 8 + x, y);
            const auto old_offset = offset;
            offset += part;
            if (offset >= 8) {
                offset -= 8;
                brush_column = (brush_column + 1) % brush_history.size();
                auto next = brush_history[brush_column];
                for (unsigned y = 0; y < height; ++y)
                    for (unsigned x = 0; x < 8; ++x)
                        next->pixels[y * 8 + x] =
                            old_offset && x < old_offset ? pixel(strip * 8 + 8 - old_offset + x, y) : 3;
                composition = std::move(next);
                columns.push_back(composition);
            }
            remaining_width -= part;
            ++strip;
        } while (remaining_width);
        return columns;
    }
    void proportional_us(std::uint16_t value) {
        auto &surface = focused();
        if (value == 80 && indent)
            return;
        if (indent) {
            surface.state.cursor.column = 0;
            if (value != 112)
                position(*state.focus, surface.state.cursor, 6);
            indent = false;
        }
        const auto font = surface.state.style.font;
        const auto &glyph = fonts->glyph(font, value);
        last = std::uint8_t(value);
        compose(glyph.advance + policy.character_padding, glyph.height, false,
                [&](unsigned x, unsigned y) { return fonts->raster_pixel(font, value, x, y); });
        const auto final_column = brush_column;
        auto column = publication_position / 8;
        if (published) {
            active_image->copy(*brush_history[column]);
        } else {
            active_image = acquire_column();
            active_image->copy(*brush_history[column]);
            place(active_image, focused().state.style, true);
        }
        while (column != final_column) {
            column = (column + 1) % unsigned(brush_history.size());
            active_image = acquire_column();
            active_image->copy(*brush_history[column]);
            place(active_image, focused().state.style, true);
        }
        publication_position = brush_column * 8 + offset;
        published = true;
    }
    void saturn_jp(std::uint16_t value) {
        if (layout().state.cursor.column > 14 && value >= 32) {
            newline();
            reset_composition();
            ++layout().state.cursor.column;
        }
        const auto &glyph = fonts->glyph(layout().state.style.font, value);
        if (!glyph.variable) {
            if (saturn_active) {
                reset_composition();
                ++layout().state.cursor.column;
            }
            fixed(value);
            return;
        }
        saturn_active = true;
        const auto columns = compose(glyph.advance, glyph.height, true,
                                     [&](unsigned x, unsigned y) { return glyph.pixel(x, y); });
        for (unsigned i = 0; i < columns.size(); ++i) {
            if (i)
                saturn_publication = (saturn_publication + 1) % saturn_publications.size();
            const auto &image = saturn_publications[saturn_publication];
            image->copy(*columns[i]);
            if (state.focus)
                place(image, focused().state.style, false);
        }
        --layout().state.cursor.column;
        published = true;
    }
    void glyph(std::uint16_t value) {
        if (!state.focus && !japanese())
            return;
        auto &surface = layout();
        if (!japanese()) validate_cursor(surface, surface.state.cursor);
        active().character = value;
        active().footer_count = 1;
        active().inner_footer = false;
        if (japanese()) {
            if (surface.state.style.font) {
                saturn_jp(value);
                if (const auto following = fonts->following_diacritic(value))
                    saturn_jp(*following);
            } else
                fixed(value);
        } else if (value == 47 || value == 34 || value == 32) {
            fixed_entry(value);
            // C43F77 contains its own footer, before returning through
            // C43CAA to PRINT_LETTER's second footer.
            active().footer_count = 2;
            active().inner_footer = true;
        } else
            proportional_us(value);
        active().stage = Stage::Footer;
    }
    void finish_footer() {
        if (--active().footer_count) {
            if (active().inner_footer)
                align_column();
            active().inner_footer = false;
            active().stage = Stage::Footer;
        } else
            active().stage = Stage::Complete;
    }
    OutputProgress advance() {
        if (active().pending)
            return OutputProgress::Suspended;
        for (;;) {
            switch (active().stage) {
            case Stage::Complete:
                return OutputProgress::Complete;
            case Stage::Footer:
                // Re-read focus/policy after inner footer ticks. The source
                // may have run arbitrary host updates between these stages.
                if (!focus_is_front())
                    redraw = true;
                active().stage = Stage::Sound;
                break;
            case Stage::Sound: {
                const bool audible =
                    policy.sound_mode == 2 || (policy.sound_mode != 3 && !policy.prompt_mode);
                active().stage = Stage::WaitSetup;
                if (audible && !policy.instant && active().character != 32 &&
                    (japanese() || active().inner_footer || active().character != 80)) {
                    active().pending = TextEffect{TextEffectKind::TextSound};
                    return OutputProgress::Suspended;
                }
                break;
            }
            case Stage::WaitSetup:
                if (policy.instant) {
                    finish_footer();
                    break;
                }
                active().remaining = std::uint16_t(policy.text_speed + 1);
                active().stage = Stage::Wait;
                break;
            case Stage::Wait:
                if (!active().remaining) {
                    finish_footer();
                    break;
                }
                active().pending = TextEffect{TextEffectKind::WindowTick};
                active().stage = Stage::AfterWait;
                return OutputProgress::Suspended;
            case Stage::AfterWait:
                --active().remaining;
                active().stage = Stage::Wait;
                break;
            }
        }
    }
};
TextOutput::TextOutput(std::shared_ptr<const FontResources> resources, State &state)
    : execution_(std::make_unique<Execution>(std::move(resources), state)) {}
TextOutput::~TextOutput() = default;
GameVersion TextOutput::version() const { return execution_->fonts->version(); }
bool TextOutput::bound_to(const State &state) const { return &execution_->state == &state; }
void TextOutput::validate_enter(Owner parent) const {
    const auto &e = *execution_;
    e.require_owner(parent);
    if (!parent)
        e.idle();
    else {
        const auto &caller = e.active();
        require((caller.stage == Execution::Stage::Complete && !caller.pending) ||
                    (caller.pending && caller.pending->kind == TextEffectKind::WindowTick),
                "Recursive dialogue requires an idle output or a window tick");
    }
    require(e.next_owner != std::numeric_limits<Owner>::max(), "Dialogue output owner sequence exhausted");
}
TextOutput::Owner TextOutput::enter(Owner parent) {
    validate_enter(parent);
    auto &e = *execution_;
    const auto owner = e.next_owner++;
    e.activations.push_back(Execution::Activation{owner});
    return owner;
}
void TextOutput::leave(Owner owner) {
    auto &e = *execution_;
    e.require_owner(owner);
    require(owner != 0, "Raw dialogue output has no conversation to leave");
    e.idle();
    e.activations.pop_back();
}
void TextOutput::abandon(Owner owner) noexcept {
    if (!execution_ || !owner)
        return;
    auto &e = *execution_;
    for (const auto &activation : e.activations)
        if (activation.owner == owner) {
            // Rendering and interpreter state may already be visible. There
            // is no source cancellation or rollback to invent: keep sampling
            // valid, but prevent any caller from resuming this execution tree.
            e.poisoned = true;
            return;
        }
}
void TextOutput::require_owner(Owner owner) const { execution_->require_owner(owner); }
const FontResources &TextOutput::font_resources() const { return *execution_->fonts; }
void TextOutput::bind_graphics(std::shared_ptr<WindowGraphics> graphics, Owner owner) {
    auto &e = *execution_;
    e.require_owner(owner);
    e.idle();
    require(graphics && graphics->bound_to(*this) && graphics->version() == version(),
            "Window graphics must share this output and its region");
    const bool has_retained_canvas = std::any_of(e.retained.begin(), e.retained.end(),
                                                [](const Surface &surface) { return !surface.cells.empty(); });
    require(!e.graphics && e.surfaces.empty() && e.reusable_images.empty() && !has_retained_canvas,
            "Window graphics must be bound before defining or printing windows");
    e.graphics = std::move(graphics);
}
void TextOutput::reset_window(WindowId id, WindowGeometry geometry, TextStyle style, TextCursor cursor,
                              Owner owner) {
    auto &e = *execution_;
    e.require_owner(owner);
    e.idle();
    require(e.state.windows.contains(id), "Define dialogue registers before opening an output window");
    require(geometry.columns && geometry.columns <= 256 && geometry.tile_rows >= 2 &&
                geometry.tile_rows <= 256 && !(geometry.tile_rows & 1),
            "Invalid dialogue window geometry");
    e.validate_style(style);
    Surface replacement{{geometry, style, cursor}, {}};
    Execution::validate_cursor(replacement, cursor);
    replacement.cells.resize(unsigned(geometry.columns) * geometry.tile_rows, e.blank());
    const auto old = e.surfaces.find(id);
    if (old != e.surfaces.end() && !e.japanese())
        for (const auto &cell : old->second.cells)
            e.release(cell);
    e.surfaces.insert_or_assign(id, std::move(replacement));
    if (e.state.window_host_managed)
        e.retained[e.slot_for(id)] = {};
    // CREATE_WINDOW, including reopen, always calls C45E96. It neither
    // realigns by one column nor clears the global indent/last-character.
    e.reset_composition();
}
void TextOutput::remove_window(WindowId id, unsigned physical_slot, Owner owner) {
    auto &e = *execution_;
    e.require_owner(owner);
    e.idle();
    const auto found = e.surfaces.find(id);
    require(found != e.surfaces.end(), "Cannot close an absent dialogue output window");
    require(e.slot_for(id) == physical_slot, "Dialogue close has a different physical owner");
    if (!e.japanese()) {
        for (const auto &cell : found->second.cells)
            e.release(cell);
        // CLOSE_WINDOW replaces released US descriptors with the blank tile.
        // Retaining their old aliases would release a reused image on reopen.
        std::fill(found->second.cells.begin(), found->second.cells.end(), e.blank());
        e.reset_composition();
    }
    e.retained[physical_slot] = std::move(found->second);
    e.surfaces.erase(found);
    // WindowHost owns focus/list/title teardown and the later US close tick.
    // In particular, its post-tick indent clear must not occur here early.
}
void TextOutput::clear_window(WindowId id, Owner owner) {
    auto &e = *execution_;
    e.require_owner(owner);
    e.idle();
    auto &surface = e.get(id);
    if (!e.japanese())
        for (const auto &cell : surface.cells)
            e.release(cell);
    std::fill(surface.cells.begin(), surface.cells.end(), e.blank());
    if (!e.japanese())
        e.reset_composition();
    // C10F40 resets cursor only: font, attributes and indent survive.
    surface.state.cursor = {};
}
void TextOutput::clear_canvas(WindowId id, Owner owner) {
    auto &e = *execution_;
    e.require_owner(owner);
    e.idle();
    auto &surface = e.get(id);
    // EF0115 replaces the complete canvas and requests redraw, without the
    // cursor/brush reset performed by the distinct ClearFocus helper.
    if (!e.japanese())
        for (const auto &cell : surface.cells)
            e.release(cell);
    std::fill(surface.cells.begin(), surface.cells.end(), e.blank());
    e.redraw = true;
}
void TextOutput::restore_window(WindowId id, TextStyle style, TextCursor cursor, Owner owner) {
    auto &e = *execution_;
    e.require_owner(owner);
    e.idle();
    auto &surface = e.get(id);
    e.validate_style(style);
    // C20ABC assigns the saved attributes directly, without C43CAA/C45E96.
    // A previous partial column continues sharing its native publication.
    surface.state.style = style;
    surface.state.cursor = cursor;
}
void TextOutput::position_slot(unsigned index, TextCursor cursor, unsigned pixel_offset, Owner owner) {
    auto &e = *execution_;
    e.require_owner(owner);
    e.idle();
    auto &window = e.slot(index).state;
    // C438A5 assigns source words without clipping. Canvas accesses validate
    // separately; merely positioning outside the rectangle touches no cell.
    e.position_source(window, cursor, pixel_offset);
}
void TextOutput::set_front(std::optional<WindowId> id, Owner owner) {
    auto &e = *execution_;
    e.require_owner(owner);
    e.idle();
    if (id)
        e.get(*id);
    e.front = id;
}
void TextOutput::mark_redraw(Owner owner) {
    execution_->require_owner(owner);
    execution_->idle();
    execution_->redraw = true;
}
void TextOutput::clear_indent(Owner owner) {
    set_indent(false, owner);
}
void TextOutput::set_indent(bool value, Owner owner) {
    execution_->require_owner(owner);
    execution_->idle();
    execution_->indent = value;
}
void TextOutput::reset_reusable_images(Owner owner) {
    auto &e = *execution_;
    e.require_owner(owner);
    e.idle();
    if (!e.japanese())
        // C1008E resets the used-image map after its final world tick. That
        // callback may have published new windows. Preserve their live image
        // identities and current brush, while making every image reusable.
        for (auto &entry : e.reusable_images)
            entry.in_use = false;
}
std::vector<std::array<std::uint8_t, 64>> TextOutput::compose_title(std::span<const std::uint8_t> text,
                                                                    Owner owner) {
    auto &e = *execution_;
    e.require_owner(owner);
    e.idle();
    require(!e.japanese(), "Japanese title art belongs to window resources");
    require(text.size() < 22, "US title exceeds its source record capacity");
    // C444FB directly indexes the Tiny font, bypassing PRINT_LETTER's fixed
    // 20/22/2f dispatch. Canonicalize the record key for the imported raster.
    std::vector<unsigned> characters;
    for (auto encoded : text) {
        require(encoded != 0, "Title composition expects bytes before its terminator");
        const auto character = 0x50 + ((unsigned(encoded) - 0x50) & 0x7f);
        const auto &glyph = e.fonts->glyph(3, character);
        require(glyph.variable && glyph.height == 8, "US title requires the imported Tiny font");
        characters.push_back(character);
    }
    // Even an empty title advances C43CAA and the caller still performs both
    // frame waits. C444FB's transfer loop then sees the terminator immediately.
    e.align_column();
    const auto first = e.brush_column;
    for (auto character : characters)
        e.compose(6, 8, false,
                  [&](unsigned x, unsigned y) { return e.fonts->raster_pixel(3, character, x, y); });
    // The source uploads strlen columns, not ceil(6*strlen/8). Extra columns
    // can contain retained brush pixels and spill into the next title owner.
    // WindowHost preserves those shared publication identities and orders the
    // two WAIT_UNTIL_NEXT_FRAME effects after the complete publication.
    std::vector<std::array<std::uint8_t, 64>> columns(text.size());
    for (unsigned i = 0; i < columns.size(); ++i)
        std::copy_n(e.brush_history[(first + i) % e.brush_history.size()]->pixels.begin(), 64,
                    columns[i].begin());
    return columns;
}
std::array<std::array<std::uint8_t, 128>, 16> TextOutput::compose_party_names(
    const WindowInitializationResources &resources,
    const std::array<std::span<const std::uint8_t>, 4> &names, Owner owner) {
    auto &e = *execution_;
    e.require_owner(owner);
    e.idle();
    require(!e.japanese() && resources.version() == GameVersion::US,
            "Raw party-name composition requires US initialization resources and output");
    std::array<std::span<const std::uint8_t>, 4> runs;
    for (unsigned member = 0; member < names.size(); ++member) {
        const auto end = std::find(names[member].begin(), names[member].end(), 0);
        require(end != names[member].end(), "US party-name input has no source terminator");
        runs[member] = names[member].first(std::size_t(end - names[member].begin()));
        for (auto character : runs[member])
            (void)resources.battle_name_glyph(character);
    }
    std::array<std::array<std::uint8_t, 128>, 16> result;
    for (unsigned member = 0; member < runs.size(); ++member) {
        // The source clears832 bytes, i.e.26 complete8x16 columns. The other
        // half of the shared strip, prior visible images and policies survive.
        for (unsigned column = 0; column < 26; ++column)
            e.brush_history[column]->pixels.fill(3);
        e.brush_column = 0;
        e.offset = 2;
        e.composition = e.brush_history.front();
        e.publication_position = 0;
        e.active_image.reset();
        e.published = false;
        for (auto character : runs[member]) {
            const auto &glyph = resources.battle_name_glyph(character);
            e.compose(6, 16, false, [&](unsigned x, unsigned y) { return glyph.pixel(x, y); });
        }
        for (unsigned column = 0; column < 4; ++column)
            result[member * 4 + column] = e.brush_history[column]->pixels;
    }
    return result;
}
void TextOutput::define_window(WindowId id, WindowGeometry geometry, TextStyle style, TextCursor cursor) {
    auto &e = *execution_;
    e.require_owner(0);
    e.idle();
    require(e.state.windows.contains(id), "Define dialogue registers before output window");
    require(!e.surfaces.contains(id), "Dialogue output window is already defined");
    require(geometry.columns && geometry.columns <= 256 && geometry.tile_rows >= 2 &&
                geometry.tile_rows <= 256 && !(geometry.tile_rows & 1),
            "Invalid dialogue window geometry");
    e.validate_style(style);
    Surface surface{{geometry, style, cursor}, {}};
    Execution::validate_cursor(surface, cursor);
    surface.cells.resize(unsigned(geometry.columns) * geometry.tile_rows, e.blank());
    e.surfaces.emplace(id, std::move(surface));
    e.front = id;
}
const OutputWindow &TextOutput::window(WindowId id) const { return execution_->get(id).state; }
void TextOutput::set_style(WindowId id, TextStyle style) {
    execution_->validate_style(style);
    execution_->get(id).state.style = style;
}
void TextOutput::set_cursor(WindowId id, TextCursor cursor, unsigned pixel_offset) {
    execution_->position(id, cursor, pixel_offset);
}
void TextOutput::bring_to_front(WindowId id) {
    execution_->get(id);
    execution_->front = id;
}
PrintPolicy &TextOutput::policy() { return execution_->policy; }
const PrintPolicy &TextOutput::policy() const { return execution_->policy; }
bool TextOutput::redraw_pending() const { return execution_->redraw; }
void TextOutput::request_host_redraw() { execution_->redraw = true; }
void TextOutput::acknowledge_redraw() { execution_->redraw = false; }
void TextOutput::begin(const Request &request) { begin(request, 0); }
void TextOutput::begin_glyph(std::uint16_t character) { begin_glyph(character, 0); }
void TextOutput::begin_glyph(std::uint16_t character, Owner owner) {
    execution_->require_owner(owner);
    execution_->idle();
    execution_->glyph(character);
}
void TextOutput::begin_fixed_glyph(std::uint16_t character) { begin_fixed_glyph(character, 0); }
void TextOutput::begin_fixed_glyph(std::uint16_t character, Owner owner) {
    execution_->require_owner(owner);
    execution_->idle();
    execution_->fixed_entry(character);
}
void TextOutput::draw_fixed_glyph(std::uint16_t character, Owner owner) {
    auto &e = *execution_;
    e.require_owner(owner);
    e.idle();
    if (e.state.focus)
        e.fixed(character);
    if (!e.focus_is_front())
        e.redraw = true;
}
void TextOutput::align_composition(Owner owner) {
    execution_->require_owner(owner);
    execution_->idle();
    if (!execution_->japanese())
        execution_->align_column();
}
void TextOutput::highlight_label(std::span<const std::uint8_t> label, std::uint16_t limit, bool selected,
                                 Owner owner) {
    auto &e = *execution_;
    e.require_owner(owner);
    e.idle();
    require(!e.japanese(), "Japanese label highlighting prints its string instead");
    if (!e.state.focus)
        return;
    const auto id = e.state.focus->value;
    // The original only recolors these four file-selection windows. Other
    // callers return without even clearing INSTANT_PRINTING.
    if (id != 0x14 && id != 0x18 && id != 0x19 && id != 0x24)
        return;
    auto &surface = e.focused();
    const auto width = surface.state.geometry.columns;
    auto &cursor = surface.state.cursor;
    const auto blank = [](const Cell &cell) {
        return cell.fixed_character == 32 && !cell.lower_half && cell.style.palette == 0 &&
               !cell.style.priority && !cell.style.flip_horizontal && !cell.style.flip_vertical;
    };
    unsigned consumed = 0;
    for (auto character : label) {
        if (!character || consumed == limit)
            break;
        const unsigned at = cursor.line * width * 2 + cursor.column;
        require(at + width < surface.cells.size(), "Label highlight leaves source window storage");
        if (blank(surface.cells[at]))
            break;
        for (unsigned index : {at, at + width}) {
            auto &style = surface.cells[index].style;
            style.palette = selected ? surface.state.style.palette : 0;
            style.priority = selected && surface.state.style.priority;
            style.flip_horizontal = selected && surface.state.style.flip_horizontal;
            style.flip_vertical = selected && surface.state.style.flip_vertical;
        }
        cursor.column = std::uint16_t(cursor.column + 1);
        ++consumed;
    }
    e.policy.instant = false;
}
void TextOutput::highlight_remainder(Owner owner) {
    auto &e = *execution_;
    e.require_owner(owner);
    e.idle();
    require(!e.japanese(), "Japanese menus highlight by printing the selected label");
    auto &surface = e.focused();
    const auto width = surface.state.geometry.columns;
    const unsigned first = surface.state.cursor.line * width * 2;
    const auto blank = [](const Cell &cell) {
        return cell.fixed_character == 32 && !cell.lower_half && cell.style.palette == 0 &&
               !cell.style.priority && !cell.style.flip_horizontal && !cell.style.flip_vertical;
    };
    unsigned end = width;
    while (end && blank(surface.cells.at(first + end - 1)))
        --end;
    require(end != 0, "Source menu remainder highlight would scan before an entirely blank row");
    for (unsigned column = surface.state.cursor.column; column < end; ++column) {
        for (unsigned index : {first + column, first + width + column}) {
            auto &style = surface.cells.at(index).style;
            style.palette = surface.state.style.palette;
            style.priority = surface.state.style.priority;
            style.flip_horizontal = surface.state.style.flip_horizontal;
            style.flip_vertical = surface.state.style.flip_vertical;
        }
    }
}
void TextOutput::prepare_string(std::span<const std::uint8_t> label, std::uint16_t limit,
                                bool normal_font, const OutputWindow &window, Owner owner) {
    auto &e = *execution_;
    e.require_owner(owner);
    e.idle();
    require(!e.japanese(), "Japanese strings have no proportional wrap preparation");
    const auto pixels = e.measure_string(label, limit, normal_font, window);
    // C447FB does not special-case column zero: the subtraction and final
    // comparison both use source words, including their unsigned wrap.
    const auto used = std::uint16_t(std::uint16_t(window.cursor.column - 1) * 8 + e.offset);
    if (std::uint16_t(pixels + used) > std::uint16_t(window.geometry.columns * 8)) {
        e.newline();
        e.indent = true;
    }
}
std::uint16_t TextOutput::string_width(std::span<const std::uint8_t> label, std::uint16_t limit,
                                      bool normal_font, const OutputWindow &window, Owner owner) const {
    const auto &e = *execution_;
    e.require_owner(owner);
    e.idle();
    require(!e.japanese(), "Japanese strings have no proportional measurement");
    return e.measure_string(label, limit, normal_font, window);
}
void TextOutput::position_pixels(std::uint16_t x, std::uint16_t line, Owner owner) {
    auto &e = *execution_;
    e.require_owner(owner);
    e.idle();
    require(!e.japanese(), "Japanese cursor positioning has no pixel entry");
    e.focused();
    e.position(*e.state.focus, {std::uint16_t(x >> 3), line}, x & 7);
}
void TextOutput::shift_pixels(std::uint16_t delta, Owner owner) {
    auto &e = *execution_;
    e.require_owner(owner);
    e.idle();
    require(!e.japanese(), "Japanese number padding prints fixed spaces");
    const auto cursor = e.focused().state.cursor;
    const auto x = std::uint16_t(delta + cursor.column * 8 + e.last_pixel_offset_set);
    e.position(*e.state.focus, {std::uint16_t(x >> 3), cursor.line}, x & 7);
}
void TextOutput::begin(const Request &request, Owner owner) {
    auto &e = *execution_;
    e.require_owner(owner);
    e.idle();
    switch (request.kind) {
    case RequestKind::Glyph:
        e.glyph(request.glyph);
        break;
    case RequestKind::Newline:
        e.newline();
        break;
    case RequestKind::WidthHint: {
        require(!e.japanese(), "Japanese dialogue has no US width hint");
        const auto &window = e.focused().state;
        // EF01D2 uses the first font's complete 128-byte lookahead table,
        // including its graphic-prefix bytes. Cursor subtraction and the
        // final sum wrap as source words; equality still fits the line.
        const auto index = (std::uint16_t(request.count) - 0x50u) & 0x7fu;
        const auto pixels = unsigned(e.fonts->word_widths(0)[index]) + e.policy.character_padding;
        const auto used = std::uint16_t(std::uint16_t(window.cursor.column - 1) * 8u + (e.offset & 7u));
        if (std::uint16_t(pixels + used) > std::uint16_t(window.geometry.columns * 8u)) {
            e.newline();
            e.indent = true;
        }
        break;
    }
    case RequestKind::ConditionalNewline:
        if ((e.state.focus || e.japanese()) && e.layout().state.cursor.column)
            e.newline();
        break;
    case RequestKind::ClearLine: {
        auto &surface = e.layout();
        if (!e.japanese())
            e.release_row(surface, surface.state.cursor.line);
        e.clear_row(surface, surface.state.cursor.line);
        if (e.japanese())
            surface.state.cursor.column = 0; // C438A5: preserve shared composition.
        else
            e.position(*e.state.focus, {0, surface.state.cursor.line}, 0);
        break;
    }
    default:
        throw std::invalid_argument("Dialogue output cannot handle this request");
    }
}
OutputProgress TextOutput::advance() { return advance(0); }
OutputProgress TextOutput::advance(Owner owner) {
    execution_->require_owner(owner);
    return execution_->advance();
}
const std::optional<TextEffect> &TextOutput::effect() const { return execution_->active().pending; }
void TextOutput::respond() { respond(0); }
void TextOutput::respond(Owner owner) {
    execution_->require_owner(owner);
    auto &pending = execution_->active().pending;
    require(bool(pending), "Dialogue output has no effect to acknowledge");
    pending.reset();
}
bool TextOutput::complete() const {
    return execution_->active().stage == Execution::Stage::Complete && !execution_->active().pending;
}
Response TextOutput::prepare_word(WordMeasure word) { return prepare_word(word, 0); }
Response TextOutput::prepare_word(WordMeasure word, Owner owner) {
    auto &e = *execution_;
    e.require_owner(owner);
    e.idle();
    require(!e.japanese(), "Japanese dialogue has no US word-wrap preparation");
    if (!e.state.focus)
        return {};
    const auto &window = e.focused().state;
    const auto used = std::uint16_t((window.cursor.column ? window.cursor.column - 1 : 0) * 8 + e.offset);
    if (std::uint16_t(used + word.pixels) > std::uint16_t(window.geometry.columns * 8)) {
        e.newline();
        e.indent = true;
    }
    return {word.characters};
}
std::uint16_t TextOutput::current_font() const {
    return execution_->state.focus ? execution_->focused().state.style.font : 0;
}
std::array<std::uint8_t, 128> TextOutput::word_widths() const {
    const auto widths = execution_->fonts->word_widths(current_font());
    std::array<std::uint8_t, 128> result;
    std::copy(widths.begin(), widths.end(), result.begin());
    return result;
}
unsigned TextOutput::fractional_offset() const { return execution_->offset; }
std::uint8_t TextOutput::last_pixel_offset_set() const { return execution_->last_pixel_offset_set; }
bool TextOutput::indent_pending() const { return execution_->indent; }
bool TextOutput::saturn_composition_active() const { return execution_->saturn_active; }
std::uint8_t TextOutput::last_character() const { return execution_->last; }
TextCompositionSnapshot TextOutput::composition_snapshot() const {
    const auto &e = *execution_;
    TextCompositionSnapshot result;
    result.columns.reserve(e.brush_history.size());
    for (const auto &column : e.brush_history)
        result.columns.push_back(column->pixels);
    result.brush_column = e.brush_column;
    result.fractional_offset = e.offset;
    result.publication_position = e.publication_position;
    result.partial_publication = e.published;
    return result;
}
TextPublicationSnapshot TextOutput::publication_snapshot() const {
    const auto &e = *execution_;
    require(e.japanese(), "Shared Saturn publications are Japanese-only");
    TextPublicationSnapshot result;
    result.current_column = e.saturn_publication;
    for (unsigned i = 0; i < result.columns.size(); ++i) {
        const auto &image = *e.saturn_publications[i];
        std::copy(image.upper->pixels.begin(), image.upper->pixels.end(), result.columns[i].begin());
        std::copy(image.lower->pixels.begin(), image.lower->pixels.end(), result.columns[i].begin() + 64);
    }
    return result;
}
const OutputWindow &TextOutput::slot_output(unsigned index) const { return execution_->slot(index).state; }
TextCellGrid TextOutput::slot_cells(unsigned index) const { return execution_->slot(index).sample_cells(); }
std::shared_ptr<const TextFrame> TextOutput::slot_frame(unsigned index) const {
    return execution_->slot(index).sample_frame();
}
TextCellGrid TextOutput::cells(WindowId id) const { return execution_->get(id).sample_cells(); }
bool TextOutput::selection_marker_at(WindowId id, TextCursor cursor) const {
    const auto &e = *execution_;
    const auto &surface = e.get(id);
    const auto width = surface.state.geometry.columns;
    require(cursor.column < width && cursor.line < surface.state.geometry.tile_rows / 2,
            "Menu marker query leaves window content");
    const auto &cell = surface.cells[cursor.line * width * 2 + cursor.column];
    if (!cell.fixed_character)
        return false;
    // Preserve the source fixed-glyph half, including a lower half moved by a
    // future surface operation. Attributes and artwork colors are irrelevant.
    const auto character = *cell.fixed_character;
    const unsigned identity =
        (((character & 0xfff0) * 2 + (character & 15)) + (cell.lower_half ? 16 : 0)) & 0x3ff;
    if (!e.japanese())
        return identity == 65 || identity == 79;
    return ((identity & 0x3f0) / 2 + (identity & 15)) == 47;
}
std::shared_ptr<const TextFrame> TextOutput::frame(WindowId id) const {
    return execution_->get(id).sample_frame();
}
} // namespace eb::native::dialogue
