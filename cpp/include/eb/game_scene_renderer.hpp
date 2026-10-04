#pragma once

#include "eb/scene_read_view.hpp"
#include "eb/direct_scene_capture.hpp"
#include "eb/native/sprite_resources.hpp"
#include "eb/native/sprite_fragment.hpp"
#include "eb/native/stationary_npc_sprites.hpp"
#include "eb/enemy_sprite_preparation.hpp"

#include <array>
#include <cstdint>
#include <optional>
#include <span>
#include <type_traits>
#include <vector>

namespace eb {
class SnapshotArchive;
namespace native { class OverlaySprites; class CustomSprites; }
// Owns the host scene picture, source-aware continuation, and effect references.
// Hardware is borrowed through a read-only view only during a synchronous call.
// All caches/buffers are values, so copying a bus also copies an independent
// renderer; there are no back-pointers into the original bus or frame buffers.
class GameSceneRenderer {
  public:
    void snapshot_io(SnapshotArchive &archive);
    void bind_snapshot_resources(std::shared_ptr<native::SpriteResources> resources);
    void set_presentation_width(const SceneReadView &view, unsigned width);
    void set_presentation_effects_enabled(const SceneReadView &view, bool enabled);
    void capture_aperture(int x, int y, unsigned radius_x, unsigned radius_y);
    // Import before entering gameplay. The immutable catalog can be shared by
    // copied renderers; each copy owns its event-resolved map preparation.
    void set_native_stationary_sprites(std::shared_ptr<const native::StationaryNpcSprites> sprites) noexcept;
    std::uint64_t stationary_area_preparations() const {
        return native_stationary_preparation_.area_preparations();
    }
    std::size_t stationary_sprite_part_count() const;
    // Resource-only readiness includes moving NPC groups. The borrowed view
    // lasts until the next sprite-frame seal or preparation-owner change.
    const native::NpcSpriteReadiness *npc_sprite_readiness() const {
        return native_stationary_preparation_.resources();
    }
    std::uint64_t npc_sprite_resource_queries() const { return native_stationary_preparation_.resource_queries(); }
    std::uint64_t npc_sprite_resource_failures() const { return native_stationary_preparation_.resource_failures(); }
    native::NpcResourcePreparationFailure npc_sprite_resource_failure() const {
        return native_stationary_preparation_.resource_failure();
    }
    // Staged at native runtime startup, independent of NPC preview ownership.
    void set_native_enemy_sprites(std::optional<EnemySpritePreparation> preparation) noexcept {
        native_enemy_preparation_ = std::move(preparation);
    }
    const EnemySpritePreparation *enemy_sprite_preparation() const {
        return native_enemy_preparation_ ? &*native_enemy_preparation_ : nullptr;
    }
    unsigned presentation_width() const { return presentation_width_; }
    std::span<const uint32_t> presentation_pixels(std::span<const uint32_t, 256 * 224> native) const;
    double presentation_fixed_aspect() const;
    std::span<const uint8_t> presentation_effect_mask() const { return presentation_effect_mask_; }
    std::span<const uint32_t> presentation_effect_reference() const { return presentation_effect_reference_; }

