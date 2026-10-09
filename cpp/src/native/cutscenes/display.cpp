#include "eb/native/cutscenes/display.hpp"
#include "eb/native/dialogue/window_buffer.hpp"
#include "eb/native/party/condition.hpp"
#include "eb/native/story/source_work.hpp"
#include <algorithm>
#include <stdexcept>
namespace eb::native::cutscenes {
namespace {
void require(bool ok,const char *message){if(!ok)throw std::logic_error(message);}
}
Display::Display(GameVersion version,DisplayState &state,DisplayOwners owners)
    :version_(version),state_(state),owners_(owners),
     synchronous_fade_(owners.runtime,owners.fade,owners.frames,owners.clock,version) {
  const auto &o=owners_;
  require(version==o.party.version()&&version==o.audio.version()&&
      o.runtime.uses(o.interactions) && &o.interactions.windows()==&o.windows&&
      o.runtime.scene().uses(o.clock)&&o.runtime.scene().uses(o.windows,o.party)&&
      o.runtime.scene().publication()==&o.presentation&&o.windows.uses(o.graphics)&&
      o.presentation.uses_visual(o.visual)&&o.presentation.frame_display()==&o.frames&&
      o.presentation.display_fade()==&o.fade&&o.presentation.uses_palette_transport(o.palette)&&
      o.frames.uses(o.video)&&o.background_loader.uses(o.background,o.palette,o.scratch,o.video,o.frames)&&
      o.battle_frame.uses(o.background_loader) && o.blank.uses(o.fade,o.clock,o.runtime.scene()),
      "Cinematic display requires the actual regional world and battle display owners");
  owners_.video.transient_memory().configure(version_);
  owners_.map_load.bind_display_transport(owners_.scratch,owners_.video,owners_.palette,owners_.frames,owners_.fade);
}
void Display::bind_source_work(story::SourceWorkService &work) {
  require(!active_&&!failed_&&owners_.runtime.scene().uses_source_work(work)&&!work.failed()&&
      (!source_work_||source_work_==&work)&&work.uses(owners_.actors,owners_.video),
      "Cinematic work requires its actual idle shared Scene and video owners");
  source_work_=&work;
}
std::unique_ptr<Display::Operation> Display::begin(Kind kind,WorldRuntime::Operation *parent) {
  require(!failed_&&!active_,"Cinematic display helper is failed or busy");
  require(!source_work_||owners_.runtime.scene().uses_source_work(*source_work_),
      "Cinematic work lost its actual Scene owner");
  owners_.runtime.require_content_boundary(parent);
  auto result=std::unique_ptr<Operation>(new Operation(*this,kind,parent));active_=result.get();return result;
}
std::unique_ptr<Display::Operation> Display::blank(battle::DisplayBlankKind kind,WorldRuntime::Operation *parent) {
  auto result=begin(Kind::Blank,parent);result->phase_=kind==battle::DisplayBlankKind::Reset?0:2;return result;
}
std::unique_ptr<Display::Operation> Display::load_background_animation(BattleBackgroundPair pair,WorldRuntime::Operation *parent) {
  auto result=begin(Kind::BackgroundAnimation,parent);result->pair_=pair;return result;
}
std::unique_ptr<Display::Operation> Display::reload_map(WorldRuntime::Operation *parent){return begin(Kind::ReloadMap,parent);}
std::unique_ptr<Display::Operation> Display::restore_windows(WorldRuntime::Operation *parent){return begin(Kind::RestoreWindows,parent);}
std::unique_ptr<Display::Operation> Display::fade_out(std::uint16_t magnitude,std::uint16_t delay,WorldRuntime::Operation *parent) {
  auto result=begin(Kind::FadeOut,parent);
  result->fade_=parent?synchronous_fade_.begin_nested(magnitude,delay,*parent):synchronous_fade_.begin(magnitude,delay);
  return result;
}
std::unique_ptr<WorldRuntime::Operation> Display::begin_frame(WorldRuntime::Operation *parent) {
  return parent?owners_.runtime.begin_nested(story::TickKind::Frame,*parent):owners_.runtime.begin(story::TickKind::Frame);
}
std::unique_ptr<WorldRuntime::Operation> Display::begin_publication(WorldRuntime::Operation *parent) {
  return parent?owners_.runtime.begin_nested_publication(*parent):owners_.runtime.begin_publication();
}
void Display::configure_background(unsigned plane,std::uint16_t map,std::uint16_t graphics,std::uint8_t size) {
  require(plane<4&&size<4,"Cinematic background layout exceeds the actual display");
  auto &o=owners_;o.layout.maps[plane]=std::uint8_t(((map>>8)&0xfc)|size);
  if(plane&1)o.layout.graphics[plane/2]=std::uint8_t((o.layout.graphics[plane/2]&15)|((graphics>>8)&0xf0));
  else o.layout.graphics[plane/2]=std::uint8_t((o.layout.graphics[plane/2]&0xf0)|((graphics>>12)&15));
  o.video.staged_scroll[plane]={};
}
void Display::configure_layer(unsigned selector) {
  (void)owners_.layers.at(selector);owners_.layer.value=selector;
  apply_world_layer_configuration(owners_.layers,owners_.layer,owners_.visual);
}
void Display::transfer(battle::PsiTransfer transfer) {
  auto &o=owners_;
  require((o.fade.state().brightness&0x80)&&!o.video.pending_bytes(),
      "Immediate cinematic transfer requires completed preceding DMA and forced blank");
  auto operation=o.video.begin_transfer(transfer,o.scratch,o.fade);
  require(operation->advance()&&operation->complete(),"Forced-blank cinematic transfer suspended");
}
void Display::load_enemy_battle_sprites() {
  auto &o=owners_;require(o.fade.state().brightness&0x80,"Cinematic sprite setup requires source forced blank");
  o.layout.mode=std::uint8_t((o.layout.mode&0xf0)|9);
  configure_background(0,0x5800,0);configure_background(1,0x5c00,0x1000);configure_background(2,0x7c00,0x6000);
  o.frames.object_size=0x61;o.scratch.bytes[0x8000]=0;
  transfer({battle::PsiTransferKind::Vram,0x8000,0x800,0x7c00,3});
}
Display::Operation::Operation(Display &owner,Kind kind,WorldRuntime::Operation *parent)
    :owner_(owner),kind_(kind),parent_(parent){}
Display::Operation::~Operation(){if(owner_.active_==this){owner_.active_=nullptr;owner_.failed_=true;}}
WorldRuntime::Operation *Display::Operation::runtime_operation() noexcept {
  if(map_)return map_->runtime_operation();
  return fade_?fade_->runtime_operation():runtime_.get();
}
void Display::Operation::wait(bool publication){runtime_=publication?owner_.begin_publication(parent_):owner_.begin_frame(parent_);}
void Display::Operation::start_blank(battle::DisplayBlankKind kind){
  auto &o=owner_.owners_;
  if(owner_.source_work_) {
    source_blank_=o.blank.begin_source(*owner_.source_work_,kind,
        parent_?&o.runtime.scene_operation(*parent_):nullptr);
    // Retain the actual logical stack while the physical source loop runs.
    // Its response consumes the handler's receipt without republishing it.
    wait(true);return;
  }
  o.blank.begin(kind,parent_?&o.runtime.scene_operation(*parent_):nullptr);wait(true);
}
void Display::Operation::finish_blank() {
  if(source_blank_finished_)source_blank_finished_=false;
  else owner_.owners_.blank.finish();
}
void Display::Operation::prepare_windows() {
  auto &o=owner_.owners_;dialogue::PartyNameInputs names;
  for(unsigned member=0;member<4;++member)names.names[member]=o.party.name_field(member+1);
  const auto plan=owner_.version_==GameVersion::JP?dialogue::ArtworkPublication::All:dialogue::ArtworkPublication::CommonThenGenerated;
  if(parent_) {
    auto &conversation=o.runtime.dialogue_owner(*parent_);
    dialogue::prepare_window_buffer(o.graphics,o.scratch.bytes,names,o.clock.flavor,&conversation);
    artwork_=o.graphics.begin_publication_nested(plan,conversation,dialogue::ArtworkDelivery::Synchronized);
  } else {
    dialogue::prepare_window_buffer(o.graphics,o.scratch.bytes,names,o.clock.flavor);
    artwork_=o.graphics.begin_publication(plan,dialogue::ArtworkDelivery::Synchronized);
  }
  auto copy=[&](unsigned source,unsigned count,unsigned destination){while(count){const unsigned part=std::min(count,0x1200u);
    owner_.transfer({battle::PsiTransferKind::Vram,std::uint16_t(source),std::uint16_t(part),std::uint16_t(destination),0});
    source+=part;destination+=part/2;count-=part;}};
  if(owner_.version_==GameVersion::JP)copy(0,0x3800,0x6000);
  else for(const auto range:std::array<std::array<unsigned,3>,7>{{{0,0x450,0x6000},{0x4f0,0x60,0x6278},{0x5f0,0xb0,0x62f8},
      {0x700,0xa0,0x6380},{0x800,0x10,0x6400},{0x900,0x10,0x6480},{0x2000,0x1800,0x7000}}})copy(range[0],range[1],range[2]);
  o.windows.publish_palette(o.clock.flavor,party::last_controlled_status(o.party)!=0,o.clock.disabled_transitions!=0);
  o.palette.upload_mode=24;
}
dialogue::Progress Display::Operation::advance(unsigned budget) {
  require(!owner_.failed_&&!executing_,"Cinematic display helper is failed or reentrant");
  if(done_)return dialogue::Progress::Finished;
  require(!owner_.owners_.runtime.failed()&&(!owner_.source_work_||
      (owner_.owners_.runtime.scene().uses_source_work(*owner_.source_work_)&&!owner_.source_work_->failed())),
      "Cinematic display lost its healthy actual source owner");
  executing_=true;
  try {auto &o=owner_.owners_;while(budget--) {
    if(source_blank_) {
      if(!source_blank_->advance(1))continue;
      source_blank_.reset();source_blank_finished_=true;
      require(runtime_&&runtime_->service()==story::SceneService::Publication,
          "Timed blank lost its actual publication child");
      runtime_->respond_source_publication();
    }
    if(runtime_){const auto p=runtime_->advance(1);if(p==dialogue::Progress::Suspended){executing_=false;return p;}
      if(p!=dialogue::Progress::Finished)continue;
      runtime_.reset();}
    if(fade_){const auto p=fade_->advance(1);if(p==dialogue::Progress::Suspended){executing_=false;return p;}
      if(p!=dialogue::Progress::Finished)continue;
      fade_.reset();phase_=99;}
    if(map_){if(!map_->advance(1)) {
      if(map_->runtime_operation()){executing_=false;return dialogue::Progress::Suspended;}
      continue;
    }map_.reset();}
    if(artwork_){const auto p=artwork_->advance(1);if(p==dialogue::Progress::Suspended){artwork_->respond();continue;}
      if(p!=dialogue::Progress::Finished)continue;
      artwork_.reset();}
    if(phase_==99){done_=true;owner_.active_=nullptr;executing_=false;return dialogue::Progress::Finished;}
    switch(kind_) {
    case Kind::Blank:
      if(phase_==0||phase_==2){start_blank(phase_?battle::DisplayBlankKind::Retain:battle::DisplayBlankKind::Reset);phase_=1;}
      else {finish_blank();phase_=99;}break;
    case Kind::BackgroundAnimation:
      if(phase_==0){start_blank(battle::DisplayBlankKind::Reset);phase_=1;}
      else if(phase_==1){finish_blank();o.layout.mode=std::uint8_t((o.layout.mode&0xf0)|9);
        owner_.configure_background(0,0x5800,0);owner_.configure_background(1,0x5c00,0x1000);
        o.background_loader.load(pair_);start_blank(battle::DisplayBlankKind::Retain);phase_=2;}
      else {finish_blank();phase_=99;}break;
    case Kind::ReloadMap:
      if(phase_==0){o.map_state.loaded_combination.reset();o.map_state.loaded_palette.reset();
        o.actors.scene().camera_x&=0xfff8;o.actors.scene().camera_y&=0xfff8;
        start_blank(battle::DisplayBlankKind::Reset);phase_=1;}
      else if(phase_==1){finish_blank();o.music_state.current_map_track=0xffff;
        o.music.select(o.interactions.state().leader_x,o.interactions.state().leader_y);
        o.layout.mode=std::uint8_t((o.layout.mode&0xf0)|9);owner_.configure_background(0,0x3800,0,1);
        owner_.configure_background(1,0x5800,0x2000,1);owner_.configure_background(2,0x7c00,0x6000);
        o.frames.object_size=0x62;
        const CameraPosition center{o.interactions.state().leader_x,o.interactions.state().leader_y};
        map_=parent_?o.map_load.begin_reload_nested(center,*parent_):o.map_load.begin_reload(center);phase_=2;}
      else if(phase_==2){if(o.interactions.state().walking_style==3)o.audio.change_music(82,o.clock.disabled_transitions);
        else o.music.apply_sector();
        o.presentation.restore_overworld_layers();start_blank(battle::DisplayBlankKind::Retain);phase_=3;}
      else {finish_blank();phase_=99;}break;
    case Kind::RestoreWindows:
      if(phase_==0){owner_.configure_background(2,0x7c00,0x6000);
        owner_.transfer({battle::PsiTransferKind::Vram,0,0x700,0x7c00,0,
                         owner_.state_.text_tiles,owner_.version_==GameVersion::JP?0x7e8176u:0x7e7dfeu});
        owner_.transfer({battle::PsiTransferKind::Vram,0,0x40,0x7f80,0,
                         o.graphics.raw_fixed_tail(),o.graphics.raw_fixed_tail_identity()});
        prepare_windows();phase_=99;}break;
    case Kind::FadeOut:throw std::logic_error("Cinematic fade lost its actual continuation");
    }
  }executing_=false;return dialogue::Progress::BudgetExhausted;
  }catch(...){executing_=false;owner_.failed_=true;throw;}
}
}
