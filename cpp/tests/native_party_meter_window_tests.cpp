// Synthetic state/artwork tests. The independently executed original meter
// routines remain the separate reference oracle, not this expected-data helper.
#include "eb/native/party/meter_windows.hpp"
#include "eb/native/dialogue/window_graphics.hpp"
#include "native_dialogue_test_assets.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>

namespace {
namespace party = eb::native::party;
using namespace eb::native::dialogue;
unsigned checks{};
void check(bool ok, const char* message) { ++checks; if (!ok) throw std::runtime_error(message); }
template<class F> void rejects(F operation, const char* message) {
    bool rejected = false;
    try { operation(); } catch (const std::exception&) { rejected = true; }
    check(rejected, message);
}
struct Assets {
    dialogue_test_assets::WindowInput input;
    std::shared_ptr<const FontResources> fonts;
    std::shared_ptr<const WindowInitializationResources> initialization;
    std::shared_ptr<const party::MeterWindowResources> meter;
    explicit Assets(eb::GameVersion version) : input(version) {
        dialogue_test_assets::add_text_fonts(input);
        const unsigned table = version == eb::GameVersion::US ? 0x45a27 : 0x43806;
        for (unsigned i = 0; i < 49; ++i) {
            input.put(table + i * 2, 0x160 + (i % 11));
            input.put(table + 98 + i * 2, 0); // Initializer's independent status string terminates here.
            input.put(table + 196 + i * 2, i % 8);
        }
        const unsigned labels = version == eb::GameVersion::US ? 0x3e3f8 : 0x3e3da;
        for (unsigned i = 0; i < 8; ++i) input.image[labels + i] = std::uint8_t(8 + i);
        fonts = FontResources::import(input.image, version);
        initialization = WindowInitializationResources::import(input.image, version);
        meter = party::MeterWindowResources::import(input.image, version);
    }
};
const Assets& assets(eb::GameVersion version) {
    static const Assets us(eb::GameVersion::US), jp(eb::GameVersion::JP);
    return version == eb::GameVersion::US ? us : jp;
}
auto retained_artwork() {
    std::array<WindowArtwork, 1184> result;
    for (unsigned cell = 0; cell < result.size(); ++cell)
        for (unsigned y = 0; y < 8; ++y) for (unsigned x = 0; x < 8; ++x)
            result[cell][y * 8 + x] = std::uint8_t((cell + x + 2 * y + (cell >> (x % 6))) & 3);
    return result;
}
void publish_art(WindowGraphics& graphics, eb::GameVersion version) {
    auto op = graphics.begin_publication(version == eb::GameVersion::US ? ArtworkPublication::CommonThenGenerated : ArtworkPublication::All);
    while (op->advance() != Progress::Finished) {
        check(op->effect().has_value(), "Synthetic artwork publication failed to produce its transfer");
        op->respond();
    }
}
struct Fixture {
    eb::GameVersion version;
    party::State party;
    State text_state;
    TextOutput output;
    WindowHost host;
    std::shared_ptr<WindowGraphics> graphics;
    party::MeterWindows meters;
    explicit Fixture(eb::GameVersion version) : version(version), party(version),
        output(assets(version).fonts, text_state), host(assets(version).input.import(), text_state, output),
        graphics(std::make_shared<WindowGraphics>(assets(version).initialization, output, retained_artwork())),
        meters(host, party, assets(version).meter) {
        host.set_graphics(graphics);
        publish_art(*graphics, version);
        party.controlled_count = 4;
        party.party_order = {1,2,3,4,0,0};
        for (unsigned member = 1; member <= 4; ++member) {
            std::fill(party.name_field(member).begin(), party.name_field(member).end(), 0);
            party.name_field(member)[0] = 0x61;
            auto& value = party.character(member);
            value.current_hp = 123;
            value.current_pp = 45;
            value.hp_fraction = value.pp_fraction = 1;
            value.target_hp = 234; value.target_pp = 67;
        }
        meters.state().render = 1;
        meters.state().drawn_mask = 0xffff;
    }
};
unsigned word(const ArtworkCellReference& ref) {
    return ref.artwork_cell | unsigned(ref.style.palette) << 10 | (ref.style.priority ? 0x2000 : 0) |
           (ref.style.flip_horizontal ? 0x4000 : 0) | (ref.style.flip_vertical ? 0x8000 : 0);
}
void cell(const TextFrame& frame, const TextFrame& atlas, unsigned at, unsigned descriptor, const char* message) {
    const unsigned image = descriptor & 0x3ff, palette = (descriptor >> 10) & 7;
    for (unsigned y = 0; y < 8; ++y) for (unsigned x = 0; x < 8; ++x) {
        const auto sample_x = descriptor & 0x4000 ? 7 - x : x;
        const auto sample_y = descriptor & 0x8000 ? 7 - y : y;
        const auto pixel = atlas.pixels[(image / 32 * 8 + sample_y) * 256 + image % 32 * 8 + sample_x];
        const unsigned destination = (at / 32 * 8 + y) * 256 + at % 32 * 8 + x;
        check(frame.pixels[destination] == (pixel ? palette * 4 + pixel : 0), message);
        check(frame.priority[destination] == unsigned(pixel && (descriptor & 0x2000)), message);
    }
}
void drain(WindowHost& host) { while (host.publish_next()) {} }
void digits_and_guards(eb::GameVersion version) {
    Fixture f(version);
    auto& character = f.party.character(1);
    struct Case { unsigned value, fraction; std::array<unsigned,3> top; };
    // Frozen hand-calculated source descriptors cover animation carry and
    // leading blank transitions rather than reimplementing decimal formatting.
    const std::array<Case,8> cases{{
        {0,1,{0x2648,0x2648,0x2600}}, {9,0x6401,{0x2648,0x2649,0x2645}},
        {99,0x9801,{0x264a,0x2646,0x2646}}, {199,0xcc01,{0x2607,0x2647,0x2647}},
        {100,1,{0x2604,0x2600,0x2600}}, {999,1,{0x2644,0x2644,0x2644}},
        {123,1,{0x2604,0x2608,0x260c}}, {45,1,{0x2648,0x2620,0x2624}}
    }};
    for (const auto& c : cases) {
        character.current_hp = std::uint16_t(c.value);
        character.hp_fraction = std::uint16_t(c.fraction);
        character.pp_fraction = 0;
        f.meters.state().upload = 0x80;
        f.meters.update(0);
        const auto digits = f.meters.digit_cells(0);
        for (unsigned i = 0; i < 3; ++i) {
            check(word(digits[i]) == c.top[i] && word(digits[i + 3]) == c.top[i] + 16,
                  "Digit animation/carry/leading blank differs from frozen source cases");
        }
        check(f.meters.state().upload == 0 && f.host.pending_publications() == 0,
              "Upload mode did not clear its byte or incorrectly queued strips");
    }
    character.pp_fraction = 1;
    character.afflictions[4] = 4;
    f.meters.state().upload = 1;
    f.meters.update(0);
    for (unsigned i = 0; i < 3; ++i)
        check(word(f.meters.digit_cells(0)[6+i]) == 0x264c + i && word(f.meters.digit_cells(0)[9+i]) == 0x265c + i,
              "Nonzero concentration did not use the complete PP X artwork");
    for (unsigned guard = 0; guard < 4; ++guard) {
        f.meters.state().render = guard == 0 ? 0 : 0x80;
        f.party.party_order[0] = guard == 1 ? 0 : guard == 2 ? 5 : 1;
        f.meters.state().drawn_mask = guard == 3 ? 0xfffe : 0xffff;
        f.meters.state().upload = 0x80;
        const auto before = f.host.scene()->pixels;
        f.meters.update(0);
        check(f.meters.state().upload == 0x80 && before == f.host.scene()->pixels && !f.host.pending_publications(),
              "An early meter guard consumed upload or changed pixels/queue");
    }
    f.meters.state().render = 0x80; f.party.party_order[0] = 1; f.meters.state().drawn_mask = 1;
    character.hp_fraction = character.pp_fraction = 2;
    f.party.controlled_count = 255; // No changed strip means no scene access.
    f.meters.update(0);
    check(f.meters.state().upload == 0, "Valid even fractions failed to consume nonzero upload");
}

void publication_and_phase(eb::GameVersion version) {
    Fixture f(version);
    for (unsigned phase = 0; phase < 4; ++phase) {
        f.meters.state().selected_phase = std::uint16_t(phase);
        f.meters.state().upload = 0;
        const auto old = f.host.frame();
        f.meters.update(std::uint16_t(phase + 0x100));
        check(f.host.pending_publications() == 4, "Odd HP/PP did not queue four ordered strips");
        check(f.host.frame()->pixels == old->pixels, "Staged meter digits published before transfer completion");
        const unsigned first = 21 * 32 + 5 + phase * 7;
        const auto atlas = f.graphics->frame();
        for (unsigned row = 0; row < 4; ++row) {
            check(f.host.publish_next(), "Queued meter strip disappeared");
            const auto frame = f.host.frame();
            for (unsigned x = 0; x < 3; ++x)
                cell(*frame, *atlas, first + row * 32 + x, word(f.meters.digit_cells(phase)[row * 3 + x]),
                     "Meter strip phase/row/destination is wrong");
        }
        check(!f.host.publish_next() && !f.host.pending_publications(), "Meter queue duplicated a strip");
        check(old->pixels != f.host.frame()->pixels, "Publication case did not change visible meter pixels");
    }
    // COPY_TO_VRAM sources refer to the retained phase buffer, not a descriptor
    // copy frozen at enqueue. A later update is visible to older queued rows.
    f.meters.state().selected_phase = 0xffff;
    f.meters.state().upload = 0;
    f.party.character(1).current_hp = 100;
    f.meters.update(0);
    f.party.character(1).current_hp = 999;
    f.meters.state().upload = 1;
    f.meters.update(0);
    check(f.host.pending_publications() == 4, "Upload-mode overwrite appended duplicate meter strips");
    const auto held = f.host.frame(); const auto held_pixels = held->pixels;
    f.host.publish_next();
    cell(*f.host.frame(), *f.graphics->frame(), 22 * 32 + 5, 0x2644, "Queued strip did not observe live retained digits");
    check(held->pixels == held_pixels, "Publication mutated a held immutable frame");
    drain(f.host);
}

void drawing_and_lifecycle(eb::GameVersion version) {
    Fixture f(version);
    f.meters.draw_all();
    const auto atlas = f.graphics->frame();
    const auto staged = f.host.scene();
    // Four seven-column windows start at2,9,16,23; normal rows19..26.
    for (unsigned phase = 0; phase < 4; ++phase) {
        const unsigned first = 19 * 32 + 2 + phase * 7;
        cell(*staged,*atlas,first,0x2004,"Meter top-left border differs");
        cell(*staged,*atlas,first+6,0x6004,"Meter top-right horizontal flip differs");
        cell(*staged,*atlas,first+7*32,0xa004,"Meter bottom vertical flip differs");
        cell(*staged,*atlas,first+7*32+6,0xe004,"Meter bottom-right flip differs");
        cell(*staged,*atlas,first+32+1,0x32a0+phase*4,"Live generated party-name reference differs");
        cell(*staged,*atlas,first+32+5,0x3007,"Healthy status fallback differs");
        cell(*staged,*atlas,first+3*32+1,0x3008,"Imported HP label differs");
        cell(*staged,*atlas,first+5*32+1,0x300c,"Imported PP label differs");
    }
    f.host.queue_meter_area();
    check(f.host.publish_next(), "Meter-area publication was not queued");
    check(f.host.frame()->pixels == staged->pixels, "Meter-area publication omitted a normal row");
    f.party.character(1).hp_pp_window_options = 0x0c00;
    f.party.character(1).afflictions[0] = 2;
    f.meters.state().selected_phase = 0;
    f.meters.draw(0);
    const unsigned first = 18 * 32 + 2;
    cell(*f.host.scene(),*atlas,first,0x2c04,"Meter option word did not change border palette");
    cell(*f.host.scene(),*atlas,first+3*32+1,0x2808,"Special meter label palette differs");
    cell(*f.host.scene(),*atlas,first+3*32+3,0x2e04,"Special meter digit palette differs");
    // Clear selection waits only in US and samples selection/count afterward.
    auto clear = f.meters.begin_clear_selection();
    if (version == eb::GameVersion::US) {
        check(clear->advance() == OutputProgress::Suspended && clear->effect()->kind == WindowEffectKind::FrameWait,
              "US selection clearing omitted its frame-only wait");
        const auto before = f.host.scene()->pixels;
        check(clear->advance() == OutputProgress::Suspended && before == f.host.scene()->pixels,
              "Repeated pending meter advance mutated the scene");
        rejects([&]{ f.meters.begin_show(); }, "Pending meter lifecycle allowed a second root operation");
        f.meters.state().selected_phase = 1;
        clear->respond();
    }
    check(clear->advance() == OutputProgress::Complete && clear->complete() && f.meters.state().selected_phase == 0xffff,
          "Selection clear failed to finish");
    const unsigned cleared = 18*32 + (version == eb::GameVersion::US ? 9 : 2);
    cell(*f.host.scene(),*atlas,cleared,0,"Selection strip did not use descriptor-zero artwork");
    check(f.output.redraw_pending(), "Selection clear omitted ordinary-window redraw");
    rejects([&]{ clear->respond(); }, "Completed meter operation accepted a stale frame acknowledgment");
    const auto published_before = f.host.frame();
    auto hide = f.meters.begin_hide(false);
    check(hide->advance() == OutputProgress::Complete, "Unselected hide invented a frame wait");
    check(f.meters.state().render == 0 && (f.meters.state().drawn_mask & 15) == 0 && f.meters.state().area_dirty == 1,
          "Hide omitted source render/mask/dirty state");
    for (unsigned member = 1; member <= 4; ++member) {
        const auto& c = f.party.character(member);
        check(c.current_hp == c.target_hp && c.current_pp == c.target_pp && c.hp_fraction == 0 && c.pp_fraction == 0,
              "Nonbattle hide failed to settle the authoritative party meters");
    }
    check(f.host.frame()->pixels == published_before->pixels, "Hide erased published pixels before publication");
    auto show = f.meters.begin_show(); show->advance();
    check(f.meters.state().render == 1 && f.meters.state().drawn_mask == 0xffff, "Show normalized away the source full mask");
    f.party.character(1).current_hp = 17; f.party.character(1).hp_fraction = 99;
    const auto mask = f.meters.state().drawn_mask;
    auto battle_hide = f.meters.begin_hide(true); battle_hide->advance();
    check(f.party.character(1).current_hp == 17 && f.party.character(1).hp_fraction == 99 && f.meters.state().drawn_mask == mask,
          "Battle hide incorrectly settled/undrew the party");
}

void ownership(eb::GameVersion version) {
    Fixture f(version);
    check(f.meters.bound_to(f.host, f.party), "Meter owner rejected its actual borrows");
    party::State other(version);
    check(!f.meters.bound_to(f.host, other), "Meter owner accepted another party identity");
    rejects([&]{ party::MeterWindows bad(f.host, f.party, assets(version == eb::GameVersion::US ? eb::GameVersion::JP : eb::GameVersion::US).meter); },
            "Meter resources accepted a mismatched region");
    rejects([&]{ f.meters.draw(4); }, "Draw passed the retained four-phase buffer");
    f.meters.state().selected_phase = 0;
    { auto abandoned = f.meters.begin_show(); abandoned->advance(); }
    if (version == eb::GameVersion::US) {
        rejects([&]{ f.meters.update(0); }, "Abandoned frame wait left meter execution usable");
        rejects([&]{ f.meters.begin_hide(false); }, "Abandoned meter operation accepted new work");
        check(bool(f.host.frame()), "Poisoned execution invalidated already published artwork sampling");
    }
}

void names_and_live_artwork(eb::GameVersion version) {
    Fixture f(version);
    auto name = f.party.name_field(1);
    const auto atlas = f.graphics->frame();
    const unsigned first = 19 * 32 + 2;
    if (version == eb::GameVersion::US) {
        for (unsigned length = 0; length <= 5; ++length) {
            std::fill(name.begin(), name.end(), 0);
            std::fill_n(name.begin(), length, 0x61);
            f.party.character(1).level = 0xff; // Full field continues into source data, already saturated.
            f.meters.draw(0);
            const auto frame = f.host.scene();
            const std::array<unsigned,6> columns{1,1,2,3,4,4};
            for (unsigned x = 0; x < 4; ++x)
                cell(*frame,*atlas,first+32+x+1,x < columns[length] ? 0x32a0+x : 0x3007,
                     "US name-column saturation or empty-name publication differs");
        }
    } else {
        std::fill(name.begin(), name.end(), 0);
        name[0] = 0x61; name[2] = 0x62;
        f.meters.draw(0);
        const auto frame = f.host.scene();
        for (unsigned half = 0; half < 2; ++half) {
            cell(*frame,*atlas,first+(half+1)*32+1,0x32a0+half*16,"JP first live name cell differs");
            cell(*frame,*atlas,first+(half+1)*32+2,0x3007+half*16,"JP zero-name hole did not retain a blank cell");
            cell(*frame,*atlas,first+(half+1)*32+3,0x32a1+half*16,"JP name hole incorrectly advanced artwork position");
        }
    }
    f.host.publish_scene();
    const auto held = f.host.frame(); const auto held_pixels = held->pixels;
    std::array<std::array<std::uint8_t,5>,4> names{};
    PartyNameInputs input;
    for (unsigned i = 0; i < 4; ++i) { names[i][0] = 0x61; input.names[i] = names[i]; }
    f.graphics->prepare(input,1);
    check(f.host.frame()->pixels == held_pixels, "Staged artwork reload changed a published meter prematurely");
    publish_art(*f.graphics,version);
    check(f.host.frame()->pixels != held_pixels, "Published meter cells lost their shared live artwork identities");
    check(held->pixels == held_pixels, "Shared artwork publication mutated a held immutable frame");
}

void shared_queue_boundaries(eb::GameVersion version) {
    Fixture f(version);
    f.party.controlled_count = 1;
    f.meters.draw(3); // Source linear row crossing places this final border onrow27.
    const auto staged = f.host.scene();
    const unsigned first = 19 * 32 + 34;
    const auto atlas = f.graphics->frame();
    f.host.queue_meter_area();
    f.host.queue_scene();
    check(f.host.pending_publications() == 3, "Scene and meter areas do not share one ordered queue including fixed tail");
    f.host.publish_next();
    const auto area = f.host.frame();
    cell(*area,*atlas,first,0x2004,"Meter-area rows lost source linear placement");
    const unsigned bottom_pixel = (first / 32 + 7) * 8 * 256;
    check(std::all_of(area->pixels.begin()+bottom_pixel,area->pixels.begin()+bottom_pixel+8*256,
                      [](auto pixel){return pixel == 0;}), "Meter-area upload incorrectly included row27");
    f.host.publish_next();
    check(f.host.frame()->pixels == staged->pixels, "Full scene queue omitted staged row27");
    check(f.host.publish_next() && !f.host.publish_next(), "Full scene lost its separate fixed-tail copy");
    f.party.controlled_count = 4;
    f.party.character(1).hp_fraction = 1; f.party.character(1).pp_fraction = 0;
    f.meters.state().upload = 0;
    f.meters.update(0); // Two narrow copies use ordinary digit palette.
    f.party.character(1).hp_pp_window_options = 0x0c00;
    f.meters.draw(0); // A later full scene has the source special digit palette.
    f.host.queue_scene();
    check(f.host.pending_publications() == 4, "Strip and scene publications were reordered or coalesced");
    f.host.publish_next();
    cell(*f.host.frame(),*atlas,22*32+5,0x2604,"Narrow update inherited later whole-window palette");
    f.host.publish_next(); f.host.publish_next();
    cell(*f.host.frame(),*atlas,22*32+5,0x2e04,"Full scene did not follow ordered narrow strips");
    const auto visible = f.host.frame()->pixels;
    check(f.host.publish_next() && f.host.frame()->pixels == visible,
          "Fixed-tail publication was lost or changed the visible frame");
}
} // namespace
int main() {
    try {
        for (const auto version : {eb::GameVersion::US, eb::GameVersion::JP}) {
            digits_and_guards(version); publication_and_phase(version); drawing_and_lifecycle(version); ownership(version);
            names_and_live_artwork(version); shared_queue_boundaries(version);
        }
        std::cout << "Native meter windows: " << checks << " checks passed\n";
    } catch (const std::exception& error) { std::cerr << "After " << checks << " checks: " << error.what() << '\n'; return 1; }
}
