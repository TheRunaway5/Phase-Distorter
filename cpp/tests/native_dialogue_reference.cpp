// Independent CPU-free dialogue semantic differential. Only this executable
// links the retained machine. The native module never receives a CPU/bus, a
// source routine address, or a callback capable of executing an instruction.
//
// Oracle: complete US/JP DISPLAY_TEXT and its original control/register/flag
// handlers. Synthetic authored bytecode, pointer dictionaries and glyphs are
// shared inputs, not copies of the new interpreter's algorithm. The explicit
// output seams below replace glyph drawing, newline layout, waits/prompts,
// menu selection/cleanup and clear-line drawing. Consequently this test proves
// interpreter semantics and request order, NOT fonts, word wrapping, window
// drawing, input debounce, real-time waits, audio, or whole-game dialogue.
#include "eb/game/runtime/runtime.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/native/dialogue/runtime.hpp"
#include "eb/snes_bus.hpp"

#include <algorithm>
#include <array>
#include <cstdint>
#include <iostream>
#include <map>
#include <memory>
#include <optional>
#include <stdexcept>
#include <string>
#include <string_view>
#include <vector>

namespace {
namespace dialogue = eb::native::dialogue;
using dialogue::Location;
using dialogue::RequestKind;
using dialogue::State;

void require(bool condition, const std::string& message) {
    if (!condition) throw std::runtime_error(message);
}
unsigned source_entry(eb::GameVersion version, std::string_view source, std::string_view jp = {}) {
    if (version == eb::GameVersion::JP && !jp.empty()) source = jp;
    for (const auto& routine : eb::game::runtime::ported_routines(version))
        if (routine.source == source) return routine.first_address;
    throw std::runtime_error("Missing original source entry: " + std::string(source));
}

// Linked labels independently checked in the frozen regional earthbound.dbg;
// field offsets are include/structs.asm::window_stats/display_text_state.
struct Layout {
    unsigned dummy, windows, window_size, head, focus, open_windows;
    unsigned stack_slot, stream_states, flags, powers_of_two, backup, ongosub;
    unsigned dictionary;
};
Layout layout(eb::GameVersion version) {
    if (version == eb::GameVersion::JP)
        return {0x8976, 0x89c2, 76, 0x8c22, 0x8c96, 0x8c26,
                0x9a6c, 0x995e, 0x9eb3, 0xc43425, 0x9a80, 0x9a89, 0};
    return {0x85fe, 0x8650, 82, 0x88e0, 0x8958, 0x88e4,
            0x97b8, 0x96aa, 0x9c08, 0xc4562f, 0x97cc, 0x97d5, 0xc8cded};
}
unsigned pointer(Location location) {
    require(location.page >= 1 && location.page <= 3, "Fixture content page outside mapping");
    return ((0xcfu + location.page) << 16) | location.offset;
}
std::optional<Location> location(unsigned address) {
    if (!address) return std::nullopt;
    const auto bank = (address >> 16) & 255;
    require(bank >= 0xd0 && bank <= 0xd2, "Source cursor escaped fixture content: " + std::to_string(address));
    return Location{bank - 0xcf, std::uint16_t(address)};
}
dialogue::ReferenceKey key(unsigned value) {
    return {std::uint8_t(value), std::uint8_t(value >> 8),
            std::uint8_t(value >> 16), std::uint8_t(value >> 24)};
}

struct Fixture {
    std::array<std::vector<std::uint8_t>, 3> pages;
    std::vector<dialogue::ReferenceBinding> aliases;
    Location entry{1, 0x2000};
    Location cursor = entry;
    Fixture() { for (auto& page : pages) page.resize(65536); }
    void at(Location next) { cursor = next; }
    void emit(std::initializer_list<unsigned> values) {
        for (auto value : values) {
            pages.at(cursor.page - 1).at(cursor.offset) = std::uint8_t(value);
            ++cursor.offset; // Authored cursor increments wrap only the low word.
        }
    }
    void reference(Location target, unsigned high_byte = 0) {
        const auto value = pointer(target) | (high_byte << 24);
        for (unsigned shift : {0u, 8u, 16u, 24u}) emit({value >> shift});
        if (high_byte) aliases.push_back({key(value), target});
    }
    void command(unsigned command, Location target, unsigned high_byte = 0) {
        emit({command}); reference(target, high_byte);
    }
    void dictionary(unsigned index, std::initializer_list<unsigned> bytes) {
        auto old = cursor;
        at({3, std::uint16_t(index * 8)}); emit(bytes); cursor = old;
    }
    std::shared_ptr<const dialogue::Program> program(eb::GameVersion version) const {
        std::vector<dialogue::ContentBlock> blocks;
        std::vector<dialogue::ReferenceRange> ranges;
        for (unsigned i = 0; i < pages.size(); ++i) {
            blocks.push_back({i + 1, 0, pages[i]});
            ranges.push_back({key(pointer({i + 1, 0})), {i + 1, 0}, 65536});
        }
        std::vector<Location> dictionary;
        if (version == eb::GameVersion::US)
            for (unsigned i = 0; i < 768; ++i) dictionary.push_back({3, std::uint16_t(i * 8)});
        auto references = aliases;
        references.push_back({key(0), std::nullopt});
        return std::make_shared<dialogue::Program>(version, std::move(blocks),
            std::vector<Location>{entry}, std::move(references), std::move(dictionary), std::move(ranges));
    }
    std::vector<std::uint8_t> cartridge(eb::GameVersion version) const {
        std::vector<std::uint8_t> image(0x300000);
        for (unsigned page = 0; page < pages.size(); ++page)
            std::copy(pages[page].begin(), pages[page].end(), image.begin() + 0x100000 + page * 65536);
        const auto p = layout(version);
        for (unsigned i = 0; i < 8; ++i) image[(p.powers_of_two & 0x3fffff) + i] = 1u << i;
        if (p.dictionary)
            for (unsigned i = 0; i < 768; ++i) {
                auto value = pointer({3, std::uint16_t(i * 8)});
                for (unsigned byte = 0; byte < 4; ++byte)
                    image[(p.dictionary & 0x3fffff) + i * 4 + byte] = value >> (byte * 8);
            }
        return image;
    }
};

struct Output {
    RequestKind kind{};
    unsigned value{};
    bool show_prompt{}, force_wait{};
    bool operator==(const Output&) const = default;
};
std::uint64_t source_steps{}, compared_requests{}, state_checks{};
unsigned compared_cases{}, dictionary_entries{};

struct Oracle {
    eb::GameVersion version;
    Layout p;
    std::unique_ptr<eb::SnesBus> bus;
    eb::MainCpu65816 cpu;
    unsigned print, newline, text_x, pause, prompt, selection, cleanup, clear;
    unsigned returning{};
    unsigned intercepted{};
    std::optional<Output> pending;
    bool pending_far{};

