#pragma once
#include "eb/native/story/source_meter_roller.hpp"
#include "eb/native/story/copy_counter.hpp"
#include "eb/native/battle/palette_effects.hpp"
#include "eb/native/world_control.hpp"

namespace eb::native::story {
struct SourceMeterStatusContext {
    bool native_mode{},low_wram_stack{},decimal_clear{};
    std::uint8_t program_bank=0xc1,data_bank=0x7e,caller_status=4;
    std::uint16_t direct_page=0x1e00,stack_pointer=0x1fff,accumulator{},x_index{},y_index{};
};
using SourceMeterStatusRegisters=SourceMeterRollerRegisters;
struct SourceMeterStatusCall {
    SourceMeterStatusCall(SourceMeterRollerEntry &page,WorldControlState &control,
        CopyCounterState &counter,battle::PaletteBankState &palette)
        :entry(&page),control(&control),counter(&counter),palette(&palette),
         page_life(page.lifetime_),control_life(control.source_lifetime()),
         counter_life(counter.source_lifetime()),palette_life(palette.source_lifetime()) {}
private:
    friend class SourceMeterStatus;friend class Scene::Operation;
    SourceMeterRollerEntry *entry{};WorldControlState *control{};
    CopyCounterState *counter{};battle::PaletteBankState *palette{};
    std::weak_ptr<const void> page_life,control_life,counter_life,palette_life;
};
struct SourceMeterStatusReceipt {
private:
    friend class SourceMeterStatus;friend class Scene::Operation;
    SourceWorkService *work{};party::State *party{};dialogue::WindowHost *windows{};
    std::function<void()> validate,poison,release;
    bool live=true,completed{},consumed{},executing{},palette_requested{};
};
// C12E23/C13541 through the conditional status/palette calls, stopping before
// the area STZ. Prior Window preparation and the publication suffix are separate.
class SourceMeterStatus final {
public:
    ~SourceMeterStatus();
    SourceMeterStatus(const SourceMeterStatus&)=delete;
    SourceMeterStatus& operator=(const SourceMeterStatus&)=delete;
    bool advance(unsigned work_budget=4096);
    bool complete() const noexcept;
    std::uint64_t retired_instructions() const noexcept;
    SourceMeterStatusRegisters registers() const noexcept;
private:
    friend class Scene;friend class Scene::Operation;friend class eb::native::WorldRuntime;
    struct Admission;struct Execution;
    static void validate_context(SourceMeterStatusContext);
    static void validate_owner(SourceWorkClock&,TickState&,const battle::FrameDisplay&,
        party::State&,dialogue::WindowHost&,const Scene&,WorldControlState&,CopyCounterState&,battle::PaletteBankState&,const void *lease=nullptr);
    static void validate_operation_owner(SourceWorkClock&,TickState&,const battle::FrameDisplay&,
        party::State&,dialogue::WindowHost&,const Scene::Operation&,WorldControlState&,CopyCounterState&,battle::PaletteBankState&,const void*);
    SourceMeterStatus(SourceWorkClock&,std::shared_ptr<SourceMeterStatusReceipt>,SourceMeterStatusContext,SourceMeterStatusCall);
    std::shared_ptr<SourceMeterStatusReceipt> receipt_;
    std::unique_ptr<Execution> execution_;
};
}
