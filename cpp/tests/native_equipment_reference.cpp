// Complete original equipment and non-Teddy removal calls, including stat,
// resistance, real timed-item and RNG helpers. The whole saved payload is
// compared, with no helper interception or instruction substitution.
#include "eb/asset_store.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/native/character_growth.hpp"
#include "eb/native/party/inventory.hpp"
#include "eb/native/saves/session.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include "native_save_test_data.hpp"
#include <iostream>
#include <memory>

namespace {
using namespace eb::native;
struct Original {
    std::unique_ptr<eb::SnesBus> bus;
    eb::MainCpu65816 cpu;
    eb::GameVersion version;
    unsigned game, timers, loaded, next, remove, take;
    std::array<unsigned,4> equipment;
    unsigned calls{};
    std::uint64_t comparisons{};
    explicit Original(const eb::GameAssets &a)
        : bus(std::make_unique<eb::SnesBus>(a.image,a.version)),cpu(*bus),version(a.version),
          game(a.version == eb::GameVersion::US ? 0x97f5 : 0x9aa9),
          timers(a.version == eb::GameVersion::US ? 0x9f1a : 0xa120),
          loaded(a.version == eb::GameVersion::US ? 0x9f2a : 0xa130),
          next(a.version == eb::GameVersion::US ? 0x9f2c : 0xa132),
          remove(a.version == eb::GameVersion::US ? 0xc1ddc6 : 0xc1dba3),
          take(a.version == eb::GameVersion::US ? 0xc18ead : 0xc18f56),
          equipment(a.version == eb::GameVersion::US
             ? std::array<unsigned,4>{0xc4577d,0xc457ca,0xc45815,0xc45860}
             : std::array<unsigned,4>{0xc4357b,0xc435c8,0xc43613,0xc4365e}) {
        cpu.set_runtime(eb::MainCpuRuntime::Legacy);
    }
    void put(unsigned at, unsigned value) {
        bus->work_ram.at(at)=std::uint8_t(value);bus->work_ram.at(at+1)=std::uint8_t(value>>8);
    }
    auto encode(const saves::PersistedState &s) const {
        auto result=saves::SaveArchive::empty(version);result.save(0,s,s.game.elapsed_timer);return result;
    }
    void seed(const saves::PersistedState &s, const party::ItemTransformationState &t, story::RandomState r) {
        bus->work_ram.fill(0);
        const auto archive=encode(s);
        std::copy_n(archive.bytes().begin()+32,saves::layout(version).persisted_bytes(),bus->work_ram.begin()+game);
        for(unsigned i=0;i<4;++i) {
            const auto &v=t.records[i];const auto at=timers+i*4;
            bus->work_ram[at]=v.sfx;bus->work_ram[at+1]=v.frequency;
            bus->work_ram[at+2]=v.sfx_countdown;bus->work_ram[at+3]=v.transformation_countdown;
        }
        put(loaded,t.loaded_count);bus->work_ram[next]=t.next_check;put(0x24,r.primary_word);put(0x26,r.secondary_word);
        cpu.emulation_mode=false;cpu.status_register=eb::MainCpu65816::InterruptDisable;
        cpu.direct_page=0x1d00;cpu.stack_pointer=0x1fff;cpu.data_bank=0x7e;cpu.program_counter=0xc1ff00;
    }
    unsigned call(unsigned entry,unsigned a,unsigned x) {
        cpu.accumulator=a;cpu.x_index=x;cpu.execute_instruction<0x22>(entry,4);
        for(unsigned i=0;i<200000;++i) {
            if(cpu.program_counter==0xc1ff04 && cpu.stack_pointer==0x1fff) {++calls;return cpu.accumulator;}
            cpu.step_instruction();
        }
        throw std::runtime_error("Original equipment/removal did not return: "+cpu.describe_registers());
    }
    void compare(const saves::PersistedState &s,const party::ItemTransformationState &t,story::RandomState r) {
        const auto archive=encode(s);
        for(unsigned i=0;i<saves::layout(version).persisted_bytes();++i) {
            ++comparisons;
            if(archive.bytes()[32+i]!=bus->work_ram[game+i])
                throw std::runtime_error("Equipment/removal payload mismatch call "+std::to_string(calls)+" byte "+std::to_string(i));
        }
        const auto check=[&](unsigned at,unsigned value) {
            ++comparisons;
            if(bus->work_ram[at]!=std::uint8_t(value)) throw std::runtime_error("Equipment/removal timer/RNG mismatch");
        };
        for(unsigned i=0;i<4;++i) {const auto &v=t.records[i]; const auto at=timers+i*4;
            check(at,v.sfx);check(at+1,v.frequency);check(at+2,v.sfx_countdown);check(at+3,v.transformation_countdown);}
        check(loaded,t.loaded_count);check(loaded+1,t.loaded_count>>8);check(next,t.next_check);
        check(0x24,r.primary_word);check(0x25,r.primary_word>>8);check(0x26,r.secondary_word);check(0x27,r.secondary_word>>8);
    }
};
void run(const eb::GameAssets &assets) {
    Original original(assets);CharacterGrowth growth(assets.image,assets.version);
    const auto items=dialogue::SubstitutionResources::import(assets.image,assets.version);
    const auto transformations=party::ItemTransformationResources::import(assets.image,assets.version);
    auto base=saves::SaveArchive(assets.version,save_test::fixture(assets.version,67)).load(0);
    base.game.party_order={1,2,3,4,0,0};base.game.controlled_count=4;
    for(unsigned c=1;c<=6;++c) for(unsigned slot=0;slot<4;++slot) for(unsigned item=0;item<256;++item) {
        auto s=base;auto &saved=s.characters[c-1];auto &v=saved.values;
        v.items.fill(std::uint8_t(item));v.equipment={1,2,3,14};
        saved.boosted_speed=177;saved.boosted_guts=205;saved.boosted_luck=243;
        party::State party(assets.version);saves::restore_party(s,party);
        party::ItemTransformationState timers;story::RandomState random{0x7abc,0xdef0};
        original.seed(s,timers,random);
        const auto position=item%2?0u:14u;
        const auto expected=original.call(original.equipment[slot],c,position);
        const auto actual=growth.change_equipment(party.character(c),c,static_cast<party::EquipmentSlot>(slot),position,
            {177,205,0,0,243,false});
        if(actual!=expected) throw std::runtime_error("Equipment previous index differs");
        original.compare(saves::capture_party(party,s),timers,random);
    }
    for(unsigned c=1;c<=4;++c) for(unsigned position=1;position<=14;++position) for(unsigned item=0;item<254;++item) {
        if(items->item_properties(item).type==4) continue; // actual Teddy lifecycle has separate whole-world proof
        auto s=base;auto &v=s.characters[c-1].values;
        v.items.fill(1);v.items[position-1]=item;v.equipment={std::uint8_t(position),2,3,14};
        if(position<12 && item%3==0) v.items[position+1]=0; // preserve suffix after the source's first hole
        party::State party(assets.version);saves::restore_party(s,party);
        party::ItemTransformationState timers;
        timers.loaded_count=3;timers.next_check=13;for(auto &timer:timers.records)timer={7,11,17,29};
        story::RandomState random{std::uint16_t(17+item),std::uint16_t(53+position)};
        original.seed(s,timers,random);
        party::Inventory inventory(party,items,transformations,timers,random);inventory.bind_equipment(growth);
        auto operation=inventory.begin_remove(c,position);
        while(operation->advance(1)==dialogue::Progress::BudgetExhausted) {}
        if(!operation->complete()) throw std::runtime_error("Non-Teddy removal suspended");
        const auto returned=original.call(original.remove,c,position);
        if(operation->recipient()!=returned) throw std::runtime_error("Removal result differs");
        original.compare(saves::capture_party(party,s),timers,random);
    }
    std::cout << "PASS native equipment/removal " << assets.title << ": " << original.calls
              << " complete original calls, " << original.comparisons << " payload/timer/RNG comparisons\n";
}
}
int main(int argc,char **argv) {
    try {if(argc<2) throw std::runtime_error("Expected imported asset packs");
        for(int i=1;i<argc;++i)run(eb::load_game_assets(argv[i],eb::asset_profiles()));
    } catch(const std::exception &e) {std::cerr<<e.what()<<'\n';return 1;}
}
