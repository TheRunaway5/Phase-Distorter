#include "eb/native/cutscenes/ending/credits_work.hpp"
#include "eb/native/world_runtime.hpp"
#include <algorithm>
#include <limits>
#include <stdexcept>

namespace eb::native::cutscenes::ending {
namespace {
void require(bool condition,const char *message) {if(!condition)throw std::logic_error(message);}
enum class Width {Keep,Byte,Word};
enum class Mark {None,Row,Next,Wipe,CursorLow,CursorHigh,ScrollLow,ScrollHigh,Position,
                 First,Second,Indexed,QueueSize,QueuePointerLow,QueuePointerHigh,QueueTarget,Head};
struct CostSpec {story::SourceWorkCost word,byte;Width next;Mark mark;};
#include "credits_work_costs.inc"
std::uint8_t player_glyph(std::uint8_t value) {
  if(value==172)return 124;
  if(value==174)return 126;
  if(value==175)return 127;
  return std::uint8_t(value-(value<=144?48:80));
}
void trail_byte(PartyTrail &trail,unsigned at,unsigned value) {
  require(at<128*9,"Credits descriptor escaped its actual party-trail alias");
  auto &p=trail.points[at/12];std::uint16_t *words[]={&p.x,&p.y,&p.surface_flags,&p.walking_style,&p.direction,&p.reserved};
  auto &word=*words[(at%12)/2];const auto shift=(at&1)*8;
  word=std::uint16_t((word&~(255u<<shift))|((value&255)<<shift));
}
}
CreditsWork::CreditsWork(CreditsTextScene &text,PartyTrail &trail,std::span<std::uint8_t> composition,
                         battle::PsiDisplayState &video,NameBoundaryOwners boundaries)
    :text_(text),trail_(trail),composition_(composition),video_(video),boundaries_(std::move(boundaries)) {
  require(!text.source_work_&&composition.size()==2048,"Credits work requires its actual idle composition surface");
  require(text.state_.ticks==0&&text.publications_.empty(),"Credits work must bind before the first installed callback");
  for(unsigned i=0;i<text_.rows_.size();++i)require((composition[i*2]|(unsigned(composition[i*2+1])<<8))==text_.rows_[i],
      "Credits composition bytes differ from their actual typed rows");
  text_.source_work_=this;
}
CreditsWork::~CreditsWork() {if(text_.source_work_==this)text_.source_work_=nullptr;}
std::vector<CreditsWork::Atom> CreditsWork::plan(std::span<const std::uint8_t> name) const {
  require(!failed_&&name.size()<=24,"Credits source callback has an invalid lifecycle or player-name owner");
  const bool jp=text_.resources_->version()==GameVersion::JP;
  auto line=jp?jp_credits:us_credits;auto queue=jp?jp_queue:us_queue;auto ports=jp?jp_ports:us_ports;
  std::vector<Atom> atoms;bool byte=false;unsigned next=text_.state_.next_credit_position;
  const unsigned position=text_.state_.scroll_position>>16,first=text_.state_.composition_row;
  unsigned cursor=text_.state_.cursor,head=text_.source_queue_start_,count=0,glyph_at=0,glyph_value=0;
  unsigned name_at=0,name_value=0,queue_at=0,queue_source=0,queue_target=0,queue_size=0,queue_mode=0,queue_head_stores=0;
  unsigned publication=0,pending=text_.publications_.size();
  const auto scroll=text_.state_.scroll_position+0x4000;
  const unsigned screen=((position>>3)+29)&31;
  auto emit=[&](std::span<const CostSpec> specs) {
    for(const auto &s:specs) {
      Atom a{byte?s.byte:s.word};
      switch(s.mark) {
      case Mark::Row:a.effect=Effect::Row;a.value=(first+2)&15;break;
      case Mark::Next:a.effect=Effect::Next;a.value=next;break;
      case Mark::Wipe:a.effect=Effect::Wipe;a.value=std::uint16_t(text_.state_.wipe_threshold+8);break;
      case Mark::CursorLow:a.effect=Effect::Cursor;a.value=cursor;break;
      case Mark::ScrollLow:a.effect=Effect::Fraction;a.value=std::uint16_t(scroll);break;
      case Mark::ScrollHigh:a.effect=Effect::Integer;a.value=scroll>>16;break;
      case Mark::Position:a.effect=Effect::Scroll;a.value=scroll>>16;break;
      case Mark::First:a.effect=Effect::Composition;a.operand=first*32+glyph_at;a.value=glyph_value;break;
      case Mark::Second:a.effect=Effect::Composition;a.operand=(first+1)*32+glyph_at;a.value=glyph_value+16;break;
      case Mark::Indexed:
        if(queue_mode<4&&queue_at==head*9) {a.effect=Effect::QueueByte;a.operand=queue_at;a.value=queue_mode;}
        else {a.effect=Effect::Name;a.operand=name_at;a.value=name_value;}
        break;
      case Mark::QueueSize:a.effect=Effect::QueueWord;a.operand=queue_at+1;a.value=queue_size;break;
      case Mark::QueuePointerLow:a.effect=Effect::QueueWord;a.operand=queue_at+3;a.value=queue_source&65535;break;
      case Mark::QueuePointerHigh:a.effect=Effect::QueueWord;a.operand=queue_at+5;a.value=queue_source>>16;break;
      case Mark::QueueTarget:a.effect=Effect::QueueWord;a.operand=queue_at+7;a.value=queue_target;break;
      case Mark::Head:
        if(queue_head_stores++==0){a.effect=Effect::QueueStart;a.value=head+1;}
        else {a.effect=Effect::QueuePublish;a.value=(head+1)&127;a.operand=publication;}
        break;
      default:break;
      }
      atoms.push_back(a);
      if(s.next!=Width::Keep)byte=s.next==Width::Byte;
    }
  };
  auto range=[&](unsigned ua,unsigned ub,unsigned ja,unsigned jb){for(unsigned l=jp?ja:ua;l<=(jp?jb:ub);++l)emit(line(l));};
  auto branch=[&](bool taken){atoms.push_back({{taken?3u:2u,2,0,0}});};
  auto long_branch=[&](bool taken){branch(!taken);if(taken)atoms.push_back({{3,3,0,0}});};
  auto enqueue=[&](unsigned row,unsigned destination,unsigned col,unsigned size,bool clear) {
    require(pending++<127,"Credits callback exceeded its actual source row ring");
    queue_at=head*9;queue_mode=clear?3:0;queue_size=size*2;
    queue_source=clear?(jp?0xc40b34u:0xc40be8u):((jp?0x7e8176u:0x7e7dfeu)+row*64);
    queue_target=0x6c00+destination*32+col;queue_head_stores=0;
    publication=row|(destination<<4)|(col<<9)|(size<<14)|(unsigned(clear)<<20);
    for(unsigned l=3;l<=40;++l)emit(queue(l));
    head=(head+1)&127;
  };
  range(3,16,3,15);
  const bool command_due=jp?position>=next:position>next;
  if(jp)branch(command_due);
  else {branch(position==next);if(position!=next)branch(position>=next);}
  if(!command_due)range(18,18,17,17);
  else {
    require(cursor<text_.resources_->script().size(),"Credits callback cursor escaped imported source content");
    const unsigned command=text_.resources_->script()[cursor++];range(20,73,19,71);
    branch(command==1);
    if(command!=1) {
      range(75,75,73,73);long_branch(command==2);
      if(command!=2) {
        range(77,77,75,75);long_branch(command==3);
        if(command!=3) {
          range(79,79,77,77);long_branch(command==4);
          if(command!=4) {range(81,81,79,79);long_branch(command==255);if(command!=255)range(83,83,81,81);}
        }
      }
    }
    if(command==1||command==2) {
      const bool tall=command==2;next=std::uint16_t(next+(tall?16:8));
      if(tall)range(147,151,143,147);else range(85,89,83,87);
      for(;;) {
        require(cursor<text_.resources_->script().size(),"Truncated staff glyph line");
        const auto value=text_.resources_->script()[cursor];
        if(tall)range(175,176,169,170);else range(105,106,103,104);branch(value!=0);
        if(!value)break;
        require(count<32,"Credits line escaped its composition row");glyph_at=count++;glyph_value=(tall?0x2400:0x2000)+value;
        if(tall)range(153,173,149,167);else range(91,103,89,101);++cursor;
      }
      require(count!=0,"Empty staff line requests source DAS0 hardware bytes");
      const auto col=16-count/2;
      if(tall)range(178,211,172,204);else range(108,143,106,139);
      enqueue(first,screen,col,count,false);
      if(tall) {
        range(212,214,205,207);branch(screen==31);
        if(screen==31)range(222,225,215,218);else range(216,220,209,213);
        range(227,246,220,239);enqueue(first+1,(screen+1)&31,col,count,false);range(247,247,240,240);
      }else range(144,144,140,140);
      ++cursor;
    } else if(command==3) {
      require(cursor<text_.resources_->script().size(),"Truncated staff spacing command");
      next=std::uint16_t(next+text_.resources_->script()[cursor]*8);range(250,258,243,251);++cursor;
    } else if(command==4) {
      const auto name_size=std::find(name.begin(),name.end(),0)-name.begin();
      std::optional<std::uint8_t> encoded_boundary,converted_boundary;
      if(name_size==24) {
        require(bool(boundaries_.after_encoded_name),"Credits byte24 requires its actual adjacent pet-name owner");
        encoded_boundary=boundaries_.after_encoded_name();
        require(encoded_boundary.has_value()&&(jp||!*encoded_boundary),"US credits conversion would escape its actual player-name owner");
      }
      range(260,263,253,255);long_branch(name_size==0);
      auto converted=text_.converted_name_;
      if(name_size) {
        if(!jp) {
          range(265,269,0,0);
          for(unsigned i=0;;++i) {
            range(356,360,0,0);const bool live=i<unsigned(name_size);long_branch(live);if(!live)break;
            name_at=i;name_value=player_glyph(name[i]);queue_at=~0u;
            range(272,275,0,0);branch(name[i]==172);
            if(name[i]==172)range(284,294,0,0);
            else {
              range(277,277,0,0);branch(name[i]==174);
              if(name[i]==174)range(297,307,0,0);
              else {
                range(279,279,0,0);branch(name[i]==175);
                if(name[i]==175)range(310,320,0,0);
                else {
                  range(281,281,0,0);range(323,325,0,0);
                  branch(true);branch(name[i]<=144); // BVC then signed BMI; byte-145 has no overflow.
                  if(name[i]<=144)range(333,336,0,0);else range(327,331,0,0);
                  range(338,347,0,0);
                }
              }
            }
            converted[i]=std::uint8_t(name_value);range(349,354,0,0);
          }
        }
        next=std::uint16_t(next+16);range(362,367,257,262);
        for(unsigned i=0;;++i) {
          range(402,403,293,294);
          unsigned value;
          if(i<24)value=jp?(i<name.size()?name[i]:0):converted[i];
          else if(jp)value=encoded_boundary.value_or(0);
          else {
            require(bool(boundaries_.after_converted_name),"Credits byte24 requires its actual adjacent delivery-attempt owner");
            if(!converted_boundary)converted_boundary=boundaries_.after_converted_name();
            require(converted_boundary.has_value(),"Credits converted-name byte24 owner is unavailable");
            value=*converted_boundary;
          }
          branch(!value);if(!value)break;range(405,405,296,296);branch(i<24);if(i==24)break;
          glyph_at=count++;glyph_value=0x2400+value+(value&0xf0);range(369,400,264,291);
        }
        require(count&&count<=24,"US converted name requests source DAS0 hardware bytes");
        const auto col=16-count/2;range(408,442,299,331);enqueue(first,screen,col,count,false);
        range(444,445,333,334);branch(screen==31);
        if(screen==31)range(454,457,343,346);else range(447,451,336,340);
        range(459,478,348,367);enqueue(first+1,(screen+1)&31,col,count,false);
      }
      range(480,483,369,372); // Name command preserves the pointer to the next command.
    } else if(command==255) {
      next=65535;range(486,487,375,376);++cursor;
    } else {++cursor;}
    range(489,491,378,380);
  }
  range(493,494,382,383);branch(text_.state_.wipe_threshold>=position);
  if(text_.state_.wipe_threshold<position) {
    range(496,518,385,407);enqueue(0,((position>>3)-1)&31,0,32,true);
  }
  range(521,525,410,414);const bool carry=std::uint16_t(text_.state_.scroll_position)>=0xc000;
  branch(!carry);if(carry)range(527,527,416,416);
  range(529,531,418,420);
  for(unsigned l=3;l<=9;++l) {
    const auto offset=atoms.size();emit(ports(l));
    if(l==5||l==7) {require(atoms.size()==offset+1,"Credits physical scroll atom differs");
      atoms.back().effect=l==5?Effect::LowPort:Effect::HighPort;
      atoms.back().value=l==5?std::uint8_t(scroll>>16):std::uint8_t(scroll>>24);}
  }
  range(532,532,421,421);atoms.back().effect=Effect::Return;
  return atoms;
}
void CreditsWork::apply(const Atom &a) {
  auto &state=text_.state_;
  switch(a.effect) {
  case Effect::Row:state.composition_row=std::uint16_t(a.value);break;
  case Effect::Next:state.next_credit_position=std::uint16_t(a.value);state.script_ended=a.value==65535;break;
  case Effect::Composition:text_.rows_[a.operand]=std::uint16_t(a.value);composition_[a.operand*2]=std::uint8_t(a.value);composition_[a.operand*2+1]=std::uint8_t(a.value>>8);break;
  case Effect::Name:text_.converted_name_[a.operand]=std::uint8_t(a.value);break;
  case Effect::QueueByte:trail_byte(trail_,a.operand,a.value);break;
  case Effect::QueueWord:trail_byte(trail_,a.operand,a.value);trail_byte(trail_,a.operand+1,a.value>>8);break;
  case Effect::QueueStart:text_.source_queue_start_=std::uint16_t(a.value);break;
  case Effect::QueuePublish:text_.source_queue_start_=std::uint16_t(a.value);
    text_.enqueue({a.operand&15,(a.operand>>4)&31,(a.operand>>9)&31,(a.operand>>14)&63,bool((a.operand>>20)&1)});break;
  case Effect::Cursor:state.cursor=a.value;break;
  case Effect::Wipe:state.wipe_threshold=std::uint16_t(a.value);break;
  case Effect::Fraction:state.scroll_position=(state.scroll_position&0xffff0000u)|a.value;break;
  case Effect::Integer:state.scroll_position=(state.scroll_position&65535u)|(a.value<<16);break;
  case Effect::Scroll:video_.staged_scroll[2].y=std::uint16_t(a.value);break;
  case Effect::LowPort:case Effect::HighPort:video_.write_source_scroll_port(2,true,std::uint8_t(a.value));break;
  case Effect::Return:++state.ticks;break;
  default:break;
  }
}
unsigned CreditsWork::maximum_master_clocks(std::span<const std::uint8_t> name,bool fast) const {
  std::uint64_t clocks=0;for(const auto &a:plan(name))clocks+=a.cost.master_clocks(fast);
  require(clocks<=std::numeric_limits<unsigned>::max(),"Credits callback cost overflow");return unsigned(clocks);
}
void CreditsWork::with_source_work(story::SourceWorkService &clock,const std::function<void()> &callback) {
  require(!active_&&!failed_&&!clock.failed()&&bool(callback),"Credits source callback work is unavailable");
  active_=true;clock_=&clock;retired_=0;
  try {callback();require(retired_!=0,"Actual credits callback did not execute source work");clock_=nullptr;active_=false;}
  catch(...) {clock_=nullptr;active_=false;failed_=true;throw;}
}
void CreditsWork::advance(CreditsTextScene &actual,std::span<const std::uint8_t> name) {
  require(&actual==&text_&&active_&&clock_&&!failed_&&retired_==0,"Credits callback needs its actual single source-work invocation");
  const auto atoms=plan(name);
  for(const auto &a:atoms) {clock_->retire_source_work(a.cost,[&]{apply(a);});++retired_;}
}
SourceCreditsCallbackWork::SourceCreditsCallbackWork(WorldRuntime &runtime,const story::InterruptCallback &callback,
    CreditsWork &work,std::function<std::span<const std::uint8_t>()> name)
    :runtime_(runtime),callback_(callback),work_(work),name_(std::move(name)) {
  require(bool(name_),"Source credits callback requires its actual player-name owner");
}
bool SourceCreditsCallbackWork::uses(const WorldRuntime &runtime) const noexcept {
  return &runtime==&runtime_&&runtime.uses_interrupt_callback(callback_);
}
unsigned SourceCreditsCallbackWork::maximum_master_clocks(bool fast,std::uint8_t) const {
  require(uses(runtime_),"Source credits callback lost its actual installed owner");
  callback_.validate_publication();return work_.maximum_master_clocks(name_(),fast);
}
void SourceCreditsCallbackWork::execute(story::SourceWorkClock &clock,const std::function<void()> &callback) {
  require(uses(runtime_)&&work_.uses_clock(clock),"Source credits callback lost its actual installed clock/video owner");work_.with_source_work(clock,callback);
}
SourceCallbackDispatcher::SourceCallbackDispatcher(WorldRuntime &runtime,story::SourceCallbackWork &world)
    :runtime_(runtime),world_(world) {require(world.uses(runtime),"Source callback dispatcher requires its actual installed world owner");}
void SourceCallbackDispatcher::bind_credits(SourceCreditsCallbackWork &credits) {
  require(!runtime_.interrupt_callback_active()&&!credits_&&credits.bound_to(runtime_),"Credits callback dispatcher is busy or bound to another runtime");credits_=&credits;
}
void SourceCallbackDispatcher::revoke_credits(SourceCreditsCallbackWork &credits,WorldRuntime::Operation *parent) {
  require(credits.bound_to(runtime_)&&credits_==&credits&&credits.uses(runtime_),
      "Credits callback revocation requires its actual registered installed owner");
  // The runtime validates parent affinity/content admission and rejects a
  // running callback before changing its installed identity.
  runtime_.reset_interrupt_callback(parent);credits_=nullptr;
}
void SourceCallbackDispatcher::clear_credits(const SourceCreditsCallbackWork &credits) noexcept {if(credits_==&credits)credits_=nullptr;}
story::SourceCallbackWork &SourceCallbackDispatcher::selected() const {
  if(credits_&&credits_->uses(runtime_))return *credits_;
  require(world_.uses(runtime_),"Source callback dispatcher has no actual installed callback owner");return world_;
}
bool SourceCallbackDispatcher::uses(const WorldRuntime &runtime) const noexcept {
  return &runtime==&runtime_&&((credits_&&credits_->uses(runtime_))||world_.uses(runtime_));
}
unsigned SourceCallbackDispatcher::maximum_master_clocks(bool fast,std::uint8_t frame) const {return selected().maximum_master_clocks(fast,frame);}
void SourceCallbackDispatcher::execute(story::SourceWorkClock &clock,const std::function<void()> &callback) {selected().execute(clock,callback);}
}
