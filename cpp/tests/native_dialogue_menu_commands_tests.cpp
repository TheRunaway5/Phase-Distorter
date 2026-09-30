#include "eb/native/dialogue/conversation.hpp"
#include "eb/native/dialogue/fonts.hpp"
#include "eb/native/dialogue/menu_model.hpp"
#include "native_dialogue_test_assets.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <string>

namespace {
using namespace eb::native::dialogue;
unsigned checks{};
std::string context;
void check(bool value, const char *message) {
    ++checks;
    if (!value) throw std::runtime_error(context + ": " + message);
}
template<class F> void rejects(F operation, const char *message) {
    bool rejected = false;
    try { operation(); } catch (const std::exception &) { rejected = true; }
    check(rejected, message);
}
constexpr ReferenceKey selected_key{0x11, 0x22, 0x33, 0x44};
constexpr ReferenceKey ignored_key{0xba, 0xdc, 0xfe, 0x91};
struct Resources {
    std::shared_ptr<const FontResources> fonts;
    std::shared_ptr<const WindowResources> windows;
    std::shared_ptr<const MenuResources> menus;
    explicit Resources(eb::GameVersion version) {
        dialogue_test_assets::WindowInput input(version);
        dialogue_test_assets::add_text_fonts(input);
        for (unsigned id = 0; id < input.count; ++id) {
            input.put(input.configs + id * 8, 0);
            input.put(input.configs + id * 8 + 2, 0);
            input.put(input.configs + id * 8 + 4, 22);
            input.put(input.configs + id * 8 + 6, 8);
        }
        const auto page = version == eb::GameVersion::JP ? 0x3e42eu : 0x3e44cu;
        input.image[page] = 0x71; input.image[page + 1] = 0x72;
        input.image[page + 2] = 0x73; input.image[page + 3] = 0;
        if (version == eb::GameVersion::US)
            std::fill_n(input.image.begin() + 0x201359, 96, 9);
        fonts = FontResources::import(input.image, version);
        windows = input.import();
        menus = MenuResources::import(input.image, version);
    }
};
const Resources &resources(eb::GameVersion version) {
    static const Resources us(eb::GameVersion::US), jp(eb::GameVersion::JP);
    return version == eb::GameVersion::JP ? jp : us;
}
std::shared_ptr<const Program> program(eb::GameVersion version, std::vector<std::uint8_t> bytes = {2},
                                      std::vector<std::uint8_t> selected = {4, 0x23, 0x01, 2}) {
    return std::make_shared<const Program>(version,
        std::vector<ContentBlock>{{0, 0, std::move(bytes)}, {1, 0, std::move(selected)}},
        std::vector<Location>{{0, 0}, {1, 0}},
        std::vector<ReferenceBinding>{{selected_key, Location{1, 0}}});
}
Request append(std::span<const std::uint8_t> label, std::optional<ReferenceKey> selected = {}) {
    check(label.size() < 30, "Test label leaves command scratch");
    Request result;
    result.kind = RequestKind::AppendMenuOption;
    result.menu_append.emplace();
    auto &payload = *result.menu_append;
    std::copy(label.begin(), label.end(), payload.label.begin());
    payload.length = std::uint8_t(label.size() + 1);
    payload.selected_text = selected;
    return result;
}
Request layout(std::uint16_t columns, bool centered = false) {
    Request result;
    result.kind = RequestKind::LayoutMenu;
    result.menu_layout = MenuLayoutRequest{columns, centered};
    return result;
}
struct Fixture {
    std::shared_ptr<const Program> scripts;
    State state;
    TextOutput output;
    WindowHost windows;
    MenuHost menus;
    MenuModel model;
    explicit Fixture(eb::GameVersion version, std::vector<std::uint8_t> bytes = {2},
                     std::vector<std::uint8_t> selected = {4, 0x23, 0x01, 2})
        : scripts(program(version, std::move(bytes), std::move(selected))),
          output(resources(version).fonts, state), windows(resources(version).windows, state, output),
          menus(scripts, windows, resources(version).menus), model(windows, *resources(version).fonts) {
        window(WindowAction::Open, WindowId{0});
        output.policy().instant = true;
        output.policy().character_padding = 0;
        output.policy().sound_mode = 3;
        output.policy().text_speed = 0;
        state.word_wrap = false;
    }
    void window(WindowAction action, std::optional<WindowId> id = {}) {
        auto operation = windows.begin({action, id, {}, 0});
        for (unsigned i = 0; i < 32; ++i) {
            if (operation->advance() == OutputProgress::Complete) return;
            operation->respond();
        }
        throw std::runtime_error("Window fixture failed to finish");
    }
    std::vector<MenuPrintEffect> run(const Request &request, unsigned budget = 1) {
        auto operation = menus.commands().begin(request, *scripts);
        std::vector<MenuPrintEffect> trace;
        for (unsigned i = 0; i < 4096; ++i) {
            const auto progress = operation->advance(budget);
            if (progress == Progress::Finished) return trace;
            if (progress == Progress::BudgetExhausted) continue;
            check(operation->effect().has_value(), "Menu command suspended without its typed effect");
            const auto pending = operation->effect();
            const auto pool = windows.menu_options();
            const auto frame = windows.slot_frame(0);
            check(operation->advance(0) == Progress::Suspended && operation->effect() == pending &&
                      windows.menu_options() == pool && windows.slot_frame(0)->pixels == frame->pixels,
                  "Unacknowledged menu effect or sampling advanced the command");
            trace.push_back(*pending);
            operation->respond();
        }
        throw std::runtime_error("Menu command exceeded its bounded fixture work");
    }
};
void append_and_fallback(eb::GameVersion version) {
    context = "append and lazy reference";
    Fixture f(version);
    auto &pool = f.windows.menu_options();
    pool[0].label.fill(0x77);
    pool[0].x = 9; pool[0].y = 2; pool[0].userdata = 0x1234; pool[0].pixel_align = 7;
    std::array<std::uint8_t, 29> long_label;
    long_label.fill(0x76); long_label[0] = 0x61; long_label[1] = 0;
    auto operation = f.menus.commands().begin(append(long_label, selected_key), *f.scripts);
    const auto before = pool;
    check(operation->advance(0) == Progress::BudgetExhausted && !operation->effect() && pool == before,
          "Zero command budget allocated an option or emitted an effect");
    rejects([&] { f.output.begin_glyph(0x61); }, "Raw printing bypassed active menu-command ownership");
    check(operation->advance(1) == Progress::Finished && operation->complete() && !operation->effect(),
          "Synchronous append invented a host boundary");
    check(pool[0].flags == 1 && pool[0].selected_text == Location{1, 0} && pool[0].label[0] == 0x61 &&
              pool[0].label[1] == 0 && pool[0].label[2] == 0x77 && pool[0].x == 9 && pool[0].y == 2 &&
              pool[0].userdata == 0x1234 && pool[0].pixel_align == 7 && !f.state.flag(0x123),
          "Append changed retained record fields, copied past NUL or executed selected text");
    const std::array<std::uint8_t, 1> short_label{0x62};
    check(f.run(append(short_label, ReferenceKey{})).empty() && !pool[1].selected_text,
          "Authored null reference became a selected script");
    // Slot69 is still a real allocation when it is the only free slot.
    for (unsigned i = 0; i < 69; ++i) pool[i].flags = 1;
    pool[69].flags = 0;
    f.run(append(short_label, selected_key));
    check(pool[69].flags == 1 && pool[69].selected_text == Location{1, 0} &&
              f.windows.metadata({0}).last_option == 69,
          "The final allocatable record was mistaken for allocation failure");
    const auto full = pool;
    long_label.fill(0x61);
    check(f.run(append(long_label, ignored_key)).empty() && pool == full,
          "Full-pool append resolved an ignored key or validated/copied an ignored oversized label");
    f.state.focus.reset();
    pool[15].flags = 0;
    const auto absent = pool;
    check(f.run(append(long_label, ignored_key)).empty() && pool == absent && !f.state.focus,
          "No-focus append mutated a free record, resolved its key or established focus");

    for (bool bad_reference : {false, true}) {
        Fixture invalid(version);
        const auto original = invalid.windows.menu_options();
        const auto canvas = invalid.output.frame({0})->pixels;
        auto request = bad_reference ? append(short_label, ignored_key) : append(long_label);
        auto rejected = invalid.menus.commands().begin(request, *invalid.scripts);
        rejects([&] { rejected->advance(); }, "Successful allocation accepted unsupported label/reference data");
        check(invalid.windows.menu_options() == original &&
                  invalid.windows.metadata({0}).first_option == 0xffff &&
                  invalid.output.frame({0})->pixels == canvas,
              "Failed append partially linked or painted an option");
    }
}
void layout_and_pages(eb::GameVersion version) {
    context = "layout preserves selection";
    Fixture f(version);
    const std::array<std::uint8_t, 1> label{0x61};
    for (unsigned i = 0; i < 4; ++i) f.run(append(label));
    auto &window = f.windows.metadata({0});
    window.selected_option = 2; window.page_number = 1;
    f.output.set_cursor({0}, {5, 1});
    const auto old_frame = f.output.frame({0});
    const auto old_pixels = old_frame->pixels;
    check(f.run(layout(2)).empty(), "Instant ordinary page printing invented a callback");
    const auto &pool = f.windows.menu_options();
    check(pool[0].x == 0 && pool[1].x == 10 && pool[2].x == 0 && pool[3].x == 10 &&
              pool[0].y == 1 && pool[1].y == 1 && pool[2].y == 2 && pool[3].y == 2 &&
              window.selected_option == 2 && window.page_number == 1 && window.layout_columns == 2,
          "Layout used selection initialization or ignored its captured starting line");
    check(f.output.frame({0})->pixels != old_pixels && old_frame->pixels == old_pixels,
          "Layout failed to hand off to real printing or mutated an old frame sample");

    Fixture pages(version);
    for (unsigned i = 0; i < 8; ++i) pages.run(append(label));
    auto &paged = pages.windows.metadata({0});
    paged.selected_option = 4; paged.page_number = 3;
    pages.run(layout(2));
    const auto &options = pages.windows.menu_options();
    check(paged.last_option == 8 && options[8].flags == 2 && options[8].page == 0 &&
              options[8].x == 0 && options[8].y == 2 && options[8].label[0] == 0x71 &&
              options[8].label[1] == 0x72 && options[8].label[2] == 0x73 && options[8].label[3] == 0 &&
              options[0].page == 1 && options[2].page == 2 && options[4].page == 3 && options[6].page == 4 &&
              paged.selected_option == 4 && paged.page_number == 3,
          "Pagination lost imported label, page sequence or existing current selection/page");

    Fixture empty(version);
    auto &metadata = empty.windows.metadata({0});
    metadata.layout_columns = 19; metadata.selected_option = 23; metadata.page_number = 9;
    check(empty.run(layout(0)).empty() && metadata.layout_columns == 19 && metadata.selected_option == 23 &&
              metadata.page_number == 9 &&
              empty.windows.menu_state().early_tick_exit == (version == eb::GameVersion::US),
          "Empty layout did arithmetic or lost its regional empty-page behavior");
    for (auto unsupported : {MenuLayoutRequest{0, false}, MenuLayoutRequest{2, true}}) {
        if (version == eb::GameVersion::JP && unsupported.centered) continue;
        Fixture bad(version);
        for (unsigned i = 0; i < 5; ++i) bad.run(append(label));
        const auto old = bad.windows.menu_options();
        auto operation = bad.menus.commands().begin(layout(unsupported.columns, unsupported.centered), *bad.scripts);
        rejects([&] { operation->advance(); }, "Nonprogressing/overflowing source layout was silently normalized");
        check(bad.windows.menu_options() == old && bad.windows.metadata({0}).layout_columns == 1,
              "Unsupported layout mutated option positions before validation");
    }
}
void ambient_layout(eb::GameVersion version, bool retired) {
    context = retired ? "retained ambient layout" : "live ambient layout";
    Fixture f(version);
    const std::array<std::uint8_t, 1> first{0x61};
    const std::array<std::uint8_t, 2> second{0x62, 0x63};
    f.run(append(first)); f.run(append(second));
    f.output.set_style({0}, {1, 0, false, false, false});
    f.output.set_cursor({0}, {4, 1});
    if (retired) {
        const auto pool = f.windows.menu_options();
        f.window(WindowAction::Close, WindowId{0});
        // Source callers can supply a retained physical record with a chain.
        // CLOSE itself clears the menu; seed that explicit external state here.
        f.windows.menu_options() = pool;
        f.windows.slot(0).first_option = 0; f.windows.slot(0).last_option = 1;
    }
    f.state.focus.reset(); f.state.unfocused_register_slot = 0;
    auto &metadata = f.windows.slot(0);
    metadata.selected_option = 7; metadata.page_number = 9;
    const auto canvas = f.windows.slot_frame(0)->pixels;
    const auto brush = f.output.composition_snapshot();
    check(f.run(layout(2, true)).empty(), "Absent-focus page printing invented text effects");
    const auto &pool = f.windows.menu_options();
    check(pool[0].x == (version == eb::GameVersion::US ? 2 : 4) &&
              pool[1].x == (version == eb::GameVersion::US ? 12 : 14) && pool[0].y == 1 && pool[1].y == 1 &&
              metadata.selected_option == 7 && metadata.page_number == 9 && metadata.layout_columns == 2 &&
              !f.state.focus && f.windows.slot_frame(0)->pixels == canvas && f.output.composition_snapshot() == brush,
          "Ambient layout lost its font/geometry or painted/reopened the retained window");

    Fixture paging(version);
    for (unsigned i = 0; i < 8; ++i) paging.run(append(first));
    paging.state.focus.reset(); paging.state.unfocused_register_slot = 0;
    auto &last = paging.windows.menu_options()[69];
    last.label.fill(0x79); last.selected_text = Location{1, 0}; last.page = 0x1234; last.pixel_align = 6;
    paging.run(layout(2));
    check(paging.windows.metadata({0}).last_option == 7 && paging.windows.menu_options()[7].page == 0 &&
              last.flags == 2 && last.userdata == 0 && last.x == 0 && last.y == 2 && last.page == 0x1234 &&
              last.label[0] == 0x79 && last.selected_text == Location{1, 0} &&
              last.pixel_align == (version == eb::GameVersion::US ? 0 : 6),
          "No-focus pagination lost wrapper fallback writes or changed the wrong last option's page");
}
void ownership_and_invalid_inputs(eb::GameVersion version) {
    context = "command owner validation";
    Fixture first(version), other(version);
    MenuPrinter wrong(other.windows, resources(version).menus);
    rejects([&] { MenuCommands bad(*first.scripts, first.windows, wrong); },
            "Coordinator accepted a printer from another host");
    check(first.output.complete() && other.output.complete(), "Wrong-host constructor acquired either output");
    Request absent; absent.kind = RequestKind::AppendMenuOption;
    rejects([&] { first.menus.commands().begin(absent, *first.scripts); }, "Missing payload was accepted");
    auto too_long = append(std::array<std::uint8_t, 1>{0x61});
    too_long.menu_append->length = 31;
    rejects([&] { first.menus.commands().begin(too_long, *first.scripts); }, "Collected extent exceeded its fixed storage");
    auto opposite = program(version == eb::GameVersion::US ? eb::GameVersion::JP : eb::GameVersion::US);
    rejects([&] { first.menus.commands().begin(layout(1), *opposite); }, "Command accepted an opposite-region program");
    check(first.run(layout(1)).empty(), "Pre-start validation poisoned the root owner");
    auto foreign = program(version, {0x61, 2});
    const auto pool_before = first.windows.menu_options();
    const auto canvas_before = first.output.frame({0})->pixels;
    const auto request = append(std::array<std::uint8_t, 1>{0x61}, selected_key);
    rejects([&] { first.menus.commands().begin(request, *foreign); },
            "Same-region foreign program supplied a location for the host's unrelated content");
    check(first.windows.menu_options() == pool_before && first.output.frame({0})->pixels == canvas_before &&
              first.windows.metadata({0}).first_option == 0xffff,
          "Foreign content rejection partially allocated or painted an option");
    const Program copied = *first.scripts;
    auto same_content = first.menus.commands().begin(request, copied);
    check(same_content->advance() == Progress::Finished &&
              first.windows.menu_options()[0].selected_text == Location{1, 0},
          "Shallow immutable Program copies lost their valid shared content identity");
    const auto linked = first.windows.menu_options();
    rejects([&] { MenuHost foreign_host(foreign, first.windows, resources(version).menus); },
            "A second menu service rebound the shared option pool to unrelated content");
    check(first.windows.menu_options() == linked && first.state.focus == WindowId{0},
          "Rejected menu-host binding changed options or focus");
    auto copied_owner = std::make_shared<const Program>(*first.scripts);
    MenuHost same_host(copied_owner, first.windows, resources(version).menus);
    auto shared_append = same_host.commands().begin(request, *copied_owner);
    check(shared_append->advance() == Progress::Finished &&
              first.windows.menu_options()[0].next == 1 &&
              first.windows.menu_options()[1].selected_text == Location{1, 0},
          "Same-content menu services failed to share the sole option pool");
    for (auto slot : {std::optional<unsigned>{}, std::optional<unsigned>{8}, std::optional<unsigned>{0xffff}}) {
        Fixture bad(version);
        bad.state.focus.reset(); bad.state.unfocused_register_slot = slot;
        const auto pool = bad.windows.menu_options();
        auto operation = bad.menus.commands().begin(layout(1), *bad.scripts);
        rejects([&] { operation->advance(); }, "Layout silently skipped invalid ambient payload");
        check(bad.windows.menu_options() == pool && !bad.state.focus,
              "Invalid ambient lookup changed the pool or focus");
    }
}
struct StoryResult {
    std::array<WindowMenuOption, 70> options;
    std::vector<std::uint8_t> pixels;
    std::vector<ConversationEvent> trace;
    std::optional<Location> returned;
    bool operator==(const StoryResult &) const = default;
};
StoryResult authored_story(eb::GameVersion version, unsigned budget) {
    context = "authored menu story budget " + std::to_string(budget);
    const std::vector<std::uint8_t> script{
        0x19, 2, 0x61, 1, 0x11, 0x22, 0x33, 0x44,
        0x19, 2, 0x62, 2, 0x1c, 0x0c, 0, 0x11,
        0x19, 4, 0x19, 2, 0x63, 2, 2};
    Fixture f(version, script);
    f.state.window().active.argument = 0xbeef0002;
    Conversation conversation(f.scripts, f.menus);
    conversation.start(EntryId{0});
    const auto frozen = f.output.frame({0});
    const auto frozen_pixels = frozen->pixels;
    StoryResult result;
    unsigned polls = 0;
    for (unsigned work = 0; work < 20000; ++work) {
        const auto progress = conversation.advance(budget);
        if (progress == Progress::Finished) break;
        if (progress == Progress::BudgetExhausted) continue;
        const auto event = conversation.event();
        check(event.has_value() && !std::holds_alternative<Request>(*event),
              "Configured authored menu command escaped as an unsupported host request");
        const auto snapshot = conversation.snapshot();
        const auto pool = f.windows.menu_options();
        check(conversation.advance(0) == Progress::Suspended && conversation.event() == event &&
                  conversation.snapshot().consumed_bytes == snapshot.consumed_bytes &&
                  f.windows.menu_options() == pool,
              "Suspended authored command consumed another byte or changed menu state");
        result.trace.push_back(*event);
        Response response;
        if (const auto *menu = std::get_if<MenuEffect>(&*event); menu && menu->kind == MenuEffectKind::Input) {
            ++polls;
            check(f.state.flag(0x123) && f.windows.menu_options()[0].selected_text == Location{1, 0},
                  "Selection failed to run its stored authored script at the existing callback boundary");
            response.pressed = std::uint16_t(MenuButton::A);
        }
        conversation.respond(response);
    }
    check(conversation.finished() && polls == 1 && f.state.flag(0x123) &&
              f.state.window().active.working == 1 && f.state.window().active.argument == 0xbeef0002,
          "Authored menu did not finish normal selection/result handling");
    const auto &window = f.windows.metadata({0});
    check(window.first_option == 0 && window.last_option == 0 && window.selected_option == 0xffff &&
              window.page_number == 1 && f.windows.menu_options()[0].flags == 1 &&
              f.windows.menu_options()[0].label[0] == 0x63 && !f.windows.menu_options()[0].selected_text &&
              !f.windows.menu_options()[1].flags && frozen->pixels == frozen_pixels,
          "Authored reset/reappend lost pool reuse, metadata or frame immutability");
    result.options = f.windows.menu_options();
    result.pixels = f.output.frame({0})->pixels;
    result.returned = conversation.snapshot().returned_cursor;
    check(result.returned == Location{0, std::uint16_t(script.size())},
          "Command operands or selection changed the returned authored cursor");
    return result;
}
void unconfigured_request(eb::GameVersion version) {
    context = "explicit unconfigured service";
    Fixture f(version, {0x19, 2, 0x61, 2, 2});
    Conversation conversation(f.scripts, f.windows);
    conversation.start(EntryId{0});
    check(conversation.advance() == Progress::Suspended &&
              std::get<Request>(*conversation.event()).kind == RequestKind::AppendMenuOption &&
              f.windows.metadata({0}).first_option == 0xffff,
          "Conversation invented a menu service without configured resources");
    conversation.respond();
    check(conversation.advance() == Progress::Finished, "External menu request acknowledgment did not resume text");
}
void page_effect_ownership() {
    context = "resumable page effects and nested output";
    Fixture f(eb::GameVersion::US, {2}, {0x18, 3, 1, 0x63, 2});
    f.window(WindowAction::Open, WindowId{1});
    f.window(WindowAction::Focus, WindowId{0});
    for (unsigned i = 0; i < 8; ++i)
        f.run(append(std::array<std::uint8_t, 1>{0x61}));
    auto title = f.windows.begin({WindowAction::Title, WindowId{0}, {0x61, 0x62}, 2});
    while (title->advance() == OutputProgress::Suspended) title->respond();
    const auto old_frame = f.output.frame({1});
    const auto old_pixels = old_frame->pixels;
    auto operation = f.menus.commands().begin(layout(2), *f.scripts);
    unsigned frame_waits = 0, world_ticks = 0;
    bool nested = false;
    for (unsigned work = 0; work < 4096; ++work) {
        const auto progress = operation->advance(1);
        if (progress == Progress::Finished) break;
        if (progress == Progress::BudgetExhausted) continue;
        const auto pending = operation->effect();
        check(pending.has_value(), "Page effect was acknowledged before its host boundary");
        if (const auto *window = std::get_if<WindowEffect>(&*pending);
            window && window->kind == WindowEffectKind::FrameWait) {
            ++frame_waits;
            Conversation disallowed(f.scripts, f.menus);
            rejects([&] { disallowed.start_nested(EntryId{1}, *operation); },
                    "A title frame wait was treated as a recursive world callback");
            // A host policy update at the actual frame boundary can make the
            // later source string print yield its ordinary WindowTick footer.
            f.output.policy().instant = false;
        } else {
            check(std::holds_alternative<TextEffect>(*pending) &&
                      std::get<TextEffect>(*pending).kind == TextEffectKind::WindowTick,
                  "Unexpected callback in the source page-title path");
            ++world_ticks;
            if (!nested) {
                nested = true;
                Conversation child(f.scripts, f.menus);
                child.start_nested(EntryId{1}, *operation);
                const auto pool = f.windows.menu_options();
                rejects([&] { operation->advance(0); }, "Suspended parent advanced while child owned output");
                rejects([&] { operation->respond(); }, "Suspended parent consumed its effect while child owned output");
                rejects([&] { f.output.begin_glyph(0x62); }, "Raw output bypassed nested page ownership");
                check(f.windows.menu_options() == pool && operation->effect() == pending,
                      "Rejected ancestor execution changed pending menu data");
                for (unsigned child_work = 0; child_work < 1024 && !child.finished(); ++child_work)
                    if (child.advance(1) == Progress::Suspended) child.respond();
                check(child.finished() && f.state.focus == WindowId{1} && operation->effect() == pending &&
                          operation->advance(0) == Progress::Suspended,
                      "Child completion restored stale focus or implicitly acknowledged the parent effect");
            }
        }
        operation->respond();
    }
    check(operation->complete() && frame_waits == 2 && world_ticks > 0 && nested &&
              f.state.focus == WindowId{1} && old_frame->pixels == old_pixels &&
              f.output.frame({1})->pixels != old_pixels,
          "Page continuation lost title waits, shared focus/output, nesting or immutable frames");
}
} // namespace
int main() {
    try {
        for (const auto version : {eb::GameVersion::US, eb::GameVersion::JP}) {
            append_and_fallback(version);
            layout_and_pages(version);
            ambient_layout(version, false);
            ambient_layout(version, true);
            ownership_and_invalid_inputs(version);
            const auto one = authored_story(version, 1);
            check(one == authored_story(version, 7) && one == authored_story(version, 4096),
                  "Logical budgets changed authored menu effects, canvas, options or return cursor");
            unconfigured_request(version);
        }
        page_effect_ownership();
        std::cout << "PASS " << checks << " native authored menu checks\n";
        return 0;
    } catch (const std::exception &error) {
        std::cerr << "FAIL " << error.what() << '\n';
        return 1;
    }
}
