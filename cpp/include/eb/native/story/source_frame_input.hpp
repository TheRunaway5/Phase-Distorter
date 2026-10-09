#pragma once

#include "eb/native/story/scene.hpp"
#include <functional>

namespace eb::native::story {
// Facts of the actual far caller, not saved or emulated CPU registers. WAIT
// saves/restores D/DB and establishes D=0, DB=0 for its input helpers.
struct SourceFrameInputContext {
    bool native_mode{}, upper_rom_caller{}, low_wram_stack{}, low_wram_data_bank{};
};
// Lower Scene owns the exact continuation lease. Its concrete clock validator
// is supplied by the upper source-work module; Scene never calls that module
// through a static-library dependency.
struct SourceFrameInputReceipt {
private:
    friend class Scene::Operation;
    friend class SourceFrameInput;
    SourceWorkService *work{};
    TickState *ticks{};
    InputState *input{};
    const std::uint16_t *debug{};
    std::function<void()> validate, poison;
    std::uint64_t publications_at_start{};
    bool waited_vblank{}, live = true, completed{}, consumed{}, executing{};
};

// Literal WAIT_UNTIL_NEXT_FRAME, inactive READ_JOYPAD/recording, and C08496.
// Only the exact suspended Scene frame can create and consume this receipt.
// Owners remain borrowed and stable until this operation is destroyed.
class SourceFrameInput final {
public:
    ~SourceFrameInput();
    SourceFrameInput(const SourceFrameInput &) = delete;
    SourceFrameInput &operator=(const SourceFrameInput &) = delete;
    bool advance(unsigned work_budget = 4096);
    bool complete() const noexcept;
    std::uint64_t retired_instructions() const noexcept;
private:
    friend class Scene::Operation;
    using Receipt = SourceFrameInputReceipt;
    SourceFrameInput(SourceWorkClock &, PeripheralState &, TickState &, InputState &,
                     WorldInputPlayback &, const std::uint16_t &, std::shared_ptr<Receipt>);
    struct Execution;
    std::shared_ptr<Receipt> receipt_;
    std::unique_ptr<Execution> execution_;
};
} // namespace eb::native::story
