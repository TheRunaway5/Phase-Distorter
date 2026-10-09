#include "execution.hpp"
#include <stdexcept>
namespace eb::native::story {
namespace {void require(bool v,const char *m){if(!v)throw std::logic_error(m);}}
SourceMeterStatus::Execution::Execution(SourceWorkClock &w,SourceMeterStatusReceipt &r,
    SourceMeterStatusContext c,SourceMeterStatusCall call)
    :work(w),receipt(r),entry(*call.entry),control(*call.control),counter(*call.counter),palette(*call.palette),
     party(*r.party),windows(*r.windows),ticks(w.ticks_),resources(windows.source_palette_resources()),
     a(c.accumulator),x(c.x_index),y(c.y_index),d(c.direct_page),s(c.stack_pointer),p(c.caller_status),jp(party.version()==GameVersion::JP) {
    build_status();build_palette();phase=unsigned(atoms.size());build_suffix();
}
void SourceMeterStatus::Execution::nz(std::uint16_t value,bool byte) {
    if(byte)value&=255;
    p=std::uint8_t((p&~(N|Z))|(!value?Z:0)|(value&(byte?0x80:0x8000)?N:0));
}
void SourceMeterStatus::Execution::load(std::uint16_t value) {
    a=p&A8?std::uint16_t((a&0xff00)|(value&255)):value;nz(a,p&A8);
}
void SourceMeterStatus::Execution::adc(std::uint16_t value) {
    const auto old=a;const unsigned mask=p&A8?255:65535,sign=p&A8?128:32768;
    const unsigned operand=value&mask,result=(old&mask)+operand+(p&C?1:0),low=result&mask;
    a=std::uint16_t((old&~mask)|low);p=std::uint8_t((p&~(C|V))|(result>mask?C:0)|
        ((~(old^operand)&(old^low)&sign)?V:0));nz(a,p&A8);
}
void SourceMeterStatus::Execution::cmp(std::uint16_t value,std::uint16_t operand,bool byte) {
    if(byte){value&=255;operand&=255;}p=std::uint8_t((p&~C)|(value>=operand?C:0));nz(std::uint16_t(value-operand),byte);
}
std::uint16_t SourceMeterStatus::Execution::local(unsigned offset) const {
    const unsigned address=unsigned(d)+offset;require(address>=0x1d00&&address+1<0x1e00,"Status palette left its actual C-stack page");
    const auto at=address-0x1d00;return std::uint16_t(entry.page_[at]|(unsigned(entry.page_[at+1])<<8));
}
void SourceMeterStatus::Execution::put_local(unsigned offset,std::uint16_t value) {
    const unsigned address=unsigned(d)+offset;require(address>=0x1d00&&address+1<0x1e00,"Status palette left its actual C-stack page");
    const auto at=address-0x1d00;entry.page_[at]=std::uint8_t(value);entry.page_[at+1]=std::uint8_t(value>>8);
}
std::uint8_t SourceMeterStatus::Execution::read_byte(std::uint16_t address) const {
    if(address==count_base())return party.controlled_count;
    if(address==std::uint16_t(count_base()+1))return std::uint8_t(control.automatic_mode);
    if(address>=controlled_base()&&unsigned(address-controlled_base())<6)return party.controlled_order[address-controlled_base()];
    if(address>=pointer_base()&&unsigned(address-pointer_base())<12) {
        const unsigned offset=address-pointer_base();
        // C43317's established six canonical row pointers, not a mutable mirror.
        const auto pointer=std::uint16_t(party_base()+(offset/2)*stride());return std::uint8_t(pointer>>((offset&1)*8));
    }
    if(address==disabled_base()||address==std::uint16_t(disabled_base()+1))return std::uint8_t(ticks.disabled_transitions>>((address-disabled_base())*8));
    if(address==cache_base()||address==std::uint16_t(cache_base()+1))return std::uint8_t(ticks.last_controlled_status>>((address-cache_base())*8));
    const auto flavor=std::uint16_t(party_base()-1);
    if(address==flavor)return ticks.flavor;
    if(address==std::uint16_t(flavor+1))return party.name_field(1)[0];
    if(address>=party_base()&&unsigned(address-party_base())<6*stride()) {
        const auto relative=unsigned(address-party_base()),row=relative/stride(),offset=relative%stride();
        const unsigned first=jp?0x0d:0x0e;
        if(offset>=first&&offset<first+2)return party.character(row+1).afflictions[offset-first];
    }
    if(address==0xa5||address==0xa6)return std::uint8_t(counter.memcpy_words_left>>((address-0xa5)*8));
    throw std::logic_error("Status palette read an unowned source byte");
}
std::uint16_t SourceMeterStatus::Execution::read_word(std::uint16_t address) const {
    return std::uint16_t(read_byte(address)|(unsigned(read_byte(std::uint16_t(address+1)))<<8));
}
void SourceMeterStatus::Execution::store_word(std::uint16_t address,std::uint16_t value,bool byte) {
    if(address==cache_base()&&!byte){ticks.last_controlled_status=value;return;}
    if(address==0xa5&&!byte){counter.memcpy_words_left=value;return;}
    if(address>=0x200&&address<0x240&&!byte&&!(address&1)) {
        windows.store_source_palette_word((address-0x200)/2,value,palette,&receipt);return;
    }
    if(address==0x30&&byte){palette.upload_mode=std::uint8_t(value);receipt.palette_requested=true;return;}
    throw std::logic_error("Status palette store left its actual cache/counter/palette owners");
}
void SourceMeterStatus::Execution::add(SourceWorkCost cost,std::function<void()> effect){atoms.push_back({[cost]{return cost;},std::move(effect)});}
void SourceMeterStatus::Execution::dynamic(std::function<SourceWorkCost()> cost,std::function<void()> effect){atoms.push_back({std::move(cost),std::move(effect)});}
void SourceMeterStatus::Execution::label(const std::string &name){require(!labels.contains(name),"Duplicate status palette continuation");labels[name]=unsigned(atoms.size());}
void SourceMeterStatus::Execution::branch(std::function<bool()> condition,const std::string &target) {
    dynamic([condition]{return SourceWorkCost{condition()?3u:2u,2,0,0};},[this,condition,target]{if(condition())next=labels.at(target);});
}
void SourceMeterStatus::Execution::jump(const std::string &target){add({3,2,0,0},[this,target]{next=labels.at(target);});}
void SourceMeterStatus::Execution::call(const std::string &target,bool far){add(far?SourceWorkCost{8,4,3,0}:SourceWorkCost{6,3,2,0},[this,target,far]{returns.push_back(next);s=std::uint16_t(s-(far?3:2));next=labels.at(target);});}
void SourceMeterStatus::Execution::ret(bool far){add(far?SourceWorkCost{6,1,3,0}:SourceWorkCost{6,1,2,0},[this,far]{require(!returns.empty(),"Status palette lost an authored call");next=returns.back();returns.pop_back();s=std::uint16_t(s+(far?3:2));});}
void SourceMeterStatus::Execution::rep(std::uint8_t bits){add({3,2,0,0},[this,bits]{p&=std::uint8_t(~bits);});}
void SourceMeterStatus::Execution::sep(std::uint8_t bits){add({3,2,0,0},[this,bits]{p|=bits;if(bits&I8){x&=255;y&=255;}});}
void SourceMeterStatus::Execution::phd(){add({4,1,2,0},[this]{saved_d.push_back(d);s=std::uint16_t(s-2);});}
void SourceMeterStatus::Execution::pld(){add({5,1,2,0},[this]{require(!saved_d.empty(),"Status palette lost its PHD");d=saved_d.back();saved_d.pop_back();s=std::uint16_t(s+2);nz(d);});}
void SourceMeterStatus::Execution::transfer(char from,char to){add({2,1,0,0},[this,from,to]{const auto value=from=='d'?d:from=='x'?x:from=='y'?y:a;if(to=='a')load(value);else{auto &target=to=='d'?d:to=='x'?x:y;target=value;nz(target);}});}
void SourceMeterStatus::Execution::carry(bool set){add({2,1,0,0},[this,set]{if(set)p|=C;else p&=std::uint8_t(~C);});}
void SourceMeterStatus::Execution::immediate(std::uint16_t value,char reg){dynamic([this,reg]{const bool byte=reg=='a'?(p&A8):(p&I8);return SourceWorkCost{byte?2u:3u,byte?2u:3u,0,0};},[this,value,reg]{if(reg=='a')load(value);else{auto &target=reg=='x'?x:y;target=p&I8?std::uint8_t(value):value;nz(target,p&I8);}});}
void SourceMeterStatus::Execution::and_imm(std::uint16_t value){dynamic([this]{return SourceWorkCost{p&A8?2u:3u,p&A8?2u:3u,0,0};},[this,value]{load(std::uint16_t(a&value));});}
void SourceMeterStatus::Execution::adc_imm(std::uint16_t value){dynamic([this]{return SourceWorkCost{p&A8?2u:3u,p&A8?2u:3u,0,0};},[this,value]{adc(value);});}
void SourceMeterStatus::Execution::cmp_imm(std::uint16_t value,char reg){add({3,3,0,0},[this,value,reg]{cmp(reg=='x'?x:a,value);});}
void SourceMeterStatus::Execution::inc_reg(char reg,bool decrement){add({2,1,0,0},[this,reg,decrement]{auto &target=reg=='a'?a:reg=='x'?x:y;target=std::uint16_t(target+(decrement?-1:1));nz(target);});}
void SourceMeterStatus::Execution::shift(){add({2,1,0,0},[this]{const auto old=a;p=std::uint8_t((p&~C)|(old&0x8000?C:0));load(std::uint16_t(old<<1));});}
void SourceMeterStatus::Execution::load_dp(unsigned offset){dynamic([this]{return SourceWorkCost{unsigned(4+(d&255?1:0)),2,2,0};},[this,offset]{load(local(offset));});}
void SourceMeterStatus::Execution::store_dp(unsigned offset){dynamic([this]{return SourceWorkCost{unsigned(4+(d&255?1:0)),2,2,0};},[this,offset]{put_local(offset,a);});}
void SourceMeterStatus::Execution::adc_dp(unsigned offset){dynamic([this]{return SourceWorkCost{unsigned(4+(d&255?1:0)),2,2,0};},[this,offset]{adc(local(offset));});}
void SourceMeterStatus::Execution::load_abs(std::uint16_t base,char reg,char index) {
    dynamic([this,reg,index]{const bool byte=reg=='a'?(p&A8):(p&I8);return SourceWorkCost{unsigned(4+(byte?0:1)+(index?1:0)),3,unsigned(byte?1:2),0};},
        [this,base,reg,index]{const auto address=std::uint16_t(base+(index=='x'?x:index=='y'?y:0));const bool byte=reg=='a'?(p&A8):(p&I8);
            const auto value=byte?read_byte(address):read_word(address);if(reg=='a')load(value);else{auto &target=reg=='x'?x:y;target=value;nz(target,byte);}});
}
void SourceMeterStatus::Execution::store_abs(std::uint16_t address,char reg){dynamic([this,reg]{const bool byte=reg=='a'?(p&A8):(p&I8);return SourceWorkCost{byte?4u:5u,3,byte?1u:2u,0};},[this,address,reg]{store_word(address,reg=='x'?x:a,reg=='a'?(p&A8):(p&I8));});}
void SourceMeterStatus::Execution::cmp_abs(std::uint16_t address,char reg){add({5,3,2,0},[this,address,reg]{cmp(reg=='x'?x:a,read_word(address));});}
void SourceMeterStatus::Execution::counter_rmw(bool shift_right){add({8,3,4,0},[this,shift_right]{const auto old=counter.memcpy_words_left;if(shift_right){p=std::uint8_t((p&~C)|(old&1?C:0));counter.memcpy_words_left=old>>1;}else --counter.memcpy_words_left;nz(counter.memcpy_words_left);});}
void SourceMeterStatus::Execution::step(){require(phase<atoms.size(),"Status palette left its literal continuation");const auto &atom=atoms[phase];next=phase+1;work.retire_source_work(atom.cost(),atom.effect);++retired;phase=next;if(phase==finished)receipt.completed=true;}
}
