#include "eb/native/story/source_meter_roller.hpp"
#include "eb/native/story/work_clock.hpp"
#include "eb/native/battle/frame_display.hpp"
#include "eb/native/entities/graphics/object_display.hpp"
#include "eb/native/world_runtime.hpp"
#include <map>
#include <stdexcept>
#include <vector>

namespace eb::native::story {
namespace {
void require(bool value,const char *message) {if(!value)throw std::logic_error(message);}
constexpr std::uint8_t Carry=1,Zero=2,Decimal=8,Index8=0x10,Accum8=0x20,Overflow=0x40,Negative=0x80;
}
void SourceMeterRollerEntry::set_page(std::span<const std::uint8_t,256> value) {
    require(!source_lease_,"Source meter roller entry page is claimed");
    std::copy(value.begin(),value.end(),page_.begin());
}
void SourceMeterRoller::validate_context(SourceMeterRollerContext c) {
    require(c.native_mode&&c.low_wram_stack&&c.decimal_clear&&c.program_bank==0xc2&&
        c.caller_bank==0xc1&&c.data_bank==0x7e&&c.direct_page==0x1e00&&c.stack_pointer==0x1ffc&&
        !(c.caller_status&(Decimal|Index8)),
        "Source meter roller requires its declared binary native C1-to-C2/7E/X16 D1E00/S1FFC entry");
}
void SourceMeterRoller::validate_owner(SourceWorkClock &work,TickState &ticks,
    const battle::FrameDisplay &frames,party::State &party,dialogue::WindowHost &windows,const Scene &scene) {
    work.require_healthy();
    require(!work.in_atom_&&!work.in_interrupt_,"Source meter roller cannot claim a recursive atom");
    require(&work.frames_==&frames&&work.uses_clock(work.physical_,ticks)&&&work.runtime_.scene()==&scene,
        "Source meter roller requires its actual work/physical/audio/tick/runtime/display owners");
    auto *p=frames.peripherals();
    require(p&&p->uses(work.physical_)&&work.physical_.uses_peripherals(*p),
        "Source meter roller requires both actual peripheral/physical bindings");
    require(!(ticks.effective_interrupt_mask()&0x30)&&
        (!(ticks.effective_interrupt_mask()&0x80)||work.has_interrupt_work())&&work.runtime_.uses_default_interrupt_callback(),
        "Source meter roller requires represented NMI and the default callback");
    const auto &video=frames.video_transport();
    require(!video.failed()&&!video.pending_bytes()&&video.pending().empty()&&frames.pending_display_id()<=2,
        "Source meter roller has unowned queued-DMA or display state");
    require(party.version()==windows.version(),"Source meter roller requires one regional party/window owner");
    // Every potential selected slot is an actual six-row party byte owner. Guest
    // and empty branches remain literal exits; no selected member is frozen here.
    for(unsigned i=0;i<4;++i) if(party.party_order[i]>=1&&party.party_order[i]<=4)
        (void)party.character(party.party_order[i]);
}
void SourceMeterRoller::validate_operation_owner(SourceWorkClock &work,TickState &ticks,
    const battle::FrameDisplay &frames,party::State &party,dialogue::WindowHost &windows,const Scene::Operation &op) {
    work.require_healthy();const auto &scene=work.runtime_.scene();
    require(op.uses(scene),"Source meter roller requires this actual Scene parent");
    validate_owner(work,ticks,frames,party,windows,scene);
}
struct SourceMeterRoller::Admission {
    party::State &party;dialogue::WindowHost &windows;PeripheralState &hardware;
    SourceMeterRollerEntry &entry;
    std::weak_ptr<const void> party_life,window_life,hardware_life,entry_life;
    Admission(party::State &p,dialogue::WindowHost &w,PeripheralState &h,SourceMeterRollerCall call)
        :party(p),windows(w),hardware(h),entry(*call.entry),party_life(p.source_lifetime()),
         window_life(w.source_lifetime()),hardware_life(h.source_lifetime()),entry_life(call.lifetime) {}
    void validate(const void *lease) const {
        require(!party_life.expired()&&!window_life.expired()&&!hardware_life.expired()&&!entry_life.expired(),
            "Source meter roller lost an actual party/window/peripheral/page instance");
        require(party.source_meter_lease_==lease&&entry.source_lease_==lease,
            "Source meter roller lost its exact party/page lease");
        if(!lease)require(!hardware.source_math_state().remaining_cpu_cycles,
            "Source meter roller entry has unowned pending math");
    }
};
std::unique_ptr<Scene::Operation> Scene::begin_source_meter_window_tick(SourceWorkClock &work,SourceMeterRollerContext c) {
    SourceMeterRoller::validate_context(c);
    return begin_source_meter_window_tick_impl(work,[&work,this](TickState &ticks,const battle::FrameDisplay &frames,
        party::State &party,dialogue::WindowHost &windows) {
        SourceMeterRoller::validate_owner(work,ticks,frames,party,windows,*this);
        require(!party.source_meter_active()&&!frames.peripherals()->source_math_state().remaining_cpu_cycles,
            "Source meter roller requires idle actual party and completed math");
    });
}
std::unique_ptr<SourceMeterRoller> Scene::Operation::begin_source_meter_roller(SourceWorkClock &work,
    SourceMeterRollerContext c,SourceMeterRollerCall call) {
    SourceMeterRoller::validate_context(c);
    require(call.entry&&!call.lifetime.expired(),"Source meter roller entry page expired");
    auto admission=std::make_shared<std::shared_ptr<SourceMeterRoller::Admission>>();
    auto receipt=pin_source_meter_roller(work,[&work,this,call,admission](TickState &ticks,const battle::FrameDisplay &frames,
        party::State &party,dialogue::WindowHost &windows,const void *lease) {
        SourceMeterRoller::validate_operation_owner(work,ticks,frames,party,windows,*this);
        require(!call.lifetime.expired(),"Source meter roller entry page expired");
        if(!*admission)*admission=std::make_shared<SourceMeterRoller::Admission>(party,windows,*frames.peripherals(),call);
        require(&(*admission)->party==&party&&&(*admission)->windows==&windows&&
            &(*admission)->hardware==frames.peripherals(),"Source meter roller owner identity changed");
        (*admission)->validate(lease);
    });
    try{return std::unique_ptr<SourceMeterRoller>(new SourceMeterRoller(work,receipt,c,call));}
    catch(...){receipt->poison();throw;}
}
struct SourceMeterRoller::Execution {
    struct Atom {SourceWorkCost cost;std::function<void()> effect;std::function<bool()> taken;};
    SourceWorkClock &work;SourceMeterRollerReceipt &receipt;SourceMeterRollerEntry &entry;
    party::State &party;dialogue::WindowHost &windows;PeripheralState &hardware;
    std::vector<Atom> atoms;std::map<std::string,unsigned> labels;
    std::vector<unsigned> returns;std::vector<std::uint16_t> saved_d,saved_a;
    std::uint16_t a{},x{},y{},d{},s{};std::uint8_t p{};
    unsigned phase{},next{};std::uint64_t retired{};bool jp{};
    static constexpr SourceWorkCost control{2,1,0,0},immediate{3,3,0,0},absolute{5,3,2,0},indexed{6,3,2,0},dp{5,2,2,0};
    Execution(SourceWorkClock &w,SourceMeterRollerReceipt &r,SourceMeterRollerContext c,SourceMeterRollerCall call)
        :work(w),receipt(r),entry(*call.entry),party(*r.party),windows(*r.windows),hardware(*w.frames_.peripherals()),
         a(c.accumulator),x(c.x_index),y(c.y_index),d(c.direct_page),s(c.stack_pointer),p(c.caller_status),
         jp(party.version()==GameVersion::JP) {build();}
    void nz(std::uint16_t value,bool byte=false) {
        if(byte)value&=0xff;
        p=std::uint8_t((p&~(Negative|Zero))|(!value?Zero:0)|(value&(byte?0x80:0x8000)?Negative:0));
    }
    void load(std::uint16_t value) {if(p&Accum8)a=std::uint16_t((a&0xff00)|(value&0xff));else a=value;nz(a,p&Accum8);}
    void adc(std::uint16_t value,bool subtract=false) {
        const auto old=a;const auto operand=subtract?std::uint16_t(~value):value;
        const unsigned result=unsigned(old)+operand+(p&Carry?1:0);a=std::uint16_t(result);
        p=std::uint8_t((p&~(Carry|Overflow))|(result>0xffff?Carry:0)|
            ((~(old^operand)&(old^a)&0x8000)?Overflow:0));nz(a);
    }
    void cmp(std::uint16_t value,std::uint16_t operand) {
        const auto result=std::uint16_t(value-operand);
        p=std::uint8_t((p&~Carry)|(value>=operand?Carry:0));nz(result);
    }
    std::uint16_t local(unsigned offset) const {
        const auto address=unsigned(d)+offset;
        require(address>=0x1d00&&address+1<0x1e00,"Source meter roller left its shared C-stack page");
        const auto at=address-0x1d00;return std::uint16_t(entry.page_[at]|(unsigned(entry.page_[at+1])<<8));
    }
    void put_local(unsigned offset,std::uint16_t value) {
        const auto address=unsigned(d)+offset;
        require(address>=0x1d00&&address+1<0x1e00,"Source meter roller left its shared C-stack page");
        const auto at=address-0x1d00;entry.page_[at]=std::uint8_t(value);entry.page_[at+1]=std::uint8_t(value>>8);
    }
    std::uint16_t party_base() const {return jp?0x9c7f:0x99ce;}
    unsigned stride() const {return jp?94:95;}
    unsigned hp_fraction() const {return jp?0x42:0x43;}
    // Only the six reached word fields of a chosen character are addressable.
    // This is an alias resolver onto State, never another raw character owner.
    std::uint16_t &meter(std::uint16_t address) {
        require(address>=party_base(),"Source meter roller has an unowned character address");
        const auto relative=unsigned(address-party_base()),id=relative/stride(),offset=relative%stride();
        require(id<4,"Source meter roller left the four chosen character rows");
        auto &c=party.character(id+1);const auto base=hp_fraction();
        if(offset==base)return c.hp_fraction;
        if(offset==base+2)return c.current_hp;
        if(offset==base+4)return c.target_hp;
        if(offset==base+6)return c.pp_fraction;
        if(offset==base+8)return c.current_pp;
        if(offset==base+10)return c.target_pp;
        throw std::logic_error("Source meter roller reached an unowned character field");
    }
    std::uint16_t order() const {
        const unsigned i=jp?unsigned(std::uint16_t(x-0x9aa9)):unsigned(x);
        require(i<4,"Source meter roller left its actual party-order aliases");
        return std::uint16_t(party.party_order[i]|(unsigned(party.party_order[i+1])<<8));
    }
    void add(SourceWorkCost cost,std::function<void()> effect={}) {atoms.push_back({cost,std::move(effect),{}});}
    void label(const std::string &name) {require(!labels.contains(name),"Duplicate literal meter continuation");labels[name]=unsigned(atoms.size());}
    void branch(std::function<bool()> condition,const std::string &target) {
        auto test=condition;atoms.push_back({{2,2,0,0},[this,condition,target]{if(condition())next=labels.at(target);},std::move(test)});
    }
    void jump(const std::string &target,bool relative=false) {add(relative?SourceWorkCost{3,2,0,0}:SourceWorkCost{3,3,0,0},[this,target]{next=labels.at(target);});}
    void call(const std::string &target,bool far) {
        add(far?SourceWorkCost{8,4,3,0}:SourceWorkCost{6,3,2,0},[this,target,far]{returns.push_back(next);s=std::uint16_t(s-(far?3:2));next=labels.at(target);});
    }
    void ret(bool far) {add(far?SourceWorkCost{6,1,3,0}:SourceWorkCost{6,1,2,0},[this,far]{require(!returns.empty(),"Missing literal meter child return");s=std::uint16_t(s+(far?3:2));next=returns.back();returns.pop_back();});}
    void rep(std::uint8_t bits) {add({3,2,0,0},[this,bits]{p&=std::uint8_t(~bits);});}
    void sep(std::uint8_t bits) {add({3,2,0,0},[this,bits]{p|=bits;if(bits&Index8){x&=0xff;y&=0xff;}});}
    void phd() {add({4,1,2,0},[this]{saved_d.push_back(d);s=std::uint16_t(s-2);});}
    void pld() {add({5,1,2,0},[this]{require(!saved_d.empty(),"Missing literal meter direct-page save");d=saved_d.back();saved_d.pop_back();s=std::uint16_t(s+2);nz(d);});}
    void tdc() {add(control,[this]{a=d;nz(a);});}
    void tcd() {add(control,[this]{d=a;nz(d);});}
    void tax() {add(control,[this]{x=(p&Index8)?std::uint8_t(a):a;nz(x,p&Index8);});}
    void txy() {add(control,[this]{y=(p&Index8)?std::uint8_t(x):x;nz(y,p&Index8);});}
    void tya() {add(control,[this]{load(y);});}
    void carry(bool set) {add(control,[this,set]{if(set)p|=Carry;else p&=std::uint8_t(~Carry);});}
    void imm(std::uint16_t value) {add(immediate,[this,value]{load(value);});}
    void and_imm(std::uint16_t value) {add(immediate,[this,value]{a&=value;nz(a);});}
    void adc_imm(std::uint16_t value,bool subtract=false) {add(immediate,[this,value,subtract]{adc(value,subtract);});}
    void load_dp(unsigned at) {add(dp,[this,at]{load(local(at));});}
    void store_dp(unsigned at,char reg='a') {add(dp,[this,at,reg]{put_local(at,reg=='x'?x:reg=='y'?y:a);});}
    void load_x_dp(unsigned at) {add(dp,[this,at]{x=(p&Index8)?std::uint8_t(local(at)):local(at);nz(x,p&Index8);});}
    void load_y_dp(unsigned at) {add(dp,[this,at]{y=(p&Index8)?std::uint8_t(local(at)):local(at);nz(y,p&Index8);});}
    void cmp_dp(unsigned at) {add(dp,[this,at]{cmp(a,local(at));});}
    void cmp_imm(std::uint16_t value,char reg='a') {add(immediate,[this,value,reg]{cmp(reg=='y'?y:a,value);});}
    void load_meter(unsigned offset=0,char reg='a',bool use_y=false) {
        add(indexed,[this,offset,reg,use_y]{const auto value=meter(std::uint16_t((use_y?y:x)+offset));
            if(reg=='y'){y=(p&Index8)?std::uint8_t(value):value;nz(y,p&Index8);}else load(value);});
    }
    void store_meter(unsigned offset=0,bool use_y=false,bool zero=false) {
        add(indexed,[this,offset,use_y,zero]{meter(std::uint16_t((use_y?y:x)+offset))=zero?0:a;});
    }
    void load_flip() {add(absolute,[this]{load(work.ticks_.flipout);});}
    void move(unsigned from,unsigned to) {load_dp(from);store_dp(to);load_dp(from+2);store_dp(to+2);}
    void constant(std::uint32_t value) {imm(std::uint16_t(value));store_dp(6);imm(std::uint16_t(value>>16));store_dp(8);}
    void read_pair() {load_meter(0,'a',true);store_dp(6);load_meter(2,'a',true);store_dp(8);}
    void write_pair() {load_dp(6);store_meter(0,true);load_dp(8);store_meter(2,true);}
    void arithmetic_pair(bool subtract) {load_dp(6);add(dp,[this,subtract]{adc(local(10),subtract);});store_dp(6);
        load_dp(8);add(dp,[this,subtract]{adc(local(12),subtract);});store_dp(8);}
    void fraction_pointer(unsigned offset,bool retain) {load_dp(16);carry(false);adc_imm(std::uint16_t(offset));tax();txy();if(retain)store_dp(14,'y');}
    void long_equal(const std::string &target,const std::string &skip) {branch([this]{return !(p&Zero);},skip);jump(target);label(skip);}
    void long_below(const std::string &target,const std::string &skip) {branch([this]{return p&Carry;},skip);branch([this]{return p&Zero;},skip);jump(target);label(skip);}
    void build();
    void build_meter(bool hp);
    void build_speed();
    void step() {
        require(phase<atoms.size(),"Source meter roller left its literal continuation");const auto &atom=atoms[phase];
        auto cost=atom.cost;if(atom.taken&&atom.taken())++cost.cpu_cycles;
        next=phase+1;work.retire_source_work(cost,atom.effect);++retired;phase=next;
    }
};
void SourceMeterRoller::Execution::build_meter(bool hp) {
    const std::string prefix=hp?"hp":"pp";
    const std::string process=prefix+"process",down=prefix+"down",subtract=prefix+"subtract",arm=prefix+"arm",done=hp?"hp_done":"pp_done";
    const unsigned fraction=hp_fraction()+(hp?0:6),current=fraction+2,target=fraction+4;
    load_flip();branch([this]{return !(p&Zero);},process);
    load_dp(16);carry(false);adc_imm(std::uint16_t(fraction));tax();store_dp(14,'x');
    load_meter();and_imm(1);long_equal(arm,prefix+"armed_skip");
    label(process);load_dp(16);tax();load_meter(current,'y');tax();load_meter(target);store_dp(2);tya();cmp_dp(2);
    branch([this]{return p&Carry;},down);
    fraction_pointer(fraction,hp);
    if(hp) {
        add(absolute,[this]{load(std::uint16_t(work.ticks_.fastest_hp_increase|(unsigned(windows.prompt_state().rolling_disabled)<<8)));});
        and_imm(0xff);branch([this]{return !(p&Zero);},prefix+"up_fixed");
        load_flip();branch([this]{return p&Zero;},prefix+"up_speed");
        label(prefix+"up_fixed");constant(0x64000);jump(prefix+"up_pair",true);
        label(prefix+"up_speed");call("speed",false);
    } else {
        load_flip();branch([this]{return p&Zero;},prefix+"up_ordinary");constant(0x64000);jump(prefix+"up_pair",true);
        label(prefix+"up_ordinary");constant(0x19000);
    }
    label(prefix+"up_pair");move(6,10);if(hp)load_y_dp(14);read_pair();carry(false);arithmetic_pair(false);write_pair();
    load_dp(16);carry(false);adc_imm(std::uint16_t(current));tax();load_meter();cmp_dp(2);
    long_below(done,prefix+"up_clamp");load_dp(2);store_meter();load_dp(16);tax();imm(1);store_meter(fraction);jump(done);
    label(down);tya();cmp_dp(2);branch([this]{return !(p&Zero);},subtract);
    load_dp(16);carry(false);adc_imm(std::uint16_t(fraction));tax();load_meter();cmp_imm(1);
    branch([this]{return !(p&Zero);},subtract);imm(0);store_meter();jump(done);
    label(subtract);fraction_pointer(fraction,hp);load_flip();branch([this]{return p&Zero;},prefix+"down_ordinary");
    constant(0x64000);jump(prefix+"down_pair",true);label(prefix+"down_ordinary");
    if(hp)call("speed",false);else constant(0x19000);
    label(prefix+"down_pair");move(6,10);if(hp)load_y_dp(14);read_pair();carry(true);arithmetic_pair(true);write_pair();
    load_dp(16);tax();load_meter(current,'y');tya();cmp_dp(2);branch([this]{return !(p&Carry);},prefix+"down_clamp");
    cmp_imm(1000,'y');branch([this]{return !(p&Carry);},done);branch([this]{return p&Zero;},done);
    label(prefix+"down_clamp");load_dp(16);tax();load_dp(2);store_meter(current);load_dp(16);tax();imm(1);store_meter(fraction);jump(done,true);
    label(arm);load_dp(16);add({4,1,2,0},[this]{saved_a.push_back(a);s=std::uint16_t(s-2);});tax();load_meter(current);
    add({5,1,2,0},[this]{require(!saved_a.empty(),"Missing literal meter PHA");x=saved_a.back();saved_a.pop_back();s=std::uint16_t(s+2);nz(x);});
    add(indexed,[this,target]{cmp(a,meter(std::uint16_t(x+target)));});branch([this]{return p&Zero;},done);
    imm(1);load_x_dp(14);store_meter();label(done);
}
void SourceMeterRoller::Execution::build_speed() {
    label("speed");rep(0x31);phd();tdc();adc_imm(0xfff2);tcd();
    add(absolute,[this]{load(std::uint16_t(windows.prompt_state().half_meter_speed|(unsigned(work.ticks_.fastest_hp_increase)<<8)));});
    and_imm(0xff);branch([this]{return p&Zero;},"speed_normal");sep(Index8);
    add({2,2,0,0},[this]{y=1;nz(y,true);});
    add(absolute,[this]{load(std::uint16_t(work.ticks_.hp_speed));});store_dp(6);
    add(absolute,[this]{load(std::uint16_t(work.ticks_.hp_speed>>16));});store_dp(8);
    call("asr",true);move(6,20);jump("speed_done",true);
    label("speed_normal");add(absolute,[this]{load(std::uint16_t(work.ticks_.hp_speed));});store_dp(6);
    add(absolute,[this]{load(std::uint16_t(work.ticks_.hp_speed>>16));});store_dp(8);move(6,20);
    label("speed_done");rep(Index8);pld();ret(false);
    label("asr");load_dp(8);branch([this]{return !(p&Negative);},"asr_positive_count");branch([this]{return p&Negative;},"asr_negative_count");
    label("asr_positive_shift");add({8,2,4,0},[this]{const auto value=local(8);put_local(8,std::uint16_t(value>>1));p=std::uint8_t((p&~Carry)|(value&1));nz(local(8));});
    add({8,2,4,0},[this]{const auto value=local(6);const auto result=std::uint16_t((value>>1)|(p&Carry?0x8000:0));put_local(6,result);p=std::uint8_t((p&~Carry)|(value&1));nz(result);});
    label("asr_positive_count");add(control,[this]{y=std::uint8_t(y-1);nz(y,true);});branch([this]{return !(p&Negative);},"asr_positive_shift");ret(true);
    label("asr_negative_shift");carry(true);
    add({8,2,4,0},[this]{const auto value=local(8);const auto result=std::uint16_t((value>>1)|(p&Carry?0x8000:0));put_local(8,result);p=std::uint8_t((p&~Carry)|(value&1));nz(result);});
    add({8,2,4,0},[this]{const auto value=local(6);const auto result=std::uint16_t((value>>1)|(p&Carry?0x8000:0));put_local(6,result);p=std::uint8_t((p&~Carry)|(value&1));nz(result);});
    label("asr_negative_count");add(control,[this]{y=std::uint8_t(y-1);nz(y,true);});branch([this]{return !(p&Negative);},"asr_negative_shift");ret(true);
}
void SourceMeterRoller::Execution::build() {
    rep(0x31);phd();tdc();adc_imm(0xffec);tcd();
    add(absolute,[this]{load(std::uint16_t(windows.prompt_state().rolling_disabled|(unsigned(std::uint8_t(work.ticks_.flipout))<<8)));});
    and_imm(0xff);branch([this]{return p&Zero;},"enabled");jump("finish");label("enabled");
    add(absolute,[this]{load(std::uint16_t(work.ticks_.frame_counter|(unsigned(std::uint8_t(work.objects_.builder.address))<<8)));});
    and_imm(0xff);and_imm(3);if(jp){carry(false);adc_imm(0x9aa9);}tax();add(indexed,[this]{load(order());});
    and_imm(0xff);long_equal("finish","member_nonzero");and_imm(0xff);store_dp(18);carry(false);adc_imm(4,true);
    // Expanded JUMPGTS: both branch paths remain real source instructions.
    branch([this]{return p&Overflow;},"guest_overflow");branch([this]{return p&Negative;},"chosen");jump("finish");
    label("guest_overflow");branch([this]{return !(p&Negative);},"chosen");jump("finish");label("chosen");
    load_dp(18);add(control,[this]{a=std::uint16_t(a-1);nz(a);});add(immediate,[this]{y=std::uint16_t(stride());nz(y);});
    call("mult_low",true);carry(false);adc_imm(party_base());store_dp(16);
    build_meter(true);build_meter(false);
    load_flip();branch([this]{return p&Zero;},"finish");load_dp(16);tax();load_meter(hp_fraction()+2,'y');cmp_imm(999,'y');
    branch([this]{return !(p&Zero);},"flip_hp_low");tax();imm(1);store_meter(hp_fraction()+4);jump("flip_pp",true);
    label("flip_hp_low");cmp_imm(1,'y');branch([this]{return !(p&Zero);},"flip_pp");tax();imm(999);store_meter(hp_fraction()+4);
    label("flip_pp");load_dp(16);tax();load_meter(hp_fraction()+8,'y');cmp_imm(999,'y');
    branch([this]{return !(p&Zero);},"flip_pp_low");tax();store_meter(hp_fraction()+10,false,true);jump("finish",true);
    label("flip_pp_low");cmp_imm(0,'y');branch([this]{return !(p&Zero);},"finish");tax();imm(999);store_meter(hp_fraction()+10);
    label("finish");pld();add({6,1,3,0},[this]{require(returns.empty()&&saved_a.empty()&&saved_d.empty(),"Source meter roller has an unfinished nested frame");s=std::uint16_t(s+3);receipt.completed=true;});
    // The only reachable MULT168 entry has selected-minus-one <=3. Its genuine
    // low branch still retires XBA/BEQ and all real multiply latches/NOPs.
    label("mult_low");if(!jp)rep(Index8);add({3,1,0,0},[this]{a=std::uint16_t((a<<8)|(a>>8));nz(std::uint8_t(a),true);});
    // The sampled member filter proves this exact taken branch.
    branch([this]{return p&Zero;},"mult_product");
    label("mult_product");sep(Accum8);tya();rep(Accum8);
    add({6,4,0,0},[this]{hardware.begin_source_multiply(a);});add(control);add(control);
    add({6,4,0,0},[this]{load(hardware.product());});ret(true);
    build_speed();
}
SourceMeterRoller::SourceMeterRoller(SourceWorkClock &work,std::shared_ptr<SourceMeterRollerReceipt> receipt,
    SourceMeterRollerContext c,SourceMeterRollerCall call)
    :receipt_(std::move(receipt)),execution_(std::make_unique<Execution>(work,*receipt_,c,call)) {
    require(!call.lifetime.expired(),"Source meter roller lost its entry page");
    auto *party=receipt_->party;auto *entry=call.entry;
    const auto party_life=party->source_lifetime(),entry_life=call.lifetime;const auto identity=receipt_.get();
    work.enable_source_math(execution_->hardware);
    receipt_->release=[party,entry,party_life,entry_life,identity] {
        if(!party_life.expired()&&party->source_meter_lease_==identity)party->source_meter_lease_=nullptr;
        if(!entry_life.expired()&&entry->source_lease_==identity)entry->source_lease_=nullptr;
    };
    require(!party->source_meter_lease_&&!entry->source_lease_,"Source meter roller party/page was already claimed");
    party->source_meter_lease_=identity;entry->source_lease_=identity;
}
SourceMeterRoller::~SourceMeterRoller() {if(receipt_->release)receipt_->release();if(receipt_->live&&!receipt_->consumed)receipt_->poison();}
bool SourceMeterRoller::advance(unsigned budget) {
    require(receipt_->live&&!receipt_->consumed&&!receipt_->executing,"Source meter roller lost its live single invocation");
    receipt_->executing=true;
    try{receipt_->validate();while(budget--&&!receipt_->completed){receipt_->validate();execution_->step();}
        receipt_->executing=false;return receipt_->completed;}
    catch(...){receipt_->executing=false;receipt_->poison();throw;}
}
bool SourceMeterRoller::complete() const noexcept {return receipt_->completed;}
std::uint64_t SourceMeterRoller::retired_instructions() const noexcept {return execution_->retired;}
SourceMeterRollerRegisters SourceMeterRoller::registers() const noexcept {return {execution_->a,execution_->x,execution_->y,execution_->d,execution_->s,execution_->p};}
}
namespace eb::native {
std::unique_ptr<WorldRuntime::Operation> WorldRuntime::begin_source_meter_window_tick(story::SourceWorkClock &work,
    story::SourceMeterRollerContext c) {
    story::SourceMeterRoller::validate_context(c);
    return begin_source_meter_window_tick_impl(work,[&work,this](story::TickState &ticks,const battle::FrameDisplay &frames,
        party::State &party,dialogue::WindowHost &windows) {
        story::SourceMeterRoller::validate_owner(work,ticks,frames,party,windows,scene());
        if(party.source_meter_active()||frames.peripherals()->source_math_state().remaining_cpu_cycles)
            throw std::logic_error("Source meter roller requires idle actual party and completed math");
    });
}
std::unique_ptr<story::SourceMeterRoller> WorldRuntime::Operation::begin_source_meter_roller(story::SourceWorkClock &work,
    story::SourceMeterRollerContext c,story::SourceMeterRollerCall call) {return source_foreground_owner().begin_source_meter_roller(work,c,call);}
}
