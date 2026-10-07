#include "eb/native/world/menu/item_action.hpp"
#include <algorithm>
#include <stdexcept>
namespace eb::native::world::menu {
namespace {
void require(bool value,const char *message){if(!value)throw std::logic_error(message);}
}
struct ItemAction::Operation::State {
    ItemAction &owner;
    ItemActionRequest request;
    battle::actions::Kind kind;
    std::unique_ptr<story::BattleDialogue::Operation> text;
    std::unique_ptr<story::Scene::Operation> child;
    std::unique_ptr<battle::actions::Executor::Operation> action;
    std::unique_ptr<story::PartyFormation::Operation> formation;
    unsigned phase{}, member{};
    bool done{}, executing{};
    State(ItemAction &o,ItemActionRequest r):owner(o),request(r),
        kind(r.execute?o.owners_.actions.kind(r.action?*r.action:o.owners_.items.item_effect(r.item)):
             battle::actions::Kind::None){}
};
ItemAction::ItemAction(ItemActionOwners o):owners_(o) {
    require(o.roster.version()==o.world.party.version() && o.actions.version()==o.world.party.version() &&
        o.items.version()==o.world.party.version() && o.prepared.version()==o.world.party.version(),
        "World item action regions differ");
    require(o.scene.uses(o.world.windows,o.world.party) && o.scene.uses(o.world.actors) &&
        o.scene.uses(o.world.clock) && o.scene.uses(o.dialogue) &&
        &o.dialogue.prepared()==&o.prepared && o.world.refresh.uses(o.world.party),
        "World item action requires its actual shared scene and party owners");
}
std::unique_ptr<ItemAction::Operation> ItemAction::begin(ItemActionRequest request) {
    require(!active_ && !failed_ && !owners_.scene.busy() && !owners_.executor.busy(),"World item action is unavailable");
    require(request.user>=1 && request.user<=party::State::character_count &&
        (request.action || (request.slot>=1 && request.slot<=14)),
        "World item action lost its original character/item position");
    if(request.teleport && (request.target<1 || request.target>party::State::character_count))
        throw std::out_of_range("PSI teleport action tail requires the source storage adjacent to the six party records");
    require((request.action || request.item) &&
        (request.target==0xff || (request.target>=1 && request.target<=party::State::character_count)),
        "World item action lost its original item/target selector");
    require(request.action.has_value()==request.ability.has_value(),"World PSI action lacks its actual ability selector");
    if(request.execute && request.target==0xff)
        require(owners_.world.party.controlled_count<=party::State::character_count,"World item target list leaves its owner");
    if(request.teleport)
        require(request.execute && request.action && request.ability &&
            owners_.actions.kind(*request.action)==battle::actions::Kind::BTLACT_NULL4,
            "PSI teleport tail requires its actual null4 action entry");
    else (void)owners_.dialogue.resolve(request.description);
    if(request.execute)owners_.world.refresh.validate_begin();
    auto op=std::unique_ptr<Operation>(new Operation(std::make_unique<Operation::State>(*this,request)));
    active_=op.get();return op;
}
ItemAction::Operation::Operation(std::unique_ptr<State> s):state_(std::move(s)){}
ItemAction::Operation::~Operation(){if(state_->owner.active_==this){if(!state_->done)state_->owner.failed_=true;state_->owner.active_=nullptr;}}
bool ItemAction::Operation::complete() const noexcept{return state_->done;}
story::Scene::Operation *ItemAction::Operation::scene() noexcept{return state_->child?state_->child.get():state_->action?state_->action->scene():nullptr;}
story::PartyFormation::Operation *ItemAction::Operation::party_update() noexcept{return state_->formation?state_->formation.get():state_->action?state_->action->party_update():nullptr;}
story::TeddyParty::Operation *ItemAction::Operation::teddy_update() noexcept{return state_->action?state_->action->teddy_update():nullptr;}
story::PartyMembership::Operation *ItemAction::Operation::membership_update() noexcept{return state_->action?state_->action->membership_update():nullptr;}
dialogue::Progress ItemAction::Operation::advance(unsigned budget) {
    auto &s=*state_;auto &o=s.owner.owners_;
    if(s.done)return dialogue::Progress::Finished;
    require(!s.owner.failed_ && !s.executing,"World item action is failed or recursively executing");
    s.executing=true;
    try {
        while(budget--) {
            if(s.child) {
                const auto p=s.child->advance(1);
                if(p==dialogue::Progress::Suspended){s.executing=false;return p;}
                if(p!=dialogue::Progress::Finished)continue;
                s.child.reset();if(s.text)s.text->respond();
            }
            if(s.text) {
                const auto p=s.text->advance(1);
                if(p==dialogue::Progress::BudgetExhausted)continue;
                if(p==dialogue::Progress::Suspended){s.child=o.scene.begin(s.text->conversation());continue;}
                s.text.reset();
            }
            if(s.action) {
                const auto p=s.action->advance(1);
                if(p==dialogue::Progress::Suspended){s.executing=false;return p;}
                if(p!=dialogue::Progress::Finished)continue;
                s.action.reset();
                const unsigned destination=s.request.target==0xff?s.member+1:s.request.target;
                o.world.party.character(destination).afflictions=o.roster.at(1).afflictions;
                ++s.member;
            }
            if(s.formation) {
                const auto p=s.formation->advance(1);
                if(p==dialogue::Progress::Suspended){s.executing=false;return p;}
                if(p!=dialogue::Progress::Finished)continue;
                s.formation.reset();
            }
            switch(s.phase) {
            case 0:
                if(s.request.teleport){s.phase=1;break;}
                if(s.request.execute && s.kind!=battle::actions::Kind::None) {
                    o.action.attacker=0;o.roster.initialize_player(0,o.world.party,s.request.user);
                    if(!s.request.action) {
                        o.roster.at(0).action_argument=s.request.item;
                        o.roster.at(0).action_item_slot=std::uint8_t(s.request.slot);
                    }
                }
                s.text=o.dialogue.begin_raw(o.dialogue.resolve(s.request.description));s.phase=1;break;
            case 1:
                if(!s.request.execute || s.kind==battle::actions::Kind::None){s.phase=99;break;}
                if(!s.request.ability)o.prepared.set_item(s.request.item);
                o.action.target=1;s.phase=2;break;
            case 2:
                if(s.member >= (s.request.target==0xff?o.world.party.controlled_count:1u)){
                    s.formation=o.world.refresh.begin();s.phase=3;break;
                }
                if(s.request.target==0xff) {
                    const unsigned character=o.world.party.party_order[s.member];
                    o.prepared.copy_name(dialogue::PreparedName::Target,o.world.party.name_field(character));
                    o.roster.initialize_player(1,o.world.party,character);
                } else o.roster.initialize_player(1,o.world.party,s.request.target);
                s.action=o.executor.begin_action(s.kind);break;
            case 3:
                o.following.position_after_pause();s.child=o.scene.begin(story::TickKind::WorldFrame);s.phase=4;break;
            case 4:
                o.world.interactions.set_actors_paused(true);
                if(o.world.session.fading_actor) {
                    if(const auto *role=std::get_if<AuthoredRoleRef>(&*o.world.session.fading_actor))
                        o.world.actors.set_authored_pause(role->value(),true,true);
                    else {
                        auto &actor=o.world.actors.actor(std::get<ActorId>(*o.world.session.fading_actor));
                        actor.scripts_and_physics_enabled=actor.tick_callback_enabled=true;
                    }
                }
                s.phase=99;break;
            case 99:s.done=true;s.owner.active_=nullptr;s.executing=false;return dialogue::Progress::Finished;
            default:throw std::logic_error("World item action lost its source continuation");
            }
        }
        s.executing=false;return dialogue::Progress::BudgetExhausted;
    }catch(...){s.executing=false;s.owner.failed_=true;throw;}
}
} // namespace eb::native::world::menu
