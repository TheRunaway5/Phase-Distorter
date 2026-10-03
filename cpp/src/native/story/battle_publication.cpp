#include "eb/native/story/battle_publication.hpp"
#include "eb/native/story/window_layer.hpp"
#include "eb/native/battle/animation_commands.hpp"
#include "eb/native/battle/frame.hpp"
#include "eb/native/scene_effects.hpp"
#include "eb/native/world_display_fade.hpp"
#include <algorithm>
#include <stdexcept>

namespace eb::native::story {
namespace {
std::uint32_t color(std::uint16_t value) {
    return palette_argb({std::uint8_t(value & 31), std::uint8_t((value >> 5) & 31),
                         std::uint8_t((value >> 10) & 31)});
}
void append(DirectSceneFrame &destination, const DirectSceneFrame &source,
            const battle::PaletteBankState &colors) {
    if (source.width != destination.width ||
        source.atlas.size() != std::size_t(source.atlas_width) * source.atlas_height ||
        (!source.palette_indices.empty() && source.palette_indices.size() != source.atlas.size()))
        throw std::invalid_argument("Invalid battle object publication");
    const auto width = std::max(destination.atlas_width, source.atlas_width);
    if (width > 4096 || source.atlas_height > 4096 ||
        destination.atlas_height > 4096 - source.atlas_height)
        throw std::length_error("Battle publication exceeds the scene atlas capacity");
    const auto height = destination.atlas_height + source.atlas_height;
    std::vector<std::uint32_t> pixels(std::size_t(width) * height);
    for (unsigned y = 0; y < destination.atlas_height; ++y)
        std::copy_n(destination.atlas.begin() + std::size_t(y) * destination.atlas_width,
                    destination.atlas_width, pixels.begin() + std::size_t(y) * width);
    for (unsigned y = 0; y < source.atlas_height; ++y)
        for (unsigned x = 0; x < source.atlas_width; ++x) {
            const auto from = std::size_t(y) * source.atlas_width + x;
            auto pixel = source.atlas[from];
            if (!source.palette_indices.empty()) {
                const unsigned id = source.palette_indices[from];
                if (id > 256) throw std::out_of_range("Invalid battle object palette identity");
                if (id < 256 && (pixel >> 24))
                    pixel = color(colors.displayed_palette(id / 16)[id % 16]);
            }
            pixels[std::size_t(destination.atlas_height + y) * width + x] = pixel;
        }
    const unsigned first_motion = destination.motions.size();
    destination.motions.insert(destination.motions.end(), source.motions.begin(), source.motions.end());
    for (auto quad : source.quads) {
        quad.v += destination.atlas_height;
        quad.motion += first_motion;
        destination.quads.push_back(quad);
    }
    destination.atlas_width = width;
    destination.atlas_height = height;
    destination.atlas = std::move(pixels);
    destination.palette_indices.clear();
}
dialogue::TextFrame scrolled_windows(const dialogue::WindowHost &windows,
                                    battle::PsiScroll scroll) {
    const auto full = windows.full_frame();
    if (full->width != 256 || full->height != 256 ||
        full->pixels.size() != 65536 || full->priority.size() != 65536)
        throw std::invalid_argument("Battle UI requires its retained full tilemap");
    dialogue::TextFrame out;
    out.width = 256;
    out.height = 224;
    out.pixels.resize(256 * 224);
    out.priority.resize(256 * 224);
    for (unsigned y = 0; y < 224; ++y)
        for (unsigned x = 0; x < 256; ++x) {
            const auto from = ((y + 1 + scroll.y) & 255) * 256 + ((x + scroll.x) & 255);
            out.pixels[y * 256 + x] = full->pixels[from];
            out.priority[y * 256 + x] = full->priority[from];
        }
    return out;
}
}
BattlePublication::BattlePublication(battle::PaletteBankState &colors,
    battle::PsiScratch &scratch, battle::PsiDisplayState &display,
    BattleBackgroundScene &background, BattleCombatantScene &combatants,
    dialogue::WindowHost &windows, const DirectSceneFrame::Effects &policy, WindowBinding binding)
    : colors_(colors), scratch_(scratch), display_(display), background_(background),
      combatants_(combatants), windows_(windows), policy_(&policy) {
    bind(binding);
}
BattlePublication::BattlePublication(battle::PaletteBankState &colors,
    battle::PsiScratch &scratch, battle::PsiDisplayState &display,
    BattleBackgroundScene &background, BattleCombatantScene &combatants,
    dialogue::WindowHost &windows, WorldEncounterVisualState &visual, WorldDisplayFade &fade, WindowBinding binding)
    : colors_(colors), scratch_(scratch), display_(display), background_(background),
      combatants_(combatants), windows_(windows), visual_(&visual), fade_(&fade) {
    bind(binding);
}
void BattlePublication::bind(WindowBinding binding) {
    if (binding != WindowBinding::Immediate && binding != WindowBinding::Deferred)
        throw std::invalid_argument("Invalid battle window binding mode");
    if (binding == WindowBinding::Immediate) windows_.bind_palette_publication(*this);
    try { combatants_.bind_palette_state(colors_); }
    catch (...) { windows_.clear_palette_publication(*this); throw; }
}
bool BattlePublication::uses(const WorldEncounterVisualState &visual,
                             const WorldDisplayFade &fade) const noexcept {
    return visual_ == &visual && fade_ == &fade;
}
bool BattlePublication::supports_animation(const battle::AnimationCommands &commands) const noexcept {
    return visual_ && fade_ && commands.uses(*fade_) && commands.uses_visual(*visual_) &&
           commands.uses(display_, scratch_, colors_, background_);
}
void BattlePublication::bind_frame_display(battle::FrameDisplay &display) {
    if (!display.uses(display_) || (frame_display_ && frame_display_ != &display))
        throw std::invalid_argument("Battle frame publication requires its actual display transport");
    frame_display_ = &display;
}
bool BattlePublication::supports_battle_frame(const battle::Frame &frame) const noexcept {
    return frame_display_ && visual_ && fade_ &&
        frame.uses(colors_, display_, *frame_display_, background_, combatants_, *visual_, *fade_);
}
BattlePublication::~BattlePublication() { windows_.clear_palette_publication(*this); }
void BattlePublication::publish_window_range(unsigned first,
    std::span<const std::uint16_t> values, dialogue::WindowPaletteUpload mode) {
    if (first > 32 || values.size() > 32 - first)
        throw std::out_of_range("Battle window colors exceed their two palette banks");
    if (mode != dialogue::WindowPaletteUpload::Background && mode != dialogue::WindowPaletteUpload::Full)
        throw std::invalid_argument("Invalid window palette upload intent");
    for (unsigned i = 0; i < values.size(); ++i) colors_.staged_color(first + i) = values[i];
    // C47F87 writes8; C3E450 writes24. Later writers may replace either value.
    colors_.upload_mode = std::uint8_t(mode);
}
std::shared_ptr<const DirectSceneFrame> BattlePublication::capture_with(
    const DirectSceneFrame &stamp, const battle::PaletteBankState &colors,
    const battle::PsiDisplayState &display, const WorldEncounterVisualState *preview_visual,
    unsigned brightness, const battle::FrameDisplay::Screen *screen,
    std::uint8_t hdma, const EncounterWindowMask *rows) const {
    if (screen && (hdma & (1u << 2)) && frame_display_->letterbox.top_end) {
        const auto &box = frame_display_->letterbox;
        // Higher first counters set HDMA's repeat bit and no longer describe
        // the ordinary constant nonvisible segment. A zero first counter is
        // the source table terminator and deliberately ignores later bytes.
        if (box.top_end > 128 || box.bottom_start < box.top_end || box.bottom_start > 224)
            throw std::invalid_argument("Battle letterbox is outside its ordinary HDMA counter domain");
    }
    auto background = background_.snapshot();
    const auto visual = preview_visual ? preview_visual : visual_;
    auto policy = visual ? capture_scene_effects(*visual, color(colors.displayed_palette(0)[0]), rows)
                          : *policy_;
    if (screen) {
        const unsigned first = background.bitdepth == 2 ? 2 : 1;
        background.primary.horizontal_scroll = display.scroll[first].x;
        background.primary.vertical_scroll = display.scroll[first].y;
        if (!(hdma & (1u << 5))) background.primary.axis = BattleDistortionAxis::None;
        if (background.secondary) {
            const unsigned second = background.shared_artwork ? first : background.bitdepth == 2 ? 3 : 0;
            background.secondary->horizontal_scroll = display.scroll[second].x;
            background.secondary->vertical_scroll = display.scroll[second].y;
            if (!(hdma & (1u << 6))) background.secondary->axis = BattleDistortionAxis::None;
        }
        // The real TM/TS HDMA owner below controls every plane, including PSI
        // and UI; the background-only convenience clip must not survive it.
        background.effects.top_end = 0;
    }
    if (fade_) policy.brightness = brightness;
    policy.backdrop = color(colors.displayed_palette(0)[0]);
    auto frame = std::make_shared<DirectSceneFrame>(*battle::PsiSceneFrame(display, colors, background.bitdepth)
        .compose(background, policy, stamp.width, stamp.frame, stamp.scene_identity));
    if (!screen || screen->objects) {
        const auto objects = (screen ? *screen->objects : combatants_.snapshot())
            .draw(stamp.width, stamp.frame, stamp.scene_identity);
        append(*frame, *objects, colors);
    }
    // Source OBJ priority2 has a different ordering in Mode0.
    if (background.bitdepth == 2)
        for (auto &quad : frame->quads)
            if (quad.object) quad.priority = 8;
    std::array<std::uint16_t, 32> window_colors;
    for (unsigned i = 0; i < window_colors.size(); ++i)
        window_colors[i] = colors.displayed_palette(i / 16)[i % 16];
    const auto ui_motion = frame->motions.size();
    const auto ui = screen ? scrolled_windows(windows_, display.scroll[background.bitdepth == 2 ? 0 : 2])
                           : *windows_.frame();
    auto result = std::make_shared<DirectSceneFrame>(*with_window_layer(*frame, ui, window_colors, true));
    if (background.bitdepth == 2)
        for (auto &quad : result->quads)
            if (quad.motion == ui_motion && !quad.object) {
                quad.layer = DirectSceneFrame::Layer::Background1;
                quad.priority = quad.priority ? 10 : 7;
            }
    if (screen && (hdma & (1u << 2)) && frame_display_->letterbox.top_end) {
        const auto &box = frame_display_->letterbox;
        // Authored battle letterboxing removes planes outside the rectangle.
        // It does not swap a plane between main and sub screens by scanline.
        if ((box.nonvisible & box.visible) != box.nonvisible)
            throw std::invalid_argument("Battle letterbox requires per-row screen-role replacement");
        auto &effects = *result->effects;
        for (unsigned layer = 0; layer < 5; ++layer) {
            const unsigned bits = (1u << layer) | (1u << (8 + layer));
            const bool main = box.visible & (1u << layer);
            const bool sub = box.visible & (1u << (8 + layer));
            if (main && sub && ((box.nonvisible & bits) != 0) &&
                (box.nonvisible & bits) != bits)
                throw std::invalid_argument("Battle letterbox changes one of two screen roles");
            effects.main[layer] = main;
            effects.sub[layer] = sub;
            if (box.nonvisible & bits) continue;
            for (auto &quad : result->quads)
                if (unsigned(quad.layer) == layer) {
                    quad.clip.top = std::max(quad.clip.top, float(box.top_end));
                    quad.clip.bottom = std::min(quad.clip.bottom, float(box.bottom_start));
                }
        }
    }
    // This frame owns the colors actually displayed at its boundary. Another
    // compositor must not recolor it from a later staging palette.
    result->palette_indices.clear();
    return result;
}
std::shared_ptr<const DirectSceneFrame> BattlePublication::capture(const DirectSceneFrame &stamp) const {
    const unsigned brightness = !fade_ ? 15 : fade_->state().brightness & 0x80
        ? 0 : fade_->state().brightness & 15;
    const auto screen = frame_display_ ? std::optional{frame_display_->screen()} : std::nullopt;
    const auto rows = frame_display_ && visual_ ? std::optional{frame_display_->windows(
        *visual_, frame_display_->displayed_hdma_enable, false)} : std::nullopt;
    return capture_with(stamp, colors_, display_, nullptr, brightness,
        screen ? &*screen : nullptr, frame_display_ ? frame_display_->displayed_hdma_enable : 0,
        rows ? &*rows : nullptr);
}
std::shared_ptr<const DirectSceneFrame> BattlePublication::capture_next(const DirectSceneFrame &stamp) {
    battle::PaletteBankState colors;
    colors.staged = colors_.staged;
    colors.displayed = colors_.displayed;
    colors.upload_mode = colors_.upload_mode;
    colors.publish_pending();
    battle::PsiDisplayState display;
    display.graphics = display_.preview_graphics(scratch_);
    display.tilemap = display_.preview_pending(scratch_);
    const auto screen = frame_display_ ? std::optional{frame_display_->preview_screen()} : std::nullopt;
    display.scroll = screen ? screen->scroll : display_.scroll;
    const auto fade = fade_ ? std::optional{fade_->preview_next_frame()} : std::nullopt;
    auto visual = visual_ ? std::optional{*visual_} : std::nullopt;
    if (fade && fade->disables_row_streams()) visual->window_rows_enabled = false;
    const bool forced_blank = fade && (fade->state().brightness & 0x80);
    const auto hdma = !frame_display_ || forced_blank || (fade && fade->disables_row_streams())
        ? 0 : frame_display_->hdma_enable;
    const auto rows = frame_display_ && visual ? std::optional{
        frame_display_->windows(*visual, std::uint8_t(hdma), true)} : std::nullopt;
    auto result = capture_with(stamp, colors, display, visual ? &*visual : nullptr,
                               fade ? fade->intensity() : 15, screen ? &*screen : nullptr,
                               std::uint8_t(hdma), rows ? &*rows : nullptr);
    // All fallible capture work succeeded. These commits cannot allocate or
    // advance another owner; a failed capture leaves pending transfers intact.
    if (fade) {
        fade_->commit_frame(*fade);
        if (fade->disables_row_streams() && visual_->window_rows_enabled) {
            visual_->window_rows_enabled = false;
            ++visual_->window_revision;
        }
    }
    display_.publish_pending(scratch_);
    if (frame_display_) {
        frame_display_->commit_publication(fade && fade->disables_row_streams(), forced_blank);
        if (rows) {
            bool changed = false;
            for (unsigned i = 0; i < 2; ++i) {
                changed |= visual_->window_left[i] != rows->back()[i].left ||
                           visual_->window_right[i] != rows->back()[i].right;
                visual_->window_left[i] = rows->back()[i].left;
                visual_->window_right[i] = rows->back()[i].right;
            }
            if (changed) ++visual_->window_revision;
        }
    }
    colors_.displayed = colors.displayed;
    colors_.upload_mode = colors.upload_mode;
    return result;
}
} // namespace eb::native::story
