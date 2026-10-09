#pragma once
#include "eb/native/story/scene.hpp"
#include <array>
#include <functional>
namespace eb::native::story {
struct SourceMeterRollerContext {
    bool native_mode{},low_wram_stack{},decimal_clear{};
    std::uint8_t program_bank=0xc2,caller_bank=0xc1,data_bank=0x7e,caller_status=4;
    std::uint16_t direct_page=0x1e00,stack_pointer=0x1ffc,accumulator{},x_index{},y_index{};
};
struct SourceMeterRollerRegisters {
    std::uint16_t accumulator{},x_index{},y_index{},direct_page{},stack_pointer{};
    std::uint8_t status{};
    bool operator==(const SourceMeterRollerRegisters &) const = default;
};
// Only the declared 1D00 C-stack page. Party, control, OAM and hardware bytes
// remain in their actual owners; this is not a whole-WRAM facade.
class SourceMeterRollerEntry final {
public:
    SourceMeterRollerEntry() = default;
    SourceMeterRollerEntry(const SourceMeterRollerEntry &)=delete;
    SourceMeterRollerEntry &operator=(const SourceMeterRollerEntry &)=delete;
    std::span<const std::uint8_t,256> page() const noexcept {return page_;}
    void set_page(std::span<const std::uint8_t,256>);
private:
    friend class SourceMeterRoller;
    friend class SourceMeterTiles;
    friend class SourceMeterStatus;
    friend struct SourceMeterStatusCall;
    friend struct SourceMeterTilesCall;
    friend struct SourceMeterRollerCall;
    std::array<std::uint8_t,256> page_{};
    const void *source_lease_{};
    std::shared_ptr<const void> lifetime_=std::make_shared<const unsigned>(0);
};
struct SourceMeterRollerCall {
    explicit SourceMeterRollerCall(SourceMeterRollerEntry &value):entry(&value),lifetime(value.lifetime_) {}
private:
    friend class SourceMeterRoller;
    friend class Scene::Operation;
    SourceMeterRollerEntry *entry{};
    std::weak_ptr<const void> lifetime;
};
struct SourceMeterRollerReceipt {
private:
    friend class Scene::Operation;
    friend class SourceMeterRoller;
    SourceWorkService *work{};
    party::State *party{};
    dialogue::WindowHost *windows{};
    std::function<void()> validate,poison,release;
    bool live=true,completed{},consumed{},executing{};
};
// Literal HP_PP_ROLLER REP31-to-RTL, including reached low-input MULT168,
// C20F58 and ASR32. External C1 JSL, prior semantic WindowTick prefix and
// subsequent meter artwork/window/world work are excluded. Audio continues
// to use SourceWorkClock's existing borrowed lifetime contract.
class SourceMeterRoller final {
public:
    ~SourceMeterRoller();
    SourceMeterRoller(const SourceMeterRoller &)=delete;
    SourceMeterRoller &operator=(const SourceMeterRoller &)=delete;
    bool advance(unsigned work_budget=4096);
    bool complete() const noexcept;
    std::uint64_t retired_instructions() const noexcept;
    SourceMeterRollerRegisters registers() const noexcept;
private:
    friend class Scene;
    friend class Scene::Operation;
    friend class eb::native::WorldRuntime;
    struct Admission;
    struct Execution;
    static void validate_context(SourceMeterRollerContext);
    static void validate_owner(SourceWorkClock&,TickState&,const battle::FrameDisplay&,
        party::State&,dialogue::WindowHost&,const Scene&);
    static void validate_operation_owner(SourceWorkClock&,TickState&,const battle::FrameDisplay&,
        party::State&,dialogue::WindowHost&,const Scene::Operation&);
    SourceMeterRoller(SourceWorkClock&,std::shared_ptr<SourceMeterRollerReceipt>,
        SourceMeterRollerContext,SourceMeterRollerCall);
    std::shared_ptr<SourceMeterRollerReceipt> receipt_;
    std::unique_ptr<Execution> execution_;
};
}