    Oracle(eb::GameVersion version_, const Fixture& fixture, const State& state)
        : version(version_), p(layout(version)),
          bus(std::make_unique<eb::SnesBus>(fixture.cartridge(version), version)), cpu(*bus),
          print(source_entry(version, "src/text/print_letter.asm", "src/text/print_letter-jp.asm")),
          newline(source_entry(version, "src/text/print_newline.asm")),
          text_x(source_entry(version, "src/text/get_text_x.asm")),
          pause(version == eb::GameVersion::JP ? 0xc102dc : 0xc100d6),
          prompt(source_entry(version, "src/text/ccs/halt.asm")),
          selection(source_entry(version, "src/text/selection_menu.asm", "src/text/selection_menu-jp.asm")),
          cleanup(source_entry(version, "src/unknown/C1/C11383.asm")),
          clear(source_entry(version, "src/text/ccs/clear_line.asm", "src/text/ccs/clear_line-jp.asm")) {
        cpu.set_runtime(eb::MainCpuRuntime::Legacy);
        cpu.emulation_mode = false;
        cpu.status_register = eb::MainCpu65816::InterruptDisable;
        cpu.data_bank = 0x7e;
        cpu.direct_page = 0x1e00;
        cpu.stack_pointer = 0x1fff;
        put(p.head, state.focus ? 0 : 0xffff);
        put(p.focus, state.focus ? state.focus->value : 0xffff);
        for (const auto& [id, window] : state.windows) {
            require(id.value < 4, "Fixture window outside reserved source records");
            put(p.open_windows + 2 * id.value, id.value);
            put_window(p.windows + p.window_size * id.value, window);
        }
        put_window(p.dummy, state.dummy);
        put32(p.backup, state.backup.working); put32(p.backup + 4, state.backup.argument);
        bus->work_ram[p.backup + 8] = state.backup.secondary;
        put(p.ongosub, state.subroutine_table_remaining);
        put(p.stack_slot, state.stream_slot);
        require(state.event_flags.size() == 128, "Fixture event-flag span changed");
        std::copy(state.event_flags.begin(), state.event_flags.end(), bus->work_ram.begin() + p.flags);
        put32(0x1e0e, pointer(fixture.entry));
        const auto display = source_entry(version, "src/text/display_text.asm", "src/text/display_text-jp.asm");
        cpu.program_counter = 0xc0ff00;
        cpu.execute_instruction<0x22>(display, 4);
        returning = 0xc0ff04;
    }
    void put(unsigned address, unsigned value) {
        bus->work_ram.at(address) = value;
        bus->work_ram.at(address + 1) = value >> 8;
    }
    unsigned get(unsigned address) const {
        return bus->work_ram.at(address) | unsigned(bus->work_ram.at(address + 1)) << 8;
    }
    void put32(unsigned address, unsigned value) { put(address, value); put(address + 2, value >> 16); }
    unsigned get32(unsigned address) const { return get(address) | get(address + 2) << 16; }
    void put_window(unsigned address, const dialogue::WindowState& window) {
        put32(address + 23, window.active.working); put32(address + 27, window.active.argument);
        put(address + 31, window.active.secondary);
        put32(address + 33, window.saved.working); put32(address + 37, window.saved.argument);
        put(address + 41, window.saved.secondary);
    }
    dialogue::WindowState window(unsigned address) const {
        return {{get32(address + 23), get32(address + 27), std::uint16_t(get(address + 31))},
                {get32(address + 33), get32(address + 37), std::uint16_t(get(address + 41))}};
    }
    void ret(bool far) {
        if (far) cpu.execute_instruction<0x6b>(0, 1);
        else cpu.execute_instruction<0x60>(0, 1);
        ++intercepted;
    }
    bool finished() const { return cpu.program_counter == returning && cpu.stack_pointer == 0x1fff; }
    std::optional<Output> advance() {
        require(!pending, "Oracle request must be acknowledged before resume");
        for (unsigned steps = 0; steps < 2'000'000 && !finished(); ++steps) {
            const auto pc = cpu.program_counter;
            pending_far = false;
            if (pc == print) pending = Output{RequestKind::Glyph, cpu.accumulator};
            else if (pc == newline) {
                pending = Output{RequestKind::Newline}; pending_far = version == eb::GameVersion::US;
            } else if (pc == text_x) pending = Output{RequestKind::ConditionalNewline};
            else if (pc == pause) pending = Output{RequestKind::Pause, cpu.accumulator};
            else if (pc == prompt) pending = Output{RequestKind::Prompt, 0, cpu.accumulator != 0, cpu.x_index != 0};
            else if (pc == selection) pending = Output{RequestKind::Selection, cpu.accumulator};
            else if (pc == clear) pending = Output{RequestKind::ClearLine};
            else if (pc == cleanup) pending = Output{RequestKind::ResetMenu};
            if (pending) return pending;
            cpu.step_instruction(); ++source_steps;
        }
        require(finished(), "Original DISPLAY_TEXT did not return: " + cpu.describe_registers());
        require(cpu.direct_page == 0x1e00, "Original DISPLAY_TEXT did not restore caller D");
        return std::nullopt;
    }
    void respond(unsigned value) {
        require(bool(pending), "No source output request to answer");
        if (pending->kind == RequestKind::Selection) cpu.accumulator = value;
        // Conditional newline delegates to the output service. Here text X=0,
        // so the real original branch does not call PRINT_NEWLINE as well.
        if (pending->kind == RequestKind::ConditionalNewline) cpu.accumulator = 0;
        ret(pending_far); pending.reset();
    }
    void compare(const State& state) const {
        for (const auto& [id, expected] : state.windows)
            require(window(p.windows + p.window_size * id.value) == expected,
                    "Window register state differs, window=" + std::to_string(id.value));
        require(window(p.dummy) == state.dummy, "Dummy-window register state differs");
        require(get32(p.backup) == state.backup.working && get32(p.backup + 4) == state.backup.argument &&
                bus->work_ram[p.backup + 8] == state.backup.secondary, "Global register backup differs");
        require(std::equal(state.event_flags.begin(), state.event_flags.end(), bus->work_ram.begin() + p.flags),
                "Event-flag bits differ");
        require(get(p.stack_slot) == state.stream_slot, "Nested text stream slot differs: source=" + std::to_string(get(p.stack_slot)) + " native=" + std::to_string(state.stream_slot));
        require(get(p.ongosub) == state.subroutine_table_remaining, "Shared computed-call offset differs");
        for (unsigned i = 0; i < state.streams.size(); ++i)
            require(location(get32(p.stream_states + i * 27)) == state.streams[i].cursor,
                    "Text stream cursor differs, slot=" + std::to_string(i));
        ++state_checks;
    }
};

State initial_state(std::uint32_t seed, bool dummy = false) {
    const auto next = [&seed]() { seed ^= seed << 13; seed ^= seed >> 17; seed ^= seed << 5; return seed; };
    State state;
    auto generate = [&]() {
        return dialogue::WindowState{{next(), next(), std::uint16_t(next())},
                                     {next(), next(), std::uint16_t(next())}};
    };
    state.windows.emplace(dialogue::WindowId{0}, generate());
    state.windows.emplace(dialogue::WindowId{1}, generate());
    state.focus = dummy ? std::nullopt : std::optional{dialogue::WindowId{seed & 1}};
    state.dummy = generate();
    state.backup = {next(), next(), std::uint8_t(next())};
    for (auto& flags : state.event_flags) flags = next();
    return state;
}

void run(eb::GameVersion version, const Fixture& fixture, State state, const std::string& name,
         unsigned budget = 4096, unsigned selection_value = 2) {
    try {
        Oracle oracle(version, fixture, state);
        dialogue::Runtime native(fixture.program(version), state);
        native.start(dialogue::EntryId{0});
        unsigned requests = 0;
        for (unsigned resumes = 0; resumes < 100000; ++resumes) {
            const auto progress = native.advance(budget);
            if (progress == dialogue::Progress::BudgetExhausted) continue;
            const auto original = oracle.advance();
            oracle.compare(state);
            if (progress == dialogue::Progress::Finished) {
                require(!original && oracle.finished(), "Native returned before original dialogue");
                require(native.returned_cursor() == location(oracle.get32(0x1e06)), "Final returned cursor differs");
                require(!native.request(), "Completed native text retained a request");
                ++compared_cases;
                return;
            }
            require(progress == dialogue::Progress::Suspended && native.request() && original,
                    "Native/source suspension differs");
            const auto& request = *native.request();
            Output actual{request.kind};
            if (request.kind == RequestKind::Glyph) actual.value = request.glyph;
            if (request.kind == RequestKind::Pause || request.kind == RequestKind::Selection) actual.value = request.count;
            if (request.kind == RequestKind::Prompt) {
                actual.show_prompt = request.show_prompt; actual.force_wait = request.force_wait;
            }
            require(actual == *original, "Ordered output request differs at request=" + std::to_string(requests) +
                    " native_kind=" + std::to_string(unsigned(actual.kind)) + " source_kind=" +
                    std::to_string(unsigned(original->kind)) + " native_value=" + std::to_string(actual.value) +
                    " source_value=" + std::to_string(original->value));
            // Repeated advances must leave the exact same request and state
            // suspended, rather than consume the next authored byte.
            const auto before = native.snapshot();
            const auto saved_request = request;
            require(native.advance(1) == dialogue::Progress::Suspended && native.request() == saved_request &&
                    native.snapshot().consumed_bytes == before.consumed_bytes, "Native bypassed outstanding output");
            native.respond({std::uint16_t(selection_value)});
            oracle.respond(selection_value);
            ++requests; ++compared_requests;
        }
        throw std::runtime_error("Native text exhausted bounded resume count");
    } catch (const std::exception& error) {
        throw std::runtime_error(std::string(version == eb::GameVersion::JP ? "JP " : "US ") + name + ": " + error.what());
    }
}

Fixture register_stream(unsigned seed) {
    Fixture f;
    // Every command is followed by a glyph output seam, so final-state
    // cancellation cannot conceal wrong intermediate register effects.
    for (unsigned i = 0; i < 24; ++i) {
        seed = seed * 1664525u + 1013904223u;
        switch (i % 12) {
        case 0: f.emit({0x1b, 0}); break;
        case 1: f.emit({0x1b, 4}); break;
        case 2: f.emit({0x1b, 5}); break;
        case 3: f.emit({0x0e, seed & 255}); break;
        case 4: f.emit({0x0f}); break;
        case 5: f.emit({0x0d, seed & 255}); break;
        case 6: f.emit({0x0d, 0}); break;
        case 7: f.emit({0x0b, seed & 255}); break;
        case 8: f.emit({0x0c, seed & 255}); break;
        case 9: f.emit({0x1b, 1}); break;
        case 10: f.emit({0x1b, 6}); break;
        case 11: f.emit({0x0e, 0}); break;
        }
        f.emit({0x60 + i});
    }
    f.emit({2});
    return f;
}

void core_corpus(eb::GameVersion version) {
    for (unsigned seed = 1; seed <= 64; ++seed)
        run(version, register_stream(seed), initial_state(seed, seed % 7 == 0),
            "register command stream " + std::to_string(seed), 1 + seed % 11);
    for (auto secondary : {0u, 1u, 255u, 256u, 32767u, 65535u}) {
        auto state = initial_state(0x62581);
        state.window().active = {0xffff0000, 0xdeadff00, std::uint16_t(secondary)};
        Fixture f; f.emit({0x0f, 0x60, 0x0d, 1, 0x61, 0x1b, 5, 0x62, 0x1b, 4, 0x63,
                          0x0e, 0x15, 0x64, 0x1b, 6, 0x65, 0x0e, 0, 0x66, 2});
        run(version, f, state, "register numeric edge " + std::to_string(secondary), 2);
    }
    for (unsigned working : {0u, 1u, 255u, 256u, 0x10000u, 0xffff0001u, 0xffffffffu}) {
        for (unsigned operand : {0u, 1u, 255u}) {
            auto state = initial_state(0x2468); state.window().active.working = working;
            Fixture f; f.emit({0x0b, operand, 0x70, 0x1b, 1, 0x0c, operand, 0x71, 2});
            state.window().saved.working = working;
            run(version, f, state, "equality low-word " + std::to_string(working), 1);
        }
    }
    Fixture outputs;
    outputs.emit({0x20, 0x50, 0xff, 0, 1, 0x10, 0, 0x10, 255, 3, 0x13, 0x14, 0x11, 0x70, 0x12, 2});
    run(version, outputs, initial_state(1), "all output seams", 3, 0xffff);
}

void branch_corpus(eb::GameVersion version) {
    constexpr Location yes{1, 0x4000}, no{1, 0x4100}, child{2, 0x4200};
    for (unsigned working : {0u, 1u, 0x10000u, 0x80000000u, 0xffffffffu})
        for (unsigned condition : {2u, 3u})
            for (unsigned wrap : {0u, 1u}) {
                Fixture f;
                if (wrap) { f.entry = {1, 0xfffc}; f.at(f.entry); }
                f.emit({0x1b, condition}); f.reference(yes);
                f.command(0x0a, no);
                f.at(yes); f.emit({0x71, 4, 17, 0, 2});
                f.at(no); f.emit({0x72, 5, 17, 0, 2});
                auto state = initial_state(7); state.window().active.working = working;
                run(version, f, state, "conditional jump/wrap " + std::to_string(working), 1);
            }
    for (unsigned flag : {1u, 8u, 9u, 255u, 256u, 1024u})
        for (bool enabled : {false, true}) {
            Fixture f;
            f.emit({enabled ? 4u : 5u, flag & 255, flag >> 8, 0x70, 7, flag & 255, flag >> 8, 0x71,
                    6, flag & 255, flag >> 8}); f.reference(yes);
            f.command(0x0a, no);
            f.at(yes); f.command(8, child, 0x55); f.emit({0x72, 2});
            f.at(no); f.command(8, child); f.emit({0x73, 2});
            f.at(child); f.emit({0x0f, 0x74, 2});
            run(version, f, initial_state(flag), "flag and nested call " + std::to_string(flag), 2);
        }
    for (unsigned command : {9u, 0xc0u})
        for (unsigned working : {0u, 1u, 2u, 3u, 4u, 0x10000u, 0xffffffffu}) {
            Fixture f;
            if (command == 0xc0) f.emit({0x1f});
            f.emit({command, 3});
            f.reference(yes); f.reference(no); f.reference(child);
            f.emit({0x7a, 2});
            f.at(yes); f.emit({0x71, 0x0f, 2});
            f.at(no); f.emit({0x72, 0x0f, 2});
            f.at(child); f.emit({0x73, 0x0f, 2});
            auto state = initial_state(33); state.window().active.working = working;
            run(version, f, state, "multiway jump/call " + std::to_string(working), 1);
        }
    // ONGOSUB_OFFSET is shared with a nested call. The nested count of two
    // overwrites the outer count of three. On return, the outer stream skips
    // only one remaining pointer and interprets the third pointer's four bytes
    // as glyphs. A conventional per-frame remaining count is observably wrong.
    {
        Fixture f;
        f.emit({0x1f, 0xc0, 3}); f.reference(yes); f.reference(no); f.reference({2, 0x7575}, 0x55);
        f.emit({0x7a, 2});
        f.at(yes); f.emit({0x1f, 0xc0, 2}); f.reference(child); f.reference(no); f.emit({0x71, 2});
        f.at(child); f.emit({0x72, 2});
        f.at(no); f.emit({0x73, 2});
        auto state = initial_state(93); state.window().active.working = 1;
        run(version, f, state, "nested multiway call shares remaining-table offset", 1);
    }
    for (unsigned slot = 0; slot < 10; ++slot) {
        Fixture f; f.command(8, child); f.emit({0x76, 2});
        f.at(child); f.emit({0x77, 2});
        auto state = initial_state(95); state.stream_slot = slot;
        run(version, f, state, "ten-slot ring starts at " + std::to_string(slot), 1);
    }
    for (unsigned depth : {1u, 2u, 5u, 8u, 10u, 11u, 12u}) {
        Fixture f;
        for (unsigned i = 0; i < depth; ++i) {
            f.at({1, std::uint16_t(0x2000 + i * 32)});
            if (i + 1 < depth) f.command(8, {1, std::uint16_t(0x2020 + i * 32)});
            // Calls beyond ten overwrite an ancestor's stream cursor. Its
            // later resume consumes this second terminator sequence, making
            // the alias observable while keeping the fixture finite.
            f.emit({0x70 + i, 0x0f, 2, 0x80 + i, 2});
        }
        run(version, f, initial_state(94), "nested return depth " + std::to_string(depth), 1);
    }
}

void compressed_corpus(eb::GameVersion version) {
    Fixture f;
    if (version == eb::GameVersion::US) {
        for (unsigned i = 0; i < 768; ++i) {
            f.dictionary(i, {0x60 + i % 32, 0x80 + i % 64, 0});
            f.emit({0x15 + i / 256, i % 256});
        }
        f.emit({0x0e, 0x15, 0x0b, 0x16, 0x0c, 0x17, 0x70, 2});
        run(version, f, initial_state(0x455), "all three dictionary banks and literal argument bytes", 3);
        dictionary_entries += 768;
        // A dictionary supplies a command selector/argument just like the
        // ordinary stream; only bytes outside an active handler are decoded.
        Fixture control;
        control.dictionary(0, {0x0e, 0x15, 0x73, 0});
        control.dictionary(1, {0x1b, 4, 0x74, 0});
        control.emit({0x15, 0, 0x15, 1, 0x75, 2});
        run(version, control, initial_state(62), "dictionary command continuation", 1);
        for (unsigned command : {8u, 0x0au}) {
            Fixture tail;
            // All four pointer bytes are nonzero: a zero byte would terminate
            // the dictionary fragment even during argument collection.
            tail.dictionary(0, {command, 0x21, 0x21, 0xd1, 0x55, 0x76, 0});
            tail.aliases.push_back({key(0x55d12121), Location{2, 0x2121}});
            tail.emit({0x15, 0, 0x74, 2}); tail.at({2, 0x2121}); tail.emit({0x75, 2});
            run(version, tail, initial_state(63), "dictionary tail survives jump/call " + std::to_string(command), 1);
        }
        Fixture split;
        split.dictionary(0, {0x0e, 0});
        split.emit({0x15, 0, 0x15, 0x76, 2});
        run(version, split, initial_state(64), "argument crosses dictionary terminator", 1);
        Fixture first;
        first.dictionary(0, {0x16, 0x75, 0}); first.emit({0x15, 0, 0x74, 2});
        run(version, first, initial_state(65), "dictionary first prefix is not recursively expanded", 1);
    } else {
        f.emit({0x15, 0x70, 0x16, 0x71, 0x17, 0x72, 0x0e, 0x15, 0x0b, 0x16, 0x0c, 0x17, 0x73, 2});
        run(version, f, initial_state(0x455), "JP ignores compression command bytes without consuming indices", 1);
    }
    Fixture wrap; wrap.entry = {1, 0xffff}; wrap.at(wrap.entry); wrap.emit({0x70, 0x71, 2});
    run(version, wrap, initial_state(7), "ordinary fetch wraps low word", 1);
    Fixture null_call; null_call.emit({8, 0, 0, 0, 0, 0x75, 2});
    run(version, null_call, initial_state(7), "null nested text call", 1);
}
} // namespace

int main() {
    try {
        for (auto version : {eb::GameVersion::US, eb::GameVersion::JP}) {
            core_corpus(version); branch_corpus(version); compressed_corpus(version);
        }
        require(compared_cases >= 280 && compared_requests > 4000 && dictionary_entries == 768,
                "Reference corpus unexpectedly shrank");
        std::cout << "PASS native dialogue: " << compared_cases << " complete original DISPLAY_TEXT cases, "
                  << source_steps << " original instructions, " << compared_requests << " ordered output requests, "
                  << state_checks << " register/flag/stream checks; all 768 US dictionary entries and JP behavior. "
                  << "Glyph/layout/wait/menu output helpers are explicit test seams; no pixel, real-input, audio, or whole-game proof.\n";
        return 0;
    } catch (const std::exception& error) {
        std::cerr << error.what() << '\n'; return 1;
    }
}
