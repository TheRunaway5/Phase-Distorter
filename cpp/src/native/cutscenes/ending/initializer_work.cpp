#include "eb/native/cutscenes/ending/initializer_work.hpp"
#include "eb/native/actor_world.hpp"
#include <stdexcept>
namespace eb::native::cutscenes::ending {
namespace {
void require(bool ok,const char *message){if(!ok)throw std::logic_error(message);}
constexpr const char *initialize_file="src/ending/initialize_credits_scene.asm";
constexpr const char *memcpy_file="src/system/memcpy16.asm";
constexpr const char *memset_file="src/system/memset16.asm";
}
InitializerWork::InitializerWork(const Resources &resources,story::SourceWorkService &clock,
    InitializerWorkState &state,battle::PaletteBankState &palette,std::span<std::uint8_t,2048> text,
    const ActorWorld &actors,const battle::PsiDisplayState &video)
    :resources_(resources),clock_(clock),state_(state),palette_(palette),text_(text),
     state_lifetime_(state.source_lifetime()),palette_lifetime_(palette.source_lifetime()) {
  require(resources.version()==actors.version()&&!clock.failed()&&clock.uses(actors,video),"Credits initializer work requires its actual actor/video clock");
  require(!state.source_active()&&!palette.source_active(),"Credits initializer has claimed counter/palette owners");
  clock.bind_copy_counter(state);
}
bool InitializerWork::uses(const Resources &resources,story::SourceWorkService &clock,
    const battle::PaletteBankState &palette,std::span<const std::uint8_t,2048> text,
    const ActorWorld &actors,const battle::PsiDisplayState &video) const noexcept {
  return !state_lifetime_.expired()&&!palette_lifetime_.expired()&&clock_.uses_copy_counter(state_)&&&resources_==&resources&&&clock_==&clock&&&palette_==&palette&&text_.data()==text.data()&&clock_.uses(actors,video);
}
std::unique_ptr<InitializerWork::Operation> InitializerWork::begin_palette_copy(PalettePart part,InitializerCall call) {
  require_healthy();
  require(!active_&&!state_.source_active()&&!palette_.source_active(),"Credits initializer work is failed or busy");
  auto op=std::unique_ptr<Operation>(new Operation(*this,call));op->palette_copy(part);claim(*op);active_=op.get();return op;
}
std::unique_ptr<InitializerWork::Operation> InitializerWork::begin_palette_clear(InitializerCall call) {
  require_healthy();
  require(!active_&&!state_.source_active()&&!palette_.source_active(),"Credits initializer work is failed or busy");
  auto op=std::unique_ptr<Operation>(new Operation(*this,call));op->palette_clear();claim(*op);active_=op.get();return op;
}
std::unique_ptr<InitializerWork::Operation> InitializerWork::begin_text_clear(InitializerCall call) {
  require_healthy();
  require(!active_&&!state_.source_active()&&!palette_.source_active(),"Credits initializer work is failed or busy");
  auto op=std::unique_ptr<Operation>(new Operation(*this,call));op->text_clear();claim(*op);active_=op.get();return op;
}
void InitializerWork::require_healthy() const {
  require(!state_lifetime_.expired()&&!palette_lifetime_.expired()&&!failed_&&!clock_.failed()&&clock_.uses_copy_counter(state_),
      "Credits initializer lost its actual live counter/palette/work owner");
}
void InitializerWork::claim(Operation &operation) {
  require_healthy();require(!state_.lease_&&!palette_.source_lease_,"Credits initializer owners are already claimed");
  const auto identity=&operation;auto *state=&state_;auto *palette=&palette_;
  const auto state_life=state_lifetime_,palette_life=palette_lifetime_;
  operation.release_=[state,palette,state_life,palette_life,identity] {
    if(!state_life.expired()&&state->lease_==identity)state->lease_=nullptr;
    if(!palette_life.expired()&&palette->source_lease_==identity)palette->source_lease_=nullptr;
  };
  state_.lease_=identity;palette_.source_lease_=identity;
}
InitializerWork::Operation::Operation(InitializerWork &owner,InitializerCall call)
    :owner_(owner),call_(call),owner_lifetime_(owner.lifetime_) {}
InitializerWork::Operation::~Operation(){
  if(!owner_lifetime_.expired()&&owner_.active_==this){owner_.active_=nullptr;owner_.failed_=true;}
  if(release_)release_();
}
unsigned InitializerWork::Operation::source_line() const noexcept {return cursor_<atoms_.size()?atoms_[cursor_].line:0;}
const char *InitializerWork::Operation::source_file() const noexcept {return cursor_<atoms_.size()?atoms_[cursor_].file:initialize_file;}
void InitializerWork::Operation::add(unsigned cycles,unsigned rom,unsigned slow,unsigned line,
    const char *file,Effect effect,unsigned operand,bool caller) {
  if(caller&&call_.bank_zero_code){slow+=rom;rom=0;}
  atoms_.push_back({{cycles,rom,slow,0},effect,operand,line,file});
}
void InitializerWork::Operation::palette_copy(PalettePart part) {
  const auto version=owner_.resources_.version();
  unsigned pointer{},caller_line{};
  switch(part) {
  case PalettePart::Frame:
    palette_=owner_.resources_.frame_palette();first_color_=16;
    pointer=version==GameVersion::JP?0xe1d6bc:0xe1e92a;caller_line=47;
    pointer_=owner_.resources_.compressed_frame().source_identity;break;
  case PalettePart::Font:
    palette_=owner_.resources_.credits()->palette();first_color_=0;
    pointer=0xc00000u+credits_content_layout(version).palette;caller_line=60;
    pointer_=owner_.resources_.compressed_font().source_identity;break;
  case PalettePart::Sprites:
    palette_=owner_.resources_.sprite_palettes();first_color_=128;
    pointer=0xc30000;caller_line=64;
    pointer_=0xc00000u+credits_content_layout(version).palette;break;
  default:throw std::invalid_argument("Unknown credits initializer palette block");
  }
  const unsigned dp=call_.direct_page_low!=0;
  if(part==PalettePart::Frame){
    add(3,3,0,45,initialize_file);add(4+dp,2,2,46,initialize_file);
  }
  // LOADPTR immutable authored palette into LOCAL00/LOCAL00+2.
  add(3,3,0,caller_line,initialize_file);
  add(4+dp,2,2,caller_line,initialize_file,Effect::PointerLow,pointer&65535);
  add(3,3,0,caller_line,initialize_file);
  add(4+dp,2,2,caller_line,initialize_file,Effect::PointerBank,pointer>>16);
  add(3,3,0,caller_line+1,initialize_file);
  add(part==PalettePart::Frame?4+dp:3,part==PalettePart::Frame?2:3,
      part==PalettePart::Frame?2:0,caller_line+2,initialize_file);
  add(8,4,3,caller_line+3,initialize_file); // actual incoming JSL
  const auto body=[&](unsigned cycles,unsigned rom,unsigned slow,unsigned line,
      Effect effect=Effect::None,unsigned operand=0){add(cycles,rom,slow,line,memcpy_file,effect,operand,false);};
  body(5,3,2,3,Effect::CounterSet,unsigned(palette_.size()*2));
  body(8,3,4,4,Effect::CounterShift);body(2,1,0,5);body(3,3,0,6);body(3,2,0,7);
  for(unsigned i=0;;++i) {
    body(8,3,4,16,Effect::CounterDecrement);
    body(i<palette_.size()?3:2,2,0,17);
    if(i==palette_.size())break;
    // long-indirect pointer reads3 WRAM bytes and2 actual immutable ROM bytes.
    body(7+dp,4,3,9,Effect::ReadPalette,i);
    body(6,3,2,10,Effect::StorePalette,first_color_+i);
    body(2,1,0,11);body(2,1,0,12);body(2,1,0,13);body(2,1,0,14);
  }
  body(6,1,3,18);
}
void InitializerWork::Operation::palette_clear() {
  const unsigned dp=call_.direct_page_low!=0;
  // LOCAL00 retains the actual preceding C30000 sprite-palette pointer.
  pointer_=0xc30000;
  add(3,2,0,68,initialize_file);
  if(owner_.resources_.version()==GameVersion::JP)add(2,2,0,69,initialize_file);
  add(3+dp,2,1,69,initialize_file,Effect::PointerLow,0);
  add(3,3,0,70,initialize_file);add(3,2,0,71,initialize_file);
  add(4+dp,2,2,72,initialize_file);add(8,4,3,73,initialize_file);
  const auto body=[&](unsigned cycles,unsigned rom,unsigned slow,unsigned line,
      Effect effect=Effect::None,unsigned operand=0){add(cycles,rom,slow,line,memset_file,effect,operand,false);};
  body(2,1,0,3);body(2,1,0,4);body(2,1,0,5);body(2,1,0,6);body(2,1,0,7);
  body(3,2,0,8);body(3+dp,2,1,9);body(3,1,0,10);body(3+dp,2,1,11);
  body(3,2,0,12);body(3,2,0,13);
  for(unsigned i=0;;++i) {
    body(2,1,0,19);body(i<240?3:2,2,0,20);
    if(i==240)break;
    body(6,3,2,15,Effect::ClearPalette,16+i);body(2,1,0,16);body(2,1,0,17);
  }
  body(6,1,3,21);
}
void InitializerWork::Operation::text_clear() {
  const unsigned dp=call_.direct_page_low!=0;
  const unsigned base=owner_.resources_.version()==GameVersion::JP?0x8176:0x7dfe;
  // PROMOTENEARPTR BG2_BUFFER, VIRTUAL06, with DB7E and the genuine
  // byte-sized bank store and upper-byte clear from STORE_INT816.
  add(3,3,0,84,initialize_file);add(4+dp,2,2,84,initialize_file,Effect::PointerLow,base);
  add(3,1,1,84,initialize_file);add(3,2,0,84,initialize_file);add(4,1,1,84,initialize_file);
  add(3+dp,2,1,84,initialize_file,Effect::PointerBank,0x7e);
  add(3+dp,2,1,84,initialize_file,Effect::PointerUpper);
  add(3,3,0,85,initialize_file);add(3,2,0,86,initialize_file);
  for(unsigned i=0;;++i) {
    add(3,3,0,95,initialize_file);add(i<512?3:2,2,0,96,initialize_file);
    if(i==512)break;
    add(3,2,0,88,initialize_file);add(3,3,0,89,initialize_file);
    add(7+dp,2,5,90,initialize_file,Effect::ClearText,i*2);
    add(7+dp,2,4,91,initialize_file,Effect::PointerIncrement);
    add(7+dp,2,4,92,initialize_file,Effect::PointerIncrement);add(2,1,0,93,initialize_file);
  }
  add(3,2,0,97,initialize_file);
}
void InitializerWork::Operation::effect(const Atom &a) {
  switch(a.effect) {
  case Effect::None:break;
  case Effect::PointerLow:pointer_=(pointer_&0xffff0000u)|a.operand;break;
  case Effect::PointerBank:pointer_=(pointer_&65535)|(a.operand<<16);break;
  case Effect::PointerUpper:pointer_&=0x00ffffff;break;
  case Effect::CounterSet:owner_.state_.memcpy_words_left=std::uint16_t(a.operand);break;
  case Effect::CounterShift:owner_.state_.memcpy_words_left>>=1;break;
  case Effect::CounterDecrement:--owner_.state_.memcpy_words_left;break;
  case Effect::ReadPalette:value_=palette_[a.operand];break;
  case Effect::StorePalette:owner_.palette_.staged[a.operand/16][a.operand%16]=value_;break;
  case Effect::ClearPalette:owner_.palette_.staged[a.operand/16][a.operand%16]=0;break;
  case Effect::PointerIncrement:pointer_=(pointer_&0xffff0000u)|std::uint16_t(pointer_+1);break;
  case Effect::ClearText:owner_.text_[a.operand]=owner_.text_[a.operand+1]=0;break;
  }
}
dialogue::Progress InitializerWork::Operation::advance(unsigned budget) {
  require(!owner_lifetime_.expired(),"Credits initializer operation owner expired");
  require(!executing_,"Credits initializer is reentrant");owner_.require_healthy();
  require(complete_||(owner_.active_==this&&owner_.state_.lease_==this&&owner_.palette_.source_lease_==this),
      "Credits initializer lost its exact counter/palette claim");
  if(complete_)return dialogue::Progress::Finished;
  executing_=true;
  try {
    while(budget--&&cursor_<atoms_.size()) {
      const auto &atom=atoms_[cursor_];
      if(atom.effect==Effect::None)owner_.clock_.retire_source_work(atom.cost);
      else owner_.clock_.retire_source_work(atom.cost,[&]{effect(atom);});
      ++cursor_;
    }
    executing_=false;
    if(cursor_!=atoms_.size())return dialogue::Progress::BudgetExhausted;
    complete_=true;owner_.active_=nullptr;if(release_)release_();return dialogue::Progress::Finished;
  }catch(...){executing_=false;owner_.failed_=true;throw;}
}
}
