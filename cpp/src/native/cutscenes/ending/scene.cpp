#include "eb/native/cutscenes/ending/scene.hpp"
#include <algorithm>
#include <stdexcept>
namespace eb::native::cutscenes::ending {
namespace {void require(bool ok,const char *message){if(!ok)throw std::logic_error(message);}}
Scene::Scene(const Resources &resources,State &state,Display &display,WorldStartupOwners world)
    :resources_(resources),state_(state),display_(display),world_(world) {
  const auto &o=display.owners();
  require(resources.version()==display.version()&&&world.actors==&o.actors&&&world.runtime==&o.runtime&&
      &world.party==&o.party&&&world.windows==&o.windows&&&world.interactions==&o.interactions&&&world.clock==&o.clock&&
      world.runtime.compatible_world_state(world.formation,world.trail,world.control,world.maintenance,world.queue,world.following)&&
      world.bootstrap.uses(world.actors,world.party,world.formation,world.trail,world.control,world.maintenance,world.following)&&
      world.creation.uses(world.party,world.actors,world.party_data,world.formation,world.updater,world.spawn.prepared,world.trail,world.area_character_style)&&
      world.refresh.bound_to(world.party,world.actors,world.interactions,world.clock),
      "Credits require the actual regional display, controller and party owners");
}
bool Scene::uses(const story::Scene &scene) const noexcept {return &display_.owners().runtime.scene()==&scene;}
void Scene::bind_actor_graphics(RawActorCreation &graphics) {
  require(!active_&&!failed_&&!actor_graphics_&&graphics.uses(world_.actors),
      "Credits raw graphics must use its actual idle actor owner");actor_graphics_=&graphics;
}
void Scene::bind_photographs(PhotographDisplay &photographs,const EnemyMovementData &motion,PeripheralState *peripherals) {
  require(!active_&&!failed_&&!photographs_&&actor_graphics_&&photographs.uses(*actor_graphics_),
      "Credits photographs must borrow their actual idle raw actor lifecycle");
  photographs_=std::make_unique<Photographs>(resources_,display_,photographs,motion,peripherals);
}
void Scene::bind_asset_work(AssetWork &work,AssetCall call) {
  auto &o=display_.owners();
  auto &clock=work.clock();
  require(o.runtime.scene().uses_source_work(clock)&&!clock.failed()&&
      !active_&&!failed_&&!asset_work_&&!work.busy()&&!work.failed()&&
      !call.destination&&work.uses(resources_.version(),o.scratch,o.video,o.fade)&&work.clock().uses(world_.actors,o.video),
      "Credits asset work requires its actual idle display and physical clock owners");
  display_.bind_source_work(clock);source_work_=&clock;asset_work_=&work;asset_call_=call;
}
void Scene::require_source_work() const {
  require(!world_.runtime.failed()&&(!source_work_||
      (world_.runtime.scene().uses_source_work(*source_work_)&&!source_work_->failed())),
      "Credits lost their healthy actual source clock");
}
void Scene::bind_initializer_work(InitializerWork &work,InitializerCall call) {
  require_source_work();
  auto &o=display_.owners();
  require(!active_&&!failed_&&!initializer_work_&&asset_work_&&!work.busy()&&!work.failed()&&
      !work.clock().failed()&&work.uses(resources_,asset_work_->clock(),o.palette,display_.state().text_tiles,world_.actors,o.video)&&
      bool(call.direct_page_low)==asset_call_.unaligned_direct_page,
      "Credits initializer requires its actual idle resources, palette, text and asset clock owners");
  initializer_work_=&work;initializer_call_=call;
}
void Scene::bind_source_callbacks(SourceCallbackDispatcher &callbacks) {
  require_source_work();
  require(!active_&&!failed_&&!source_callbacks_&&asset_work_&&!asset_work_->clock().failed()&&
      callbacks.bound_to(world_.runtime),
      "Credits callback requires its actual idle runtime dispatcher and physical clock");
  source_callbacks_=&callbacks;
}
bool Scene::supports_current_photographs() const {
  return count_photographs(resources_,world_.windows.state().event_flags)==0||
      (photographs_&&!photographs_->busy()&&!photographs_->failed()&&photographs_->supports_current_photographs());
}
std::unique_ptr<Scene::Operation> Scene::begin(WorldRuntime::Operation *parent) {
  require_source_work();
  require(!active_&&!failed_&&!display_.busy()&&!display_.failed(),"Credits owner is failed or busy");
  require((!asset_work_||(!asset_work_->busy()&&!asset_work_->failed()))&&
      (!initializer_work_||(!initializer_work_->busy()&&!initializer_work_->failed())),
      "Credits require idle healthy bound source helpers");
  world_.runtime.require_content_boundary(parent);
  require(!world_.windows.prompt_state().battle_mode,"Credits require their actual overworld caller");
  require((display_.owners().layout.mode&7)==1,"Credits require their actual inherited Mode1 display");
  require(supports_current_photographs(),"Credits photographs require their actual map and actor display lifecycle");
  require(!world_.actors.in_tick()&&!world_.enemies.busy()&&!world_.creation.busy()&&!world_.creation.failed(),"Credits cannot interrupt actor or party work");
  auto operation=std::unique_ptr<Operation>(new Operation(*this,parent));active_=operation.get();return operation;
}
Scene::Operation::Operation(Scene &owner,WorldRuntime::Operation *parent):owner_(owner),parent_(parent) {}
Scene::Operation::~Operation() {
  if(callback_work_)owner_.source_callbacks_->clear_credits(*callback_work_);
  if(callback_){owner_.display_.owners().runtime.abandon_interrupt_callback(*this);owner_.failed_=true;}
  if(distinct_) {
    try {owner_.display_.owners().presentation.end_distinct_scene(this);}catch(...){owner_.failed_=true;}
  }
  if(owner_.active_==this){owner_.active_=nullptr;owner_.failed_=true;}
}
WorldRuntime::Operation *Scene::Operation::runtime_operation() noexcept {
  return photographs_?photographs_->runtime_operation():helper_?helper_->runtime_operation():runtime_.get();
}
bool Scene::Operation::bicycle_dismount_pending() const noexcept {return tail_&&tail_->service()==story::PartyFormationService::BicycleDismount;}
void Scene::Operation::respond_bicycle_dismount() {
  require(bicycle_dismount_pending(),"Credits have no pending actual bicycle operation");tail_->respond_bicycle_dismount();
}
std::uint16_t Scene::Operation::result() const {require(done_,"Credits result requires actual restoration completion");return 0;}
std::shared_ptr<const DirectSceneFrame> Scene::Operation::capture_display(const DisplayView &view) const {return render(view,owner_.display_.owners().layout);}
void Scene::Operation::validate_publication() const {
  require(callback_&&text_&&!owner_.failed_,"Credits callback lost its actual installed lifecycle");
  require(text_->pending_rows()<126,"Credits callback would exceed its authored row queue");
}
void Scene::Operation::after_publication() {
  validate_publication();auto &o=owner_.display_.owners();
  // Both linked callbacks read GAME_STATE.earthbound_playername; JP uses
  // its bytes directly rather than the US conversion buffer.
  const auto name=o.party.name_field(party::NameField::EarthBoundPlayer);
  text_->advance_callback(name);++owner_.state_.callbacks;
  owner_.state_.converted_name=text_->converted_player_name();
  auto &bytes=owner_.display_.state().text_tiles;const auto &rows=text_->composition_rows();
  if(!text_work_)for(unsigned i=0;i<rows.size();++i){bytes[i*2]=std::uint8_t(rows[i]);bytes[i*2+1]=std::uint8_t(rows[i]>>8);}
  o.video.staged_scroll[2].y=std::uint16_t(text_->state().scroll_position>>16);
  // C0AD9F writes BG3VOFS directly after the shared display body, during
  // this same NMI. It does not wait for another UPDATE_SCREEN selection.
  if(!text_work_)o.video.scroll[2].y=o.video.staged_scroll[2].y;
}
void Scene::Operation::cleanup() {
  auto &w=owner_.world_;w.enemies.reset_population_for_map();
  for(unsigned role=0;role<30;++role)if(const auto id=w.actors.actor_for_role(role)) {
    const unsigned style=w.actors.actor(*id).script_style();
    if(role!=23&&std::uint16_t(style+1)>2){
      if(owner_.actor_graphics_)owner_.actor_graphics_->release(role);
      w.interactions.detach(*id);w.enemies.erase(w.actors,*id);
    }
  }
  if(const auto controller=w.actors.actor_for_role(23)){w.interactions.detach(*controller);w.actors.retire(*controller);}
}
void Scene::Operation::initialize() {
  auto &display=owner_.display_;auto &o=display.owners();const auto &resources=owner_.resources_;
  cleanup();display.configure_background(0,0x3800,0,1);display.configure_background(1,0x7000,0x2000,3);
  display.configure_background(2,0x6c00,0x6000);o.frames.object_size=0x62;o.frames.update_world_screen();
  auto &bytes=o.scratch.bytes;bytes[0]=bytes[1]=0;
  display.transfer({battle::PsiTransferKind::Vram,0,0x1000,0x3800,3});bytes[0]=0x0c;bytes[1]=0x24;
  display.transfer({battle::PsiTransferKind::Vram,0,0x1000,0x7000,9});display.transfer({battle::PsiTransferKind::Vram,1,0x1000,0x7000,15});
  std::copy(resources.frame().begin(),resources.frame().end(),bytes.begin());
  for(unsigned i=0;i<16;++i)o.palette.staged_color(16+i)=resources.frame_palette()[i];
  display.transfer({battle::PsiTransferKind::Vram,0,0x700,0x7000,0});display.transfer({battle::PsiTransferKind::Vram,0x700,0x2000,0x2000,0});
  bytes[0]=bytes[1]=0;display.transfer({battle::PsiTransferKind::Vram,0,0x800,0x6c00,3});
  std::copy(resources.font().begin(),resources.font().end(),bytes.begin());
  display.transfer({battle::PsiTransferKind::Vram,0,std::uint16_t(resources.font().size()),0x6200,0});
  for(unsigned i=0;i<8;++i)o.palette.staged_color(i)=resources.credits()->palette()[i];
  for(unsigned i=0;i<128;++i)o.palette.staged_color(128+i)=resources.sprite_palettes()[i];
  for(unsigned i=16;i<256;++i)o.palette.staged_color(i)=0;
  o.palette.upload_mode=24;o.presentation.restore_overworld_layers();
  std::fill_n(display.state().text_tiles.begin(),1024,0);
  initialize_text();
}
void Scene::Operation::initialize_text() {
  auto &display=owner_.display_;auto &o=display.owners();
  text_=std::make_unique<CreditsTextScene>(owner_.resources_.credits(),owner_.state_.converted_name);
  if(!owner_.source_callbacks_)return;
  NameBoundaryOwners boundaries;
  boundaries.after_encoded_name=[&party=o.party] {
    return std::optional<std::uint8_t>(party.name_field(party::NameField::Pet).front());
  };
  // DELIVERY_ATTEMPTS does not yet have a live native owner. A completely
  // occupied converted US field remains a checked timing admission gate.
  text_work_=std::make_unique<CreditsWork>(*text_,owner_.world_.trail,display.state().text_tiles,o.video,std::move(boundaries));
  callback_work_=std::make_unique<SourceCreditsCallbackWork>(o.runtime,*this,*text_work_,[&party=o.party] {
    return party.name_field(party::NameField::EarthBoundPlayer);
  });
  owner_.source_callbacks_->bind_credits(*callback_work_);
}
bool Scene::Operation::initialize_assets() {
  if(!owner_.asset_work_){initialize();return true;}
  auto &work=*owner_.asset_work_;auto &display=owner_.display_;auto &o=display.owners();
  const auto &resources=owner_.resources_;auto &bytes=o.scratch.bytes;
  // Each continuation owns its real word stores before the literal cost.
  // The source DP alignment/code bank remain explicit caller inputs.
  const auto call=owner_.asset_call_;
  if(assets_) {
    if(assets_->advance(1)!=dialogue::Progress::Finished)return false;
    assets_.reset();++initialize_stage_;
  }
  if(initializer_) {
    if(initializer_->advance(1)!=dialogue::Progress::Finished)return false;
    initializer_.reset();++initialize_stage_;
  }
  const auto copy=[&](std::uint16_t source,std::uint16_t count,std::uint16_t destination,std::uint8_t mode) {
    assets_=work.begin_copy({battle::PsiTransferKind::Vram,source,count,destination,mode},call);
  };
  const auto palette=[&](PalettePart part,unsigned first,std::span<const std::uint16_t> colors) {
    if(owner_.initializer_work_)
      initializer_=owner_.initializer_work_->begin_palette_copy(part,owner_.initializer_call_);
    else {for(unsigned i=0;i<colors.size();++i)o.palette.staged_color(first+i)=colors[i];++initialize_stage_;}
  };
  switch(initialize_stage_) {
  case 0:
    cleanup();display.configure_background(0,0x3800,0,1);display.configure_background(1,0x7000,0x2000,3);
    display.configure_background(2,0x6c00,0x6000);o.frames.object_size=0x62;o.frames.update_world_screen();
    bytes[0]=bytes[1]=0;copy(0,0x1000,0x3800,3);break;
  case 1:bytes[0]=0x0c;bytes[1]=0x24;copy(0,0x1000,0x7000,9);break;
  case 2:copy(1,0x1000,0x7000,15);break;
  case 3:assets_=work.begin_decode(resources.compressed_frame(),call);break;
  case 4:palette(PalettePart::Frame,16,resources.frame_palette());break;
  case 5:copy(0,0x700,0x7000,0);break;
  case 6:copy(0x700,0x2000,0x2000,0);break;
  case 7:bytes[0]=bytes[1]=0;copy(0,0x800,0x6c00,3);break;
  case 8:assets_=work.begin_decode(resources.compressed_font(),call);break;
  case 9:copy(0,std::uint16_t(resources.font().size()),0x6200,0);break;
  case 10:palette(PalettePart::Font,0,resources.credits()->palette());break;
  case 11:palette(PalettePart::Sprites,128,resources.sprite_palettes());break;
  case 12:
    if(owner_.initializer_work_)initializer_=owner_.initializer_work_->begin_palette_clear(owner_.initializer_call_);
    else {for(unsigned i=16;i<256;++i)o.palette.staged_color(i)=0;++initialize_stage_;}
    break;
  case 13:
    o.palette.upload_mode=24;o.presentation.restore_overworld_layers();
    if(owner_.initializer_work_)initializer_=owner_.initializer_work_->begin_text_clear(owner_.initializer_call_);
    else {std::fill_n(display.state().text_tiles.begin(),1024,0);++initialize_stage_;}
    break;
  case 14:
    initialize_text();return true;
  default:throw std::logic_error("Invalid credits asset initialization continuation");
  }
  return false;
}

void Scene::Operation::wait() {
  auto &runtime=owner_.display_.owners().runtime;
  runtime_=parent_?runtime.begin_nested(story::TickKind::WorldFrame,*parent_):runtime.begin(story::TickKind::WorldFrame);
  ++owner_.state_.foreground_frames;
}
void Scene::Operation::row() {
  const auto pending=text_->next_publication();if(!pending)return;
  auto &display=owner_.display_;auto &o=display.owners();const auto p=*pending;
  const auto source=p.clear?owner_.resources_.wipe_source():std::span<const std::uint8_t>(display.state().text_tiles);
  transfer_=o.video.begin_transfer({battle::PsiTransferKind::Vram,std::uint16_t(p.clear?0:p.source_row*64),
      std::uint16_t(p.count*2),std::uint16_t(0x6c00+p.destination_row*32+p.column),std::uint8_t(p.clear?3:0),
      source,p.clear?owner_.resources_.wipe_identity():display.version()==GameVersion::JP?0x7e8176u:0x7e7dfeu},o.scratch,o.fade);
}
dialogue::Progress Scene::Operation::advance(unsigned budget) {
  require(!executing_&&!owner_.failed_,"Credits owner is failed or reentrant");if(done_)return dialogue::Progress::Finished;
  owner_.require_source_work();
  executing_=true;
  try {auto &display=owner_.display_;auto &o=display.owners();auto &w=owner_.world_;
    while(budget--) {
      if(photographs_) {
        const auto before=photographs_->state();
        const auto p=photographs_->advance(1);
        const auto &after=photographs_->state();
        owner_.state_.photographs=after;
        owner_.state_.foreground_frames+=after.foreground_frames-before.foreground_frames;
        owner_.state_.row_publications+=after.row_publications-before.row_publications;
        if(p==dialogue::Progress::Suspended){executing_=false;return p;}
        if(p!=dialogue::Progress::Finished)continue;
        photographs_.reset();phase_=10;
      }
      if(runtime_) {
        const auto p=runtime_->advance(1);if(p==dialogue::Progress::Suspended){executing_=false;return p;}
        if(p!=dialogue::Progress::Finished)continue;
        runtime_.reset();if(transfer_&&transfer_->needs_publication())transfer_->respond();
        if(creation_publication_){creation_->respond_graphics_publication();creation_publication_=false;}
      }
      if(helper_) {
        const auto p=helper_->advance(1);if(p==dialogue::Progress::Suspended){executing_=false;return p;}
        if(p!=dialogue::Progress::Finished)continue;
        helper_.reset();
      }
      if(transfer_) {
        if(!transfer_->advance()){runtime_=display.begin_publication(parent_);continue;}
        transfer_.reset();require(text_->publish_next_row(),"Credits row disappeared during actual DMA admission");++owner_.state_.row_publications;
      }
      switch(phase_) {
      case 0: {
        const auto retained=owner_.state_.converted_name;owner_.state_={};owner_.state_.converted_name=retained;
        w.clock.disabled_transitions=1;helper_=display.blank(battle::DisplayBlankKind::Reset,parent_);phase_=1;break;
      }
      case 1:if(initialize_assets()){helper_=display.blank(battle::DisplayBlankKind::Retain,parent_);phase_=2;}break;
      case 2:
        o.presentation.begin_distinct_scene(*this);distinct_=true;o.fade.begin_in(1,2);
        if(count_photographs(owner_.resources_,w.windows.state().event_flags))
          photographs_=owner_.photographs_->begin(*text_,parent_);
        callback_=true;o.runtime.set_interrupt_callback(*this,parent_);phase_=photographs_?5:10;break;
      case 5:throw std::logic_error("Credits photographs vanished before their source loop returned");
      case 10:
        if(o.video.staged_scroll[2].y>=owner_.resources_.credits()->scroll_length()) {
          if(callback_work_)owner_.source_callbacks_->revoke_credits(*callback_work_,parent_);
          else o.runtime.reset_interrupt_callback(parent_);
          callback_=false;phase_=20;break;
        }
        row();phase_=11;break;
      case 11:wait();phase_=10;break;
      case 20:
        if(hold_<2000){wait();++hold_;++owner_.state_.hold_frames;break;}
        helper_=display.fade_out(1,2,parent_);phase_=30;break;
      case 30:
        // C4249A(B3,0): actual color-window setup. Music is retained.
        o.visual.color_math_layers={true,true,false,false,true,true};o.visual.subtract=true;o.visual.half_intensity=false;
        o.visual.use_subscreen=false;o.visual.clip_colors=ColorWindowPolicy::Never;o.visual.prevent_math=ColorWindowPolicy::Outside;
        o.visual.fixed_color={};o.visual.window_left[0]=0;o.visual.window_right[0]=255;
        o.visual.window_layers[4]=false;o.visual.window_layers[5]=true;o.visual.window_invert=false;
        helper_=display.blank(battle::DisplayBlankKind::Reset,parent_);phase_=31;break;
      case 31:
        o.layout.mode=std::uint8_t((o.layout.mode&0xf0)|9);display.configure_background(0,0x3800,0,1);
        display.configure_background(1,0x5800,0x2000,1);display.configure_background(2,0x7c00,0x6000);o.frames.object_size=0x62;
        cleanup();w.bootstrap.create_controller_and_initialize(w.spawn.prepared);
        creation_=owner_.actor_graphics_?w.creation.begin_rebuild(*owner_.actor_graphics_):w.creation.begin_rebuild();phase_=32;break;
      case 32:
        if(tail_) {
          if(tail_->advance()==dialogue::Progress::Suspended){executing_=false;return dialogue::Progress::Suspended;}
          tail_.reset();creation_->respond();
        }
        if(creation_->advance()){creation_.reset();phase_=33;break;}
        if(creation_->service()&&creation_->service()->kind==WorldPartyCreationServiceKind::GraphicsPublication) {
          runtime_=display.begin_publication(parent_);creation_publication_=true;break;
        }
        require(creation_->service()&&creation_->service()->kind!=WorldPartyCreationServiceKind::CompareInsertionMember,"Credits cannot invent an insertion comparison");
        tail_=w.refresh.begin_tail(creation_->service()->kind==WorldPartyCreationServiceKind::RefreshMovementPolicy?WorldPartyService::RefreshMovementPolicy:WorldPartyService::RefreshWindowPalette);break;
      case 33:std::fill_n(display.state().text_tiles.begin(),1024,0);helper_=display.restore_windows(parent_);phase_=34;break;
      case 34:
        o.presentation.restore_overworld_layers();o.presentation.end_distinct_scene(this);distinct_=false;
        o.runtime.restore_world_interrupt_callback(parent_);w.clock.disabled_transitions=0;
        done_=true;owner_.active_=nullptr;executing_=false;return dialogue::Progress::Finished;
      default:throw std::logic_error("Invalid credits source continuation phase");
      }
    }
    executing_=false;return dialogue::Progress::BudgetExhausted;
  }catch(...){executing_=false;owner_.failed_=true;throw;}
}
}
