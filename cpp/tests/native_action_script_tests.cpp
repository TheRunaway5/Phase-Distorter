#include "eb/native/action_scripts.hpp"
#include <functional>
#include <iostream>
#include <stdexcept>
#include <string>

namespace {
using namespace eb::native;
void check(bool value, const char *message) {
    if (!value)
        throw std::runtime_error(message);
}
void rejects(const std::function<void()> &function, const char *message) {
    try {
        function();
    } catch (const std::exception &) {
        return;
    }
    throw std::runtime_error(message);
}
ActionScripts script(std::initializer_list<std::uint8_t> bytes) {
    return ActionScripts(std::make_shared<ActionScriptData>(std::span(bytes.begin(), bytes.size()), 0), 0);
}
void sleep_and_motion() {
    // Authored 8.8 fractional velocity and integer-position changes compose
    // without floating-point drift or coupling to the display rate.
    auto run = script({0x28, 10, 0, 0x3f, 0x80, 0xff, 0x06, 2, 0x2b, 3, 0, 0x39, 0x06, 1, 0x09});
    check(run.tick() == ActionTickResult::Complete, "First motion tick");
    check(run.actor().position[0] == 0x000a8000 && run.actor().velocity[0] == 0xffff8000,
          "Signed half-pixel velocity");
    integrate_action_motion(run.actor());
    check(run.actor().position[0] == 0x000a0000 && run.tasks()[0].sleep_frames == 1,
          "Pause counts issuing tick");
    run.tick();
    integrate_action_motion(run.actor());
    check(run.actor().position[0] == 0x00098000, "Second wait tick still moves");
    run.tick();
    integrate_action_motion(run.actor());
    check(run.actor().position[0] == 0x000c8000 && run.actor().velocity[0] == 0,
          "Relative position preserves fraction");
    run.tick();
    check(run.tasks()[0].cursor == 14 && run.tasks()[0].sleep_frames == 65534,
          "Halt retains authored wait and cursor");

    auto zero = script({0x06, 0, 0x3b, 9, 0x06, 1, 0x09});
    zero.tick();
    check(zero.actor().animation == 9, "Pause zero continues same tick");
    auto compact = script({0x82, 4, 0x91, 0x09});
    compact.tick();
    check(compact.actor().animation == 4 && compact.tasks()[0].sleep_frames == 1, "Compact animation sleep");
    compact.tick();
    compact.tick();
    check(compact.actor().animation == 5, "Compact next-frame command");
}
void loops_and_calls() {
    auto run = script(
        {0x0e, 0, 0, 0, 0x01, 0, 0x14, 0, 2, 1, 0, 0x02, 0x20, 0, 0x27, 2, 0, 0xff, 0x1f, 1, 0x06, 1, 0x09});
    run.tick();
    check(run.actor().variables[0] == 256 && run.actor().variables[1] == 0,
          "Zero-count loop executes 256 iterations; arithmetic wraps at 16 bits");
    check(run.tasks()[0].stack_depth == 0, "Loop pops its frame");
    auto call = script({0x1a, 7, 0, 0x06, 1, 0x09, 0x09, 0x3b, 2, 0x1b});
    call.tick();
    check(call.actor().animation == 2 && call.tasks()[0].cursor == 5, "Short call returns after its operand");
    auto branch = script({0x1d, 0, 0, 0x0a, 9, 0, 0x3b, 1, 0x09, 0x3b, 2, 0x06, 1, 0x09});
    branch.tick();
    check(branch.actor().animation == 2 && branch.tasks()[0].stack_depth == 0,
          "Conditional shortcall is a jump, not a call");
    auto switch_call =
        script({0x1d, 1, 0, 0x11, 2, 14, 0, 17, 0, 0x06, 1, 0x09, 0x09, 0x09, 0x3b, 4, 0x1b, 0x3b, 8, 0x1b});
    switch_call.tick();
    check(switch_call.actor().animation == 8 && switch_call.tasks()[0].cursor == 11,
          "Switch call skips complete jump table when returning");
    auto outside = script({0x1d, 2, 0, 0x10, 2, 0xff, 0xff, 0xff, 0xff, 0x06, 1, 0x09});
    outside.tick();
    check(outside.tasks()[0].cursor == 11, "Out-of-range switch falls through");
    auto loop_break = script({0x01, 3, 0x1d, 0, 0, 0x16, 9, 0, 0x02, 0x06, 1, 0x09});
    loop_break.tick();
    check(loop_break.tasks()[0].stack_depth == 0, "Conditional break pops the loop");
    auto bank_data = std::make_shared<ActionScriptData>(
        std::vector<ActionScriptBlock>{{0, {0x01, 2, 0x03, 2, 0, 0xc1}}, {0x10002, {0x02, 0x06, 1, 0x09}}});
    ActionScripts bank_loop(bank_data, 0);
    bank_loop.tick();
    check(bank_loop.tasks()[0].cursor == 0x10005 && bank_loop.tasks()[0].stack_depth == 0,
          "Loop rewinds low offset and preserves current content bank");
}
void tasks_and_requests() {
    // Children run in insertion order after their parent reaches its pause.
    auto run =
        script({0x07, 12, 0, 0x07, 16, 0, 0x06, 1, 0x13, 0x06, 1, 0x09, 0x3b, 1, 0x09, 0x09, 0x3b, 2, 0x09});
    run.tick();
    check(run.tasks().size() == 3 && run.actor().animation == 1,
          "Newest child goes immediately after parent; all run this tick");
    run.tick();
    check(run.tasks().size() == 2, "End-last-task removes parent's next task");
    auto end_child = script({0x07, 6, 0, 0x06, 1, 0x09, 0x0c});
    end_child.tick();
    check(end_child.actor().alive && end_child.tasks().size() == 1, "Task end retains actor");
    auto end = script({0x0c});
    check(end.tick() == ActionTickResult::Ended && !end.actor().alive, "Last task ends actor");

    auto hook = script({0xf2, 0x34, 0x12, 0xc0, 0x55, 0xaa, 0x1f, 0, 0x06, 1, 0x09});
    check(hook.tick() == ActionTickResult::NeedsEngine, "Unknown engine call blocks");
    const auto pending = *hook.request();
    check(pending.kind == ActionRequestKind::CallEngine && pending.identifier == 0xc01234 &&
              pending.parameters == 4,
          "Request contains native binding and inline content cursor");
    check(hook.tick() == ActionTickResult::NeedsEngine && hook.tasks()[0].cursor == 4,
          "No engine request is silently acknowledged");
    hook.respond(42, 2);
    hook.tick();
    check(hook.tasks()[0].sleep_frames == 1 && hook.tasks()[0].cursor == 6,
          "Compact engine call waits only after native response");
    hook.tick();
    hook.tick();
    check(hook.actor().variables[0] == 42, "Engine return updates task temporary");
    rejects([&] { hook.respond(); }, "Respond without request must fail");

    auto global = script({0x1e, 0x12, 0x34, 0x1f, 1, 0x06, 1, 0x09});
    global.tick();
    check(global.request()->kind == ActionRequestKind::ReadGameVariable &&
              global.request()->identifier == 0x3412,
          "Global access becomes typed native request");
    rejects([&] { global.respond(1, 1); }, "Global reads cannot consume inline operands");
    global.respond(0x1234);
    global.tick();
    check(global.actor().variables[1] == 0x1234, "Native variable read resumes same logic tick");
}
void validation() {
    auto invalid = script({0x4d});
    rejects([&] { invalid.tick(); }, "Unsupported command must fail");
    auto truncated = script({0x28, 1});
    rejects([&] { truncated.tick(); }, "Truncated operand must fail");
    auto bad_var = script({0x0e, 8, 0, 0});
    rejects([&] { bad_var.tick(); }, "Out-of-range variable must fail");
    auto bad_loop = script({0x02});
    rejects([&] { bad_loop.tick(); }, "Unmatched loop must fail");
    auto spin = script({0x19, 0, 0});
    rejects([&] { spin.tick(); }, "Infinite zero-time loop must fail");
    auto requesting_spin = script({0x42, 0, 0, 0xc0, 0x19, 0, 0});
    rejects(
        [&] {
            for (unsigned calls = 0; calls < 100001; ++calls) {
                if (requesting_spin.tick() != ActionTickResult::NeedsEngine)
                    return;
                requesting_spin.respond();
            }
        },
        "Engine responses must not reset the same tick's command budget");
    rejects([] { ActionScriptData bad(std::vector<ActionScriptBlock>{{0, {1, 2}}, {1, {3}}}); },
            "Overlapping content blocks must fail");
    std::vector<std::uint8_t> mutable_data{0x3b, 7, 0x06, 1, 0x09};
    auto data = std::make_shared<ActionScriptData>(mutable_data, 0);
    mutable_data.assign(5, 0);
    ActionScripts owned(data, 0);
    data.reset();
    owned.tick();
    check(owned.actor().animation == 7, "Imported bytecode lifetime is host-owned");
}
} // namespace
int main() {
    try {
        sleep_and_motion();
        loops_and_calls();
        tasks_and_requests();
        validation();
        std::cout << "Native action scripts: motion, timers, tasks, control flow, "
                     "engine boundaries passed\n";
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }
}
