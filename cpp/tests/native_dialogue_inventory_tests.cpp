#include "eb/native/dialogue/conversation.hpp"
#include "eb/native/dialogue/fonts.hpp"
#include "eb/native/dialogue/inventory.hpp"
#include "eb/native/dialogue/menu_model.hpp"
#include "eb/native/party/state.hpp"
#include "native_dialogue_test_assets.hpp"
#include "native_dialogue_substitution_test_assets.hpp"
#include <algorithm>
#include <functional>
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native::dialogue;
namespace party = eb::native::party;
using eb::GameVersion;
unsigned checks{};
std::string context;
void check(bool value, const char* message) {
    ++checks;if (!value) throw std::runtime_error(context + ": " + message);
}
template<class F> void rejects(F operation, const char* message) {
    bool caught = false;try { operation(); } catch (const std::exception&) { caught = true; }
    check(caught, message);
}
struct Resources {
    std::shared_ptr<const FontResources> fonts;
    std::shared_ptr<const WindowResources> windows;
    std::shared_ptr<const MenuResources> menus;
    std::shared_ptr<const SubstitutionResources> items;
    std::uint8_t a{}, b{}, c{}, empty{};
    explicit Resources(GameVersion version) {
        dialogue_test_assets::WindowInput input(version);
        dialogue_test_assets::add_text_fonts(input);
        for (unsigned id = 0; id < input.count; ++id) {
            input.put(input.configs + id * 8, 0);input.put(input.configs + id * 8 + 2, 0);
            input.put(input.configs + id * 8 + 4, 30);input.put(input.configs + id * 8 + 6, 18);
        }
        // Window4 intentionally paginates a fourteen-item inventory.
        input.put(input.configs + 4 * 8 + 6, 10);
        const bool jp = version == GameVersion::JP;
        const auto marker = jp ? 0x3e3e8 : 0x3e406;
        for (unsigned i = 0; i < 4; ++i) input.put(marker + i * 2, 64 + i);
        const auto label = jp ? 0x3e42e : 0x3e44c;
        input.image[label] = jp ? 0x41 : 0x71;
        input.image[label + 1] = jp ? 0x42 : 0x72;
        input.image[label + 2] = jp ? 0x43 : 0x73;
        input.image[label + 3] = 0;
        dialogue_substitution_test_assets::Input catalog(version);
        a = jp ? 0x41 : 0x71;b = jp ? 0x42 : 0x72;c = jp ? 0x43 : 0x73;empty = jp ? 0x4c : 0x7c;
        for (unsigned id = 0; id < 6; ++id) {
            const auto at = catalog.items + id * catalog.item_stride;
            std::fill_n(catalog.image.begin() + at, catalog.name_size, id == 0 ? empty : id == 1 ? a : b);
        }
        catalog.image[catalog.items + 3 * catalog.item_stride] = c;
        catalog.image[catalog.items + 3 * catalog.item_stride + 1] = 0;
        catalog.image[catalog.items + 4 * catalog.item_stride] = 0;
        catalog.overlay(input.image);
        fonts = FontResources::import(input.image, version);windows = input.import();
        menus = MenuResources::import(input.image, version);
        items = SubstitutionResources::import(input.image, version);
    }
};
const Resources& resources(GameVersion version) {
    static const Resources us(GameVersion::US), jp(GameVersion::JP);
    return version == GameVersion::US ? us : jp;
}
std::shared_ptr<const Program> program(GameVersion version, std::vector<std::uint8_t> root = {2},
                                     std::vector<std::uint8_t> child = {2}) {
    return std::make_shared<Program>(version,
        std::vector<ContentBlock>{{0, 0, std::move(root)}, {1, 0, std::move(child)}},
        std::vector<Location>{{0, 0}, {1, 0}});
}
struct Fixture {
    GameVersion version;
    State state;
    party::State party;
    TextOutput output;
    WindowHost windows;
    std::shared_ptr<const Program> content;
    MenuHost menus;
    explicit Fixture(GameVersion value, std::vector<std::uint8_t> root = {2},
                     std::vector<std::uint8_t> child = {2}, bool configured = true)
        : version(value), party(value), output(resources(value).fonts, state),
          windows(resources(value).windows, state, output), content(program(value, std::move(root), std::move(child))),
          menus(content, windows, resources(value).menus) {
        for (unsigned member = 1; member <= 6; ++member) {
            auto name = party.name_field(member);
            std::fill(name.begin(), name.end(), std::uint8_t(resources(value).a + member - 1));
        }
        party.controlled_count = 2;
        state.word_wrap = false;state.unfocused_register_slot = 0;
        output.policy().instant = true;output.policy().text_speed = 0;
        output.policy().sound_mode = 3;output.policy().character_padding = 0;
        if (configured) menus.inventory().configure(resources(value).items, party::View(party));
    }
    void window(WindowAction action, unsigned id, std::vector<std::uint8_t> title = {}) {
        auto operation = windows.begin({action, WindowId{id}, std::move(title), 5});
        for (unsigned n = 0; n < 100; ++n) {
            if (operation->advance() == OutputProgress::Complete) return;
            operation->respond();
        }
        throw std::runtime_error("Synthetic window setup did not complete");
    }
    std::vector<unsigned> chain(unsigned id) {
        MenuModel model(windows, *resources(version).fonts);
        const auto first = windows.metadata({id}).first_option;
        return model.chain(first == 0xffff ? std::nullopt : std::optional<unsigned>{first});
    }
};
bool tick(const MenuPrintEffect& event) {
    if (const auto* window = std::get_if<WindowEffect>(&event)) return window->kind == WindowEffectKind::WindowTick;
    return std::get<TextEffect>(event).kind == TextEffectKind::WindowTick;
}
bool wait(const MenuPrintEffect& event) {
    const auto* effect = std::get_if<WindowEffect>(&event);
    return effect && effect->kind == WindowEffectKind::FrameWait;
}
using Hook = std::function<void(Inventory::Operation&, unsigned, const MenuPrintEffect&)>;
std::vector<MenuPrintEffect> finish(Fixture& f, Inventory::Operation& operation, Hook hook = {}, unsigned budget = 1) {
    std::vector<MenuPrintEffect> events;
    for (unsigned work = 0; work < 50000; ++work) {
        const auto progress = operation.advance(budget);
        if (progress == Progress::Finished) {
            check(operation.complete() && !operation.effect(), "Completed inventory retained an event");
            return events;
        }
        if (progress == Progress::BudgetExhausted) continue;
        check(bool(operation.effect()), "Inventory suspended without an effect");
        const auto event = *operation.effect();
        const auto held = f.windows.frame();const auto pixels = held->pixels;
        check(operation.advance(0) == Progress::Suspended && operation.advance(4096) == Progress::Suspended &&
                  operation.effect() == event && held->pixels == pixels,
              "Pending inventory effect advanced twice or altered a sampled frame");
        events.push_back(event);
        if (hook) hook(operation, unsigned(events.size() - 1), event);
        operation.respond();
    }
    throw std::runtime_error(context + ": inventory exceeded bounded fixture work");
}
std::vector<ConversationEvent> finish(Conversation& conversation, unsigned budget = 1,
                                     std::function<void(const ConversationEvent&)> hook = {}) {
    std::vector<ConversationEvent> events;
    for (unsigned n = 0; n < 50000; ++n) {
        const auto status = conversation.advance(budget);
        if (status == Progress::Finished) return events;
        if (status == Progress::BudgetExhausted) continue;
        check(conversation.event().has_value() && !std::holds_alternative<Request>(*conversation.event()),
              "Inventory Conversation exposed an unhandled authored request");
        events.push_back(*conversation.event());
        if (hook) hook(events.back());
        conversation.respond();
    }
    throw std::runtime_error(context + ": inventory Conversation did not complete");
}
std::vector<std::uint8_t> label(const WindowMenuOption& option) {
    std::vector<std::uint8_t> bytes(option.label.begin(), option.label.end());
    bytes.push_back(option.pixel_align);
    const auto zero = std::find(bytes.begin(), bytes.end(), 0);
    bytes.erase(zero, bytes.end());return bytes;
}
void baseline_inventory(GameVersion version) {
    for (unsigned member : {1u, 4u, 5u, 6u}) for (unsigned budget : {1u, 4096u}) {
        Fixture f(version);
        f.party.character(member).items = {1, 0, 1, 2, 0, 3, 4, 0, 2, 0, 3, 0, 1, 0};
        f.party.character(member).equipment = {1, 4, 7, 14};
        f.window(WindowAction::Open, 9);f.windows.set_pagination(WindowId{9}, 3);
        const auto entry_names = std::vector<std::uint8_t>(f.party.name_field(member).begin(), f.party.name_field(member).end());
        auto operation = f.menus.inventory().begin({2}, std::uint16_t(member));
        check(operation->advance(0) == Progress::BudgetExhausted && !f.windows.slot_for({2}),
              "Zero inventory work budget created a window");
        const auto events = finish(f, *operation, {}, budget);
        const auto indices = f.chain(2);
        check(indices.size() == 8 && f.windows.pagination_window() == WindowId{2} &&
                  f.windows.pagination_frame() == 3 && f.windows.metadata({2}).title == entry_names,
              "Inventory skipped a position, changed title bytes or lost captured pagination frame");
        const auto& pool = f.windows.menu_options();
        const auto first = label(pool[indices[0]]), duplicate = label(pool[indices[1]]);
        const auto& r = resources(version);
        if (version == GameVersion::US) {
            check(first.size() == 25 && first[0] == 0x22 &&
                      std::all_of(first.begin() + 1, first.end(), [&](auto x) { return x == r.a; }) &&
                      duplicate == std::vector<std::uint8_t>(25, r.a) && !pool[indices[1]].pixel_align,
                  "US equipped position versus duplicate item or odd-copy residue differs");
        } else {
            check(first.size() == 11 && first.back() == 0x22 && duplicate == std::vector<std::uint8_t>(10, r.a),
                  "Japanese equipment suffix was applied by item identity or truncated");
        }
        check(label(pool[indices[4]]) == std::vector<std::uint8_t>{0x22},
              "Equipped empty name failed to produce its marker");
        check(f.windows.text_scratch()[0] == (version == GameVersion::US ? 0x22 : r.empty) &&
                  f.windows.text_scratch()[version == GameVersion::US ? 25 : 11] == 0,
              "Item-zero position did not prepare its name/equipment before append omission");
        for (auto index : indices)
            check(pool[index].flags == 1 && !pool[index].selected_text && pool[index].userdata == 0,
                  "Inventory used userdata/selected-text wrappers rather than basic ordinal entries");
        const auto frames = std::count_if(events.begin(), events.end(), wait);
        const auto ticks = std::count_if(events.begin(), events.end(), tick);
        check(frames == (version == GameVersion::US ? 2 : 0) && ticks == (version == GameVersion::US ? 1 : 0) &&
                  f.output.policy().instant,
              "Regional title/frame/window tick order or final instant state differs");
        check(std::holds_alternative<WindowEffect>(events.front()) &&
                  std::get<WindowEffect>(events.front()).kind == WindowEffectKind::ClearPartyBlink,
              "Inventory omitted CREATE's typed party-blink effect");
        rejects([&] { operation->respond(); }, "Completed inventory accepted another response");
    }
}
void empty_and_scratch(GameVersion version) {
    for (bool instant : {false, true}) for (unsigned count : {0u, 1u, 6u, 255u}) {
        Fixture f(version);f.party.controlled_count = std::uint8_t(count);
        f.window(WindowAction::Open, 9);f.windows.set_pagination(WindowId{9}, 2);f.output.policy().instant = instant;
        auto operation = f.menus.inventory().begin({2}, 1);finish(f, *operation);
        check(f.chain(2).empty() && f.windows.pagination_window() == WindowId{count == 1 ? 9u : 2u} &&
                  f.output.policy().instant == (version == GameVersion::US || instant),
              "Empty inventory normalized party count or changed regional instant behavior");
        check(f.windows.menu_state().early_tick_exit == (version == GameVersion::US),
              "Empty menu did not retain its regional early-tick side effect");
    }
    if (version != GameVersion::US) return;
    Fixture cold(version);cold.party.character(1).items[0] = 2;
    auto cold_operation = cold.menus.inventory().begin({2}, 1);finish(cold, *cold_operation);
    check(label(cold.windows.menu_options()[cold.chain(2)[0]]) == std::vector<std::uint8_t>(24, resources(version).b),
          "Cold unequipped name invented a twenty-fifth copied byte");
    Fixture warm(version);warm.party.character(1).items[0] = 1;warm.party.character(1).equipment[0] = 1;
    auto first = warm.menus.inventory().begin({2}, 1);finish(warm, *first);
    check(warm.windows.text_scratch()[24] == resources(version).a,
          "Equipped name did not seed shared byte24 through genuine inventory execution");
    warm.party.character(2).items[0] = 2;
    auto second = warm.menus.inventory().begin({2}, 2);finish(warm, *second);
    auto expected = std::vector<std::uint8_t>(24, resources(version).b);expected.push_back(resources(version).a);
    check(label(warm.windows.menu_options()[warm.chain(2)[0]]) == expected &&
                  warm.windows.text_scratch()[24] == resources(version).a,
          "Unequipped name discarded shared scratch residue from the earlier operation");
}
void failed_create(GameVersion version) {
    for (bool full_titles : {false, true}) {
        Fixture f(version);
        for (unsigned id = 0; id < 8; ++id) f.window(WindowAction::Open, id);
        if (full_titles) for (unsigned id = 0; id < (version == GameVersion::US ? 5u : 4u); ++id)
            f.window(WindowAction::Title, id, {resources(version).a});
        f.state.focus = WindowId{7};f.party.character(1).items[0] = 3;
        const auto order = std::vector<WindowId>(f.windows.draw_order().begin(), f.windows.draw_order().end());
        auto operation = f.menus.inventory().begin({8}, 1);const auto events = finish(f, *operation);
        check(!f.windows.slot_for({8}) && f.state.focus == WindowId{7} &&
                  f.windows.pagination_window() == WindowId{8} &&
                  std::vector<WindowId>(f.windows.draw_order().begin(), f.windows.draw_order().end()) == order &&
                  f.chain(7).size() == 1 && f.windows.dummy_window().title ==
                      std::vector<std::uint8_t>(f.party.name_field(1).begin(), f.party.name_field(1).end()),
              "Failed CREATE discarded helper continuation or gave the dummy a live canvas");
        check(f.windows.dummy_window().title_owner.has_value() == !full_titles &&
                  std::count_if(events.begin(), events.end(), wait) ==
                      (version == GameVersion::US && !full_titles ? 2 : 0),
              "Failed CREATE title-owner allocation/wait behavior differs");
    }
}
void late_values_and_captured_member() {
    Fixture f(GameVersion::US);f.party.character(1).items[0] = 1;
    f.window(WindowAction::Open, 3);
    MenuModel model(f.windows, *resources(f.version).fonts);model.append(std::array<std::uint8_t, 1>{resources(f.version).c});
    const auto original_title = std::vector<std::uint8_t>(f.party.name_field(1).begin(), f.party.name_field(1).end());
    auto operation = f.menus.inventory().begin({2}, 1);unsigned waits = 0, ticks = 0;
    finish(f, *operation, [&](auto&, unsigned, const MenuPrintEffect& effect) {
        if (wait(effect) && ++waits == 1) {
            rejects([&] { f.menus.inventory().begin_nested({5}, 2, *operation); },
                    "Frame-only title wait admitted a world/dialogue callback");
            f.party.character(1).items[0] = 2;f.party.character(1).equipment[0] = 1;
            std::fill(f.party.name_field(1).begin(), f.party.name_field(1).end(), resources(f.version).b);
            f.party.controlled_count = 1;
        }
        if (tick(effect)) {
            ++ticks;
            check(label(f.windows.menu_options()[f.chain(2)[0]]).front() == 0x22,
                  "Inventory/equipment were captured before the real title wait");
            f.party.character(1).items.fill(0);
            f.state.focus = WindowId{3};f.windows.metadata({3}).selected_option = 0x1234;
            f.windows.metadata({3}).page_number = 0x4321;
        }
    });
    check(waits == 2 && ticks == 1 && f.windows.metadata({2}).title == original_title &&
              f.windows.pagination_window() == WindowId{2} && f.chain(2).size() == 1 &&
              f.windows.metadata({3}).layout_columns == 2 &&
              f.windows.metadata({3}).selected_option == 0x1234 && f.windows.metadata({3}).page_number == 0x4321,
          "Copied title/pagination changed late, labels rebuilt, or final layout ignored live focus/selection");
}
void shared_pool_exhaustion(GameVersion version) {
    for (unsigned occupied : {69u, 70u}) {
        Fixture f(version);f.window(WindowAction::Open, 0);
        MenuModel model(f.windows, *resources(version).fonts);
        for (unsigned i = 0; i < occupied; ++i)
            check(model.append(std::array<std::uint8_t, 1>{resources(version).c}) == i,
                  "Whole-service pool setup did not fill the intended records");
        const auto before = f.windows.menu_options();
        f.party.character(1).items[0] = 3;
        auto operation = f.menus.inventory().begin({2}, 1);finish(f, *operation);
        check(f.chain(0).size() == occupied, "Target CREATE released an unrelated window's menu chain");
        if (occupied == 69) {
            check(f.chain(2) == std::vector<unsigned>{69} && f.windows.menu_options()[69].flags == 1 &&
                      !f.windows.menu_options()[69].previous,
                  "Inventory discarded the last ordinary allocation because its index equals fallback69");
            for (unsigned i = 0; i < 69; ++i)
                check(f.windows.menu_options()[i] == before[i], "Successful final allocation altered an unrelated chain");
        } else {
            check(f.chain(2).empty() && f.windows.menu_options() == before,
                  "Whole inventory/layout changed fallback69 or linked a failed allocation");
        }
        check(f.windows.text_scratch()[0] == resources(version).empty,
              "Exhaustion stopped the remaining zero-item preparation loop");
    }
    // Imported-name validation occurs before the append failure. Exhausting
    // the menu pool cannot turn an out-of-catalog item into a silent no-op.
    Fixture invalid(version);invalid.window(WindowAction::Open, 0);
    MenuModel model(invalid.windows, *resources(version).fonts);
    for (unsigned i = 0; i < 70; ++i) model.append(std::array<std::uint8_t, 1>{resources(version).c});
    invalid.party.character(1).items[0] = 254;
    auto operation = invalid.menus.inventory().begin({2}, 1);
    rejects([&] { finish(invalid, *operation); }, "Full pool skipped required invalid-item validation");
}
void response_contract(GameVersion version) {
    Fixture f(version);f.windows.prompt_state().pressed = 0x55;
    auto operation = f.menus.inventory().begin({2}, 1);
    unsigned frames = 0, ticks = 0;
    for (unsigned n = 0; n < 1000 && !operation->complete(); ++n) {
        const auto progress = operation->advance(1);
        if (progress != Progress::Suspended) continue;
        const auto event = *operation->effect();
        if (wait(event)) {
            if (!frames++) operation->respond(0x1234);
            else operation->respond();
            check(f.windows.prompt_state().pressed == 0x1234,
                  "Explicit frame response or omitted following response lost shared input");
        } else if (tick(event)) {
            ++ticks;operation->respond(0);
            check(f.windows.prompt_state().pressed == 0,
                  "Explicit zero WindowTick input failed to replace prior pressed state");
        } else {
            operation->respond(0xffff);
            check(f.windows.prompt_state().pressed == 0x55,
                  "Synchronous ClearPartyBlink response was treated as an input poll");
        }
    }
    check(operation->complete() && frames == (version == GameVersion::US ? 2u : 0u) &&
              ticks == (version == GameVersion::US ? 1u : 0u),
          "Input response fixture missed its exact regional frame/world boundaries");
}
void authored_wrapper(GameVersion version) {
    for (bool enabled : {false, true}) {
        std::vector<std::uint8_t> script{0x1a, 5, 2, 0, 2};
        if (enabled) script.insert(script.begin(), {0x18, 2});
        Fixture f(version, script);f.window(WindowAction::Open, 1);
        f.party.character(6).items[0] = 3;
        f.state.window().active.argument = 0xabcd0006;
        f.output.set_style({1}, {0, 5, true, false, true});f.output.set_cursor({1}, {3, 1});
        f.windows.menu_state().force_left_alignment = true;
        Conversation conversation(f.content, f.menus);conversation.start(EntryId{0});
        const auto stream = conversation.snapshot().frames.front().stream_slot;
        unsigned blink = 0;
        finish(conversation, 1, [&](const ConversationEvent& event) {
            if (const auto* e = std::get_if<WindowEffect>(&event); e && e->kind == WindowEffectKind::ClearPartyBlink) {
                ++blink;
                if (version == GameVersion::US && blink == 2) {
                    const auto& saved = f.state.streams[stream].saved_window;
                    check(bool(saved) == enabled && saved.attributes().cursor == TextCursor{} &&
                              saved.attributes().id == WindowId{1} &&
                              f.output.window({1}).cursor == TextCursor{} && !f.windows.menu_state().force_left_alignment,
                          "US preclear changed restore enablement or failed to update this stream's saved bytes");
                }
            }
        });
        check(f.chain(2).size() == 1 && f.windows.metadata({2}).title.front() == resources(version).a + 5 &&
                  blink == (version == GameVersion::US ? 2u : 1u),
              "Authored inventory narrowed low-word argument fallback or misapplied US window1 wrapper");
        check(f.state.focus == WindowId{enabled ? 1u : 2u},
              "Bare inventory enabled restoration or explicit CC1802 failed to restore focus");
        if (enabled)
            check(f.output.window({1}).cursor == (version == GameVersion::US ? TextCursor{} : TextCursor{3, 1}),
                  "Inventory failed the regional saved-cursor return behavior");
        check(f.windows.menu_state().force_left_alignment == (version == GameVersion::JP),
              "Japanese inventory acquired the US alignment reset");
        const auto retained = f.state.streams[stream].saved_window.attributes();
        f.state.window().active.argument = 6;
        conversation.start(EntryId{0});
        check(conversation.snapshot().frames.front().stream_slot == stream &&
                  !f.state.streams[stream].saved_window &&
                  f.state.streams[stream].saved_window.attributes() == retained,
              "Restart cleared retained attribute bytes instead of only disabling return restoration");
        finish(conversation);
    }
    for (unsigned invalid : {0u, 7u, 0x0101u, 0xffffu}) {
        Fixture bad(version, {0x1a, 5, 2, 0, 2});bad.window(WindowAction::Open, 0);
        bad.state.window().active.argument = invalid;
        Conversation rejected(bad.content, bad.menus);rejected.start(EntryId{0});
        rejects([&] { finish(rejected); }, "Invalid full-word character fallback was truncated or invented");
    }
}

