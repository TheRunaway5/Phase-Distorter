#include "eb/native/story/source_meter_status.hpp"
#include "eb/native/story/work_clock.hpp"
#include "eb/native/battle/frame_display.hpp"
#include "eb/native/world_runtime.hpp"
#include "meter_status/execution.hpp"
#include <stdexcept>

namespace eb::native::story {
namespace {void require(bool value,const char *message){if(!value)throw std::logic_error(message);}}
void SourceMeterStatus::validate_context(SourceMeterStatusContext c) {
    require(c.native_mode&&c.low_wram_stack&&c.decimal_clear&&c.program_bank==0xc1&&c.data_bank==0x7e&&
        c.direct_page==0x1e00&&c.stack_pointer==0x1fff&&!(c.caller_status&0x38),
        "Source meter status requires its declared native/binary/M16/X16 C1/7E D1E00 entry");
}
void SourceMeterStatus::validate_owner(SourceWorkClock &work,TickState &ticks,const battle::FrameDisplay &frames,
    party::State &party,dialogue::WindowHost &windows,const Scene &scene,WorldControlState &control,
    CopyCounterState &counter,battle::PaletteBankState &palette,const void *lease) {
    work.require_healthy();
    require(!work.in_atom_&&!work.in_interrupt_&&&work.frames_==&frames&&work.uses_clock(work.physical_,ticks)&&
        &work.runtime_.scene()==&scene,"Source meter status requires its actual work/physical/audio/Scene owners");
    auto *hardware=frames.peripherals();
    require(hardware&&hardware->uses(work.physical_)&&work.physical_.uses_peripherals(*hardware),
        "Source meter status requires both actual peripheral/physical bindings");
    require(!(ticks.effective_interrupt_mask()&0x30)&&work.runtime_.uses_default_interrupt_callback()&&
        work.uses_palette_transport(palette),"Source meter status requires its actual default NMI/palette owner");
    auto *publisher=windows.palette_publication();
    require(publisher&&work.uses_window_palette(*publisher),"Source meter status requires the actual Scene/NMI window publisher");
    windows.validate_source_palette(lease,*publisher,palette);
    const auto &video=frames.video_transport();
    require(!video.failed()&&!video.pending_bytes()&&video.pending().empty()&&frames.pending_display_id()<=2,
        "Source meter status has unowned queued-DMA or display state");
    require(work.runtime_.permits_source_meter_control(control)&&work.can_bind_copy_counter(counter)&&
        party.version()==windows.version(),"Source meter status has foreign control/counter/regional owners");
    require(party.controlled_count>=1&&party.controlled_count<=5,
        "Source meter status controlled count reaches unowned adjacent bytes");
    for(unsigned i=0;i<5;++i)require(party.controlled_order[i]<6,
        "Source meter status has an unowned chosen-pointer row");
    require(ticks.flavor>=1&&ticks.flavor<=5,"Source meter status flavor leaves its immutable properties");
    const auto resources=windows.source_palette_resources();
    require(resources&&resources->version()==party.version()&&resources->raw_palettes().size()==(party.version()==GameVersion::JP?384:448),
        "Source meter status lost its immutable regional palette extent");
    const auto properties=resources->raw_palette_properties();
    for(unsigned i=0;i<5;++i) {
        const unsigned offset=properties[i*3]|(unsigned(properties[i*3+1])<<8);
        require(offset<=384&&64<=384-offset,"Source meter status property leaves its reached six-palette extent");
    }

    require(!palette.upload_mode||palette.upload_mode==8||palette.upload_mode==16||palette.upload_mode==24,
        "Source meter status has an unsupported palette DMA alias");
}
void SourceMeterStatus::validate_operation_owner(SourceWorkClock &work,TickState &ticks,const battle::FrameDisplay &frames,
    party::State &party,dialogue::WindowHost &windows,const Scene::Operation &operation,WorldControlState &control,
    CopyCounterState &counter,battle::PaletteBankState &palette,const void *lease) {
    work.require_healthy();const auto &scene=work.runtime_.scene();
    require(operation.uses(scene),"Source meter status has a foreign actual parent");
    validate_owner(work,ticks,frames,party,windows,scene,control,counter,palette,lease);
}
struct SourceMeterStatus::Admission {
    SourceMeterStatusCall call;party::State &party;dialogue::WindowHost &windows;
    SourceWorkClock &work;dialogue::WindowPalettePublication *publisher;
    std::shared_ptr<const dialogue::WindowResources> resources;
    std::weak_ptr<const void> party_life,window_life,publisher_life,hardware_life;
    Admission(SourceMeterStatusCall c,party::State &p,dialogue::WindowHost &w,SourceWorkClock &clock,PeripheralState &hardware)
        :call(c),party(p),windows(w),work(clock),publisher(w.palette_publication()),resources(w.source_palette_resources()),
         party_life(p.source_lifetime()),window_life(w.source_lifetime()),publisher_life(publisher->source_lifetime()),
         hardware_life(hardware.source_lifetime()) {}
    void validate(const void *lease) const {
        require(!call.page_life.expired()&&!call.control_life.expired()&&!call.counter_life.expired()&&!call.palette_life.expired()&&
            !party_life.expired()&&!window_life.expired()&&!publisher_life.expired()&&!hardware_life.expired(),
            "Source meter status lost an actual page/control/counter/palette/party/window/publisher/peripheral owner");
        require(work.uses_copy_counter(*call.counter)&&work.runtime_.permits_source_meter_control(*call.control),
            "Source meter status lost its exact bound counter/control identity");
        require(party.source_meter_lease_==lease&&call.entry->source_lease_==lease&&call.control->source_ownership.lease_==lease&&
            call.counter->lease_==lease&&call.palette->source_lease_==lease,
            "Source meter status lost its exact actual-owner claims");
        require(windows.source_palette_resources()==resources&&resources->version()==party.version()&&
            resources->raw_palette_properties().size()==15&&resources->raw_palettes().size()>=(6*64),
            "Source meter status lost its actual immutable window resources");
        windows.validate_source_palette(lease,*publisher,*call.palette);
        if(!lease)require(!work.frames_.peripherals()->source_math_state().remaining_cpu_cycles,
            "Source meter status has unowned pending math");
    }
};
std::unique_ptr<Scene::Operation> Scene::begin_source_meter_status_window_tick(SourceWorkClock &work,
    SourceMeterStatusContext context,WorldControlState &control,CopyCounterState &counter,battle::PaletteBankState &palette) {
    SourceMeterStatus::validate_context(context);
    const auto control_life=control.source_lifetime(),counter_life=counter.source_lifetime(),palette_life=palette.source_lifetime();
    auto guard=[&control,&counter,&palette,&work,control_life,counter_life,palette_life] {
        require(!control_life.expired()&&!counter_life.expired()&&!palette_life.expired(),"Source meter status prefix owner expired");
        require(work.can_bind_copy_counter(counter),
            "Source meter status prefix has foreign or claimed component owners");
    };
    auto operation=begin_source_meter_status_window_tick_impl(work,[this,&work,&control,&counter,&palette,guard](TickState &ticks,
        const battle::FrameDisplay &frames,party::State &party,party::MeterWindows&,dialogue::WindowHost &windows) {
        guard();SourceMeterStatus::validate_owner(work,ticks,frames,party,windows,*this,control,counter,palette);
        require(!party.source_meter_active()&&!control.source_meter_active()&&!counter.source_active()&&!palette.source_active()&&
            !frames.peripherals()->source_math_state().remaining_cpu_cycles,
            "Source meter status prefix requires idle party/completed math");
    },guard,&control,&counter,&palette);
    work.bind_copy_counter(counter);return operation;
}
std::unique_ptr<SourceMeterStatus> Scene::Operation::begin_source_meter_status(SourceWorkClock &work,
    SourceMeterStatusContext context,SourceMeterStatusCall call) {
    SourceMeterStatus::validate_context(context);
    require(call.entry&&call.control&&call.counter&&call.palette&&!call.page_life.expired()&&!call.control_life.expired()&&
        !call.counter_life.expired()&&!call.palette_life.expired(),"Source meter status declared entry expired");
    auto admission=std::make_shared<std::shared_ptr<SourceMeterStatus::Admission>>();
    auto receipt=pin_source_meter_status(work,call.control,call.counter,call.palette,[this,&work,call,admission](TickState &ticks,
        const battle::FrameDisplay &frames,party::State &party,party::MeterWindows&,dialogue::WindowHost &windows,const void *lease) {
        require(!call.page_life.expired()&&!call.control_life.expired()&&!call.counter_life.expired()&&!call.palette_life.expired(),
            "Source meter status declared entry expired");
        // The common transport/extent validation uses the currently active
        // window claim; admission itself is still completely read-only.
        SourceMeterStatus::validate_operation_owner(work,ticks,frames,party,windows,*this,*call.control,*call.counter,*call.palette,lease);
        if(!*admission)*admission=std::make_shared<SourceMeterStatus::Admission>(call,party,windows,work,*frames.peripherals());
        require(&(*admission)->party==&party&&&(*admission)->windows==&windows,"Source meter status changed shared owners");
        (*admission)->validate(lease);
    });
    try{return std::unique_ptr<SourceMeterStatus>(new SourceMeterStatus(work,receipt,context,call));}
    catch(...){if(receipt->release)receipt->release();receipt->poison();throw;}
}
SourceMeterStatus::SourceMeterStatus(SourceWorkClock &work,std::shared_ptr<SourceMeterStatusReceipt> receipt,
    SourceMeterStatusContext context,SourceMeterStatusCall call)
    :receipt_(std::move(receipt)),execution_(std::make_unique<Execution>(work,*receipt_,context,call)) {
    auto *party=receipt_->party;auto *windows=receipt_->windows;const auto identity=receipt_.get();
    const auto party_life=party->source_lifetime(),window_life=windows->source_lifetime();
    require(!call.page_life.expired()&&!call.control_life.expired()&&!call.counter_life.expired()&&!call.palette_life.expired()&&
        !party->source_meter_lease_&&!call.entry->source_lease_&&!call.control->source_ownership.lease_&&
        !call.counter->lease_&&!call.palette->source_lease_,"Source meter status owner expired or already claimed");
    receipt_->release=[call,party,windows,party_life,window_life,identity] {
        if(!party_life.expired()&&party->source_meter_lease_==identity)party->source_meter_lease_=nullptr;
        if(!window_life.expired())windows->release_source_publication(identity);
        if(!call.page_life.expired()&&call.entry->source_lease_==identity)call.entry->source_lease_=nullptr;
        if(!call.control_life.expired()&&call.control->source_ownership.lease_==identity)call.control->source_ownership.lease_=nullptr;
        if(!call.counter_life.expired()&&call.counter->lease_==identity)call.counter->lease_=nullptr;
        if(!call.palette_life.expired()&&call.palette->source_lease_==identity)call.palette->source_lease_=nullptr;
    };
    work.enable_source_math(*work.frames_.peripherals());
    windows->claim_source_palette(identity,*windows->palette_publication(),*call.palette);
    party->source_meter_lease_=identity;call.entry->source_lease_=identity;
    call.control->source_ownership.lease_=identity;call.counter->lease_=identity;call.palette->source_lease_=identity;
}
SourceMeterStatus::~SourceMeterStatus(){if(receipt_->release)receipt_->release();if(receipt_->live&&!receipt_->consumed)receipt_->poison();}
bool SourceMeterStatus::advance(unsigned budget) {
    require(receipt_->live&&!receipt_->consumed&&!receipt_->executing,"Source meter status lost its live single invocation");
    receipt_->executing=true;
    try {receipt_->validate();while(budget--&&!receipt_->completed){receipt_->validate();execution_->step();}
        receipt_->executing=false;return receipt_->completed;}
    catch(...){receipt_->executing=false;receipt_->poison();throw;}
}
bool SourceMeterStatus::complete() const noexcept{return receipt_->completed;}
std::uint64_t SourceMeterStatus::retired_instructions() const noexcept{return execution_->retired;}
SourceMeterStatusRegisters SourceMeterStatus::registers() const noexcept{return {execution_->a,execution_->x,execution_->y,execution_->d,execution_->s,execution_->p};}
}
namespace eb::native {
std::unique_ptr<WorldRuntime::Operation> WorldRuntime::begin_source_meter_status_window_tick(story::SourceWorkClock &work,
    story::SourceMeterStatusContext context,WorldControlState &control,story::CopyCounterState &counter,battle::PaletteBankState &palette) {
    story::SourceMeterStatus::validate_context(context);
    const auto control_life=control.source_lifetime(),counter_life=counter.source_lifetime(),palette_life=palette.source_lifetime();
    auto guard=[&control,&counter,&palette,&work,control_life,counter_life,palette_life] {
        if(control_life.expired()||counter_life.expired()||palette_life.expired()||!work.can_bind_copy_counter(counter))
            throw std::logic_error("Source meter status prefix lost its idle actual component owners");
    };
    auto operation=begin_source_meter_status_window_tick_impl(work,[this,&work,&control,&counter,&palette,guard](story::TickState &ticks,
        const battle::FrameDisplay &frames,party::State &party,party::MeterWindows&,dialogue::WindowHost &windows) {
        guard();story::SourceMeterStatus::validate_owner(work,ticks,frames,party,windows,scene(),control,counter,palette);
        if(!permits_source_meter_control(control)||party.source_meter_active()||control.source_meter_active()||counter.source_active()||
            palette.source_active()||frames.peripherals()->source_math_state().remaining_cpu_cycles)
            throw std::logic_error("Source meter status prefix requires idle party/control/completed math");
    },guard,&control,&counter,&palette);
    work.bind_copy_counter(counter);return operation;
}
std::unique_ptr<story::SourceMeterStatus> WorldRuntime::Operation::begin_source_meter_status(story::SourceWorkClock &work,
    story::SourceMeterStatusContext context,story::SourceMeterStatusCall call){return source_foreground_owner().begin_source_meter_status(work,context,call);}
}
