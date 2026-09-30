// Complete original C064E3 and PROCESS_QUEUED_INTERACTIONS control flow.
// Named service frontiers C07C5B, C10004 and DOOR_TRANSITION are acknowledged
// explicitly; their actor/text/door behavior is not claimed by this fixture.
// Callback enqueues execute the real source helper in a separate guarded C
// frame against the same game fields. No native-produced state is installed
// into original memory after initial seeding (except explicit matched host
// callback mutations). Local packs remain opt-in and are never bundled.
#include "eb/asset_store.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/native/npcs/interaction_queue.hpp"
#include "generated_assets.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <string>
#include <utility>
#include <vector>

namespace {
using eb::GameVersion;
using eb::native::dialogue::ReferenceKey;
using namespace eb::native::npcs;
using Write = std::pair<unsigned, std::uint8_t>;
void require(bool value, const char *message) { if (!value) throw std::runtime_error(message); }
ReferenceKey key(unsigned value) {
    return {std::uint8_t(value), std::uint8_t(value >> 8), std::uint8_t(value >> 16), std::uint8_t(value >> 24)};
}
struct Layout {
    unsigned enqueue, consume, blink, text, door, records, current, next, type, pending, intangible, timer, phone, dad;
};
Layout layout(GameVersion version) {
    // Independently linked original labels, not the production data helper.
    if (version == GameVersion::US)
        return {0xc064e3, 0xc075dd, 0xc07c5b, 0xc10004, 0xc06bff, 0x5dea, 0x5e02, 0x5e04,
                0x5dc0, 0x5d9a, 0x5d58, 0x9e54, 0x9e56, 0xc7d33e};
    return {0xc06711, 0xc0781c, 0xc07eab, 0xc10000, 0xc06e2d, 0x6170, 0x6188, 0x618a,
            0x6146, 0x6120, 0x60de, 0xa05a, 0xa05c, 0xc9319e};
}
struct Totals {
    unsigned enqueue_calls{}, consumers{}, services{}, comparisons{}, callbacks{}, phone_resets{};
    std::uint64_t instructions{}, writes{};
};
struct Original {
    GameVersion version;
    Layout p;
    Totals totals;
    std::vector<std::uint8_t> memory = std::vector<std::uint8_t>(0x1000000);
    std::unique_ptr<eb::MainCpu65816> consumer;
    std::vector<Write> writes;
    bool complete{};
    explicit Original(const eb::GameAssets &assets) : version(assets.version), p(layout(version)) {
        std::copy(assets.image.begin(), assets.image.end(), memory.begin() + 0xc00000);
    }
    void put(unsigned offset, unsigned value) {
        memory.at(0x7e0000 + offset) = std::uint8_t(value);
        memory.at(0x7e0000 + offset + 1) = std::uint8_t(value >> 8);
    }
    static void encode(std::vector<std::uint8_t> &out, const Layout &p, const InteractionQueueState &state,
                       std::uint16_t intangible, DadPhoneState phone) {
        const auto word = [&](unsigned at, unsigned v) { out.at(at) = std::uint8_t(v); out.at(at + 1) = std::uint8_t(v >> 8); };
        for (unsigned i = 0; i < 4; ++i) {
            word(p.records + 6 * i, state.records[i].type);
            std::copy(state.records[i].key.begin(), state.records[i].key.end(), out.begin() + p.records + 6 * i + 2);
        }
        word(p.current, state.current); word(p.next, state.next); word(p.type, state.current_type);
        word(p.pending, state.pending); word(p.intangible, intangible);
        word(p.timer, phone.timer); word(p.phone, phone.queued);
    }
    void seed(const InteractionQueueState &state, std::uint16_t intangible, DadPhoneState phone) {
        consumer.reset(); complete = false; writes.clear();
        std::fill(memory.begin(), memory.begin() + 0x10000, 0xa5);
        std::vector<std::uint8_t> globals(0x20000, 0x5a);
        encode(globals, p, state, intangible, phone);
        std::copy(globals.begin(), globals.end(), memory.begin() + 0x7e0000);
    }
    void compare(const InteractionQueueState &state, std::uint16_t intangible, DadPhoneState phone) {
        std::vector<std::uint8_t> expected(0x20000, 0x5a);
        encode(expected, p, state, intangible, phone);
        require(std::equal(expected.begin(), expected.end(), memory.begin() + 0x7e0000),
                "Full original game-field state differs from the native queue/phone/appearance owner");
        ++totals.comparisons;
    }
    void configure(eb::MainCpu65816 &cpu, unsigned dp, unsigned stack) {
        cpu.set_runtime(eb::MainCpuRuntime::Legacy);
        cpu.emulation_mode = false; cpu.status_register = eb::MainCpu65816::InterruptDisable;
        cpu.direct_page = std::uint16_t(dp); cpu.stack_pointer = std::uint16_t(stack); cpu.data_bank = 0x7e;
        cpu.program_counter = 0xc0ff00;
        cpu.observe_memory_write = [&](std::uint32_t at, std::uint8_t value) {
            if (at >= 0x7e0000 && at < 0x800000) { writes.emplace_back(at - 0x7e0000, value); ++totals.writes; }
            else require(at >= 0x1a00 && at < 0x2000, "Queue source wrote outside its C frames or game fields");
        };
    }
    void step(eb::MainCpu65816 &cpu) { cpu.step_instruction(); ++totals.instructions; }
    void enqueue(std::uint16_t type, ReferenceKey data) {
        // Disjoint from the suspended consumer's C frame and hardware stack.
        const auto guard = std::vector<std::uint8_t>(memory.begin() + 0x1dc0, memory.begin() + 0x2000);
        eb::MainCpu65816 cpu(memory, version);
        configure(cpu, 0x1b00, 0x1bff);
        std::copy(data.begin(), data.end(), memory.begin() + 0x1b0e);
        cpu.accumulator = type; cpu.execute_instruction<0x22>(p.enqueue, 4);
        for (unsigned i = 0; i < 1000 && (cpu.program_counter != 0xc0ff04 || cpu.stack_pointer != 0x1bff); ++i) step(cpu);
        require(cpu.program_counter == 0xc0ff04 && cpu.stack_pointer == 0x1bff && cpu.direct_page == 0x1b00 &&
                    cpu.data_bank == 0x7e, "Original enqueue failed to preserve its caller ABI");
        require(std::equal(guard.begin(), guard.end(), memory.begin() + 0x1dc0),
                "Callback enqueue damaged the suspended consumer's locals or return stack");
        ++totals.enqueue_calls;
    }
    void begin() {
        consumer = std::make_unique<eb::MainCpu65816>(memory, version);
        configure(*consumer, 0x1e00, 0x1fff);
        consumer->execute_instruction<0x22>(p.consume, 4);
        ++totals.consumers;
    }
    std::optional<InteractionQueueService> frontier() {
        for (unsigned i = 0; i < 2000; ++i) {
            auto &cpu = *consumer;
            if (cpu.program_counter == 0xc0ff04 && cpu.stack_pointer == 0x1fff) {
                require(cpu.direct_page == 0x1e00 && cpu.data_bank == 0x7e, "Original consumer changed caller ABI");
                complete = true; return {};
            }
            if (cpu.program_counter == p.blink) return InteractionQueueService{InteractionQueueServiceKind::ClearPartySpriteBlink, {}};
            if (cpu.program_counter == p.text || cpu.program_counter == p.door) {
                ReferenceKey data;
                std::copy_n(memory.begin() + cpu.direct_page + 14, 4, data.begin());
                return InteractionQueueService{cpu.program_counter == p.text ? InteractionQueueServiceKind::Text :
                                                                                 InteractionQueueServiceKind::Door, data};
            }
            step(cpu);
        }
        throw std::runtime_error("Original queue did not reach its next frontier");
    }
    void acknowledge(InteractionQueueServiceKind service) {
        require(consumer != nullptr, "Missing original consumer");
        if (service == InteractionQueueServiceKind::Door) consumer->execute_instruction<0x60>(0, 1);
        else consumer->execute_instruction<0x6b>(0, 1);
        ++totals.services;
    }
    void ordered(std::size_t begin, std::vector<unsigned> words) {
        require(writes.size() - begin == words.size() * 2, "Original queue made an unexpected number of global writes");
        for (unsigned i = 0; i < words.size(); ++i)
            require(writes[begin + 2 * i].first == words[i] && writes[begin + 2 * i + 1].first == words[i] + 1,
                    "Original queue changed its ordered word publication");
    }
};
struct Case {
    InteractionQueueState state;
    std::uint16_t intangible = 0xabcd;
    DadPhoneState phone{0x1234, 0x5678};
    bool callback{};
};
InteractionQueueState seeded() {
    InteractionQueueState state;
    for (unsigned i = 0; i < 4; ++i) state.records[i] = {std::uint16_t(0x1100 + i), key(0x81234567 + i)};
    state.pending = 0x9876; state.current_type = 0xabcd;
    return state;
}
void enqueue_case(Original &source, InteractionQueue &queue, InteractionQueueState &state, std::uint16_t intangible,
                  DadPhoneState phone, std::uint16_t type, ReferenceKey data) {
    const auto before = state;
    const auto start = source.writes.size();
    source.enqueue(type, data);
    const auto accepted = queue.enqueue(type, data);
    require(accepted == (before.current_type != type), "Source current-type suppression differs");
    source.compare(state, intangible, phone);
    if (accepted) source.ordered(start, {source.p.records + before.next * 6, source.p.records + before.next * 6 + 2,
                                        source.p.records + before.next * 6 + 4, source.p.next, source.p.pending});
    else source.ordered(start, {});
}
void enqueues(Original &source) {
    for (unsigned current = 0; current < 4; ++current) for (unsigned next = 0; next < 4; ++next)
        for (unsigned type : {0u, 2u, 8u, 9u, 10u, 0x1234u, 0xffffu}) {
            auto state = seeded(); state.current = std::uint16_t(current); state.next = std::uint16_t(next);
            state.current_type = std::uint16_t(type);
            std::uint16_t intangible = 0xaaaa; DadPhoneState phone{0xbbbb, 0xcccc};
            source.seed(state, intangible, phone);
            InteractionQueue queue(source.version, state, intangible, phone);
            enqueue_case(source, queue, state, intangible, phone, std::uint16_t(type), key(0x8f13579b));
            for (unsigned i = 0; i < 6; ++i)
                enqueue_case(source, queue, state, intangible, phone, std::uint16_t(type ^ 0x100), key(0x8f135790 + i));
        }
}
void consume_case(Original &source, Case input) {
    source.seed(input.state, input.intangible, input.phone);
    InteractionQueue queue(source.version, input.state, input.intangible, input.phone);
    const auto captured = input.state.records.at(input.state.current);
    auto operation = queue.begin(); source.begin();
    for (unsigned stage = 0; stage < 4; ++stage) {
        const auto start = source.writes.size();
        auto expected = source.frontier();
        auto progress = InteractionQueueProgress::BudgetExhausted;
        for (unsigned i = 0; i < 12 && progress == InteractionQueueProgress::BudgetExhausted; ++i)
            progress = operation->advance((source.totals.consumers & 1) ? 1 : 4096);
        source.compare(input.state, input.intangible, input.phone);
        if (source.complete) {
            require(progress == InteractionQueueProgress::Finished && operation->complete() && !operation->service(),
                    "Native consumer did not finish at the original return");
            const auto dad = key(source.p.dad);
            const bool reset = captured.type == 10 && std::equal(captured.key.begin(),
                captured.key.begin() + (source.version == GameVersion::JP ? 2 : 4), dad.begin());
            std::vector<unsigned> fields;
            if (reset) { fields = {source.p.timer, source.p.phone}; ++source.totals.phone_resets; }
            fields.push_back(source.p.pending); fields.push_back(source.p.type);
            source.ordered(start, fields);
            return;
        }
        require(progress == InteractionQueueProgress::Suspended && operation->service() == expected,
                "Native service kind, captured input key or ordering differs from original execution");
        if (stage == 0) source.ordered(start, {source.p.type, source.p.current, source.p.intangible});
        else source.ordered(start, {});
        require(operation->advance(0) == InteractionQueueProgress::Suspended && operation->service() == expected,
                "Native pending service changed without acknowledgement");
        if (input.callback && expected->kind != InteractionQueueServiceKind::ClearPartySpriteBlink) {
            enqueue_case(source, queue, input.state, input.intangible, input.phone, captured.type, key(0x01020304));
            for (unsigned i = 0; i < 5; ++i)
                enqueue_case(source, queue, input.state, input.intangible, input.phone,
                             std::uint16_t(captured.type ^ 0x100), key(0x7e600000 + i));
            input.phone = {0x5678, 0x9abc}; input.intangible = 0xdef0;
            source.put(source.p.timer, input.phone.timer); source.put(source.p.phone, input.phone.queued);
            source.put(source.p.intangible, input.intangible);
            source.compare(input.state, input.intangible, input.phone);
            require(operation->service() == expected, "Callback queue wrap changed the pending service input");
            ++source.totals.callbacks;
        }
        source.acknowledge(expected->kind); operation->respond();
    }
    throw std::runtime_error("Native/original consumer exceeded its bounded service sequence");
}
void consumers(Original &source) {
    for (unsigned current = 0; current < 4; ++current) for (unsigned next = 0; next < 4; ++next)
        for (unsigned type : {0u, 1u, 2u, 8u, 9u, 10u, 0x100u, 0x800au, 0xffffu})
            for (unsigned intangible : {0u, 1u, 0xffffu}) {
                Case c; c.state = seeded(); c.state.current = std::uint16_t(current); c.state.next = std::uint16_t(next);
                c.state.records[current] = {std::uint16_t(type), key(source.p.dad)};
                c.state.pending = 0; c.intangible = std::uint16_t(intangible);
                consume_case(source, c);
            }
    for (unsigned type : {0u, 2u, 8u, 9u, 10u}) for (unsigned changed = 0; changed < 5; ++changed) {
        Case c; c.state = seeded(); c.state.current = 3; c.state.next = 3; c.callback = true;
        auto data = key(source.p.dad); if (changed < 4) data[changed] ^= 0x80;
        c.state.records[3] = {std::uint16_t(type), data}; consume_case(source, c);
    }
    Case null; null.state = seeded(); null.state.records[0] = {0, {}}; consume_case(source, null);
}
void run(const char *path) {
    const auto assets = eb::load_game_assets(path, eb::asset_profiles());
    Original source(assets);
    try { enqueues(source); consumers(source); }
    catch (const std::exception &error) {
        throw std::runtime_error(std::string(assets.version == GameVersion::US ? "US" : "JP") +
                                 " consumer=" + std::to_string(source.totals.consumers) +
                                 " enqueue=" + std::to_string(source.totals.enqueue_calls) + ": " + error.what());
    }
    const auto &n = source.totals;
    std::cout << "{\"region\":\"" << (assets.version == GameVersion::US ? "US" : "JP")
              << "\",\"image_sha256\":\"" << eb::sha256(assets.image) << "\",\"enqueue_calls\":" << n.enqueue_calls
              << ",\"consumer_calls\":" << n.consumers << ",\"named_service_acknowledgements\":" << n.services
              << ",\"full_state_comparisons\":" << n.comparisons << ",\"callback_scenarios\":" << n.callbacks
              << ",\"phone_resets\":" << n.phone_resets << ",\"ordered_global_bytes\":" << n.writes
              << ",\"source_instructions\":" << n.instructions << ",\"result\":\"pass\"}\n";
}
} // namespace
int main(int argc, char **argv) {
    if (argc < 2) {
        std::cout << "Opt-in: native_interaction_queue_reference <US.ebpak> [JP.ebpak]\n";
        return 77;
    }
    try { for (int i = 1; i < argc; ++i) run(argv[i]); }
    catch (const std::exception &error) { std::cerr << error.what() << '\n'; return 1; }
}
