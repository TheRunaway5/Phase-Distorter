#include "eb/native/action_scripts.hpp"
#include <algorithm>
#include <list>
#include <stdexcept>
#include <string>
#include <utility>

namespace eb::native {
namespace {
std::uint32_t content_offset(std::uint32_t pointer) {
    if (pointer < 0xc00000 || pointer >= 0xf00000)
        throw std::runtime_error("Action script references non-content storage");
    return pointer - 0xc00000;
}
std::uint16_t binary(std::uint16_t value, unsigned operation, std::uint16_t operand) {
    switch (operation) {
    case 0:
        return value & operand;
    case 1:
        return value | operand;
    case 2:
        return std::uint16_t(value + operand);
    case 3:
        return value ^ operand;
    default:
        throw std::runtime_error("Invalid action-script arithmetic operation");
    }
}
std::uint32_t velocity(std::uint16_t value) {
    // Authored signed 8.8 velocity becomes 16.16 without signed shifts/overflow.
    return (value & 0x8000 ? (0xffff0000u | value) : value) * 256u;
}
} // namespace

ActionScriptData::ActionScriptData(std::span<const std::uint8_t> bytes, std::uint32_t base,
                                   std::vector<std::uint32_t> entries)
    : ActionScriptData(std::vector<ActionScriptBlock>{{base, {bytes.begin(), bytes.end()}}},
                       std::move(entries)) {}
ActionScriptData::ActionScriptData(std::vector<ActionScriptBlock> blocks, std::vector<std::uint32_t> entries)
    : blocks_(std::move(blocks)), entries_(std::move(entries)) {
    if (blocks_.empty())
        throw std::invalid_argument("Missing action-script content ranges");
    std::sort(blocks_.begin(), blocks_.end(),
              [](const auto &a, const auto &b) { return a.offset < b.offset; });
    std::uint32_t end = 0;
    for (const auto &block : blocks_) {
        if (block.bytes.empty() || block.offset < end || block.offset > 0x300000 ||
            block.bytes.size() > 0x300000 - block.offset)
            throw std::invalid_argument("Invalid action-script content range");
        end = block.offset + std::uint32_t(block.bytes.size());
    }
    for (const auto entry : entries_)
        (void)byte(entry);
}
std::uint8_t ActionScriptData::byte(std::uint32_t offset) const {
    const auto next = std::upper_bound(blocks_.begin(), blocks_.end(), offset,
                                       [](auto at, const auto &block) { return at < block.offset; });
    if (next != blocks_.begin()) {
        const auto &block = *std::prev(next);
        if (offset - block.offset < block.bytes.size())
            return block.bytes[offset - block.offset];
    }
    throw std::out_of_range("Action script left its imported content range at " + std::to_string(offset));
}
std::uint32_t ActionScriptData::entry(unsigned script) const { return entries_.at(script); }
unsigned ActionScriptData::size() const { return unsigned(entries_.size()); }

ActionScriptData::ActionScriptData(std::vector<ActionScriptBlock> blocks, std::vector<std::uint32_t> entries,
                                   std::vector<ActionInstructionBinding> instructions,
                                   std::vector<std::uint32_t> task_entries)
    : ActionScriptData(std::move(blocks), std::move(entries)) {
    instructions_ = std::move(instructions);
    std::sort(instructions_.begin(), instructions_.end(),
              [](const auto &a, const auto &b) { return a.offset < b.offset; });
    for (std::size_t i = 0; i < instructions_.size(); ++i) {
        (void)byte(instructions_[i].offset);
        if (i && instructions_[i - 1].offset == instructions_[i].offset)
            throw std::invalid_argument("Duplicate compiled action instruction");
    }
    compiled_ = true;
    task_entries_ = std::move(task_entries);
    task_entries_.insert(task_entries_.end(), entries_.begin(), entries_.end());
    std::sort(task_entries_.begin(), task_entries_.end());
    task_entries_.erase(std::unique(task_entries_.begin(), task_entries_.end()), task_entries_.end());
    for (const auto entry : task_entries_)
        validate_instruction(entry);
}
bool ActionScriptData::compiled() const { return compiled_; }
void ActionScriptData::validate_entry(std::uint32_t offset) const {
    if (compiled_ && !std::binary_search(task_entries_.begin(), task_entries_.end(), offset))
        throw std::runtime_error("Action task started outside its compiled entrypoints at " +
                                 std::to_string(offset));
}
void ActionScriptData::validate_instruction(std::uint32_t offset) const {
    if (!compiled_)
        return;
    const auto found = std::lower_bound(instructions_.begin(), instructions_.end(), offset,
                                        [](const auto &item, auto at) { return item.offset < at; });
    if (found == instructions_.end() || found->offset != offset)
        throw std::runtime_error("Action script reached uncompiled content at " + std::to_string(offset));
}
void ActionScriptData::validate_response(std::uint32_t instruction, unsigned parameter_bytes) const {
    if (!compiled_)
        return;
    const auto found = std::lower_bound(instructions_.begin(), instructions_.end(), instruction,
                                       [](const auto &item, auto at) { return item.offset < at; });
    if (found == instructions_.end() || found->offset != instruction || !found->native_operation ||
        !found->parameter_bytes)
        throw std::runtime_error("Compiled action service has no proven continuation");
    if (*found->parameter_bytes != parameter_bytes)
        throw std::invalid_argument("Action response differs from its compiled inline parameter length");
}
std::uint32_t ActionScriptData::engine_identifier(std::uint32_t instruction,
                                                  std::uint32_t authored_identifier) const {
    if (!compiled_)
        return authored_identifier;
    const auto found = std::lower_bound(instructions_.begin(), instructions_.end(), instruction,
                                        [](const auto &item, auto at) { return item.offset < at; });
    if (found == instructions_.end() || found->offset != instruction || !found->native_operation)
        throw std::runtime_error("Action instruction has no compiled native operation");
    return *found->native_operation;
}

std::shared_ptr<const ActionScriptData> import_action_scripts(std::span<const std::uint8_t> assets,
                                                              GameVersion version) {
    const unsigned directory = version == GameVersion::JP ? 0x4002f : 0x400d4;
    // Four localization-only scripts at 788..791 and script894 are absent in JP.
    const unsigned count = version == GameVersion::JP ? 890 : 895;
    if (assets.size() < directory + count * 3)
        throw std::invalid_argument("Truncated action-script assets");
    std::vector<std::uint32_t> entries;
    entries.reserve(count);
    for (unsigned i = 0; i < count; ++i) {
        const auto at = directory + i * 3;
        entries.push_back(
            content_offset(assets[at] | unsigned(assets[at + 1]) << 8 | unsigned(assets[at + 2]) << 16));
    }
    // These are the merged spans of src/data/events/*.asm and scripts/*.asm
    // (excluding the directory), verified against both regional link maps.
    // Keeping the small separated C0/C2/C4 content blocks avoids copying or
    // interpreting the engine routines surrounding them.
    struct Range {
        unsigned offset, length;
    };
    constexpr std::array<Range, 8> us{{{0x9af9, 0x10},
                                       {0xad8a, 0x15},
                                       {0x2ffb7, 0x15},
                                       {0x30195, 0x9e5d},
                                       {0x3a043, 0x3fa5},
                                       {0x40e24, 0xc7a},
                                       {0x42172, 0x26a},
                                       {0x4279f, 0xa0}}};
    constexpr std::array<Range, 8> jp{{{0x9ad8, 0x10},
                                       {0xad69, 0x15},
                                       {0x30195, 0x9e57},
                                       {0x3a03d, 0x3f95},
                                       {0x40d70, 0xc7a},
                                       {0x420be, 0x25c},
                                       {0x426dd, 0xa0},
                                       {0x4d0ea, 0x15}}};
    std::vector<ActionScriptBlock> blocks;
    for (const auto range : version == GameVersion::JP ? jp : us) {
        if (range.offset > assets.size() || range.length > assets.size() - range.offset)
            throw std::invalid_argument("Truncated action-script content block");
        const auto bytes = assets.subspan(range.offset, range.length);
        blocks.push_back({range.offset, {bytes.begin(), bytes.end()}});
    }
    return std::make_shared<ActionScriptData>(std::move(blocks), std::move(entries));
}

void integrate_action_motion(ActionActorState &actor, bool include_height) {
    if (actor.alive)
        for (unsigned axis = 0; axis < (include_height ? 3u : 2u); ++axis)
            actor.position[axis] += actor.velocity[axis];
}

struct ActionScripts::State {
    enum class FrameKind { Loop, ShortCall, LongCall };
    struct Frame {
        FrameKind kind;
        std::uint32_t cursor;
        unsigned remaining{};
    };
    struct Task {
        std::uint64_t id;
        std::uint32_t cursor;
        std::uint16_t temporary{}, sleep{};
        std::vector<Frame> stack;
    };
    std::shared_ptr<const ActionScriptData> data;
    ActionActorState actor;
    std::list<Task> tasks;
    std::list<Task>::iterator current;
    std::optional<ActionEngineRequest> request;
    std::uint64_t next_id{1};
    bool in_tick{}, task_running{};
    unsigned commands{};
    std::uint32_t instruction{};

