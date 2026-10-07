// Reuse the preserved allocator/record comparator, with a new complete
// ADD_CHAR_TO_PARTY caller. Its chosen-player Teddy/timed-item tails run fully.
#if defined(__GNUC__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreturn-type"
#endif
#define main preserved_teddy_reference_main
#include "native_story_teddy_reference.cpp"
#undef main
#if defined(__GNUC__)
#pragma GCC diagnostic pop
#endif
#include "eb/native/story/party_membership.hpp"

namespace {
struct MembershipOracle : Oracle {
    using Oracle::Oracle;
    unsigned timer_scans{};
    void add(unsigned member) {
        cpu.emulation_mode = false;
        cpu.status_register = eb::MainCpu65816::InterruptDisable;
        cpu.data_bank = 0x7e; cpu.direct_page = 0x1e00; cpu.stack_pointer = 0x1fff;
        cpu.program_counter = 0xc0ff00;
        cpu.accumulator = member; cpu.x_index = cpu.y_index = 0;
        cpu.execute_instruction<0x22>(l.displacement ? 0xc227c4 : 0xc228f8, 4);
        for (unsigned step = 0; step < 2000000; ++step) {
            const auto pc = cpu.program_counter;
            if (pc == 0xc0ff04 && cpu.stack_pointer == 0x1fff) {
                require(cpu.direct_page == 0x1e00 && cpu.data_bank == 0x7e,
                        "Membership caller ABI differs");
                return;
            }
            if (pc == (l.displacement ? 0xc3e790u : 0xc3ebcau)) ++timer_scans;
            require(pc != (l.displacement ? 0xc03f64u : 0xc03cfdu),
                    "Non-bicycle membership entered dismount");
            cpu.step_instruction(); ++counts.instructions;
        }
        throw std::runtime_error("Complete membership helper did not return");
    }
};
void add_case(Resources& r, unsigned member, unsigned seed, bool full) {
    context = r.assets.title + " member=" + std::to_string(member) + " seed=" + std::to_string(seed);
    Fixture f(r, seed); f.setup_seed = seed;
    f.style = 0;
    f.party.party_order = full ? std::array<std::uint8_t,6>{1,2,3,4,5,6}
                              : std::array<std::uint8_t,6>{1};
    MembershipOracle source(r.assets); source.seed(f, seed);
    source.invoke(source.l.rebuild, true); f.setup_native(); source.compare(f,r);
    auto transforms = party::ItemTransformationResources::import(r.assets.image,r.assets.version);
    party::ItemTransformationState timers;
    story::RandomState random{0x1234,0xfedc};
    party::Inventory inventory(f.party,r.items,transforms,timers,random);
    story::PartyMembership membership(f.party,f.actors,f.creation,f.refresh,f.teddy,
        inventory,f.talk,*r.sprites,r.creation_data);
    const auto before = f.actors.size();
    source.add(member);
    auto operation = membership.begin_add(member);
    require(operation->advance(0) == dialogue::Progress::BudgetExhausted && f.actors.size() == before,
            "Zero membership budget performed insertion");
    for (unsigned work=0; !operation->complete() && work<1000; ++work)
        require(operation->advance(work%2 ? 1 : 7) != dialogue::Progress::Suspended,
                "Non-bicycle membership escaped its actual synchronous owners");
    require(operation->complete(), "Native membership did not finish");
    source.compare(f,r);
    require(source.timer_scans == ((!full && member>1 && member<=4) ? 1u : 0u),
            "Chosen insertion omitted or duplicated actual timed-item scan");
    require(random == story::RandomState{0x1234,0xfedc}, "Empty inventory rescan changed RNG");
    require(operation->advance() == dialogue::Progress::Finished, "Completed membership replayed work");
    ++counts.cases;
}
}
int main(int argc,char**argv) {
    if(argc<2) return 77;
    try {
        for(int i=1;i<argc;++i) {
            const auto assets=eb::load_game_assets(argv[i],eb::asset_profiles());
            Resources resources(assets); counts={};
            for(unsigned seed=0;seed<3;++seed)
                for(unsigned member=1;member<=17;++member) add_case(resources,member,seed,false);
            for(unsigned member : {1u,4u,7u,17u}) add_case(resources,member,0,true);
            std::cout<<(assets.version==eb::GameVersion::JP?"JP":"US")
                <<" complete membership callers="<<counts.cases
                <<" actor words="<<counts.actor_words<<" list bytes="<<counts.list_bytes
                <<" source instructions="<<counts.instructions<<"\n";
        }
    }catch(const std::exception&e){std::cerr<<e.what()<<'\n';return 1;}
}
