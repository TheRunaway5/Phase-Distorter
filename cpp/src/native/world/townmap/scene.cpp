#include "eb/native/world/townmap/scene.hpp"
#include "eb/native/party/condition.hpp"
#include <algorithm>
#include <stdexcept>
namespace eb::native::world::townmap {
namespace {
void require(bool ok,const char *message){if(!ok)throw std::logic_error(message);}
void transfer(Owners &o,unsigned source,unsigned count,unsigned destination,bool synchronized) {
  // TRANSFER_TO_VRAM drains earlier descriptors and divides its input into
  //1200-byte source chunks. The caller reaches this phase under forced blank,
  // so every PREPARE_VRAM_COPY_COMMON completes on the actual display owner.
  require(o.fade.state().brightness&0x80,"Town-map transfer requires source forced blank");
  require(!o.display.pending_bytes(),"Town-map transfer requires preceding DMA completion");
  do {
    const unsigned chunk=synchronized?std::min(count,0x1200u):count;
    auto operation=o.display.begin_transfer({battle::PsiTransferKind::Vram,
        std::uint16_t(source),std::uint16_t(chunk),std::uint16_t(destination),0},o.scratch,o.fade);
    require(operation->advance()&&operation->complete(),"Forced-blank town-map DMA unexpectedly yielded");
    source+=chunk;destination+=chunk/2;count-=chunk;
  }while(count);
}
void encode_window(Owners &o) {
  const auto cells=o.graphics.prepared_artwork();
  require(cells.size()==1184,"Town-map window restoration lacks actual prepared staging");
  for(unsigned cell=0;cell<cells.size();++cell)for(unsigned row=0;row<8;++row) {
    unsigned low{},high{};for(unsigned x=0;x<8;++x) {
      const unsigned pixel=cells[cell][row*8+x];low|=(pixel&1)<<(7-x);high|=((pixel>>1)&1)<<(7-x);
    }
    o.scratch.bytes[cell*16+row*2]=low;o.scratch.bytes[cell*16+row*2+1]=high;
  }
}
}
Scene::Scene(const Resources &resources,State &state,Owners owners)
    :resources_(resources),state_(state),owners_(owners) {
  const auto &o=owners_;
  require(resources.version()==o.party.version() && o.windows.version()==resources.version() &&
      o.graphics.version()==resources.version() && o.windows.uses(o.graphics) &&
      &o.interactions.windows()==&o.windows && o.runtime.uses(o.interactions) &&
      o.runtime.scene().uses(o.input) && o.runtime.scene().uses(o.clock) &&
      o.runtime.scene().uses(o.windows,o.party) &&
      o.runtime.scene().publication()==&o.presentation &&
      o.presentation.uses_visual(o.visual) && o.presentation.frame_display()==&o.frame_display &&
      o.presentation.display_fade()==&o.fade && o.presentation.uses_palette_transport(o.palette) &&
      o.frame_display.uses(o.display) && o.map_load.uses(o.graphics),
      "Town map requires the actual regional world, scene and video owners");
}
bool Scene::uses(const story::Scene &scene) const noexcept { return &owners_.runtime.scene()==&scene; }
std::unique_ptr<Scene::Operation> Scene::begin(WorldRuntime::Operation *parent) {
  require(!failed_&&!active_,"Town-map owner is failed or busy");
  owners_.runtime.require_content_boundary(parent);
  require(!owners_.map_load.busy()&&!owners_.map_load.failed()&&!owners_.display.failed() &&
      owners_.runtime.scene().publication()==&owners_.presentation,
      "Town map requires healthy idle world display and map owners");
  (void)resources_.sector(owners_.interactions.state().leader_x,owners_.interactions.state().leader_y);
  auto operation=std::unique_ptr<Operation>(new Operation(*this,parent));active_=operation.get();return operation;
}
Scene::Operation::Operation(Scene &owner,WorldRuntime::Operation *parent):owner_(owner),parent_(parent){}
Scene::Operation::~Operation(){if(owner_.active_==this){owner_.active_=nullptr;owner_.failed_=true;}}
std::uint16_t Scene::Operation::result() const {require(done_,"Town-map result requested before completion");return selector_;}
void Scene::Operation::wait(bool publication) {
  auto &runtime=owner_.owners_.runtime;
  runtime_=publication ? (parent_?runtime.begin_nested_publication(*parent_):runtime.begin_publication())
      : (parent_?runtime.begin_nested(story::TickKind::Frame,*parent_):runtime.begin(story::TickKind::Frame));
}
void Scene::Operation::draw() {
  auto &o=owner_.owners_;auto &state=owner_.state_;
  const auto &sector=owner_.resources_.sector(o.interactions.state().leader_x,o.interactions.state().leader_y);
  const auto icons=select_icons(owner_.resources_,selector_-1,sector,state,o.windows.state().event_flags);
  o.presentation.stage_distinct_scene(this,render(owner_.resources_,selector_-1,icons));
  if(!--state.player_animation)state.player_animation=20;
  if(!--state.animation)state.animation=60;
  if(!state.palette_countdown) {
    state.palette_countdown=12;std::array<std::uint16_t,7> colors{};
    for(unsigned i=0;i<6;++i)colors[i]=o.palette.staged_color(130+i);
    colors[6]=o.palette.staged_color(129);
    o.presentation.publish_scene_palette_range(129,colors,16);
  }
  --state.palette_countdown;o.frame_display.update_world_screen();
}
void Scene::Operation::prepare_window_artwork() {
  auto &o=owner_.owners_;dialogue::PartyNameInputs names;
  const auto plan=owner_.resources_.version()==GameVersion::JP?dialogue::ArtworkPublication::All
      :dialogue::ArtworkPublication::CommonThenGenerated;
  for(unsigned member=0;member<4;++member)names.names[member]=o.party.name_field(member+1);
  if(parent_) {
    auto &conversation=o.runtime.dialogue_owner(*parent_);
    o.graphics.prepare_nested(names,o.clock.flavor,conversation);
    artwork_=o.graphics.begin_publication_nested(plan,conversation,dialogue::ArtworkDelivery::Synchronized);
  }else {
    o.graphics.prepare(names,o.clock.flavor);
    artwork_=o.graphics.begin_publication(plan,dialogue::ArtworkDelivery::Synchronized);
  }
  encode_window(o);
  if(owner_.resources_.version()==GameVersion::JP)transfer(o,0,0x3800,0x6000,true);
  else {
    for(const auto part:std::array<std::array<unsigned,3>,7>{{{0,0x450,0x6000},{0x4f0,0x60,0x6278},
        {0x5f0,0xb0,0x62f8},{0x700,0xa0,0x6380},{0x800,0x10,0x6400},
        {0x900,0x10,0x6480},{0x2000,0x1800,0x7000}}})transfer(o,part[0],part[1],part[2],true);
  }
  o.windows.publish_palette(o.clock.flavor,party::last_controlled_status(o.party)!=0,o.clock.disabled_transitions!=0);
  o.palette.upload_mode=24;
}
dialogue::Progress Scene::Operation::advance(unsigned budget) {
  require(!owner_.failed_&&!executing_,"Town map is failed or reentrant");
  if(done_)return dialogue::Progress::Finished;
  executing_=true;
  try {
    auto &o=owner_.owners_;
    while(budget--) {
      if(runtime_) {
        const auto p=runtime_->advance(1);
        if(p==dialogue::Progress::Suspended){executing_=false;return p;}
        if(p!=dialogue::Progress::Finished)continue;
        runtime_.reset();
      }
      if(reload_) {if(!reload_->advance(1))continue;reload_.reset();}
      if(artwork_) {
        const auto p=artwork_->advance(1);
        if(p==dialogue::Progress::Suspended){artwork_->respond();continue;}
        if(p!=dialogue::Progress::Finished)continue;
        artwork_.reset();
      }
      switch(phase_) {
      case 0:
        owner_.state_={60,20,12};selector_=owner_.resources_.sector(o.interactions.state().leader_x,
            o.interactions.state().leader_y).selector&15;
        if(!selector_){phase_=99;break;}
        o.fade.begin_out(2,1);phase_=1;break;
      case 1:
        if(o.fade.active()){wait(true);break;}
        o.presentation.begin_distinct_scene(this);distinct_=true;phase_=2;break;
      case 2: {
        const auto &map=owner_.resources_.map(selector_-1);
        std::copy(map.decoded.begin(),map.decoded.end(),o.scratch.bytes.begin());
        o.presentation.publish_scene_palette_range(0,map.palette,24);
        o.presentation.publish_scene_palette_range(128,owner_.resources_.icon_palette(),24);
        o.visual.visible_layers={true,false,false,false,false};o.visual.subscreen_layers.fill(false);
        o.visual.color_math_layers.fill(false);o.visual.use_subscreen=false;
        o.visual.clip_colors=o.visual.prevent_math=ColorWindowPolicy::Never;
        transfer(o,0x40,0x800,0x3000,false);transfer(o,0x840,0x4000,0,true);
        const auto labels=owner_.resources_.labels();std::copy(labels.begin(),labels.end(),o.scratch.bytes.begin());
        transfer(o,0,owner_.resources_.version()==GameVersion::JP?0x2000:0x2400,0x6000,false);
        o.visual.visible_layers[4]=true;o.display.staged_scroll[0]={};
        o.presentation.stage_distinct_scene(this,render(owner_.resources_,selector_-1,{}));
        o.frame_display.update_world_screen();o.fade.begin_in(2,1);phase_=3;break;
      }
      case 3:wait();phase_=4;break;
      case 4:
        draw();
        if(o.input.pressed[0]&0xa0e0){o.fade.begin_out(2,1);exit_frames_=0;phase_=5;}
        else phase_=3;
        break;
      case 5:wait();phase_=6;break;
      case 6:draw();if(++exit_frames_==16)phase_=7;else phase_=5;break;
      case 7:
        require(!o.fade.active()&&(o.fade.state().brightness&0x80),"Town-map closing frames failed to reach source forced blank");
        o.music_state.disable_changes=1;
        // RELOAD_MAP's C08726 consumes one physical NMI while leaving input
        // untouched. Its pending byte is reset before the source spin.
        o.fade.force_blank(owner_.resources_.version()==GameVersion::US);
        o.frame_display.hdma_enable=0;o.clock.new_frame_started=0;
        wait(true);phase_=10;break;
      case 10:
        o.presentation.end_distinct_scene(this);distinct_=false;
        reload_=parent_?o.map_load.begin_reload_nested({o.interactions.state().leader_x,o.interactions.state().leader_y},*parent_)
            :o.map_load.begin_reload({o.interactions.state().leader_x,o.interactions.state().leader_y});
        phase_=8;break;
      case 8:
        o.music.reload();o.fade.force_blank();o.clock.new_frame_started=0;
        // The separate C08744 at RELOAD_MAP return is another real NMI spin,
        // before UNDRAW_FLYOVER_TEXT prepares any window artwork or colors.
        wait(true);phase_=11;break;
      case 11:o.music_state.current_map_track=o.music_state.next_track;
        prepare_window_artwork();phase_=9;break;
      case 9:o.music_state.disable_changes=0;o.presentation.restore_overworld_layers();o.fade.begin_in(2,1);phase_=99;break;
      case 99:done_=true;owner_.active_=nullptr;executing_=false;return dialogue::Progress::Finished;
      default:throw std::logic_error("Invalid town-map phase");
      }
    }
    executing_=false;return dialogue::Progress::BudgetExhausted;
  }catch(...){executing_=false;owner_.failed_=true;throw;}
}
}
