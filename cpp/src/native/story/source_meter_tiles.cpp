#include "eb/native/story/source_meter_tiles.hpp"
#include "eb/native/story/work_clock.hpp"
#include "eb/native/battle/frame_display.hpp"
#include "eb/native/world_runtime.hpp"
#include "meter_tiles/execution.hpp"
#include <stdexcept>
namespace eb::native::story {
namespace {void require(bool value,const char *message){if(!value)throw std::logic_error(message);}}
void SourceMeterTiles::validate_context(SourceMeterTilesContext c) {
    const bool helper=c.boundary==SourceMeterTilesBoundary::HelperEntry;
    require((helper||c.boundary==SourceMeterTilesBoundary::WindowSetup)&&c.native_mode&&c.low_wram_stack&&
        c.decimal_clear&&c.caller_bank==0xc1&&c.data_bank==0x7e&&c.direct_page==0x1e00&&
        c.program_bank==(helper?0xc2:0xc1)&&c.stack_pointer==(helper?0x1ffc:0x1fff)&&!(c.caller_status&0x18),
        "Source meter tiles requires its declared native/binary/X16 C1-C2/7E D1E00 component entry");
}
void SourceMeterTiles::validate_owner(SourceWorkClock &work,TickState &ticks,const battle::FrameDisplay &frames,
    party::State &party,party::MeterWindows &meters,dialogue::WindowHost &windows,const Scene &scene) {
    work.require_healthy();
    require(!work.in_atom_&&!work.in_interrupt_&&&work.frames_==&frames&&work.uses_clock(work.physical_,ticks)&&
        &work.runtime_.scene()==&scene,"Source meter tiles requires its actual work/physical/audio/tick/runtime/display owners");
    auto *hardware=frames.peripherals();
    require(hardware&&hardware->uses(work.physical_)&&work.physical_.uses_peripherals(*hardware),
        "Source meter tiles requires both actual peripheral/physical bindings");
    require(!(ticks.effective_interrupt_mask()&0x30)&&(!(ticks.effective_interrupt_mask()&0x80)||work.has_interrupt_work())&&
        work.runtime_.uses_default_interrupt_callback(),"Source meter tiles requires represented NMI/default callback");
    const auto &video=frames.video_transport();
    require(!video.failed()&&!video.pending_bytes()&&video.pending().empty()&&frames.pending_display_id()<=2,
        "Source meter tiles has unowned queued-DMA or display state");
    require(meters.bound_to(windows,party)&&party.version()==windows.version(),
        "Source meter tiles requires one actual regional party/meter/window owner");
    // Pure extent preflight across every potentially sampled phase/row. Live
    // phase/member/value reads still occur only at their literal source atoms.
    for(unsigned phase=0;phase<4;++phase) {
        const auto member=party.party_order[phase];
        if(member<1||member>4)continue;
        (void)party.character(member);
        if(!meters.state().render||!(meters.state().drawn_mask&(1u<<phase)))continue;
        for(unsigned row:{18u,19u}) {
            const auto first=std::uint16_t(row*32+96+16-(unsigned(party.controlled_count)*7/2)+phase*7+3);
            require(first<896&&99<=896-unsigned(first),"Source meter tiles reached an unsupported BG2 rectangle alias");
        }
    }
}
void SourceMeterTiles::validate_initial_entry(SourceWorkClock &work,WorldControlState &control,
    math::SoftwareArithmeticState &scratch,dialogue::WindowHost &windows) {
    require(work.runtime_.permits_source_meter_control(control)&&!control.source_meter_active()&&!scratch.source_active(),
        "Source meter tiles requires its idle actual control/arithmetic owner");
    windows.validate_source_meter_tiles(nullptr);
}
void SourceMeterTiles::validate_operation_owner(SourceWorkClock &work,TickState &ticks,const battle::FrameDisplay &frames,
    party::State &party,party::MeterWindows &meters,dialogue::WindowHost &windows,const Scene::Operation &op) {
    work.require_healthy();const auto &scene=work.runtime_.scene();require(op.uses(scene),"Source meter tiles requires this actual Scene parent");
    validate_owner(work,ticks,frames,party,meters,windows,scene);
}
struct SourceMeterTiles::Admission {
    SourceMeterTilesCall call;party::State &party;party::MeterWindows &meters;dialogue::WindowHost &windows;
    PeripheralState &hardware;SourceWorkClock &work;SourceMeterTilesBoundary boundary;
    std::weak_ptr<const void> party_life,meter_life,window_life,hardware_life;
    Admission(SourceMeterTilesCall value,party::State &p,party::MeterWindows &m,dialogue::WindowHost &w,
        PeripheralState &h,SourceWorkClock &clock,SourceMeterTilesBoundary b)
        :call(value),party(p),meters(m),windows(w),hardware(h),work(clock),boundary(b),party_life(p.source_lifetime()),
         meter_life(m.source_lifetime()),window_life(w.source_lifetime()),hardware_life(h.source_lifetime()) {}
    void validate(const void *lease) const {
        require(!call.page_life.expired()&&!call.control_life.expired()&&!call.scratch_life.expired()&&
            !party_life.expired()&&!meter_life.expired()&&!window_life.expired()&&!hardware_life.expired(),
            "Source meter tiles lost an actual page/control/scratch/party/meter/window/peripheral instance");
        require(work.runtime_.permits_source_meter_control(*call.control),
            "Source meter tiles has a foreign actual runtime control owner");
        require(party.source_meter_lease_==lease&&call.entry->source_lease_==lease&&
            call.control->source_ownership.lease_==lease&&call.scratch->lease_==lease,
            "Source meter tiles lost its exact party/page/control/arithmetic lease");
        meters.validate_source_tiles(lease);windows.validate_source_meter_tiles(lease);
        if(!lease) {
            require(!hardware.source_math_state().remaining_cpu_cycles,"Source meter tiles has unowned pending math");
            if(boundary==SourceMeterTilesBoundary::HelperEntry)
                require(meters.state().upload==1,"Source helper entry requires its independently retained upload1 byte");
        }
    }
};
std::unique_ptr<Scene::Operation> Scene::begin_source_meter_tiles_window_tick(SourceWorkClock &work,
    SourceMeterTilesContext c,WorldControlState &control,math::SoftwareArithmeticState &scratch) {
    SourceMeterTiles::validate_context(c);const auto control_life=control.source_lifetime(),scratch_life=scratch.source_lifetime();
    auto guard=[&control,&scratch,control_life,scratch_life] {
        require(!control_life.expired()&&!scratch_life.expired(),"Source meter tiles prefix lost its declared control/arithmetic owner");
    };
    return begin_source_meter_tiles_window_tick_impl(work,[&work,this,&control,&scratch,guard](TickState &ticks,
        const battle::FrameDisplay &frames,party::State &party,party::MeterWindows &meters,dialogue::WindowHost &windows) {
        guard();SourceMeterTiles::validate_owner(work,ticks,frames,party,meters,windows,*this);
        require(!party.source_meter_active()&&!meters.source_tiles_active()&&!frames.peripherals()->source_math_state().remaining_cpu_cycles,
            "Source meter tiles requires its idle actual control/arithmetic/party/meter and completed math");
        SourceMeterTiles::validate_initial_entry(work,control,scratch,windows);
    },guard,&control,&scratch);
}
std::unique_ptr<SourceMeterTiles> Scene::Operation::begin_source_meter_tiles(SourceWorkClock &work,
    SourceMeterTilesContext c,SourceMeterTilesCall call) {
    SourceMeterTiles::validate_context(c);
    require(call.entry&&call.control&&call.scratch&&!call.page_life.expired()&&!call.control_life.expired()&&!call.scratch_life.expired(),
        "Source meter tiles declared page/control/arithmetic entry expired");
    auto admission=std::make_shared<std::shared_ptr<SourceMeterTiles::Admission>>();
    auto receipt=pin_source_meter_tiles(work,call.control,call.scratch,[&work,this,call,c,admission](TickState &ticks,const battle::FrameDisplay &frames,
        party::State &party,party::MeterWindows &meters,dialogue::WindowHost &windows,const void *lease) {
        require(!call.page_life.expired()&&!call.control_life.expired()&&!call.scratch_life.expired(),
            "Source meter tiles declared page/control/arithmetic entry expired");
        SourceMeterTiles::validate_operation_owner(work,ticks,frames,party,meters,windows,*this);
        if(!*admission)*admission=std::make_shared<SourceMeterTiles::Admission>(call,party,meters,windows,*frames.peripherals(),work,c.boundary);
        require(&(*admission)->party==&party&&&(*admission)->meters==&meters&&&(*admission)->windows==&windows&&
            &(*admission)->hardware==frames.peripherals(),"Source meter tiles changed actual borrowed owner identity");
        (*admission)->validate(lease);
        if(lease) {
            const auto &receipt=*static_cast<const SourceMeterTilesReceipt*>(lease);
            if(receipt.upload_started)require(meters.state().upload==(receipt.upload_cleared?0:1),
                "Source meter tiles lost its actual upload1/byte-clear effect");
        }
    });
    try{return std::unique_ptr<SourceMeterTiles>(new SourceMeterTiles(work,receipt,c,call));}
    catch(...){if(receipt->release)receipt->release();receipt->poison();throw;}
}
SourceMeterTiles::SourceMeterTiles(SourceWorkClock &work,std::shared_ptr<SourceMeterTilesReceipt> receipt,
    SourceMeterTilesContext context,SourceMeterTilesCall call)
    :receipt_(std::move(receipt)),execution_(std::make_unique<Execution>(work,*receipt_,context,call)) {
    require(!call.page_life.expired()&&!call.control_life.expired()&&!call.scratch_life.expired(),"Source meter tiles entry expired before claim");
    auto *party=receipt_->party;auto *meters=receipt_->meters;auto *windows=receipt_->windows;
    const auto party_life=party->source_lifetime(),meter_life=meters->source_lifetime(),window_life=windows->source_lifetime();
    const auto identity=receipt_.get();
    require(!party->source_meter_lease_&&!call.entry->source_lease_&&!call.control->source_ownership.lease_&&!call.scratch->lease_,
        "Source meter tiles entry owners were already claimed");
    receipt_->release=[party,meters,windows,party_life,meter_life,window_life,call,identity] {
        if(!party_life.expired()&&party->source_meter_lease_==identity)party->source_meter_lease_=nullptr;
        if(!meter_life.expired())meters->release_source_tiles(identity);
        if(!window_life.expired())windows->release_source_publication(identity);
        if(!call.page_life.expired()&&call.entry->source_lease_==identity)call.entry->source_lease_=nullptr;
        if(!call.control_life.expired()&&call.control->source_ownership.lease_==identity)call.control->source_ownership.lease_=nullptr;
        if(!call.scratch_life.expired()&&call.scratch->lease_==identity)call.scratch->lease_=nullptr;
    };
    work.enable_source_math(execution_->hardware);
    meters->claim_source_tiles(identity);windows->claim_source_publication(identity);
    party->source_meter_lease_=identity;call.entry->source_lease_=identity;
    call.control->source_ownership.lease_=identity;call.scratch->lease_=identity;
    receipt_->upload_started=context.boundary==SourceMeterTilesBoundary::HelperEntry;
}
SourceMeterTiles::~SourceMeterTiles(){if(receipt_->release)receipt_->release();if(receipt_->live&&!receipt_->consumed)receipt_->poison();}
bool SourceMeterTiles::advance(unsigned budget) {
    require(receipt_->live&&!receipt_->consumed&&!receipt_->executing,"Source meter tiles lost its live single invocation");
    receipt_->executing=true;
    try {receipt_->validate();while(budget--&&!receipt_->completed){receipt_->validate();execution_->step();}
        receipt_->executing=false;return receipt_->completed;}
    catch(...){receipt_->executing=false;receipt_->poison();throw;}
}
bool SourceMeterTiles::complete() const noexcept {return receipt_->completed;}
std::uint64_t SourceMeterTiles::retired_instructions() const noexcept {return execution_->retired;}
SourceMeterTilesRegisters SourceMeterTiles::registers() const noexcept {return {execution_->a,execution_->x,execution_->y,execution_->d,execution_->s,execution_->p};}
}
namespace eb::native {
std::unique_ptr<WorldRuntime::Operation> WorldRuntime::begin_source_meter_tiles_window_tick(story::SourceWorkClock &work,
    story::SourceMeterTilesContext c,WorldControlState &control,math::SoftwareArithmeticState &scratch) {
    story::SourceMeterTiles::validate_context(c);const auto control_life=control.source_lifetime(),scratch_life=scratch.source_lifetime();
    auto guard=[&control,&scratch,control_life,scratch_life] {
        if(control_life.expired()||scratch_life.expired())throw std::logic_error("Source meter tiles prefix lost its declared control/arithmetic owner");
    };
    return begin_source_meter_tiles_window_tick_impl(work,[&work,this,&control,&scratch,guard](story::TickState &ticks,
        const battle::FrameDisplay &frames,party::State &party,party::MeterWindows &meters,dialogue::WindowHost &windows) {
        guard();story::SourceMeterTiles::validate_owner(work,ticks,frames,party,meters,windows,scene());
        if(!permits_source_meter_control(control)||control.source_meter_active()||scratch.source_active()||party.source_meter_active()||
            meters.source_tiles_active()||frames.peripherals()->source_math_state().remaining_cpu_cycles)
            throw std::logic_error("Source meter tiles requires its idle actual control/arithmetic/party/meter and completed math");
        story::SourceMeterTiles::validate_initial_entry(work,control,scratch,windows);
    },guard,&control,&scratch);
}
std::unique_ptr<story::SourceMeterTiles> WorldRuntime::Operation::begin_source_meter_tiles(story::SourceWorkClock &work,
    story::SourceMeterTilesContext c,story::SourceMeterTilesCall call){return source_foreground_owner().begin_source_meter_tiles(work,c,call);}
}