    explicit State(std::shared_ptr<const ActionScriptData> source, std::uint32_t entry)
        : data(std::move(source)) {
        if (!data)
            throw std::invalid_argument("Missing action-script content");
        (void)data->byte(entry);
        data->validate_entry(entry);
        tasks.push_back({next_id++, entry, 0, 0, {}});
        current = tasks.end();
    }
    std::uint8_t read8() {
        const auto value = data->byte(current->cursor);
        // Short pointers and operand reads remain within their authored bank.
        current->cursor = (current->cursor & 0xff0000u) | ((current->cursor + 1) & 0xffffu);
        return value;
    }
    std::uint16_t read16() {
        const unsigned low = read8();
        return low | unsigned(read8()) << 8;
    }
    std::uint32_t read24() {
        const unsigned low = read16();
        return low | unsigned(read8()) << 16;
    }
    std::uint32_t short_target(std::uint16_t offset) const { return (current->cursor & 0xff0000u) | offset; }
    void jump(std::uint32_t target) {
        (void)data->byte(target);
        current->cursor = target;
    }
    std::uint16_t &variable(unsigned id) {
        if (id >= actor.variables.size())
            throw std::runtime_error("Invalid action-script variable");
        return actor.variables[id];
    }
    void push(Frame frame) {
        if (current->stack.size() >= 1024)
            throw std::runtime_error("Action-script stack limit exceeded");
        current->stack.push_back(frame);
    }
    Frame pop(FrameKind expected) {
        if (current->stack.empty() || current->stack.back().kind != expected)
            throw std::runtime_error("Unbalanced action-script control flow");
        const auto frame = current->stack.back();
        current->stack.pop_back();
        return frame;
    }
    void start_loop(unsigned count) {
        count &= 255;
        push({FrameKind::Loop, current->cursor, count ? count : 256});
    }
    void end_task() {
        current = tasks.erase(current);
        task_running = false;
        if (tasks.empty())
            actor.alive = false;
    }
    void ask(ActionRequestKind kind, std::uint32_t identifier = 0, std::uint16_t value = 0,
             std::uint16_t operation = 0) {
        const auto native_identifier = data->engine_identifier(instruction, identifier);
        request = ActionEngineRequest{kind,      current->id,        native_identifier, value,
                                      operation, current->temporary, current->cursor};
    }
    void execute(unsigned opcode) {
        if (opcode >= 0x70) {
            current->sleep = opcode & 15;
            opcode = 0x45 + ((opcode & 0x70) >> 4);
        }
        switch (opcode) {
        case 0x00:
            tasks.clear();
            current = tasks.end();
            actor.alive = false;
            task_running = false;
            return;
        case 0x01:
            start_loop(read8());
            return;
        case 0x02: {
            const auto frame = pop(FrameKind::Loop);
            if (frame.remaining > 1) {
                push({FrameKind::Loop, frame.cursor, frame.remaining - 1});
                jump(short_target(std::uint16_t(frame.cursor)));
            }
            return;
        }
        case 0x03:
            jump(content_offset(read24()));
            return;
        case 0x04: {
            const auto target = content_offset(read24());
            push({FrameKind::LongCall, current->cursor});
            jump(target);
            return;
        }
        case 0x05:
        case 0x1b:
            if (current->stack.empty()) {
                end_task();
            } else {
                const bool far = opcode == 0x05;
                const auto frame = pop(far ? FrameKind::LongCall : FrameKind::ShortCall);
                jump(far ? frame.cursor : short_target(std::uint16_t(frame.cursor)));
            }
            return;
        case 0x06:
            current->sleep = read8();
            return;
        case 0x07: {
            const auto target = short_target(read16());
            (void)data->byte(target);
            if (tasks.size() >= 65536)
                throw std::runtime_error("Action-script task limit exceeded");
            tasks.insert(std::next(current), Task{next_id++, target, 0, 0, {}});
            return;
        }
        case 0x08:
            ask(ActionRequestKind::SetTickCallback, read24());
            return;
        case 0x09:
            current->cursor = (current->cursor & 0xff0000u) | ((current->cursor - 1) & 0xffffu);
            current->sleep = 0xffff;
            return;
        case 0x0a:
        case 0x0b: {
            const auto target = short_target(read16());
            // Despite their historical CALL names, these are conditional jumps.
            if ((current->temporary == 0) == (opcode == 0x0a))
                jump(target);
            return;
        }
        case 0x0c:
            end_task();
            return;
        case 0x0d:
        case 0x18: {
            const auto identifier = read16();
            const auto operation = read8();
            const auto value = opcode == 0x18 ? read8() : read16();
            (void)binary(0, operation, 0);
            ask(opcode == 0x18 ? ActionRequestKind::ModifyGameByte : ActionRequestKind::ModifyGameWord,
                identifier, value, operation);
            return;
        }
        case 0x0e: {
            const auto id = read8();
            variable(id) = read16();
            return;
        }
        case 0x0f:
            ask(ActionRequestKind::ClearTickCallback);
            return;
        case 0x10:
        case 0x11: {
            const auto count = read8();
            std::optional<std::uint32_t> target;
            for (unsigned i = 0; i < count; ++i) {
                const auto candidate = short_target(read16());
                if (i == current->temporary)
                    target = candidate;
            }
            if (target) {
                if (opcode == 0x11)
                    push({FrameKind::ShortCall, current->cursor});
                jump(*target);
            }
            return;
        }
        case 0x12:
        case 0x15: {
            const auto identifier = read16();
            const auto value = opcode == 0x12 ? read8() : read16();
            ask(opcode == 0x12 ? ActionRequestKind::WriteGameByte : ActionRequestKind::WriteGameWord,
                identifier, value);
            return;
        }
        case 0x13:
            if (auto next = std::next(current); next != tasks.end())
                tasks.erase(next);
            return;
        case 0x14: {
            const auto id = read8();
            const auto operation = read8();
            const auto value = read16();
            variable(id) = binary(variable(id), operation, value);
            return;
        }
        case 0x16:
        case 0x17: {
            const auto target = short_target(read16());
            if ((current->temporary == 0) == (opcode == 0x16)) {
                (void)pop(FrameKind::Loop);
                jump(target);
            }
            return;
        }
        case 0x19:
            jump(short_target(read16()));
            return;
        case 0x1a: {
            const auto target = short_target(read16());
            push({FrameKind::ShortCall, current->cursor});
            jump(target);
            return;
        }
        case 0x1c:
            ask(ActionRequestKind::SetAnimationResource, read24());
            return;
        case 0x1d:
            current->temporary = read16();
            return;
        case 0x1e:
            ask(ActionRequestKind::ReadGameVariable, read16());
            return;
        case 0x1f:
            variable(read8()) = current->temporary;
            return;
        case 0x20:
            current->temporary = variable(read8());
            return;
        case 0x21:
            current->sleep = variable(read8());
            return;
        case 0x22:
            ask(ActionRequestKind::SetDrawCallback, read16());
            return;
        case 0x23:
            ask(ActionRequestKind::SetProjectionCallback, read16());
            return;
        case 0x24:
            start_loop(current->temporary);
            return;
        case 0x25:
            ask(ActionRequestKind::SetPhysicsCallback, read16());
            return;
        case 0x26:
            actor.animation = variable(read8());
            return;
        case 0x27: {
            const auto operation = read8();
            current->temporary = binary(current->temporary, operation, read16());
            return;
        }
        case 0x28:
        case 0x29:
        case 0x2a:
            actor.position[opcode - 0x28] = (std::uint32_t(read16()) << 16) | 0x8000;
            return;
        case 0x2b:
        case 0x2c:
        case 0x2d:
            actor.position[opcode - 0x2b] += std::uint32_t(read16()) << 16;
            return;
        case 0x2e:
        case 0x2f:
        case 0x30:
            actor.velocity[opcode - 0x2e] += velocity(read16());
            return;
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x37:
        case 0x38: {
            const auto index = read8();
            const auto value = read16();
            constexpr ActionRequestKind kinds[]{
                ActionRequestKind::SetBackgroundX,         ActionRequestKind::SetBackgroundY,
                ActionRequestKind::SetBackgroundVelocityX, ActionRequestKind::SetBackgroundVelocityY,
                ActionRequestKind::AddBackgroundVelocityX, ActionRequestKind::AddBackgroundVelocityY,
                ActionRequestKind::AddBackgroundX,         ActionRequestKind::AddBackgroundY};
            ask(kinds[opcode - 0x31], index, value);
            return;
        }
        case 0x39:
            actor.velocity.fill(0);
            return;
        case 0x3a:
            ask(ActionRequestKind::StopBackground, read8());
            return;
        case 0x3b:
        case 0x45: {
            const auto frame = read8();
            actor.animation = frame == 255 ? 0xffff : frame;
            return;
        }
        case 0x3c:
        case 0x46:
            ++actor.animation;
            return;
        case 0x3d:
        case 0x47:
            --actor.animation;
            return;
        case 0x3e:
        case 0x48: {
            const auto delta = read8();
            actor.animation = std::uint16_t(actor.animation + (delta < 128 ? delta : delta - 256));
            return;
        }
        case 0x3f:
        case 0x40:
        case 0x41:
            actor.velocity[opcode - 0x3f] = velocity(read16());
            return;
        case 0x49:
        case 0x4a:
        case 0x4b:
            actor.velocity[opcode - 0x49] = velocity(read16());
            return;
        case 0x42:
        case 0x4c:
            ask(ActionRequestKind::CallEngine, read24());
            return;
        case 0x43:
            actor.priority = read8();
            return;
        case 0x44:
            if (current->temporary)
                current->sleep = current->temporary;
            return;
        default:
            throw std::runtime_error("Unsupported action-script command " + std::to_string(opcode));
        }
    }
};

ActionScripts::ActionScripts(std::shared_ptr<const ActionScriptData> data, std::uint32_t entry)
    : state_(std::make_unique<State>(std::move(data), entry)) {}
ActionScripts::~ActionScripts() = default;
ActionScripts::ActionScripts(ActionScripts &&) noexcept = default;
ActionScripts &ActionScripts::operator=(ActionScripts &&) noexcept = default;
ActionActorState &ActionScripts::actor() { return state_->actor; }
const ActionActorState &ActionScripts::actor() const { return state_->actor; }
std::vector<ActionTaskState> ActionScripts::tasks() const {
    std::vector<ActionTaskState> result;
    for (const auto &task : state_->tasks)
        result.push_back({task.id, task.cursor, task.temporary, task.sleep, unsigned(task.stack.size())});
    return result;
}
void ActionScripts::replace(std::uint32_t entry) {
    auto &s = *state_;
    if (s.in_tick || s.request)
        throw std::logic_error("Cannot replace an executing native action interpreter");
    if (!s.actor.alive || s.tasks.empty())
        throw std::logic_error("Cannot replace a terminated native action interpreter");
    (void)s.data->byte(entry);
    s.data->validate_entry(entry);
    // Keep the actual primary task, exactly as the authored free/reallocate
    // sequence does. No arbitrary free-slot residue is introduced.
    s.tasks.erase(std::next(s.tasks.begin()), s.tasks.end());
    auto &primary = s.tasks.front();
    primary.cursor = entry;
    primary.sleep = 0;
    primary.stack.clear();
    s.current = s.tasks.end();
    s.task_running = false;
    s.commands = 0;
}
const std::optional<ActionEngineRequest> &ActionScripts::request() const { return state_->request; }

ActionTickResult ActionScripts::tick() {
    auto &s = *state_;
    if (!s.actor.alive)
        return ActionTickResult::Ended;
    if (s.request)
        return ActionTickResult::NeedsEngine;
    if (!s.in_tick) {
        s.in_tick = true;
        s.task_running = false;
        s.commands = 0;
        s.current = s.tasks.begin();
    }
    while (s.current != s.tasks.end()) {
        if (!s.task_running) {
            if (s.current->sleep) {
                --s.current->sleep;
                ++s.current;
                continue;
            }
            s.task_running = true;
        }
        // Engine responses continue the interrupted command before honoring its
        // compact sleep duration. The duration is counted once in this tick.
        if (s.current->sleep) {
            --s.current->sleep;
            ++s.current;
            s.task_running = false;
            continue;
        }
        if (++s.commands > 100000)
            throw std::runtime_error("Action-script command budget exceeded");
        s.instruction = s.current->cursor;
        s.data->validate_instruction(s.instruction);
        s.execute(s.read8());
        if (s.request)
            return ActionTickResult::NeedsEngine;
    }
    s.in_tick = false;
    return s.actor.alive ? ActionTickResult::Complete : ActionTickResult::Ended;
}

void ActionScripts::respond(std::uint16_t value, unsigned parameter_bytes,
                            std::optional<std::uint16_t> sleep_frames) {
    auto &s = *state_;
    if (!s.request)
        throw std::logic_error("No action-script engine request is pending");
    const auto kind = s.request->kind;
    if (sleep_frames && kind != ActionRequestKind::CallEngine)
        throw std::invalid_argument("Only engine calls can assign the current task sleep");
    if (parameter_bytes && kind != ActionRequestKind::CallEngine)
        throw std::invalid_argument("Only engine calls have inline parameter data");
    if (parameter_bytes > 65535)
        throw std::invalid_argument("Action-script inline parameter range is too large");
    // Validate before committing so an invalid response is retryable.
    s.data->validate_response(s.instruction, parameter_bytes);
    auto cursor = s.current->cursor;
    for (unsigned i = 0; i < parameter_bytes; ++i) {
        (void)s.data->byte(cursor);
        cursor = (cursor & 0xff0000u) | ((cursor + 1) & 0xffffu);
    }
    s.current->cursor = cursor;
    if (kind == ActionRequestKind::CallEngine || kind == ActionRequestKind::ReadGameVariable)
        s.current->temporary = value;
    if (sleep_frames)
        s.current->sleep = *sleep_frames;
    s.request.reset();
}
} // namespace eb::native
