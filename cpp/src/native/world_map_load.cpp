#include "eb/native/world_map_load.hpp"
#include "eb/native/world_scene_presentation.hpp"
#include "eb/native/party/condition.hpp"
#include "eb/native/battle/palette_effects.hpp"
#include "eb/native/world_display_fade.hpp"
#include "eb/native/entities/graphics/lifecycle.hpp"
#include <algorithm>
#include <bit>
#include <stdexcept>

namespace eb::native {
namespace {
void require(bool condition, const char *message) {
  if (!condition) throw std::logic_error(message);
}
}
WorldMapLoad::WorldMapLoad(WorldMapLoadState &state, WorldMapLoadOwners owners)
    : state_(state), owners_(owners) {
  preflight();
  owners_.windows.bind_ambient_animation_source(state_.animation_staging);
  owners_.windows.bind_ambient_animation_layout(state_.animation_staging);
  owners_.runtime.bind_collision_window(state_.collision_window);
}
void WorldMapLoad::require_bindings() const {
  const auto &o = owners_;
  require(o.runtime.uses(o.windows, o.party, o.actors, o.clock, o.spawn) &&
          o.runtime.uses_map_load(o.actors, o.enemies, o.area, o.palettes,
              o.map_content, o.palette_content, o.animation_content, o.spawn,
              o.random, o.windows, o.presentation) &&
              o.runtime.uses(o.interactions) &&
              o.presentation.uses(o.scene_colors) && o.windows.uses(o.window_graphics) &&
              o.overlays.uses(o.actors) && o.actors.uses_overlays(o.overlays) &&
              !o.overlays.failed() &&
              o.actors.uses_enemies(o.enemies),
          "Map loading requires the runtime's actual content and live owners");
}
void WorldMapLoad::preflight(WorldRuntime::Operation *parent, bool photograph) const {
  require(!failed_ && !active_, "Map loader is failed or already active");
  require_bindings();
  owners_.runtime.require_content_boundary(parent);
  require(!owners_.actors.in_tick() && !owners_.enemies.busy(),
          "Map loading cannot interrupt actor or enemy work");
  require(owners_.spawn.photograph==photograph && !owners_.windows.prompt_state().debug,
          "Map loading requires its actual admitted palette mode");
  if(photograph)
    require(video_ && !owners_.spawn.enemies,
            "Photograph map loading requires its actual display and disabled enemies");
  else if(video_) {
    const bool white=state_.wipe_palettes && !fade_->state().step && palette_ &&
        !palette_->upload_mode && std::all_of(palette_->displayed.begin(),palette_->displayed.end(),
            [](const auto &bank){return std::all_of(bank.begin(),bank.end(),
                [](std::uint16_t color){return color==0x7fff;});});
    const bool fading=owners_.clock.disabled_transitions && (fade_->state().step&0x80) &&
        (owners_.clock.effective_interrupt_mask()&0x80);
    require((fade_->state().brightness&0x80)||white||fading,
            "Physical map loading requires its actual blank, white or disabled-transition fade");
  }
  if(video_&&!photograph)(void)owners_.overlays.raw_uploads();
  const auto &flags = owners_.windows.state().event_flags;
  require(flags.size() == 128 && owners_.actors.scene().event_flags.data() == flags.data(),
          "Map loading lost its authoritative story flags");
  require(state_.loaded_combination.has_value() == state_.loaded_palette.has_value(),
          "Map loader selection is incomplete");
  if (state_.loaded_combination)
    require(*state_.loaded_combination == owners_.area.combination(),
            "Map loader selection no longer owns the active artwork");
}
void WorldMapLoad::bind_display_transport(battle::PsiScratch &scratch,
    battle::PsiDisplayState &video, battle::PaletteBankState &palette,
    battle::FrameDisplay &frames, WorldDisplayFade &fade) {
  require(!active_&&!failed_,"Map display binding requires an idle healthy loader");
  require_bindings();
  require((!video_||video_==&video) && (!scratch_||scratch_==&scratch) &&
          (!palette_||palette_==&palette) && (!frames_||frames_==&frames) &&
          (!fade_||fade_==&fade) && frames.uses(video) &&
          owners_.presentation.uses_video_transport(video,scratch) &&
          owners_.presentation.uses_palette_transport(palette) &&
          owners_.presentation.frame_display()==&frames &&
          owners_.presentation.display_fade()==&fade,
          "Map loading must borrow its actual shared display transport");
  owners_.runtime.bind_map_palette_backup(state_.map_palette_backup,video);
  scratch_=&scratch;video_=&video;palette_=&palette;frames_=&frames;fade_=&fade;
}
std::unique_ptr<WorldMapLoad::Operation> WorldMapLoad::begin_photograph(CameraPosition center,
    std::span<const std::uint8_t> palettes, std::uint16_t offset, WorldRuntime::Operation *parent) {
  preflight(parent,true);
  require(palettes.size()<=65536 && offset<=palettes.size() && 192<=palettes.size()-offset,
          "Photograph map palette exceeds its actual decoded content");
  auto operation=std::unique_ptr<Operation>(new Operation(*this,center,false,parent));
  operation->photograph_=true;operation->photograph_palettes_=palettes;
  operation->photograph_palette_offset_=offset;
  video_->transient_memory().clear_for_photograph();
  active_=operation.get();return operation;
}
bool WorldMapLoad::uses(const WorldRuntime &runtime, const ActorWorld &actors,
    const WorldEnemies &enemies, const npcs::Interactions &interactions,
    const WorldSpawnControls &spawn, const dialogue::WindowHost &windows,
    const ScenePalette &colors) const noexcept {
  return &owners_.runtime == &runtime && &owners_.actors == &actors &&
      &owners_.enemies == &enemies && &owners_.interactions == &interactions &&
      &owners_.spawn == &spawn && &owners_.windows == &windows &&
      &owners_.scene_colors == &colors;
}
bool WorldMapLoad::uses(const story::RandomState &random) const noexcept {
  return &owners_.random == &random;
}
bool WorldMapLoad::uses(const dialogue::WindowGraphics &graphics) const noexcept {
  return &owners_.window_graphics == &graphics;
}
bool WorldMapLoad::uses_display_transport(const battle::PsiScratch &scratch,
    const battle::PsiDisplayState &video, const WorldDisplayFade &fade) const noexcept {
  return scratch_==&scratch && video_==&video && fade_==&fade;
}
void WorldMapLoad::initialize_overworld() {
  preflight();
  if(video_) {
    owners_.presentation.setup_overworld_video();
    scratch_->bytes[0]=0;scratch_->bytes[1]=0;
    auto clear=video_->begin_transfer({battle::PsiTransferKind::Vram,0,0,0,3},*scratch_,*fade_);
    require(clear->advance() && clear->complete(),
        "OVERWORLD_INITIALIZE requires its completed forced-blank VRAM clear");
  }
  owners_.runtime.clear_world_capture();
  state_.loaded_combination.reset();
  state_.loaded_palette.reset();
}
std::unique_ptr<WorldMapLoad::Operation> WorldMapLoad::begin(CameraPosition center) {
  preflight();
  auto operation = std::unique_ptr<Operation>(new Operation(*this, center));
  active_ = operation.get();
  return operation;
}
std::unique_ptr<WorldMapLoad::Operation> WorldMapLoad::begin_nested(CameraPosition center, WorldRuntime::Operation &parent) {
  preflight(&parent);
  auto operation=std::unique_ptr<Operation>(new Operation(*this,center,false,&parent));
  active_=operation.get();return operation;
}
std::unique_ptr<WorldMapLoad::Operation> WorldMapLoad::begin_reload(CameraPosition center) {
  preflight();
  auto operation = std::unique_ptr<Operation>(new Operation(*this, center, true));
  state_.loaded_combination.reset();
  state_.loaded_palette.reset();
  active_ = operation.get();
  return operation;
}
std::unique_ptr<WorldMapLoad::Operation> WorldMapLoad::begin_reload_nested(CameraPosition center, WorldRuntime::Operation &parent) {
  preflight(&parent);
  auto operation = std::unique_ptr<Operation>(new Operation(*this, center, true, &parent));
  state_.loaded_combination.reset();
  state_.loaded_palette.reset();
  active_ = operation.get();
  return operation;
}
WorldMapLoad::Operation::Operation(WorldMapLoad &owner, CameraPosition center, bool reload, WorldRuntime::Operation *parent)
    : owner_(owner), center_(center), selection_(center), reload_(reload), parent_(parent) {
  if(owner_.video_&&!owner_.owners_.spawn.photograph)
    overlay_uploads_=owner_.owners_.overlays.raw_uploads();
  if (reload_) stage_ = WorldMapLoadStage::PrepareArea;
  const auto &s = owner_.state_;
  if (s.teleport_tile_x || s.teleport_tile_y) {
    require(s.teleport_tile_x / 32 < 32 && s.teleport_tile_y / 16 < 80,
            "Map teleport sector is outside imported content");
    selection_ = {std::uint16_t((s.teleport_tile_x / 32) * 256),
                  std::uint16_t((s.teleport_tile_y / 16) * 128)};
  }
  (void)owner_.owners_.map_content.sector(selection_.x / 256, selection_.y / 128);
  (void)owner_.owners_.palette_content.area_at(selection_.x, selection_.y);
}
WorldMapLoad::Operation::~Operation() {
  if (owner_.active_ == this) {
    owner_.active_ = nullptr;
    owner_.failed_ = true;
  }
}
WorldMapLoadStage WorldMapLoad::Operation::stage() const noexcept { return stage_; }
std::unique_ptr<WorldRuntime::Operation> WorldMapLoad::Operation::begin_palette_wait() {
  require(!owner_.failed_ && !executing_ && owner_.active_==this &&
          stage_==WorldMapLoadStage::PublishColors && owner_.owners_.clock.disabled_transitions,
          "Palette wait requires its actual disabled-transition map continuation");
  owner_.require_bindings();
  return owner_.owners_.runtime.begin_retained_publication(parent_);
}
bool WorldMapLoad::Operation::complete() const noexcept {
  return stage_ == WorldMapLoadStage::Complete;
}
void WorldMapLoad::Operation::wait_transport() {
  runtime_=owner_.owners_.runtime.begin_retained_publication(parent_);
}
bool WorldMapLoad::Operation::advance_transport() {
  auto &loader=owner_;auto &o=loader.owners_;auto &scratch=*loader.scratch_;
  auto &video=*loader.video_;
  if(runtime_) {
    if(runtime_->advance(1)!=dialogue::Progress::Finished)return false;
    runtime_.reset();
    if(transport_phase_==3)o.clock.new_frame_started=0;
    if(transfer_&&transfer_->needs_publication())transfer_->respond();
  }
  if(transfer_) {
    if(!transfer_->advance()){wait_transport();return false;}
    transfer_.reset();return false;
  }
  if(transport_finished_)return true;
  const auto word=[](const MapTile &t) {
    return std::uint16_t(t.graphic|(t.palette<<10)|(unsigned(t.priority)<<13)|
                         (unsigned(t.flip_x)<<14)|(unsigned(t.flip_y)<<15));
  };
  const auto copy_word=[&](unsigned at,std::uint16_t value){scratch.bytes[at]=std::uint8_t(value);scratch.bytes[at+1]=std::uint8_t(value>>8);};
  switch(transport_phase_) {
  case 0: {
    for(unsigned block=0;block<o.area.collision_offsets().size();++block)
      copy_word(0xf800+block*2,o.area.collision_offsets()[block]);
    unsigned at=0x8000;
    for(const auto &block:o.area.blocks())for(const auto &tile:block.tiles){copy_word(at,word(tile));at+=2;}
    const auto combination=o.area.combination();
    if(o.map_content.tileset(o.area.tileset_id()).graphics_bytes.size()>0x8000)
      throw std::logic_error("Map graphics exceed source BUFFER prefix");
    if(loader.state_.loaded_combination!=combination) {
      const auto &bytes=o.map_content.tileset(o.area.tileset_id()).graphics_bytes;
      std::copy(bytes.begin(),bytes.end(),scratch.bytes.begin());
      transfer_=video.begin_transfer({battle::PsiTransferKind::Vram,0,
          std::uint16_t(photograph_?0x4000:0x7000),0,0},scratch,*loader.fade_);
    }
    transport_phase_=1;return false;
  }
  case 1:
    // The original palette decoder runs while the graphics transfer completes.
    // Its BUFFER overwrite cannot race a still-unpublished graphics prefix.
    if(photograph_ && video.pending_bytes()){wait_transport();return false;}
    if(photograph_)std::copy(photograph_palettes_.begin(),photograph_palettes_.end(),scratch.bytes.begin());
    transport_phase_=2;return true;
  case 4: {
    if(overlay_row_==overlay_uploads_.size()) {
      transport_phase_=5;return true;
    }
    const auto &row=overlay_uploads_[overlay_row_++];
    transfer_=video.begin_transfer({battle::PsiTransferKind::Vram,row.source_offset,
        row.byte_count,row.destination,0,row.bank,row.source_identity},scratch,*loader.fade_);
    return false;
  }
  case 3: {
    if(transport_row_==32) {
      const auto scroll=battle::PsiScroll{std::uint16_t(center_.x-128),std::uint16_t(center_.y-112)};
      video.staged_scroll[0]=scroll;video.staged_scroll[1]=scroll;
      transport_finished_=true;return true;
    }
    if(!row_) {
      row_=video.transient_memory().allocate(256);
      if(!row_){wait_transport();return false;}
      const auto x=std::uint16_t((center_.x>>3)-17),y=std::uint16_t((center_.y>>3)-15+transport_row_);
      for(unsigned column=0;column<34;++column) {
        const auto tile=o.area.tile(std::bit_cast<std::int16_t>(std::uint16_t(x+column)),std::bit_cast<std::int16_t>(y));
        const auto primary=word(tile);
        const auto secondary=tile.graphic<384?std::uint16_t(primary|0x2000):std::uint16_t{};
        const unsigned slot=(std::uint16_t(x+column)&63)*2;
        row_->bytes[slot]=std::uint8_t(primary);row_->bytes[slot+1]=std::uint8_t(primary>>8);
        row_->bytes[128+slot]=std::uint8_t(secondary);row_->bytes[128+slot+1]=std::uint8_t(secondary>>8);
      }
    }
    const unsigned copies=photograph_?2:4;
    if(transport_copy_==copies){row_.reset();transport_copy_=0;++transport_row_;return false;}
    const unsigned y=std::uint16_t((center_.y>>3)-15+transport_row_);
    const unsigned source=(transport_copy_/2)*128+(transport_copy_%2)*64;
    const unsigned destination=(transport_copy_/2?0x5800:0x3800)+(transport_copy_%2)*0x400+(y&31)*32;
    transfer_=video.begin_transfer({battle::PsiTransferKind::Vram,
        std::uint16_t(row_->offset+source),64,std::uint16_t(destination),0,
        row_->bank,row_->identity},scratch,*loader.fade_);
    ++transport_copy_;return false;
  }
  default:throw std::logic_error("Map display transport lost its actual source phase");
  }
}
bool WorldMapLoad::Operation::advance(unsigned budget) {
  require(budget != 0, "Map loading work budget must be positive");
  require(!owner_.failed_ && !executing_, "Map loading is failed or reentrant");
  if (complete()) return true;
  require(owner_.active_ == this, "Map operation lost its owner");
  executing_ = true;
  try {
    auto &o = owner_.owners_;
    auto &s = owner_.state_;
    owner_.require_bindings();
    while (budget--) {
      if(stage_==WorldMapLoadStage::Activate&&runtime_) {
        if(runtime_->advance(1)!=dialogue::Progress::Finished){executing_=false;return false;}
        runtime_.reset();o.runtime.respond_streaming_publication();
      }
      if (!runtime_ && (parent_ || stage_ != WorldMapLoadStage::Activate || !o.runtime.streaming()))
        o.runtime.require_content_boundary(parent_);
      switch (stage_) {
      case WorldMapLoadStage::Cleanup:
        o.enemies.reset_population_for_map();
        // Source increments the word before comparing with6: styles0..5 and
        // vacantFFFF survive; every other authored role releases in order.
        for (unsigned role = 0; role < 30; ++role)
          if (const auto id = o.actors.actor_for_role(role))
            if (std::uint16_t(o.actors.actor(*id).script_style() + 1) > 6) {
              if(auto *graphics=o.runtime.actor_graphics())graphics->release(role);
              o.interactions.detach(*id);
              o.enemies.erase(o.actors, *id);
            }
        o.actors.clear_collision_targets();
        stage_ = WorldMapLoadStage::PrepareArea;
        break;
      case WorldMapLoadStage::PrepareArea: {
        const auto combination = o.map_content.sector(selection_.x / 256, selection_.y / 128).combination;
        const bool retained = s.loaded_combination == combination;
        if(photograph_) {
          std::array<std::uint16_t,96> scenery;
          for(unsigned i=0;i<scenery.size();++i)scenery[i]=std::uint16_t(photograph_palettes_[photograph_palette_offset_+i*2]|
              (unsigned(photograph_palettes_[photograph_palette_offset_+i*2+1])<<8));
          std::array<std::uint16_t,16> sprite_override{};
          std::span<const std::uint16_t> override_words;
          if(scenery[32]>=16) {
            // LOAD_SPECIAL_SPRITE_PALETTE multiplies the retained selector in
            // 16 bits. Authored photo31 therefore reads the actual display
            // heap at2220, rather than an imported sprite palette.
            const auto address=std::uint16_t(0x200u+unsigned(scenery[32])*32u);
            sprite_override=owner_.video_->transient_memory().read_words16(address);
            override_words=sprite_override;
          }
          o.runtime.prepare_photograph_area(selection_,retained,scenery,owner_.palette_->staged[1],override_words,parent_);
        } else o.runtime.prepare_area(selection_, retained, parent_);
        const auto &tileset = o.map_content.tileset(o.area.tileset_id());
        if (!photograph_ && !tileset.animations.empty())
          std::copy(tileset.animation_bytes.begin(), tileset.animation_bytes.end(),
                    s.animation_staging.begin());
        if (!photograph_ && !retained) {
          std::array<dialogue::WindowArtwork, 1184> staging{};
          require(o.area.graphics().size() * 2 >= staging.size(),
                  "Map artwork does not cover shared window staging");
          // Each native4bpp map tile supplies two native2bpp artwork cells.
          // This is the actual shared decompression result consumed later by
          // LOAD_WINDOW_GFX's retained-cell composition, not a memory image.
          for (unsigned i = 0; i < staging.size(); ++i)
            for (unsigned pixel = 0; pixel < 64; ++pixel)
              staging[i][pixel] = (o.area.graphics()[i / 2][pixel] >> ((i % 2) * 2)) & 3;
          if (parent_)
            o.window_graphics.retain_prepared_artwork(0, staging, o.runtime.dialogue_owner(*parent_));
          else
            o.window_graphics.retain_prepared_artwork(0, staging);
        }
        s.collision_window.load(center_,o.area);
        stage_ = WorldMapLoadStage::PublishColors;
        break;
      }
      case WorldMapLoadStage::PublishColors: {
        if(owner_.video_ && transport_phase_!=2) {
          if(!advance_transport() || transport_phase_!=2) {
            executing_=false;return false;
          }
        }
        o.presentation.publish_area(o.palettes);
        if(owner_.video_&&!photograph_)transport_phase_=4;
        stage_=WorldMapLoadStage::LoadOverlays;
        break;
      }
      case WorldMapLoadStage::LoadOverlays: {
        if(owner_.video_&&!photograph_&&transport_phase_!=5) {
          if(!advance_transport() || transport_phase_!=5) {
            executing_=false;return false;
          }
        }
        if(!photograph_)o.overlays.reset_after_map_load();
        if(!photograph_)o.windows.publish_palette(o.clock.flavor,
            party::last_controlled_status(o.party) != 0,
            o.clock.disabled_transitions != 0);
        std::array<std::uint16_t, 256> raw_colors{};
        for (unsigned color = 0; color < raw_colors.size(); ++color)
          raw_colors[color] = color < 32 ? photograph_?owner_.palette_->staged_color(color):o.windows.palette()[color]
              : color < 128 ? o.palettes.scenery_word(color / 16 - 2, color % 16)
                            : o.palettes.sprite_word(color / 16 - 8, color % 16);
        std::copy(raw_colors.begin() + 32, raw_colors.end(), s.map_palette_backup.begin());
        if (s.wipe_palettes) {
          s.map_palette_scratch = raw_colors;
          if(owner_.scratch_)for(unsigned color=0;color<raw_colors.size();++color) {
            owner_.scratch_->bytes[color*2]=std::uint8_t(raw_colors[color]);
            owner_.scratch_->bytes[color*2+1]=std::uint8_t(raw_colors[color]>>8);
          }
          std::array<dialogue::WindowArtwork, 32> scratch_artwork{};
          for (unsigned cell = 0; cell < scratch_artwork.size(); ++cell)
            for (unsigned row = 0; row < 8; ++row) {
              const unsigned color = cell * 8 + row;
              const auto packed = raw_colors[color];
              for (unsigned x = 0; x < 8; ++x)
                scratch_artwork[cell][row * 8 + x] = ((packed >> (7 - x)) & 1) |
                    (((packed >> (15 - x)) & 1) << 1);
            }
          if (parent_)
            o.window_graphics.retain_prepared_artwork(0, scratch_artwork, o.runtime.dialogue_owner(*parent_));
          else
            o.window_graphics.retain_prepared_artwork(0, scratch_artwork);
          o.presentation.fill_palette(0xffff);
          s.wipe_palettes = false;
        }
        s.loaded_combination = o.area.combination();
        // The source remembers the requested sector variant, independently of
        // the resolved palette's event-conditional selection.
        s.loaded_palette = o.palette_content.area_at(selection_.x, selection_.y).variant;
        if(!photograph_)o.presentation.restore_overworld_layers();
        if(photograph_) {
          s.map_palette_scratch=raw_colors;
          for(unsigned i=0;i<256;++i){owner_.scratch_->bytes[i*2]=std::uint8_t(raw_colors[i]);owner_.scratch_->bytes[i*2+1]=std::uint8_t(raw_colors[i]>>8);}
          std::array<std::uint16_t,240> zero{};
          o.presentation.publish_scene_palette_range(16,zero,24);
        }
        // LOAD_MAP_AT_SECTOR's final C0856B(24) supersedes the window-only
        // upload intent and includes the actual restored sprite banks.
        if(owner_.palette_)owner_.palette_->upload_mode=24;
        if(owner_.video_) {
          if(!photograph_)o.presentation.setup_overworld_video();
          transport_phase_=3;
        }
        if (reload_) {
          o.runtime.reload_camera(center_, parent_);
          stage_ = WorldMapLoadStage::Capture;
        } else {
          o.runtime.begin_initial_activation(center_, parent_);
          stage_ = WorldMapLoadStage::Activate;
        }
        break;
      }
      case WorldMapLoadStage::Activate:
        if (o.runtime.advance_streaming(1, parent_)) stage_ = WorldMapLoadStage::Capture;
        else if(o.runtime.streaming_needs_publication()) {
          runtime_=o.runtime.begin_streaming_publication(parent_);executing_=false;return false;
        }
        break;
      case WorldMapLoadStage::Capture:
        if(owner_.video_&&!transport_finished_) {
          if(!advance_transport() || !transport_finished_) {
            executing_=false;return false;
          }
        }
        o.runtime.refresh_world_capture(parent_);
        stage_ = WorldMapLoadStage::Complete;
        owner_.active_ = nullptr;
        executing_ = false;
        return true;
      case WorldMapLoadStage::Complete:
        executing_ = false;
        return true;
      }
    }
    executing_ = false;
    return false;
  } catch (...) {
    executing_ = false;
    owner_.failed_ = true;
    throw;
  }
}
} // namespace eb::native
