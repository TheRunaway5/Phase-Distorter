#pragma once
#include "eb/native/story/source_meter_roller.hpp"
#include "eb/native/math/software_state.hpp"
#include "eb/native/world_control.hpp"
namespace eb::native::story {
enum class SourceMeterTilesBoundary { HelperEntry, WindowSetup };
struct SourceMeterTilesContext {
    bool native_mode{},low_wram_stack{},decimal_clear{};
    SourceMeterTilesBoundary boundary=SourceMeterTilesBoundary::HelperEntry;
    std::uint8_t program_bank=0xc2,caller_bank=0xc1,data_bank=0x7e,caller_status=4;
    std::uint16_t direct_page=0x1e00,stack_pointer=0x1ffc,accumulator{},x_index{},y_index{};
};
using SourceMeterTilesRegisters=SourceMeterRollerRegisters;
// Reuses the exact actual44 page; globals, descriptors, party/control and
// hardware math remain in their own owners. Entry values are not reset.
struct SourceMeterTilesCall {
    SourceMeterTilesCall(SourceMeterRollerEntry &page,WorldControlState &control,
                        math::SoftwareArithmeticState &scratch)
        :entry(&page),control(&control),scratch(&scratch),page_life(page.lifetime_),
         control_life(control.source_lifetime()),scratch_life(scratch.source_lifetime()) {}
private:
    friend class SourceMeterTiles;
    friend class Scene::Operation;
    SourceMeterRollerEntry *entry{};WorldControlState *control{};
    math::SoftwareArithmeticState *scratch{};
    std::weak_ptr<const void> page_life,control_life,scratch_life;
};
struct SourceMeterTilesReceipt {
private:
    friend class SourceMeterTiles;friend class Scene::Operation;
    SourceWorkService *work{};party::State *party{};party::MeterWindows *meters{};
    dialogue::WindowHost *windows{};
    std::function<void()> validate,poison,release;
    bool live=true,completed{},consumed{},executing{},upload_started{},upload_cleared{};
};
// Literal upload1 UPDATE_HPPP_METER_TILES, all reached decimal/software divide
// and fill children. HelperEntry excludes its external JSL. WindowSetup owns
// the actual C1 SEP/LDA1/STA+JSL once. Prior semantic WindowTick preparation,
// palette/publication/world suffix and full cutscene timing remain excluded.
class SourceMeterTiles final {
public:
    ~SourceMeterTiles();
    SourceMeterTiles(const SourceMeterTiles&)=delete;
    SourceMeterTiles& operator=(const SourceMeterTiles&)=delete;
    bool advance(unsigned work_budget=4096);
    bool complete() const noexcept;
    std::uint64_t retired_instructions() const noexcept;
    SourceMeterTilesRegisters registers() const noexcept;
private:
    friend class Scene;friend class Scene::Operation;friend class eb::native::WorldRuntime;
    struct Admission;struct Execution;
    static void validate_context(SourceMeterTilesContext);
    static void validate_initial_entry(SourceWorkClock&,WorldControlState&,math::SoftwareArithmeticState&,dialogue::WindowHost&);
    static void validate_operation_owner(SourceWorkClock&,TickState&,const battle::FrameDisplay&,party::State&,party::MeterWindows&,dialogue::WindowHost&,const Scene::Operation&);
    static void validate_owner(SourceWorkClock&,TickState&,const battle::FrameDisplay&,
        party::State&,party::MeterWindows&,dialogue::WindowHost&,const Scene&);
    SourceMeterTiles(SourceWorkClock&,std::shared_ptr<SourceMeterTilesReceipt>,
                     SourceMeterTilesContext,SourceMeterTilesCall);
    std::shared_ptr<SourceMeterTilesReceipt> receipt_;
    std::unique_ptr<Execution> execution_;
};
}
