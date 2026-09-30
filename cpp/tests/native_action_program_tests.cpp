#include "eb/native/action_program.hpp"
#include <functional>
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native;
void check(bool condition, const char *message) {
    if (!condition)
        throw std::runtime_error(message);
}
void rejects(const std::function<void()> &action, const char *message) {
    try {
        action();
    } catch (const std::exception &) {
        return;
    }
    throw std::runtime_error(message);
}
auto data(std::initializer_list<std::uint8_t> bytes, std::vector<std::uint32_t> entries = {0}) {
    return std::make_shared<ActionScriptData>(std::span(bytes.begin(), bytes.size()), 0, std::move(entries));
}
void normalize_operations() {
    auto source = data({0x42, 0x85, 0xa6, 0xc0, 0x4d, 0, 0x1f, 0, 0x06, 1, 0x09});
    CompiledActionProgram program(source, eb::GameVersion::US);
    check(program.stats().unsupported_bytecodes == 0, "Inline engine operands must not become opcodes");
    check(program.stats().operations == 1 && program.scripts()->compiled(), "Program binds before execution");
    source.reset();
    ActionScripts scripts(program.scripts(), 0);
    check(scripts.tick() == ActionTickResult::NeedsEngine && scripts.request()->identifier == 0,
          "Running scripts expose native tokens, not authored operation identifiers");
    const auto &bound = program.operation(scripts.request()->identifier);
    check(bound.operation == NativeAction::SetMovementSpeed && bound.operand == 0x4d,
          "Bound operation retains authored operand");
    ActorActionContext actor;
    ActionSceneContext scene;
    rejects([&] { scripts.respond(0, 0); }, "Compiled inline operands require their exact response length");
    check(bool(scripts.request()), "Rejected inline length must leave the service pending");
    const auto response = apply_action(bound, scripts.request()->temporary, scripts.actor(), actor, scene);
    scripts.respond(response.value, response.parameter_bytes);
    scripts.tick();
    check(actor.movement_speed == 0x4d && scripts.actor().variables[0] == 0x4d,
          "Compiled script resumes with native result");
    check(program.diagnostic(0).authored_identifier == 0xc0a685 && program.diagnostic(0).inline_length_known,
          "Provenance stays in import diagnostics");
    rejects([&] { program.operation(0xc0a685); }, "Source identifier is not a native operation token");
}
void opaque_boundaries() {
    auto source = data(
        {0x42, 0x78, 0x56, 0xc4, 0x4d, 0x4d, 0x4d, 0x4d, 0x1e, 0x12, 0x34, 0x1f, 0, 0x06, 1, 0x09}, {0, 8});
    CompiledActionProgram program(source, eb::GameVersion::US);
    check(program.stats().opaque_call_boundaries == 1 && program.stats().unsupported_bytecodes == 0,
          "Unknown call leaves its unknown operand bytes opaque");
    ActionScripts opaque(program.scripts(), 0);
    opaque.tick();
    check(!program.diagnostic(opaque.request()->identifier).inline_length_known,
          "World can reject fabricated responses to opaque calls");
    rejects([&] { opaque.respond(); }, "Compiled opaque calls cannot guess their continuation");
    check(bool(opaque.request()), "Rejected opaque response must preserve its suspended request");
    ActionScripts other(program.scripts(), 8);
    other.tick();
    check(program.diagnostic(other.request()->identifier).inline_length_known,
          "Fixed-width unsupported services do not hide later instructions");
    other.respond(99);
    check(other.tick() == ActionTickResult::Complete && other.actor().variables[0] == 99,
          "Unrelated valid entry remains executable");
    auto overlapping = data({0x42, 0x78, 0x56, 0xc4, 0x09}, {0, 4});
    CompiledActionProgram overlap(overlapping, eb::GameVersion::US);
    ActionScripts call(overlap.scripts(), 0);
    call.tick();
    check(!overlap.diagnostic(call.request()->identifier).inline_length_known,
          "Opaque call remains opaque even when following byte is another valid entry");
}
void content_bank_control_flow() {
    auto source =
        std::make_shared<ActionScriptData>(std::vector<ActionScriptBlock>{{0, {0x01, 2, 0x03, 0x10, 0, 0xc1}},
                                                                          {0x10002, {0x06, 1, 0x19, 0x10, 0}},
                                                                          {0x10010, {0x02, 0x06, 1, 0x09}}},
                                           std::vector<std::uint32_t>{0});
    CompiledActionProgram program(source, eb::GameVersion::US);
    ActionScripts scripts(program.scripts(), 0);
    check(scripts.tick() == ActionTickResult::Complete && scripts.tasks()[0].cursor == 0x10004,
          "Loop rewind compiles its current-bank destination");
    check(scripts.tick() == ActionTickResult::Complete && scripts.tasks()[0].cursor == 0x10013,
          "Loop termination preserves its valid continuation");

    auto calls =
        std::make_shared<ActionScriptData>(std::vector<ActionScriptBlock>{{0, {0x1a, 0x10, 0}},
                                                                          {0x10, {0x03, 0x20, 0, 0xc1}},
                                                                          {0x10003, {0x06, 1, 0x09}},
                                                                          {0x10020, {0x1b}}},
                                           std::vector<std::uint32_t>{0});
    CompiledActionProgram call_program(calls, eb::GameVersion::US);
    ActionScripts short_call(call_program.scripts(), 0);
    check(short_call.tick() == ActionTickResult::Complete && short_call.tasks()[0].cursor == 0x10005,
          "Short return compiles current-bank continuation after a long jump");

    auto single = std::make_shared<ActionScriptData>(
        std::vector<ActionScriptBlock>{{0, {0x01, 1, 0x03, 0x10, 0, 0xc1}}, {0x10010, {0x02, 0x06, 1, 0x09}}},
        std::vector<std::uint32_t>{0});
    CompiledActionProgram single_program(single, eb::GameVersion::US);
    ActionScripts single_loop(single_program.scripts(), 0);
    check(single_loop.tick() == ActionTickResult::Complete && single_loop.tasks()[0].cursor == 0x10013,
          "Loop one never invents an unreachable bank-local rewind");

    auto twice =
        std::make_shared<ActionScriptData>(std::vector<ActionScriptBlock>{{0, {0x01, 2, 0x03, 0x10, 0, 0xc1}},
                                                                          {0x10010, {0x02}},
                                                                          {0x10002, {0x03, 0x20, 0, 0xc2}},
                                                                          {0x20020, {0x02, 0x06, 1, 0x09}}},
                                           std::vector<std::uint32_t>{0});
    CompiledActionProgram twice_program(twice, eb::GameVersion::US);
    ActionScripts twice_loop(twice_program.scripts(), 0);
    check(twice_loop.tick() == ActionTickResult::Complete && twice_loop.tasks()[0].cursor == 0x20023,
          "Loop two compiles exactly its two bank-changing iterations");
}
void token_width() {
    std::vector<std::uint8_t> bytes(300, 0x0f);
    for (const auto byte : {0x31, 3, 5, 0, 0x06, 1, 0x09})
        bytes.push_back(std::uint8_t(byte));
    auto source = std::make_shared<ActionScriptData>(bytes, 0, std::vector<std::uint32_t>{0});
    CompiledActionProgram program(source, eb::GameVersion::US);
    ActionScripts scripts(program.scripts(), 0);
    for (unsigned i = 0; i < 300; ++i) {
        scripts.tick();
        check(program.operation(scripts.request()->identifier).operation == NativeAction::ClearTickCallback,
              "Clear callback compiles as native operation");
        scripts.respond();
    }
    scripts.tick();
    check(scripts.request()->identifier == 300 &&
              scripts.request()->kind == ActionRequestKind::SetBackgroundX,
          "Native token is independent of original byte-sized identifier");
    check(program.diagnostic(300).authored_identifier == 3,
          "Original background index is diagnostic content");
}
void recursive_import() {
    auto source = data({0x1a, 0, 0});
    rejects([&] { CompiledActionProgram recursive(source, eb::GameVersion::US); },
            "Recursive compilation must terminate at its declared stack budget");
}
void discarded_results() {
    const auto discarded = [](std::vector<std::uint8_t> suffix) {
        std::vector<std::uint8_t> bytes{0x42, 0xbf, 0xa4, 0xc0}; // Initial appearance.
        bytes.insert(bytes.end(), suffix.begin(), suffix.end());
        auto source = std::make_shared<ActionScriptData>(bytes, 0, std::vector<std::uint32_t>{0});
        return CompiledActionProgram(source, eb::GameVersion::US).operation(0).discard_result;
    };
    check(discarded({0x09}), "A halted task cannot observe an appearance transport result");
    check(discarded({0x1d, 7, 0, 0x1f, 0, 0x09}), "Literal overwrite kills old result");
    check(discarded({0x20, 1, 0x1f, 0, 0x09}), "Variable load kills old result");
    check(discarded({0x42, 0x73, 0xa6, 0xc0, 0x1f, 0, 0x09}),
          "Native getter overwrites without consuming old result");
    check(!discarded({0x42, 0x5f, 0xa6, 0xc0, 0x09}), "Native direction consumes prior result");
    check(!discarded({0x1f, 0, 0x09}), "Actor variable store observes result");
    check(!discarded({0x27, 0, 0xff, 0, 0x09}), "Arithmetic consumes result");
    check(!discarded({0x44, 0x09}), "Temporary wait consumes result");
    check(!discarded({0x24, 0x02, 0x09}), "Temporary loop count consumes result");
    check(!discarded({0x10, 0, 0x09}), "Dispatch remains conservatively live");
    check(!discarded({0x1e, 0x12, 0x34, 0x09}), "Unbound global could alias task storage");
    check(!discarded({0x42, 0x12, 0x34, 0xc4}), "Opaque engine call can consume result");
    check(discarded({0x42, 0x41, 0xa8, 0xc0}),
          "Audited unported inline sound overwrites the incoming result");
    check(discarded({0x42, 0x8d, 0xa8, 0xc0}),
          "Queue-text obtains all inputs from authored operands, not the previous pose result");
    check(discarded({0x42, 0x46, 0x6e, 0xc4}),
          "Audited unported scene-state setter overwrites the incoming result");
    check(!discarded({0x42, 0x8c, 0x25, 0xc4, 0x1f, 0, 0x09}),
          "8-bit window setup preserves the result high byte for a later store");
    check(discarded({0x42, 0x8c, 0x25, 0xc4, 0x06, 3, 0x42, 0x6e, 0xaa, 0xc0}),
          "Forwarded high byte dies at a later input-independent opaque call");
    check(!discarded({0x42, 0x8c, 0x25, 0xc4, 0x06, 3, 0x0b, 4, 0, 0x09}),
          "Forwarded high byte remains live across a wait and zero test");
    check(discarded({0x08, 0xe0, 0xd7, 0xc0, 0x1d, 7, 0, 0x09}),
          "Audited callback installation preserves a later explicit overwrite");
    check(!discarded({0x08, 0xe0, 0xd7, 0xc0, 0x1f, 0, 0x09}),
          "Callback installation does not itself kill the task temporary");
    {
        auto opaque = data({0x42, 0xbf, 0xa4, 0xc0, 0x42, 0x41, 0xa8, 0xc0});
        CompiledActionProgram contract(opaque, eb::GameVersion::US);
        check(contract.stats().opaque_call_boundaries == 1 &&
                  contract.operation(1).operation == NativeAction::Unsupported &&
                  !contract.diagnostic(1).inline_length_known,
              "An input effect contract must not make an opaque call executable");
        ActionScripts task(contract.scripts(), 0);
        task.tick();
        task.respond(0);
        task.tick();
        check(task.request() && task.request()->identifier == 1,
              "Unported sound remains an explicit suspended service request");
        rejects([&] { (void)contract.scripts()->byte(8); },
                "Input contract must not guess missing inline operands");
    }
    check(discarded({0x06, 1, 0x19, 4, 0}), "Read-free waiting cycle cannot observe result");
    check(!discarded({0x06, 1, 0x1f, 0, 0x19, 4, 0}), "Read after a wait remains live");
    // Spawned task reads its own zero, not the parent's call result.
    check(discarded({0x07, 8, 0, 0x09, 0x1f, 0, 0x09}), "Child task cuts temporary inheritance");
    // A short helper returns to two callers. One reads its result, so the
    // single compiled operation must retain it for every calling context.
    auto contexts =
        data({0x1a, 10, 0, 0x09, 0x1a, 10, 0, 0x1f, 0, 0x09, 0x42, 0xbf, 0xa4, 0xc0, 0x1b}, {0, 4});
    CompiledActionProgram shared(contexts, eb::GameVersion::US);
    check(!shared.operation(0).discard_result, "Live caller preserves shared helper return");
    auto dead = data({0x1a, 4, 0, 0x09, 0x42, 0xbf, 0xa4, 0xc0, 0x1b});
    CompiledActionProgram unused(dead, eb::GameVersion::US);
    check(unused.operation(0).discard_result, "Unused helper return is proven across short call");
    // Window setup forwards the high byte through a helper return and a wait.
    // A caller store must keep the original appearance result live, while a
    // caller literal overwrite may discard it.
    for (const bool observed : {false, true}) {
        std::vector<std::uint8_t> bytes{0x1a, 12, 0, 0x06, 2};
        if (observed)
            bytes.insert(bytes.end(), {0x1f, 0, 0x09});
        else
            bytes.insert(bytes.end(), {0x1d, 7, 0, 0x1f, 0, 0x09});
        bytes.resize(12, 0x09);
        bytes.insert(bytes.end(), {0x42, 0xbf, 0xa4, 0xc0, 0x42, 0x8c, 0x25, 0xc4, 0x1b});
        CompiledActionProgram returned(
            std::make_shared<ActionScriptData>(bytes, 0, std::vector<std::uint32_t>{0}), eb::GameVersion::US);
        check(returned.operation(0).discard_result != observed,
              "Forwarded result liveness must survive helper returns and waits");
        check(returned.operation(1).operation == NativeAction::Unsupported &&
                  returned.diagnostic(1).inline_length_known,
              "Known zero-operand length does not implement the unported window service");
        for (const unsigned incoming : {0x1200u, 0x8000u}) {
            ActionScripts task(returned.scripts(), 0);
            task.tick();
            task.respond(incoming);
            task.tick();
            check(task.request()->temporary == incoming, "Forwarded service receives original result");
            // Test host models the source-proven return; production remains suspended.
            task.respond((incoming & 0xff00) | 0xef);
            for (unsigned tick = 0; tick < 3; ++tick)
                task.tick();
            check(task.actor().variables[0] == (observed ? ((incoming & 0xff00) | 0xef) : 7),
                  "Caller must observe forwarded high byte exactly when liveness retains it");
        }
    }
    // Deterministic observational proof: change a discarded transport return
    // and compare all published gameplay state after each authored tick.
    auto content = data({0x42, 0xbf, 0xa4, 0xc0, 0x07, 13, 0, 0x06, 1, 0x1d, 9, 0, 0x09, 0x1f, 0, 0x09});
    CompiledActionProgram proof(content, eb::GameVersion::US);
    check(proof.operation(0).discard_result, "Wait/spawn/literal overwrite should discard result");
    ActionScripts a(proof.scripts(), 0), b(proof.scripts(), 0);
    a.tick();
    b.tick();
    a.respond(0x1234);
    b.respond(0xabcd);
    for (unsigned tick = 0; tick < 5; ++tick) {
        check(a.tick() == b.tick(), "Discarded transport result changed task progress");
        check(a.actor().variables == b.actor().variables && a.actor().position == b.actor().position &&
                  a.actor().animation == b.actor().animation && a.actor().alive == b.actor().alive,
              "Discarded transport result changed observable actor state");
    }
}
void nonzero_appearance_predicates() {
    // Only the observed predicate is normalized; no host resource identifier
    // or made-up graphics address becomes the script's temporary value.
    for (const auto selector : {0xa8u, 0xb2u, 0xbfu}) {
        std::vector<std::uint8_t> bytes{0x06, 1, 0x42, std::uint8_t(selector), 0xa4, 0xc0, 0x0b, 0, 0,
                                        0x1f, 0, 0x09};
        auto source = std::make_shared<ActionScriptData>(bytes, 0, std::vector<std::uint32_t>{0});
        CompiledActionProgram program(source, eb::GameVersion::US);
        check(program.scripts()->byte(6) == 0x19 && source->byte(6) == 0x0b,
              "Known nonzero appearance predicate becomes an owned unconditional branch");
        check(program.operation(0).discard_result,
              "Removed zero-test and unreachable fallthrough must not retain transport result");
        rejects([&] { ActionScripts invalid(program.scripts(), 6); },
                "An arbitrary task start must not bypass the selector proof");
        ActionScripts task(program.scripts(), 0);
        for (unsigned i = 0; i < 3; ++i) {
            check(task.tick() == ActionTickResult::Complete, "Authored animation wait must remain");
            check(task.tick() == ActionTickResult::NeedsEngine, "Selector must run again after backedge");
            task.respond(0); // Deliberately absent/incidental value, now unobservable.
        }
    }
    const auto unchanged = [](std::shared_ptr<ActionScriptData> source, unsigned branch,
                              std::span<const std::uint32_t> extras = {}) {
        CompiledActionProgram program(source, eb::GameVersion::US, extras);
        check(program.scripts()->byte(branch) == 0x0b,
              "Unproven appearance predicate must preserve its authored zero test");
    };
    // An independently entered task starts with zero even if this instruction
    // also has a selector predecessor in another traversal.
    unchanged(data({0x42, 0xa8, 0xa4, 0xc0, 0x0b, 0, 0, 0x09}, {0, 4}), 4);
    const std::array<std::uint32_t, 1> extra{4};
    unchanged(data({0x42, 0xa8, 0xa4, 0xc0, 0x0b, 0, 0, 0x09}), 4, extra);
    unchanged(data({0x42, 0xa8, 0xa4, 0xc0, 0x0b, 0, 0, 0x09, 0x07, 4, 0, 0x09}, {0, 8}), 4);
    // A second path bypasses the selector. Even though the first path proves
    // nonzero, the shared emitted opcode must retain both contexts' semantics.
    unchanged(data({0x42, 0xa8, 0xa4, 0xc0, 0x0b, 0, 0, 0x09, 0x19, 4, 0}, {0, 8}), 4);
    unchanged(data({0x1e, 0x12, 0x34, 0x0b, 0, 0, 0x09}), 3);
    unchanged(data({0x42, 0x43, 0xa4, 0xc0, 0x0b, 0, 0, 0x09}), 4); // Walk may return zero.
    unchanged(data({0x42, 0xa8, 0xa4, 0xc0, 0x1f, 0, 0x0b, 0, 0, 0x09}), 6);
    unchanged(data({0x42, 0xa8, 0xa4, 0xc0, 0x06, 1, 0x0b, 0, 0, 0x09}), 6);
    // The conditional's opcode is also an operand of another valid entry.
    // Rewriting shared content there would alter an unrelated actor position.
    unchanged(data({0x42, 0xa8, 0xa4, 0xc0, 0x0b, 0, 0, 0x09}, {0, 3}), 4);
    auto contexts = data({0x1a, 10, 0,    0x09, 0x1a, 10,   0,    0x09, 0x09, 0x09,
                          0x06, 1,  0x42, 0xa8, 0xa4, 0xc0, 0x0b, 10,   0,    0x1b},
                         {0, 4});
    CompiledActionProgram shared(contexts, eb::GameVersion::US);
    check(shared.scripts()->byte(16) == 0x19 && shared.operation(0).discard_result,
          "Identical proven selector predecessors in both call stacks permit lowering");
    auto stored = data({0x42, 0xa8, 0xa4, 0xc0, 0x0b, 7, 0, 0x1f, 0, 0x09});
    CompiledActionProgram observed(stored, eb::GameVersion::US);
    check(observed.scripts()->byte(4) == 0x19 && !observed.operation(0).discard_result,
          "A later scalar consumer still forbids discarding the incidental return");
    // A public compiled-VM response cannot skip bytes to enter a rewritten
    // branch without executing the selector that established its predicate.
    auto skipped = data({0x42, 0x73, 0xa6, 0xc0, 0x42, 0xa8, 0xa4, 0xc0, 0x0b, 0, 0, 0x09});
    CompiledActionProgram guarded(skipped, eb::GameVersion::US);
    check(guarded.scripts()->byte(8) == 0x19, "Skip guard fixture must contain a lowered predicate");
    ActionScripts task(guarded.scripts(), 0);
    task.tick();
    rejects([&] { task.respond(0, 4); }, "Response length must not bypass a proven selector");
    check(task.request() && task.request()->identifier == 0,
          "Rejected response preserves the original request and script cursor");
    task.respond(0, 0);
    check(task.tick() == ActionTickResult::NeedsEngine && task.request()->identifier == 1,
          "Correct response still enters the selector before its rewritten predicate");
}
} // namespace
int main() {
    try {
        normalize_operations();
        opaque_boundaries();
        content_bank_control_flow();
        token_width();
        recursive_import();
        discarded_results();
        nonzero_appearance_predicates();
        std::cout
            << "Compiled actions: normalization, opaque boundaries, control flow and token widths passed\n";
    } catch (const std::exception &error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
