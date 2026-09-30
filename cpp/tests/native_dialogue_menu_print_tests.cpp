#include "eb/native/dialogue/fonts.hpp"
#include "eb/native/dialogue/menu_printer.hpp"
#include "native_dialogue_test_assets.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native::dialogue;
unsigned checks{};
void check(bool ok, const char *message) {
    ++checks;
    if (!ok)
        throw std::runtime_error(message);
}
template <class F> void rejects(F operation, const char *message) {
    bool caught = false;
    try {
        operation();
    } catch (const std::exception &) {
        caught = true;
    }
    check(caught, message);
}
struct Input : dialogue_test_assets::WindowInput {
    explicit Input(eb::GameVersion version) : WindowInput(version) {
        dialogue_test_assets::add_text_fonts(*this);
        for (unsigned id = 0; id < count; ++id) {
            put(configs + id * 8, 0);
            put(configs + id * 8 + 2, 0);
            put(configs + id * 8 + 4, 14);
            put(configs + id * 8 + 6, 6);
        }
        const unsigned marker = version == eb::GameVersion::JP ? 0x03e3e8 : 0x03e406;
        // Two top words, then two bottom words; intentionally distinct flags
        // expose confusing this interleaved table with consecutive pairs.
        put(marker, 0x2441);
        put(marker + 2, 0x668d);
        put(marker + 4, 0xa451);
        put(marker + 6, 0xe69d);
        const unsigned label = version == eb::GameVersion::JP ? 0x03e42e : 0x03e44c;
        image[label] = 0x71;
        image[label + 1] = 0x72;
        image[label + 2] = 0x73;
        image[label + 3] = 0;
        if (version == eb::GameVersion::JP) {
            // The real menu's wide014f lookup reaches beyond the byte map:
            // map169, width0, and an adjacent full strip which still paints.
            image[0x03ec2c] = 169;
            image[0x03ec85] = 0;
            for (unsigned y = 0; y < 8; ++y) {
                image[0x204a9d + y * 2] = 0xaa;
                image[0x204a9d + y * 2 + 1] = 0x55;
                image[0x204b9d + y * 2] = 0x55;
                image[0x204b9d + y * 2 + 1] = 0xaa;
            }
        }
    }
};
struct Resources {
    std::shared_ptr<const FontResources> fonts;
    std::shared_ptr<const WindowResources> windows;
    std::shared_ptr<const MenuResources> menus;
    explicit Resources(eb::GameVersion version) {
        Input input(version);
        fonts = FontResources::import(input.image, version);
        windows = input.import();
        menus = MenuResources::import(input.image, version);
    }
};
const Resources &resources(eb::GameVersion version) {
    static const Resources us(eb::GameVersion::US), jp(eb::GameVersion::JP);
    return version == eb::GameVersion::JP ? jp : us;
}
struct Fixture {
    State state;
    TextOutput output;
    WindowHost windows;
    MenuPrinter printer;
    explicit Fixture(eb::GameVersion version)
        : output(resources(version).fonts, state), windows(resources(version).windows, state, output),
          printer(windows, resources(version).menus) {}
};
void open(Fixture &f, unsigned id = 0) {
    WindowCommand command;
    command.action = WindowAction::Open;
    command.id = WindowId{id};
    auto operation = f.windows.begin(command);
    while (operation->advance() == OutputProgress::Suspended)
        operation->respond();
}
std::vector<MenuPrintEffect> finish(MenuPrinter::Operation &operation) {
    std::vector<MenuPrintEffect> effects;
    for (unsigned work = 0; work < 1024; ++work) {
        if (operation.advance() == OutputProgress::Complete) {
            check(operation.complete() && !operation.effect(), "Completed menu print retained an effect");
            return effects;
        }
        const auto effect = operation.effect();
        check(effect.has_value() && operation.advance() == OutputProgress::Suspended &&
                  operation.effect() == effect,
              "Unacknowledged menu print advanced or changed its effect");
        effects.push_back(*effect);
        operation.respond();
    }
    throw std::runtime_error("Menu print exceeded bounded fixture effects");
}
std::vector<MenuPrintEffect> run(Fixture &f, MenuPrintCommand command) {
    auto operation = f.printer.begin(command);
    return finish(*operation);
}
void label(WindowMenuOption &option, std::initializer_list<std::uint8_t> text) {
    std::copy(text.begin(), text.end(), option.label.begin());
    option.label[text.size()] = 0;
}
void seed_page(Fixture &f) {
    auto &metadata = f.windows.metadata({0});
    metadata.first_option = 2;
    metadata.last_option = 9;
    metadata.page_number = 1;
    auto &first = f.windows.menu_options()[2];
    first.flags = 1;
    first.next = 5;
    first.page = 1;
    first.x = 0;
    first.y = 0;
    label(first, {0x71, 0x72});
    auto &hidden = f.windows.menu_options()[5];
    hidden.flags = 1;
    hidden.previous = 2;
    hidden.next = 9;
    hidden.page = 2;
    hidden.x = 6;
    hidden.y = 0;
    label(hidden, {0x73});
    auto &next = f.windows.menu_options()[9];
    next.flags = 1;
    next.previous = 5;
    next.page = 0;
    next.x = 0;
    next.y = 1;
    label(next, {0x71, 0x72, 0x73});
}
void imports(eb::GameVersion version) {
    Input input(version);
    const auto imported = MenuResources::import(input.image, version);
    check(imported->version() == version && std::vector<std::uint8_t>(imported->next_page_label().begin(),
                                                                      imported->next_page_label().end()) ==
                                                std::vector<std::uint8_t>{0x71, 0x72, 0x73},
          "Menu import lost the separate authored page label");
    constexpr std::array<unsigned, 4> indices{0x41, 0x28d, 0x51, 0x29d};
    for (unsigned frame = 0; frame < 2; ++frame)
        for (unsigned half = 0; half < 2; ++half) {
            auto index = indices[half * 2 + frame];
            if (version == eb::GameVersion::US && index >= 0x200)
                index -= 0x100;
            check(imported->blink(frame)[half].pixels == input.base.at(index),
                  "Menu blink import changed interleaved phase or relocated artwork");
            check(imported->blink(frame)[half].flip_horizontal == bool(frame) &&
                      imported->blink(frame)[half].flip_vertical == bool(half) &&
                      imported->blink(frame)[half].priority,
                  "Menu blink import lost descriptor attributes");
        }
    rejects([&] { imported->blink(2); }, "Menu blink accepted a border-pagination frame index");
    const unsigned label_at = version == eb::GameVersion::JP ? 0x03e42e : 0x03e44c;
    input.image[label_at + 3] = 1;
    rejects([&] { MenuResources::import(input.image, version); },
            "Unterminated authored page label was imported");
    rejects([&] { MenuResources::import({}, version); }, "Truncated menu artwork was imported");
}
void pages(eb::GameVersion version) {
    Fixture f(version);
    open(f);
    seed_page(f);
    check(run(f, {}).empty(), "Instant menu page unexpectedly emitted a world or sound effect");
    check(f.output.policy().instant && f.output.selection_marker_at({0}, {0, 0}) &&
              !f.output.selection_marker_at({0}, {6, 0}) && f.output.selection_marker_at({0}, {0, 1}),
          "Menu page omitted visible/page-zero markers or printed a hidden option");
    const auto cells = f.output.cells({0});
    check(cells.cells[25].fixed_character == 0x14f && cells.cells[37].fixed_character == 0x14f &&
              !cells.cells[25].lower_half && cells.cells[37].lower_half,
          "Menu page truncated its 16-bit separator character");
    const auto &expected =
        resources(version).fonts->fixed_glyph(version == eb::GameVersion::US ? 0xcf : 0x14f);
    for (unsigned y = 0; y < 8; ++y)
        for (unsigned x = 0; x < 8; ++x)
            check(cells.cells[25].image->pixels[y * 8 + x] == expected.pixel(x, y) &&
                      cells.cells[37].image->pixels[y * 8 + x] == expected.pixel(x, y + 8),
                  "Wide page separator used a byte glyph's artwork");
    Fixture empty(version);
    open(empty);
    empty.output.policy().instant = false;
    check(run(empty, {}).empty() &&
              empty.windows.menu_state().early_tick_exit == (version == eb::GameVersion::US) &&
              !empty.output.policy().instant,
          "Empty menu changed the regional early-tick/instant policy");
    Fixture absent(version);
    check(run(absent, {}).empty() && !absent.windows.menu_state().early_tick_exit,
          "Absent focus was treated as an empty focused menu");
}
void japanese_wide_saturn_page() {
    Fixture f(eb::GameVersion::JP);
    open(f);
    seed_page(f);
    f.windows.metadata({0}).first_option = 9;
    f.windows.menu_options()[9].label.fill(0);
    f.output.set_style({0}, {1, 0, false, false, false});
    check(run(f, {}).empty(), "Instant Japanese Saturn page unexpectedly emitted a host effect");
    const auto cells = f.output.cells({0});
    check(f.output.saturn_composition_active() && f.output.fractional_offset() == 0 &&
              f.output.window({0}).cursor == TextCursor{1, 1} && !cells.cells[25].fixed_character,
          "Wide Saturn menu separator was truncated or lost its zero-advance composition");
    for (unsigned y = 0; y < 8; ++y)
        for (unsigned x = 0; x < 8; ++x)
            check(cells.cells[25].image->pixels[y * 8 + x] == (x % 2 ? 2 : 1) &&
                      cells.cells[37].image->pixels[y * 8 + x] == (x % 2 ? 1 : 2),
                  "Zero-advance Saturn menu separator skipped its full source bitmap strip");
}
void titles_and_centering(eb::GameVersion version) {
    Fixture f(version);
    open(f);
    seed_page(f);
    WindowCommand title;
    title.action = WindowAction::Title;
    title.id = WindowId{0};
    title.title = {0x71};
    title.title_limit = 1;
    auto title_operation = f.windows.begin(title);
    while (title_operation->advance() == OutputProgress::Suspended)
        title_operation->respond();
    const auto effects = run(f, {});
    const bool us = version == eb::GameVersion::US;
    check(effects == (us ? std::vector<MenuPrintEffect>{WindowEffect{WindowEffectKind::FrameWait},
                                                        WindowEffect{WindowEffectKind::FrameWait}}
                         : std::vector<MenuPrintEffect>{}),
          "Menu page title lost its regional publication effects");
    check(f.windows.metadata({0}).title == (us ? std::vector<std::uint8_t>{0x71, 0x58, 0x61, 0x59}
                                               : std::vector<std::uint8_t>{0x71, 0x3a, 0x31, 0x3b}),
          "Page title did not preserve prefix/current-page delimiters");
    f.windows.metadata({0}).page_number = 2;
    run(f, {});
    check(f.windows.metadata({0}).title == (us ? std::vector<std::uint8_t>{0x71, 0x58, 0x62, 0x59}
                                               : std::vector<std::uint8_t>{0x71, 0x3a, 0x32, 0x3b}),
          "Repeated page title appended a second suffix");
    Fixture centered(version);
    open(centered);
    seed_page(centered);
    centered.windows.menu_options()[2].next.reset();
    centered.windows.menu_state().center_next_string = true;
    run(centered, {});
    if (us) {
        check(!centered.windows.menu_state().center_next_string && centered.output.fractional_offset() == 5 &&
                  !centered.output.cells({0}).cells[5].fixed_character,
              "US string centering did not use proportional length and consume its one-shot flag");
    } else
        check(centered.windows.menu_state().center_next_string,
              "Japanese PRINT_STRING consumed a US-only centering flag");
}
void direct_helpers(eb::GameVersion version) {
    Fixture f(version);
    open(f);
    auto &option = f.windows.menu_options()[3];
    option.x = 1;
    option.y = 0;
    option.pixel_align = 2;
    label(option, {0x71, 0x72});
    f.windows.menu_state().restore_backup = true;
    run(f, {MenuPrintAction::Position, 3, 1});
    check(f.output.window({0}).cursor == TextCursor{2, 0} &&
              f.output.fractional_offset() == (version == eb::GameVersion::US ? 2u : 0u) &&
              f.windows.menu_state().restore_backup == (version == eb::GameVersion::JP),
          "Menu position changed regional alignment or backup-reset semantics");
    f.output.policy().instant = false;
    f.output.policy().text_speed = 0;
    f.output.policy().sound_mode = 2;
    MenuPrintCommand fixed;
    fixed.action = MenuPrintAction::FixedGlyph;
    fixed.character = 33;
    check(run(f, fixed).empty() &&
              f.output.selection_marker_at({0}, {2, 0}) == (version == eb::GameVersion::US),
          "Direct selection marker acquired PRINT_LETTER effects or lost regional identity");
    auto operation = f.printer.begin({MenuPrintAction::UnselectedMarker, 3});
    check(operation->advance() == OutputProgress::Suspended &&
              *operation->effect() == MenuPrintEffect{TextEffect{TextEffectKind::TextSound}},
          "Unselected marker did not emit its single source sound footer");
    operation->respond();
    check(operation->advance() == OutputProgress::Suspended &&
              *operation->effect() == MenuPrintEffect{TextEffect{TextEffectKind::WindowTick}},
          "Unselected marker did not reach its single source tick");
    option.x = 4;
    option.y = 1;
    option.pixel_align = 3;
    operation->respond();
    check(operation->advance() == OutputProgress::Complete,
          "Fixed marker entry incorrectly repeated PRINT_LETTER's outer footer");
    if (version == eb::GameVersion::US)
        check(f.output.window({0}).cursor == TextCursor{5, 1} && f.output.fractional_offset() == 3,
              "Marker callback did not re-read live option positioning");
    else
        check(f.output.window({0}).cursor == TextCursor{2, 0},
              "Japanese marker unexpectedly applied the US post-callback position helper");
}
void highlights() {
    Fixture f(eb::GameVersion::US);
    open(f, 0x18);
    auto &option = f.windows.menu_options()[0];
    label(option, {0x71, 0x72, 0x73});
    MenuPrintCommand fixed;
    fixed.action = MenuPrintAction::FixedGlyph;
    fixed.character = 47;
    run(f, fixed);
    run(f, fixed);
    f.output.set_cursor({0x18}, {0, 0});
    f.output.set_style({0x18}, {0, 6, false, false, false});
    const auto frozen = f.output.frame({0x18});
    f.output.policy().instant = true;
    run(f, {MenuPrintAction::Highlight, 0, 0, 0, 1, true});
    auto cells = f.output.cells({0x18});
    check(cells.cells[0].style.palette == 6 && cells.cells[12].style.palette == 6 &&
              cells.cells[1].style.palette == 0 && f.output.window({0x18}).cursor.column == 1 &&
              !f.output.policy().instant && f.output.frame({0x18})->pixels != frozen->pixels,
          "US bounded highlight changed the wrong cells, cursor or instant state");
    const auto frozen_pixels = frozen->pixels;
    f.output.set_cursor({0x18}, {0, 0});
    run(f, {MenuPrintAction::Highlight, 0, 0, 0, 0xffff, false});
    check(f.output.window({0x18}).cursor.column == 2 && f.output.cells({0x18}).cells[0].style.palette == 0 &&
              frozen->pixels == frozen_pixels,
          "Unhighlight did not stop on semantic blank cells or mutated a sampled frame");
    f.output.set_cursor({0x18}, {0, 0});
    f.output.policy().instant = true;
    run(f, {MenuPrintAction::HighlightRemainder});
    check(f.output.cells({0x18}).cells[1].style.palette == 6 && f.output.window({0x18}).cursor.column == 0 &&
              f.output.policy().instant,
          "Remainder highlight moved the cursor or lost source instant policy");
    Fixture other(eb::GameVersion::US);
    open(other);
    other.windows.menu_options()[0] = option;
    other.output.policy().instant = true;
    run(other, {MenuPrintAction::Highlight});
    check(other.output.policy().instant && other.output.window({0}).cursor.column == 0,
          "File-select-only highlight mutated an ordinary window");
}
void ownership() {
    Fixture f(eb::GameVersion::US);
    open(f);
    f.output.policy().instant = false;
    f.output.policy().sound_mode = 2;
    auto operation = f.printer.begin({MenuPrintAction::UnselectedMarker});
    check(operation->advance() == OutputProgress::Suspended, "Ownership fixture lacks a suspended print");
    rejects([&] { f.output.begin_glyph(0x71); }, "Raw wide glyph bypassed menu print ownership");
    rejects([&] { f.output.begin_fixed_glyph(0x14f); }, "Raw fixed glyph bypassed menu print ownership");
    rejects([&] { f.printer.begin({}); }, "Sibling menu print bypassed the active owner");
    const auto before = f.output.frame({0});
    operation.reset();
    rejects([&] { f.output.advance(); }, "Abandoned menu print did not invalidate unfinished execution");
    check(f.output.frame({0})->pixels == before->pixels, "Abandoning printing discarded observable artwork");
}
} // namespace
int main() {
    try {
        for (auto version : {eb::GameVersion::US, eb::GameVersion::JP}) {
            imports(version);
            pages(version);
            titles_and_centering(version);
            direct_helpers(version);
        }
        highlights();
        ownership();
        japanese_wide_saturn_page();
        std::cout << "PASS " << checks << " native menu resource, printing, highlight and ownership checks\n";
    } catch (const std::exception &error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
