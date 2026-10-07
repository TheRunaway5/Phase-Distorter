#include "internal.hpp"
#include "eb/native/dialogue/conversation.hpp"
#include "eb/native/dialogue/prepared_message.hpp"
#include "eb/native/world_startup.hpp"
#include <stdexcept>

namespace eb::native::world::menu {
Commands::Operation::Execution::Routine Commands::Operation::Execution::text(dialogue::SubstitutionCommand command) {
    auto op=callback_parent?owner.windows.substitutions().begin_nested(std::move(command),*callback_parent):owner.windows.substitutions().begin(std::move(command));
    for(;;) {
        auto p=op->advance(1);if(p==dialogue::Progress::Finished)break;
        if(p==dialogue::Progress::Suspended){co_await effect(*op->effect());op->respond();}
        else co_await Yield{};
    }
    co_return 0;
}
Commands::Operation::Execution::Routine Commands::Operation::Execution::authored(dialogue::ReferenceKey reference) {
    const auto location=owner.program->resolve(reference);
    if(!location)throw std::runtime_error("World-menu authored text is absent from imported content");
    dialogue::Conversation conversation(owner.program,owner.menus);
    if(callback_parent)conversation.start_nested(*location,*callback_parent);else conversation.start(*location);
    child=owner.scene.begin(conversation);co_await Yield{};co_return 0;
}
Commands::Operation::Execution::Routine Commands::Operation::Execution::target_prompt(unsigned index) {
    auto &w=owner.windows;w.save_text_context();w.output().policy().instant=true;
    co_await window({dialogue::WindowAction::Open,dialogue::WindowId{0x28},{},0});
    const auto label=owner.content->target_prompt(index);
    co_await text({dialogue::SubstitutionAction::String,0,[label]{return label;},std::uint16_t(label.size())});
    w.output().policy().instant=false;w.restore_text_context();co_return 0;
}
Commands::Operation::Execution::Routine Commands::Operation::Execution::inventory(unsigned who,unsigned id) {
    auto &o=owner;auto op=o.menus.inventory().begin(dialogue::WindowId{id},std::uint16_t(who));
    for(;;) {
        auto p=op->advance(1);if(p==dialogue::Progress::Finished)break;
        if(p==dialogue::Progress::Suspended){co_await effect(*op->effect());op->respond(o.windows.prompt_state().pressed);}
        else co_await Yield{};
    }
    co_return 0;
}
Commands::Operation::Execution::Routine Commands::Operation::Execution::mutate(std::unique_ptr<party::Inventory::Operation> op) {
    mutation=std::move(op);
    for(;;) {
        auto p=mutation->advance(1);if(p==dialogue::Progress::Finished)break;
        co_await Yield{};
    }
    const auto result=mutation->recipient();mutation.reset();co_return result;
}
Commands::Operation::Execution::Routine Commands::Operation::Execution::give(unsigned who,unsigned position) {
    auto &o=owner;auto &w=o.windows;
    if(!jp()){co_await window({dialogue::WindowAction::Focus,dialogue::WindowId{2},{},0});co_await window({dialogue::WindowAction::ClearFocus,{},{},0});}
    co_await target_prompt(3);
    const unsigned recipient=co_await character_select(2,0x2c);
    co_await window({dialogue::WindowAction::Close,dialogue::WindowId{0x28},{},0});
    co_await window({dialogue::WindowAction::Close,dialogue::WindowId{0x2c},{},0});
    if(!recipient)co_return 0;
    co_await window({dialogue::WindowAction::Open,dialogue::WindowId{1},{},0});
    auto &memory=w.state().window();memory.active.working=who;memory.active.argument=position;
    if(recipient!=who && (o.content->item(o.party.character(who).items.at(position-1)).flags&0x20)) {
        co_await authored(o.content->cannot_give());co_await window({dialogue::WindowAction::Close,dialogue::WindowId{1},{},0});co_return 0;
    }
    const bool space=o.inventory.find_space(recipient)!=0;
    if(jp()) {
        co_await authored(o.content->give(0));
        if(recipient==who) {co_await mutate(o.inventory.begin_transfer(who,position,recipient));co_await authored(o.content->give(1));}
        else {
            if(space)co_await mutate(o.inventory.begin_transfer(who,position,recipient));
            w.state().window().active.working=recipient;co_await authored(o.content->give(space?2:3));
        }
    } else {
        memory.saved.working=recipient;
        const auto dead=[](const party::Character &c){return c.afflictions[0]==1 || c.afflictions[0]==2;};
        unsigned message=dead(o.party.character(who))?5:0;
        if(who!=recipient){++message;if(space)message+=2;if(dead(o.party.character(recipient)))++message;}
        co_await authored(o.content->give(message));
        if(who==recipient || space)co_await mutate(o.inventory.begin_transfer(who,position,recipient));
    }
    co_await window({dialogue::WindowAction::Close,dialogue::WindowId{1},{},0});co_return 1;
}
Commands::Operation::Execution::Routine Commands::Operation::Execution::use_item(unsigned who,unsigned position) {
    auto &o=owner;auto &w=o.windows;const auto item=o.party.character(who).items.at(position-1);
    const auto &properties=o.content->item(item);const auto &action=o.content->action(properties.effect);
    bool execute=false;auto description=o.content->use_text(0);unsigned target=who;
    switch(properties.type&0x30) {
    case 0:case 0x20:execute=true;description=action.description;break;
    case 0x10:description=o.content->use_text(1);break;
    case 0x30:
        if(!o.content->can_use(who,item)){description=o.content->use_text(2);break;}
        switch(properties.type&12) {
        case 0:execute=true;description=action.description;break;
        case 4:description=o.content->use_text(3);break;
        case 8:
            if((properties.type&3)<2){execute=true;description=action.description;}
            else if((properties.type&3)==2){
                if(!o.field_map || !o.session)throw std::logic_error("World item location gate requires its actual field map/sector owner");
                const auto &leader=o.interactions.state();const auto attrs=o.field_map->sector(leader.leader_x>>8,leader.leader_y>>7).attributes;
                o.session->current_sector_attributes=attrs;
                const unsigned allowed=w.state().flag(73) && !(attrs&7)?0xb0:attrs>>8;
                if(allowed!=item)description=o.content->use_text(3);
                else if(item==0xb0 && o.interactions.bicycle_blocked())description=o.content->use_text(4);
                else{execute=true;description=action.description;}
            } else{
                execute=true;auto finder=o.interactions.begin_find_checkable();
                while(!finder->complete()){const auto progress=finder->advance(1);if(progress==dialogue::Progress::Suspended)throw std::logic_error("Source finder unexpectedly acquired a window effect");co_await Yield{};}
                const auto *npc=o.interactions.selected_npc();
                description=npc && (npc->raw_type==1 || npc->raw_type==3)?npc->alternate_reference:dialogue::ReferenceKey{};
                if(description==dialogue::ReferenceKey{})description=action.description;
            }
            break;
        }
        break;
    }
    if(execute) {
        if(action.direction==1 && action.target==1 && o.party.controlled_count!=1) {
            co_await target_prompt(3);target=co_await character_select(1);
            co_await window({dialogue::WindowAction::Close,dialogue::WindowId{0x28},{},0});
        } else if((action.direction==1 && action.target>=3) || action.target>=4 || (action.direction!=0 && action.direction!=1))target=0xff;
        else if(action.target!=0 && !(action.direction==1 && action.target==1))target=co_await this->target(properties.effect,who);
        if(!target)co_return 0;
        if(properties.flags&0x80)co_await mutate(o.inventory.begin_remove(who,position));
    }
    co_await window({dialogue::WindowAction::Close,dialogue::WindowId{3},{},0});
    co_await window({dialogue::WindowAction::Close,dialogue::WindowId{2},{},0});
    auto *prepared=w.prepared_message();if(!prepared)throw std::logic_error("World item use requires its shared prepared-message owner");
    prepared->copy_name(dialogue::PreparedName::Attacker,o.party.name_field(who));prepared->set_item(item);
    co_await window({dialogue::WindowAction::Open,dialogue::WindowId{1},{},0});
    w.state().window().active.working=who;w.state().window().active.argument=position;
    if(target!=0xff)prepared->copy_name(dialogue::PreparedName::Target,o.party.name_field(target));
    if(description==dialogue::ReferenceKey{})description=o.content->use_text(0);
    use=ItemUse{std::uint16_t(who),std::uint16_t(position),item,std::uint8_t(target),description,execute && action.function};
    co_await Yield{};
    co_await window({dialogue::WindowAction::Close,dialogue::WindowId{1},{},0});co_return use_result;
}
Commands::Operation::Execution::Routine Commands::Operation::Execution::goods() {
    auto &o=owner;auto &w=o.windows;co_await wallet();
    for(;;) {
        unsigned who{};
        if(o.party.controlled_count==1) {
            who=o.party.party_order[0];if(!o.party.character(who).items[0])co_return 0;
            co_await inventory(who);co_await meter(o.meters.begin_select(0));
        } else {co_await target_prompt(0);who=co_await character_select(0,2);}
        if(!who) {
            co_await window({dialogue::WindowAction::Close,dialogue::WindowId{2},{},0});
            co_await window({dialogue::WindowAction::Close,dialogue::WindowId{0x28},{},0});co_return 0;
        }
        if(!o.party.character(who).items[0])continue;
        bool choose_character=false;
        for(;;) {
            co_await target_prompt(1);co_await window({dialogue::WindowAction::Focus,dialogue::WindowId{2},{},0});
            const auto position=co_await select();
            if(!jp()) {
                const auto &metadata=w.metadata(dialogue::WindowId{2});auto &backup=w.menu_state();
                backup.backup_first_option=metadata.first_option;backup.backup_selected_option=metadata.selected_option;
                if(position) {
                    const auto option=o.model.index_at(metadata.first_option,metadata.selected_option);
                    backup.backup_x=w.menu_options().at(option).x;backup.backup_y=w.menu_options().at(option).y;
                }
            }
            co_await window({dialogue::WindowAction::Close,dialogue::WindowId{0x28},{},0});
            if(!position) {
                if(o.party.controlled_count!=1){choose_character=true;break;}
                if(o.party.character(who).items[0]){co_await sound(27);co_await meter(o.meters.begin_clear_selection());}
                co_await window({dialogue::WindowAction::Close,dialogue::WindowId{2},{},0});co_return 0;
            }
            co_await window({dialogue::WindowAction::Open,dialogue::WindowId{3},{},0});
            const auto status=o.party.character(who).afflictions[0];const unsigned first=(status==1 || status==2)?2:1;
            w.output().set_cursor(dialogue::WindowId{3},{0,std::uint16_t(first-1)});
            for(unsigned command=first;command<=4;++command)o.model.append_value(o.content->item_command(command),{},std::uint16_t(command),0,std::uint16_t(command-1),false);
            o.model.prepare_selection(1,false,0,{});
            bool altered=false,print_items=false;
            for(;;) {
                co_await window({dialogue::WindowAction::Focus,dialogue::WindowId{!jp() && altered?2u:3u},{},0});
                if(jp() || !altered || print_items)co_await print();
                co_await window({dialogue::WindowAction::Focus,dialogue::WindowId{3},{},0});
                const auto command=co_await select();
                if(!command){co_await window({dialogue::WindowAction::CloseFocus,{},{},0});co_await window({dialogue::WindowAction::Focus,dialogue::WindowId{2},{},0});if(jp())co_await print();break;}
                if(command==1){if(co_await use_item(who,position))co_return 1;altered=true;print_items=false;continue;}
                if(command==2){if(co_await give(who,position)){co_await window({dialogue::WindowAction::Close,dialogue::WindowId{3},{},0});co_await window({dialogue::WindowAction::Close,dialogue::WindowId{2},{},0});co_return 0;}altered=true;print_items=true;continue;}
                if(command==4) {
                    if(!jp()) {
                        co_await window({dialogue::WindowAction::Focus,dialogue::WindowId{0},{},0});co_await window({dialogue::WindowAction::ClearFocus,{},{},0});
                        co_await window({dialogue::WindowAction::Focus,dialogue::WindowId{2},{},0});co_await window({dialogue::WindowAction::ClearFocus,{},{},0});w.menu_state().restore_backup=true;
                    }
                    co_await window({dialogue::WindowAction::Open,dialogue::WindowId{1},{},0});
                    co_await authored(o.content->item_help(o.party.character(who).items.at(position-1)));
                    co_await window({dialogue::WindowAction::Close,dialogue::WindowId{1},{},0});
                    if(!jp()){co_await window({dialogue::WindowAction::Focus,dialogue::WindowId{0},{},0});w.menu_state().skip_adding_command_text=1;co_await command_text();co_await inventory(who);}
                    co_await window({dialogue::WindowAction::Close,dialogue::WindowId{3},{},0});co_await window({dialogue::WindowAction::Focus,dialogue::WindowId{2},{},0});
                    if(jp())co_await print();
                    break;
                }
                if(command==3) {
                    co_await window({dialogue::WindowAction::Open,dialogue::WindowId{1},{},0});w.state().window().active.working=who;w.state().window().active.argument=position;
                    co_await authored(o.content->drop());co_await window({dialogue::WindowAction::Close,dialogue::WindowId{1},{},0});
                    co_await window({dialogue::WindowAction::Close,dialogue::WindowId{3},{},0});co_await window({dialogue::WindowAction::Close,dialogue::WindowId{2},{},0});co_return 0;
                }
                throw std::logic_error("World inventory menu returned an unknown command");
            }
        }
        if(choose_character)continue;
    }
}
} // namespace eb::native::world::menu
