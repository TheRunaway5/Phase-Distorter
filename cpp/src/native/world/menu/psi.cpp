#include "internal.hpp"
#include "eb/native/dialogue/prepared_message.hpp"
#include "eb/native/world_startup.hpp"
#include <stdexcept>
namespace eb::native::world::menu {
Commands::Operation::Execution::Routine Commands::Operation::Execution::psi_name(unsigned name) {
    const auto bytes=name==1?owner.party.name_field(party::NameField::FavouriteThing):owner.content->psi_name(name);
    co_await text({jp()?dialogue::SubstitutionAction::String:dialogue::SubstitutionAction::WordSplitString,0,[bytes]{return bytes;},0xffff});co_return 0;
}
Commands::Operation::Execution::Routine Commands::Operation::Execution::psi_list(unsigned who,unsigned usability,unsigned categories) {
    auto &o=owner;auto &w=o.windows;w.output().policy().instant=true;
    co_await window({dialogue::WindowAction::ResetMenu,{},{},0});
    auto add=[&](unsigned id){const auto &p=o.content->psi(id);o.model.append_value(o.content->psi_suffix(p.level),{},std::uint16_t(id),p.x,p.y,false);};
    auto name=[&](unsigned id)->Routine{
        const auto &p=o.content->psi(id);w.output().set_cursor(*w.state().focus,{0,p.y});
        co_await psi_name(p.name);co_return 0;
    };
    if(who==4 && (usability&2) && (categories&1)){
        if(o.party.party_psi&2){co_await name(21);add(21);}if(o.party.party_psi&4)add(22);
    }
    unsigned previous_name=0;
    if(who!=3)for(unsigned id=1;id<54 && o.content->psi(id).name;++id){
        const auto &p=o.content->psi(id);const auto level=p.levels.at(who==4?2:who-1);
        if(!level || level>o.party.character(who).level || !(p.usability&usability) || !(p.category&categories))continue;
        if(p.name!=previous_name){co_await name(id);previous_name=p.name;}add(id);
    }
    if(who==1 && (usability&1) && (categories&8)){
        if(o.party.party_psi&1){co_await name(51);add(51);}if(o.party.party_psi&8)add(52);
    }
    co_await print();w.output().policy().instant=false;co_return 0;
}
Commands::Operation::Execution::Routine Commands::Operation::Execution::psi_display(unsigned who) {
    auto &o=owner;auto &w=o.windows;
    co_await window({dialogue::WindowAction::Open,dialogue::WindowId{1},{},0});
    if(!jp())co_await window_tick_without_instant();
    if(o.party.controlled_count!=1)w.set_pagination(dialogue::WindowId{1},w.pagination_frame());
    const auto name=o.party.name_field(who);
    co_await window({dialogue::WindowAction::Title,dialogue::WindowId{1},{name.begin(),name.end()},unsigned(name.size())});
    co_await psi_list(who,1,15);co_return 0;
}
Commands::Operation::Execution::Routine Commands::Operation::Execution::psi_help(unsigned id) {
    auto &o=owner;auto &w=o.windows;const auto &p=o.content->psi(id);const auto &a=o.content->action(p.action);
    if(jp())w.output().policy().instant=true;
    co_await window({dialogue::WindowAction::Open,dialogue::WindowId{4},{},0});
    if(!jp()){co_await window_tick_without_instant();w.state().word_wrap=false;}
    const auto label=o.content->psi_target(p.name==4?0:a.direction*5+a.target);
    co_await text({dialogue::SubstitutionAction::String,0,[label]{return label;},std::uint16_t(label.size())});
    if(!jp())w.state().word_wrap=true;
    w.output().set_cursor(dialogue::WindowId{4},{0,1});const auto cost=o.content->psi_cost();
    co_await text({dialogue::SubstitutionAction::String,0,[cost]{return cost;},std::uint16_t(jp()?0xffff:8)});
    if(jp())w.metadata(dialogue::WindowId{4}).number_padding=1;
    else{
        co_await text({dialogue::SubstitutionAction::Character,0x50,{},0xffff});w.metadata(dialogue::WindowId{4}).number_padding=129;
        w.output().set_cursor(dialogue::WindowId{4},{5,1});
    }
    co_await text({dialogue::SubstitutionAction::Number,a.pp_cost,{},0xffff});w.output().policy().instant=false;co_return 0;
}
Commands::Operation::Execution::Routine Commands::Operation::Execution::psi_description(unsigned id) {
    auto &w=owner.windows;if(!jp() && last_psi_description==id)co_return 0;
    co_await psi_help(id);co_await window({dialogue::WindowAction::Open,dialogue::WindowId{0x2f},{},0});
    if(jp())w.output().policy().instant=true;else{co_await window_tick_without_instant();last_psi_description=id;}
    co_await authored(owner.content->psi(id).description);w.output().policy().instant=false;co_return 0;
}
Commands::Operation::Execution::Routine Commands::Operation::Execution::psi_highlight(unsigned who,unsigned id,unsigned highlight) {
    auto &w=owner.windows;const auto row=w.output().window(dialogue::WindowId{1}).cursor.line;
    w.output().policy().instant=true;
    // JP C1CA72 prints only the selected name into the retained canvas.
    // The US helper clears and rebuilds the list before the same write.
    if(!jp()){co_await window({dialogue::WindowAction::ClearFocus,{},{},0});co_await window_tick_without_instant();co_await psi_display(who);co_await print();}
    w.output().set_cursor(dialogue::WindowId{1},{0,row});auto style=w.output().window(dialogue::WindowId{1}).style;
    style.palette=std::uint8_t(highlight);w.output().set_style(dialogue::WindowId{1},style);
    co_await psi_name(owner.content->psi(id).name);
    style.palette=0;w.output().set_style(dialogue::WindowId{1},style);w.output().policy().instant=false;co_return 0;
}
Commands::Operation::Execution::Routine Commands::Operation::Execution::teleport_destinations() {
    auto &o=owner;auto &w=o.windows;unsigned destination=0;
    co_await target_prompt(2);w.save_text_context();
    co_await window({dialogue::WindowAction::Open,dialogue::WindowId{5},{},0});
    const auto title=o.content->teleport_title();
    co_await window({dialogue::WindowAction::Title,dialogue::WindowId{5},{title.begin(),title.end()},3});
    for(unsigned id=1;id<17;++id){
        const auto &d=o.content->teleport_destination(id);if(d.name.front()==0)break;
        if(!w.state().flag(d.event_flag))continue;
        auto name=d.name;name.push_back(0);o.model.append_value(name,{},std::uint16_t(id),0,0,false);
    }
    if(w.metadata(dialogue::WindowId{5}).first_option!=0xffff){
        o.model.prepare_selection(1,false,0,{});co_await print();destination=co_await select();
    }
    co_await window({dialogue::WindowAction::CloseFocus,{},{},0});
    co_await window({dialogue::WindowAction::Close,dialogue::WindowId{0x28},{},0});
    w.restore_text_context();co_return std::uint16_t(destination);
}
Commands::Operation::Execution::Routine Commands::Operation::Execution::psi() {
    auto &o=owner;auto &w=o.windows;unsigned selected=0xff;const bool one=o.content->psi_character_count(o.party)==1;
    for(;;){
        unsigned who{};
        if(one){if(selected==0)break;who=o.party.party_order.at(o.content->first_psi_character(o.party)-1);co_await psi_display(who);}
        else{
            co_await target_prompt(0);character_callback=[this](unsigned c)->Routine{co_await psi_display(c);co_return 0;};
            character_filter=[this](unsigned c){return owner.content->psi_eligible(owner.party,c);};
            who=co_await character_select(0);character_callback={};character_filter={};
            co_await window({dialogue::WindowAction::Close,dialogue::WindowId{0x28},{},0});
        }
        if(!who)break;
        selected=0xff;
        for(;;){
            co_await window({dialogue::WindowAction::Focus,dialogue::WindowId{1},{},0});
            if(selected!=0xff){co_await psi_highlight(who,selected,0);co_await print();}
            w.metadata(dialogue::WindowId{1}).cursor_callback=dialogue::MenuCallbackId{1};
            selection_callback=[this](std::uint16_t id)->Routine{co_await psi_help(id);co_return 0;};
            selected=co_await select();w.metadata(dialogue::WindowId{1}).cursor_callback.reset();selection_callback={};
            if(!selected)break;
            if(jp() || !one)co_await psi_highlight(who,selected,6);
            const auto &p=o.content->psi(selected);const auto &a=o.content->action(p.action);
            if(a.pp_cost>o.party.character(who).current_pp){
                co_await window({dialogue::WindowAction::Open,dialogue::WindowId{0x0e},{},0});co_await authored(o.content->psi_no_pp());
                co_await window({dialogue::WindowAction::CloseFocus,{},{},0});continue;
            }
            unsigned target=who;
            if(p.category==8){
                if(!o.formation || !o.session || !o.field_map)throw std::logic_error("World Teleport PSI requires its actual guest/session/map owners");
                const auto &leader=o.interactions.state();const auto style=leader.walking_style;
                bool blocked=o.formation->first_guest.member==10 || o.formation->second_guest.member==10 || w.state().flag(754) ||
                    style==7 || style==8 || style==12 || style==13;
                if(!blocked){const auto attrs=o.field_map->sector(leader.leader_x>>8,leader.leader_y>>7).attributes;o.session->current_sector_attributes=attrs;blocked=(attrs&0x80)!=0;}
                if(blocked){
                    co_await window({dialogue::WindowAction::Open,dialogue::WindowId{0x0e},{},0});co_await authored(o.content->teleport_blocked());
                    co_await window({dialogue::WindowAction::CloseFocus,{},{},0});continue;
                }
                target=co_await teleport_destinations();
            }
            else if(a.direction==1 && a.target==1 && o.party.controlled_count!=1){co_await target_prompt(3);target=co_await character_select(1);co_await window({dialogue::WindowAction::Close,dialogue::WindowId{0x28},{},0});}
            else if((a.direction==1 && a.target>=3) || a.target>=4 || (a.direction!=0 && a.direction!=1))target=0xff;
            else if(a.target!=0 && !(a.direction==1 && a.target==1))target=co_await this->target(p.action,who);
            if(!target)continue;
            co_await window({dialogue::WindowAction::Close,dialogue::WindowId{4},{},0});
            auto &c=o.party.character(who);c.target_pp=std::uint16_t(c.target_pp-a.pp_cost);if(c.target_pp>c.maximum_pp)c.target_pp=0;
            if(p.category==8){
                set_teleport_state(*o.session,o.interactions.actors().appearance_scene(),std::uint16_t(target),p.level);
                ability=AbilityUse{std::uint16_t(who),p.action,std::uint8_t(selected),std::uint8_t(target),a.description,true};co_await Yield{};
                co_await window({dialogue::WindowAction::Close,dialogue::WindowId{1},{},0});co_return use_result;
            }
            auto *prepared=w.prepared_message();if(!prepared)throw std::logic_error("World PSI requires its shared prepared owner");
            prepared->copy_name(dialogue::PreparedName::Attacker,o.party.name_field(who));
            if(target!=0xff)prepared->copy_name(dialogue::PreparedName::Target,o.party.name_field(target));
            prepared->set_item(std::uint8_t(selected));
            co_await window({dialogue::WindowAction::Open,dialogue::WindowId{1},{},0});
            ability=AbilityUse{std::uint16_t(who),p.action,std::uint8_t(selected),std::uint8_t(target),a.description};co_await Yield{};
            co_await window({dialogue::WindowAction::Close,dialogue::WindowId{1},{},0});co_return use_result;
        }
        co_await window({dialogue::WindowAction::Close,dialogue::WindowId{4},{},0});
    }
    co_await window({dialogue::WindowAction::Close,dialogue::WindowId{1},{},0});co_return 0;
}
} // namespace eb::native::world::menu
