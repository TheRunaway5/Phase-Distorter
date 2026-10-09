// src/system/load_window_gfx{,-jp}.asm and src/unknown/C4/C44963.asm.
// Indexed artwork composition is native; the outer video host services the
// ordered copy/transfer effects, including any original transfer waits.
#include "eb/native/dialogue/window_graphics.hpp"
#include "eb/native/dialogue/conversation.hpp"
#include <algorithm>
#include <deque>
#include <stdexcept>

namespace eb::native::dialogue {
namespace {
void require(bool condition, const char *message) {
    if (!condition)
        throw std::invalid_argument(message);
}
constexpr unsigned retained_cells = 1184, published_cells = 1024;
constexpr unsigned names_begin = 0x2a0, status_begin = 0x2c0;
struct CellRange {
    unsigned first{}, count{};
};
constexpr std::array<CellRange, 6> common_ranges{{
    {0, 0x45}, {0x4f, 6}, {0x5f, 0xb}, {0x70, 0xa}, {0x80, 1}, {0x90, 1}}};
constexpr CellRange generated_range{0x200, 0x180};
unsigned glyph_cell(std::uint16_t character) {
    // The source's 16-bit offset arithmetic precedes its long pointer add.
    return (((unsigned(character) & 0xfff0) + character) & 0xfff);
}
std::uint8_t backed(std::uint8_t glyph, std::uint8_t background) {
    const auto ink = glyph & 2;
    return std::uint8_t(ink | (background & 1) | (ink ? 0 : 1));
}
} // namespace

struct WindowGraphics::Execution {
    std::shared_ptr<const WindowInitializationResources> resources;
    std::shared_ptr<const WindowResources> window_resources;
    TextOutput &output;
    std::array<WindowArtwork, retained_cells> staged{};
    std::array<std::shared_ptr<TextImage>, published_cells> published;
    std::array<std::vector<std::weak_ptr<TextImage>>, published_cells> subscribers;
    std::array<unsigned, published_cells> binding_counts{};
    std::deque<CellRange> pending;

