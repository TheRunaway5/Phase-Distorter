#include "eb/native/sprite_actors.hpp"
#include <algorithm>
#include <cmath>
#include <map>
#include <stdexcept>
#include <tuple>

namespace eb::native {
namespace {
void validate(const SpriteActor &actor) {
    if (!std::isfinite(actor.x) || !std::isfinite(actor.y) ||
        (actor.depth_y && !std::isfinite(*actor.depth_y)) ||
        (actor.palette != authored_palette && actor.palette >= 8) || actor.draw_group > 3 ||
        actor.upper_layer < 0 || actor.upper_layer > 11 || actor.lower_layer < 0 || actor.lower_layer > 11)
        throw std::invalid_argument("Invalid native sprite actor");
    if (actor.image && (!actor.image->layout || !actor.image->canvas ||
        actor.image->canvas->size() != std::size_t(actor.image->layout->canvas_width) *
                                     actor.image->layout->canvas_height))
        throw std::invalid_argument("Invalid retained sprite artwork");
    for(const auto& fragment:actor.overlays)
        if(!fragment.pixels||fragment.pixels->width!=16||fragment.pixels->height!=16||
           fragment.pixels->indices.size()!=256||fragment.palette>=8||fragment.priority>3)
            throw std::invalid_argument("Invalid native sprite overlay fragment");
}
} // namespace
struct SpriteActors::State {
    struct Entry {
        SpriteActor actor;
        std::shared_ptr<const SpriteImage> image;
    };
    std::shared_ptr<SpriteResources> resources;
    std::map<ActorId, Entry> actors;
    ActorId next_id = 1;
};
SpriteActors::SpriteActors(std::shared_ptr<SpriteResources> resources) : state_(std::make_unique<State>()) {
    if (!resources)
        throw std::invalid_argument("Missing native sprite resources");
    state_->resources = std::move(resources);
}
SpriteActors::~SpriteActors() = default;
ActorId SpriteActors::create(const SpriteActor &actor) {
    validate(actor);
    auto image = actor.image ? actor.image :
        state_->resources->acquire(actor.sprite, actor.pose, actor.surface, actor.format);
    if (state_->next_id == std::numeric_limits<ActorId>::max())
        throw std::overflow_error("Native actor identity exhausted");
    const ActorId id = state_->next_id;
    state_->actors.emplace(id, State::Entry{actor, std::move(image)});
    ++state_->next_id;
    return id;
}
ActorId SpriteActors::allocate_identity() {
    if (state_->next_id == std::numeric_limits<ActorId>::max())
        throw std::overflow_error("Native actor identity exhausted");
    return state_->next_id++;
}
void SpriteActors::update(ActorId id, const SpriteActor &actor) {
    auto &entry = state_->actors.at(id);
    validate(actor);
    auto image = actor.image ? actor.image :
        state_->resources->acquire(actor.sprite, actor.pose, actor.surface, actor.format);
    entry = {actor, std::move(image)};
}
bool SpriteActors::erase(ActorId id) { return state_->actors.erase(id) != 0; }
const SpriteActor &SpriteActors::get(ActorId id) const { return state_->actors.at(id).actor; }
std::size_t SpriteActors::size() const { return state_->actors.size(); }

std::shared_ptr<const DirectSceneFrame> SpriteActors::draw(const SpriteCamera &camera,
                                                           const SpritePalettes &palettes,
                                                           std::uint64_t sequence,
                                                           std::uint64_t scene) const {
    if (!std::isfinite(camera.left) || !std::isfinite(camera.top) || camera.width == 0 ||
        camera.width > 4096 || camera.overscan > 4096)
        throw std::invalid_argument("Invalid native sprite camera");
    auto frame = std::make_shared<DirectSceneFrame>();
    frame->width = camera.width;
    frame->frame = sequence;
    frame->scene_identity = scene;
    frame->atlas_width = 1024;
    frame->atlas_height = 1;
    frame->atlas.resize(frame->atlas_width);
    struct Candidate {
        ActorId id;
        const State::Entry *entry;
    };
    std::vector<Candidate> ordered;
    for (const auto &[id, entry] : state_->actors) {
        if (!entry.actor.visible)
            continue;
        const auto &image = *entry.image;
        const float x = entry.actor.x + image.left - camera.left;
        const float y = entry.actor.y + image.top - camera.top - 1;
        const float pad = camera.overscan;
        bool outside=x + image.width <= -pad || x >= camera.width + pad || y + image.height <= -pad || y >= 224 + pad;
        for(const auto& fragment:entry.actor.overlays) {
            const float ox=entry.actor.x+fragment.left-camera.left,
                        oy=entry.actor.y+fragment.top-camera.top-1;
            if(ox+16>-pad&&ox<camera.width+pad&&oy+16>-pad&&oy<224+pad) outside=false;
        }
        if (outside)
            continue;
        ordered.push_back({id, &entry});
    }
    std::stable_sort(ordered.begin(), ordered.end(), [](const auto &a, const auto &b) {
        const auto &left = a.entry->actor;
        const auto &right = b.entry->actor;
        return left.draw_group != right.draw_group
                   ? left.draw_group < right.draw_group
                   : left.draw_group == 1 && left.depth_y.value_or(left.y) > right.depth_y.value_or(right.y);
    });
    // An atlas entry is shared across every actor using the same pose/palette.
    // Ten thousand repeated actors cost commands, not ten thousand images.
    using Key = std::tuple<const SpriteImage *, unsigned>;
    std::map<Key, unsigned> uploaded;
    using OverlayKey=std::tuple<const SpriteFragmentPixels*,unsigned>;
    std::map<OverlayKey,unsigned> uploaded_overlays;
    unsigned next_part = 0;
    for (const auto &candidate : ordered) {
        const auto &actor = candidate.entry->actor;
        const auto &image = *candidate.entry->image;
        const unsigned palette = actor.palette == authored_palette ? image.palette : actor.palette;
        const auto [found, fresh] = uploaded.try_emplace(Key{&image, palette}, next_part);
        if (fresh) {
            next_part += image.parts.size();
            const unsigned height = ((next_part + 63) / 64) * 16;
            if (height > 4096)
                throw std::length_error("Native sprite atlas needs another texture page");
            frame->atlas_height = std::max(frame->atlas_height, height);
            frame->atlas.resize(std::size_t(frame->atlas_width) * frame->atlas_height);
            frame->palette_indices.resize(frame->atlas.size(), 256);
            for (unsigned i = 0; i < image.parts.size(); ++i) {
                const unsigned u = ((found->second + i) % 64) * 16, v = ((found->second + i) / 64) * 16;
                for (unsigned y = 0; y < 16; ++y)
                    for (unsigned x = 0; x < 16; ++x) {
                        const unsigned color = image.parts[i].indices[y * 16 + x];
                        frame->palette_indices[(v + y) * frame->atlas_width + u + x] = 128 + palette * 16 + color;
                        frame->atlas[(v + y) * frame->atlas_width + u + x] =
                            color ? palettes[palette][color] | 0xff000000u : 0;
                    }
            }
        }
        const unsigned motion = frame->motions.size();
        const float x = actor.x - camera.left, y = actor.y - camera.top - 1;
        frame->motions.push_back({candidate.id, x, y});
        for(const auto& fragment:actor.overlays) {
            const auto [overlay,fresh]=uploaded_overlays.try_emplace(OverlayKey{fragment.pixels.get(),fragment.palette},next_part);
            if(fresh) {
                ++next_part;
                const unsigned height=((next_part+63)/64)*16;
                if(height>4096) throw std::length_error("Native sprite atlas needs another texture page");
                frame->atlas_height=std::max(frame->atlas_height,height);
                frame->atlas.resize(std::size_t(frame->atlas_width)*frame->atlas_height);
                frame->palette_indices.resize(frame->atlas.size(),256);
                const unsigned u=overlay->second%64*16,v=overlay->second/64*16;
                for(unsigned py=0;py<16;++py) for(unsigned px=0;px<16;++px) {
                    const unsigned color=fragment.pixels->indices[py*16+px];
                    const auto at=(v+py)*frame->atlas_width+u+px;
                    frame->palette_indices[at]=128+fragment.palette*16+color;
                    frame->atlas[at]=color?palettes[fragment.palette][color]|0xff000000u:0;
                }
            }
            constexpr std::array<int,4> layers{2,5,7,10};
            frame->quads.push_back({overlay->second%64*16,overlay->second/64*16,16,16,
                                   x+fragment.left,y+fragment.top,layers[fragment.priority],motion,true});
            frame->quads.back().layer=DirectSceneFrame::Layer::Actors;
            frame->quads.back().color_math_eligible=fragment.palette>=4;
        }
        for (unsigned i = 0; i < image.parts.size(); ++i) {
            const auto &part = image.parts[i];
            frame->quads.push_back({((found->second + i) % 64) * 16, ((found->second + i) / 64) * 16, 16, 16,
                                    x + part.left, y + part.top,
                                    part.upper ? actor.upper_layer : actor.lower_layer, motion, true});
            frame->quads.back().layer = DirectSceneFrame::Layer::Actors;
            frame->quads.back().color_math_eligible = palette >= 4;
        }
    }
    return frame;
}
} // namespace eb::native