    // Called at the original hardware boundaries, before any scanline pixels
    // are composed and immediately after each complete 544-byte OAM upload.
    void begin_scanline(const SceneReadView &view, unsigned y);
    void capture_oam_upload(const SceneReadView &view, unsigned buffer_id = 0);
    // Source OAM is double-buffered. Retain actual draw ownership while it is
    // queued/emitted; the later upload must not inspect next-tick actor state.
    void begin_sprite_frame(unsigned buffer_id);
    void capture_entity_draw(const SceneReadView &view, unsigned byte_slot);
    void capture_sprite_emit(const SceneReadView &view, std::uint32_t map_address, int x, int y,
                             unsigned first_oam, unsigned oam_limit);
    void seal_sprite_frame(const SceneReadView &view);
    // Native ordinary draws own their shape and indexed pixels. No source
    // descriptor pointer or graphics slot participates in these commands.
    void queue_native_sprite(const SceneReadView &view,
                             std::shared_ptr<const native::SpriteImage> image,
                             std::uint64_t generation, unsigned palette, int x, int y,
                             unsigned surface, unsigned priority);
    void queue_native_overlay(const SceneReadView &view, std::uint32_t map_address,
                              int x, int y, unsigned priority);
    void queue_native_fragments(const SceneReadView &view,
                                std::span<const native::SpriteFragment> fragments,
                                std::uint64_t identity, int x, int y, unsigned priority);
    void queue_native_custom(const SceneReadView &view, std::uint32_t authored_table,
                             unsigned frame, int x, int y, unsigned priority);
    // An actor callback may submit overlays before its body. Retain that bundle
    // when merging source-active actors outside the original draw rectangle.
    std::size_t native_actor_draw_mark() const;
    void finish_native_actor_draw(const SceneReadView &view, std::size_t mark,
                                  unsigned byte_slot, unsigned raw_priority);
    void capture_sprite_enqueue(const SceneReadView &view, std::uint32_t map_address,
                                int x, int y, unsigned priority);
    std::optional<std::uint8_t> try_native_sprite_pixels(
        const SceneReadView &view, unsigned y, std::span<PpuPixel> result, int origin) const;
    bool owns_presentation_oam_part(int x, int y, std::uint8_t tile, std::uint8_t attributes,
                                    bool large, unsigned oam_index) const;
    std::size_t native_sprite_part_count() const {
        std::size_t count = 0;
        for (const auto &object : native_sprite_objects_)
            count += object.native_owned && bool(object.host_image) && !object.stationary_prepared;
        return count;
    }
    struct HostObjectPart {
        // Already mirrored and surface-latched; sample unflipped row/column.
        // Valid until this renderer next publishes a sprite snapshot.
        std::span<const std::uint8_t, 256> indices;
        unsigned palette;
        std::uint64_t generation{};
    };
    std::optional<HostObjectPart> host_oam_part(int x, int y, std::uint8_t tile,
                                              std::uint8_t attributes, bool large,
                                              unsigned oam_index = 128) const;
    std::uint64_t host_sprite_geometry_mismatches() const { return host_sprite_geometry_mismatches_; }
    struct SpriteSnapshotDiagnostics {
        std::uint64_t builds{}, queued_draws{}, emit_calls{}, matched_draws{}, host_parts{}, uploads{},
            unknown_uploads{};
    };
    SpriteSnapshotDiagnostics sprite_snapshot_diagnostics() const { return sprite_snapshot_counts_; }
    // Includes queued, built, uploaded and displayed owners for bridge GC.
    std::vector<std::uint64_t> host_sprite_generations() const;
    uint32_t compose_presentation_pixel(const SceneReadView &view, int x, unsigned y, const PpuPixel &object,
                                        bool margin);
    void render_presentation_margins(const SceneReadView &view, unsigned y);
    void enable_direct_rendering(bool enabled) { direct_capture_.enable(enabled); }
    void capture_direct_scanline(const SceneReadView& view, unsigned y) { direct_capture_.scanline(view, *this, y); }
    std::shared_ptr<const DirectSceneFrame> direct_scene() const { return direct_capture_.frame(); }

