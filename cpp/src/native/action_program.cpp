#include "eb/native/action_program.hpp"
#include <compare>
#include <deque>
#include <map>
#include <set>
#include <stdexcept>

namespace eb::native {
namespace {
enum class FrameKind { Loop, ShortCall, LongCall };
struct Frame {
    FrameKind kind;
    std::uint32_t cursor;
    unsigned remaining = 0;
    bool variable_count = false;
    auto operator<=>(const Frame &) const = default;
};
struct Flow {
    std::uint32_t cursor;
    std::vector<Frame> stack;
    auto operator<=>(const Flow &) const = default;
};
struct TemporaryFlow {
    bool reads{}, writes{}, live{};
    bool entry{};
    unsigned opcode{};
    const Flow *taken{};
    std::vector<const Flow *> successors, predecessors;
    std::optional<std::uint32_t> operation;
};
bool reads_temporary(unsigned opcode) {
    switch (opcode) {
    case 0x0a:
    case 0x0b:
    case 0x10:
    case 0x11:
    case 0x16:
    case 0x17:
    case 0x1f:
    case 0x24:
    case 0x27:
    case 0x44:
        return true;
    default:
        return false;
    }
}
struct Reader {
    const ActionScriptData &source;
    std::map<std::uint32_t, std::uint8_t> &copied;
    std::set<std::uint32_t> &operands;
    std::uint32_t cursor;
    bool first = true;
    unsigned read8() {
        const auto value = source.byte(cursor);
        if (!first)
            operands.insert(cursor);
        first = false;
        copied.emplace(cursor, value);
        cursor = (cursor & 0xff0000) | ((cursor + 1) & 0xffff);
        return value;
    }
    unsigned read16() {
        const auto low = read8();
        return low | read8() << 8;
    }
    unsigned read24() {
        const auto low = read16();
        return low | read8() << 16;
    }
    unsigned short_target(unsigned offset) const { return (cursor & 0xff0000) | offset; }
    unsigned long_target() {
        const auto pointer = read24();
        if (pointer < 0xc00000 || pointer >= 0xf00000)
            throw std::runtime_error("Action-program branch references non-content storage");
        return pointer - 0xc00000;
    }
    void skip(unsigned count) {
        for (unsigned i = 0; i < count; ++i)
            (void)read8();
    }
};
} // namespace

CompiledActionProgram::CompiledActionProgram(std::shared_ptr<const ActionScriptData> source,
                                             GameVersion version,
                                             std::span<const std::uint32_t> extra_entrypoints)
    : version_(version) {
    if (!source)
        throw std::invalid_argument("Missing authored action-script content");
    ActionBindings bindings(version);
    std::vector<std::uint32_t> entries;
    std::deque<const Flow *> pending;
    std::set<Flow> discovered;
    std::map<const Flow *, TemporaryFlow> temporary_flow;
    TemporaryFlow *current_temporary = nullptr;
    std::size_t stored_frames = 0;
    std::map<std::uint32_t, std::size_t> emitted;
    std::map<std::uint32_t, std::uint8_t> copied;
    std::set<std::uint32_t> operands, task_entries;
    std::vector<ActionInstructionBinding> instructions;
    const auto enqueue = [&](unsigned target, const std::vector<Frame> &stack = std::vector<Frame>{},
                             bool inherits_temporary = true) {
        (void)source->byte(target);
        if (stack.size() > 1024)
            throw std::runtime_error("Action-program compile stack limit exceeded");
        Flow next{target, stack};
        auto stored = discovered.find(next);
        if (stored == discovered.end()) {
            if (discovered.size() >= 200000 || stored_frames + stack.size() > 1000000)
                throw std::runtime_error("Action-program control-flow budget exceeded");
            stored = discovered.insert(std::move(next)).first;
            stored_frames += stack.size();
            pending.push_back(&*stored);
        }
        if (current_temporary && inherits_temporary)
            current_temporary->successors.push_back(&*stored);
        else {
            temporary_flow[&*stored].entry = true;
            task_entries.insert(target);
        }
        return &*stored;
    };
    for (unsigned i = 0; i < source->size(); ++i) {
        entries.push_back(source->entry(i));
        enqueue(entries.back());
    }
    for (const auto entry : extra_entrypoints)
        enqueue(entry);
    if (pending.empty())
        throw std::invalid_argument("Action program has no entrypoints");

    while (!pending.empty()) {
        const auto &flow = *pending.front();
        pending.pop_front();
        const auto start = flow.cursor;
        auto stack = flow.stack;
        Reader reader{*source, copied, operands, start};
        const auto encoded = reader.read8();
        const auto opcode = encoded >= 0x70 ? 0x45 + ((encoded & 0x70) >> 4) : encoded;
        auto &temporary = temporary_flow[&flow];
        current_temporary = &temporary;
        temporary.opcode = opcode;
        temporary.reads = reads_temporary(opcode);
        temporary.writes = opcode == 0x1d || opcode == 0x1e || opcode == 0x20 || opcode == 0x27 ||
                           opcode == 0x42 || opcode == 0x4c;
        const auto [stored, first_visit] = emitted.emplace(start, instructions.size());
        if (first_visit)
            instructions.push_back({start, std::nullopt, std::nullopt});
        const auto instruction_index = stored->second;
        bool fallthrough = true;
        std::optional<ActionEngineRequest> request;
        const auto ask = [&](ActionRequestKind kind, unsigned identifier = 0, unsigned value = 0,
                             unsigned operation = 0) {
            request = ActionEngineRequest{
                kind, 0, identifier, std::uint16_t(value), std::uint16_t(operation), 0, reader.cursor};
        };
        using K = ActionRequestKind;
        switch (opcode) {
        case 0x00: // End actor.
        case 0x09: // Halt repeats this same instruction after its wait.
        case 0x0c: // End task.
            fallthrough = false;
            break;
        case 0x05:
        case 0x1b: {
            const auto kind = opcode == 0x05 ? FrameKind::LongCall : FrameKind::ShortCall;
            if (!stack.empty() && stack.back().kind == kind) {
                const auto target = stack.back().cursor;
                stack.pop_back();
                enqueue(kind == FrameKind::LongCall ? target : reader.short_target(target & 0xffff), stack);
            }
            fallthrough = false;
            break;
        }
        case 0x01: {
            const auto count = reader.read8();
            stack.push_back({FrameKind::Loop, reader.cursor, count == 0 ? 256 : count});
            break;
        }
        case 0x24:
            // A temporary count can be any byte, including zero (256). Keep
            // that bound, and allow an exit after every possible iteration.
            stack.push_back({FrameKind::Loop, reader.cursor, 256, true});
            break;
        case 0x06:
        case 0x1f:
        case 0x20:
        case 0x21:
        case 0x26:
        case 0x3b:
        case 0x3e:
        case 0x43:
        case 0x45:
        case 0x48:
            reader.skip(1);
            break;
        case 0x02:
            if (!stack.empty() && stack.back().kind == FrameKind::Loop) {
                auto &frame = stack.back();
                if (frame.remaining > 1) {
                    --frame.remaining;
                    enqueue(reader.short_target(frame.cursor & 0xffff), stack);
                    if (!frame.variable_count) {
                        fallthrough = false;
                        break;
                    }
                }
                stack.pop_back();
            } else {
                // Entering a loop end without its frame is invalid at runtime.
                // Other entrypoints/contexts can still compile the same bytes.
                fallthrough = false;
            }
            break;
        case 0x13:
        case 0x39:
        case 0x3c:
        case 0x3d:
        case 0x44:
        case 0x46:
        case 0x47:
            break;
        case 0x03:
            enqueue(reader.long_target(), stack);
            fallthrough = false;
            break;
        case 0x04: {
            const auto target = reader.long_target();
            stack.push_back({FrameKind::LongCall, reader.cursor});
            enqueue(target, stack);
            fallthrough = false;
            break;
        }
        case 0x07:
            // A child starts with its own zero temporary; reads in the new task
            // cannot observe the parent's current result.
            enqueue(reader.short_target(reader.read16()), {}, false);
            break;
        case 0x0a:
        case 0x0b:
            temporary.taken = enqueue(reader.short_target(reader.read16()), stack);
            break;
        case 0x16:
        case 0x17: {
            const auto target = reader.short_target(reader.read16());
            if (!stack.empty() && stack.back().kind == FrameKind::Loop) {
                auto broken = stack;
                broken.pop_back();
                enqueue(target, broken);
            }
            break;
        }
        case 0x1a: {
            const auto target = reader.short_target(reader.read16());
            stack.push_back({FrameKind::ShortCall, reader.cursor});
            enqueue(target, stack);
            fallthrough = false;
            break;
        }
        case 0x19:
            enqueue(reader.short_target(reader.read16()), stack);
            fallthrough = false;
            break;
        case 0x08:
            ask(K::SetTickCallback, reader.read24());
            break;
        case 0x0d:
        case 0x18: {
            const auto identifier = reader.read16();
            const auto operation = reader.read8();
            const auto value = opcode == 0x18 ? reader.read8() : reader.read16();
            ask(opcode == 0x18 ? K::ModifyGameByte : K::ModifyGameWord, identifier, value, operation);
            break;
        }
        case 0x0e:
        case 0x27:
            reader.skip(3);
            break;
        case 0x0f:
            ask(K::ClearTickCallback);
            break;
        case 0x10:
        case 0x11: {
            const auto count = reader.read8();
            std::vector<unsigned> targets;
            for (unsigned i = 0; i < count; ++i)
                targets.push_back(reader.short_target(reader.read16()));
            auto called = stack;
            if (opcode == 0x11)
                called.push_back({FrameKind::ShortCall, reader.cursor});
            for (const auto target : targets)
                enqueue(target, called);
            break; // Out-of-range selection falls through the entire table.
        }
        case 0x12:
        case 0x15: {
            const auto identifier = reader.read16();
            const auto value = opcode == 0x12 ? reader.read8() : reader.read16();
            ask(opcode == 0x12 ? K::WriteGameByte : K::WriteGameWord, identifier, value);
            break;
        }
        case 0x14:
            reader.skip(4);
            break;
        case 0x1c:
            ask(K::SetAnimationResource, reader.read24());
            break;
        case 0x1d:
        case 0x28:
        case 0x29:
        case 0x2a:
        case 0x2b:
        case 0x2c:
        case 0x2d:
        case 0x2e:
        case 0x2f:
        case 0x30:
        case 0x3f:
        case 0x40:
        case 0x41:
        case 0x49:
        case 0x4a:
        case 0x4b:
            reader.skip(2);
            break;
        case 0x1e:
            ask(K::ReadGameVariable, reader.read16());
            break;
        case 0x22:
            ask(K::SetDrawCallback, reader.read16());
            break;
        case 0x23:
            ask(K::SetProjectionCallback, reader.read16());
            break;
        case 0x25:
            ask(K::SetPhysicsCallback, reader.read16());
            break;
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x37:
        case 0x38: {
            const auto index = reader.read8();
            const auto value = reader.read16();
            constexpr K kinds[]{K::SetBackgroundX,         K::SetBackgroundY,
                                K::SetBackgroundVelocityX, K::SetBackgroundVelocityY,
                                K::AddBackgroundVelocityX, K::AddBackgroundVelocityY,
                                K::AddBackgroundX,         K::AddBackgroundY};
            ask(kinds[opcode - 0x31], index, value);
            break;
        }
        case 0x3a:
            ask(K::StopBackground, reader.read8());
            break;
        case 0x42:
        case 0x4c:
            ask(K::CallEngine, reader.read24());
            break;
        default:
            // Preserve the invalid instruction as an explicit execution error,
            // but don't interpret the following bytes or reject other entries.
            if (first_visit)
                ++stats_.unsupported_bytecodes;
            fallthrough = false;
            break;
        }
        if (request) {
            auto operation = bindings.compile(*request, *source);
            const bool supported = operation.operation != NativeAction::Unsupported;
            const bool length_known =
                request->kind != K::CallEngine || supported || operation.inline_parameters_known;
            if (first_visit) {
                const auto token = std::uint32_t(operations_.size());
                instructions[instruction_index].native_operation = token;
                if (length_known)
                    instructions[instruction_index].parameter_bytes =
                        request->kind == K::CallEngine ? operation.parameter_bytes : 0;
                operations_.push_back(operation);
                diagnostics_.push_back({start, request->identifier, request->kind, length_known});
                if (!supported)
                    ++stats_.unsupported_operations;
                if (!length_known)
                    ++stats_.opaque_call_boundaries;
            }
            if (request->kind == K::CallEngine) {
                temporary.operation = instructions[instruction_index].native_operation;
                temporary.reads = operation.temporary_input == ActionTemporaryInput::Observed;
                if (operation.temporary_input == ActionTemporaryInput::Forwarded)
                    temporary.writes = false; // The old dependency survives in the returned bits.
            }
            if (!supported && operation.temporary_input == ActionTemporaryInput::Observed)
                // Unbound globals/services could alias task storage in the
                // source. Do not prove a transport result unused across them.
                temporary.reads = true;
            if (!length_known) {
                fallthrough = false;
            } else {
                reader.skip(operation.parameter_bytes);
            }
        }
        if (fallthrough)
            enqueue(reader.cursor, stack);
    }
    for (auto &[node, effect] : temporary_flow)
        for (const auto successor : effect.successors)
            temporary_flow.at(successor).predecessors.push_back(node);
    // Successful ordinary first/second/initial refreshes return an incidental
    // graphics destination in the source, which is always nonzero. Preserve
    // only that predicate, never invent its scalar value in the native world.
    // This intentionally handles adjacent tests only. Every incoming stack
    // context must establish the predicate; task entry, intervening consumers,
    // unknown calls and overlapping instruction operands all forbid rewriting.
    // The optional return oracle checks all imported geometry/allocation starts
    // and the three authored consumers in both game versions.
    std::map<std::uint32_t, bool> lower_nonzero;
    for (const auto &[node, effect] : temporary_flow) {
        if (effect.opcode != 0x0b)
            continue;
        auto decision = lower_nonzero.emplace(node->cursor, true).first;
        bool proven = !effect.entry && !effect.predecessors.empty() && !operands.contains(node->cursor);
        for (const auto predecessor : effect.predecessors) {
            const auto &prior = temporary_flow.at(predecessor);
            if (!prior.operation || prior.reads || !prior.writes ||
                ((predecessor->cursor & 0xff0000) | ((predecessor->cursor + 4) & 0xffff)) != node->cursor) {
                proven = false;
                break;
            }
            const auto operation = operations_[*prior.operation].operation;
            if (operation != NativeAction::SelectFourFirst && operation != NativeAction::SelectFourSecond &&
                operation != NativeAction::SelectFourInitial) {
                proven = false;
                break;
            }
        }
        decision->second &= proven;
    }
    for (auto &[node, effect] : temporary_flow) {
        if (effect.opcode == 0x0b && lower_nonzero.at(node->cursor)) {
            copied.at(node->cursor) = 0x19; // Same-width authored short jump.
            effect.reads = false;
            effect.successors = {effect.taken};
        }
        effect.predecessors.clear();
    }
    // Solve may-read liveness backwards over the already bounded, stack-aware
    // graph. Calls/loops retain their return contexts; only task creation cuts
    // temporary inheritance. Cycles without reads do not invent observable data.
    std::deque<const Flow *> live;
    for (auto &[node, effect] : temporary_flow) {
        for (const auto successor : effect.successors)
            temporary_flow.at(successor).predecessors.push_back(node);
        if (effect.reads) {
            effect.live = true;
            live.push_back(node);
        }
    }
    while (!live.empty()) {
        const auto node = live.front();
        live.pop_front();
        for (const auto predecessor : temporary_flow.at(node).predecessors) {
            auto &effect = temporary_flow.at(predecessor);
            if (!effect.writes && !effect.live) {
                effect.live = true;
                live.push_back(predecessor);
            }
        }
    }
    for (unsigned token = 0; token < operations_.size(); ++token)
        operations_[token].discard_result = diagnostics_[token].kind == ActionRequestKind::CallEngine &&
                                            diagnostics_[token].inline_length_known;
    for (const auto &[node, effect] : temporary_flow)
        if (effect.operation)
            for (const auto successor : effect.successors)
                if (temporary_flow.at(successor).live)
                    operations_[*effect.operation].discard_result = false;
    std::vector<ActionScriptBlock> blocks;
    for (const auto &[offset, byte] : copied) {
        if (blocks.empty() || blocks.back().offset + blocks.back().bytes.size() != offset)
            blocks.push_back({offset, {}});
        blocks.back().bytes.push_back(byte);
    }
    stats_.instructions = instructions.size();
    stats_.operations = operations_.size();
    stats_.imported_bytes = copied.size();
    scripts_ = std::make_shared<ActionScriptData>(
        std::move(blocks), std::move(entries), std::move(instructions),
        std::vector<std::uint32_t>(task_entries.begin(), task_entries.end()));
}

std::shared_ptr<const ActionScriptData> CompiledActionProgram::scripts() const { return scripts_; }
const BoundAction &CompiledActionProgram::operation(std::uint32_t token) const {
    return operations_.at(token);
}
const ActionOperationDiagnostic &CompiledActionProgram::diagnostic(std::uint32_t token) const {
    return diagnostics_.at(token);
}
const ActionProgramStats &CompiledActionProgram::stats() const { return stats_; }
} // namespace eb::native