    Execution(std::shared_ptr<const WindowInitializationResources> r, TextOutput &o,
              std::span<const WindowArtwork> retained) : resources(std::move(r)), output(o) {
        require(resources && resources->version() == output.version(),
                "Window initialization and output must share a region");
        output.require_owner(0);
        require(output.complete(), "Window graphics requires idle output");
        require(retained.empty() || retained.size() == staged.size(),
                "Retained window artwork must contain exactly 1184 cells");
        for (const auto &cell : retained)
            require(std::all_of(cell.begin(), cell.end(), [](auto pixel) { return pixel <= 3; }),
                    "Window artwork must contain two-bit palette indices");
        std::copy(retained.begin(), retained.end(), staged.begin());
        for (auto &cell : published)
            cell = std::make_shared<TextImage>();
    }
    void publish(CellRange range) {
        for (unsigned i = range.first; i < range.first + range.count; ++i) {
            published[i]->pixels = staged[i];
            auto &listeners = subscribers[i];
            std::erase_if(listeners, [&](const auto &weak) {
                if (auto image = weak.lock()) {
                    image->pixels = staged[i];
                    return false;
                }
                return true;
            });
        }
    }
    void glyph(unsigned from, unsigned to) {
        // Keep upper/lower writes in source row order: a subsequent glyph
        // may itself read an earlier generated cell from retained staging.
        for (unsigned row = 0; row < 8; ++row) {
            for (unsigned x = 0; x < 8; ++x) {
                const unsigned at = row * 8 + x;
                staged[to][at] = backed(staged[from][at], staged[7][at]);
            }
            for (unsigned x = 0; x < 8; ++x) {
                const unsigned at = row * 8 + x;
                staged[to + 16][at] = backed(staged[from + 16][at], staged[23][at]);
            }
        }
    }
    std::shared_ptr<const TextFrame> sample(unsigned first, unsigned columns, unsigned rows,
                                           unsigned stride, bool prepared) const {
        auto result = std::make_shared<TextFrame>();
        result->width = columns * 8;
        result->height = rows * 8;
        result->pixels.resize(result->width * result->height);
        result->priority.resize(result->pixels.size());
        for (unsigned y = 0; y < rows; ++y)
            for (unsigned x = 0; x < columns; ++x) {
                const unsigned index = first + y * stride + x;
                const auto &cell = prepared ? staged.at(index) : published.at(index)->pixels;
                for (unsigned row = 0; row < 8; ++row)
                    std::copy_n(cell.begin() + row * 8, 8,
                                result->pixels.begin() + (y * 8 + row) * result->width + x * 8);
            }
        return result;
    }
};

struct WindowGraphics::Operation::Execution {
    WindowGraphics::Execution &graphics;
    TextOutput::Owner owner{};
    ArtworkDelivery delivery{};
    std::vector<CellRange> ranges;
    unsigned next{};
    std::optional<ArtworkEffect> effect;
    bool done{};
    Execution(WindowGraphics::Execution &g, TextOutput::Owner o, ArtworkPublication plan,
              ArtworkDelivery d) : graphics(g), owner(o), delivery(d) {
        require(d == ArtworkDelivery::Copy || d == ArtworkDelivery::Synchronized,
                "Invalid artwork delivery");
        if (plan == ArtworkPublication::None)
            return;
        if (plan == ArtworkPublication::All) {
            require(g.resources->version() == GameVersion::JP,
                    "Complete contiguous artwork publication is JP-only");
            append({0, 0x380});
            return;
        }
        require(g.resources->version() == GameVersion::US,
                "Segmented artwork publication is US-only");
        require(plan == ArtworkPublication::Common || plan == ArtworkPublication::GeneratedThenCommon ||
                    plan == ArtworkPublication::CommonThenGenerated, "Invalid artwork publication");
        if (plan == ArtworkPublication::GeneratedThenCommon)
            append(generated_range);
        for (const auto range : common_ranges)
            append(range);
        if (plan == ArtworkPublication::CommonThenGenerated)
            append(generated_range);
    }
    void append(CellRange range) {
        // TRANSFER_TO_VRAM splits even immediate forced-blank publications.
        const auto limit = delivery == ArtworkDelivery::Synchronized ? 0x120u : range.count;
        while (range.count) {
            const auto count = std::min(range.count, limit);
            ranges.push_back({range.first, count});
            range.first += count;
            range.count -= count;
        }
    }
};

WindowGraphics::WindowGraphics(std::shared_ptr<const WindowInitializationResources> resources,
                               TextOutput &output, std::span<const WindowArtwork> retained)
    : execution_(std::make_unique<Execution>(std::move(resources), output, retained)) {}
WindowGraphics::~WindowGraphics() = default;
GameVersion WindowGraphics::version() const { return execution_->resources->version(); }
bool WindowGraphics::bound_to(const TextOutput &output) const { return &execution_->output == &output; }
void WindowGraphics::bind_window_resources(std::shared_ptr<const WindowResources> resources) {
    require(resources && resources->version() == version() && !execution_->window_resources,
            "Window graphics requires one regional window resource owner");
    execution_->window_resources = std::move(resources);
}
std::span<const std::uint8_t, 64> WindowGraphics::raw_fixed_tail() const {
    require(bool(execution_->window_resources), "Fixed window transfer requires bound window resources");
    return execution_->window_resources->raw_fixed_tail();
}
std::uint32_t WindowGraphics::raw_fixed_tail_identity() const {
    require(bool(execution_->window_resources), "Fixed window transfer requires bound window resources");
    return execution_->window_resources->raw_fixed_tail_identity();
}

void WindowGraphics::retain_prepared_artwork(unsigned first,
                                              std::span<const WindowArtwork> artwork) {
    retain_prepared_artwork(first, artwork, TextOutput::Owner{0});
}
void WindowGraphics::retain_prepared_artwork(unsigned first,
                                              std::span<const WindowArtwork> artwork,
                                              Conversation &parent) {
    const auto &event = parent.event();
    const auto *request = event ? std::get_if<Request>(&*event) : nullptr;
    require(request && (request->kind == RequestKind::Teleport ||
                (request->kind == RequestKind::SpecialEvent && request->special_event &&
                     (*request->special_event==1 || *request->special_event==2 ||
                      *request->special_event==7 || *request->special_event==9 || *request->special_event==11 ||
                      *request->special_event==12 || *request->special_event==16))),
            "Nested map artwork requires its actual suspended teleport or town-map conversation");
    retain_prepared_artwork(first, artwork, parent.callback_owner(execution_->output));
}
void WindowGraphics::retain_prepared_artwork(unsigned first,
                                              std::span<const WindowArtwork> artwork,
                                              TextOutput::Owner owner) {
    auto &e = *execution_;
    e.output.require_owner(owner);
    require(e.pending.empty() && first <= e.staged.size() &&
                artwork.size() <= e.staged.size() - first,
            "Retained window artwork requires an idle bounded staging range");
    for (const auto &cell : artwork)
        require(std::all_of(cell.begin(), cell.end(), [](auto value) { return value <= 3; }),
                "Retained window artwork must use two-bit native pixels");
    std::copy(artwork.begin(), artwork.end(), e.staged.begin() + first);
}
void WindowGraphics::prepare(const PartyNameInputs &inputs, unsigned flavor, TextOutput::Owner parent) {
    auto &output = execution_->output;
    const auto owner = output.enter(parent);
    try {
        prepare_owned(inputs, flavor, owner);
    } catch (...) {
        output.leave(owner);
        throw;
    }
    output.leave(owner);
}
void WindowGraphics::prepare_owned(const PartyNameInputs &inputs, unsigned flavor, TextOutput::Owner owner) {
    auto &e = *execution_;
    e.output.require_owner(owner);
    const bool patch = e.resources->uses_flavoured_art(flavor);
    // Validate every bounded input before touching shared brush or artwork.
    for (const auto name : inputs.names) {
        if (version() == GameVersion::US)
            require(std::find(name.begin(), name.end(), 0) != name.end(),
                    "US party name needs its original zero terminator");
        else
            require(name.size() >= 4, "JP party names require four raw characters");
    }
    unsigned status_count = 0;
    for (auto character : e.resources->status_characters()) {
        if (character == 32)
            continue;
        require(glyph_cell(character) + 16 < retained_cells,
                "Status glyph leaves retained window artwork");
        ++status_count;
    }
    require(status_begin + status_count + 16 <= retained_cells,
            "Status text leaves retained window artwork");
    std::copy(e.resources->base_artwork().begin(), e.resources->base_artwork().end(), e.staged.begin());
    if (version() == GameVersion::US) {
        // MEMCPY24 copies backward, including retained cells beyond the
        // decoded fixed font. Overlap must not repeat the first segment.
        for (unsigned i = 672; i-- > 0;)
            e.staged[512 + i] = e.staged[256 + i];
    }
    std::fill(e.staged.begin() + 800, e.staged.begin() + 896, WindowArtwork{});
    if (patch)
        std::copy(e.resources->flavour_patch().begin(), e.resources->flavour_patch().end(),
                  e.staged.begin() + 16);
    if (version() == GameVersion::US) {
        const auto names = e.output.compose_party_names(*e.resources, inputs.names, owner);
        for (unsigned i = 0; i < names.size(); ++i) {
            std::copy_n(names[i].begin(), 64, e.staged[names_begin + i].begin());
            std::copy_n(names[i].begin() + 64, 64, e.staged[names_begin + 16 + i].begin());
        }
        // US names use the upper template for both halves, unlike JP names
        // and the status labels below.
        for (unsigned i = 0; i < 32; ++i)
            for (unsigned p = 0; p < 64; ++p)
                e.staged[names_begin + i][p] = backed(e.staged[names_begin + i][p], e.staged[7][p]);
    } else {
        for (unsigned member = 0; member < 4; ++member)
            for (unsigned i = 0; i < 4; ++i)
                e.glyph(glyph_cell(inputs.names[member][i]), names_begin + member * 4 + i);
    }
    unsigned index = 0;
    for (auto character : e.resources->status_characters())
        if (character != 32)
            e.glyph(glyph_cell(character), status_begin + index++);
}
void WindowGraphics::prepare(const PartyNameInputs &inputs, unsigned flavor) {
    prepare(inputs, flavor, 0);
}
void WindowGraphics::prepare_nested(const PartyNameInputs &inputs, unsigned flavor, Conversation &parent) {
    prepare(inputs, flavor, parent.callback_owner(execution_->output));
}
void WindowGraphics::prepare_nested(const PartyNameInputs &inputs, unsigned flavor, MenuHost::Operation &parent) {
    prepare(inputs, flavor, parent.callback_owner(execution_->output));
}
void WindowGraphics::prepare_nested(const PartyNameInputs &inputs, unsigned flavor, Operation &parent) {
    prepare(inputs, flavor, parent.callback_owner(execution_->output));
}

WindowGraphics::Operation::Operation(std::unique_ptr<Execution> execution) : execution_(std::move(execution)) {}
WindowGraphics::Operation::~Operation() {
    if (execution_->owner)
        execution_->graphics.output.abandon(execution_->owner);
}
std::unique_ptr<WindowGraphics::Operation>
WindowGraphics::begin_publication(ArtworkPublication plan, ArtworkDelivery delivery, TextOutput::Owner parent) {
    auto &output = execution_->output;
    const auto owner = output.enter(parent);
    try {
        return std::unique_ptr<Operation>(new Operation(
            std::make_unique<Operation::Execution>(*execution_, owner, plan, delivery)));
    } catch (...) {
        output.leave(owner);
        throw;
    }
}
std::unique_ptr<WindowGraphics::Operation>
WindowGraphics::begin_publication(ArtworkPublication plan, ArtworkDelivery delivery) {
    return begin_publication(plan, delivery, 0);
}
std::unique_ptr<WindowGraphics::Operation>
WindowGraphics::begin_publication_nested(ArtworkPublication plan, MenuHost::Operation &parent,
                                        ArtworkDelivery delivery) {
    return begin_publication(plan, delivery, parent.callback_owner(execution_->output));
}
std::unique_ptr<WindowGraphics::Operation>
WindowGraphics::begin_publication_nested(ArtworkPublication plan, Conversation &parent,
                                        ArtworkDelivery delivery) {
    return begin_publication(plan, delivery, parent.callback_owner(execution_->output));
}
TextOutput::Owner WindowGraphics::Operation::callback_owner(TextOutput &output) const {
    const auto &e = *execution_;
    require(&output == &e.graphics.output && e.owner &&
                (e.effect || (e.delivery == ArtworkDelivery::Synchronized && !e.graphics.pending.empty())),
            "Nested artwork preparation requires a suspended publication sharing output");
    output.require_owner(e.owner);
    return e.owner;
}
Progress WindowGraphics::Operation::advance(unsigned budget) {
    auto &e = *execution_;
    if (e.done)
        return Progress::Finished;
    e.graphics.output.require_owner(e.owner);
    if (e.effect)
        return Progress::Suspended;
    if (!budget)
        return Progress::BudgetExhausted;
    // TRANSFER_TO_VRAM waits for previously submitted DMA before its first
    // chunk and after every chunk. The adapter services real publication;
    // this scheduling yield does not manufacture a game or video tick.
    if (!e.ranges.empty() && e.delivery == ArtworkDelivery::Synchronized && !e.graphics.pending.empty())
        return Progress::BudgetExhausted;
    if (e.next == e.ranges.size()) {
        e.graphics.output.leave(e.owner);
        e.owner = 0;
        e.done = true;
        return Progress::Finished;
    }
    const auto range = e.ranges[e.next++];
    e.effect = ArtworkEffect{e.delivery, range.first, range.count};
    return Progress::Suspended;
}
const std::optional<ArtworkEffect> &WindowGraphics::Operation::effect() const { return execution_->effect; }
void WindowGraphics::Operation::respond(ArtworkDisposition disposition) {
    auto &e = *execution_;
    e.graphics.output.require_owner(e.owner);
    require(e.effect.has_value(), "Artwork publication has no pending effect");
    require(disposition == ArtworkDisposition::Published || disposition == ArtworkDisposition::Queued,
            "Invalid artwork publication disposition");
    const CellRange range{e.effect->first_cell, e.effect->cell_count};
    if (disposition == ArtworkDisposition::Published)
        e.graphics.publish(range);
    else
        e.graphics.pending.push_back(range);
    e.effect.reset();
}
bool WindowGraphics::Operation::complete() const { return execution_->done; }
bool WindowGraphics::publish_next() {
    auto &e = *execution_;
    if (e.pending.empty())
        return false;
    e.publish(e.pending.front());
    e.pending.pop_front();
    return true;
}
unsigned WindowGraphics::pending_publications() const { return unsigned(execution_->pending.size()); }
std::span<const WindowArtwork> WindowGraphics::prepared_artwork() const { return execution_->staged; }
std::shared_ptr<const TextFrame> WindowGraphics::frame() const { return execution_->sample(0, 32, 32, 32, false); }
std::shared_ptr<const TextFrame> WindowGraphics::party_name(unsigned member, bool prepared) const {
    require(member < 4, "Invalid party name index");
    return execution_->sample(names_begin + member * 4, 4, 2, 16, prepared);
}
std::shared_ptr<const TextFrame> WindowGraphics::status_label(unsigned index, bool prepared) const {
    const auto codes = execution_->resources->status_characters();
    require(index < std::count_if(codes.begin(), codes.end(), [](auto c) { return c != 32; }),
            "Invalid status label index");
    return execution_->sample(status_begin + index, 1, 2, 16, prepared);
}
void WindowGraphics::bind_cell(unsigned cell, const std::shared_ptr<TextImage> &image) {
    auto &e = *execution_;
    require(cell < e.published.size() && image, "Invalid window artwork binding");
    image->pixels = e.published[cell]->pixels;
    // Dialogue can create and release many fixed images between reloads.
    // Prune periodically without rescanning all live subscribers per glyph.
    if (++e.binding_counts[cell] % 64 == 0)
        std::erase_if(e.subscribers[cell], [](const auto &weak) { return weak.expired(); });
    e.subscribers[cell].push_back(image);
}
std::shared_ptr<TextImage> WindowGraphics::image(unsigned cell) const { return execution_->published.at(cell); }
} // namespace eb::native::dialogue
