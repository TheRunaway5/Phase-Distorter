#include "eb/native/dialogue/runtime.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <string>

namespace {
using namespace eb::native::dialogue;
unsigned checks{};
void require(bool value, const char *message) {
    ++checks;
    if (!value)
        throw std::runtime_error(message);
}
template <class F> void rejects(F fn, const char *message) {
    bool caught = false;
    try {
        fn();
    } catch (const std::exception &) {
        caught = true;
    }
    require(caught, message);
}
ReferenceKey key(unsigned value) {
    return {std::uint8_t(value), std::uint8_t(value >> 8), std::uint8_t(value >> 16),
            std::uint8_t(value >> 24)};
}
std::shared_ptr<const Program> program(std::vector<std::uint8_t> bytes,
                                       eb::GameVersion version = eb::GameVersion::US,
                                       std::vector<ReferenceBinding> refs = {},
                                       std::vector<ContentBlock> extra = {},
                                       std::vector<Location> dictionary = {}) {
    extra.insert(extra.begin(), ContentBlock{0, 0, std::move(bytes)});
    return std::make_shared<Program>(version, std::move(extra), std::vector<Location>{{0, 0}},
                                     std::move(refs), std::move(dictionary));
}
std::vector<Request> finish(Runtime &vm, Response response = {}) {
    std::vector<Request> requests;
    for (unsigned i = 0; i < 10000; ++i) {
        const auto progress = vm.advance(17);
        if (progress == Progress::Finished)
            return requests;
        if (progress == Progress::Suspended) {
            requests.push_back(*vm.request());
            vm.respond(response);
        }
    }
    throw std::runtime_error("Synthetic dialogue did not finish");
}
std::vector<unsigned> glyphs(const std::vector<Request> &requests) {
    std::vector<unsigned> result;
    for (const auto &request : requests)
        if (request.kind == RequestKind::Glyph)
            result.push_back(request.glyph);
    return result;
}
void registers() {
    for (auto version : {eb::GameVersion::US, eb::GameVersion::JP}) {
        State s;
        s.focus = WindowId{8};
        s.windows[*s.focus].active = {0x1234007f, 0x89abcdef, 0xffff};
        const auto original = s.window().active;
        Runtime vm(program({0x1b, 0, 0x1b, 4, 0x0f, 0x1b, 1, 0x1b, 5, 0x1b, 4, 0x1b, 6, 2}, version), s);
        vm.start(EntryId{0});
        finish(vm);
        require(s.window().saved == original, "Per-window register storage lost width");
        require(s.window().active == Registers{original.working, original.argument, 255},
                "Global backup secondary was not low-byte only");
        require(s.backup == RegisterBackup{original.working, original.argument, 255},
                "Global backup differs");
        require(s.stream_slot == 0 && vm.returned_cursor() == Location{0, 14},
                "Register script return cursor/ring differs");
        s.window().active = {0x1007f, 0xaabbccdd, 0xffff};
        Runtime compare(program({0x0b, 0x7f, 0x0d, 0, 0x0e, 0, 0x0f, 0x0d, 1, 0x0c, 1, 2}, version), s);
        compare.start(EntryId{0});
        finish(compare);
        require(s.window().active == Registers{0, 2, 2}, "Compare/copy/secondary command rules differ");
        Runtime wrap(program({0x0f, 2}, version), s);
        s.window().active.secondary = 0xffff;
        wrap.start(EntryId{0});
        finish(wrap);
        require(s.window().active.secondary == 0, "Secondary increment stopped wrapping");
        s.focus.reset();
        Runtime dummy(program({0x0e, 7, 0x1b, 7, 2}, version), s);
        dummy.start(EntryId{0});
        finish(dummy);
        require(s.dummy.active.secondary == 7 && s.windows.at(WindowId{8}).active.secondary == 0,
                "Dummy/focused banks alias or unknown1B selector changed state");
    }
}
void flags_and_branches() {
    for (auto version : {eb::GameVersion::US, eb::GameVersion::JP}) {
        // Jump succeeds only after the little-endian one-based flag has been set.
        auto p = program({4, 0, 4, 7, 0, 4, 6, 0, 4, 9, 8, 7, 6, 0x58, 2}, version,
                         {{ReferenceKey{9, 8, 7, 6}, Location{1, 0}}}, {{1, 0, {0x59, 5, 0, 4, 7, 0, 4, 2}}});
        State s;
        Runtime vm(p, s);
        std::vector<std::pair<unsigned, unsigned>> changes;
        vm.observe([&](const Event &event) {
            if (event.kind == EventKind::FlagChanged)
                changes.emplace_back(event.flag, event.value);
        });
        vm.start(EntryId{0});
        require(glyphs(finish(vm)) == std::vector<unsigned>{0x59}, "Conditional flag jump took wrong branch");
        require(!s.flag(1024) && s.window().active.working == 0, "Flag clear/get did not publish boolean");
        require(changes == std::vector<std::pair<unsigned, unsigned>>{{1024, 1}, {1024, 0}},
                "Flag publication order differs");
        State no;
        Runtime skip(program({6, 1, 0, 255, 255, 255, 255, 0x41, 2}, version), no);
        skip.start(EntryId{0});
        require(glyphs(finish(skip)) == std::vector<unsigned>{0x41},
                "Untaken flag jump resolved skipped pointer");
        rejects([&] { no.flag(0); }, "Flag0 escaped declared flag boundary");
        rejects([&] { no.set_flag(1025, true); }, "Out-of-range flag write was accepted");
        for (unsigned condition : {2u, 3u})
            for (std::uint32_t value : {0u, 1u, 0x10000u, 0xffffffffu}) {
                State branch;
                branch.dummy.active.working = value;
                Runtime test(program({0x1b, std::uint8_t(condition), 1, 2, 3, 4, 0x41, 2}, version,
                                     {{ReferenceKey{1, 2, 3, 4}, Location{1, 0}}}, {{1, 0, {0x42, 2}}}),
                             branch);
                test.start(EntryId{0});
                const bool taken = (value == 0) == (condition == 2);
                require(glyphs(finish(test)) == std::vector<unsigned>{taken ? 0x42u : 0x41u},
                        "32-bit working conditional changed");
            }
    }
}
void control_flow() {
    for (auto version : {eb::GameVersion::US, eb::GameVersion::JP}) {
        auto p =
            program({8, 1, 0, 0, 0, 0x41, 2}, version, {{key(1), Location{1, 0}}, {key(2), Location{2, 0}}},
                    {{1, 0, {8, 2, 0, 0, 0, 0x42, 2}}, {2, 0, {0x43, 2}}});
        State s;
        Runtime vm(p, s);
        vm.start(EntryId{0});
        require(glyphs(finish(vm)) == std::vector<unsigned>{0x43, 0x42, 0x41},
                "Nested calls lost return order");
        require(vm.returned_cursor() == Location{0, 7} && s.stream_slot == 0,
                "Nested call changed outer return cursor/ring");
        for (unsigned opcode : {9u, 0x1fu})
            for (std::uint32_t value : {0u, 1u, 2u, 3u, 0x10001u, 0xffffffffu}) {
                std::vector<std::uint8_t> code;
                if (opcode == 0x1f)
                    code = {0x1f, 0xc0, 2};
                else
                    code = {9, 2};
                code.insert(code.end(), {1, 0, 0, 0, 2, 0, 0, 0, 0x41, 2});
                State branch;
                branch.dummy.active.working = value;
                Runtime test(program(code, version, {{key(1), Location{1, 0}}, {key(2), Location{2, 0}}},
                                     {{1, 0, {0x42, 2}}, {2, 0, {0x43, 2}}}),
                             branch);
                test.start(EntryId{0});
                std::vector<unsigned> expected;
                if (value == 1 || value == 2)
                    expected.push_back(value == 1 ? 0x42 : 0x43);
                if (opcode == 0x1f || value == 0 || value > 2)
                    expected.push_back(0x41);
                require(glyphs(finish(test)) == expected, "Multi-target jump/subroutine selection changed");
            }
        State null;
        Runtime noop(program({8, 0, 0, 0, 0, 0x41, 2}, version), null);
        noop.start(EntryId{0});
        require(glyphs(finish(noop)) == std::vector<unsigned>{0x41}, "Null call was not a no-op");
    }
}
void source_stream_counter() {
    for (auto version : {eb::GameVersion::US, eb::GameVersion::JP}) {
        State state;
        state.stream_slot = 8;
        Runtime vm(
            program({8, 1, 0, 0, 0, 0x41, 2}, version, {{key(1), Location{1, 0}}}, {{1, 0, {0x42, 2}}}),
            state);
        vm.start(EntryId{0});
        require(vm.advance() == Progress::Suspended && state.stream_slot == 0,
                "Source allocation9-to0 wrap changed");
        vm.respond();
        require(vm.advance() == Progress::Suspended && state.stream_slot == 0xffff,
                "Returning through slot0 normalized source counter");
        vm.respond();
        require(vm.advance() == Progress::Finished && state.stream_slot == 0xfffe,
                "Second return did not preserve16-bit source counter");
        rejects([&] { vm.start(EntryId{0}); }, "Out-of-table subsequent allocation was accepted");
        require(state.stream_slot == 0xfffe, "Rejected out-of-table allocation mutated source counter");
        state.stream_slot = 0xffff;
        Runtime valid(program({2}, version), state);
        valid.start(EntryId{0});
        require(state.stream_slot == 0 && valid.advance() == Progress::Finished &&
                    state.stream_slot == 0xffff,
                "Underflowed counter could not enter legitimate slot0");
    }
}
void window_services() {
    for (auto version : {eb::GameVersion::US, eb::GameVersion::JP}) {
        State state;
        Runtime vm(program({0x18,1,0x15,0x18,3,0x16,0x18,0,0x18,2,0x18,6,0x18,4,2},version),state);
        vm.start(EntryId{0});
        const auto requests=finish(vm);
        const std::vector<RequestKind> kinds{RequestKind::OpenWindow,RequestKind::FocusWindow,
            RequestKind::CloseWindow,RequestKind::SaveWindowAttributes,RequestKind::ClearWindow,
            RequestKind::CloseAllWindows};
        require(requests.size()==kinds.size(),"Window command consumed extra inline operands");
        for (unsigned index=0;index<kinds.size();++index)
            require(requests[index].kind==kinds[index] && requests[index].source.page==0 &&
                    requests[index].command==0x18,"Window command lost its typed service or provenance");
        require(requests[0].count==0x15 && requests[1].count==0x16 && requests[3].count==1 &&
                requests[0].source.offset==0 && requests[1].source.offset==3 &&
                vm.returned_cursor()==Location{0,15},"Window ID operand was expanded as compressed text");

        // The host owns attributes. The interpreter must keep each saved
        // frame alive until restoration, and only then report its return.
        auto nested=program({0x18,2,8,1,0,0,0,2},version,{{key(1),Location{1,0}}},
                            {{1,0,{0x18,2,2}}});
        State saved;
        saved.focus=WindowId{5}; saved.windows[*saved.focus]={};
        Runtime call(nested,saved);
        std::vector<std::optional<WindowId>> returns;
        call.observe([&](const Event& event){ if(event.kind==EventKind::Return) returns.push_back(event.window); });
        call.start(EntryId{0});
        for(unsigned slot : {1u,2u}) {
            require(call.advance()==Progress::Suspended && call.request()->kind==RequestKind::SaveWindowAttributes &&
                    call.request()->count==slot,"Nested save lost its captured stream slot");
            saved.streams[slot].saved_window=SavedWindowAttributes{WindowId{slot+4},{},0,{}};
            call.respond();
            if(slot==1) { saved.focus=WindowId{6}; saved.windows[*saved.focus]={}; }
        }
        for(unsigned slot : {2u,1u}) {
            require(call.advance()==Progress::Suspended && call.request()->kind==RequestKind::RestoreWindowAttributes &&
                    call.request()->count==slot && saved.stream_slot==slot && call.snapshot().frames.size()==slot &&
                    returns.size()==2-slot,"Return happened before saved-window restoration");
            const auto request=call.request(); const auto consumed=call.snapshot().consumed_bytes;
            require(call.advance()==Progress::Suspended && call.request()==request &&
                    call.snapshot().consumed_bytes==consumed,"Pending restoration advanced its caller");
            saved.focus=saved.streams[slot].saved_window->id;
            call.respond();
            require(returns.back()==saved.focus && saved.stream_slot==slot-1,
                    "Return observer ran before restored focus or before the source stream unwind");
        }
        require(call.advance()==Progress::Finished && call.returned_cursor()==Location{0,8} &&
                returns==std::vector<std::optional<WindowId>>{WindowId{6},WindowId{5}},
                "Nested attribute restore returned in the wrong order");
        // Source clears its saved-attribute flag on allocation, even when the
        // slot still contains a previous conversation's attribute bytes.
        Runtime reused(program({2},version),saved);
        reused.start(EntryId{0});
        require(!saved.streams[1].saved_window && reused.advance()==Progress::Finished,
                "A reused stream restored stale saved window attributes");
        State unsupported;
        Runtime unknown(program({0x18,0xff,0xaa,0xbb,2},version),unsupported);
        unknown.start(EntryId{0});
        require(unknown.advance()==Progress::Suspended && unknown.request()->kind==RequestKind::UnsupportedCommand &&
                unknown.snapshot().consumed_bytes==2,"Unported window selector guessed its inline operands");
        rejects([&]{unknown.respond();},"Unported window selector was acknowledged");
    }
}
void reusable_window_banks() {
    State state;
    state.window_host_managed=true;
    state.dummy.active.working=10;
    state.windows[WindowId{3}].active.working=20;
    state.window_slots[0]=WindowId{3};
    state.retired_window_banks[1].active.working=30;
    rejects([&]{state.window();},"Unknown unfocused source lookup silently chose a bank");
    state.unfocused_register_slot=0;
    require(state.window().active.working==20,"Unfocused lookup did not use the live slot bank");
    state.unfocused_register_slot=1;
    state.window().active.working=31;
    require(state.retired_window_banks[1].active.working==31,"Closed slot bank was copied instead of borrowed");
    state.unfocused_register_slot=0xffff;
    require(state.window().active.working==10,"Source ffff ambient lookup failed to resolve dummy bank");
    state.unfocused_register_slot=8;
    rejects([&]{state.window();},"Invalid ambient slot read beyond the reusable banks");
    state.focus=WindowId{3};
    require(state.window().active.working==20,"Focused lookup incorrectly used ambient state");
    state.windows.clear(); state.window_slots[0].reset(); state.focus.reset();
    require(state.window().active.working==10,"Empty window list did not select the dummy bank");
}
void content_wrap_and_regions() {
    std::vector<ContentBlock> blocks{{3, 0xfffb, {0x1b, 2, 0xaa, 0xbb, 0xcc}}, {3, 0, {0xdd, 0x41, 2}}};
    State s;
    s.dummy.active.working = 1;
    auto p = std::make_shared<Program>(eb::GameVersion::US, blocks, std::vector<Location>{{3, 0xfffb}});
    Runtime skip(p, s);
    skip.start(EntryId{0});
    require(glyphs(finish(skip)) == std::vector<unsigned>{0x41} && skip.returned_cursor() == Location{3, 3},
            "Skipped DWORD carried into a different content page");
    for (auto version : {eb::GameVersion::US, eb::GameVersion::JP}) {
        std::vector<Location> dictionary(768, {1, 0});
        dictionary[256] = {1, 4};
        dictionary[512] = {1, 8};
        auto contents = program({0x15, 0, 0x16, 0, 0x17, 0, 0x0e, 0x15, 0x0e, 0x16, 0x0e, 0x17, 2}, version,
                                {}, {{1, 0, {0x41, 0, 0, 0, 0x42, 0, 0, 0, 0x43, 0}}}, dictionary);
        State state;
        Runtime text(contents, state);
        text.start(EntryId{0});
        const auto events = finish(text);
        require(glyphs(events) == (version == eb::GameVersion::US ? std::vector<unsigned>{0x41, 0x42, 0x43}
                                                                  : std::vector<unsigned>{}),
                "Regional dictionary decoding differs");
        require(state.window().active.secondary == 0x17,
                "Compression marker expanded inside command operand");
        require(std::count_if(events.begin(), events.end(),
                              [](auto r) { return r.kind == RequestKind::Newline; }) ==
                    (version == eb::GameVersion::JP ? 3 : 0),
                "Dictionary zero and main-stream zero conflated");
    }
    // The source does not recursively decode the first byte of a dictionary.
    State first;
    Runtime first_vm(program({0x15, 0, 0x41, 2}, eb::GameVersion::US, {}, {{1, 0, {0x15, 0}}}, {{1, 0}}),
                     first);
    first_vm.start(EntryId{0});
    require(glyphs(finish(first_vm)) == std::vector<unsigned>{0x41},
            "Dictionary first byte recursively expanded");
    // A command begun in a phrase consumes its operand from that phrase too.
    State phrase;
    Runtime phrase_vm(program({0x15, 0, 2}, eb::GameVersion::US, {}, {{1, 0, {0x0e, 0x15, 0}}}, {{1, 0}}),
                      phrase);
    phrase_vm.start(EntryId{0});
    finish(phrase_vm);
    require(phrase.dummy.active.secondary == 0x15, "Phrase command operand read from wrong stream");
}
void requests_and_limits() {
    State state;
    Runtime vm(program({0x41, 0, 1, 0x10, 0, 3, 0x13, 0x14, 0x11, 0x12, 2}), state);
    vm.start(EntryId{0});
    require(vm.advance() == Progress::Suspended, "Glyph did not suspend");
    const auto request = *vm.request();
    const auto snapshot = vm.snapshot();
    for (unsigned i = 0; i < 4; ++i)
        require(vm.advance() == Progress::Suspended && vm.request() == request &&
                    vm.snapshot().consumed_bytes == snapshot.consumed_bytes,
                "Repeated advance bypassed pending request");
    vm.respond();
    const auto requests = finish(vm, Response{17});
    require(requests.size() == 9 && requests[2].kind == RequestKind::Pause && requests[2].count == 0,
            "Presentation requests lost zero-count pause");
    require(requests[3].show_prompt && !requests[3].force_wait && !requests[4].show_prompt &&
                requests[5].show_prompt && requests[5].force_wait,
            "Prompt variants collapsed");
    require(state.dummy.active.working == 17, "Selection response did not update focused working register");
    require(requests[6].kind == RequestKind::Selection && requests[7].kind == RequestKind::ResetMenu &&
                requests[8].kind == RequestKind::ClearLine,
            "CC11 did not finish menu cleanup before the following command");
    for (auto version : {eb::GameVersion::US, eb::GameVersion::JP}) {
        for (std::uint8_t selector : {4,8,9}) {
            State selected;
            Runtime menu(program({0x1a,selector,0x0f,2}, version), selected);
            menu.start(EntryId{0});
            require(menu.advance() == Progress::Suspended && menu.request()->kind == RequestKind::Selection &&
                        menu.request()->count == (selector == 9 ? 1u : 0u) &&
                        menu.snapshot().frames.back().cursor == Location{0,2},
                    "Tree1A selection mode or operand boundary changed");
            menu.respond({0x1234});
            require(selected.dummy.active.working == 0x1234 && selected.dummy.active.secondary == 0,
                    "Selection result and next authored command were reordered");
            if (selector == 4) {
                require(menu.advance() == Progress::Suspended && menu.request()->kind == RequestKind::ResetMenu &&
                            menu.snapshot().frames.back().cursor == Location{0,2},
                        "Tree1A04 omitted its post-result menu cleanup");
                menu.respond();
            }
            require(menu.advance() == Progress::Finished && selected.dummy.active.secondary == 1,
                    "Tree1A selection failed to resume authored execution");
        }
    }
    Runtime unsupported(program({0x1f, 0x23, 0xaa, 0xbb, 2}), state);
    unsupported.start(EntryId{0});
    require(unsupported.advance() == Progress::Suspended &&
                unsupported.request()->kind == RequestKind::UnsupportedCommand,
            "Unported service was silently consumed");
    const auto before = unsupported.snapshot();
    rejects([&] { unsupported.respond(); }, "Unported service accepted guessed response");
    require(unsupported.advance() == Progress::Suspended &&
                unsupported.snapshot().consumed_bytes == before.consumed_bytes &&
                unsupported.snapshot().frames.back().cursor == Location{0, 2},
            "Unported service consumed unknown operand length");
    State cyclic;
    Runtime loop(program({0x0a, 1, 0, 0, 0}, eb::GameVersion::US, {{key(1), Location{0, 0}}}), cyclic);
    loop.start(EntryId{0});
    require(loop.advance(100) == Progress::BudgetExhausted && loop.snapshot().consumed_bytes == 100,
            "Cyclic content escaped dispatch budget");
    require(loop.advance(0) == Progress::BudgetExhausted && loop.snapshot().consumed_bytes == 100,
            "Zero budget advanced dialogue");
    for (auto version : {eb::GameVersion::US, eb::GameVersion::JP}) {
        State wrap;
        wrap.word_wrap = true;
        Runtime text(program({0x41, 2}, version), wrap);
        text.start(EntryId{0});
        text.advance();
        require(text.request()->kind ==
                    (version == eb::GameVersion::US ? RequestKind::WordWrap : RequestKind::Glyph),
                "Word-wrap service was ignored or enabled for JP");
        if (version == eb::GameVersion::US) {
            text.respond(Response{5});
            text.advance();
            require(text.request()->kind == RequestKind::Glyph,
                    "Word-wrap acknowledgement did not preserve next glyph");
        }
    }
}
void battle_animation_arguments() {
    for (auto version : {eb::GameVersion::US, eb::GameVersion::JP})
        for (unsigned first : {0u, 1u, 34u, 35u, 54u, 255u})
            for (unsigned second : {0u, 1u, 48u, 255u})
                for (unsigned result : {0u, 1u, 2u}) {
                    State state;
                    state.focus = WindowId{1};
                    state.windows[WindowId{1}].active = {0xabcd1234, 0x89ab0042, 17};
                    state.windows[WindowId{2}].active = {0x87654321, 0x12345678, 19};
                    Runtime vm(program({0x1c, 0x13, std::uint8_t(first), std::uint8_t(second),
                                        4, 7, 0, 2}, version), state);
                    vm.start(EntryId{0});
                    for (unsigned byte = 0; byte < 3; ++byte)
                        require(vm.advance(1) == Progress::BudgetExhausted &&
                                    !vm.request() && state.window().active.working == 0xabcd1234,
                                "Battle animation completed before its two literal operands");
                    require(vm.advance(1) == Progress::Suspended &&
                                vm.request()->kind == RequestKind::BattleAnimation &&
                                vm.request()->battle_animation == BattleAnimationRequest{
                                    std::uint16_t(first - 1), std::uint16_t(second - 1)} &&
                                vm.snapshot().consumed_bytes == 4 && !state.flag(7),
                            "Battle animation operands used fallback, lost word wrap or consumed following code");
                    const auto request = vm.request();
                    rejects([&] { vm.respond(); }, "Battle animation accepted an untyped acknowledgment");
                    require(vm.request() == request && vm.advance() == Progress::Suspended,
                            "Pending battle animation advanced while its owner was suspended");
                    state.focus = WindowId{2};
                    Response response;
                    response.battle_animation_result = BattleAnimationResult{result < 2, result == 1};
                    vm.respond(response);
                    require(state.windows.at(WindowId{1}).active.working == 0xabcd1234 &&
                                state.window().active.working == (result < 2 ? result : 0x87654321) &&
                                state.window().active.argument == 0x12345678 &&
                                state.window().active.secondary == 19,
                            "Battle animation result lost current focus, full width or skipped-call preservation");
                    require(vm.advance() == Progress::Finished && state.flag(7),
                            "Battle animation acknowledgment failed to resume the original stream");
                }
}
void battle_grammar_arguments() {
    for (auto selector : {0x14u, 0x15u}) {
        for (auto operand : {0u, 1u, 255u}) {
            State state;
            state.dummy.active = {0xaabbccdd, 1, 0};
            Runtime vm(program({0x1c, std::uint8_t(selector), std::uint8_t(operand), 2}), state);
            vm.start(EntryId{0});
            require(vm.advance() == Progress::Suspended, "US grammar did not await its actual battle owner");
            const auto& request = *vm.request();
            require(request.kind == RequestKind::BattleGrammar &&
                    request.battle_grammar == BattleGrammarRequest{selector == 0x15, std::uint8_t(operand)},
                    "Grammar changed its raw literal operand/side");
            require(state.dummy.active.working == 0xaabbccdd, "Grammar published before its owner completed");
            vm.respond({3});
            require(vm.advance() == Progress::Finished && state.dummy.active.working == 3 &&
                    vm.returned_cursor() == Location{0, 4}, "Grammar did not replace the complete working dword");
        }
        State state;
        Runtime jp(program({0x1c, std::uint8_t(selector), 0x55, 2}, eb::GameVersion::JP), state);
        jp.start(EntryId{0});
        const auto requests = finish(jp);
        require(glyphs(requests) == std::vector<unsigned>{0x55} && jp.returned_cursor() == Location{0, 4},
                "JP ignored grammar selector consumed a following glyph");
    }
}
void validation() {
    rejects([] { Program p(eb::GameVersion::US, {{0, 65535, {1, 2}}}); }, "Cross-page block accepted");
    rejects([] { Program p(eb::GameVersion::US, {{0, 0, {1, 2}}, {0, 1, {2}}}); },
            "Overlapping blocks accepted");
    Program p(eb::GameVersion::US, {{3, 4, {0x41, 2}}}, {}, {}, {}, {{key(100), {3, 4}, 2}});
    require(p.resolve(key(101)) == Location{3, 5}, "Validated reference range failed relocation");
    rejects([&] { p.resolve(key(102)); }, "Reference escaped imported whitelist");
    rejects([&] { p.byte({3, 3}); }, "Read escaped imported whitelist");
    State state;
    Runtime bad(program({8, 1, 2, 3, 4, 2}), state);
    bad.start(EntryId{0});
    rejects([&] { bad.advance(); }, "Unresolved authored call was executed");
    State null_jump;
    null_jump.word_wrap = true;
    Runtime null_vm(program({0x0a, 0, 0, 0, 0}), null_jump);
    null_vm.start(EntryId{0});
    require(null_vm.advance() == Progress::Suspended, "US wrapping did not request preparation");
    null_vm.respond(Response{1});
    rejects([&] { null_vm.advance(); }, "Null jump reached word-wrap request without validation");
    rejects([] { Program invalid(static_cast<eb::GameVersion>(99), {{0, 0, {2}}}); },
            "Unknown game version accepted");
    require(p.resolve({}) == std::nullopt, "Null reference did not remain null");
}
} // namespace
int main() {
    try {
        registers();
        flags_and_branches();
        control_flow();
        source_stream_counter();
        window_services();
        reusable_window_banks();
        content_wrap_and_regions();
        requests_and_limits();
        battle_animation_arguments();
        battle_grammar_arguments();
        validation();
        std::cout << "PASS " << checks << " CPU-free dialogue semantic/request/content checks\n";
    } catch (const std::exception &error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
