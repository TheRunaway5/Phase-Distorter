#pragma once

#include "eb/game_version.hpp"
#include <array>
#include <cstdint>
#include <memory>
#include <optional>
#include <span>
#include <vector>

namespace eb::native {

struct ActionScriptBlock {
    std::uint32_t offset{};
    std::vector<std::uint8_t> bytes;
};

struct ActionInstructionBinding {
    std::uint32_t offset{};
    std::optional<std::uint32_t> native_operation;
    // Known inline response length; missing means the compiler could not
    // establish a continuation through this service call.
    std::optional<unsigned> parameter_bytes;
};

// Action scripts are authored game content, separate from the machine program.
// Offsets identify content in the imported asset image; they never execute
// code.
class ActionScriptData {
  public:
    ActionScriptData(std::span<const std::uint8_t> bytes, std::uint32_t base,
                     std::vector<std::uint32_t> entries = {});
    ActionScriptData(std::vector<ActionScriptBlock> blocks, std::vector<std::uint32_t> entries = {});
    ActionScriptData(std::vector<ActionScriptBlock> blocks, std::vector<std::uint32_t> entries,
                     std::vector<ActionInstructionBinding> instructions,
                     std::vector<std::uint32_t> task_entries = {});
    std::uint8_t byte(std::uint32_t offset) const;
    std::uint32_t entry(unsigned script) const;
    unsigned size() const;
    bool compiled() const;
    // Compiled control-flow proofs assume tasks start at declared roots with
    // an empty stack. A replacement may retain its primary task's temporary.
    // Directory entries are always valid roots;
    // callers must declare additional roots during compilation. Raw imported
    // content remains unrestricted for reference fixtures.
    void validate_entry(std::uint32_t offset) const;
    void validate_instruction(std::uint32_t offset) const;
    void validate_response(std::uint32_t instruction, unsigned parameter_bytes) const;
    std::uint32_t engine_identifier(std::uint32_t instruction, std::uint32_t authored_identifier) const;

  private:
    std::vector<ActionScriptBlock> blocks_;
    std::vector<std::uint32_t> entries_;
    std::vector<ActionInstructionBinding> instructions_;
    std::vector<std::uint32_t> task_entries_;
    bool compiled_{};
};

// Imports only the declared authored action-script ranges and script directory,
// not the processor program. Script fetches cannot escape those content ranges.
std::shared_ptr<const ActionScriptData> import_action_scripts(std::span<const std::uint8_t> assets,
                                                              GameVersion version);

struct ActionActorState {
    // Fixed-point world coordinates preserve the authored fractional motion.
    // Each unit here is 1/65536 pixel; velocities use the same units per tick.
    std::array<std::uint32_t, 3> position{0x8000, 0x8000, 0x8000};
    std::array<std::uint32_t, 3> velocity{};
    std::array<std::uint16_t, 8> variables{};
    std::uint16_t animation{0xffff};
    // Script byte operands zero-extend, while INIT_ENTITY accepts a whole word.
    std::uint16_t priority{};
    bool alive{true};
};

// Native equivalents of the source's simple planar/three-axis physics. World
// collision movement can consume the same state instead of using these helpers.
void integrate_action_motion(ActionActorState &actor, bool include_height = false);

enum class ActionRequestKind {
    CallEngine,
    SetTickCallback,
    ClearTickCallback,
    SetDrawCallback,
    SetProjectionCallback,
    SetPhysicsCallback,
    SetAnimationResource,
    ReadGameVariable,
    WriteGameByte,
    WriteGameWord,
    ModifyGameByte,
    ModifyGameWord,
    SetBackgroundX,
    SetBackgroundY,
    SetBackgroundVelocityX,
    SetBackgroundVelocityY,
    AddBackgroundVelocityX,
    AddBackgroundVelocityY,
    AddBackgroundX,
    AddBackgroundY,
    StopBackground
};

struct ActionEngineRequest {
    ActionRequestKind kind{};
    std::uint64_t task{};
    // Compiled programs expose a native operation token here. Raw fixtures use
    // an authored operation/resource/variable identifier for import and tests.
    // A request never executes a machine routine.
    std::uint32_t identifier{};
    std::uint16_t value{}, operation{}, temporary{};
    std::uint32_t parameters{};
};

struct ActionTaskState {
    std::uint64_t id{};
    std::uint32_t cursor{};
    std::uint16_t temporary{}, sleep_frames{};
    unsigned stack_depth{};
};

enum class ActionTickResult { Complete, NeedsEngine, Ended };

class ActionScripts {
  public:
    ActionScripts(std::shared_ptr<const ActionScriptData> data, std::uint32_t entry);
    ~ActionScripts();
    ActionScripts(ActionScripts &&) noexcept;
    ActionScripts &operator=(ActionScripts &&) noexcept;
    ActionScripts(const ActionScripts &) = delete;
    ActionScripts &operator=(const ActionScripts &) = delete;

    ActionActorState &actor();
    const ActionActorState &actor() const;
    std::vector<ActionTaskState> tasks() const;

    // Replace the task chain at an interpreter boundary, preserving the primary
    // task's identity and temporary. Authored replacement reuses that same task;
    // it clears its sleep/stack and discards children without resetting the actor.
    // A suspended/running interpreter cannot be replaced: its source-local
    // continuation has not yet returned. Invalid replacements have no effects.
    void replace(std::uint32_t entry);

    // Runs one logic tick, including newly started tasks in authored order.
    // An engine request suspends this same tick until respond() is called.
    // Every tick has a bounded command budget: invalid content cannot hang it.
    ActionTickResult tick();
    const std::optional<ActionEngineRequest> &request() const;

    // Native engine handlers consume inline operands only for CallEngine.
    // The returned value replaces the calling task's temporary variable for
    // CallEngine/ReadGameVariable. No native handler is provided implicitly.
    // Compiled programs require the proven inline length and reject opaque
    // continuations. Invalid responses leave the request pending for retry.
    // An explicit sleep assignment is a CallEngine side effect, replacing
    // even a compact command's sleep. Zero continues the current task now;
    // nonzero is decremented once by this same interrupted logic tick.
    void respond(std::uint16_t value = 0, unsigned parameter_bytes = 0,
                 std::optional<std::uint16_t> sleep_frames = std::nullopt);

  private:
    struct State;
    std::unique_ptr<State> state_;
};
} // namespace eb::native
