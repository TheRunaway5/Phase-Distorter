#include "internal.hpp"
#include "eb/native/dialogue/conversation.hpp"
#include "eb/native/dialogue/fonts.hpp"
#include <stdexcept>

namespace eb::native::world::menu {
namespace {void require(bool v,const char *message){if(!v)throw std::logic_error(message);}}
Commands::Commands(std::shared_ptr<const Resources> c,std::shared_ptr<const dialogue::Program> p,
    std::shared_ptr<const dialogue::FontResources> f,dialogue::MenuHost &m,party::State &party,
    party::Inventory &inventory,party::MeterWindows &meters,npcs::Interactions &interactions,story::Scene &scene,
    story::InputState &input,WorldSpriteFade &fade) {
    require(c && p && f,"World menu requires imported regional content");
    const auto v=party.version();
    require(c->version()==v && p->version()==v && f->version()==v && m.windows().version()==v,
            "World menu regions differ");
    require(inventory.bound_to(party) && scene.uses(m.windows(),party) && scene.uses(input) &&
            &interactions.windows()==&m.windows() && meters.bound_to(m.windows(),party) &&
            scene.uses(interactions.actors()) && fade.uses(interactions.actors()),"World menu owners differ");
    execution_=std::make_unique<Execution>(std::move(c),std::move(p),std::move(f),m,party,inventory,meters,interactions,scene,input,fade);
}
Commands::~Commands()=default;
Commands::Operation::Operation(std::unique_ptr<Execution> e):execution_(std::move(e)){}
Commands::Operation::~Operation(){if(!execution_->done)execution_->owner.failed=true;}
bool Commands::busy() const noexcept{return execution_->active;}
void Commands::bind_field_map(const WorldMap &map){auto &e=*execution_;require(!e.active && !e.failed && (!e.field_map || e.field_map==&map),"World menu map binding differs");e.field_map=&map;}
void Commands::bind_teleport(WorldPartyState &formation,WorldSessionState &session){auto &e=*execution_;require(!e.active && !e.failed && (!e.formation || e.formation==&formation) && (!e.session || e.session==&session),"World menu teleport owners differ");e.formation=&formation;e.session=&session;}
std::unique_ptr<Commands::Operation> Commands::begin(Entry entry) {
    auto &e=*execution_;require(!e.active && !e.failed && !e.scene.busy(),"World menu requires idle live owners");
    require(!e.windows.prompt_state().battle_mode,"World menu entered while battle display owns windows");
    dialogue::Conversation admission(e.program,e.menus);admission.validate_start();
    auto operation=std::unique_ptr<Operation>(new Operation(std::make_unique<Operation::Execution>(e,entry)));
    e.active=true;return operation;
}
dialogue::Progress Commands::Operation::advance(unsigned budget) {
    auto &e=*execution_;if(e.done)return dialogue::Progress::Finished;
    require(!e.owner.failed,"World menu owner was abandoned");
    while(budget--) {
        if(e.audio || e.unported || e.use || e.ability || e.targeting || (e.mutation && e.mutation->service()))return dialogue::Progress::Suspended;
        if(e.child) {
            auto progress=e.child->advance(1);
            if(progress==dialogue::Progress::Suspended)return progress;
            if(progress!=dialogue::Progress::Finished)continue;
            e.child.reset();
        }
        if(e.context.leaf)e.context.leaf.resume();
        if(e.routine.handle.done()) {
            if(e.routine.handle.promise().error){e.owner.failed=true;std::rethrow_exception(e.routine.handle.promise().error);}
            e.done=true;e.owner.active=false;return dialogue::Progress::Finished;
        }
    }
    return dialogue::Progress::BudgetExhausted;
}
story::Scene::Operation *Commands::Operation::scene() const noexcept{return execution_->child.get();}
const std::optional<std::uint16_t> &Commands::Operation::sound() const noexcept{return execution_->audio;}
void Commands::Operation::respond_sound(){require(execution_->audio.has_value(),"World menu has no pending sound");execution_->audio.reset();}
const std::optional<Choice> &Commands::Operation::unported_choice() const noexcept{return execution_->unported;}
bool Commands::Operation::complete() const noexcept{return execution_->done;}
const std::optional<ItemUse> &Commands::Operation::item_use() const noexcept{return execution_->use;}
void Commands::Operation::respond_item_use(std::uint16_t result){require(execution_->use.has_value(),"World menu has no pending item action");execution_->use_result=result;execution_->use.reset();}
const std::optional<AbilityUse> &Commands::Operation::ability_use() const noexcept{return execution_->ability;}
void Commands::Operation::respond_ability_use(std::uint16_t result){require(execution_->ability.has_value(),"World menu has no pending PSI action");execution_->use_result=result;execution_->ability.reset();}
const std::optional<TargetSelect> &Commands::Operation::target_select() const noexcept{return execution_->targeting;}
void Commands::Operation::respond_target_select(std::uint16_t result){require(execution_->targeting.has_value(),"World menu has no pending target selection");execution_->use_result=result;execution_->targeting.reset();}
Commands::Operation::Execution::Routine Commands::Operation::Execution::target(unsigned action,unsigned user){targeting=TargetSelect{std::uint16_t(action),std::uint16_t(user)};co_await Yield{};co_return std::uint8_t(use_result);}
party::Inventory::Operation *Commands::Operation::inventory_operation() const noexcept{return execution_->mutation.get();}
Commands::Operation::Execution::Routine Commands::Operation::Execution::sound(unsigned value) {
    audio=std::uint16_t(value);co_await Yield{};co_return 0;
}
Commands::Operation::Execution::Routine Commands::Operation::Execution::tick(story::TickKind kind) {
    child=owner.scene.begin(kind);co_await Yield{};co_return 0;
}
Commands::Operation::Execution::Routine Commands::Operation::Execution::effect(const dialogue::MenuPrintEffect &e) {
    if(const auto *w=std::get_if<dialogue::WindowEffect>(&e)){child=owner.scene.begin(*w);co_await Yield{};}
    else if(std::get<dialogue::TextEffect>(e).kind==dialogue::TextEffectKind::WindowTick)co_await tick(story::TickKind::Window);
    else co_await sound(7);
    co_return 0;
}
Commands::Operation::Execution::Routine Commands::Operation::Execution::window(dialogue::WindowCommand c) {
    auto op=callback_parent?owner.menus.begin_window(std::move(c),*callback_parent):owner.windows.begin(std::move(c));
    while(op->advance()!=dialogue::OutputProgress::Complete){co_await effect(*op->effect());op->respond();}
    co_return op->succeeded();
}
Commands::Operation::Execution::Routine Commands::Operation::Execution::print() {
    auto op=callback_parent?owner.menus.begin_print({},*callback_parent):owner.menus.begin_print({});
    while(op->advance()!=dialogue::OutputProgress::Complete){co_await effect(*op->effect());op->respond();}
    co_return 0;
}
Commands::Operation::Execution::Routine Commands::Operation::Execution::fixed(unsigned value) {
    dialogue::MenuPrintCommand command{dialogue::MenuPrintAction::FixedGlyph};command.character=std::uint16_t(value);
    auto op=callback_parent?owner.menus.begin_print(command,*callback_parent):owner.menus.begin_print(command);
    while(op->advance()!=dialogue::OutputProgress::Complete){co_await effect(*op->effect());op->respond();}
    co_return 0;
}
Commands::Operation::Execution::Routine Commands::Operation::Execution::meter(std::unique_ptr<party::MeterWindows::Operation> op) {
    while(op->advance()!=dialogue::OutputProgress::Complete){co_await effect(*op->effect());op->respond();}
    co_return 0;
}
Commands::Operation::Execution::Routine Commands::Operation::Execution::context_command(dialogue::Request request,dialogue::MenuHost::Operation *parent) {
    auto &o=owner;auto op=parent?o.windows.commands().begin_nested(request,*parent,&o.menus):o.windows.commands().begin(request,&o.menus);
    for(;;) {
        auto p=op->advance(1);if(p==dialogue::Progress::Finished)break;
        if(p==dialogue::Progress::BudgetExhausted){co_await Yield{};continue;}
        const auto &event=*op->event();
        if(const auto *t=std::get_if<dialogue::TextEffect>(&event))co_await effect(*t);
        else if(const auto *w=std::get_if<dialogue::WindowEffect>(&event))co_await effect(*w);
        else throw std::logic_error("World wallet reached an unexpected native callback");
        op->respond();
    }
    co_return op->result();
}
Commands::Operation::Execution::Routine Commands::Operation::Execution::wallet(dialogue::MenuHost::Operation *parent) {
    co_await meter(owner.meters.begin_show());
    dialogue::Request request;request.kind=dialogue::RequestKind::ShowWallet;
    co_await context_command(request,parent);co_return 0;
}
Commands::Operation::Execution::Routine Commands::Operation::Execution::select() {
    auto &o=owner;auto op=o.menus.begin(1);
    for(;;) {
        auto p=op->advance(1);if(p==dialogue::Progress::Finished)break;
        if(p==dialogue::Progress::BudgetExhausted){co_await Yield{};continue;}
        const auto event=*op->event();
        if(const auto *t=std::get_if<dialogue::TextEffect>(&event))co_await effect(*t);
        else if(const auto *w=std::get_if<dialogue::WindowEffect>(&event))co_await effect(*w);
        else if(std::holds_alternative<dialogue::PromptEffect>(event))co_await tick(story::TickKind::World);
        else if(const auto *m=std::get_if<dialogue::MenuEffect>(&event)) {
            switch(m->kind) {
            case dialogue::MenuEffectKind::Input:co_await tick(story::TickKind::World);break;
            case dialogue::MenuEffectKind::Sound:co_await sound(m->value);break;
            case dialogue::MenuEffectKind::ShowMoneyMeters:co_await wallet(op.get());break;
            case dialogue::MenuEffectKind::Callback:
                if(!selection_callback)throw std::logic_error("World command menu has an unported cursor callback");
                callback_parent=op.get();co_await selection_callback(m->value);callback_parent=nullptr;break;
            }
        } else throw std::logic_error("World command menu reached an unexpected authored service");
        op->respond({o.windows.prompt_state().pressed,o.input.held[0],0});
    }
    co_return op->result();
}
Commands::Operation::Execution::Routine Commands::Operation::Execution::interact(npcs::InteractionAction action,bool fallback_to_check) {
    auto &o=owner;std::optional<dialogue::Location> location;
    for(;;) {
        auto op=o.interactions.begin(action);
        for(;;) {
            auto p=op->advance(1);if(p==dialogue::Progress::Finished)break;
            if(p==dialogue::Progress::Suspended){co_await effect(*op->effect());op->respond();}
            else co_await Yield{};
        }
        location=op->selection().text;
        if(location || !fallback_to_check)break;
        action=npcs::InteractionAction::Check;fallback_to_check=false;
    }
    if(!location)location=o.program->resolve(action==npcs::InteractionAction::Talk?o.content->no_person():o.content->no_problem());
    require(location.has_value(),"World interaction fallback is absent from imported content");
    dialogue::Conversation conversation(o.program,o.menus);conversation.start(*location);
    child=o.scene.begin(conversation);co_await Yield{};co_return 0;
}
Commands::Operation::Execution::Routine Commands::Operation::Execution::command_text() {
    auto &o=owner;auto &w=o.windows;
    for(unsigned choice=1;!w.menu_state().skip_adding_command_text && choice<=6;++choice) {
        if(choice==3 && !o.content->first_psi_character(o.party))continue;
        const auto position=o.content->position(choice);
        const auto option=o.model.append_value(o.content->command(choice),{},std::uint16_t(choice),position[0],position[1],false);
        auto sound=(choice==1 || choice==5)?1u:27u;
        if(choice==2 && o.party.controlled_count==1 && !o.party.character(o.party.party_order[0]).items[0])sound=1;
        w.menu_options()[option].sound_effect=std::uint8_t(sound);
    }
    w.menu_state().skip_adding_command_text=0;
    co_await print();co_return 0;
}
Commands::Operation::Execution::Routine Commands::Operation::Execution::main() {
    auto &o=owner;auto &w=o.windows;
    co_await window({dialogue::WindowAction::Open,dialogue::WindowId{0},{},0});
    w.menu_state().skip_adding_command_text=0;co_await command_text();w.menu_state().restore_backup=false;
    for(;;) {
        co_await window({dialogue::WindowAction::Focus,dialogue::WindowId{0},{},0});
        if(jp())co_await print();
        const auto choice=co_await select();
        if(!choice)break;
        if(choice==1 || choice==5){co_await interact(choice==1?npcs::InteractionAction::Talk:npcs::InteractionAction::Check);break;}
        if(choice==2){if(co_await goods())break;}
        else if(choice==4)co_await equipment();
        else if(choice==3){
            co_await wallet();const auto first=o.content->first_psi_character(o.party);
            if(first)co_await meter(o.meters.begin_select(first-1));
            if(co_await psi())break;
            if(o.content->psi_character_count(o.party)==1){co_await sound(27);co_await meter(o.meters.begin_clear_selection());}
        }
        else if(choice==6){co_await wallet();w.menu_state().force_left_alignment=true;co_await status();w.menu_state().force_left_alignment=false;}
        else throw std::logic_error("World command selection returned an unknown choice");
    }
    co_return 0;
}
Commands::Operation::Execution::Routine Commands::Operation::Execution::window_tick_without_instant() {
    owner.windows.output().policy().instant=false;co_await tick(story::TickKind::Window);
    owner.windows.output().policy().instant=true;co_return 0;
}
Commands::Operation::Execution::Routine Commands::Operation::Execution::cleanup(bool wait_fade) {
    auto &o=owner;o.windows.output().policy().instant=false;
    co_await meter(o.meters.begin_hide(false));
    co_await window({dialogue::WindowAction::CloseAll,{},{},0});
    do {co_await tick(story::TickKind::Window);} while(wait_fade && o.fade.controller());
    o.interactions.set_actors_paused(false);co_return 0;
}
Commands::Operation::Execution::Routine Commands::Operation::Execution::run() {
    auto &o=owner;o.interactions.set_actors_paused(true);co_await sound(1);
    if(entry==Entry::CheckTalk)co_await interact(npcs::InteractionAction::Talk,true);
    else if(entry==Entry::Commands)co_await main();
    else {
        co_await wallet();
        for(;;) {
            co_await tick(story::TickKind::Window);const auto pressed=o.input.pressed[0];
            if(pressed&0x00a0){o.interactions.set_actors_paused(true);co_await sound(1);co_await main();co_await cleanup(true);co_return 0;}
            if(pressed&0xa000){co_await sound(2);break;}
        }
    }
    co_await cleanup(entry!=Entry::Meters);co_return 0;
}
} // namespace eb::native::world::menu
