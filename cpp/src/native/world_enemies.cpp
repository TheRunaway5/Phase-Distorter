#include "eb/native/world_enemies.hpp"
#include "eb/native/enemy_sprite_catalog.hpp"
#include <algorithm>
#include <stdexcept>

namespace eb::native {
namespace {
struct Content {
    std::span<const std::uint8_t> bytes;
    void range(std::size_t at,std::size_t n) const {
        if(at>bytes.size()||n>bytes.size()-at)throw std::runtime_error("Truncated enemy spawn content");
    }
    unsigned byte(unsigned at) const {range(at,1);return bytes[at];}
    unsigned word(unsigned at) const {range(at,2);return bytes[at]|unsigned(bytes[at+1])<<8;}
    unsigned pointer(unsigned at) const {
        range(at,4);const auto p=word(at)|(std::uint32_t(word(at+2))<<16);
        if(p<0xc00000||p>=0xf00000)throw std::runtime_error("Invalid enemy spawn content pointer");
        return p-0xc00000;
    }
};
bool flag(std::span<const std::uint8_t> bytes,unsigned id) {
    if(!id)return false;
    --id;if(id/8>=bytes.size())throw std::invalid_argument("Missing enemy spawn event flags");
    return bytes[id/8]&(1u<<(id&7));
}
unsigned shifted_cell(std::uint16_t value,unsigned negative_prefix) {
    return (std::uint16_t(value*2)>>4)|((value&0x8000)?negative_prefix:0u);
}
}
unsigned EnemySpawnData::encounter(unsigned x,unsigned y) const {
    return x<128&&y<160?cells[y*128+x]:0;
}
EnemySpawnSector EnemySpawnData::sector(unsigned x,unsigned y) const {
    if(x<128&&y<160)return sectors[(y/2)*32+x/4];
    if(x>65535||y>65535||!sector_lookups)
        throw std::out_of_range("Enemy spawn sector has no imported wrapped lookup content");
    // Multiply8 wraps before the source's logical shifts. Attribute reads
    // use a separate wrapping byte product from tileset reads.
    const unsigned column=std::uint16_t(x*8u)>>5;
    const unsigned row=std::uint16_t(y*8u)>>4;
    const unsigned tileset=std::uint16_t(row*32u+column);
    const unsigned attribute=std::uint16_t(row*64u+column*2u)/2;
    constexpr unsigned chances[]{2,0,1,0,5,1};
    const auto mode=sector_lookups->butterfly_modes[attribute];
    if(mode>=6)
        throw std::out_of_range("Enemy spawn selected an uninitialized source butterfly chance");
    return {sector_lookups->tilesets[tileset],chances[mode]};
}
EnemySpawnData import_enemy_spawn_data(std::span<const std::uint8_t> assets,GameVersion version) {
    const Content c{assets};const auto l=enemy_sprite_catalog_layout(version);EnemySpawnData result;
    result.negative_cell_prefix=version==GameVersion::JP?0xe000:0xf000;result.butterfly_battle=l.butterfly_battle;
    std::vector<unsigned> starts;
    for(unsigned i=0;i<l.battle_count;++i){const auto row=l.battle_pointers+i*8;const auto at=c.pointer(row);
        if(at<l.battles||at>=l.battles_end)throw std::runtime_error("Enemy battle escaped its content table");
        starts.push_back(at);
        result.battle_behaviors.push_back({std::uint16_t(c.word(row+4)),std::uint8_t(c.byte(row+6))});}
    auto ends=starts;ends.push_back(l.battles_end);std::sort(ends.begin(),ends.end());
    auto members=[&](unsigned at){std::vector<EnemySpawnMember> rows;const auto end=*std::upper_bound(ends.begin(),ends.end(),at);
        for(;;at+=3){if(at>=end)throw std::runtime_error("Unterminated enemy battle");const auto count=c.byte(at);
            if(count==255)break;
            if(end-at<3)throw std::runtime_error("Truncated enemy battle member");
            const auto enemy=c.word(at+1);if(enemy>=l.enemy_count)throw std::runtime_error("Unknown battle enemy");
            rows.push_back({count,enemy});}return rows;};
    for(const auto at:starts)result.battles.push_back(members(at));
    result.debug_battle=members(l.battles);
    starts.clear();
    for(unsigned i=0;i<l.encounter_count;++i){const auto at=c.pointer(l.encounter_pointers+i*4);
        if(at<l.encounters||at>=l.encounters_end)throw std::runtime_error("Enemy encounter escaped content table");
        starts.push_back(at);}
    ends=starts;ends.push_back(l.encounters_end);std::sort(ends.begin(),ends.end());
    for(const auto at:starts){const auto end=*std::upper_bound(ends.begin(),ends.end(),at);
        if(end-at<4)throw std::runtime_error("Truncated enemy encounter");
        EnemySpawnEncounter entry;entry.event_flag=c.word(at);entry.chance={std::uint8_t(c.byte(at+2)),std::uint8_t(c.byte(at+3))};
        if(entry.chance[0]>100||entry.chance[1]>100)throw std::runtime_error("Invalid enemy encounter chance");
        const unsigned required=(entry.chance[0]?8:0)+(entry.chance[1]?8:0);
        for(unsigned cursor=at+4;entry.choices.size()<required;cursor+=3){
            if(cursor>end||end-cursor<3)throw std::runtime_error("Truncated enemy encounter weights");
            const auto count=c.byte(cursor),battle=c.word(cursor+1);
            if(count>required-entry.choices.size()||battle>=result.battles.size())throw std::runtime_error("Invalid enemy encounter weights");
            entry.choices.insert(entry.choices.end(),count,battle);}
        result.encounters.push_back(std::move(entry));}
    for(unsigned i=0;i<result.cells.size();++i){const auto id=c.word(l.cells+i*2);
        if(id>=result.encounters.size())throw std::runtime_error("Unknown map encounter");
        result.cells[i]=id;}
    constexpr unsigned butterfly_chances[]{2,0,1,0,5,1};
    for(unsigned i=0;i<result.sectors.size();++i){const auto mode=c.word(l.sector_attributes+i*2)&7;
        if(mode>=6)throw std::runtime_error("Undefined butterfly sector mode");
        result.sectors[i]={c.byte(l.tilesets+i)>>3,butterfly_chances[mode]};}
    auto lookups=std::make_shared<EnemySpawnSectorLookups>();
    for(unsigned i=0;i<lookups->tilesets.size();++i)
        lookups->tilesets[i]=std::uint8_t(c.byte(l.tilesets+i)>>3);
    for(unsigned i=0;i<lookups->butterfly_modes.size();++i)
        lookups->butterfly_modes[i]=std::uint8_t(c.word(l.sector_attributes+i*2)&7);
    result.sector_lookups=std::move(lookups);
    for(unsigned i=0;i<l.enemy_count;++i){const auto at=l.enemies+i*l.enemy_stride;
        const auto script=c.word(at+l.enemy_sprite_offset+13);
        result.enemies.push_back({c.word(at+l.enemy_sprite_offset),script?script:19,
                                  std::uint8_t(c.byte(at+l.enemy_sprite_offset+2)),
                                  std::uint8_t(c.byte(at+(version==GameVersion::US?1:0))),
                                  std::uint8_t(c.byte(at+l.enemy_sprite_offset+24))});}
    return result;
}
WorldEnemies::WorldEnemies(std::shared_ptr<const EnemySpawnData> data,std::shared_ptr<SpriteResources> sprites,
                           std::shared_ptr<const ActionScriptData> scripts,EnemyPopulation population)
    :data_(std::move(data)),sprites_(std::move(sprites)),scripts_(std::move(scripts)),population_(population) {
    if(!data_||!sprites_||!scripts_)throw std::invalid_argument("Enemy activation requires imported resources");
    if(data_->butterfly_battle>=data_->battles.size()||data_->butterfly_enemy>=data_->enemies.size())
        throw std::invalid_argument("Enemy activation lacks butterfly content");
}
bool WorldEnemies::busy() const {return stage_!=Stage::Idle;}
void WorldEnemies::set_maximum(std::uint16_t value) {
    if (busy()) throw std::logic_error("Enemy maximum cannot change during spawn selection");
    population_.maximum = value;
}
void WorldEnemies::reset_population_for_map() {
    if(busy())throw std::logic_error("Cannot reset enemy population during spawn selection");
    population_.butterfly_spawned=0;
    population_.capacity_failures=0;
    population_.count=0;
}
std::optional<EnemySpawnCreation> WorldEnemies::pending_creation() const {
    if(!creating_)return std::nullopt;
    const auto &definition=data_->enemies.at(enemy_);
    return EnemySpawnCreation{creating_,enemy_,definition.sprite,definition.script};
}
void WorldEnemies::begin(ActorWorld &world,std::vector<EnemySpawnCell> cells,EnemySpawnState state) {
    if(busy())throw std::logic_error("An enemy spawn operation is still pending");
    synchronize_lifetimes(world);
    bind_world(world);
    input_=std::move(state);cells_=std::move(cells);cell_index_=0;stage_=cells_.empty()?Stage::Idle:Stage::Start;
    advance(world);
}
void WorldEnemies::begin_cell(ActorWorld &world,unsigned x,unsigned y,unsigned encounter,unsigned width,
                              unsigned height,EnemySpawnState state) {
    if(x>65535||y>65535||encounter>=data_->encounters.size()||!width||width>65535||!height||height>65535)
        throw std::invalid_argument("Invalid enemy placement domain");
    begin(world,{{x,y,encounter,width,height}},std::move(state));
}
std::vector<EnemySpawnCell> plan_enemy_spawn_strip(const EnemySpawnData &data,CameraRefreshIntent intent,const EnemySpawnState &state) {
    if(intent.service!=CameraRefreshService::Enemies)throw std::invalid_argument("Enemy owner received an NPC strip");
    std::vector<EnemySpawnCell> cells;
    if(state.enabled&&!state.monsters_disabled&&!state.final_boss_defeated){
        const bool row=intent.axis==CameraStripAxis::Row;
        auto fixed=std::uint16_t(row?intent.y:intent.x);
        if(!(fixed&7)){
            if(fixed>=0xfff0)fixed=0;
            if(fixed<(row?1280:1024)){
                const unsigned start=shifted_cell(std::uint16_t(row?intent.x:intent.y),data.negative_cell_prefix);
                const unsigned other=shifted_cell(fixed,data.negative_cell_prefix);
                unsigned cursor=start;
                while(std::int16_t(std::uint16_t(start+5-cursor-1))>=0){
                    const auto at=cursor;unsigned count=1;auto id=data.encounter(row?cursor:other,row?other:cursor);
                    while(count<6&&id&&data.encounter(row?std::uint16_t(cursor+1):other,row?other:std::uint16_t(cursor+1))==id){
                        cursor=std::uint16_t(cursor+1);++count;}
                    for(unsigned n=0;n<count;++n)cells.push_back({row?at:other,row?other:at,id,row?count*8:8,row?8:count*8});
                    cursor=std::uint16_t(cursor+1);
                }
            }
        }
    }
    return cells;
}
void WorldEnemies::begin_strip(ActorWorld &world,CameraRefreshIntent intent,EnemySpawnState state) {
    auto cells=plan_enemy_spawn_strip(*data_,intent,state);begin(world,std::move(cells),std::move(state));
}
EnemySpawnSector WorldEnemies::sector() const {
    const auto &cell=cells_.at(cell_index_);
    return data_->sector(cell.x,cell.y);
}
void WorldEnemies::finish_cell(){
    ++cell_index_;stage_=cell_index_==cells_.size()?Stage::Idle:Stage::Start;members_=nullptr;creating_=0;
}
void WorldEnemies::random(EnemyRandomPurpose purpose){request_=EnemyRandomRequest{purpose};}
void WorldEnemies::select_battle(unsigned battle,bool duplicate_check,ActorWorld &world,bool debug){
    if(battle>=data_->battles.size())throw std::out_of_range("Unknown enemy battle");
    const auto &cell=cells_[cell_index_];const auto spawn=std::uint16_t(cell.y*128+cell.x);
    if(duplicate_check)for(const auto &actor:actors_){const auto role=world.actor(actor.actor).authored_role();
        if(actor.has_identity&&role&&*role<23&&actor.battle==battle&&actor.spawn_cell==spawn){finish_cell();return;}}
    battle_=battle;members_=debug?&data_->debug_battle:&data_->battles[battle];member_index_=0;
    stage_=Stage::SelectMembers;
}
void WorldEnemies::advance(ActorWorld &world){
    while(!request_&&stage_!=Stage::Idle){const auto &cell=cells_[cell_index_];
        switch(stage_){
        case Stage::Start:
            if(input_.debug_forced_encounter){random(EnemyRandomPurpose::DebugEncounter);break;}
            stage_=Stage::Normal;break;
        case Stage::Normal:
            ++population_.spawn_counter;
            if(!(population_.spawn_counter&15)){(void)sector();random(EnemyRandomPurpose::ButterflyChance);break;}
            if(!cell.encounter){finish_cell();break;}
            if(sector().tileset!=input_.tileset){finish_cell();break;}
            population_.encounter=cell.encounter;
            {const auto &entry=data_->encounters.at(cell.encounter);
             alternate_=flag(input_.event_flags,entry.event_flag)?1:0;population_.chance=entry.chance[alternate_];}
            random(input_.bypass_chance?EnemyRandomPurpose::WeightedGroup:EnemyRandomPurpose::EncounterChance);break;
        case Stage::SelectMembers:
            if(member_index_==members_->size()){population_.remaining=255;finish_cell();break;}
            {const auto &member=members_->at(member_index_++);enemy_=member.enemy;remaining_=member.count;
             if(enemy_>=data_->enemies.size()||remaining_>=255)throw std::out_of_range("Invalid enemy member");
             population_.remaining=remaining_;const auto &definition=data_->enemies[enemy_];
             population_.name_initial=definition.name_initial;population_.sprite=definition.sprite;}
            stage_=Stage::Member;break;
        case Stage::Member:
            --population_.remaining;
            if(!remaining_){stage_=Stage::SelectMembers;break;}--remaining_;
            if(enemy_==data_->butterfly_enemy&&population_.butterfly_spawned)break;
            if(population_.count==population_.maximum){++population_.capacity_failures;break;}
            population_.capacity_failures=0;
            {auto prepared=input_.prepared;prepared.x=0;prepared.direction=0;prepared.y=0;
             const auto &definition=data_->enemies[enemy_];
             const auto actor=world.create_authored(make_actor_spec(definition.sprite,definition.script,prepared,*sprites_,*scripts_));
             if(!actor)throw std::runtime_error("No free authored role for enemy creation");
             creating_=*actor;}
            attempts_=0;stage_=Stage::Position;break;
        case Stage::Position:
            if(attempts_==20){world.erase(creating_);creating_=0;stage_=Stage::Member;break;}
            random(EnemyRandomPurpose::PositionX);break;
        case Stage::NeedY:random(EnemyRandomPurpose::PositionY);break;
        case Stage::Terrain:request_=EnemyTerrainRequest{creating_,candidate_x_,candidate_y_,enemy_};break;
        case Stage::Weakness:random(EnemyRandomPurpose::Weakness);break;
        default:throw std::logic_error("Invalid enemy spawn continuation");
        }
    }
}
void WorldEnemies::respond_random(ActorWorld &world,std::uint8_t value){
    require_world(world);
    if(!request_||!std::holds_alternative<EnemyRandomRequest>(*request_))throw std::logic_error("No enemy randomness request");
    const auto purpose=std::get<EnemyRandomRequest>(*request_).purpose;request_.reset();const auto &cell=cells_[cell_index_];
    switch(purpose){
    case EnemyRandomPurpose::DebugEncounter:
        if(value<16)select_battle(0,false,world,true);else stage_=Stage::Normal;break;
    case EnemyRandomPurpose::ButterflyChance:
        if(value%100<sector().butterfly_chance){population_.battle=data_->butterfly_battle;select_battle(data_->butterfly_battle,false,world);}
        else finish_cell();
        break;
    case EnemyRandomPurpose::EncounterChance:
        if((unsigned(value)*100>>8)<population_.chance)random(EnemyRandomPurpose::WeightedGroup);else finish_cell();break;
    case EnemyRandomPurpose::WeightedGroup:{const auto &entry=data_->encounters.at(cell.encounter);
        const unsigned pick=(value&7)+(alternate_&&entry.chance[0]?8:0);
        if(pick>=entry.choices.size())throw std::runtime_error("Authored chance override selected an undefined weighted branch");
        population_.battle=entry.choices[pick];select_battle(population_.battle,true,world);break;}
    case EnemyRandomPurpose::PositionX:candidate_x_=std::uint16_t((cell.x*8+value%cell.width)*8);stage_=Stage::NeedY;break;
    case EnemyRandomPurpose::PositionY:candidate_y_=std::uint16_t((cell.y*8+value%cell.height)*8);stage_=Stage::Terrain;break;
    case EnemyRandomPurpose::Weakness:
        actors_.push_back({creating_,battle_,enemy_,std::uint16_t(cell.y*128+cell.x),value});
        ++population_.count;if(enemy_==data_->butterfly_enemy)population_.butterfly_spawned=1;
        creating_=0;stage_=Stage::Member;break;
    }
    advance(world);
}
void WorldEnemies::respond_terrain(ActorWorld &world,std::uint16_t flags){
    require_world(world);
    if(!request_||!std::holds_alternative<EnemyTerrainRequest>(*request_))throw std::logic_error("No enemy terrain request");
    request_.reset();const auto terrain=flags&12;const auto mask=terrain==0?4:terrain==4?2:1;
    if((flags&0xd0)||!(data_->enemies[enemy_].terrain_mask&mask)){++attempts_;stage_=Stage::Position;}
    else {auto &action=world.actor(creating_).action();action.position[0]=(std::uint32_t(candidate_x_)<<16)|(action.position[0]&0xffff);action.position[1]=(std::uint32_t(candidate_y_)<<16)|(action.position[1]&0xffff);stage_=Stage::Weakness;}
    advance(world);
}
void WorldEnemies::synchronize_lifetimes(const ActorWorld &world) {
    require_world(world);
    if(busy())throw std::logic_error("Cannot reconcile enemy lifetime during spawn selection");
    const auto live=world.actors();
    for(const auto &entry:actors_){
        const bool present=std::find(live.begin(),live.end(),entry.actor)!=live.end();
        if(entry.has_identity&&(!present||(!world.actor(entry.actor).has_appearance() &&
                                          !world.actor(entry.actor).script_only())))
            throw std::logic_error("Enemy actor disappeared or released appearance outside its lifecycle owner");
    }
    std::erase_if(actors_,[&](const auto &entry){return std::find(live.begin(),live.end(),entry.actor)==live.end();});
}
bool WorldEnemies::release_appearance(ActorWorld &world,ActorId actor){
    require_world(world);
    const auto found=std::find_if(actors_.begin(),actors_.end(),[&](const auto &value){return value.actor==actor;});
    // Failed placement erases its provisional actor while this traversal is
    // still busy. It has not entered the enemy identity/population owner yet.
    if(found!=actors_.end()&&busy())throw std::logic_error("Cannot release an enemy during spawn selection");
    if(found!=actors_.end()){if(found->has_identity)--population_.count;found->has_identity=false;
        if(found->enemy==data_->butterfly_enemy)population_.butterfly_spawned=0;}
    return world.release_appearance(actor);
}
bool WorldEnemies::erase(ActorWorld &world,ActorId actor){
    release_appearance(world,actor);
    const auto live=world.actors();
    if(std::find(live.begin(),live.end(),actor)==live.end())return false;
    retirement_identity(actor,world.actor(actor).authored_role());
    return world.retire(actor);
}
std::optional<NpcId> WorldEnemies::identity(ActorId id) const {
    const auto found=std::find_if(actors_.begin(),actors_.end(),[&](const auto &e){return e.actor==id;});
    return found==actors_.end()?std::nullopt:found->npc_identity();
}
std::optional<unsigned> WorldEnemies::enemy_type(ActorId id) const noexcept {
    const auto found=std::find_if(actors_.begin(),actors_.end(),[&](const auto &e){return e.actor==id;});
    return found==actors_.end()?std::nullopt:std::optional(found->enemy);
}
std::optional<unsigned> WorldEnemies::retired_enemy_type(unsigned role) const {
    const auto &entry=retired_.at(role);
    return entry?std::optional(entry->enemy):std::nullopt;
}
bool WorldEnemies::uses(const ActorWorld &world) const noexcept {
    return world_identity_==world.identity_token();
}
std::optional<NpcId> WorldEnemies::retirement_identity(ActorId id,std::optional<unsigned> role) {
    const auto found=std::find_if(actors_.begin(),actors_.end(),[&](const auto &e){return e.actor==id;});
    if(found==actors_.end())return std::nullopt;
    if(busy())throw std::logic_error("Cannot retire an enemy during spawn selection");
    const auto identity=found->npc_identity();
    if(role)retired_.at(*role)=RetiredEnemy{found->battle,found->enemy,found->spawn_cell,
                                          found->weakness,found->has_identity};
    actors_.erase(found);
    return identity;
}
void WorldEnemies::reuse_authored_role(ActorId id,unsigned role,bool graphical) {
    auto &retired=retired_.at(role);
    if(!retired)return;
    if(!graphical)actors_.push_back({id,retired->battle,retired->enemy,retired->spawn_cell,
                                    retired->weakness,retired->has_identity});
    retired.reset();
}
void WorldEnemies::clear_retired_identities() {
    if(busy() || !actors_.empty())
        throw std::logic_error("Enemy identity initialization requires completed script reset");
    // INITIALIZE_MISC_OBJECT_DATA clears NPC identity words, not enemy type,
    // population or butterfly state. A later graphical reuse still owns those
    // independent lifetime effects.
    for(auto &entry:retired_)
        if(entry)entry->has_identity=false;
}
bool WorldEnemies::release_authored_role(ActorWorld &world,unsigned role) {
    require_world(world);
    if(const auto id=world.actor_for_role(role))return release_appearance(world,*id);
    if(busy())throw std::logic_error("Cannot release an enemy during spawn selection");
    auto &retired=retired_.at(role);
    if(retired){
        if(retired->has_identity)--population_.count;
        retired->has_identity=false;
        if(retired->enemy==data_->butterfly_enemy)population_.butterfly_spawned=0;
    }
    return world.release_authored_appearance(role);
}
void WorldEnemies::require_world(const ActorWorld &world) const {
    if(world_identity_ && world_identity_!=world.identity_token())
        throw std::invalid_argument("Enemy lifetime belongs to another native world");
}
void WorldEnemies::bind_world(const ActorWorld &world) {
    require_world(world);
    world_identity_=world.identity_token();
}
} // namespace eb::native
