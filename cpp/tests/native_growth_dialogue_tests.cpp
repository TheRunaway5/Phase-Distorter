// CPU-free integration: real growth producers, imported synthetic messages,
// the shared prepared owner and actual Conversation/PromptHost continuations.
#include "eb/native/story/growth_dialogue.hpp"
#include "eb/native/story/scene.hpp"
#include "eb/native/dialogue/fonts.hpp"
#include "eb/native/party/dialogue_values.hpp"
#include "native_dialogue_test_assets.hpp"
#include "native_dialogue_substitution_test_assets.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <type_traits>

namespace {
using namespace eb::native;
namespace d = eb::native::dialogue;
namespace s = eb::native::story;
unsigned checks{};
void check(bool value, const char *message) { ++checks; if (!value) throw std::runtime_error(message); }
template<class F> void rejects(F call, const char *message) {
    bool caught{}; try { call(); } catch (const std::exception &) { caught = true; }
    check(caught, message);
}
static_assert(!std::is_copy_constructible_v<s::GrowthDialogue>);
static_assert(!std::is_move_constructible_v<s::GrowthDialogue>);
static_assert(!std::is_copy_constructible_v<s::GrowthDialogue::Operation>);

struct Assets {
    dialogue_test_assets::WindowInput input;
    std::shared_ptr<const d::FontResources> fonts;
    std::shared_ptr<const d::WindowResources> windows;
    std::shared_ptr<const d::SubstitutionResources> substitutions;
    std::shared_ptr<const CharacterGrowth> growth;
    explicit Assets(eb::GameVersion version) : input(version) {
        dialogue_test_assets::add_text_fonts(input);
        dialogue_substitution_test_assets::Input catalogs(version);
        catalogs.overlay(input.image);
        input.put(input.configs, 1); input.put(input.configs + 2, 1);
        input.put(input.configs + 4, 28); input.put(input.configs + 6, 12);
        const auto layout = character_growth_layout(version);
        std::fill_n(input.image.begin() + layout.coefficients, 28, 18);
        const std::array<std::uint8_t,4> cadence{8,4,4,4};
        std::copy(cadence.begin(), cadence.end(), input.image.begin() + layout.cadence);
        for (unsigned character = 0; character < 4; ++character) {
            input.put(layout.initial_stats + character * 20 + 6, 1);
            for (unsigned level = 0; level < 100; ++level)
                input.put32(layout.experience + (character * 100 + level) * 4, level * 10);
        }
        const auto psi = version == eb::GameVersion::US ? 0x158a50u : 0x159a06u;
        for (unsigned id = 1; id <= 2; ++id) {
            input.image[psi + id * 15] = std::uint8_t(id + 1);
            input.image[psi + id * 15 + 1] = std::uint8_t(id);
            for (unsigned column = 6; column < 9; ++column) input.image[psi + id * 15 + column] = 8;
        }
        input.image[psi + 3 * 15] = input.image[psi + 3 * 15 + 1] = 0;
        fonts = d::FontResources::import(input.image, version);
        windows = input.import();
        substitutions = d::SubstitutionResources::import(input.image, version);
        growth = std::make_shared<CharacterGrowth>(input.image, version);
    }
};
const Assets &assets(eb::GameVersion version) {
    static const Assets us(eb::GameVersion::US), jp(eb::GameVersion::JP);
    return version == eb::GameVersion::US ? us : jp;
}
void initialize(party::Character &c) {
    c = {}; c.level = 7; c.experience = 70;
    c.base_offense = c.base_defense = c.base_speed = c.base_guts = c.base_vitality = c.base_iq = c.base_luck = 2;
    c.offense = c.defense = c.speed = c.guts = c.vitality = c.iq = c.luck = 2;
    c.maximum_hp = c.current_hp = c.target_hp = 30;
    c.maximum_pp = c.current_pp = c.target_pp = 10;
}
std::shared_ptr<const d::Program> message_program(const VisibleCharacterGrowth &growth, int omit = -1) {
    std::vector<d::ContentBlock> blocks;
    std::vector<d::ReferenceBinding> bindings;
    for (unsigned i = 0; i < 11; ++i) {
        std::vector<std::uint8_t> text{std::uint8_t(0x61 + i), 0x1c, 0x0e};
        if (i == unsigned(GrowthMessage::PSI)) {
            // Read preserved CNUM, then the source CITEM through working and
            // argument, into the real imported PSI-name formatter.
            const std::array<std::uint8_t,13> tail{0x19,0x1e,0x1b,0,0x19,0x1f,0x1b,4,0x1c,0x12,0,1,2};
            text.insert(text.end(), tail.begin(), tail.end());
        } else {
            const std::array<std::uint8_t,7> tail{0x1c,0x0f,0x19,0x1e,0x61,1,2};
            text.insert(text.end(), tail.begin(), tail.end());
        }
        blocks.push_back({1,std::uint16_t(i * 64),std::move(text)});
        if (int(i) != omit) bindings.push_back({growth.message_reference(static_cast<GrowthMessage>(i)),d::Location{1,std::uint16_t(i * 64)}});
    }
    return std::make_shared<const d::Program>(growth.version(),std::move(blocks),std::vector<d::Location>{},std::move(bindings));
}
std::shared_ptr<const d::Program> parent_program(eb::GameVersion version) {
    return std::make_shared<const d::Program>(version,std::vector<d::ContentBlock>{{2,0,{0x71,0x72,2}}},
        std::vector<d::Location>{{2,0}});
}
struct Fixture {
    eb::GameVersion version;
    party::State party;
    s::RandomState random{0x1234,0x5678};
    unsigned context_reads{};
    bool fail_context{};
    VisibleCharacterGrowth producer;
    d::State state;
    d::TextOutput output;
    d::WindowHost windows;
    d::PromptHost prompts;
    d::PreparedMessage prepared;
    std::shared_ptr<const d::Program> program;
    std::unique_ptr<s::GrowthDialogue> coordinator;
    explicit Fixture(eb::GameVersion region, bool bind = true)
        : version(region),party(region),producer(assets(region).growth,assets(region).input.image,party,random,
              [&](unsigned character) { check(character >= 1 && character <= 4,"Foreign growth character");
                  if (fail_context) throw std::runtime_error("Missing live growth context");
                  ++context_reads; return CharacterGrowthContext{}; }),
          output(assets(region).fonts,state),windows(assets(region).windows,state,output),prompts(windows),
          prepared(region),program(message_program(producer)) {
        for (unsigned id = 1; id <= 4; ++id) {
            initialize(party.character(id));
            auto name = party.name_field(id);
            for (unsigned j = 0; j < name.size(); ++j) name[j] = std::uint8_t(0x71 + id + j);
            name[1] = 0; // Producer must still copy every later fixed-field byte.
        }
        party.controlled_count = 1; party.controlled_order[0] = 0; party.party_count = 1; party.party_order[0] = 1;
        windows.substitutions().configure(assets(region).substitutions,party::dialogue_values(party));
        auto open = windows.begin({d::WindowAction::Open,d::WindowId{0},{},0});
        while (open->advance() != d::OutputProgress::Complete) {
            check(open->effect() && open->effect()->kind == d::WindowEffectKind::ClearPartyBlink,
                  "Fixture open reached an unimplemented effect");
            open->respond(); // No party selection exists in this fixture.
        }
        output.policy().instant = false; output.policy().sound_mode = 3;
        std::vector<std::uint8_t> seed(prepared.name(d::PreparedName::Target).size() - 1,0x79);
        prepared.copy_name(d::PreparedName::Target,seed);
        prepared.copy_name(d::PreparedName::Attacker,std::array<std::uint8_t,2>{0x61,0x62});
        prepared.metadata(d::PreparedName::Target) = {0x4321,0xe7};
        prepared.set_number(123456); prepared.set_item(0x67);
        if (bind) attach();
    }
    void attach() { coordinator = std::make_unique<s::GrowthDialogue>(producer,program,prompts,prepared,party,random); }
};
unsigned message_index(s::GrowthDialogue::Operation &operation) {
    const auto snapshot = operation.conversation().snapshot();
    check(snapshot.frames.size() == 1 && snapshot.frames.front().cursor.has_value(),"Message did not start a real interpreter");
    return snapshot.frames.front().cursor->offset / 64;
}
d::Progress next(d::Conversation &conversation) {
    for (unsigned i = 0; i < 10000; ++i) {
        const auto progress = conversation.advance(1);
        if (progress != d::Progress::BudgetExhausted) return progress;
    }
    throw std::runtime_error("Conversation did not reach an actual boundary");
}
void complete_dialogue(Fixture &f, d::Conversation &conversation, const std::function<void(unsigned)> &callback = {}) {
    unsigned ticks{};
    for (unsigned steps = 0; steps < 10000; ++steps) {
        const auto result = next(conversation);
        if (result == d::Progress::Finished) { check(ticks > 0,"Message completed without actual glyph effects"); return; }
        const auto &event = *conversation.event();
        if (const auto *text = std::get_if<d::TextEffect>(&event)) {
            check(text->kind == d::TextEffectKind::WindowTick,"Unexpected audio boundary in silent fixture");
            f.windows.draw_tick(); f.windows.publish_scene();
            ++ticks;
            if (callback) callback(ticks);
        } else if (const auto *window = std::get_if<d::WindowEffect>(&event)) {
            check(window->kind == d::WindowEffectKind::WindowTick,"Unexpected window effect");
            f.windows.draw_tick(); f.windows.publish_scene();
        } else if (std::holds_alternative<d::PromptEffect>(event)) {
            f.prompts.state().pressed = 0x80;
        } else throw std::runtime_error("Growth message reached an unsupported request");
        conversation.respond();
    }
    throw std::runtime_error("Message did not complete");
}
void full_growth(eb::GameVersion version, unsigned character) {
    Fixture f(version);
    auto operation = f.coordinator->begin_level_up(character);
    check(f.coordinator->busy() && f.producer.busy() && f.party.character(character).level == 7,
          "Begin changed the real party");
    const auto before_rng = f.random;
    const auto before_number = f.prepared.number();
    check(operation->advance(0) == d::Progress::BudgetExhausted && f.random == before_rng &&
              f.prepared.number() == before_number && f.party.character(character).level == 7,
          "Zero scheduling budget performed source work");
    rejects([&] { operation->respond(); },"Idle coordinator acknowledged a service");
    rejects([&] { f.coordinator->begin_level_up(character); },"Concurrent growth acquired one producer");
    check(operation->advance(1) == d::Progress::Suspended && operation->service() == s::GrowthDialogueService::Dialogue,
          "Real level title was not passed to Conversation");
    check(message_index(*operation) == 0 && f.output.policy().prompt_mode == 1 && f.prepared.number() == 8 &&
              f.prepared.item() == 0x67 && f.random == before_rng && f.context_reads == 0,
          "Level title source write order or early RNG differs");
    const auto name = f.prepared.name(d::PreparedName::Target);
    const auto field = f.party.name_field(character);
    check(std::equal(field.begin(),field.end(),name.begin()) && name[field.size()] == 0 && name[field.size()+1] == 0x79,
          "Growth copy lost fixed bytes, terminator or retained tail");
    check(f.prepared.metadata(d::PreparedName::Target) == d::NameMetadata{std::uint16_t(version == eb::GameVersion::US ? 0xffff : 0x4321),0xe7},
          "Growth copied an article flag or missed regional retained ID");
    std::fill(field.begin(),field.end(),0x7a);
    check(name[0] != field[0],"Prepared name aliased the later party field");
    const auto snapshot = operation->conversation().snapshot();
    for (unsigned i = 0; i < 3; ++i) check(operation->advance(i) == d::Progress::Suspended &&
        operation->conversation().snapshot().consumed_bytes == snapshot.consumed_bytes && f.random == before_rng,
        "Pending service silently drove dialogue or growth");
    rejects([&] { operation->respond(); },"Unfinished child was falsely acknowledged");
    unsigned title_mutations{};
    complete_dialogue(f,operation->conversation(),[&](unsigned tick) {
        if (tick != 1) return;
        ++title_mutations;
        f.prepared.copy_name(d::PreparedName::Target,std::array<std::uint8_t,3>{0x78,0x79,0x7a});
        f.prepared.set_number(314159); f.prepared.set_item(0x68);
        f.output.policy().prompt_mode = 7;
    });
    check(title_mutations == 1 && f.state.window().active.working == 314159,
          "Real number consumer did not read callback's shared CNUM");
    check(f.prepared.metadata(d::PreparedName::Target).article == (version == eb::GameVersion::US ? 0 : 0xe7),
          "Article sentinel was not consumed at the regional name printer");
    operation->respond();
    check(operation->advance(1) == d::Progress::BudgetExhausted && !operation->service() &&
              f.output.policy().prompt_mode == 2 && f.random == before_rng && f.context_reads == 0,
          "Immediate prompt2 invented an effect or advanced a stat");
    unsigned messages = 1, psi_count{};
    std::uint32_t retained_number{};
    while (!operation->complete()) {
        const auto progress = operation->advance(1);
        if (progress != d::Progress::Suspended) continue;
        check(operation->service() == s::GrowthDialogueService::Dialogue,"Direct level-up invented music");
        const auto which = message_index(*operation);
        ++messages;
        check(f.prepared.name(d::PreparedName::Target)[0] == 0x78 && f.prepared.name(d::PreparedName::Target)[3] == 0,
              "Later stat message replaced a callback's prepared name");
        if (which == unsigned(GrowthMessage::PSI)) {
            check(f.prepared.item() == ++psi_count && f.prepared.number() == retained_number,
                  "PSI producer did not preserve CNUM or set the actual CITEM");
        } else {
            check(f.prepared.item() == 0x68 && f.prepared.number() != 314159,
                  "Stat producer cleared CITEM or retained stale numeric message data");
            retained_number = f.prepared.number();
        }
        complete_dialogue(f,operation->conversation());
        if (which == unsigned(GrowthMessage::PSI))
            check(f.state.window().saved.working == retained_number && f.state.window().active.argument == psi_count,
                  "Actual 191E/191F to PSI formatter register path differs");
        else check(f.state.window().active.working == retained_number,"Actual CNUM consumer lost a numeric gain");
        operation->respond();
    }
    check(messages >= 9 && psi_count == (character == 3 ? 0u : 2u) && operation->levels_gained() == 1 &&
              f.output.policy().prompt_mode == 0 && f.party.character(character).level == 8 &&
              !f.coordinator->busy() && !f.producer.busy() && !f.coordinator->failed(),
          "Complete real growth sequence lost messages, PSI or prompt cleanup");
    rejects([&] { operation->respond(); },"Completed coordinator acknowledged nonexistent work");
    check(operation->advance(0) == d::Progress::Finished,"Completed operation restarted at zero budget");
}
void experience_and_leases(eb::GameVersion version) {
    Fixture f(version);
    auto operation = f.coordinator->begin_experience(1,30);
    const auto random = f.random;
    check(operation->advance(1) == d::Progress::Suspended && operation->service() == s::GrowthDialogueService::LevelUpMusic &&
              f.party.character(1).experience == 100 && f.party.character(1).level == 7 && f.random == random,
          "Experience music did not precede level changes");
    rejects([&] { (void)operation->conversation(); },"Music exposed a fake child conversation");
    check(operation->advance(100) == d::Progress::Suspended && f.party.character(1).level == 7,
          "Unacknowledged music advanced growth");
    operation->respond(); // Explicit host music boundary; no playback claim.
    unsigned titles{};
    while (!operation->complete()) {
        if (operation->advance(1) != d::Progress::Suspended) continue;
        check(operation->service() == s::GrowthDialogueService::Dialogue,"Multi-level gain replayed its music");
        titles += message_index(*operation) == 0;
        complete_dialogue(f,operation->conversation());
        operation->respond();
    }
    check(titles == 3 && operation->levels_gained() == 3 && f.party.character(1).level == 10,
          "Experience thresholds were not handled by the real producer");
    f.party.character(1).level = 99; f.party.character(1).experience = 0xffffffff;
    auto next_operation = f.coordinator->begin_experience(1,2);
    operation.reset();
    check(f.coordinator->busy() && f.producer.busy(),"Old completed handle released a newer producer lease");
    const auto old_random = f.random;
    check(next_operation->advance(1) == d::Progress::Finished && f.party.character(1).experience == 1 &&
              f.random == old_random && !next_operation->service(),"Max-level experience invented presentation work");
}
void dependencies_and_failures(eb::GameVersion version) {
    {
        Fixture active(version,false);
        d::Conversation parent(parent_program(version),active.prompts);
        parent.start(d::EntryId{0});
        check(next(parent) == d::Progress::Suspended,"Constructor rejection fixture lacked an actual parent");
        rejects([&] { active.attach(); },"Coordinator construction bypassed an active output owner");
        check(!active.windows.prepared_message() &&
                  !active.windows.query_party(d::PartyQueryRequest{d::PartyQueryKind::ControlledCount}) &&
                  !active.producer.busy() && active.party.character(1).level == 7,
              "Failed coordinator construction partially bound a borrowed host owner");
        parent.respond(); complete_dialogue(active,parent);
        active.state.stream_slot = 0xfffe;
        rejects([&] { active.attach(); },"Constructor accepted invalid source stream admission");
        check(!active.windows.prepared_message() &&
                  !active.windows.query_party(d::PartyQueryRequest{d::PartyQueryKind::ControlledCount}),
              "Stream admission failure partially bound a host owner");
        active.state.stream_slot = 0;
        active.attach();
        check(active.windows.prepared_message() == &active.prepared,
              "Rejected construction prevented a later valid binding");
    }
    Fixture f(version,false);
    party::State foreign_party(version); s::RandomState foreign_random = f.random;
    rejects([&] { s::GrowthDialogue bad(f.producer,f.program,f.prompts,f.prepared,foreign_party,f.random); },"Foreign party identity accepted");
    rejects([&] { s::GrowthDialogue bad(f.producer,f.program,f.prompts,f.prepared,f.party,foreign_random); },"Copied random identity accepted");
    rejects([&] { s::GrowthDialogue bad(f.producer,{},f.prompts,f.prepared,f.party,f.random); },"Null imported program accepted");
    rejects([&] { s::GrowthDialogue bad(f.producer,message_program(f.producer,10),f.prompts,f.prepared,f.party,f.random); },"Unresolved PSI message accepted before growth");
    const auto other = version == eb::GameVersion::US ? eb::GameVersion::JP : eb::GameVersion::US;
    d::PreparedMessage wrong_region(other);
    rejects([&] { s::GrowthDialogue bad(f.producer,f.program,f.prompts,wrong_region,f.party,f.random); },"Foreign prepared region accepted");
    check(f.party.character(1).level == 7 && !f.producer.busy() && !f.windows.prepared_message(),
          "Rejected dependencies mutated producer or host binding");
    f.attach();
    d::PreparedMessage wrong_owner(version);
    rejects([&] { s::GrowthDialogue bad(f.producer,f.program,f.prompts,wrong_owner,f.party,f.random); },"Foreign prepared identity replaced shared state");
    rejects([&] { f.coordinator->begin_level_up(5); },"Invalid player accepted");
    check(!f.coordinator->busy() && !f.coordinator->failed(),"Preflight argument failure poisoned idle coordinator");
    auto direct = f.producer.begin_level_up(1);
    rejects([&] { f.coordinator->begin_level_up(1); },"Already borrowed growth producer accepted");
    direct.reset();
    f.state.stream_slot = 0xfffe;
    rejects([&] { f.coordinator->begin_level_up(1); },"Invalid source stream alias accepted before mutation");
    check(f.party.character(1).level == 7 && !f.producer.busy(),"Bad stream slot advanced party");
    f.state.stream_slot = 0;
    {
        auto abandoned = f.coordinator->begin_level_up(1);
        check(abandoned->advance(1) == d::Progress::Suspended,"Abandonment fixture lacked real message");
    }
    check(f.coordinator->failed() && !f.coordinator->busy() && !f.producer.busy() && f.party.character(1).level == 8,
          "Abandoned message pretended rollback or left producer borrowed");
    rejects([&] { f.coordinator->begin_level_up(1); },"Abandoned dialogue restarted mutated state");

    Fixture context(version);
    auto operation = context.coordinator->begin_level_up(1);
    operation->advance(1); complete_dialogue(context,operation->conversation()); operation->respond();
    operation->advance(1); // source prompt2 only
    context.fail_context = true;
    rejects([&] { operation->advance(1); },"Missing live context was ignored");
    check(context.coordinator->failed(),"Failed source work was replayable");
    rejects([&] { operation->advance(1); },"Terminal growth failure was retried");
}
void nested_callbacks(eb::GameVersion version) {
    Fixture f(version);
    d::Conversation parent(parent_program(version),f.prompts);
    parent.start(d::EntryId{0});
    rejects([&] { f.coordinator->begin_level_up(1,parent); },"Budget-only parent accepted as callback");
    check(f.party.character(1).level == 7 && !f.producer.busy(),"Wrong parent preflight advanced growth");
    check(next(parent) == d::Progress::Suspended && std::holds_alternative<d::TextEffect>(*parent.event()) &&
              std::get<d::TextEffect>(*parent.event()).kind == d::TextEffectKind::WindowTick,
          "Parent did not reach an actual window callback");
    rejects([&] { f.coordinator->begin_level_up(1); },"Root coordinator stole suspended parent output");
    Fixture foreign(version);
    d::Conversation other(parent_program(version),foreign.prompts); other.start(d::EntryId{0}); next(other);
    rejects([&] { f.coordinator->begin_level_up(1,other); },"Foreign output parent accepted");
    auto operation = f.coordinator->begin_level_up(1,parent);
    while (!operation->complete()) {
        if (operation->advance(1) != d::Progress::Suspended) continue;
        check(operation->service() == s::GrowthDialogueService::Dialogue,"Nested direct growth invented music");
        rejects([&] { parent.advance(); },"Parent advanced while growth child owned output");
        rejects([&] { parent.respond(); },"Parent acknowledged while growth child owned output");
        complete_dialogue(f,operation->conversation());
        check(parent.event().has_value(),"Growth child consumed parent callback");
        operation->respond();
    }
    parent.respond(); complete_dialogue(f,parent);
    other.respond(); complete_dialogue(foreign,other);
    check(f.party.character(1).level == 8 && !f.coordinator->failed(),"Nested producer did not finish independently");
}

// Bounded synthetic map/sprite imports, following the source-shaped builders
// in native_story_actor_frame_tests. No CPU or fake Scene implementation.
void put(std::vector<std::uint8_t> &bytes,unsigned at,unsigned value) {
    bytes.at(at)=std::uint8_t(value);bytes.at(at+1)=std::uint8_t(value>>8);
}
void pointer(std::vector<std::uint8_t> &bytes,unsigned at,unsigned offset) {
    const auto value=0xc00000+offset;put(bytes,at,value);put(bytes,at+2,value>>16);
}
void zero_run(std::vector<std::uint8_t> &bytes,unsigned &at,unsigned count) {
    while(count) { const auto length=std::min(count,1024u),encoded=length-1;
        bytes.at(at++)=std::uint8_t(0xe4|(encoded>>8));bytes.at(at++)=std::uint8_t(encoded);
        bytes.at(at++)=0;count-=length; }
    bytes.at(at)=0xff;
}
WorldMapArea make_area() {
    std::vector<std::uint8_t> bytes(0x20000);
    WorldMapLayout layout{{},0x1a000,0x1aa00,0x1c000,0x1c100,0x1c104,0x1c108,
                          0x1c400,0x1c430,0x1c600,0x1c10c,0x1c110,1};
    for(unsigned i=0;i<10;++i) layout.block_chunks[i]=i*0x2800;
    pointer(bytes,layout.graphics,0x1d000);pointer(bytes,layout.arrangements,0x1d500);
    pointer(bytes,layout.collision_pointers,0x1e000);pointer(bytes,layout.animation_properties,0x1c800);
    put(bytes,layout.event_pointers,0xc700);
    unsigned at=0x1d000;zero_run(bytes,at,0x7001);
    at=0x1d500;zero_run(bytes,at,64);
    return WorldMap(bytes,layout).prepare(0,{});
}
std::shared_ptr<SpriteResources> make_sprites() {
    std::vector<std::uint8_t> bytes(4096);
    SpriteCatalogLayout layout{0,73,8,2,1};
    pointer(bytes,0,32);pointer(bytes,4,32);pointer(bytes,8,128);
    bytes[32]=3;bytes[33]=0x20;bytes[35]=0x1a;bytes[40]=0xc0;
    for(unsigned i=0;i<16;++i) put(bytes,41+i*2,512|(i&1));
    bytes[128]=2;bytes[129]=1;
    for(unsigned mirror=0;mirror<2;++mirror) for(unsigned part=0;part<2;++part) {
        const auto at=130+(mirror*2+part)*5;
        bytes[at]=std::uint8_t(-24+part*16);bytes[at+2]=mirror?0x40:0;
        bytes[at+3]=std::uint8_t(-8);bytes[at+4]=part?0x80:0;
    }
    return std::make_shared<SpriteResources>(bytes,layout);
}
d::Progress next(s::Scene::Operation &operation) {
    for(unsigned i=0;i<10000;++i) {
        const auto result=operation.advance(1);
        if(result!=d::Progress::BudgetExhausted) return result;
    }
    throw std::runtime_error("Scene did not reach a real service");
}
void scene_actor_callback(eb::GameVersion version) {
    Fixture f(version,false);
    std::vector<d::ReferenceBinding> bindings;
    for(unsigned i=0;i<11;++i) bindings.push_back({f.producer.message_reference(static_cast<GrowthMessage>(i)),d::Location{1,0}});
    f.program=std::make_shared<const d::Program>(version,std::vector<d::ContentBlock>{{1,0,{0x71,2}}},
        std::vector<d::Location>{},std::move(bindings));
    f.attach();
    auto meter_resources=party::MeterWindowResources::import(assets(version).input.image,version);
    party::MeterWindows meters(f.windows,f.party,meter_resources);
    const std::vector<std::uint8_t> code{0x14,0,2,1,0,0x06,1,0x19,0,0};
    auto scripts=std::make_shared<ActionScriptData>(code,0,std::vector<std::uint32_t>{0});
    ActorWorld actors(make_sprites(),scripts,version);
    WorldActorSpec spec;spec.script=0;spec.action.position={100*65536+0x8000,100*65536+0x8000,0x8000};
    spec.behavior.tick=ActorTickCallback::WorldMaintenance;
    const auto caller=actors.create(spec);
    actors.actor(caller).appearance.select_four(0,0,0);
    auto area=make_area();AreaPalettes palettes;
    s::TickState clock;s::InputState input;
    s::Scene scene(f.windows,f.party,f.random,meters,clock,input,actors,area,palettes);
    auto parent=scene.begin(s::TickKind::ActorFrame);
    check(next(*parent)==d::Progress::Suspended && parent->service()==s::SceneService::ActorEngine &&
              parent->actor_request()->actor==caller && clock.action_scripts_disabled==1 && actors.ticks()==0,
          "Scene fixture did not suspend in a real ActorWorld callback");
    auto growth=f.coordinator->begin_level_up(3);
    unsigned completed_messages{},frames{};
    while(!growth->complete()) {
        const auto before=scene.completed_frames();
        check(growth->advance(0)==d::Progress::BudgetExhausted && scene.completed_frames()==before,
              "Coordinator budget exhaustion invented a Scene frame");
        if(growth->advance(1)!=d::Progress::Suspended) continue;
        check(growth->service()==s::GrowthDialogueService::Dialogue,"Scene growth invented music");
        auto child=scene.begin_nested(growth->conversation(),*parent);
        rejects([&]{parent->respond_actor();},"Actor callback resumed while actual child Scene was active");
        for(;;) {
            const auto progress=next(*child);
            if(progress==d::Progress::Finished) break;
            check(child->service()==s::SceneService::Frame,"Scene message required an unimplemented service");
            check(actors.ticks()==0 && clock.action_scripts_disabled==1 &&
                      actors.actor(caller).action().variables[0]==1,
                  "Nested growth message reentered actual actors");
            child->complete_frame({0,0});++frames;
        }
        check(growth->conversation().finished() && parent->service()==s::SceneService::ActorEngine,
              "Scene child consumed its real actor parent");
        child.reset();growth->respond();++completed_messages;
    }
    check(frames>0 && scene.completed_frames()==frames && completed_messages>=9 && actors.ticks()==0,
          "Real Scene did not own all message frames");
    parent->respond_actor();
    check(next(*parent)==d::Progress::Suspended && parent->service()==s::SceneService::Frame &&
              actors.ticks()==1 && clock.action_scripts_disabled==0,
          "Original actor traversal failed to resume exactly once");
    parent->complete_frame({0,0});
    check(next(*parent)==d::Progress::Finished && scene.completed_frames()==frames+1 &&
              f.party.character(3).level==8 && !f.coordinator->failed(),
          "Scene and producer did not finish independently");
}
} // namespace
int main() {
    try {
        for (const auto version : {eb::GameVersion::US,eb::GameVersion::JP}) {
            for (unsigned character = 1; character <= 4; ++character) full_growth(version,character);
            experience_and_leases(version); dependencies_and_failures(version); nested_callbacks(version);
            scene_actor_callback(version);
        }
        std::cout << "native growth dialogue: " << checks << " checks passed\n";
    } catch (const std::exception &error) { std::cerr << error.what() << '\n'; return 1; }
}
