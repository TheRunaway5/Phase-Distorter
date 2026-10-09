#include "eb/native/cutscenes/cast/scene.hpp"
#include "eb/native/entities/graphics/lifecycle.hpp"
#include <algorithm>
#include <stdexcept>
namespace eb::native::cutscenes::cast {
namespace {
void require(bool ok,const char *message){if(!ok)throw std::logic_error(message);}
bool command_kind(NativeAction action){using A=NativeAction;switch(action){case A::SetCastScrollThreshold:case A::CheckCastScrollThreshold:case A::IsEntityStillOnCastScreen:case A::CreateCastActor:case A::PrintCastName:case A::PrintCastPartyName:case A::PrintCastNameFromVariable:case A::UploadCastPalette:case A::ConvertCastActorToScreen:case A::TickCastScroll:case A::WriteCastTileOffset:case A::WriteCastInitialSleep:case A::WriteCastTextCursor:return true;default:return false;}}
}
Scene::Scene(const Resources &resources,State &state,Display &display,WorldStartupOwners world)
    :resources_(resources),state_(state),display_(display),world_(world),text_(resources,state,display.owners().scratch,world.party) {
  const auto &o=display.owners();require(resources.version()==display.version()&&&world.runtime==&o.runtime&&&world.actors==&o.actors&&&world.party==&o.party&&&world.windows==&o.windows&&&world.interactions==&o.interactions&&&world.clock==&o.clock&&
      world.runtime.compatible_world_state(world.formation,world.trail,world.control,world.maintenance,world.queue,world.following)&&
      world.bootstrap.uses(world.actors,world.party,world.formation,world.trail,world.control,world.maintenance,world.following)&&
      world.creation.uses(world.party,world.actors,world.party_data,world.formation,world.updater,world.spawn.prepared,world.trail,world.area_character_style)&&
      world.refresh.bound_to(world.party,world.actors,world.interactions,world.clock),"Cast requires actual regional display, actor, party and window owners");
}
void Scene::bind_source_work(story::SourceWorkService &work) {
  require(!active_&&!failed_&&!source_work_&&work.uses(world_.actors,display_.owners().video),
      "Cast source work requires its actual idle actor/display owners");
  source_work_=&work;
}
bool Scene::uses(const story::Scene &scene) const noexcept {return &display_.owners().runtime.scene()==&scene;}
std::unique_ptr<Scene::Operation> Scene::begin(WorldRuntime::Operation *parent) {
  auto &w=world_;require(!active_&&!failed_&&!display_.busy()&&!display_.failed(),"Cast owner is failed or busy");w.runtime.require_content_boundary(parent);
  require(!w.windows.prompt_state().battle_mode&&!w.actors.in_tick()&&!w.enemies.busy()&&!w.creation.busy()&&!w.creation.failed(),"Cast cannot interrupt actor, battle or party work");
  auto result=std::unique_ptr<Operation>(new Operation(*this,parent));active_=result.get();return result;
}
Scene::Operation::Operation(Scene &owner,WorldRuntime::Operation *parent):owner_(owner),parent_(parent) {}
Scene::Operation::~Operation(){if(distinct_){try{owner_.display_.owners().presentation.end_distinct_scene(this);}catch(...){owner_.failed_=true;}}
  if(owner_.active_==this){owner_.active_=nullptr;owner_.failed_=true;}}
WorldRuntime::Operation *Scene::Operation::runtime_operation() noexcept {return publication_?publication_.get():helper_?helper_->runtime_operation():runtime_.get();}
bool Scene::Operation::bicycle_dismount_pending() const noexcept {return tail_&&tail_->service()==story::PartyFormationService::BicycleDismount;}
void Scene::Operation::respond_bicycle_dismount(){require(bicycle_dismount_pending(),"Cast has no pending bicycle operation");tail_->respond_bicycle_dismount();}
std::uint16_t Scene::Operation::result() const {require(done_,"Cast result requires full source restoration");return 0;}
bool Scene::Operation::uses(const story::Scene &scene) const noexcept {return owner_.uses(scene);}
void Scene::Operation::apply(story::ActorFramePhase) {
  // The actual Cast tick callback updates working BG3 and projection before
  // the physics pass. This actor-frame hook creates no replacement work.
}
std::shared_ptr<const DirectSceneFrame> Scene::Operation::capture_display(const DisplayView &view) const {const auto &o=owner_.display_.owners();return render(view,o.background.snapshot(),o.layout);}
void Scene::Operation::cleanup_world() {
  auto &w=owner_.world_;w.enemies.reset_population_for_map();
  for(unsigned role=0;role<30;++role)if(const auto id=w.actors.actor_for_role(role)){const unsigned script=w.actors.actor(*id).script_style();if(role!=23&&std::uint16_t(script+1)>2){if(auto *graphics=w.runtime.actor_graphics())graphics->release(role);w.interactions.detach(*id);w.enemies.erase(w.actors,*id);}}
  if(const auto controller=w.actors.actor_for_role(23)){w.interactions.detach(*controller);w.actors.retire(*controller);}
}
void Scene::Operation::initialize() {
  auto &d=owner_.display_;auto &o=d.owners();const auto &r=owner_.resources_;const bool jp=r.version()==GameVersion::JP;
  d.configure_background(2,0x7c00,jp?0x6000:0);o.frames.object_size=0x62;for(unsigned i=0;i<3;++i)o.video.staged_scroll[i]={};o.frames.update_world_screen();
  // LOAD_CAST_SCENE clears the same BG1/BG3 words read by the actor screen
  // callbacks, before its controller's first actual projection traversal.
  auto &projection=owner_.world_.actors.scene();
  projection.camera_x=projection.camera_y=projection.overlay_camera_x=projection.overlay_camera_y=0;
  o.scratch.bytes[0]=o.scratch.bytes[1]=0;d.transfer({battle::PsiTransferKind::Vram,0,2048,0x7c00,3});
  std::array<std::uint8_t,1664> raster{};RasterCursor cursor;auto snapshot=o.windows.output().composition_snapshot();
  if(!jp){require(snapshot.columns.size()==52,"Cast lost the source shared52-column VWF ring");for(unsigned column=0;column<52;++column)for(unsigned y=0;y<16;++y)for(unsigned x=0;x<8;++x){const unsigned pixel=snapshot.columns[column][y*8+x];raster[column*32+y*2]|=std::uint8_t((pixel&1)<<(7-x));raster[column*32+y*2+1]|=std::uint8_t(((pixel>>1)&1)<<(7-x));}o.windows.menu_state().force_normal_font=true;}
  owner_.text_.prepare_graphics(raster,cursor,o.windows.output().policy().character_padding);
  if(!jp){for(unsigned column=0;column<52;++column)for(unsigned y=0;y<16;++y)for(unsigned x=0;x<8;++x)snapshot.columns[column][y*8+x]=std::uint8_t(((raster[column*32+y*2]>>(7-x))&1)|(((raster[column*32+y*2+1]>>(7-x))&1)<<1));
    snapshot.brush_column=cursor.tile;snapshot.fractional_offset=cursor.x&7;snapshot.publication_position=cursor.render_low;snapshot.partial_publication=cursor.render_high!=0;
    o.windows.output().commit_cast_composition(snapshot,parent_?&o.runtime.dialogue_owner(*parent_):nullptr);}
  d.transfer({battle::PsiTransferKind::Vram,0,std::uint16_t(jp?8192:32768),std::uint16_t(jp?0x6000:0),0});
  if(!jp)o.windows.menu_state().force_normal_font=false;
  o.battle_frame.publish_window_palette(o.clock.flavor,o.clock.disabled_transitions!=0);
  for(unsigned i=0;i<16;++i)o.palette.staged_color(i+(jp?4:0))=r.header_palette()[i];
  for(unsigned i=0;i<128;++i)o.palette.staged_color(128+i)=r.sprite_palettes()[i];
  std::copy(r.special_palettes().begin(),r.special_palettes().end(),o.scratch.bytes.begin()+0x7000);
  if(jp){o.palette.staged_color(0)=o.palette.staged_color(3)=0;std::swap(o.palette.staged_color(1),o.palette.staged_color(2));}
  o.palette.upload_mode=24;o.visual.visible_layers={false,jp,true,false,true};owner_.state_.text_cursor=owner_.state_.tile_offset=0;
}
void Scene::Operation::respond_command(std::uint16_t value) {
  require(runtime_&&runtime_->actor_request(),"Cast lost its actual pending actor command");const auto &request=*runtime_->actor_request();
  runtime_->respond_actor(request.origin==WorldActionOrigin::TickCallback?0:value,request.binding.parameter_bytes);
}
bool Scene::Operation::command() {
  require(runtime_&&runtime_->actor_request(),"Cast command requires the actual suspended actor frame");const auto request=*runtime_->actor_request();
  if(!command_kind(request.binding.operation))return false;
  auto &o=owner_.display_.owners();auto &w=owner_.world_;auto &state=owner_.state_;auto &actor=w.actors.actor(request.actor);auto &a=actor.action();const unsigned scroll=o.video.staged_scroll[2].y;
  using A=NativeAction;std::uint16_t value{};
  switch(request.binding.operation) {
  case A::WriteCastTileOffset:state.tile_offset=request.action.value;break;
  case A::WriteCastInitialSleep:state.initial_sleep=request.action.value;break;
  case A::WriteCastTextCursor:state.text_cursor=request.action.value;break;
  case A::SetCastScrollThreshold:a.variables[0]=std::uint16_t(request.action.temporary*8+scroll);value=a.variables[0];break;
  case A::CheckCastScrollThreshold:value=a.variables[0]<=scroll;break;
  case A::IsEntityStillOnCastScreen:value=std::uint16_t(scroll-8)<std::uint16_t(a.position[1]>>16);break;
  case A::CreateCastActor: {
    const auto operands=std::get<CreateActorOperands>(request.binding.payload);auto &prepared=w.spawn.prepared;prepared.variables[0]=state.initial_sleep&3;++state.initial_sleep;
    prepared.priority=1;auto creation=prepared;creation.x=a.variables[0];creation.y=std::uint16_t(a.variables[1]+scroll);creation.direction=0;
    const auto specification=w.actors.prepare_actor(operands.sprite,operands.script,creation);
    if(auto *graphics=w.runtime.actor_graphics()){
      // RUN_ACTIONSCRIPT_FRAME aligns D to a page. Its movement dispatch
      // retains D; CREATE_ENTITY_AT_V01_PLUS_BG3Y reserves20 bytes, so the
      // real CREATE entry has lowEC in both regions. The deeper owner only
      // charges its separately proved tag helpers, not atomic whole CREATE.
      cast_creation_=owner_.source_work_?graphics->begin_create_with_source_work(specification,
          {0,22},*owner_.source_work_,{0xec,false}):graphics->begin_create(specification,{0,22});
      return true;
    }
    const auto created=w.actors.create_authored(specification);
    value=created?std::uint16_t(*w.actors.actor(*created).authored_role()):0xffff;if(created)++state.created_actors;break;
  }
  case A::ConvertCastActorToScreen: {
    const auto x=std::uint16_t((a.position[0]>>16)-o.video.staged_scroll[2].x),y=std::uint16_t((a.position[1]>>16)-scroll);
    a.position[0]=(unsigned(x)<<16)|(a.position[0]&0xffff);a.position[1]=(unsigned(y)<<16)|(a.position[1]&0xffff);
    actor.behavior.projected_x=x<0x8000?int(x):int(x)-65536;actor.behavior.projected_y=y<0x8000?int(y):int(y)-65536;value=y;break;
  }
  case A::UploadCastPalette: {
    const unsigned source=std::uint16_t(0x7000+std::uint16_t(request.action.temporary*32));
    for(unsigned i=0;i<16;++i){const unsigned at=std::uint16_t(source+i*2);o.palette.staged_color(192+i)=std::uint16_t(o.scratch.bytes[at]|unsigned(o.scratch.bytes[std::uint16_t(at+1)])<<8);}
    o.palette.upload_mode=16;value=std::uint16_t((o.palette.staged_color(207)&0xff00)|16);++state.palette_uploads;break;
  }
  case A::TickCastScroll: {
    require(request.origin==WorldActionOrigin::TickCallback,"Cast scroll must run at its real tick callback");const auto y=std::uint16_t(a.position[1]>>16);o.video.staged_scroll[2].y=y;w.actors.scene().overlay_camera_y=y;w.actors.scene().overlay_camera_x=o.video.staged_scroll[2].x;
    if(a.variables[7]<y){a.variables[7]=std::uint16_t(a.variables[7]+8);o.scratch.bytes[0x7ffe]=o.scratch.bytes[0x7fff]=0;copies_={{battle::PsiTransferKind::Vram,0x7ffe,64,std::uint16_t(0x7c00+(((y>>3)-1)&31)*32),3}};++state.scroll_clears;}break;
  }
  case A::PrintCastName:case A::PrintCastPartyName:case A::PrintCastNameFromVariable: {
    const auto operands=std::get<CastNameOperands>(request.binding.payload);
    copies_=request.binding.operation==A::PrintCastName?owner_.text_.name(operands.name,operands.column,operands.row,std::uint16_t(scroll)):
        request.binding.operation==A::PrintCastPartyName?owner_.text_.party_name(operands.name,operands.column,operands.row,std::uint16_t(scroll)):
        owner_.text_.variable_name(operands.name,a.variables[0],operands.column,operands.row,std::uint16_t(scroll));++state.names;break;
  }
  default:throw std::logic_error("Cast command lost its declared family operation");
  }
  if(copies_.empty())respond_command(value);else copy_=0;
  return true;
}
dialogue::Progress Scene::Operation::advance(unsigned budget) {
  require(!executing_&&!owner_.failed_&&owner_.active_==this,"Cast owner is failed or reentrant");if(done_)return dialogue::Progress::Finished;executing_=true;
  try {auto &display=owner_.display_;auto &o=display.owners();auto &w=owner_.world_;while(budget--) {
    if(publication_){const auto p=publication_->advance(1);if(p==dialogue::Progress::Suspended){executing_=false;return p;}if(p!=dialogue::Progress::Finished)continue;publication_.reset();if(transfer_)transfer_->respond();else if(battle_)battle_->respond();else if(cast_creation_)cast_creation_->respond_publication();else if(party_graphics_publication_){creation_->respond_graphics_publication();party_graphics_publication_=false;}}
    if(cast_creation_){if(!cast_creation_->advance()){if(cast_creation_->needs_publication())publication_=display.begin_publication(runtime_.get());continue;}
      const auto created=cast_creation_->actor();cast_creation_.reset();const auto role=w.actors.actor(created).authored_role();require(role.has_value(),"Cast raw creation lost its actual source role");++owner_.state_.created_actors;respond_command(std::uint16_t(*role));continue;}
    if(transfer_){if(!transfer_->advance()){require(transfer_->needs_publication(),"Cast DMA did not expose its source publication wait");publication_=display.begin_publication(runtime_.get());continue;}transfer_.reset();++copy_;}
    if(!copies_.empty()){if(copy_<copies_.size()){transfer_=o.video.begin_transfer(copies_[copy_],o.scratch,o.fade);continue;}
      copies_.clear();respond_command(o.video.producer_index());continue;}
    if(helper_){const auto p=helper_->advance(1);if(p==dialogue::Progress::Suspended){executing_=false;return p;}if(p!=dialogue::Progress::Finished)continue;helper_.reset();}
    if(battle_){if(!battle_->advance()){require(battle_->needs_publication(),"Cast battle body lost its actual DMA wait");publication_=display.begin_publication(parent_);continue;}battle_.reset();}
    if(runtime_){const auto p=runtime_->advance(1);if(p==dialogue::Progress::Suspended){if(runtime_->service()==story::SceneService::ActorEngine&&command())continue;executing_=false;return p;}
      if(p!=dialogue::Progress::Finished)continue;
      runtime_.reset();}
    switch(phase_) {
    case 0:if(display.version()==GameVersion::US)w.inventory.reset_loaded_transformations();helper_=display.fade_out(1,1,parent_);phase_=1;break;
    case 1:helper_=display.blank(battle::DisplayBlankKind::Reset,parent_);phase_=2;break;
    case 2:cleanup_world();for(unsigned role=0;role<30;++role)if(w.actors.actor_for_role(role))w.actors.set_authored_sprite_hidden(role,true);
      helper_=display.load_background_animation({279,0,4},parent_);phase_=3;break;
    case 3:initialize();helper_=display.blank(battle::DisplayBlankKind::Retain,parent_);phase_=4;break;
    case 4:{o.presentation.begin_distinct_scene(*this);distinct_=true;o.fade.begin_in(1,1);
      w.spawn.prepared={};const auto controller=w.actors.create_authored_script(owner_.resources_.controller_script(),w.spawn.prepared);require(controller.has_value(),"Cast controller cannot fit its actual source allocation");w.actors.scene().action_script_state=0;phase_=10;break;}
    case 10:if(w.actors.scene().action_script_state){helper_=display.fade_out(1,1,parent_);phase_=20;break;}
      runtime_=parent_?o.runtime.begin_nested_actor_frame(*this,*parent_):o.runtime.begin_actor_frame(*this);++owner_.state_.actor_frames;phase_=11;break;
    case 11:battle_=o.battle_frame.begin();phase_=10;break;
    case 20:for(unsigned role=0;role<30;++role)if(const auto id=w.actors.actor_for_role(role))if(w.actors.actor(*id).script_style()==owner_.resources_.controller_script()){w.interactions.detach(*id);w.actors.retire(*id);}
      w.bootstrap.create_controller_and_initialize(w.spawn.prepared);creation_=w.runtime.actor_graphics()?w.creation.begin_rebuild(*w.runtime.actor_graphics()):w.creation.begin_rebuild();phase_=21;break;
    case 21:if(tail_){if(tail_->advance()==dialogue::Progress::Suspended){executing_=false;return dialogue::Progress::Suspended;}tail_.reset();creation_->respond();}
      if(creation_->advance()){creation_.reset();helper_=display.blank(battle::DisplayBlankKind::Reset,parent_);phase_=22;break;}
      require(creation_->service()&&creation_->service()->kind!=WorldPartyCreationServiceKind::CompareInsertionMember,"Cast cannot invent an insertion comparison");
      if(creation_->service()->kind==WorldPartyCreationServiceKind::GraphicsPublication){party_graphics_publication_=true;publication_=display.begin_publication(parent_);break;}
      tail_=w.refresh.begin_tail(creation_->service()->kind==WorldPartyCreationServiceKind::RefreshMovementPolicy?WorldPartyService::RefreshMovementPolicy:WorldPartyService::RefreshWindowPalette);break;
    case 22:std::fill_n(display.state().text_tiles.begin(),1024,0);helper_=display.restore_windows(parent_);phase_=23;break;
    case 23:o.presentation.restore_overworld_layers();o.presentation.end_distinct_scene(this);distinct_=false;done_=true;owner_.active_=nullptr;executing_=false;return dialogue::Progress::Finished;
    default:throw std::logic_error("Invalid Cast source continuation phase");
    }
  }executing_=false;return dialogue::Progress::BudgetExhausted;}catch(...){executing_=false;owner_.failed_=true;throw;}
}
}
