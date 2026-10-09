#include "eb/native/story/source_random.hpp"
#include "eb/native/story/work_clock.hpp"
#include "eb/native/battle/frame_display.hpp"
#include "eb/native/world_runtime.hpp"
#include <stdexcept>
#include <vector>

namespace eb::native::story {
namespace {
void require(bool value,const char *message) {if(!value)throw std::logic_error(message);}
constexpr std::uint8_t Carry=1,Zero=2,Decimal=8,Index8=0x10,Accum8=0x20,Overflow=0x40,Negative=0x80;
}
void SourceRandom::validate_context(SourceRandomContext context) {
    require(context.native_mode&&context.low_wram_stack&&context.decimal_clear&&
        context.program_bank==0xc0&&context.caller_bank==0xc1&&context.data_bank==0x7e&&
        context.stack_pointer==0x1ffc&&(context.direct_page==0x1e00||context.direct_page==0x1d12)&&
        !(context.caller_status&(Carry|Decimal|Index8|Accum8)),
        "Source RAND requires its declared native binary C1-to-C0/7E/M16/X16/carry-clear low-WRAM entry");
}
void SourceRandom::validate_owner(SourceWorkClock &work,TickState &ticks,
    const battle::FrameDisplay &frames,const Scene &scene) {
    work.require_healthy();
    require(!work.in_atom_&&!work.in_interrupt_,"Source RAND cannot claim a recursive foreground or interrupt atom");
    require(&work.frames_==&frames&&work.uses_clock(work.physical_,ticks)&&&work.runtime_.scene()==&scene,
        "Source RAND requires its actual physical/audio/tick/runtime/display owners");
    auto *peripherals=frames.peripherals();
    require(peripherals&&peripherals->uses(work.physical_)&&work.physical_.uses_peripherals(*peripherals),
        "Source RAND requires both actual peripheral/physical bindings");
    require(!(ticks.effective_interrupt_mask()&0x30)&&
        (!(ticks.effective_interrupt_mask()&0x80)||work.has_interrupt_work()),
        "Source RAND has unrepresented IRQ or absent NMI work");
    require(work.runtime_.uses_default_interrupt_callback(),
        "Source RAND has an unrepresented callback/RNG/math producer");
    const auto &video=frames.video_transport();
    require(!video.failed()&&!video.pending_bytes()&&video.pending().empty()&&frames.pending_display_id()<=2,
        "Source RAND has unowned display/queued-DMA state");
}
void SourceRandom::validate_operation_owner(SourceWorkClock &work,TickState &ticks,
    const battle::FrameDisplay &frames,const Scene::Operation &operation) {
    work.require_healthy();
    const auto &scene=work.runtime_.scene();
    require(operation.uses(scene),"Source RAND requires this work clock's actual Scene parent");
    validate_owner(work,ticks,frames,scene);
}
struct SourceRandom::Admission {
    RandomState &random;
    PeripheralState &peripherals;
    std::weak_ptr<const void> random_lifetime,peripheral_lifetime;
    Admission(RandomState &rng,PeripheralState &hardware)
        :random(rng),peripherals(hardware),random_lifetime(rng.source_lifetime()),
         peripheral_lifetime(hardware.source_lifetime()) {}
    void validate(const void *lease) const {
        require(!random_lifetime.expired()&&!peripheral_lifetime.expired(),
            "Source RAND lost its actual RNG or peripheral instance");
        require(random.source_lease_==lease,"Source RAND lost its exact shared-word lease");
        if(!lease)require(!peripherals.source_math_state().remaining_cpu_cycles,
            "Source RAND entry has unowned pending multiply/divide work");
    }
};
std::unique_ptr<Scene::Operation> Scene::begin_source_random_window_tick(
    SourceWorkClock &work,SourceRandomContext context) {
    SourceRandom::validate_context(context);
    return begin_source_random_window_tick_impl(work,[&work,this](TickState &ticks,
        const battle::FrameDisplay &frames,RandomState &random) {
        SourceRandom::validate_owner(work,ticks,frames,*this);
        require(uses(random)&&!random.source_active()&&!frames.peripherals()->source_math_state().remaining_cpu_cycles,
            "Source RAND entry requires its idle actual shared words and completed math");
    });
}
std::unique_ptr<SourceRandom> Scene::Operation::begin_source_random(
    SourceWorkClock &work,SourceRandomContext context) {
    SourceRandom::validate_context(context);
    auto admission=std::make_shared<std::shared_ptr<SourceRandom::Admission>>();
    auto receipt=pin_source_random(work,[&work,this,admission](TickState &ticks,
        const battle::FrameDisplay &frames,RandomState &random,const void *lease) {
        // The lower parent/bound-work/weak-RNG checks precede borrowed reads.
        SourceRandom::validate_operation_owner(work,ticks,frames,*this);
        if(!*admission)*admission=std::make_shared<SourceRandom::Admission>(random,*frames.peripherals());
        require(&(*admission)->random==&random&&&(*admission)->peripherals==frames.peripherals(),
            "Source RAND lost its exact shared RNG/peripheral instances");
        (*admission)->validate(lease);
    });
    try {return std::unique_ptr<SourceRandom>(new SourceRandom(work,receipt,context));}
    catch(...) {receipt->poison();throw;}
}
struct SourceRandom::Execution {
    struct Atom {SourceWorkCost cost;std::function<void()> effect;};
    SourceWorkClock &work;
    SourceRandomReceipt &receipt;
    RandomState &random;
    PeripheralState &peripherals;
    std::vector<Atom> atoms;
    std::uint16_t a{},saved_product{};
    std::uint8_t p{},saved_p{};
    unsigned phase{},next_phase{};
    std::uint64_t retired{};
    Execution(SourceWorkClock &clock,SourceRandomReceipt &lease,SourceRandomContext context)
        :work(clock),receipt(lease),random(*lease.random),peripherals(*clock.frames_.peripherals()),
         a(context.accumulator),p(context.caller_status) {
        const auto add=[&](SourceWorkCost cost,std::function<void()> effect={}) {atoms.push_back({cost,std::move(effect)});};
        add({3,1,1,0},[this]{saved_p=p;}); // PHP
        add({3,2,0,0},[this]{p&=std::uint8_t(~Accum8);});
        add({5,3,2,0},[this]{a=random.primary_word;nz(false);});
        add({3,2,0,0},[this]{p|=Accum8;});
        add({3,1,0,0},[this]{a=std::uint16_t((a<<8)|(a>>8));nz(true);});
        add({4,3,1,0},[this]{a=std::uint16_t((a&0xff00)|std::uint8_t(random.secondary_word));nz(true);});
        add({3,2,0,0},[this]{p&=std::uint8_t(~Accum8);});
        add({6,4,0,0},[this]{peripherals.begin_source_multiply(a);});
        add({2,1,0,0},[this]{p&=std::uint8_t(~Carry);});
        add({3,3,0,0},[this]{adc(0x6d);});
        add({5,3,2,0},[this]{random.secondary_word=a;});
        add({6,4,0,0},[this]{a=peripherals.product();nz(false);});
        add({2,1,0,0},[this]{ror();});add({2,1,0,0},[this]{ror();});
        add({4,1,2,0},[this]{saved_product=a;});
        add({3,3,0,0},[this]{a&=3;nz(false);});
        add({2,1,0,0},[this]{p&=std::uint8_t(~Carry);});
        add({5,3,2,0},[this]{adc(random.primary_word);});
        add({2,1,0,0},[this]{ror();});
        add({3,2,0,0},[this]{if(!(p&Carry))next_phase=21;}); // actual BCC
        add({3,3,0,0},[this]{a|=0x8000;nz(false);});
        add({5,3,2,0},[this]{random.primary_word=a;});
        add({5,1,2,0},[this]{a=saved_product;nz(false);});
        add({2,1,0,0},[this]{ror();});add({2,1,0,0},[this]{ror();});
        add({3,3,0,0},[this]{a&=0xff;nz(false);});
        add({4,1,1,0},[this]{p=saved_p;});
        add({6,1,3,0}); // final RTL, then the exact lower response
    }
    void nz(bool byte) {
        const auto value=byte?unsigned(std::uint8_t(a)):unsigned(a);
        p=std::uint8_t((p&~(Negative|Zero))|(!value?Zero:0)|
            (value&(byte?0x80:0x8000)?Negative:0));
    }
    void adc(std::uint16_t operand) {
        const auto before=a;const unsigned sum=unsigned(before)+operand+(p&Carry?1:0);
        a=std::uint16_t(sum);
        p=std::uint8_t((p&~(Carry|Overflow))|(sum>0xffff?Carry:0)|
            ((~(before^operand)&(before^a)&0x8000)?Overflow:0));nz(false);
    }
    void ror() {
        const auto before=a;a=std::uint16_t((before>>1)|(p&Carry?0x8000:0));
        p=std::uint8_t((p&~Carry)|(before&1));nz(false);
    }
    void step() {
        require(phase<atoms.size(),"Source RAND left its literal helper continuation");
        const auto &atom=atoms[phase];auto cost=atom.cost;
        if(phase==19&&(p&Carry))cost.cpu_cycles=2;
        next_phase=phase+1;work.retire_source_work(cost,atom.effect);
        ++retired;phase=next_phase;if(phase==atoms.size())receipt.completed=true;
    }
};
SourceRandom::SourceRandom(SourceWorkClock &work,std::shared_ptr<SourceRandomReceipt> receipt,
    SourceRandomContext context):receipt_(std::move(receipt)),execution_(std::make_unique<Execution>(work,*receipt_,context)) {
    auto *random=receipt_->random;const auto weak=random->source_lifetime();const auto identity=receipt_.get();
    work.enable_source_math(execution_->peripherals);
    receipt_->release=[random,weak,identity] {
        if(!weak.expired()&&random->source_lease_==identity)random->source_lease_=nullptr;
    };
    require(!random->source_lease_,"Source RAND shared words were already claimed");
    random->source_lease_=identity;
}
SourceRandom::~SourceRandom() {
    if(receipt_->release)receipt_->release();
    if(receipt_->live&&!receipt_->consumed)receipt_->poison();
}
bool SourceRandom::advance(unsigned budget) {
    require(receipt_->live&&!receipt_->consumed&&!receipt_->executing,"Source RAND lost its live single helper invocation");
    receipt_->executing=true;
    try {
        receipt_->validate();
        while(budget--&&!receipt_->completed){receipt_->validate();execution_->step();}
        receipt_->executing=false;return receipt_->completed;
    } catch(...) {receipt_->executing=false;receipt_->poison();throw;}
}
bool SourceRandom::complete() const noexcept {return receipt_->completed;}
std::uint64_t SourceRandom::retired_instructions() const noexcept {return execution_->retired;}
SourceRandomRegisters SourceRandom::registers() const noexcept {return {execution_->a,execution_->p};}
std::uint8_t SourceRandom::result_byte() const {
    require(receipt_->completed&&!receipt_->executing,"Source RAND has no completed literal return byte");
    return std::uint8_t(execution_->a);
}
}
namespace eb::native {
std::unique_ptr<WorldRuntime::Operation> WorldRuntime::begin_source_random_window_tick(
    story::SourceWorkClock &work,story::SourceRandomContext context) {
    story::SourceRandom::validate_context(context);
    return begin_source_random_window_tick_impl(work,[&work,this](story::TickState &ticks,
        const battle::FrameDisplay &frames,story::RandomState &random) {
        story::SourceRandom::validate_owner(work,ticks,frames,scene());
        if(!scene().uses(random)||random.source_active()||frames.peripherals()->source_math_state().remaining_cpu_cycles)
            throw std::logic_error("Source RAND entry requires its idle actual shared words and completed math");
    });
}
std::unique_ptr<story::SourceRandom> WorldRuntime::Operation::begin_source_random(
    story::SourceWorkClock &work,story::SourceRandomContext context) {
    return source_foreground_owner().begin_source_random(work,context);
}
}
