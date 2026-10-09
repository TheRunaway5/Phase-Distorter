#include "eb/native/entities/graphics/transport.hpp"
#include "eb/native/sprite_appearance.hpp"
#include "eb/native/actor_world.hpp"
#include <algorithm>
#include <stdexcept>
namespace eb::native::entities::graphics {
namespace {
void require(bool value,const char *message) {if(!value)throw std::logic_error(message);}
}
Transport::Transport(std::span<const std::uint8_t> assets,GameVersion version,State &state,
    const SpriteResources &sprites,battle::PsiDisplayState &video,
    const battle::PsiScratch &scratch,const WorldDisplayFade &fade)
    :state_(state),sprites_(sprites),video_(video),scratch_(scratch),fade_(fade) {
  require(version==GameVersion::US||version==GameVersion::JP,"Unknown actor graphics region");
  const unsigned table=version==GameVersion::JP?0x42eca:0x42f8c;
  const unsigned blank=version==GameVersion::JP?0x40b34:0x40be8;
  require(assets.size()>=table+176&&assets.size()>=blank+blank_.size(),
      "Truncated actor graphics allocation resources");
  for(unsigned i=0;i<88;++i)destinations_[i]=assets[table+i*2]|unsigned(assets[table+i*2+1])<<8;
  std::copy_n(assets.begin()+blank,blank_.size(),blank_.begin());
  blank_identity_=0xc00000u+blank;
}
Transport::~Transport() {if(active_)state_.continuation_abandoned=true;}
void Transport::idle() const {
  require(!failed()&&!active_,"Actor graphics transport is failed or busy");
}
void Transport::with_source_work(story::SourceWorkService &clock,const ActorWorld &actors,
    SourceCall call,const std::function<void()> &actual_call) {
  idle();require(!source_work_&&bool(actual_call)&&actors.uses(sprites_)&&clock.uses(actors,video_),
      "Actor tag work requires its actual idle actor/display/caller owners");
  source_work_=&clock;source_call_=call;source_invocations_=0;
  try {
    actual_call();
    require(source_invocations_==1,"Actor tag work did not execute exactly one authored helper");
    source_work_=nullptr;
  }catch(...){source_work_=nullptr;state_.continuation_abandoned=true;throw;}
}
void Transport::work(story::SourceWorkCost cost,const std::function<void()> &effect) {
  if(!source_work_){if(effect)effect();return;}
  if(source_call_.bank_zero_code){cost.slow_accesses+=cost.rom_accesses;cost.rom_accesses=0;}
  source_work_->retire_source_work(cost,effect);
}
unsigned Transport::begin_tag_work(unsigned locals) {
  if(source_work_) {
    require(source_invocations_++==0,"Actor tag helper was entered recursively or twice");
    if(source_call_.include_long_call)work({8,4,3,0}); // JSL
  }
  work({3,2,0,0}); // REP31
  work({4,1,2,0});work({4,1,2,0}); // PHD/PHA16
  work({2,1,0,0});work({3,3,0,0});work({2,1,0,0}); // TDC/ADC/TCD
  work({5,1,2,0}); // PLA16
  return unsigned(std::uint8_t(source_call_.direct_page_low-locals)!=0);
}
void Transport::end_tag_work(){work({5,1,2,0});work({6,1,3,0});} // PLD/RTL
std::uint16_t Transport::reserve_unchecked(unsigned count,std::uint16_t role) {
  require(count<=88,"Actor graphics cell count exceeds the authored allocation table");
  const unsigned dp=begin_tag_work(20);
  const story::SourceWorkCost direct{4+dp,2,2,0};
  const auto d=[&]{work(direct);};
  const auto r=[&]{work({2,1,0,0});};
  const auto immediate=[&]{work({3,3,0,0});};
  const auto branch=[&](bool taken){work({taken?3u:2u,2,0,0});};
  d();d();d();immediate();work({3,2,0,0}); // STX/STA/STA/LDY/BRA
  for(unsigned start=0;;) {
    d();d();immediate();r();d();d();r();d(); // range check
    const unsigned end=88-count;
    branch(start<end);if(start>=end)branch(start==end); // BLTEQ
    if(start>end){immediate();end_tag_work();return 0xff03;}
    unsigned free{};
    immediate();d();work({3,2,0,0}); // clear LOCAL01/BRA
    for(;;) {
      d();d();d();branch(free<count);
      if(free==count)break;
      d();r();r();d();r();work({6,3,2,0});immediate(); // scan cell
      const bool occupied=state_.cells[start+free]!=0;branch(occupied);
      if(occupied)break;
      d();r();d();++free;
    }
    if(free==count) {
      immediate();d();work({3,2,0,0}); // clear LOCAL00/BRA
      for(unsigned written=0;;) {
        d();d();d();branch(written<count);
        if(written==count)break;
        d();r();r();d();r();d();work({3,2,0,0});work({2,2,0,0});
        work({5,3,1,0},[&,written]{state_.cells[start+written]=std::uint8_t(role|0x80);});
        work({3,2,0,0});d();r();d();++written;
      }
      r();work({3,2,0,0});end_tag_work();
      return std::uint16_t(start);
    }
    r();r(); // TXY/INY after occupied cell
    start+=free+1;
  }
}
std::uint16_t Transport::reserve(unsigned count,std::uint16_t role) {
  idle();return reserve_unchecked(count,role);
}
void Transport::remap(std::uint16_t role,std::uint16_t replacement) {
  idle();const auto tag=std::uint8_t(role|0x80);
  const unsigned dp=begin_tag_work(16);
  const story::SourceWorkCost direct{4+dp,2,2,0};
  const auto d=[&]{work(direct);};
  const auto r=[&]{work({2,1,0,0});};
  const auto immediate=[&]{work({3,3,0,0});};
  const auto branch=[&](bool taken){work({taken?3u:2u,2,0,0});};
  r();d();immediate();work({3,2,0,0}); // TXY/STA/LDX/BRA
  for(unsigned i=0;;) {
    immediate();branch(i<88);if(i==88)break;
    work({3,2,0,0});d();work({3,2,0,0});immediate();immediate();d();
    work({6,3,2,0});immediate();d();
    const bool matched=state_.cells[i]==tag;branch(matched);
    if(!matched){d();immediate();branch(role!=0x8000);}
    if(matched||role==0x8000) {
      r();work({3,2,0,0});
      work({5,3,1,0},[&,i]{state_.cells[i]=std::uint8_t(replacement);});
    }
    r();++i;
  }
  work({3,2,0,0});end_tag_work();
}
std::uint16_t Transport::destination(unsigned cell,unsigned height) const {
  require(cell<88&&height>0,"Actor graphics destination lacks its allocation/geometry");
  return std::uint16_t(0x4000+destinations_[cell]+(height&1?0x100:0));
}
std::unique_ptr<Transport::Operation> Transport::begin_allocation(unsigned width,unsigned height,
    std::uint16_t role) {
  idle();require(width&&width<=15&&height&&height<=255,"Invalid authored sprite tile geometry");
  const unsigned columns=(width+1)&~1u,rows=(height+1)&~1u,cells=columns*rows/4;
  auto operation=std::unique_ptr<Operation>(new Operation(*this));
  active_=operation.get();
  if(cells>88)operation->result_=0xff03;
  else operation->result_=reserve_unchecked(cells,role);
  if(operation->result_<88&&(columns!=width||rows!=height)) {
    const unsigned end=operation->result_+cells;
    for(unsigned cell=operation->result_;cell<end;) {
      const unsigned count=std::min(end-cell,8-(cell&7));
      for(unsigned row=0;row<2;++row)operation->commands_.push_back({battle::PsiTransferKind::Vram,
          0,std::uint16_t(count*64),std::uint16_t(0x4000+destinations_[cell]+row*0x100),
          3,blank_,blank_identity_});
      cell+=count;
    }
  }
  return operation;
}
std::uint16_t Transport::row(std::vector<battle::PsiTransfer> &out,battle::PsiTransfer command) const {
  const auto destination=command.destination;
  const unsigned bytes=command.byte_count;
  if(((std::uint16_t(destination+command.byte_count/2-1)^destination)&0x100)!=0) {
    const auto boundary=std::uint16_t((destination+0x100)&0xff00);
    const unsigned first=std::uint16_t(boundary-destination)*2;
    auto head=command;head.byte_count=std::uint16_t(first);out.push_back(head);
    command.source_offset=std::uint16_t(command.source_offset+first);
    command.byte_count=std::uint16_t(command.byte_count-first);
    command.destination=std::uint16_t(boundary+0x100);out.push_back(command);
  }else out.push_back(command);
  if(!(destination&0x100))return std::uint16_t(destination+0x100);
  const auto next=std::uint16_t(destination+((bytes+0x20)&0xffc0)/2);
  return std::uint16_t(next-(((next^destination)&0x100)?0:0x100));
}
std::unique_ptr<Transport::Operation> Transport::begin_upload(unsigned sprite,unsigned direction,
    std::uint16_t animation,SpriteFrameFormat format,std::uint16_t destination,
    std::uint16_t surface,std::uint16_t &displayed_reference) {
  return begin_upload(sprite,sprite,direction,animation,format,destination,surface,displayed_reference);
}
std::unique_ptr<Transport::Operation> Transport::begin_upload(unsigned sprite,unsigned geometry_sprite,
    unsigned direction,std::uint16_t animation,SpriteFrameFormat format,std::uint16_t destination,
    std::uint16_t surface,std::uint16_t &displayed_reference) {
  const auto pose=format==SpriteFrameFormat::FourDirection?four_direction_pose(direction,animation):
      eight_direction_pose(direction,animation);
  return begin_upload_pose(sprite,geometry_sprite,pose,format,destination,surface,displayed_reference);
}
std::unique_ptr<Transport::Operation> Transport::begin_upload_pose(unsigned sprite,unsigned geometry_sprite,
    unsigned pose,SpriteFrameFormat format,std::uint16_t destination,std::uint16_t surface,
    std::uint16_t &displayed_reference) {
  idle();require(format==SpriteFrameFormat::FourDirection||format==SpriteFrameFormat::EightDirection,
      "Invalid actor graphics frame interpretation");
  const auto frame=sprites_.raw_frame(sprite,pose,format);
  const auto &definition=sprites_.definition(geometry_sprite);
  const auto bank=sprites_.raw_bank(sprite);
  unsigned rows=definition.height/8;
  const unsigned bytes=definition.width*4;
  require(rows&&bytes&&rows*bytes<=65536,"Actor graphics creation geometry exceeds its actual bank");
  auto operation=std::unique_ptr<Operation>(new Operation(*this));
  if(!(frame.reference&2)&&(surface&8)) {
    destination=row(operation->commands_,{battle::PsiTransferKind::Vram,0,
        std::uint16_t(bytes),destination,3,blank_,blank_identity_});--rows;
    if(rows&&(surface&4)) {
      destination=row(operation->commands_,{battle::PsiTransferKind::Vram,0,
          std::uint16_t(bytes),destination,3,blank_,blank_identity_});--rows;
    }
  }
  if(rows) {
    operation->reference_=&displayed_reference;operation->new_reference_=frame.reference;
    // Blanked surface rows shift the image down; the original source begins
    // at its first artwork row, retaining the clipped final rows in the bank.
    for(unsigned row_index=0;row_index<rows;++row_index)
      destination=row(operation->commands_,{battle::PsiTransferKind::Vram,
          std::uint16_t((frame.source_identity&0xffff)+row_index*bytes),std::uint16_t(bytes),destination,0,
          bank,frame.source_identity&0xff0000});
  }
  operation->result_=destination;
  active_=operation.get();return operation;
}
Transport::Operation::Operation(Transport &owner):owner_(owner) {}
Transport::Operation::~Operation() {
  if(owner_.active_==this){owner_.active_=nullptr;owner_.state_.continuation_abandoned=true;}
}
bool Transport::Operation::needs_publication() const noexcept {
  return transfer_&&transfer_->needs_publication();
}
void Transport::Operation::respond() {
  require(!done_&&!owner_.failed()&&needs_publication(),"Actor graphics has no actual publication wait");
  transfer_->respond();
}
std::uint16_t Transport::Operation::result() const {
  require(done_,"Actor graphics result requested before its original operation completed");return result_;
}
bool Transport::Operation::advance(unsigned budget) {
  require(!owner_.failed()&&!executing_,"Actor graphics operation is failed or reentrant");
  if(done_)return true;
  executing_=true;
  try {
    while(budget--) {
      if(transfer_) {
        if(!transfer_->advance()){executing_=false;return false;}
        transfer_.reset();++command_;
      }
      if(command_==commands_.size()) {
        done_=true;owner_.active_=nullptr;executing_=false;return true;
      }
      // The original writes CURRENT_DISPLAYED_SPRITES after leading surface
      // clears, before it admits the first artwork row.
      if(reference_&&!reference_written_&&commands_[command_].mode==0) {
        *reference_=new_reference_;reference_written_=true;
      }
      transfer_=owner_.video_.begin_transfer(commands_[command_],owner_.scratch_,owner_.fade_);
    }
    executing_=false;return false;
  }catch(...){executing_=false;owner_.state_.continuation_abandoned=true;throw;}
}
}
