#include "eb/native/cutscenes/coffee/scene.hpp"
#include "eb/display_settings.hpp"
#include <algorithm>
#include <stdexcept>
namespace eb::native::cutscenes::coffee {
namespace { void require(bool v,const char *m) { if(!v)throw std::logic_error(m); } }
Scene::Scene(const Resources &resources,Text &text,State &state,Display &display)
    :resources_(resources),text_(text),state_(state),display_(display),scene_(display.owners().runtime.coordinator_scene()) {
  require(resources.version()==text.version()&&resources.version()==display.version(),"Coffee/tea requires the actual regional text and display owners");
}
bool Scene::uses(const story::Scene &scene) const noexcept { return &display_.owners().runtime.scene()==&scene; }
std::unique_ptr<Scene::Operation> Scene::begin(unsigned selector,WorldRuntime::Operation *parent) {
  require(!failed_&&!active_&&!display_.failed()&&!display_.busy(),"Coffee/tea owner is failed or busy");
  display_.owners().runtime.require_content_boundary(parent);
  require(!display_.owners().windows.prompt_state().battle_mode,"Coffee/tea requires its actual overworld caller");
  auto operation=std::unique_ptr<Operation>(new Operation(*this,selector,parent));active_=operation.get();return operation;
}
Scene::Operation::Operation(Scene &owner,unsigned selector,WorldRuntime::Operation *parent):owner_(owner),selector_(selector),parent_(parent) {}
Scene::Operation::~Operation() {
  if(distinct_)owner_.display_.owners().presentation.end_distinct_scene(&owner_);
  if(owner_.active_==this){owner_.active_=nullptr;owner_.failed_=true;}
}
WorldRuntime::Operation *Scene::Operation::runtime_operation() noexcept { return helper_?helper_->runtime_operation():runtime_.get(); }
std::uint16_t Scene::Operation::result() const { require(done_,"Coffee/tea result requested before completion");return 0; }
void Scene::Operation::wait(bool publication) {
  runtime_=publication?owner_.display_.begin_publication(parent_):owner_.display_.begin_frame(parent_);
  if(!publication)++owner_.state_.waits;
}
void Scene::Operation::frame() { battle_=owner_.display_.owners().battle_frame.begin();++owner_.state_.battle_frames; }
void Scene::Operation::scroll() {
  auto &o=owner_.display_.owners();auto &s=owner_.state_;
  owner_.scene_.reset_object_builder();
  const unsigned previous=s.fraction&0xff00;s.fraction=std::uint16_t(s.fraction+(owner_.resources_.version()==GameVersion::JP?80:64));
  const unsigned next=s.fraction&0xff00;
  if(next!=previous) {
    o.video.staged_scroll[2].y=std::uint16_t(o.video.staged_scroll[2].y+(std::uint16_t(next-previous)>>8));
    o.frames.update_world_screen();++s.scroll_updates;
  }
}
void Scene::Operation::initialize_text() {
  auto &display=owner_.display_;auto &o=display.owners();auto &text=owner_.text_;
  display.configure_background(2,0x7c00,0x6000);o.scratch.bytes[0]=o.scratch.bytes[1]=0;
  display.transfer({battle::PsiTransferKind::Vram,0,0x3800,0x6000,3});
  o.presentation.publish_scene_palette_range(0,owner_.resources_.palette(),24);text.initialize();
  auto &tiles=display.state().text_tiles;
  for(unsigned i=0;i<1024;++i){tiles[i*2]=std::uint8_t(text.tilemap()[i]);tiles[i*2+1]=std::uint8_t(text.tilemap()[i]>>8);}
  display.transfer({battle::PsiTransferKind::Vram,0,0x800,0x7c00,0,tiles,owner_.resources_.version()==GameVersion::JP?0x7e8176u:0x7e7dfeu});
}
dialogue::Progress Scene::Operation::advance(unsigned budget) {
  require(!owner_.failed_&&!executing_,"Coffee/tea owner is failed or reentrant");
  if(done_)return dialogue::Progress::Finished;
  executing_=true;
  try {
    auto &display=owner_.display_;auto &o=display.owners();auto &s=owner_.state_;auto &text=owner_.text_;
    while(budget--) {
      if(runtime_) {
        const auto progress=runtime_->advance(1);
        if(progress==dialogue::Progress::Suspended){executing_=false;return progress;}
        if(progress!=dialogue::Progress::Finished)continue;
        runtime_.reset();
        if(transfer_&&transfer_->needs_publication())transfer_->respond();
        if(battle_&&battle_->needs_publication())battle_->respond();
      }
      if(helper_) {
        const auto progress=helper_->advance(1);
        if(progress==dialogue::Progress::Suspended){executing_=false;return progress;}
        if(progress!=dialogue::Progress::Finished)continue;
        helper_.reset();
      }
      if(transfer_) {
        if(!transfer_->advance()){wait(true);continue;}
        transfer_.reset();++transfer_index_;
      }
      if(battle_) {
        if(!battle_->advance()){require(battle_->needs_publication(),"Coffee/tea battle frame has no continuation");wait(true);continue;}
        battle_.reset();
      }
      switch(phase_) {
      case 0:s={};helper_=display.fade_out(1,1,parent_);phase_=1;break;
      case 1:helper_=display.blank(battle::DisplayBlankKind::Reset,parent_);phase_=2;break;
      case 2:initialize_text();helper_=display.blank(battle::DisplayBlankKind::Retain,parent_);phase_=3;break;
      case 3:owner_.scene_.reset_object_builder();helper_=display.load_background_animation({selector_?233u:231u,selector_?234u:232u,4},parent_);phase_=4;break;
      case 4:o.presentation.begin_distinct_scene(owner_);distinct_=true;o.fade.begin_in(1,1);text.screen_offset=28;
        if(owner_.resources_.version()==GameVersion::US)o.windows.state().word_wrap=false;
        phase_=10;break;
      case 10: {
        const auto script=owner_.resources_.script(selector_);
        require(s.script_offset<script.size(),"Coffee/tea parser reached its authored script extent");const unsigned code=script[s.script_offset++];
        if(!code){o.fade.begin_out(1,1);phase_=50;break;}
        if(code==9){scroll();transfers_=text.prepare_row();transfer_index_=0;++s.row_count;phase_=11;break;}
        if(code==1||code==8){require(s.script_offset<script.size(),"Truncated coffee/tea parameter");const auto value=script[s.script_offset++];
          if(code==1)text.position(value);else text.name(o.party.name_field(value));break;}
        if(owner_.resources_.version()==GameVersion::US)text.glyph(std::uint16_t(code));
        else {require(s.script_offset<script.size(),"Truncated Japanese coffee/tea glyph");text.glyph(std::uint16_t((code<<8)|script[s.script_offset++]));}
        break;
      }
      case 11:
        if(transfer_index_<2) {
          const auto command=transfers_[transfer_index_];if(!command.byte_count){++transfer_index_;break;}
          transfer_=o.video.begin_transfer({battle::PsiTransferKind::Vram,command.source_offset,command.byte_count,command.destination,0,text.bytes(),0x7e0000u+text.source_origin()},o.scratch,o.fade);break;
        }
        wait();phase_=12;break;
      case 12:frame();phase_=13;break;
      case 13: {
        const unsigned threshold=owner_.resources_.version()==GameVersion::JP?4608:8192;
        if(s.fraction<threshold){scroll();wait();phase_=12;break;}
        s.fraction=std::uint16_t(s.fraction-threshold);phase_=14;break;
      }
      case 14:
        if(owner_.resources_.version()==GameVersion::US&&o.video.pending_bytes()){wait(true);break;}
        text.consume_row();phase_=10;break;
      case 50:if(o.fade.active()){wait();phase_=51;}else {helper_=display.blank(battle::DisplayBlankKind::Reset,parent_);phase_=52;}break;
      case 51:frame();phase_=50;break;
      case 52:o.presentation.end_distinct_scene(&owner_);distinct_=false;helper_=display.reload_map(parent_);phase_=53;break;
      case 53:std::fill_n(display.state().text_tiles.begin(),1792,0);
        if(owner_.resources_.version()==GameVersion::US)o.windows.state().word_wrap=true;
        helper_=display.blank(battle::DisplayBlankKind::Reset,parent_);phase_=54;break;
      case 54:helper_=display.restore_windows(parent_);phase_=55;break;
      case 55:helper_=display.blank(battle::DisplayBlankKind::Retain,parent_);phase_=56;break;
      case 56:o.fade.begin_in(1,1);done_=true;owner_.active_=nullptr;executing_=false;return dialogue::Progress::Finished;
      default:throw std::logic_error("Invalid coffee/tea source phase");
      }
    }
    executing_=false;return dialogue::Progress::BudgetExhausted;
  }catch(...){executing_=false;owner_.failed_=true;throw;}
}
std::shared_ptr<const DirectSceneFrame> Scene::capture_display(const DisplayView &view) const {
  const auto &o=display_.owners();ScenePalette colors;
  for(unsigned i=0;i<256;++i)colors[i]={std::uint8_t(view.palette[i]&31),std::uint8_t((view.palette[i]>>5)&31),std::uint8_t((view.palette[i]>>10)&31)};
  auto background=o.background.snapshot();
  const auto latch=[&](BattleBackgroundFrame &layer,unsigned ordinal,unsigned plane) {
    layer.horizontal_scroll=view.scroll[plane].x;layer.vertical_scroll=view.scroll[plane].y;
    if(!(view.hdma&(1u<<(5+ordinal))))layer.axis=BattleDistortionAxis::None;
  };
  latch(background.primary,0,1);if(background.secondary)latch(*background.secondary,1,0);
  // The authored 32-column, eight-pixel BG1/BG2 maps repeat every 256
  // columns, including each latched HDMA row. Reuse that published artwork
  // across the host canvas; a larger source map retains full sampled overscan.
  constexpr unsigned canvas_width=DisplaySettings::maximum_width;
  constexpr float margin=(canvas_width-DisplaySettings::native_width)/2;
  const bool repeats=background.bitdepth==4&&!(o.layout.mode&0x30)&&!(o.layout.maps[0]&1)&&!(o.layout.maps[1]&1);
  auto out=std::make_shared<DirectSceneFrame>(*background.draw_published_layers(colors,view.video,o.layout,repeats?256:canvas_width,view.frame,0x434f46464545));
  out->width=DisplaySettings::native_width;
  if(repeats) {
    const auto original=out->quads;
    for(int shift:{-512,-256,256,512})for(auto quad:original) {
      quad.x+=float(shift);quad.clip.left+=float(shift);quad.clip.right+=float(shift);out->quads.push_back(quad);
    }
  }else {
    for(auto &motion:out->motions)motion.x-=margin;
    for(auto &quad:out->quads){quad.x-=margin;quad.clip.left-=margin;quad.clip.right-=margin;}
  }
  const unsigned old_height=out->atlas_height;out->atlas_height+=448;out->atlas.resize(std::size_t(out->atlas_width)*out->atlas_height);out->palette_indices.resize(out->atlas.size(),256);
  const auto word=[&](unsigned at){return unsigned(view.video[std::uint16_t(at)])|(unsigned(view.video[std::uint16_t(at+1)])<<8);};
  for(unsigned py=0;py<224;++py)for(unsigned px=0;px<256;++px) {
    const unsigned sx=(px+view.scroll[2].x)&255,sy=(py+1+view.scroll[2].y)&255;
    const unsigned entry=word(0xf800+((sy/8)*32+sx/8)*2);
    const unsigned tx=entry&0x4000?7-(sx&7):sx&7,ty=entry&0x8000?7-(sy&7):sy&7;
    const unsigned start=0xc000+(entry&1023)*16+ty*2;
    const unsigned index=((view.video[std::uint16_t(start)]>>(7-tx))&1)|(((view.video[std::uint16_t(start+1)]>>(7-tx))&1)<<1);
    if(!index)continue;
    const unsigned palette=((entry>>10)&7)*4+index;
    const auto at=std::size_t(old_height+((entry>>13)&1)*224+py)*out->atlas_width+px;
    out->atlas[at]=palette_argb(colors[palette]);out->palette_indices[at]=std::uint16_t(palette);
  }
  for(unsigned high=0;high<2;++high) {
    out->quads.push_back({0,old_height+high*224,256,224,0,0,high?10:2,0,false});out->quads.back().layer=DirectSceneFrame::Layer::Background3;
  }
  return out;
}
}
