// Original WAIT C08756/JP C0874C, READ_JOYPAD C0841B, recording C08456,
// and the C08496 processed-pad reducer. Effects retire at real instruction
// boundaries; this module does not execute opcodes or emulate CPU registers.
#include "eb/native/story/source_frame_input.hpp"
#include "eb/native/story/work_clock.hpp"
#include "eb/native/world_input_playback.hpp"
#include "eb/native/world_runtime.hpp"
#include <stdexcept>

namespace eb::native::story {
std::unique_ptr<SourceFrameInput> Scene::Operation::begin_source_frame(SourceWorkClock &work,
    AudioFrameClock &physical,PeripheralState &peripherals,WorldInputPlayback &raw,SourceFrameInputContext context) {
    if(!context.native_mode || !context.upper_rom_caller || !context.low_wram_stack || !context.low_wram_data_bank)
        throw std::logic_error("Source WAIT requires its actual native upper-ROM/WRAM caller context");
    auto receipt=pin_source_frame(work,raw,[&work,&physical,&peripherals](TickState &ticks) {
        if(!work.uses_clock(physical,ticks) || !physical.uses_peripherals(peripherals) || !peripherals.uses(physical))
            throw std::logic_error("Source WAIT requires the identical actual audio/peripheral clock");
        if(ticks.effective_interrupt_mask()&0x30)
            throw std::logic_error("Source WAIT has an unowned H/V IRQ dependency");
        if((ticks.effective_interrupt_mask()&0x80) && !work.has_interrupt_work())
            throw std::logic_error("Source WAIT has no actual NMI work owner");
    });
    return std::unique_ptr<SourceFrameInput>(new SourceFrameInput(work,peripherals,*receipt->ticks,
        *receipt->input,raw,*receipt->debug,receipt));
}
struct SourceFrameInput::Execution {
    enum class Phase {
        Call, WaitByte, Mirror, Mask, SelectWait, Pending, TestPending, ClearPending, ToCommon,
        NotVblank, TestNotVblank, Vblank, TestVblank, ClearCommon, PushD, ZeroD, SetD,
        PushDb, ZeroDb, SetDbFirst, SetDbSecond, CallGet, GetByte, Ready, ShiftReady, TestReady,
        CallRead, ReadWide, ReadFlags, TestReadFlags, ReadPad2, StorePad2, ReadPad1, StorePad1,
        ReturnRead, CallRecord, RecordWide, RecordFlags, RecordMask, TestRecordFlags, ReturnRecord,
        GetWide, FirstPad, Raw, MaskRaw, StoreTemp, Previous, Invert, NewPress, StorePress,
        Current, Compare, StoreState, TestChanged, ChangedPress, StoreChangedHeld, ChangedTimer,
        StoreChangedTimer, ChangedEnd, RepeatTimer, TestTimer, DecrementTimer, ClearHeld, RepeatEnd,
        RepeatHeld, NewTimer, StoreNewTimer, NextPadFirst, NextPadSecond, TestPad,
        Debug, TestDebug, SecondState, MergeState, StoreMergedState, SecondHeld, MergeHeld,
        StoreMergedHeld, SecondPress, MergePress, StoreMergedPress, Press, TestPress, Activity,
        ReturnGet, RestoreDb, RestoreD, ReturnWide, ReturnWait, Complete
    };
    SourceWorkClock &work;
    PeripheralState &peripherals;
    TickState &ticks;
    InputState &input;
    WorldInputPlayback &raw;
    const std::uint16_t &debug;
    Receipt &receipt;
    Phase phase = Phase::Call;
    std::uint64_t retired{};
    std::uint16_t value{},temp{},x{},timer{};
    std::uint8_t byte{};
    bool zero{},carry{};
    Execution(SourceWorkClock &w,PeripheralState &p,TickState &t,InputState &i,
        WorldInputPlayback &r,const std::uint16_t &d,Receipt &lease)
        :work(w),peripherals(p),ticks(t),input(i),raw(r),debug(d),receipt(lease) {}
    unsigned pad() const noexcept {return x/2;}
    void retire(SourceWorkCost cost,Phase next,const std::function<void()> &effect={}) {
        work.retire_source_work(cost,effect);++retired;phase=next;
    }
    void branch(bool taken,Phase yes,Phase no) {
        retire({taken?3u:2u,2,0,0},taken?yes:no);
    }
    std::uint16_t hardware_word(unsigned address) {
        const auto low=peripherals.read(address,0);
        return std::uint16_t(low | (unsigned(peripherals.read(address+1,low))<<8));
    }
    void step() {
        using P=Phase;
        switch(phase) {
        case P::Call:retire({8,4,3,0},P::WaitByte);break;
        case P::WaitByte:retire({3,2,0,0},P::Mirror);break;
        case P::Mirror:retire({4,3,1,0},P::Mask,[&]{byte=ticks.interrupt_mask;});break;
        case P::Mask:retire({2,2,0,0},P::SelectWait,[&]{byte&=0xb0;zero=!byte;});break;
        case P::SelectWait:
            receipt.waited_vblank=zero;branch(zero,P::NotVblank,P::Pending);break;
        case P::Pending:retire({4,3,1,0},P::TestPending,[&]{byte=ticks.new_frame_started;zero=!byte;});break;
        case P::TestPending:branch(zero,P::Pending,P::ClearPending);break;
        case P::ClearPending:retire({4,3,1,0},P::ToCommon,[&]{ticks.new_frame_started=0;});break;
        case P::ToCommon:retire({3,2,0,0},P::ClearCommon);break;
        case P::NotVblank:retire({5,4,0,0},P::TestNotVblank,[&]{byte=peripherals.read(0x4212,0);});break;
        case P::TestNotVblank:branch(byte&0x80,P::NotVblank,P::Vblank);break;
        case P::Vblank:retire({5,4,0,0},P::TestVblank,[&]{byte=peripherals.read(0x4212,0);});break;
        case P::TestVblank:branch(!(byte&0x80),P::Vblank,P::ClearCommon);break;
        case P::ClearCommon:retire({4,3,1,0},P::PushD,[&]{ticks.new_frame_started=0;});break;
        case P::PushD:retire({4,1,2,0},P::ZeroD);break;
        case P::ZeroD:retire({5,3,2,0},P::SetD);break;
        case P::SetD:retire({5,1,2,0},P::PushDb);break;
        case P::PushDb:retire({3,1,1,0},P::ZeroDb);break;
        case P::ZeroDb:retire({5,3,2,0},P::SetDbFirst);break;
        case P::SetDbFirst:retire({4,1,1,0},P::SetDbSecond);break;
        case P::SetDbSecond:retire({4,1,1,0},P::CallGet);break;
        case P::CallGet:retire({6,3,2,0},P::GetByte);break;
        case P::GetByte:retire({3,2,0,0},P::Ready);break;
        case P::Ready:retire({4,3,0,0},P::ShiftReady,[&]{byte=peripherals.read(0x4212,0);});break;
        case P::ShiftReady:retire({2,1,0,0},P::TestReady,[&]{carry=byte&1;byte>>=1;});break;
        case P::TestReady:branch(carry,P::Ready,P::CallRead);break;
        case P::CallRead:retire({6,3,2,0},P::ReadWide);break;
        case P::ReadWide:retire({3,2,0,0},P::ReadFlags);break;
        case P::ReadFlags:retire({4,2,2,0},P::TestReadFlags,[&]{
            value=raw.state().flags;zero=!value;
            if(value)throw std::logic_error("Source READ_JOYPAD acquired active demo input");
        });break;
        case P::TestReadFlags:branch(zero,P::ReadPad2,P::ReadPad2);break;
        case P::ReadPad2:retire({5,3,0,0},P::StorePad2,[&]{value=hardware_word(0x421a);});break;
        case P::StorePad2:retire({4,2,2,0},P::ReadPad1,[&]{raw.store_source_raw_word(1,value);});break;
        case P::ReadPad1:retire({5,3,0,0},P::StorePad1,[&]{value=hardware_word(0x4218);});break;
        case P::StorePad1:retire({4,2,2,0},P::ReturnRead,[&]{raw.store_source_raw_word(0,value);});break;
        case P::ReturnRead:retire({6,1,2,0},P::CallRecord);break;
        case P::CallRecord:retire({6,3,2,0},P::RecordWide);break;
        case P::RecordWide:retire({3,2,0,0},P::RecordFlags);break;
        case P::RecordFlags:retire({4,2,2,0},P::RecordMask,[&]{
            value=raw.state().flags;
            if(value)throw std::logic_error("Source recording acquired active demo input");
        });break;
        case P::RecordMask:retire({3,3,0,0},P::TestRecordFlags,[&]{value&=0x8000;zero=!value;});break;
        case P::TestRecordFlags:branch(zero,P::ReturnRecord,P::ReturnRecord);break;
        case P::ReturnRecord:retire({6,1,2,0},P::GetWide);break;
        case P::GetWide:retire({3,2,0,0},P::FirstPad);break;
        case P::FirstPad:retire({3,3,0,0},P::Raw,[&]{x=2;});break;
        case P::Raw:retire({5,2,2,0},P::MaskRaw,[&]{value=raw.state().raw[pad()];});break;
        case P::MaskRaw:retire({3,3,0,0},P::StoreTemp,[&]{value&=0xfff0;});break;
        case P::StoreTemp:retire({4,2,2,0},P::Previous,[&]{temp=value;});break;
        case P::Previous:retire({5,2,2,0},P::Invert,[&]{value=input.state[pad()];});break;
        case P::Invert:retire({3,3,0,0},P::NewPress,[&]{value^=0xffff;});break;
        case P::NewPress:retire({4,2,2,0},P::StorePress,[&]{value&=temp;});break;
        case P::StorePress:retire({5,2,2,0},P::Current,[&]{input.pressed[pad()]=value;});break;
        case P::Current:retire({4,2,2,0},P::Compare,[&]{value=temp;});break;
        case P::Compare:retire({5,2,2,0},P::StoreState,[&]{zero=value==input.state[pad()];});break;
        case P::StoreState:retire({5,2,2,0},P::TestChanged,[&]{input.state[pad()]=value;});break;
        case P::TestChanged:branch(zero,P::RepeatTimer,P::ChangedPress);break;
        case P::ChangedPress:retire({5,2,2,0},P::StoreChangedHeld,[&]{value=input.pressed[pad()];});break;
        case P::StoreChangedHeld:retire({5,2,2,0},P::ChangedTimer,[&]{input.held[pad()]=value;});break;
        case P::ChangedTimer:retire({3,3,0,0},P::StoreChangedTimer,[&]{value=20;});break;
        case P::StoreChangedTimer:retire({5,2,2,0},P::ChangedEnd,[&]{input.repeat_timer[pad()]=value;});break;
        case P::ChangedEnd:retire({3,2,0,0},P::NextPadFirst);break;
        case P::RepeatTimer:retire({5,2,2,0},P::TestTimer,[&]{timer=input.repeat_timer[pad()];zero=!timer;});break;
        case P::TestTimer:branch(zero,P::RepeatHeld,P::DecrementTimer);break;
        case P::DecrementTimer:retire({8,2,4,0},P::ClearHeld,[&]{--input.repeat_timer[pad()];});break;
        case P::ClearHeld:retire({5,2,2,0},P::RepeatEnd,[&]{input.held[pad()]=0;});break;
        case P::RepeatEnd:retire({3,2,0,0},P::NextPadFirst);break;
        case P::RepeatHeld:retire({5,2,2,0},P::NewTimer,[&]{input.held[pad()]=value;});break;
        case P::NewTimer:retire({3,3,0,0},P::StoreNewTimer,[&]{value=3;});break;
        case P::StoreNewTimer:retire({5,2,2,0},P::NextPadFirst,[&]{input.repeat_timer[pad()]=value;});break;
        case P::NextPadFirst:retire({2,1,0,0},P::NextPadSecond,[&]{--x;});break;
        case P::NextPadSecond:retire({2,1,0,0},P::TestPad,[&]{--x;});break;
        case P::TestPad:branch(!(x&0x8000),P::Raw,P::Debug);break;
        case P::Debug:retire({6,4,2,0},P::TestDebug,[&]{value=debug;zero=!value;});break;
        case P::TestDebug:branch(!zero,P::Press,P::SecondState);break;
        case P::SecondState:retire({4,2,2,0},P::MergeState,[&]{value=input.state[1];});break;
        case P::MergeState:retire({4,2,2,0},P::StoreMergedState,[&]{value|=input.state[0];});break;
        case P::StoreMergedState:retire({4,2,2,0},P::SecondHeld,[&]{input.state[0]=value;});break;
        case P::SecondHeld:retire({4,2,2,0},P::MergeHeld,[&]{value=input.held[1];});break;
        case P::MergeHeld:retire({4,2,2,0},P::StoreMergedHeld,[&]{value|=input.held[0];});break;
        case P::StoreMergedHeld:retire({4,2,2,0},P::SecondPress,[&]{input.held[0]=value;});break;
        case P::SecondPress:retire({4,2,2,0},P::MergePress,[&]{value=input.pressed[1];});break;
        case P::MergePress:retire({4,2,2,0},P::StoreMergedPress,[&]{value|=input.pressed[0];});break;
        case P::StoreMergedPress:retire({4,2,2,0},P::Press,[&]{input.pressed[0]=value;});break;
        case P::Press:retire({4,2,2,0},P::TestPress,[&]{value=input.pressed[0];zero=!value;});break;
        case P::TestPress:branch(zero,P::ReturnGet,P::Activity);break;
        case P::Activity:retire({8,3,4,0},P::ReturnGet,[&]{++input.player_activity;});break;
        case P::ReturnGet:retire({6,1,2,0},P::RestoreDb);break;
        case P::RestoreDb:retire({4,1,1,0},P::RestoreD);break;
        case P::RestoreD:retire({5,1,2,0},P::ReturnWide);break;
        case P::ReturnWide:retire({3,2,0,0},P::ReturnWait);break;
        case P::ReturnWait:retire({6,1,3,0},P::Complete);receipt.completed=true;break;
        case P::Complete:break;
        }
    }
};
SourceFrameInput::SourceFrameInput(SourceWorkClock &work,PeripheralState &peripherals,TickState &ticks,
    InputState &input,WorldInputPlayback &raw,const std::uint16_t &debug,std::shared_ptr<Receipt> receipt)
    :receipt_(std::move(receipt)),execution_(std::make_unique<Execution>(work,peripherals,ticks,input,raw,debug,*receipt_)) {
    receipt_->publications_at_start=ticks.publications;
}
SourceFrameInput::~SourceFrameInput() {
    // Even a fully retired but unacknowledged leaf still owns the suspended
    // logical frame. Dropping it cannot permit another input poll on retry.
    if(receipt_->live && !receipt_->consumed)receipt_->poison();
}
bool SourceFrameInput::advance(unsigned budget) {
    if(receipt_->completed)return true;
    if(!receipt_->live || receipt_->consumed || receipt_->executing)
        throw std::logic_error("Source WAIT lost its live single frame invocation");
    receipt_->validate();receipt_->executing=true;
    try {
        while(budget-- && !receipt_->completed) {receipt_->validate();execution_->step();}
        receipt_->executing=false;return receipt_->completed;
    } catch(...) {receipt_->executing=false;receipt_->poison();throw;}
}
bool SourceFrameInput::complete() const noexcept {return receipt_->completed;}
std::uint64_t SourceFrameInput::retired_instructions() const noexcept {return execution_->retired;}
} // namespace eb::native::story
namespace eb::native {
std::unique_ptr<story::SourceFrameInput> WorldRuntime::Operation::begin_source_frame(
    story::SourceWorkClock &work,story::AudioFrameClock &physical,PeripheralState &peripherals,
    WorldInputPlayback &raw,story::SourceFrameInputContext context) {
    return source_frame_owner(raw).begin_source_frame(work,physical,peripherals,raw,context);
}
} // namespace eb::native
