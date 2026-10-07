#include "internal.hpp"
#include <algorithm>
namespace eb::native::world::menu {
Commands::Operation::Execution::Routine Commands::Operation::Execution::status_display(unsigned who) {
    auto &o=owner;auto &w=o.windows;const auto &c=o.party.character(who);
    w.output().policy().instant=true;
    if(!jp()){
        co_await window({dialogue::WindowAction::Open,dialogue::WindowId{8},{},0});
        co_await window_tick_without_instant();w.menu_state().force_left_alignment=true;
    }
    co_await authored(o.content->status_text());w.menu_state().force_left_alignment=false;
    if(o.party.controlled_count!=1)w.set_pagination(dialogue::WindowId{8},w.pagination_frame());
    const auto name=o.party.name_field(who);
    co_await window({dialogue::WindowAction::Title,dialogue::WindowId{8},{name.begin(),name.end()},unsigned(name.size())});
    auto cursor=[&](unsigned x,unsigned row){w.output().set_cursor(dialogue::WindowId{8},{std::uint16_t(jp()?x:x/8),std::uint16_t(row)},jp()?0:std::uint8_t(x%8));};
    if(!jp())w.menu_state().force_left_alignment=true;
    w.metadata(dialogue::WindowId{8}).number_padding=1;cursor(jp()?5:38,0);co_await text({dialogue::SubstitutionAction::Number,c.level,{},0xffff});
    w.metadata(dialogue::WindowId{8}).number_padding=2;
    for(unsigned row=3;row<=4;++row){
        cursor(jp()?9:94,row);co_await text({dialogue::SubstitutionAction::Number,row==3?c.current_hp:c.current_pp,{},0xffff});
        if(!jp()){cursor(114,row);co_await text({dialogue::SubstitutionAction::Character,0x5f,{},0xffff});}
        cursor(jp()?13:121,row);co_await text({dialogue::SubstitutionAction::Number,row==3?c.maximum_hp:c.maximum_pp,{},0xffff});
    }
    const std::array<unsigned,7> stats{c.offense,c.defense,c.speed,c.guts,c.vitality,c.iq,c.luck};
    for(unsigned row=0;row<7;++row){cursor(jp()?25:199,row);co_await text({dialogue::SubstitutionAction::Number,stats[row],{},0xffff});}
    w.metadata(dialogue::WindowId{8}).number_padding=6;cursor(jp()?9:97,5);co_await text({dialogue::SubstitutionAction::Number,std::min(c.experience,9999999u),{},0xffff});
    cursor(jp()?9:10,6);co_await text({dialogue::SubstitutionAction::Number,o.content->required_experience(who,c),{},0xffff});
    w.menu_state().force_left_alignment=false;
    for(unsigned group=0;group<7;++group)if(c.afflictions[group]){
        if(group==0 || group==1 || group==5){
            const unsigned index=group==0?c.afflictions[group]-1:group==1?c.afflictions[group]+6:9;
            const auto label=o.content->status_label(index);w.output().set_cursor(dialogue::WindowId{8},{1,1});
            co_await text({dialogue::SubstitutionAction::String,0,[label]{return label;},256});
        }
        break;
    }
    w.output().set_cursor(dialogue::WindowId{8},{std::uint16_t(jp()?10:11),1});
    if(jp())co_await text({dialogue::SubstitutionAction::Character,o.content->status_icon(c),{},0xffff});else co_await fixed(o.content->status_icon(c));
    if(who!=3){
        if(!jp())w.menu_state().force_left_alignment=true;
        cursor(jp()?1:36,7);const auto instruction=o.content->status_instruction();
        co_await text({dialogue::SubstitutionAction::String,0,[instruction]{return instruction;},std::uint16_t(instruction.size())});
        w.menu_state().force_left_alignment=false;
    }
    w.output().policy().instant=false;co_return 0;
}
Commands::Operation::Execution::Routine Commands::Operation::Execution::status() {
    auto &o=owner;auto &w=o.windows;
    for(;;){
        if(!jp())w.menu_state().force_left_alignment=true;
        character_callback=[this](unsigned who)->Routine{co_await status_display(who);co_return 0;};
        const auto who=co_await character_select(0);character_callback={};if(!who)break;if(who==3)continue;
        co_await window({dialogue::WindowAction::Open,dialogue::WindowId{0x2e},{},0});
        for(unsigned category=0;category<4;++category)o.model.append(o.content->psi_category(category));
        o.model.prepare_selection(1,false,0,{});bool first=true;
        for(;;){
            co_await window({dialogue::WindowAction::Focus,dialogue::WindowId{0x2e},{},0});
            if(jp() || first){co_await print();if(!jp())co_await window_tick_without_instant();first=false;}
            if(!jp()){
                co_await window({dialogue::WindowAction::Open,dialogue::WindowId{8},{},0});
                co_await window({dialogue::WindowAction::Focus,dialogue::WindowId{0x2e},{},0});w.menu_state().force_left_alignment=false;
            }
            w.metadata(dialogue::WindowId{0x2e}).cursor_callback=dialogue::MenuCallbackId{1};
            selection_callback=[this,who](std::uint16_t category)->Routine{
                if(jp())owner.windows.output().policy().instant=true;
                co_await window({dialogue::WindowAction::Open,dialogue::WindowId{1},{},0});
                if(!jp())co_await window_tick_without_instant();
                co_await psi_list(who,category==4?3:2,1u<<(category-1));co_return 0;
            };
            const auto category=co_await select();w.metadata(dialogue::WindowId{0x2e}).cursor_callback.reset();selection_callback={};
            if(!category)break;
            if(w.metadata(dialogue::WindowId{1}).first_option==0xffff)continue;
            co_await window({dialogue::WindowAction::Focus,dialogue::WindowId{1},{},0});last_psi_description=0xff;
            w.metadata(dialogue::WindowId{1}).cursor_callback=dialogue::MenuCallbackId{2};
            selection_callback=[this](std::uint16_t ability)->Routine{co_await psi_description(ability);co_return 0;};
            while(co_await select()){}
            w.metadata(dialogue::WindowId{1}).cursor_callback.reset();selection_callback={};
            co_await window({dialogue::WindowAction::Close,dialogue::WindowId{4},{},0});
            co_await window({dialogue::WindowAction::Close,dialogue::WindowId{0x2f},{},0});last_psi_description=0xff;
        }
        co_await window({dialogue::WindowAction::Close,dialogue::WindowId{0x2e},{},0});co_await window({dialogue::WindowAction::Close,dialogue::WindowId{1},{},0});
        if(!jp()){co_await window({dialogue::WindowAction::Focus,dialogue::WindowId{8},{},0});w.menu_state().force_left_alignment=true;}
    }
    co_await window({dialogue::WindowAction::Close,dialogue::WindowId{8},{},0});co_return 0;
}
} // namespace eb::native::world::menu
