#include "eb/native/dialogue/window_host.hpp"
#include "eb/native/display/text_tiles.hpp"
#include "eb/native/dialogue/ambient/layout.hpp"
#include "eb/native/dialogue/conversation.hpp"
#include "eb/native/dialogue/window_graphics.hpp"
#include "eb/native/dialogue/substitutions.hpp"
#include "eb/native/dialogue/window_commands.hpp"
#include "eb/native/dialogue/text_animations.hpp"
#include "eb/native/dialogue/prepared_message.hpp"
#include "eb/native/battle/grammar.hpp"
#include "eb/native/party/queries.hpp"
#include <algorithm>
#include <deque>
#include <stdexcept>
#include <utility>

namespace eb::native::dialogue {
namespace {
void require(bool ok, const char *message) {
    if (!ok)
        throw std::logic_error(message);
}
struct SceneCell {
    std::shared_ptr<const TextImage> image;
    TextStyle style;
    bool ordinary_corner{};
    // A source descriptor of zero can still sample live atlas image zero.
    // Window overlap decisions inspect the descriptor, not that image's data.
    bool zero_descriptor{};
};
using Scene = std::array<SceneCell, 32 * 28>;
std::shared_ptr<const TextFrame> sample(std::span<const SceneCell> scene) {
    auto result = std::make_shared<TextFrame>();
    result->width = 256;
    result->height = unsigned(scene.size() / 32) * 8;
    result->pixels.resize(256 * result->height);
    result->priority.resize(256 * result->height);
    for (unsigned cell = 0; cell < scene.size(); ++cell) {
        const auto &from = scene[cell];
        if (!from.image)
            continue;
        for (unsigned y = 0; y < 8; ++y)
            for (unsigned x = 0; x < 8; ++x) {
                const unsigned at = (cell / 32 * 8 + y) * 256 + cell % 32 * 8 + x;
                const unsigned source =
                    (from.style.flip_vertical ? 7 - y : y) * 8 + (from.style.flip_horizontal ? 7 - x : x);
                const auto pixel = from.image->pixels[source];
                result->pixels[at] = pixel ? std::uint8_t(from.style.palette * 4 + pixel) : 0;
                result->priority[at] = pixel ? from.style.priority : 0;
            }
    }
    return result;
}
} // namespace
struct WindowHost::Execution {
    std::unique_ptr<TextSubstitutions> substitutions;
    std::unique_ptr<WindowCommands> commands;
    std::unique_ptr<TextAnimations> animations;
    std::shared_ptr<const WindowResources> resources;
    std::shared_ptr<WindowGraphics> graphics;
    State &state;
    TextOutput &output;
    std::array<WindowMetadata, 8> slots;
    WindowMetadata dummy;
    std::array<std::uint8_t, 49> temporary_text{};
    std::array<WindowMenuOption, 70> menu_options;
    ambient::Layout ambient_fields{menu_options};
    std::optional<Program> menu_program;
    // C19A11 and C1AA18 deliberately share WINDOW_TEXT_ATTRIBUTES_BACKUP.
    // A nested context command overwrites what its parent will later restore.
    SavedWindowAttributes context_backup;
    MenuState menu_state;
    PromptState prompt_state;
    const party::State *party{};
    PreparedMessage *prepared{};
    const battle::Roster *roster{};
    const battle::ActionState *action{};
    std::optional<std::span<const std::uint8_t, 8192>> ambient_animation;
    std::optional<std::span<std::uint8_t, 8192>> ambient_layout;
    std::vector<WindowId> order;
    std::vector<std::optional<unsigned>> title_owners;
    // Five sixteen-column title reservations plus the real US final-owner
    // spill. Every scene keeps these artwork identities, even after release.
    std::array<std::shared_ptr<TextImage>, 85> title_images;
    std::array<std::shared_ptr<TextImage>, 5> borders;
    std::array<std::array<std::shared_ptr<TextImage>, 4>, 4> pagination_images;
    std::array<std::shared_ptr<TextImage>, 3> prompt_images;
    std::array<std::uint16_t, 32> colors{};
    WindowPalettePublication *palette_publication{};
    std::weak_ptr<const void> palette_publication_lifetime;
    std::optional<WindowId> pagination;
    std::optional<unsigned> pagination_animation;
    unsigned flavor = 1;
    bool suppress_tick{};
    cutscenes::DisplayState *text_tiles{};
    std::weak_ptr<const void> text_lifetime;
    const void *source_lease{};
    std::uint64_t source_scene_count{},source_tail_count{};
    Scene buffer{}, published{};
    std::array<SceneCell, 32> published_tail{};
    std::array<SceneCell, 96> published_lower{};
    struct Publication {
        enum class Kind { Scene, Tail, MeterArea, MeterRow } kind{};
        unsigned first{}, offset{};
        std::shared_ptr<const std::array<ArtworkCellReference, 12>> meter;
    };
    std::deque<Publication> publications;
    SceneCell meter_cell(const ArtworkCellReference &cell) const {
        require(graphics != nullptr, "Meter artwork requires the shared window graphics owner");
        require(cell.style.palette < 8, "Meter cell palette is outside the shared UI palette");
        const bool zero = cell.artwork_cell == 0 && cell.style.palette == 0 &&
                          !cell.style.priority && !cell.style.flip_horizontal && !cell.style.flip_vertical;
        return {graphics->image(cell.artwork_cell), cell.style, false, zero};
    }
    void meter_row(Scene &destination, unsigned first, std::span<const ArtworkCellReference> cells) {
        require(first <= destination.size() && cells.size() <= destination.size() - first,
                "Meter cells leave the shared window surface");
        // Validate all source identities before replacing any existing cells.
        std::vector<SceneCell> resolved;
        resolved.reserve(cells.size());
        for (const auto &cell : cells) resolved.push_back(meter_cell(cell));
        std::copy(resolved.begin(), resolved.end(), destination.begin() + first);
    }
    Execution(std::shared_ptr<const WindowResources> r, State &s, TextOutput &o)
        : resources(std::move(r)), state(s), output(o) {
        require(resources && resources->version() == output.version(),
                "Window and font resources must share a region");
        require(output.bound_to(state), "Window host and text output must share state");
        require(!state.window_host_managed && state.windows.empty(),
                "Window host requires unbound empty window state");
        output.require_owner(0);
        require(output.complete(), "Window host initialization requires idle output");
        for (const auto &id : state.window_slots)
            require(!id, "Initial reusable window slots must be empty");
        for (auto &art : title_images)
            art = std::make_shared<TextImage>();
        for (auto &art : borders)
            art = std::make_shared<TextImage>();
        for (auto &row : pagination_images)
            for (auto &art : row)
                art = std::make_shared<TextImage>();
        for (auto &art : prompt_images)
            art = std::make_shared<TextImage>();
        title_owners.resize(japanese() ? 4 : 5);
        state.window_host_managed = true;
        state.focus.reset();
        state.word_wrap = !japanese();
        output.policy().instant = false;
        output.policy().character_padding = japanese() ? 0 : 1;
        output.policy().sound_mode = 1;
        output.acknowledge_redraw();
        load_artwork(1);
        colors = resources->palette(1);
    }
    bool japanese() const { return resources->version() == GameVersion::JP; }
    std::optional<unsigned> find(WindowId id) const {
        for (unsigned i = 0; i < slots.size(); ++i)
            if (slots[i].id == id)
                return i;
        return {};
    }
    WindowMetadata &get(WindowId id) {
        const auto index = find(id);
        require(bool(index), "Dialogue window is not open");
        return slots[*index];
    }
    void load_artwork(unsigned next) {
        require(!graphics, "Bound window graphics must be prepared and published by their owner");
        // Validate before replacing any live artwork.
        (void)resources->uses_flavoured_art(next);
        flavor = next;
        for (unsigned i = 0; i < borders.size(); ++i)
            borders[i]->pixels = resources->border(WindowBorder(i), flavor);
        for (unsigned frame = 0; frame < 4; ++frame)
            for (unsigned i = 0; i < 4; ++i)
                pagination_images[frame][i]->pixels = resources->pagination(frame, flavor)[i].pixels;
        for (unsigned i = 0; i < prompt_images.size(); ++i)
            prompt_images[i]->pixels = resources->prompt(i, flavor).pixels;
    }
    void reset_menu(WindowMetadata &slot) {
        if (slot.first_option == 0xffff)
            return;
        std::vector<unsigned> chain;
        std::optional<unsigned> next = slot.first_option;
        while (next) {
            require(*next < menu_options.size(), "Menu option is outside the source pool");
            require(std::find(chain.begin(), chain.end(), *next) == chain.end(),
                    "Source menu chain is cyclic");
            chain.push_back(*next);
            next = menu_options[*next].next;
        }
        for (auto option : chain)
            menu_options[option].flags = 0;
        slot.first_option = slot.last_option = slot.selected_option = 0xffff;
        slot.layout_columns = slot.page_number = 1;
    }
    void release_title(WindowMetadata &slot) {
        if (slot.title_owner)
            title_owners.at(*slot.title_owner).reset();
        slot.title_owner.reset();
    }
    WindowState inherited_registers() const {
        if (!japanese() || state.focus || state.windows.empty() || !state.unfocused_register_alias)
            return state.window();
        const auto delta = std::uint16_t(*state.ambient_lookup() * 76u);
        if (delta == std::uint16_t(0u - 76u) || (delta % 76 == 0 && delta / 76 < 8))
            return state.window();
        // GET_ACTIVE uses 16-bit arithmetic. CREATE reads the six registers
        // at offsets23..42 from that address before it allocates a window.
        // Read only the represented retained owners; no foreign register
        // bank or source processor pointer is synthesized.
        const auto address = std::uint16_t(0x89c2u + delta);
        const auto first = std::uint16_t(address + 23u);
        for(unsigned offset=0;offset<20;offset+=2) {
            const auto at=std::uint16_t(first+offset);
            require(ambient_fields.contains_word(at) ||
                    (ambient_animation && at>=0xc000 && unsigned(at)+2<=0xe000),
                    "Inherited window registers leave their actual retained owners");
        }
        auto word = [&](unsigned offset) {
            const auto address=std::uint16_t(first+offset);
            if(ambient_fields.contains_word(address))return ambient_fields.word(address);
            const auto bytes=*ambient_animation;
            const unsigned at=address-0xc000;
            return std::uint16_t(unsigned(bytes[at]) | unsigned(bytes[at+1]) << 8);
        };
        auto dword = [&](unsigned offset) {
            return std::uint32_t(word(offset)) | std::uint32_t(word(offset + 2)) << 16;
        };
        return {{dword(0), dword(4), word(8)}, {dword(10), dword(14), word(18)}};
    }
    bool open(WindowId id, TextOutput::Owner owner) {
        const auto &configuration = resources->configuration(id.value);
        // JP snapshots the previous active bank before allocation, including
        // reopening the focused window. US retains the destination slot bank.
        std::optional<WindowState> inherited;
        if (japanese())
            inherited = inherited_registers();
        auto index = find(id);
        if (!index) {
            for (unsigned i = 0; i < slots.size(); ++i)
                if (!slots[i].id) {
                    index = i;
                    break;
                }
            if (!index)
                return false;
        }
        auto &slot = slots[*index];
        if (slot.id)
            reset_menu(slot);
        else {
            state.windows.emplace(id, std::exchange(state.retired_window_banks[*index], {}));
            state.window_slots[*index] = id;
            slot.id = id;
            slot.rectangle = configuration;
            if (id.value == 10)
                order.insert(order.begin(), id);
            else
                order.push_back(id);
        }
        if (inherited)
            state.windows.at(id) = *inherited;
        state.focus = id;
        slot.number_padding = 128;
        slot.first_option = slot.last_option = slot.selected_option = 0xffff;
        slot.layout_columns = slot.page_number = 1;
        slot.cursor_callback.reset();
        release_title(slot);
        slot.title.clear();
        const auto &rectangle = slot.rectangle;
        TextStyle style;
        style.priority = false;
        output.reset_window(
            id, {std::uint16_t(rectangle.outer_width - 2), std::uint16_t(rectangle.outer_height - 2)}, style,
            {}, owner);
        output.set_front(order.back(), owner);
        output.mark_redraw(owner);
        return true;
    }
    bool close(WindowId id, TextOutput::Owner owner) {
        const auto index = find(id);
        if (!index)
            return false;
        auto &slot = slots[*index];
        reset_menu(slot);
        const auto &r = slot.rectangle;
        require(r.outer_x + r.outer_width <= 32 && r.outer_y + r.outer_height <= 28,
                "Window rectangle exceeds native scene");
        output.remove_window(id, *index, owner);
        if (state.focus == id)
            state.focus.reset();
        for (unsigned y = 0; y < r.outer_height; ++y)
            for (unsigned x = 0; x < r.outer_width; ++x)
                buffer[(r.outer_y + y) * 32 + r.outer_x + x] = {};
        release_title(slot);
        state.retired_window_banks[*index] = state.windows.extract(id).mapped();
        state.window_slots[*index].reset();
        slot.id.reset();
        order.erase(std::find(order.begin(), order.end(), id));
        output.set_front(order.empty() ? std::nullopt : std::optional(order.back()), owner);
        output.mark_redraw(owner);
        if (pagination == id)
            pagination.reset();
        return true;
    }
    void restore(const SavedWindowAttributes &saved, TextOutput::Owner owner) {
        if (!saved.id || !find(*saved.id))
            return;
        output.restore_window(*saved.id, saved.style, saved.cursor, owner);
        get(*saved.id).number_padding = saved.number_padding;
        state.focus = saved.id;
    }
    SceneCell border(WindowBorder kind, bool horizontal = false, bool vertical = false) const {
        TextStyle style;
        style.palette = 7;
        style.flip_horizontal = horizontal;
        style.flip_vertical = vertical;
        return {borders[unsigned(kind)], style, kind == WindowBorder::Corner};
    }
    void corner(unsigned position, bool horizontal, bool vertical) {
        const auto &prior = buffer.at(position);
        const bool plain =
            !prior.image || prior.zero_descriptor || (prior.ordinary_corner && prior.style.flip_horizontal == horizontal &&
                             prior.style.flip_vertical == vertical);
        buffer[position] =
            border(plain ? WindowBorder::Corner : WindowBorder::OverlapCorner, horizontal, vertical);
    }
    void draw(WindowId id) {
        const auto &slot = get(id);
        const auto &r = slot.rectangle;
        require(r.outer_x + r.outer_width <= 32 && r.outer_y + r.outer_height <= 28,
                "Window rectangle exceeds native scene");
        const unsigned width = r.outer_width - 2, height = r.outer_height - 2;
        const unsigned title_span =
            slot.title_owner
                ? (japanese() ? unsigned(slot.title.size()) : (6 * unsigned(slot.title.size()) + 7) / 8)
                : 0;
        const bool paginated = pagination == id && pagination_animation.has_value();
        const unsigned used = (slot.title_owner ? title_span + 2 : 0) + (paginated ? 4 : 0);
        require(used <= width, "Title and pagination exceed source window border width");
        auto at = r.outer_y * 32 + r.outer_x;
        corner(at++, false, false);
        if (slot.title_owner) {
            buffer[at++] = border(WindowBorder::TitleJoin);
            for (unsigned i = 0; i < title_span; ++i) {
                TextStyle style;
                buffer[at++] = {title_images.at(*slot.title_owner * 16 + i), style, false};
            }
            buffer[at++] = border(WindowBorder::TitleJoin, true);
        }
        for (unsigned i = used; i < width; ++i)
            buffer[at++] = border(WindowBorder::Horizontal);
        if (paginated) {
            const auto frame = *pagination_animation;
            const auto &decorations = resources->pagination(frame, flavor);
            for (unsigned i = 0; i < 4; ++i) {
                const auto &d = decorations[i];
                TextStyle style;
                style.palette = d.palette;
                style.priority = d.priority;
                style.flip_horizontal = d.flip_horizontal;
                style.flip_vertical = d.flip_vertical;
                buffer[at++] = {pagination_images[frame][i], style, false};
            }
        }
        corner(at, true, false);
        const auto cells = output.cells(id);
        require(cells.geometry.columns == width && cells.geometry.tile_rows == height,
                "Window text geometry differs from its frame");
        for (unsigned y = 0; y < height; ++y) {
            at = (r.outer_y + y + 1) * 32 + r.outer_x;
            buffer[at++] = border(WindowBorder::Vertical);
            for (unsigned x = 0; x < width; ++x) {
                const auto &source = cells.cells[y * width + x];
                auto style = source.style;
                // Source adds 0x2000 to the full cell descriptor. Carry out of
                // priority toggles H, then V, instead of simply setting priority.
                if (style.priority) {
                    style.priority = false;
                    if (style.flip_horizontal)
                        style.flip_vertical = !style.flip_vertical;
                    style.flip_horizontal = !style.flip_horizontal;
                } else
                    style.priority = true;
                buffer[at++] = {source.image, style, false};
            }
            buffer[at] = border(WindowBorder::Vertical, true);
        }
        at = (r.outer_y + height + 1) * 32 + r.outer_x;
        corner(at++, false, true);
        for (unsigned x = 0; x < width; ++x)
            buffer[at++] = border(WindowBorder::Horizontal, false, true);
        corner(at, true, true);
    }
};
struct WindowHost::Operation::Execution {
    WindowHost::Execution &host;
    WindowCommand command;
    TextOutput::Owner owner{};
    bool owns{}, done{}, success = true, allow_dummy_title{};
    enum class Stage {
        Start,
        CloseTick,
        CloseAllTick,
        ExtraTick,
        TitleWaitAgain,
        Finish
    } stage = Stage::Start;
    std::optional<WindowEffect> pending;
    Execution(WindowHost::Execution &h, WindowCommand c, TextOutput::Owner o, bool owns_activation)
        : host(h), command(std::move(c)), owner(o), owns(owns_activation) {}
    void ask(WindowEffectKind kind, Stage next) {
        pending = WindowEffect{kind};
        stage = next;
    }
    void finish() {
        if (owns)
            host.output.leave(owner);
        done = true;
    }
    void title() {
        require(command.id.has_value(), "A title requires a window ID");
        const auto physical = host.find(*command.id);
        require(physical || allow_dummy_title, "Dialogue window is not open");
        auto &slot = physical ? host.slots[*physical] : host.dummy;
        const unsigned capacity = host.japanese() ? 16 : 22;
        require(command.title_limit < capacity, "Title limit exceeds original record storage");
        auto end = std::find(command.title.begin(), command.title.end(), 0);
        auto length = std::min(std::size_t(command.title_limit), std::size_t(end - command.title.begin()));
        // Validate all data before replacing state or shared publication.
        if (host.japanese())
            for (unsigned i = 0; i < length; ++i)
                (void)host.resources->japanese_title_glyph(command.title[i]);
        slot.title.assign(command.title.begin(), command.title.begin() + length);
        if (!slot.title_owner)
            for (unsigned i = 0; i < host.title_owners.size(); ++i)
                if (!host.title_owners[i]) {
                    slot.title_owner = i;
                    // FFFF still means free in the title-owner table even
                    // though the no-slot record retains its chosen reservation.
                    host.title_owners[i] = physical;
                    break;
                }
        if (!slot.title_owner) {
            success = false;
            finish();
            return;
        }
        const unsigned offset = *slot.title_owner * 16;
        if (host.japanese()) {
            for (unsigned i = 0; i < length; ++i)
                host.title_images.at(offset + i)->pixels =
                    host.resources->japanese_title_glyph(slot.title[i]);
            finish();
        } else {
            const auto columns = host.output.compose_title(slot.title, owner);
            for (unsigned i = 0; i < columns.size(); ++i)
                host.title_images.at(offset + i)->pixels = columns[i];
            ask(WindowEffectKind::FrameWait, Stage::TitleWaitAgain);
        }
    }
    void begin() {
        switch (command.action) {
        case WindowAction::Open:
            require(command.id.has_value(), "Open requires a window ID");
            success = host.open(*command.id, owner);
            if (success)
                ask(WindowEffectKind::ClearPartyBlink, Stage::Finish);
            else
                finish();
            break;
        case WindowAction::Focus:
            if (command.id)
                (void)host.get(*command.id);
            host.state.focus = command.id;
            finish();
            break;
        case WindowAction::ClearFocus:
            if (host.state.focus)
                host.output.clear_window(*host.state.focus, owner);
            finish();
            break;
        case WindowAction::ResetMenu:
            if (host.state.focus) host.reset_menu(host.get(*host.state.focus));
            finish();
            break;
        case WindowAction::Close:
        case WindowAction::CloseFocus: {
            const auto id = command.action == WindowAction::CloseFocus ? host.state.focus : command.id;
            success = id && host.close(*id, owner);
            if (success && !host.japanese()) {
                if (!host.suppress_tick) {
                    host.output.policy().instant = false;
                    ask(WindowEffectKind::WindowTick, Stage::CloseTick);
                } else {
                    host.output.clear_indent(owner);
                    finish();
                }
            } else
                finish();
            break;
        }
        case WindowAction::CloseAll:
        case WindowAction::CloseAllAndHideMeters:
            if (!host.japanese())
                host.suppress_tick = true;
            while (!host.order.empty()) {
                host.close(host.order.back(), owner);
                if (!host.japanese())
                    host.output.clear_indent(owner);
            }
            if (!host.japanese()) {
                host.output.policy().instant = false;
                ask(WindowEffectKind::WindowTick, Stage::CloseAllTick);
            } else if (command.action == WindowAction::CloseAllAndHideMeters)
                ask(WindowEffectKind::HideMeters, Stage::ExtraTick);
            else
                finish();
            break;
        case WindowAction::Title:
            title();
            break;
        }
    }
    OutputProgress advance() {
        if (done)
            return OutputProgress::Complete;
        host.output.require_owner(owner);
        if (pending)
            return OutputProgress::Suspended;
        switch (stage) {
        case Stage::Start:
            begin();
            break;
        case Stage::CloseTick:
            host.output.policy().instant = false;
            host.output.clear_indent(owner);
            finish();
            break;
        case Stage::CloseAllTick:
            host.suppress_tick = false;
            host.output.reset_reusable_images(owner);
            if (command.action == WindowAction::CloseAllAndHideMeters)
                ask(WindowEffectKind::HideMeters, Stage::ExtraTick);
            else
                finish();
            break;
        case Stage::ExtraTick:
            // HIDE_HPPP_WINDOWS always dirties the window layer, including
            // when no party meters were present. Apply its window-owned tail
            // after the host hides meters and before CC18_04's final tick.
            host.output.mark_redraw(owner);
            ask(WindowEffectKind::WindowTick, Stage::Finish);
            break;
        case Stage::TitleWaitAgain:
            ask(WindowEffectKind::FrameWait, Stage::Finish);
            break;
        case Stage::Finish:
            finish();
            break;
        }
        return done ? OutputProgress::Complete : OutputProgress::Suspended;
    }
};
WindowHost::WindowHost(std::shared_ptr<const WindowResources> resources, State &state, TextOutput &output)
    : execution_(std::make_unique<Execution>(std::move(resources), state, output)) {}
WindowHost::~WindowHost() {lifetime_.reset();}
TextSubstitutions &WindowHost::substitutions() {
    if (!execution_->substitutions)
        execution_->substitutions.reset(new TextSubstitutions(*this));
    return *execution_->substitutions;
}
State &WindowHost::state() { return execution_->state; }
const WindowMetadata &WindowHost::dummy_window() const { return execution_->dummy; }
std::span<const std::uint8_t, 49> WindowHost::text_scratch() const { return execution_->temporary_text; }
std::array<std::uint8_t, 49> &WindowHost::temporary_text_buffer() { return execution_->temporary_text; }
void WindowHost::set_inventory_pagination(WindowId id, TextOutput::Owner owner) {
    auto &e = *execution_;
    e.output.require_owner(owner);
    (void)e.resources->configuration(id.value);
    // INVENTORY_GET_ITEM_NAME assigns the requested ID even after CREATE
    // fails. It does not change the current pagination animation frame.
    e.pagination = id;
}
std::unique_ptr<WindowHost::Operation> WindowHost::begin_inventory_title(WindowCommand command, TextOutput::Owner owner) {
    require(command.action == WindowAction::Title, "Inventory title requires a title command");
    auto operation = begin(std::move(command), owner, false);
    operation->execution_->allow_dummy_title = true;
    return operation;
}
TextOutput &WindowHost::output() { return execution_->output; }
void WindowHost::bind_menu_program(const Program &program) {
    auto &bound = execution_->menu_program;
    require(program.version() == version(), "Menu program and window pool must share a region");
    require(!bound || bound->shares_content_with(program),
            "Window menu pool must retain one imported program");
    if (!bound) bound = program;
}
GameVersion WindowHost::version() const { return execution_->resources->version(); }
bool WindowHost::uses(const WindowGraphics &graphics) const noexcept {
    return execution_->graphics.get() == &graphics;
}
void WindowHost::set_graphics(std::shared_ptr<WindowGraphics> graphics) {
    auto &e = *execution_;
    e.output.require_owner(0);
    require(graphics && graphics->bound_to(e.output) && graphics->version() == version(),
            "Window graphics must share this host's output and region");
    require(!e.graphics && e.order.empty(), "Bind window graphics before opening windows");
    graphics->bind_window_resources(e.resources);
    e.output.bind_graphics(graphics, 0);
    e.graphics = std::move(graphics);
    constexpr std::array<unsigned, 5> borders{0x10, 0x13, 0x11, 0x12, 0x16};
    for (unsigned i = 0; i < borders.size(); ++i)
        e.borders[i] = e.graphics->image(borders[i]);
    for (unsigned frame = 0; frame < 4; ++frame)
        for (unsigned i = 0; i < 4; ++i)
            e.pagination_images[frame][i] = e.graphics->image(e.resources->pagination(frame, e.flavor)[i].artwork_cell);
    for (unsigned i = 0; i < e.prompt_images.size(); ++i)
        e.prompt_images[i] = e.graphics->image(e.resources->prompt(i, e.flavor).artwork_cell);
    for (unsigned i = 0; i < e.title_images.size(); ++i)
        e.title_images[i] = e.graphics->image(0x2e0 + i);
}
WindowHost::Operation::Operation(std::unique_ptr<Operation::Execution> execution)
    : execution_(std::move(execution)) {}
WindowHost::Operation::~Operation() {
    if (!execution_->done)
        execution_->host.output.abandon(execution_->owner);
}
OutputProgress WindowHost::Operation::advance() { return execution_->advance(); }
const std::optional<WindowEffect> &WindowHost::Operation::effect() const { return execution_->pending; }
void WindowHost::Operation::respond() {
    execution_->host.output.require_owner(execution_->owner);
    require(bool(execution_->pending), "Window operation has no pending effect");
    execution_->pending.reset();
}
bool WindowHost::Operation::complete() const { return execution_->done; }
bool WindowHost::Operation::succeeded() const {
    require(complete(), "Window operation has not returned");
    return execution_->success;
}
std::unique_ptr<WindowHost::Operation> WindowHost::begin(WindowCommand command, TextOutput::Owner owner,
                                                         bool owns) {
    execution_->output.require_owner(owner);
    return std::unique_ptr<Operation>(
        new Operation(std::make_unique<Operation::Execution>(*execution_, std::move(command), owner, owns)));
}
std::unique_ptr<WindowHost::Operation> WindowHost::begin(WindowCommand command) {
    auto owner = execution_->output.enter();
    try {
        return begin(std::move(command), owner, true);
    } catch (...) {
        execution_->output.leave(owner);
        throw;
    }
}
TextOutput::Owner WindowHost::Operation::callback_owner(TextOutput &output) const {
    const auto &e = *execution_;
    require(&output == &e.host.output && e.pending && e.pending->kind == WindowEffectKind::WindowTick,
            "Nested dialogue requires a window operation's world callback");
    output.require_owner(e.owner);
    return e.owner;
}
std::unique_ptr<WindowHost::Operation> WindowHost::begin_nested(WindowCommand command, Conversation &parent) {
    require(parent.windows_ == this && parent.owner_ && parent.event_,
            "Nested window operation requires a suspended conversation in this host");
    auto owner = execution_->output.enter(parent.callback_owner(execution_->output));
    try {
        return begin(std::move(command), owner, true);
    } catch (...) {
        execution_->output.leave(owner);
        throw;
    }
}
std::unique_ptr<WindowHost::Operation> WindowHost::begin(const Request &request, TextOutput::Owner owner) {
    auto &e = *execution_;
    e.output.require_owner(owner);
    WindowCommand command;
    switch (request.kind) {
    case RequestKind::PositionText:
    case RequestKind::SetNumberPadding:
    case RequestKind::SetFont: {
        require(e.output.complete(), "Window field command requires idle text output");
        if (request.kind == RequestKind::PositionText) {
            require(request.text_position.has_value(), "Text position command has no coordinates");
            const auto position = *request.text_position;
            const bool pixels = version() == GameVersion::US && e.menu_state.force_left_alignment;
            position_source({std::uint16_t(pixels ? position.x >> 3 : position.x), position.y},
                            pixels ? position.x & 7 : 0, owner);
        } else if (request.kind == RequestKind::SetNumberPadding) {
            require(request.count <= 0xff, "Number padding command requires a byte");
            if (e.state.focus) e.get(*e.state.focus).number_padding = std::uint8_t(request.count);
        } else {
            require(request.count <= 1, "Authored font command requires normal or Saturn font");
            if (e.state.focus) {
                auto style = e.output.window(*e.state.focus).style;
                style.font = std::uint16_t(request.count);
                e.output.set_style(*e.state.focus, style);
            }
        }
        auto operation = begin({}, owner, false);
        operation->execution_->stage = Operation::Execution::Stage::Finish;
        return operation;
    }
    case RequestKind::OpenWindow:
        command.action = WindowAction::Open;
        command.id = WindowId{request.count};
        break;
    case RequestKind::FocusWindow:
        command.action = WindowAction::Focus;
        command.id = WindowId{request.count};
        break;
    case RequestKind::CloseWindow:
        command.action = WindowAction::CloseFocus;
        break;
    case RequestKind::CloseAllWindows:
        command.action = WindowAction::CloseAllAndHideMeters;
        break;
    case RequestKind::ClearWindow:
        command.action = WindowAction::ClearFocus;
        break;
    case RequestKind::ResetMenu:
        command.action = WindowAction::ResetMenu;
        break;
    case RequestKind::SaveWindowAttributes:
    case RequestKind::RestoreWindowAttributes: {
        auto &saved = e.state.streams.at(request.count).saved_window;
        if (request.kind == RequestKind::SaveWindowAttributes)
            saved = save_attributes();
        else if (saved)
            e.restore(*saved, owner);
        auto operation = begin({}, owner, false);
        operation->execution_->stage = Operation::Execution::Stage::Finish;
        return operation;
    }
    default:
        throw std::logic_error("Request is not a native window operation");
    }
    return begin(std::move(command), owner, false);
}
std::optional<unsigned> WindowHost::slot_for(WindowId id) const { return execution_->find(id); }
const WindowMetadata &WindowHost::slot(unsigned index) const { return execution_->slots.at(index); }
WindowMetadata &WindowHost::slot(unsigned index) { return execution_->slots.at(index); }
const OutputWindow &WindowHost::slot_output(unsigned index) const {
    return execution_->output.slot_output(index);
}
TextCellGrid WindowHost::slot_cells(unsigned index) const { return execution_->output.slot_cells(index); }
std::shared_ptr<const TextFrame> WindowHost::slot_frame(unsigned index) const {
    return execution_->output.slot_frame(index);
}
const OutputWindow &WindowHost::positioning_window() const {
    const auto &e = *execution_;
    if (e.state.focus) return e.output.window(*e.state.focus);
    const auto ambient = e.state.ambient_slot();
    require(ambient.has_value(),
            "Unfocused text layout requires the source ambient physical slot");
    return slot_output(*ambient);
}
void WindowHost::position_source(TextCursor cursor, unsigned fraction, TextOutput::Owner owner) {
    auto &e = *execution_;
    e.output.require_owner(owner);
    require(e.output.complete(), "Text positioning requires idle output");
    if (e.state.focus) {
        const auto index = e.find(*e.state.focus);
        require(index.has_value(), "Focused text positioning requires a live physical slot");
        e.output.position_slot(*index, cursor, fraction, owner);
        return;
    }
    const auto ambient = e.state.ambient_slot();
    require(ambient.has_value(),
            "Unfocused text positioning requires the source ambient physical slot");
    const auto index = *ambient;
    e.output.position_slot(index, cursor, fraction, owner);
}
WindowMetadata &WindowHost::metadata(WindowId id) { return execution_->get(id); }
std::array<WindowMenuOption, 70> &WindowHost::menu_options() { return execution_->menu_options; }
MenuState &WindowHost::menu_state() { return execution_->menu_state; }
PromptState &WindowHost::prompt_state() { return execution_->prompt_state; }
const PromptState &WindowHost::prompt_state() const { return execution_->prompt_state; }
std::span<const WindowId> WindowHost::draw_order() const { return execution_->order; }
SavedWindowAttributes WindowHost::save_attributes() const {
    SavedWindowAttributes result;
    result.id = execution_->state.focus;
    if (result.id) {
        const auto &source = execution_->output.window(*result.id);
        result.cursor = source.cursor;
        result.style = source.style;
        result.number_padding = execution_->get(*result.id).number_padding;
    }
    return result;
}
void WindowHost::save_context(TextOutput::Owner owner) {
    auto &e = *execution_;
    e.output.require_owner(owner);
    require(e.output.complete(), "Context save requires idle text output");
    // C20A20 writes only the ID when focus is absent; old payload survives.
    if (e.state.focus) e.context_backup = save_attributes();
    else e.context_backup.id.reset();
}
void WindowHost::restore_context(TextOutput::Owner owner) {
    auto &e = *execution_;
    e.output.require_owner(owner);
    require(e.output.complete(), "Context restore requires idle text output");
    e.restore(e.context_backup, owner);
}
WindowCommands &WindowHost::commands() {
    auto &e = *execution_;
    if (!e.commands) e.commands.reset(new WindowCommands(*this));
    return *e.commands;
}
TextAnimations &WindowHost::animations() {
    auto &e = *execution_;
    if (!e.animations) e.animations.reset(new TextAnimations(*this));
    return *e.animations;
}
bool &WindowHost::suppress_close_tick() { return execution_->suppress_tick; }
void WindowHost::set_pagination(std::optional<WindowId> id, std::optional<unsigned> frame) {
    if (id)
        (void)execution_->get(*id);
    require(!frame || *frame < 4, "Invalid pagination frame");
    execution_->pagination = id;
    execution_->pagination_animation = frame;
}
std::optional<WindowId> WindowHost::pagination_window() const { return execution_->pagination; }
std::optional<unsigned> WindowHost::pagination_frame() const { return execution_->pagination_animation; }
void WindowHost::draw_window(WindowId id) { execution_->draw(id); }
void WindowHost::draw_windows() {
    for (auto id : execution_->order)
        execution_->draw(id);
}
void WindowHost::draw_tick() {
    auto &e = *execution_;
    if (e.output.redraw_pending())
        for (auto id : e.order)
            e.draw(id);
    else if (!e.order.empty())
        e.draw(e.order.back());
    e.output.acknowledge_redraw();
}
void WindowHost::bind_ambient_register_source(std::span<const std::uint8_t, 65536> source) {
    auto &e = *execution_;
    e.output.require_owner(0);
    require(e.output.complete(), "Bind ambient registers only with idle text output");
    const unsigned offset = e.japanese() ? 0x8c24 : 0x88e2;
    const auto word = source.subspan(offset, 2);
    const auto &prior = e.state.unfocused_register_alias;
    require(!prior || prior->word.data() == word.data(),
            "Window host is bound to another ambient register source");
    e.state.unfocused_register_alias = State::RegisterAlias{
        std::span<const std::uint8_t, 2>(word.data(), 2), e.japanese() ? 76u : 82u};
}
void WindowHost::bind_ambient_animation_source(std::span<const std::uint8_t, 8192> source) {
    auto &e = *execution_;
    e.output.require_owner(0);
    require(e.output.complete(), "Bind ambient animation only with idle text output");
    require(!e.ambient_animation || e.ambient_animation->data() == source.data(),
            "Window host is bound to another animation staging owner");
    e.ambient_animation = source;
}
void WindowHost::bind_ambient_animation_layout(std::span<std::uint8_t, 8192> source) {
    auto &e = *execution_;
    e.output.require_owner(0);
    require(e.output.complete(), "Bind ambient layout only with idle text output");
    require(e.ambient_animation && e.ambient_animation->data() == source.data(),
            "Mutable ambient layout must share the actual animation source");
    require(!e.ambient_layout || e.ambient_layout->data() == source.data(),
            "Window host is bound to another mutable animation owner");
    e.ambient_layout = source;
}
void WindowHost::bind_ambient_party_trail(PartyTrail &trail) {
    auto &e=*execution_;
    e.output.require_owner(0);
    require(e.output.complete(), "Bind ambient follower layout only with idle text output");
    e.ambient_fields.bind(trail);
}
void WindowHost::bind_ambient_actor_variables_source(ambient::ActorVariables actors) {
    auto &e=*execution_;
    e.output.require_owner(0);
    require(e.output.complete(), "Bind ambient actor variables only with idle text output");
    e.ambient_fields.bind(actors);
}
WindowHost::CapturedArgument WindowHost::capture_argument() const {
    const auto &e=*execution_;
    CapturedArgument captured;captured.host_=this;
    if(e.state.windows.empty()) {
        captured.value_=e.state.dummy.active.argument;
        return captured;
    }
    std::optional<unsigned> slot;
    if(e.state.focus)slot=e.find(*e.state.focus);
    else if(!e.state.unfocused_register_alias)slot=e.state.ambient_slot();
    else {
        const auto stride=e.state.unfocused_register_alias->stride;
        const auto delta=std::uint16_t(*e.state.ambient_lookup()*stride);
        if(delta==std::uint16_t(0u-stride))slot=0xffff;
        else if(delta%stride==0&&delta/stride<8)slot=delta/stride;
        else {
            require(e.japanese(),"Captured foreign argument requires its regional retained owner");
            captured.kind_=CapturedArgument::Kind::Alias;
            captured.address_=std::uint16_t(0x89c2u+delta+27u);
            for(unsigned offset:{0u,2u}) {
                const auto at=std::uint16_t(captured.address_+offset);
                require(e.ambient_fields.contains_word(at) ||
                        (e.ambient_animation&&at>=0xc000&&unsigned(at)+2<=0xe000),
                        "Captured argument leaves its actual retained owners");
            }
            auto word=[&](unsigned offset) {
                const auto at=std::uint16_t(captured.address_+offset);
                if(e.ambient_fields.contains_word(at))return e.ambient_fields.word(at);
                const auto bytes=*e.ambient_animation;const unsigned index=at-0xc000;
                return std::uint16_t(unsigned(bytes[index])|unsigned(bytes[index+1])<<8);
            };
            captured.value_=std::uint32_t(word(0))|std::uint32_t(word(2))<<16;
            return captured;
        }
    }
    require(slot.has_value(),"Captured argument requires its actual active window address");
    if(*slot==0xffff)captured.value_=e.state.dummy.active.argument;
    else {
        captured.kind_=CapturedArgument::Kind::Slot;captured.slot_=*slot;
        captured.value_=e.state.registers_at(*slot).active.argument;
    }
    return captured;
}
void WindowHost::restore_argument(const CapturedArgument &captured) {
    auto &e=*execution_;
    require(captured.host_==this,"Captured argument belongs to another window host");
    if(captured.kind_==CapturedArgument::Kind::Dummy) {
        e.state.dummy.active.argument=captured.value_;return;
    }
    if(captured.kind_==CapturedArgument::Kind::Slot) {
        e.state.registers_at(captured.slot_).active.argument=captured.value_;return;
    }
    for(unsigned offset:{0u,2u}) {
        const auto at=std::uint16_t(captured.address_+offset);
        require(e.ambient_fields.contains_word(at) ||
                (e.ambient_layout&&at>=0xc000&&unsigned(at)+2<=0xe000),
                "Restored argument leaves its actual mutable owners");
    }
    auto store=[&](unsigned offset,std::uint16_t value) {
        const auto at=std::uint16_t(captured.address_+offset);
        if(e.ambient_fields.contains_word(at)){e.ambient_fields.store_word(at,value);return;}
        const auto bytes=*e.ambient_layout;const unsigned index=at-0xc000;
        bytes[index]=std::uint8_t(value);bytes[index+1]=std::uint8_t(value>>8);
    };
    // Original MOVE_INT_YPTRDEST stores the low word, then the high word.
    store(0,std::uint16_t(captured.value_));store(2,std::uint16_t(captured.value_>>16));
}
std::optional<std::uint16_t> WindowHost::aliased_text_x() const {
    const auto &e = *execution_;
    if (!e.japanese() || e.state.focus || !e.state.unfocused_register_alias)
        return std::nullopt;
    const auto delta = std::uint16_t(*e.state.ambient_lookup() * 76u);
    if (delta == std::uint16_t(0u - 76u) || (delta % 76 == 0 && delta / 76 < 8))
        return std::nullopt;
    // GET_TEXT_X does not use GET_ACTIVE's empty-window shortcut. Its
    // pointer and text_x field addition both wrap as 16-bit source words.
    const auto address = std::uint16_t(0x89c2u + delta + 14u);
    if(e.ambient_fields.contains_word(address))return e.ambient_fields.word(address);
    require(e.ambient_animation && address >= 0xc000 && unsigned(address) + 2 <= 0xe000,
            "Unfocused text X leaves its actual retained owners");
    const auto bytes = *e.ambient_animation;
    const unsigned at = address - 0xc000;
    return std::uint16_t(unsigned(bytes[at]) | unsigned(bytes[at + 1]) << 8);
}
void WindowHost::aliased_newline(TextOutput::Owner owner) {
    auto &e = *execution_;
    require(aliased_text_x().has_value(), "Aliased newline requires its actual layout owner");
    const auto delta = std::uint16_t(*e.state.ambient_lookup() * 76u);
    const auto base = std::uint16_t(0x89c2u + delta);
    auto address = [&](unsigned field) {
        const auto at = std::uint16_t(base + field);
        require(e.ambient_fields.contains_word(at) ||
                (e.ambient_layout && at >= 0xc000 && unsigned(at) + 2 <= 0xe000),
                "Aliased newline registers leave their actual retained owners");
        return at;
    };
    const auto height_at = address(12), x_at = address(14), y_at = address(16), font_at = address(21);
    auto word = [&](std::uint16_t at) {
        if(e.ambient_fields.contains_word(at))return e.ambient_fields.word(at);
        const auto bytes=*e.ambient_layout;
        const unsigned offset=at-0xc000;
        return std::uint16_t(unsigned(bytes[offset]) | unsigned(bytes[offset + 1]) << 8);
    };
    TextCursor cursor{word(x_at), word(y_at)};
    e.output.newline_without_scroll(word(font_at), word(height_at), cursor, owner);
    auto store = [&](std::uint16_t at, std::uint16_t value) {
        if(e.ambient_fields.contains_word(at)) {e.ambient_fields.store_word(at,value);return;}
        const auto bytes=*e.ambient_layout;
        const unsigned offset=at-0xc000;
        bytes[offset] = std::uint8_t(value);
        bytes[offset + 1] = std::uint8_t(value >> 8);
    };
    // Admission and composition reset precede the source-ordered writes to
    // actual owners: increment text_y, then clear text_x.
    store(y_at, cursor.line);
    store(x_at, cursor.column);
}

void WindowHost::bind_party(const party::State &state) {
    auto &e = *execution_;
    require(state.version() == version(), "Party and dialogue owners must share a region");
    require(!e.party || e.party == &state, "Window host is already bound to another party owner");
    e.party = &state;
}
void WindowHost::bind_prepared_message(PreparedMessage &state) {
    auto &e = *execution_;
    e.output.require_owner(0);
    require(e.output.complete(), "Bind prepared messages only with idle text output");
    require(state.version() == version(), "Prepared message and dialogue regions differ");
    require(!e.prepared || e.prepared == &state, "Window host is bound to another prepared-message owner");
    e.prepared = &state;
}
PreparedMessage *WindowHost::prepared_message() const { return execution_->prepared; }
void WindowHost::bind_battle(const battle::Roster& roster, const battle::ActionState& action) {
    auto& e = *execution_;
    e.output.require_owner(0);
    require(e.output.complete(), "Bind battle queries only with idle text output");
    require(roster.version() == version() && e.party, "Battle queries require the actual regional party");
    require((!e.roster || e.roster == &roster) && (!e.action || e.action == &action),
            "Window host has different battle owners");
    e.roster = &roster;
    e.action = &action;
}
std::optional<std::span<const std::uint8_t,14>> WindowHost::attacker_inventory() const {
    const auto& e=*execution_;
    if(!e.roster || !e.action || !e.party)return {};
    require(e.action->attacker.has_value(),"Item query has no admitted current attacker");
    return std::span<const std::uint8_t,14>(e.party->character(e.roster->at(*e.action->attacker).id).items);
}
std::optional<std::uint16_t> WindowHost::query_battle(const BattleGrammarRequest& request) const {
    const auto& e = *execution_;
    if (!e.roster || !e.action) return {};
    return battle::grammar(*e.roster, *e.party, *e.action, request.target, request.operand);
}
std::optional<std::uint16_t> WindowHost::query_party(const PartyQueryRequest &request) const {
    const auto *state = execution_->party;
    if (!state) return {};
    const party::Queries query(*state);
    switch (request.kind) {
    case PartyQueryKind::DisplayCharacter: return query.display_character(request.position);
    case PartyQueryKind::Status: return query.status(request.character,request.group);
    case PartyQueryKind::ControlledCount: return query.controlled_count();
    case PartyQueryKind::FirstConscious: return query.first_conscious();
    case PartyQueryKind::ConsciousCount: return query.conscious_count();
    case PartyQueryKind::InventoryItem: return query.inventory_item(request.character,request.position);
    case PartyQueryKind::FewerControlledThan: return std::uint32_t(query.controlled_count()) < request.amount ? 1 : 0;
    case PartyQueryKind::StatusEquals:
        return std::uint16_t(query.status(request.character,request.group) == request.expected_status);
    }
    throw std::logic_error("Invalid native dialogue party query");
}
void WindowHost::save_text_context() { save_context(0); }
void WindowHost::restore_text_context() { restore_context(0); }
void WindowHost::request_redraw() { execution_->output.request_host_redraw(); }
void WindowHost::bind_source_text_tiles(cutscenes::DisplayState &owner) {
    auto &e=*execution_;
    require(!e.source_lease && (!e.text_tiles || e.text_tiles==&owner),
        "Window BG2 binding requires its same idle actual owner");
    e.text_tiles=&owner;e.text_lifetime=owner.source_lifetime();
}
void WindowHost::validate_source_publication(const void *lease) const {
    const auto &e=*execution_;
    require(e.text_tiles && !e.text_lifetime.expired(),"Source window publication lost its actual BG2 owner");
    require(!e.source_lease || e.source_lease==lease,"Another source helper owns the window publication");
    require(e.order.empty() && e.state.windows.empty() && e.output.complete() && e.publications.empty(),
        "Source window publication has unrepresented open, glyph or queued composition work");
    for(const auto &slot:e.slots)require(!slot.id,"Source window publication has an open physical slot");
    require(!e.graphics || !e.graphics->pending_publications(),
        "Source window publication has unrepresented glyph artwork publication");
    // Resolve every retained descriptor before effects, through the one live
    // atlas. A nonzero raw component input is allowed; its producer is excluded.
    for(unsigned i=0;i<896;++i) {
        const auto word=std::uint16_t(e.text_tiles->text_tiles[i*2] | (unsigned(e.text_tiles->text_tiles[i*2+1])<<8));
        if(e.graphics)(void)e.graphics->image(word&0x3ff);
        else require(!word,"Nonzero BG2 descriptors require their actual shared artwork owner");
    }
    (void)e.resources->fixed_tail(e.flavor);
}
void WindowHost::validate_source_meter_tiles(const void *lease) const {
    const auto &e=*execution_;
    if(!lease) {
        validate_source_publication(nullptr);
        require(e.graphics!=nullptr,"Source meter artwork requires the actual shared atlas");
        for(unsigned i=0;i<1024;++i)(void)e.graphics->image(i);
        return;
    }
    require(e.text_tiles&&!e.text_lifetime.expired()&&e.source_lease==lease&&e.graphics&&
        e.order.empty()&&e.state.windows.empty()&&e.output.complete()&&e.publications.empty()&&
        !e.graphics->pending_publications(),"Source meter artwork lost its exact closed BG2/artwork lease");
    for(const auto &slot:e.slots)require(!slot.id,"Source meter artwork has an open physical slot");
}
void WindowHost::store_source_meter_descriptor(unsigned byte_offset,std::uint16_t word) {
    auto &e=*execution_;
    require(e.text_tiles&&!e.text_lifetime.expired()&&e.source_lease&&!(byte_offset&1)&&byte_offset+1<1792,
        "Source meter descriptor left the claimed BG2 scene owner");
    ArtworkCellReference cell;cell.artwork_cell=word&0x3ff;cell.style.palette=(word>>10)&7;
    cell.style.priority=(word&0x2000)!=0;cell.style.flip_horizontal=(word&0x4000)!=0;cell.style.flip_vertical=(word&0x8000)!=0;
    auto resolved=e.meter_cell(cell);
    e.text_tiles->text_tiles[byte_offset]=std::uint8_t(word);
    e.text_tiles->text_tiles[byte_offset+1]=std::uint8_t(word>>8);
    e.buffer[byte_offset/2]=std::move(resolved);
}
void WindowHost::claim_source_publication(const void *lease) {
    validate_source_publication(lease);
    require(!execution_->source_lease,"Source window publication was already claimed");
    execution_->source_lease=lease;
}
void WindowHost::release_source_publication(const void *lease) noexcept {
    if(execution_->source_lease==lease)execution_->source_lease=nullptr;
}
void WindowHost::initialize_cold_text_tiles() {
    auto &e=*execution_;
    require(e.text_tiles&&!e.text_lifetime.expired()&&!e.source_lease&&e.order.empty()&&
        e.state.windows.empty()&&e.output.complete()&&e.publications.empty(),
        "Cold BG2 initialization requires its actual idle retained owner");
    for(unsigned word=0;word<896;++word) {
        e.text_tiles->text_tiles[word*2]=0;
        e.text_tiles->text_tiles[word*2+1]=0;
    }
}
std::span<const std::uint8_t,2048> WindowHost::source_text_tiles() const {
    require(execution_->text_tiles&&!execution_->text_lifetime.expired(),"Source BG2 owner expired");
    return execution_->text_tiles->text_tiles;
}
std::span<const std::uint8_t,64> WindowHost::source_tail() const {return execution_->resources->raw_fixed_tail();}
std::uint32_t WindowHost::source_text_identity() const {return version()==GameVersion::US?0x7e7dfeu:0x7e8176u;}
std::uint32_t WindowHost::source_tail_identity() const {return execution_->resources->raw_fixed_tail_identity();}
std::uint64_t WindowHost::source_scene_publications() const {return execution_->source_scene_count;}
std::uint64_t WindowHost::source_tail_publications() const {return execution_->source_tail_count;}
void WindowHost::publish_source_scene() {
    auto &e=*execution_;const auto raw=source_text_tiles();Scene resolved{};
    for(unsigned i=0;i<resolved.size();++i) {
        const auto word=std::uint16_t(raw[i*2] | (unsigned(raw[i*2+1])<<8));
        auto &cell=resolved[i];
        if(e.graphics)cell.image=e.graphics->image(word&0x3ff);
        cell.style.palette=(word>>10)&7;cell.style.priority=(word&0x2000)!=0;
        cell.style.flip_horizontal=(word&0x4000)!=0;cell.style.flip_vertical=(word&0x8000)!=0;
        cell.zero_descriptor=!word;
    }
    e.published=std::move(resolved);++e.source_scene_count;
}
void WindowHost::publish_tail() {
    auto &e=*execution_;
    std::array<SceneCell, 32> resolved{};
    const auto &tail = e.resources->fixed_tail(e.flavor);
    for (unsigned i = 0; i < tail.size(); ++i) {
        const auto &from = tail[i];
        auto image = e.graphics ? e.graphics->image(from.artwork_cell) : std::make_shared<TextImage>();
        if (!e.graphics) image->pixels = from.pixels;
        TextStyle style;
        style.palette = from.palette;
        style.priority = from.priority;
        style.flip_horizontal = from.flip_horizontal;
        style.flip_vertical = from.flip_vertical;
        resolved[i] = {std::move(image), style, false};
    }
    e.published_tail = std::move(resolved);
}
void WindowHost::publish_source_tail() {publish_tail();++execution_->source_tail_count;}
void WindowHost::publish_scene() { execution_->published = execution_->buffer; }
void WindowHost::clear_auto_fight_indicator() {
    auto &e = *execution_;
    SceneCell blank;
    blank.style.priority = false;
    blank.zero_descriptor = true;
    // Descriptor zero continues to reference live atlas cell0 when graphics
    // are bound, just as other shared meter/window cells do.
    if (e.graphics) blank.image = e.graphics->image(0);
    std::fill_n(e.buffer.begin() + 18 * 32 - 6, 4, blank);
}
void WindowHost::stage_auto_fight_indicator(std::span<const std::uint16_t,4> words) {
    std::array<ArtworkCellReference,4> cells{};
    for(unsigned i=0;i<4;++i) {
        const auto word=words[i];auto& c=cells[i];c.artwork_cell=word&0x3ff;
        c.style.palette=(word>>10)&7;c.style.priority=(word&0x2000)!=0;
        c.style.flip_horizontal=(word&0x4000)!=0;c.style.flip_vertical=(word&0x8000)!=0;
    }
    execution_->meter_row(execution_->buffer,18*32-6,cells);
}
void WindowHost::publish_meter_area() {
    auto &e = *execution_;
    std::copy_n(e.buffer.begin() + 18 * 32, 9 * 32, e.published.begin() + 18 * 32);
}
void WindowHost::queue_scene() {
    require(!execution_->source_lease,"Source window work owns the actual BG2 staging surface");
    execution_->publications.push_back({Execution::Publication::Kind::Scene, 0, 0, {}});
    execution_->publications.push_back({Execution::Publication::Kind::Tail, 0, 0, {}});
}
void WindowHost::queue_meter_area() {
    require(!execution_->source_lease,"Source window work owns the actual BG2 staging surface");
    execution_->publications.push_back({Execution::Publication::Kind::MeterArea, 0, 0, {}});
}
void WindowHost::queue_meter_row(unsigned first,
    std::shared_ptr<const std::array<ArtworkCellReference, 12>> cells, unsigned offset) {
    require(!execution_->source_lease,"Source window work owns the actual BG2 staging surface");
    require(cells && offset <= 9 && first <= 32 * 28 - 3, "Invalid queued meter strip");
    execution_->publications.push_back({Execution::Publication::Kind::MeterRow, first, offset, std::move(cells)});
}
bool WindowHost::publish_next() {
    auto &e = *execution_;
    if (e.publications.empty()) return false;
    const auto &next = e.publications.front();
    switch (next.kind) {
    case Execution::Publication::Kind::Scene: publish_scene(); break;
    case Execution::Publication::Kind::Tail: publish_tail(); break;
    case Execution::Publication::Kind::MeterArea: publish_meter_area(); break;
    case Execution::Publication::Kind::MeterRow:
        publish_meter_row(next.first, std::span<const ArtworkCellReference>(*next.meter).subspan(next.offset, 3));
        break;
    }
    e.publications.pop_front();
    return true;
}
unsigned WindowHost::pending_publications() const { return unsigned(execution_->publications.size()); }
void WindowHost::stage_meter_row(unsigned first, std::span<const ArtworkCellReference> cells) {
    require(!execution_->source_lease,"Source window work owns the actual BG2 staging surface");
    execution_->meter_row(execution_->buffer, first, cells);
}
void WindowHost::publish_meter_row(unsigned first, std::span<const ArtworkCellReference> cells) {
    execution_->meter_row(execution_->published, first, cells);
}
void WindowHost::clear_meter_rect(unsigned first, unsigned width, unsigned height) {
    require(width <= 32 && first <= 32 * 28 &&
            (!height || ((height - 1) <= (32 * 28 - first) / 32 &&
                         width <= 32 * 28 - first - (height - 1) * 32)),
            "Meter rectangle leaves the shared window surface");
    std::array<ArtworkCellReference, 32> zero{};
    for (auto &cell : zero) cell.style.priority = false;
    for (unsigned row = 0; row < height; ++row)
        stage_meter_row(first + row * 32, std::span<const ArtworkCellReference>(zero).first(width));
}
void WindowHost::request_meter_redraw() { execution_->output.request_host_redraw(); }
void WindowHost::publish_menu_blink(unsigned x, unsigned y,
                                  const std::array<WindowDecoration, 2> &decorations) {
    require(x < 32 && y + 1 < 28, "Selection blink exceeds the native scene");
    for (unsigned i = 0; i < decorations.size(); ++i) {
        const auto &from = decorations[i];
        auto image = execution_->graphics ? execution_->graphics->image(from.artwork_cell) :
                                           std::make_shared<TextImage>();
        if (!execution_->graphics)
            image->pixels = from.pixels;
        TextStyle style;
        style.palette = from.palette;
        style.priority = from.priority;
        style.flip_horizontal = from.flip_horizontal;
        style.flip_vertical = from.flip_vertical;
        execution_->published[(y + i) * 32 + x] = {std::move(image), style, false};
    }
}
void WindowHost::publish_prompt(unsigned slot_index, unsigned phase) {
    const auto &rectangle = slot(slot_index).rectangle;
    const auto geometry = slot_output(slot_index).geometry;
    const auto x = std::uint16_t(rectangle.outer_x + geometry.columns);
    const auto y = std::uint16_t(rectangle.outer_y + geometry.tile_rows + 1);
    require(x < 32 && y < 28, "Prompt exceeds the native scene");
    const auto &from = execution_->resources->prompt(phase, execution_->flavor);
    auto image = execution_->prompt_images.at(phase);
    TextStyle style;
    style.palette = from.palette;
    style.priority = from.priority;
    style.flip_horizontal = from.flip_horizontal;
    style.flip_vertical = from.flip_vertical;
    execution_->published[y * 32 + x] = {std::move(image), style, false};
}
std::shared_ptr<const TextFrame> WindowHost::scene() const { return sample(execution_->buffer); }
std::shared_ptr<const TextFrame> WindowHost::frame() const { return sample(execution_->published); }
std::shared_ptr<const TextFrame> WindowHost::tail_frame() const { return sample(execution_->published_tail); }
std::shared_ptr<const TextFrame> WindowHost::full_frame() const {
    std::array<SceneCell, 32 * 32> cells;
    const auto &e = *execution_;
    auto at = std::copy(e.published.begin(), e.published.end(), cells.begin());
    at = std::copy(e.published_tail.begin(), e.published_tail.end(), at);
    std::copy(e.published_lower.begin(), e.published_lower.end(), at);
    return sample(cells);
}
void WindowHost::restore_lower_rows(std::span<const ArtworkCellReference, 96> rows) {
    auto &e = *execution_;
    std::array<SceneCell, 96> resolved;
    for (unsigned i = 0; i < rows.size(); ++i) resolved[i] = e.meter_cell(rows[i]);
    e.published_lower = std::move(resolved);
}
void WindowHost::clear_published_tilemap() {
    auto &e = *execution_;
    const auto blank = e.meter_cell(ArtworkCellReference{});
    e.published.fill(blank);
    e.published_tail.fill(blank);
    e.published_lower.fill(blank);
}
void WindowHost::load_artwork(unsigned flavor) { execution_->load_artwork(flavor); }
void WindowHost::bind_palette_publication(WindowPalettePublication &publisher) {
    require(!execution_->source_lease,"Source window work owns the actual palette publisher");
    require(!execution_->palette_publication || execution_->palette_publication == &publisher,
            "Window palette already has another publication owner");
    execution_->palette_publication = &publisher;
    execution_->palette_publication_lifetime=publisher.source_lifetime();
}
WindowPalettePublication *WindowHost::palette_publication() const noexcept {
    return execution_->palette_publication;
}
void WindowHost::replace_palette_publication(const WindowPalettePublication &expected,
                                              WindowPalettePublication &next) {
    require(!execution_->source_lease,"Source window work owns the actual palette publisher");
    require(execution_->palette_publication == &expected,
            "Window palette handoff lost its expected publication owner");
    execution_->palette_publication = &next;
    execution_->palette_publication_lifetime=next.source_lifetime();
}
void WindowHost::clear_palette_publication(const WindowPalettePublication &publisher) noexcept {
    if (execution_->palette_publication == &publisher) execution_->palette_publication = nullptr;
}
void WindowHost::publish_palette(unsigned flavor, bool incapacitated, bool disabled) {
    require(!execution_->source_lease,"Source window work owns the actual palette staging surface");
    require(!execution_->palette_publication||!execution_->palette_publication_lifetime.expired(),"Window palette publisher expired");
    const auto colors = execution_->resources->palette(flavor, incapacitated, disabled);
    if (execution_->palette_publication) execution_->palette_publication->publish_window_range(0, colors, WindowPaletteUpload::Background);
    execution_->colors = colors;
}
void WindowHost::animate_palette(unsigned flavor, std::uint64_t frame) {
    require(!execution_->source_lease,"Source window work owns the actual palette staging surface");
    require(!execution_->palette_publication||!execution_->palette_publication_lifetime.expired(),"Window palette publisher expired");
    const auto &colors = execution_->resources->animated_palette5(flavor, frame);
    if (execution_->palette_publication) execution_->palette_publication->publish_window_range(20, colors, WindowPaletteUpload::Full);
    std::copy(colors.begin(), colors.end(), execution_->colors.begin() + 20);
}
std::shared_ptr<const WindowResources> WindowHost::source_palette_resources() const {return execution_->resources;}
void WindowHost::validate_source_palette(const void *lease,const WindowPalettePublication &publisher,
    const battle::PaletteBankState &palette) const {
    const auto &e=*execution_;
    require(e.palette_publication==&publisher&&!e.palette_publication_lifetime.expired(),
        "Source window palette lost its actual live publisher");
    require(publisher.uses_palette_transport(palette),"Source window palette has a foreign raw transport");
    require(e.source_lease==lease,"Another source helper owns the window publication");
    require(e.order.empty()&&e.state.windows.empty()&&e.output.complete()&&e.publications.empty(),
        "Source window palette has unrepresented open/glyph/queued work");
    for(const auto &slot:e.slots)require(!slot.id,"Source window palette has an open physical slot");
    require(!e.graphics||!e.graphics->pending_publications(),"Source window palette has queued glyph artwork");
}
void WindowHost::claim_source_palette(const void *lease,const WindowPalettePublication &publisher,
    const battle::PaletteBankState &palette) {
    require(lease,"Source window palette claim is empty");validate_source_palette(nullptr,publisher,palette);
    require(!execution_->source_lease,"Source window palette was already claimed");execution_->source_lease=lease;
}
void WindowHost::store_source_palette_word(unsigned index,std::uint16_t value,battle::PaletteBankState &palette,const void *lease) {
    auto &e=*execution_;
    require(lease&&e.source_lease==lease&&index<32&&e.palette_publication&&!e.palette_publication_lifetime.expired(),
        "Source window palette store lost its exact live publisher/lease");
    e.palette_publication->store_source_window_color(index,value,palette,lease);e.colors[index]=value;
}
const std::array<std::uint16_t, 32> &WindowHost::palette() const { return execution_->colors; }
} // namespace eb::native::dialogue
