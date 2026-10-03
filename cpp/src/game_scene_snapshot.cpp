#include "eb/game_scene_renderer.hpp"
#include "eb/scene_snapshot_archive.hpp"

namespace eb {
void DirectSceneCapture::snapshot_io(SnapshotArchive &ar) {
    ar(enabled_, valid_, pending_, published_, registers_, video_, palette_, objects_, scroll_, fixed_);
}

void native::StationaryNpcPreparation::snapshot_io(SnapshotArchive &ar) {
    ar(area_preparations_, resource_queries_, resource_failures_, resource_failure_);
    if (ar.loading()) {
        // Immutable import catalogs are reconstructed by the new session. Their
        // read-only viewport leases can be prepared again from restored flags.
        owner_.reset(); area_.reset(); flags_.clear();
        resources_.reset(); resource_owner_.reset(); resource_request_.reset();
    }
}
void GameSceneRenderer::bind_snapshot_resources(std::shared_ptr<native::SpriteResources> resources) {
    native_actor_overlay_resources_ = resources;
    native_overlays_.reset(); native_overlay_resources_.reset();
    native_custom_sprites_.reset(); native_custom_resources_.reset();
    if (native_enemy_preparation_) native_enemy_preparation_->bind_snapshot_resources(std::move(resources));
}

void GameSceneRenderer::snapshot_io(SnapshotArchive &ar) {
    ar(direct_capture_, direct_world_tiles_, presentation_width_, requested_presentation_width_,
       presentation_frame_aspect_, presentation_framebuffer_, presentation_effects_enabled_,
       presentation_effect_mask_, presentation_effect_reference_, presentation_reference_palette_,
       presentation_effect_layers_, presentation_psi_layer_, presentation_psi_palette_first_,
       presentation_psi_palette_last_, presentation_reference_cgwsel_, presentation_reference_cgadsub_,
       presentation_reference_fixed_, presentation_gas_palettes_loaded_, presentation_gas_palettes_valid_,
       presentation_gas_palettes_, presentation_layer_mask_, presentation_lumine_phase_,
       presentation_lumine_columns_, presentation_world_map_, presentation_jp_title_,
       presentation_intro_static_, presentation_battle_scene_, presentation_battle_layout_,
       presentation_psi_display_layer_);
    const auto object_io = [](SnapshotArchive &a, PresentationObject &v) {
        a(v.x, v.y, v.tile, v.attributes, v.large, v.identity, v.anchor_x, v.anchor_y,
          v.host_image, v.host_part, v.host_palette, v.host_generation, v.host_orientation,
          v.native_owned, v.fragment_pixels, v.stationary_prepared);
        if (a.loading() && v.host_image && v.host_part >= v.host_image->parts.size())
            throw std::runtime_error("Invalid snapshot sprite part");
    };
    const auto objects_io = [&](std::vector<PresentationObject> &v) { ar.sequence(v, object_io); };
    const auto oam_io = [&](auto &items) {
        for (auto &v : items) {
            bool present = bool(v); ar(present);
            if (ar.loading()) { if (present) v.emplace(); else v.reset(); }
            if (present) object_io(ar, *v);
        }
    };
    const auto draw_io = [&](SnapshotArchive &a, QueuedSpriteDraw &v) {
        a(v.map_address, v.x, v.y);
        a.sequence(v.objects, object_io);
        a(v.emitted, v.priority, v.source_queued, v.native_queued);
        bool present = bool(v.actor_order); a(present);
        if (a.loading()) { if (present) v.actor_order.emplace(); else v.actor_order.reset(); }
        if (present) a(v.actor_order->byte_slot, v.actor_order->list_rank,
                       v.actor_order->world_y, v.actor_order->sorted);
    };
    objects_io(presentation_objects_); objects_io(presentation_uploaded_objects_);
    for (auto &v : native_actor_overlays_) {
        ar(v.generation, v.anchor_x, v.anchor_y); ar.sequence(v.draws, draw_io);
    }
    for (auto &v : sprite_builds_) {
        ar(v.begun, v.native_frame); ar.sequence(v.queued, draw_io);
        objects_io(v.objects); oam_io(v.oam);
    }
    ar(sprite_build_id_);
    objects_io(native_sprite_objects_); objects_io(native_uploaded_objects_);
    ar(native_sprite_frame_, native_uploaded_frame_, native_sprite_frame_number_);
    bool stationary = bool(native_stationary_sprites_); ar(stationary);
    if (stationary) {
        if (!native_stationary_sprites_) throw std::runtime_error("Snapshot NPC resources are unavailable");
        native_stationary_sprites_->snapshot_preparation_io(ar, native_stationary_preparation_);
    } else {
        ar(native_stationary_preparation_);
        if (ar.loading()) native_stationary_sprites_.reset();
    }
    bool enemy = native_enemy_preparation_.has_value(); ar(enemy);
    if (enemy) {
        if (!native_enemy_preparation_) throw std::runtime_error("Snapshot enemy resources are unavailable");
        ar(*native_enemy_preparation_);
    } else if (ar.loading()) native_enemy_preparation_.reset();
    oam_io(presentation_oam_); oam_io(presentation_uploaded_oam_);
    ar(presentation_oam_indexed_, presentation_uploaded_oam_indexed_, sprite_snapshot_counts_.builds,
       sprite_snapshot_counts_.queued_draws, sprite_snapshot_counts_.emit_calls,
       sprite_snapshot_counts_.matched_draws, sprite_snapshot_counts_.host_parts,
       sprite_snapshot_counts_.uploads, sprite_snapshot_counts_.unknown_uploads, host_artwork_revision_,
       presentation_objects_uploaded_, host_sprite_geometry_mismatches_, presentation_objects_frame_,
       presentation_world_x_, presentation_world_y_, presentation_boundary_frame_, presentation_shift_x_,
       presentation_clip_left_, presentation_clip_right_);
    if (ar.format_version() >= 2) {
        auto &camera = presentation_camera_;
        ar(camera.valid, camera.combination, camera.x, camera.y, camera.left, camera.right,
           camera.pending_left, camera.pending_right, camera.pending_frames);
        const auto valid_span = [](int left, int right) {
            return left >= 0 && right <= 8192 && left < right && !(left % 256) && !(right % 256);
        };
        if (ar.loading() && camera.valid &&
            (camera.combination > 31 || camera.pending_frames >= 8 ||
             camera.x < -128 || camera.x >= 8064 || camera.y < -112 || camera.y >= 10128 ||
             presentation_shift_x_ < -8192 || presentation_shift_x_ > 8192 ||
             !valid_span(camera.left, camera.right) || !valid_span(camera.pending_left, camera.pending_right)))
            throw std::runtime_error("Invalid snapshot presentation camera");
    } else if (ar.loading()) {
        // Version one predates camera continuity. Its exact machine state and
        // current picture still restore; the next world frame initializes it.
        presentation_camera_ = {};
    }
    if (ar.loading() && (sprite_build_id_ > sprite_builds_.size() || presentation_width_ < 256 || presentation_width_ > 4096 ||
        requested_presentation_width_ < 256 || requested_presentation_width_ > 4096 ||
        (!presentation_framebuffer_.empty() && presentation_framebuffer_.size() != presentation_width_ * 224)))
        throw std::runtime_error("Invalid snapshot renderer dimensions");
}
} // namespace eb
