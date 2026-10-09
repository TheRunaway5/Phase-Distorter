#include "execution.hpp"
#include "eb/native/entities/graphics/object_display.hpp"
#include "eb/native/battle/frame_display.hpp"
#include <stdexcept>
namespace eb::native::story {
namespace {void require(bool v,const char *m){if(!v)throw std::logic_error(m);}}
SourceMeterTiles::Execution::Execution(SourceWorkClock &w,SourceMeterTilesReceipt &r,SourceMeterTilesContext c,SourceMeterTilesCall call)
    :work(w),receipt(r),entry(*call.entry),control(*call.control),scratch(*call.scratch),party(*r.party),meters(*r.meters),
     windows(*r.windows),hardware(*w.frames_.peripherals()),a(c.accumulator),x(c.x_index),y(c.y_index),d(c.direct_page),
     s(c.stack_pointer),p(c.caller_status),jp(party.version()==GameVersion::JP),boundary(c.boundary) {
    build_main();build_mult();build_digits();build_division();
}
void SourceMeterTiles::Execution::nz(std::uint16_t value,bool byte) {
    if(byte)value&=255;
    p=std::uint8_t((p&~(N|Z))|(!value?Z:0)|(value&(byte?0x80:0x8000)?N:0));
}
void SourceMeterTiles::Execution::load(std::uint16_t value) {
    if(p&A8)a=std::uint16_t((a&0xff00)|(value&255));else a=value;nz(a,p&A8);
}
void SourceMeterTiles::Execution::adc(std::uint16_t value,bool subtract) {
    const auto old=a;const unsigned mask=p&A8?255:65535,sign=p&A8?128:32768;
    const unsigned operand=subtract?((~unsigned(value))&mask):(value&mask);
    const unsigned result=(old&mask)+operand+(p&C?1:0);const auto low=result&mask;
    a=std::uint16_t((old&~mask)|low);p=std::uint8_t((p&~(C|V))|(result>mask?C:0)|
        ((~(old^operand)&(old^low)&sign)?V:0));nz(a,p&A8);
}
void SourceMeterTiles::Execution::cmp(std::uint16_t value,std::uint16_t operand,bool byte) {
    if(byte){value&=255;operand&=255;}p=std::uint8_t((p&~C)|(value>=operand?C:0));nz(std::uint16_t(value-operand),byte);
}
std::uint16_t SourceMeterTiles::Execution::local(unsigned offset) const {
    const unsigned address=unsigned(d)+offset;require(address>=0x1d00&&address+1<0x1e00,"Meter artwork left its one C-stack page");
    const auto at=address-0x1d00;return std::uint16_t(entry.page_[at]|(unsigned(entry.page_[at+1])<<8));
}
void SourceMeterTiles::Execution::put_local(unsigned offset,std::uint16_t value,bool byte) {
    const unsigned address=unsigned(d)+offset;require(address>=0x1d00&&address+(byte?0:1)<0x1e00,"Meter artwork left its one C-stack page");
    const auto at=address-0x1d00;entry.page_[at]=std::uint8_t(value);if(!byte)entry.page_[at+1]=std::uint8_t(value>>8);
}
std::uint8_t SourceMeterTiles::Execution::read_byte(std::uint16_t address) const {
    if(address>=decimal()&&unsigned(address-decimal())<99)return meters.read_source_digit_byte(address-decimal());
    if(address>=scratch_base()&&unsigned(address-scratch_base())<12)return scratch.bytes_[address-scratch_base()];
    if(address>=order_base()&&unsigned(address-order_base())<5)return party.party_order[address-order_base()];
    if(address==count_base())return party.controlled_count;
    if(address==std::uint16_t(count_base()+1))return std::uint8_t(control.automatic_mode);
    if(address==render_base())return meters.state().render;
    if(address==std::uint16_t(render_base()+1))return std::uint8_t(meters.state().selected_phase);
    if(address==std::uint16_t(render_base()+2))return std::uint8_t(meters.state().selected_phase>>8);
    const auto drawn=jp?0x993f:0x9647;
    if(address==drawn)return std::uint8_t(meters.state().drawn_mask);
    if(address==drawn+1)return std::uint8_t(meters.state().drawn_mask>>8);
    if(address==upload_base())return meters.state().upload;
    if(address==std::uint16_t(upload_base()+1))return std::uint8_t(windows.output().policy().text_speed);
    if(address==2)return work.ticks_.frame_counter;
    if(address==3)return std::uint8_t(work.objects_.builder.address);
    if(address>=party_base()) {
        const unsigned relative=address-party_base(),id=relative/stride(),offset=relative%stride();
        require(id<4,"Meter artwork left its chosen character row extent");
        const auto &character=party.character(id+1);const auto hp=hp_fraction();
        const std::uint16_t *word=nullptr;unsigned low=0;
        if(offset>=hp&&offset<hp+2){word=&character.hp_fraction;low=hp;}
        else if(offset>=hp+2&&offset<hp+4){word=&character.current_hp;low=hp+2;}
        else if(offset>=hp+6&&offset<hp+8){word=&character.pp_fraction;low=hp+6;}
        else if(offset>=hp+8&&offset<hp+10){word=&character.current_pp;low=hp+8;}
        if(word)return std::uint8_t(*word>>((offset-low)*8));
        const unsigned affliction=jp?0x0d:0x0e;
        if(offset>=affliction+4&&offset<=affliction+5)return character.afflictions[offset-affliction];
    }
    throw std::logic_error("Meter artwork read an unowned source field");
}
std::uint16_t SourceMeterTiles::Execution::read_word(std::uint16_t address) const {
    return std::uint16_t(read_byte(address)|(unsigned(read_byte(std::uint16_t(address+1)))<<8));
}
void SourceMeterTiles::Execution::store_word(std::uint16_t address,std::uint16_t value,bool byte) {
    if(address>=decimal()&&unsigned(address-decimal())+(byte?0:1)<99) {
        meters.store_source_digit_byte(address-decimal(),std::uint8_t(value));
        if(!byte)meters.store_source_digit_byte(address-decimal()+1,std::uint8_t(value>>8));
        return;
    }
    if(address>=scratch_base()&&unsigned(address-scratch_base())+(byte?0:1)<6) {
        scratch.bytes_[address-scratch_base()]=std::uint8_t(value);
        if(!byte)scratch.bytes_[address-scratch_base()+1]=std::uint8_t(value>>8);
        return;
    }
    if(address==upload_base()&&byte){meters.state().upload=std::uint8_t(value);return;}
    if(address>=bg2()&&unsigned(address-bg2())+1<1792&&!byte) {
        windows.store_source_meter_descriptor(address-bg2(),value);return;
    }
    throw std::logic_error("Meter artwork store left its actual scratch/digit/BG2 owners");
}
void SourceMeterTiles::Execution::add(SourceWorkCost cost,std::function<void()> effect) {
    atoms.push_back({[cost]{return cost;},std::move(effect)});
}
void SourceMeterTiles::Execution::dynamic(std::function<SourceWorkCost()> cost,std::function<void()> effect) {
    atoms.push_back({std::move(cost),std::move(effect)});
}
void SourceMeterTiles::Execution::label(const std::string &name) {require(!labels.contains(name),"Duplicate meter artwork continuation");labels[name]=unsigned(atoms.size());}
void SourceMeterTiles::Execution::branch(std::function<bool()> condition,const std::string &target) {
    dynamic([condition]{return SourceWorkCost{unsigned(condition()?3:2),2,0,0};},[this,condition,target]{if(condition())next=labels.at(target);});
}
void SourceMeterTiles::Execution::jump(const std::string &target,bool relative) {add(relative?SourceWorkCost{3,2,0,0}:SourceWorkCost{3,3,0,0},[this,target]{next=labels.at(target);});}
void SourceMeterTiles::Execution::call(const std::string &target,bool far) {
    add(far?SourceWorkCost{8,4,3,0}:SourceWorkCost{6,3,2,0},[this,target,far]{returns.push_back(next);s=std::uint16_t(s-(far?3:2));next=labels.at(target);});
}
void SourceMeterTiles::Execution::ret(bool far) {
    add(far?SourceWorkCost{6,1,3,0}:SourceWorkCost{6,1,2,0},[this,far]{require(!returns.empty(),"Missing meter artwork child return");s=std::uint16_t(s+(far?3:2));next=returns.back();returns.pop_back();});
}
void SourceMeterTiles::Execution::rep(std::uint8_t bits){add({3,2,0,0},[this,bits]{p&=std::uint8_t(~bits);});}
void SourceMeterTiles::Execution::sep(std::uint8_t bits){add({3,2,0,0},[this,bits]{p|=bits;if(bits&I8){x&=255;y&=255;}});}
void SourceMeterTiles::Execution::phd(){add({4,1,2,0},[this]{saved_d.push_back(d);s=std::uint16_t(s-2);});}
void SourceMeterTiles::Execution::pld(){add({5,1,2,0},[this]{require(!saved_d.empty(),"Missing meter artwork PHD");d=saved_d.back();saved_d.pop_back();s=std::uint16_t(s+2);nz(d);});}
void SourceMeterTiles::Execution::push(char reg){dynamic([this,reg]{const bool byte=reg=='a'?(p&A8):(p&I8);return SourceWorkCost{unsigned(byte?3:4),1,unsigned(byte?1:2),0};},[this,reg]{const bool byte=reg=='a'?(p&A8):(p&I8);const auto v=reg=='x'?x:reg=='y'?y:a;saved_values.push_back(byte?std::uint8_t(v):v);s=std::uint16_t(s-(byte?1:2));});}
void SourceMeterTiles::Execution::pop(char reg){dynamic([this,reg]{const bool byte=reg=='a'?(p&A8):(p&I8);return SourceWorkCost{unsigned(byte?4:5),1,unsigned(byte?1:2),0};},[this,reg]{require(!saved_values.empty(),"Missing meter artwork saved register");const bool byte=reg=='a'?(p&A8):(p&I8);const auto v=saved_values.back();saved_values.pop_back();s=std::uint16_t(s+(byte?1:2));if(reg=='a')load(v);else {auto &to=reg=='x'?x:y;to=byte?std::uint8_t(v):v;nz(to,byte);}});}
void SourceMeterTiles::Execution::transfer(char from,char to) {
    add({2,1,0,0},[this,from,to]{const auto v=from=='a'?a:from=='x'?x:from=='y'?y:d;
        if(to=='a'){if(from=='d'){a=v;nz(a);}else load(v);}else if(to=='d'){d=a;nz(d);}else{auto &dest=to=='x'?x:y;dest=(p&I8)?std::uint8_t(v):v;nz(dest,p&I8);}});
}
void SourceMeterTiles::Execution::carry(bool set){add({2,1,0,0},[this,set]{if(set)p|=C;else p&=std::uint8_t(~C);});}
void SourceMeterTiles::Execution::immediate(std::uint16_t value,char reg) {
    dynamic([this,reg]{const bool byte=reg=='a'?(p&A8):(p&I8);return SourceWorkCost{unsigned(byte?2:3),unsigned(byte?2:3),0,0};},
        [this,value,reg]{if(reg=='a')load(value);else{auto &dest=reg=='x'?x:y;dest=(p&I8)?std::uint8_t(value):value;nz(dest,p&I8);}});
}
void SourceMeterTiles::Execution::and_imm(std::uint16_t v){dynamic([this]{return SourceWorkCost{unsigned(p&A8?2:3),unsigned(p&A8?2:3),0,0};},[this,v]{load(std::uint16_t(a&v));});}
void SourceMeterTiles::Execution::eor_imm(std::uint16_t v){dynamic([this]{return SourceWorkCost{unsigned(p&A8?2:3),unsigned(p&A8?2:3),0,0};},[this,v]{load(std::uint16_t(a^v));});}
void SourceMeterTiles::Execution::adc_imm(std::uint16_t v,bool sub){dynamic([this]{return SourceWorkCost{unsigned(p&A8?2:3),unsigned(p&A8?2:3),0,0};},[this,v,sub]{adc(v,sub);});}
void SourceMeterTiles::Execution::cmp_imm(std::uint16_t v,char reg){dynamic([this,reg]{const bool byte=reg=='a'?(p&A8):(p&I8);return SourceWorkCost{unsigned(byte?2:3),unsigned(byte?2:3),0,0};},[this,v,reg]{cmp(reg=='a'?a:reg=='x'?x:y,v,reg=='a'?(p&A8):(p&I8));});}
void SourceMeterTiles::Execution::inc_reg(char reg,bool dec) {
    add({2,1,0,0},[this,reg,dec]{auto &dest=reg=='a'?a:reg=='x'?x:y;const bool byte=reg=='a'?(p&A8):(p&I8);
        const auto v=std::uint16_t(dest+(dec?-1:1));dest=byte?std::uint16_t((reg=='a'?dest&0xff00:0)|(v&255)):v;nz(dest,byte);});
}
void SourceMeterTiles::Execution::shift_reg(bool right,bool rotate) {
    add({2,1,0,0},[this,right,rotate]{const unsigned mask=p&A8?255:65535,high=p&A8?128:32768,old=a&mask;
        const unsigned v=right?((old>>1)|(rotate&&(p&C)?high:0)):((old<<1)|(rotate&&(p&C)?1:0));
        a=std::uint16_t((a&~mask)|(v&mask));p=std::uint8_t((p&~C)|((right?(old&1):(old&high))?C:0));nz(a,p&A8);});
}
void SourceMeterTiles::Execution::load_dp(unsigned at,char reg) {
    dynamic([this,reg]{const bool byte=reg=='a'?(p&A8):(p&I8);return SourceWorkCost{unsigned(3+(byte?0:1)+(d&255?1:0)),2,unsigned(byte?1:2),0};},
        [this,at,reg]{const auto v=local(at);if(reg=='a')load(v);else {auto &dest=reg=='x'?x:y;dest=p&I8?std::uint8_t(v):v;nz(dest,p&I8);}});
}
void SourceMeterTiles::Execution::store_dp(unsigned at,char reg) {
    dynamic([this,reg]{const bool byte=reg=='a'?(p&A8):(p&I8);return SourceWorkCost{unsigned(3+(byte?0:1)+(d&255?1:0)),2,unsigned(byte?1:2),0};},
        [this,at,reg]{put_local(at,reg=='a'?a:reg=='x'?x:y,reg=='a'?(p&A8):(p&I8));});
}
void SourceMeterTiles::Execution::zero_dp(unsigned at) {dynamic([this]{return SourceWorkCost{unsigned(3+(p&A8?0:1)+(d&255?1:0)),2,unsigned(p&A8?1:2),0};},[this,at]{put_local(at,0,p&A8);});}
void SourceMeterTiles::Execution::alu_dp(unsigned at,char op) {
    dynamic([this]{return SourceWorkCost{unsigned(3+(p&A8?0:1)+(d&255?1:0)),2,unsigned(p&A8?1:2),0};},[this,at,op]{const auto v=local(at);if(op=='c')cmp(a,v,p&A8);else if(op=='e')load(std::uint16_t(a^v));else adc(v,op=='s');});
}
void SourceMeterTiles::Execution::rmw_dp(unsigned at,char op) {
    dynamic([this]{return SourceWorkCost{unsigned(5+(p&A8?0:2)+(d&255?1:0)),2,unsigned(p&A8?2:4),0};},[this,at,op]{const auto old=local(at);std::uint16_t v{};
        if(op=='i')v=std::uint16_t(old+1);else{v=std::uint16_t((old<<1)|(p&C?1:0));p=std::uint8_t((p&~C)|(old&0x8000?C:0));}put_local(at,v);nz(v);});
}
void SourceMeterTiles::Execution::load_abs(std::uint16_t base,char reg,char index) {
    dynamic([this,base,reg,index]{const bool byte=reg=='a'?(p&A8):(p&I8);const unsigned at=index=='x'?x:index=='y'?y:0;
        const unsigned indexed=index?((p&I8)?(((base&255)+at>255)?1:0):1):0;
        return SourceWorkCost{unsigned(4+(byte?0:1)+indexed),3,unsigned(byte?1:2),0};},
        [this,base,reg,index]{const auto address=std::uint16_t(base+(index=='x'?x:index=='y'?y:0));const bool byte=reg=='a'?(p&A8):(p&I8);
            const auto v=byte?read_byte(address):read_word(address);if(reg=='a')load(v);else{auto &dest=reg=='x'?x:y;dest=byte?std::uint8_t(v):v;nz(dest,byte);}});
}
void SourceMeterTiles::Execution::store_abs(std::uint16_t base,char reg,char index) {
    dynamic([this,reg,index]{const bool byte=reg=='a'||reg=='0'?(p&A8):(p&I8);return SourceWorkCost{unsigned(4+(byte?0:1)+(index?1:0)),3,unsigned(byte?1:2),0};},
        [this,base,reg,index]{store_word(std::uint16_t(base+(index=='x'?x:index=='y'?y:0)),reg=='0'?0:reg=='a'?a:reg=='x'?x:y,reg=='a'||reg=='0'?(p&A8):(p&I8));});
}
void SourceMeterTiles::Execution::alu_abs(std::uint16_t address,char op) {dynamic([this]{return SourceWorkCost{unsigned(p&A8?4:5),3,unsigned(p&A8?1:2),0};},[this,address,op]{const auto v=read_word(address);if(op=='c')cmp(a,v,p&A8);else adc(v,op=='s');});}
void SourceMeterTiles::Execution::rmw_abs(std::uint16_t address,char op) {
    add({8,3,4,0},[this,address,op]{const auto old=read_word(address);std::uint16_t v{};
        if(op=='i')v=std::uint16_t(old+1);else{v=std::uint16_t((old<<1)|(p&C?1:0));p=std::uint8_t((p&~C)|(old&0x8000?C:0));}store_word(address,v);nz(v);});
}
void SourceMeterTiles::Execution::load_indirect(unsigned offset) {
    dynamic([this]{return SourceWorkCost{unsigned(5+(p&A8?0:1)+(d&255?1:0)+((p&I8)?0:1)),2,unsigned(p&A8?3:4),0};},
        [this,offset]{const auto address=std::uint16_t(local(offset)+y);load(p&A8?read_byte(address):read_word(address));});
}
void SourceMeterTiles::Execution::long_equal(const std::string &target,const std::string &skip) {branch([this]{return !(p&Z);},skip);jump(target);label(skip);}
void SourceMeterTiles::Execution::optimized_mult(unsigned at,unsigned factor) {
    if(factor==32){for(unsigned i=0;i<5;++i)shift_reg(false);return;}
    if(factor==7){store_dp(at);shift_reg(false);alu_dp(at,'a');shift_reg(false);alu_dp(at,'a');return;}
    if(factor==12||factor==24){store_dp(at);shift_reg(false);alu_dp(at,'a');shift_reg(false);shift_reg(false);if(factor==24)shift_reg(false);return;}
    throw std::logic_error("Unsupported literal optimized multiplier");
}
void SourceMeterTiles::Execution::move_pair(unsigned from,unsigned to){load_dp(from);store_dp(to);load_dp(from+2);store_dp(to+2);}
void SourceMeterTiles::Execution::constant_pair(unsigned to,std::uint32_t value){immediate(std::uint16_t(value));store_dp(to);immediate(std::uint16_t(value>>16));store_dp(to+2);}
void SourceMeterTiles::Execution::step(){require(phase<atoms.size(),"Meter artwork left its literal continuation");const auto &atom=atoms[phase];next=phase+1;work.retire_source_work(atom.cost(),atom.effect);++retired;phase=next;}
}