void configuration_and_ownership(GameVersion version) {
    Fixture f(version, {2}, {2}, false);
    rejects([&] { f.menus.inventory().begin({2}, 1); }, "Inventory ran without resources/party binding");
    const auto other = version == GameVersion::US ? GameVersion::JP : GameVersion::US;
    party::State foreign(other);
    rejects([&] { f.menus.inventory().configure(resources(other).items, party::View(f.party)); },
            "Foreign item catalog was accepted");
    rejects([&] { f.menus.inventory().configure(resources(version).items, party::View(foreign)); },
            "Foreign party owner was accepted");
    f.menus.inventory().configure(resources(version).items, party::View(f.party));
    auto operation = f.menus.inventory().begin({2}, 1);
    rejects([&] { f.menus.inventory().configure(resources(version).items, party::View(f.party)); },
            "Active inventory changed its borrowed providers");
    rejects([&] { f.menus.inventory().begin({3}, 1); }, "Unrelated inventory entered an owned output activation");
    rejects([&] { operation->respond(); }, "Inventory acknowledged work without a pending effect");
    rejects([&] { f.menus.inventory().begin_nested({3}, 1, *operation); },
            "Inventory nested at a work-budget boundary");
    finish(f, *operation);
    auto unfinished = f.menus.inventory().begin({2}, 1);
    while (unfinished->advance(1) == Progress::BudgetExhausted) {}
    const auto held = f.windows.frame();const auto pixels = held->pixels;
    unfinished.reset();
    check(f.windows.frame()->pixels == pixels, "Abandoning execution rewound an already visible scene");
    rejects([&] { f.menus.inventory().begin({3}, 1); }, "Abandoned inventory did not poison its execution tree");
}
void nested_from_conversation(GameVersion version) {
    const auto glyph = resources(version).a;
    Fixture f(version, {glyph, 2});f.window(WindowAction::Open, 0);
    f.output.policy().instant = false;f.output.policy().text_speed = 1;
    Conversation parent(f.content, f.menus);parent.start(EntryId{0});
    while (parent.advance(1) == Progress::BudgetExhausted) {}
    check(parent.event() && std::holds_alternative<TextEffect>(*parent.event()) &&
              std::get<TextEffect>(*parent.event()).kind == TextEffectKind::WindowTick,
          "Fixture did not reach a genuine glyph WindowTick");
    const auto pending = parent.event();const auto held = f.windows.frame();const auto pixels = held->pixels;
    Fixture foreign(version);
    rejects([&] { foreign.menus.inventory().begin_nested({2}, 1, parent); },
            "A foreign inventory host borrowed another output's callback owner");
    auto child = f.menus.inventory().begin_nested({2}, 6, parent);
    rejects([&] { parent.advance(); }, "Parent advanced while nested inventory owned output");
    finish(f, *child);
    check(parent.event() == pending && held->pixels == pixels,
          "Nested inventory lost its parent continuation or mutated a held frame");
    f.windows.prompt_state().pressed = 0x128;
    parent.respond();finish(parent);
    check(f.windows.prompt_state().pressed == 0x128, "Omitted parent response discarded child shared input");
}
void nested_inventory_and_footer() {
    Fixture f(GameVersion::US);f.party.character(1).items[0] = 3;
    auto parent = f.menus.inventory().begin({2}, 1);bool nested = false;
    finish(f, *parent, [&](Inventory::Operation& operation, unsigned, const MenuPrintEffect& event) {
        if (!tick(event) || nested) return;
        nested = true;const auto pending = operation.effect();
        auto child = f.menus.inventory().begin_nested({3}, 2, operation);
        rejects([&] { operation.respond(); }, "Parent response bypassed active child inventory");
        finish(f, *child, [&](auto&, unsigned, const MenuPrintEffect& child_event) {
            if (tick(child_event)) f.windows.prompt_state().pressed = 0x321;
        });
        check(operation.effect() == pending, "Direct child lost the pending parent tick");
    });
    check(nested && f.windows.prompt_state().pressed == 0x321,
          "Direct child inventory failed to retain shared pressed state");

    Fixture page(GameVersion::US);page.party.character(1).items.fill(3);
    auto scrolling = page.menus.inventory().begin({4}, 1);
    unsigned waits = 0;bool child_done = false, observed_live_next = false;
    finish(page, *scrolling, [&](Inventory::Operation& operation, unsigned, const MenuPrintEffect& event) {
        if (wait(event)) {
            ++waits;
            if (waits == 4) page.output.policy().instant = false;
        }
        if (waits < 4 || !std::holds_alternative<TextEffect>(event) || !tick(event)) return;
        if (!child_done) {
            child_done = true;
            const auto original = page.windows.text_scratch()[1];
            auto child = page.menus.inventory().begin_nested({3}, 2, operation);
            finish(page, *child);
            check(page.windows.text_scratch()[1] == resources(GameVersion::US).empty &&
                      page.windows.text_scratch()[1] != original,
                  "Child inventory did not replace shared footer text through its zero-item loop");
            page.output.policy().instant = false;
        } else if (!observed_live_next) {
            observed_live_next = true;
            check(page.output.last_character() == resources(GameVersion::US).empty,
                  "Resumed footer read an operation-local snapshot instead of live shared text");
        }
    });
    check(waits >= 4 && child_done && observed_live_next,
          "Paginated fixture did not exercise nested inventory during footer continuation");

    Fixture abandoned(GameVersion::US);
    auto ancestor = abandoned.menus.inventory().begin({2}, 1);
    for (unsigned work = 0; work < 1000; ++work) {
        const auto progress = ancestor->advance(1);
        if (progress != Progress::Suspended) continue;
        if (tick(*ancestor->effect())) break;
        ancestor->respond();
    }
    check(ancestor->effect() && tick(*ancestor->effect()), "Abandon fixture missed parent WindowTick");
    auto child = abandoned.menus.inventory().begin_nested({3}, 2, *ancestor);
    const auto visible = abandoned.windows.frame()->pixels;
    child.reset();
    rejects([&] { ancestor->respond(); }, "Abandoned nested inventory left parent execution usable");
    rejects([&] { abandoned.menus.inventory().begin({4}, 1); }, "Abandoned child failed to poison root execution");
    check(abandoned.windows.frame()->pixels == visible, "Poisoned execution rolled back visible artwork");
}
} // namespace
int main() {
    try {
        for (auto version : {GameVersion::US, GameVersion::JP}) {
            const auto region = version == GameVersion::US ? "US " : "JP ";
            context = std::string(region) + "baseline";baseline_inventory(version);
            context = std::string(region) + "scratch";empty_and_scratch(version);
            context = std::string(region) + "failed CREATE";failed_create(version);
            context = std::string(region) + "shared pool";shared_pool_exhaustion(version);
            context = std::string(region) + "responses";response_contract(version);
            context = std::string(region) + "authored";authored_wrapper(version);
            context = std::string(region) + "ownership";configuration_and_ownership(version);
            context = std::string(region) + "nested Conversation";nested_from_conversation(version);
        }
        context = "US late values";late_values_and_captured_member();
        context = "US nested/footer";nested_inventory_and_footer();
        std::cout << "PASS native inventory service: " << checks << " checks\n";
        return 0;
    } catch (const std::exception& error) { std::cerr << error.what() << '\n';return 1; }
}
