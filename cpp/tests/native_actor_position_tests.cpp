// Persistent authored-role position contract against actual ActorWorld
// creation, script execution, movement and deletion. Synthetic imported sprite
// content only; no reference CPU, commercial assets or bicycle/audio shortcut.
#include "eb/native/actor_world.hpp"
#include "native_sprite_fixture.hpp"
#include <array>
#include <iostream>
#include <limits>
#include <stdexcept>
#include <type_traits>
#include <utility>

namespace {
using namespace eb::native;
using Position=std::array<std::uint32_t,3>;
unsigned checks{};
void check(bool ok,const char* message) {
    ++checks;
    if(!ok) throw std::runtime_error(message);
}
template<class F> void rejects(F&& call,const char* message) {
    bool rejected{};
    try { call(); } catch(const std::exception&) { rejected=true; }
    check(rejected,message);
}
struct Fixture {
    native_sprite_test::Fixture graphics;
    std::shared_ptr<SpriteResources> sprites=
        std::make_shared<SpriteResources>(graphics.bytes,graphics.layout);
    std::shared_ptr<const ActionScriptData> scripts;
    explicit Fixture() {
        // Root 0 stays alive, root 1 ends, root 2 increments a variable then
        // waits one tick and loops. All execution is the actual native VM.
        const std::vector<std::uint8_t> bytes{0x09,0x00,0x14,0,2,1,0,0x06,1,0x19,2,0};
        scripts=std::make_shared<ActionScriptData>(bytes,0,std::vector<std::uint32_t>{0,1,2});
    }
    ActorWorld world(eb::GameVersion version) {return ActorWorld(sprites,scripts,version);}
};
WorldActorSpec actor(Position position={},unsigned script=0) {
    WorldActorSpec spec;
    spec.script=script;
    spec.action.position=position;
    spec.action.animation=0;
    spec.action.priority=1;
    return spec;
}

static_assert(std::is_same_v<decltype(std::declval<const ActorWorld&>().authored_position(0)),AuthoredActorPosition>);
Position position_for(unsigned role) {
    return {0x10008001u+role*0x01010001u,0xffff1234u-role*0x01000001u,0x8000fedcu+role*0x00010001u};
}
std::array<Position,30> positions(const ActorWorld& world) {
    std::array<Position,30> result;
    for(unsigned role=0;role<30;++role) result[role]=world.authored_position(role);
    return result;
}
void fresh_and_released_writes(Fixture& f,eb::GameVersion version) {
    auto world=f.world(version);
    for(unsigned role=0;role<30;++role) {
        check(world.authored_position(role)==Position{} && !world.actor_for_role(role),
              "Fresh authored role invented position or live actor");
        const auto before=positions(world);
        auto supplied=position_for(role);const auto expected=supplied;
        world.set_authored_position(role,supplied);supplied={};
        check(world.authored_position(role)==expected && !world.actor_for_role(role) && world.size()==0,
              "Released full position write changed occupancy or borrowed caller storage");
        auto copy=world.authored_position(role);copy[0]^=0xffffffffu;
        check(world.authored_position(role)==expected && copy!=expected,
              "Returned released position aliased mutable role storage");
        for(unsigned other=0;other<30;++other)
            if(other!=role) check(world.authored_position(other)==before[other],
                                  "Released position write contaminated another physical role");
        for(unsigned axis=0;axis<3;++axis)
            for(std::uint16_t whole:{std::uint16_t(0),std::uint16_t(1),std::uint16_t(0x7fff),
                                    std::uint16_t(0x8000),std::uint16_t(0xffff)}) {
                const auto old=world.authored_position(role);
                world.set_authored_coordinate(role,axis,whole);
                const auto now=world.authored_position(role);
                check(now[axis]>>16==whole && std::uint16_t(now[axis])==std::uint16_t(old[axis]),
                      "Released whole-coordinate write discarded fraction or signed high word");
                for(unsigned other=0;other<3;++other)
                    if(other!=axis) check(now[other]==old[other],"Whole-coordinate write changed another axis");
            }
    }
    const auto before=positions(world);
    for(unsigned role:{30u,std::numeric_limits<unsigned>::max()}) {
        rejects([&]{(void)world.authored_position(role);},"Out-of-range role read succeeded");
        rejects([&]{world.set_authored_position(role,{});},"Out-of-range full role write succeeded");
        rejects([&]{world.set_authored_coordinate(role,0,1);},"Out-of-range whole role write succeeded");
    }
    for(unsigned axis:{3u,std::numeric_limits<unsigned>::max()})
        rejects([&]{world.set_authored_coordinate(24,axis,0xffff);},"Out-of-range axis write succeeded");
    check(positions(world)==before && world.size()==0,"Invalid position request mutated released role state");
}
void live_motion_and_writes(Fixture& f,eb::GameVersion version) {
    auto world=f.world(version);auto spec=actor({0xfffff123u,0x80000001u,0x7ffffffeu},2);
    spec.behavior.physics=ActorPhysics::Spatial;
    spec.behavior.direction=7;spec.behavior.projected_x=-321;spec.behavior.projected_y=654;
    spec.action.velocity={0x00010001u,0xffff0000u,0x00000005u};
    const auto id=*world.create_authored(spec,{24,25});
    check(world.authored_position(24)==spec.action.position && world.actor_for_role(24)==id,
          "Creation did not publish actual full XYZ into its authored role");
    const auto held=world.authored_position(24);
    check(world.advance_tick()==WorldTickResult::Complete && world.ticks()==1 &&
          world.actor(id).action().variables[0]==1,"Actual moving actor did not finish its native VM tick");
    const Position moved{0x0000f124u,0x7fff0001u,0x80000003u};
    check(world.actor(id).action().position==moved && world.authored_position(24)==moved,
          "Role position read missed actual full-width XYZ motion or wrap");
    check(held==spec.action.position,"Held position value followed later actor motion");
    auto copied=world.authored_position(24);copied[1]=0;
    check(world.authored_position(24)==moved && copied!=moved,"Live returned position is a mutable alias");
    const Position direct{0x11112222u,0x33334444u,0x55556666u};
    world.actor(id).action().position=direct;
    check(world.authored_position(24)==direct,"Live role position used a stale creation/motion cache");
    auto supplied=Position{0xabcdffffu,0x80000000u,0xffff1357u};
    const auto exact=supplied;const auto velocity=world.actor(id).action().velocity;
    const auto variables=world.actor(id).action().variables;
    const auto direction=world.actor(id).behavior.direction;
    const auto projected_x=world.actor(id).behavior.projected_x,projected_y=world.actor(id).behavior.projected_y;
    world.set_authored_position(24,supplied);supplied={};
    check(world.actor(id).action().position==exact && world.authored_position(24)==exact,
          "Live full position write bypassed actual actor or borrowed caller storage");
    for(unsigned axis=0;axis<3;++axis) {
        const auto before=world.authored_position(24);
        world.set_authored_coordinate(24,axis,std::uint16_t(0x8000+axis));
        const auto now=world.actor(id).action().position;
        check(world.authored_position(24)==now && now[axis]>>16==0x8000+axis &&
              std::uint16_t(now[axis])==std::uint16_t(before[axis]),
              "Live whole write lost actual actor identity, fraction or whole word");
        for(unsigned other=0;other<3;++other)
            if(other!=axis) check(now[other]==before[other],"Live whole write changed a different axis");
    }
    check(world.actor(id).action().velocity==velocity && world.actor(id).action().variables==variables &&
          world.actor(id).behavior.direction==direction && world.actor(id).behavior.projected_x==projected_x &&
          world.actor(id).behavior.projected_y==projected_y && world.ticks()==1,
          "Direct role coordinate write performed motion, projection, script or facing work");
    const auto before=positions(world);
    rejects([&]{world.set_authored_coordinate(24,3,17);},"Live out-of-range axis write succeeded");
    check(positions(world)==before,"Invalid live axis changed actor or retained positions");
    const auto final=world.actor(id).action().position;
    check(world.erase(id) && !world.actor_for_role(24) && world.size()==0,
          "Generic erase failed to remove actual role actor");
    check(world.authored_position(24)==final,"Generic erase lost final full XYZ/fractions");
    check(!world.erase(id) && world.authored_position(24)==final,"Repeated erase changed released role position");
    rejects([&]{(void)world.actor(id);},"Released role kept deleted actor identity alive");
}
void ending_release_and_replace(Fixture& f,eb::GameVersion version) {
    auto world=f.world(version);
    const auto initial=position_for(8);
    const auto ending=*world.create_authored(actor(initial,1),{8,9});
    check(world.advance_tick()==WorldTickResult::Complete && world.size()==0 && !world.actor_for_role(8),
          "Actual script-end path did not delete its role actor");
    check(world.authored_position(8)==initial && !world.erase(ending),
          "Script-end erase lost authored coordinates or allowed repeated deletion");
    const auto id=*world.create_authored(actor(position_for(9),2),{9,10});
    check(world.release_appearance(id) && world.actor_for_role(9)==id && world.size()==1,
          "Appearance-only release deleted the live actor/role");
    const auto released_graphics=world.authored_position(9);
    check(released_graphics==position_for(9) && !world.actor(id).has_appearance(),
          "Appearance-only release changed full actor position");
    world.actor(id).action().position[2]=0x01234567;
    check(world.authored_position(9)[2]==0x01234567 && !world.release_appearance(id),
          "Appearance-released live actor no longer supplied authoritative position");
    world.set_authored_coordinate(9,0,0xfffe);
    const auto before_replace=world.authored_position(9);
    world.actor(id).scripts_and_physics_enabled=false;
    world.replace_script(id,2);
    check(world.authored_position(9)==before_replace && world.actor_for_role(9)==id && world.size()==1,
          "Script replacement recreated role identity or reset full actor coordinates");
    rejects([&]{world.replace_script(id,0x123456);},"Invalid script replacement unexpectedly succeeded");
    check(world.authored_position(9)==before_replace,"Rejected script replacement reset role position");
    world.replace_script(id,1);
    check(world.advance_tick()==WorldTickResult::Complete && !world.actor_for_role(9) &&
          world.authored_position(9)==before_replace,
          "Replacement ending script failed to retain final position after appearance release");
    const auto dead=*world.create_authored(actor(position_for(10)),{10,11});
    world.actor(dead).action().alive=false;
    check(world.advance_tick()==WorldTickResult::Complete && !world.actor_for_role(10) &&
          world.authored_position(10)==position_for(10),
          "Actor-dead tick cleanup lost authored position");
}
void reuse_failure_and_order(Fixture& f,eb::GameVersion version) {
    auto world=f.world(version);std::array<ActorId,30> ids{};
    for(unsigned role=0;role<30;++role) ids[role]=*world.create_authored(actor(position_for(role)),{role,role+1});
    auto before=positions(world);const auto order=world.actors();
    check(!world.create_authored(actor({1,2,3}),{24,25}) && !world.create_authored(actor({4,5,6}),{0,30}),
          "Occupied authored roles silently replaced a live actor");
    check(positions(world)==before && world.actors()==order,"Failed occupied creation mutated actors or retained positions");
    check(world.erase(ids[4]) && world.erase(ids[17]),"Could not release selected roles for reuse");
    check(positions(world)==before,"Role release changed physical-role position ownership");
    const auto reuse=*world.create_authored(actor({0xaaaa0001,0xbbbb0002,0xcccc0003}),{0,30});
    check(world.actor(reuse).authored_role()==17 && reuse!=ids[17] &&
          world.authored_position(17)==Position{0xaaaa0001,0xbbbb0002,0xcccc0003},
          "Position retention altered source LIFO role selection or leaked former actor identity");
    check(world.authored_position(4)==before[4],"Reusing another role consumed released position data");
    check(world.erase(reuse),"Could not re-release allocated role");
    before=positions(world);world.order_free_authored_roles();
    check(positions(world)==before,"Free-role sorting reordered the coordinate ledger");
    const auto sorted=*world.create_authored(actor({0x11110001,0x22220002,0x33330003}),{0,30});
    check(world.actor(sorted).authored_role()==4 && world.authored_position(17)==before[17],
          "Sorted role reuse lost physical-role coordinates");
    auto invalid=actor({0xdeadbeef,0xabcd1234,0xff008000});invalid.sprite=99999;
    const auto active=world.actors();before=positions(world);
    rejects([&]{world.create_authored(invalid,{17,18});},"Invalid sprite created an actor");
    invalid=actor({0xdeadbeef,0xabcd1234,0xff008000},99);
    rejects([&]{world.create_authored(invalid,{17,18});},"Invalid script created an actor");
    rejects([&]{world.create_authored(actor(),{3,2});},"Inverted range created an actor");
    rejects([&]{world.create_authored(actor(),{0,31});},"Out-of-range authored role created an actor");
    check(!world.create_authored(actor(),{17,17}),"Empty range created an actor");
    check(positions(world)==before && world.actors()==active && !world.actor_for_role(17),
          "Rejected creation consumed role or mutated full position storage");
    const Position replacement{0x00018000,0x8000ffff,0xffff0000};
    const auto fresh=*world.create_authored(actor(replacement),{17,18});
    check(fresh!=reuse && fresh!=ids[17] && world.authored_position(17)==replacement &&
          world.actor(fresh).action().position==replacement,
          "Valid same-role creation retained old coordinate bytes instead of actual prepared state");
    check(!world.erase(reuse) && world.authored_position(17)==replacement && world.actor_for_role(17)==fresh,
          "Erasing stale identity overwrote the replacement actor's position");
    for(unsigned role=0;role<30;++role)
        if(role!=4 && role!=17) check(world.authored_position(role)==position_for(role),
                                    "Role reuse/failure contaminated an untouched actor");
}
void untagged_and_world_isolation(Fixture& f,eb::GameVersion version) {
    auto world=f.world(version),other=f.world(version);
    for(unsigned role=0;role<30;++role) world.set_authored_position(role,position_for(role));
    const auto before=positions(world);
    for(unsigned i=0;i<64;++i) {
        auto spec=actor({0x10000000+i,0x20000000+i,0x30000000+i},i&1?1:0);
        const auto id=world.create(spec);
        check(!world.actor(id).authored_role(),"Untagged actor acquired an authored coordinate role");
        world.actor(id).action().position={i,~i,i*65536};
        if(!(i&1)) check(world.erase(id),"Generic untagged actor erase failed");
    }
    check(world.advance_tick()==WorldTickResult::Complete && world.size()==0,
          "Untagged ending scripts failed to delete their real actors");
    check(positions(world)==before,"Untagged create/mutation/erase changed authored role coordinates");
    for(unsigned role=0;role<30;++role)
        check(other.authored_position(role)==Position{},"Authored role positions leaked across worlds");
    const auto id=*other.create_authored(actor({7,8,9}),{24,25});
    check(other.erase(id) && other.authored_position(24)==Position{7,8,9} && positions(world)==before,
          "Role identity or retained values were globally shared across worlds");
}
} // namespace
int main() {
    try {
        Fixture fixture;
        for(auto region:{eb::GameVersion::US,eb::GameVersion::JP}) {
            fresh_and_released_writes(fixture,region);
            live_motion_and_writes(fixture,region);
            ending_release_and_replace(fixture,region);
            reuse_failure_and_order(fixture,region);
            untagged_and_world_isolation(fixture,region);
        }
        std::cout<<"native authored actor position checks="<<checks<<"\n";
    } catch(const std::exception& error) {std::cerr<<error.what()<<"\n";return 1;}
}
