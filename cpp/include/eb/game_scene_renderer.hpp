#pragma once

#include "eb/scene_read_view.hpp"

#include <array>
#include <cstdint>
#include <span>
#include <type_traits>
#include <vector>

namespace eb {
// Owns the host scene picture, source-aware continuation, and effect references.
// Hardware is borrowed through a read-only view only during a synchronous call.
// All caches/buffers are values, so copying a bus also copies an independent
// renderer; there are no back-pointers into the original bus or frame buffers.
class GameSceneRenderer {
  public:
    void set_presentation_width(const SceneReadView &view, unsigned width);
    void set_presentation_effects_enabled(const SceneReadView &view, bool enabled);
    unsigned presentation_width() const { return presentation_width_; }
    std::span<const uint32_t> presentation_pixels(std::span<const uint32_t, 256 * 224> native) const;
    double presentation_fixed_aspect() const;
    std::span<const uint8_t> presentation_effect_mask() const { return presentation_effect_mask_; }
    std::span<const uint32_t> presentation_effect_reference() const { return presentation_effect_reference_; }

    // Called at the original hardware boundaries, before any scanline pixels
    // are composed and immediately after each complete 544-byte OAM upload.
    void begin_scanline(const SceneReadView &view, unsigned y);
    void capture_oam_upload(const SceneReadView &view);
    uint32_t compose_presentation_pixel(const SceneReadView &view, int x, unsigned y, const PpuPixel &object,
                                        bool margin);
    void render_presentation_margins(const SceneReadView &view, unsigned y);

  private:
    using Pixel = PpuPixel;
    friend struct SceneReadView;
    // Host presentation cache only. These fields must never feed CPU timing,
    // emulated register values, map loading, collision, or entity spawning.
    // The native framebuffer owned by the bus remains the canonical picture.
    unsigned presentation_width_ = 256;
    unsigned requested_presentation_width_ = 256;
    double presentation_frame_aspect_ = 0;
    std::vector<uint32_t> presentation_framebuffer_;
    bool presentation_effects_enabled_ = false;
    std::vector<uint8_t> presentation_effect_mask_;
    std::vector<uint32_t> presentation_effect_reference_;
    // Per-scanline reference policy. Palette entries retain the current scene's
    // coordinates; only known transient effect contributions are replaced.
    std::array<uint16_t, 256> presentation_reference_palette_{};
    unsigned presentation_effect_layers_ = 0;
    unsigned presentation_psi_layer_ = 0, presentation_psi_palette_first_ = 256,
             presentation_psi_palette_last_ = 256;
    uint8_t presentation_reference_cgwsel_ = 0, presentation_reference_cgadsub_ = 0;
    uint16_t presentation_reference_fixed_ = 0;
    bool presentation_gas_palettes_loaded_ = false, presentation_gas_palettes_valid_ = false;
    std::array<std::array<uint16_t, 256>, 2> presentation_gas_palettes_{};
    uint8_t presentation_layer_mask_ = 0x13;
    int presentation_lumine_phase_ = -1;
    unsigned presentation_lumine_columns_ = 0;
    bool presentation_world_map_ = false;
    bool presentation_jp_title_ = false;
    bool presentation_battle_scene_ = false;
    std::array<uint8_t, 7> presentation_battle_layout_{};
    unsigned presentation_psi_display_layer_ = 0;
    struct PresentationObject {
        int x, y;
        uint8_t tile, attributes;
        bool large;
    };
    std::vector<PresentationObject> presentation_objects_;
    std::vector<PresentationObject> presentation_uploaded_objects_;
    bool presentation_objects_uploaded_ = false;
    uint64_t presentation_objects_frame_ = UINT64_MAX;
    std::array<int, 2> presentation_world_x_{}, presentation_world_y_{};
    uint64_t presentation_boundary_frame_ = UINT64_MAX;
    int presentation_shift_x_ = 0, presentation_clip_left_ = -384, presentation_clip_right_ = 640;

    // An eight-byte value keeps both results in the return register and avoids
    // a seventh, stack-passed argument on every pixel when effects are disabled.
    struct CompositePixel {
        uint32_t actual, reference;
    };
    static_assert(sizeof(CompositePixel) == 8 && std::is_trivial_v<CompositePixel>);
    template <bool IncludeReference>
    CompositePixel compose_pixel(const SceneReadView &view, int x, unsigned y, const Pixel &object,
                                 bool margin) const;
    void prepare_presentation_effects(const SceneReadView &view);
    void resize_presentation_width(const SceneReadView &view, unsigned width);
    void prepare_presentation_scene(const SceneReadView &view);
    void prepare_presentation_objects(const SceneReadView &view);
    void presentation_object_pixels(const SceneReadView &view, unsigned y, std::span<Pixel> result,
                                    int origin) const;
    void prepare_presentation_boundary(const SceneReadView &view);
    uint16_t presentation_tile(const SceneReadView &view, unsigned layer, int x, unsigned y,
                               uint16_t original) const;
    uint16_t presentation_map_tile(const SceneReadView &view, int tile_x, int tile_y, unsigned layer) const;
};
} // namespace eb