  private:
    using Pixel = PpuPixel;
    friend struct SceneReadView;
    friend class DirectSceneCapture;
    DirectSceneCapture direct_capture_;
    bool direct_world_tiles_ = false;
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
    bool aperture_valid_{};
    int aperture_x_{}, aperture_y_{};
    unsigned aperture_radius_x_{}, aperture_radius_y_{};
    bool presentation_aperture_{};
    bool presentation_window_contains(const SceneReadView &view, unsigned layer, int x, unsigned y) const;
    bool presentation_robot_ending_ = false; // Derived from the source corpse actors each scanline.
    bool presentation_jp_title_ = false;
    bool presentation_intro_static_ = false;
    bool presentation_battle_scene_ = false;
    std::array<uint8_t, 7> presentation_battle_layout_{};
    unsigned presentation_psi_display_layer_ = 0;
    // Derived from the current script/PPU state at each scanline, including
    // after restoring a snapshot. Screen effects do not follow world bounds.
    unsigned presentation_screen_overlay_layer_ = 0;
    struct PresentationObject {
        int x, y;
        uint8_t tile, attributes;
        bool large;
        std::uint64_t identity{};
        int anchor_x{}, anchor_y{};
        std::shared_ptr<const native::SpriteImage> host_image{};
        unsigned host_part{}, host_palette{};
        std::uint64_t host_generation{};
        native::SpriteOrientation host_orientation = native::SpriteOrientation::Normal;
        bool native_owned{};
        std::shared_ptr<const native::SpriteFragmentPixels> fragment_pixels{};
        bool stationary_prepared{};
        // Latched at DRAW, independent of width. -1 is ordinary artwork;
        // 0..1 extends only the ending soul's final leftward leg into margins.
        float ending_departure = -1;
    };
    std::vector<PresentationObject> presentation_objects_;
    std::vector<PresentationObject> presentation_uploaded_objects_;
    struct NativeActorDrawOrder {
        unsigned byte_slot{}, list_rank{};
        std::uint16_t world_y{};
        bool sorted{};
    };
    struct QueuedSpriteDraw {
        std::uint32_t map_address{};
        int x{}, y{};
        std::vector<PresentationObject> objects;
        bool emitted{};
        unsigned priority{};
        bool source_queued{}, native_queued{};
        std::optional<NativeActorDrawOrder> actor_order;
    };
    struct NativeActorOverlays {
        // Last actual callback artwork only; never a simulated effect timer.
        std::uint64_t generation{};
        int anchor_x{}, anchor_y{};
        std::vector<QueuedSpriteDraw> draws;
    };
    std::array<NativeActorOverlays, 30> native_actor_overlays_;
    std::weak_ptr<native::SpriteResources> native_actor_overlay_resources_;
    struct SpriteBuild {
        bool begun{}, native_frame{};
        std::vector<QueuedSpriteDraw> queued;
        std::vector<PresentationObject> objects;
        std::array<std::optional<PresentationObject>, 128> oam;
    };
    std::array<SpriteBuild, 2> sprite_builds_;
    unsigned sprite_build_id_{};
    std::vector<PresentationObject> native_sprite_objects_, native_uploaded_objects_;
    bool native_sprite_frame_{}, native_uploaded_frame_{};
    std::uint64_t native_sprite_frame_number_ = UINT64_MAX;
    std::shared_ptr<const native::OverlaySprites> native_overlays_;
    std::weak_ptr<native::SpriteResources> native_overlay_resources_;
    std::shared_ptr<const native::CustomSprites> native_custom_sprites_;
    std::weak_ptr<native::SpriteResources> native_custom_resources_;
    std::shared_ptr<const native::StationaryNpcSprites> native_stationary_sprites_;
    native::StationaryNpcPreparation native_stationary_preparation_;
    std::optional<EnemySpritePreparation> native_enemy_preparation_;
    std::array<std::optional<PresentationObject>, 128> presentation_oam_, presentation_uploaded_oam_;
    bool presentation_oam_indexed_{}, presentation_uploaded_oam_indexed_{};
    SpriteSnapshotDiagnostics sprite_snapshot_counts_;
    std::uint64_t host_artwork_revision_ = UINT64_MAX;
    bool presentation_objects_uploaded_ = false;
    std::uint64_t host_sprite_geometry_mismatches_{};
    uint64_t presentation_objects_frame_ = UINT64_MAX;
    std::array<int, 2> presentation_world_x_{}, presentation_world_y_{};
    uint64_t presentation_boundary_frame_ = UINT64_MAX;
    int presentation_shift_x_ = 0, presentation_clip_left_ = -448, presentation_clip_right_ = 704;
    // Only the widescreen boundary correction has memory. Source camera motion
    // remains immediate, and every layer/actor shares the same correction.
    struct PresentationCamera {
        bool valid{};
        unsigned combination{};
        int x{}, y{}, left{}, right{}, pending_left{}, pending_right{};
        unsigned pending_frames{};
    } presentation_camera_;

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
    std::optional<std::uint32_t> append_presentation_entity(
        const SceneReadView &view, unsigned slot, std::vector<PresentationObject> &objects);
    void refresh_host_artwork(const SceneReadView &view);
    void tag_native_actor_draw(const SceneReadView &view, std::size_t mark,
                               unsigned byte_slot, unsigned raw_priority);
    void prune_native_actor_overlays(const SceneReadView &view);
    void queue_stationary_npc_sprites(const SceneReadView &view);
    std::vector<PresentationObject> source_sprite_parts(
        const SceneReadView &view, std::uint32_t map_address, int x, int y) const;
    void object_pixels(const SceneReadView &view, std::span<const PresentationObject> objects,
                       unsigned y, std::span<Pixel> result, int origin, bool presentation = false) const;
    int ending_soul_shift(const PresentationObject &object) const;
    void presentation_object_pixels(const SceneReadView &view, unsigned y, std::span<Pixel> result,
                                    int origin) const;
    void prepare_presentation_boundary(const SceneReadView &view);
    uint16_t presentation_tile(const SceneReadView &view, unsigned layer, int x, unsigned y,
                               uint16_t original) const;
    uint16_t presentation_map_tile(const SceneReadView &view, int tile_x, int tile_y, unsigned layer) const;
};
} // namespace eb
