#pragma once
#include "eb/native/story/scene.hpp"
#include <functional>
namespace eb::native::story {
struct SourceRandomContext {
    bool native_mode{},low_wram_stack{},decimal_clear{};
    std::uint8_t program_bank=0xc0,caller_bank=0xc1,data_bank=0x7e,caller_status=4;
    std::uint16_t direct_page=0x1e00,stack_pointer=0x1ffc,accumulator{};
};
struct SourceRandomRegisters {
    std::uint16_t accumulator{};
    std::uint8_t status{};
    bool operator==(const SourceRandomRegisters &) const = default;
};
struct SourceRandomReceipt {
private:
    friend class Scene::Operation;
    friend class SourceRandom;
    SourceWorkService *work{};
    RandomState *random{};
    std::function<void()> validate,poison,release;
    bool live=true,completed{},consumed{},executing{};
};
// Literal PHP-to-RTL RAND. The actual C1 caller JSL/REP31, following WindowTick
// gates and all other producers are excluded. No whole-window timing claim.
class SourceRandom final {
public:
    ~SourceRandom();
    SourceRandom(const SourceRandom &)=delete;
    SourceRandom &operator=(const SourceRandom &)=delete;
    bool advance(unsigned work_budget=4096);
    bool complete() const noexcept;
    std::uint64_t retired_instructions() const noexcept;
    SourceRandomRegisters registers() const noexcept;
    std::uint8_t result_byte() const;
private:
    friend class Scene;
    friend class Scene::Operation;
    friend class eb::native::WorldRuntime;
    struct Admission;
    struct Execution;
    static void validate_context(SourceRandomContext);
    static void validate_owner(SourceWorkClock&,TickState&,const battle::FrameDisplay&,const Scene&);
    static void validate_operation_owner(SourceWorkClock&,TickState&,const battle::FrameDisplay&,const Scene::Operation&);
    SourceRandom(SourceWorkClock&,std::shared_ptr<SourceRandomReceipt>,SourceRandomContext);
    std::shared_ptr<SourceRandomReceipt> receipt_;
    std::unique_ptr<Execution> execution_;
};
}
