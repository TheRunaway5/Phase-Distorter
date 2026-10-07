#include "internal.hpp"
#include <algorithm>
#include <stdexcept>
namespace eb::native::world::menu {
namespace {
std::vector<std::uint8_t> item_label(const Resources &r,unsigned item,bool equipped,bool jp) {
    const auto name=r.item_name(item);std::vector<std::uint8_t> label;
    if(equipped && !jp)label.push_back(34);
    label.insert(label.end(),name.begin(),name.end());
    if(jp && equipped) {
        auto end=std::find(label.begin(),label.end(),0);label.erase(end,label.end());label.push_back(34);label.push_back(0);
    } else {label.resize(name.size());label.push_back(0);}
    return label;
}
}
Commands::Operation::Execution::Routine Commands::Operation::Execution::equipment_stats(unsigned who,bool compare) {
    auto &o=owner;auto &w=o.windows;
    if(jp())w.output().policy().instant=true;
    co_await window({dialogue::WindowAction::Open,dialogue::WindowId{0x2d},{},0});
    if(!jp())co_await window_tick_without_instant();
    w.metadata(dialogue::WindowId{0x2d}).number_padding=2;
    const auto &character=o.party.character(who);
    auto total=[&](const std::array<std::uint8_t,4> &equipment,bool defense) {
        int value=defense?character.base_defense:character.base_offense;
        for(unsigned slot=defense?1:0;slot<(defense?4:1);++slot)if(equipment[slot]) {
            const auto item=character.items.at(equipment[slot]-1);const auto parameter=o.content->item_parameters(item)[who==4?1:0];
            value+=parameter<128?int(parameter):int(parameter)-256;
        }
        return unsigned(std::clamp(value,0,255));
    };
    for(unsigned row=0;row<2;++row) {
        w.output().set_cursor(dialogue::WindowId{0x2d},{std::uint16_t(jp() && row==0?1:0),std::uint16_t(row)});
        const auto label=o.content->equipment_text(6+row);
        co_await text({dialogue::SubstitutionAction::String,0,[label]{return label;},std::uint16_t(label.size())});
        if(!jp())w.menu_state().force_left_alignment=true;
        if(!jp())w.output().set_cursor(dialogue::WindowId{0x2d},{6,std::uint16_t(row)},7);
        co_await text({dialogue::SubstitutionAction::Number,total(character.equipment,row!=0),{},0xffff});
        if(!jp())w.menu_state().force_left_alignment=false;
    }
    if(compare)for(unsigned row=0;row<2;++row) {
        w.output().set_cursor(dialogue::WindowId{0x2d},{std::uint16_t(jp()?10:9),std::uint16_t(row)},jp()?0:4);
        auto arrow=w.output().window(dialogue::WindowId{0x2d}).style;arrow.palette=1;arrow.priority=false;w.output().set_style(dialogue::WindowId{0x2d},arrow);
        if(jp())co_await text({dialogue::SubstitutionAction::Character,0x14e,{},0xffff});else co_await fixed(0x14e);
        if(!row || jp()){arrow.palette=0;w.output().set_style(dialogue::WindowId{0x2d},arrow);}
        if(!jp())w.menu_state().force_left_alignment=true;
        co_await text({dialogue::SubstitutionAction::Number,total(preview_equipment,row!=0),{},0xffff});
        if(!jp())w.menu_state().force_left_alignment=false;
    }
    w.output().policy().instant=false;co_return 0;
}
Commands::Operation::Execution::Routine Commands::Operation::Execution::equipment_display(unsigned who) {
    auto &o=owner;auto &w=o.windows;
    if(jp())w.output().policy().instant=true;
    co_await window({dialogue::WindowAction::Open,dialogue::WindowId{6},{},0});
    if(!jp())co_await window_tick_without_instant();
    if(o.party.controlled_count!=1)w.set_pagination(dialogue::WindowId{6},w.pagination_frame());
    const auto name=o.party.name_field(who);
    co_await window({dialogue::WindowAction::Title,dialogue::WindowId{6},{name.begin(),name.end()},unsigned(name.size())});
    const auto &character=o.party.character(who);
    for(unsigned slot=0;slot<4;++slot) {
        if(!jp())w.menu_state().force_left_alignment=true;
        o.model.append_at(o.content->equipment_text(slot),{},0,std::uint16_t(slot),false);
        const auto position=character.equipment[slot];std::vector<std::uint8_t> label;
        if(position)label=item_label(*o.content,character.items.at(position-1),true,jp());
        else {const auto none=o.content->equipment_text(4);label.assign(none.begin(),none.end());label.push_back(0);}
        w.output().set_cursor(dialogue::WindowId{6},{std::uint16_t(jp()?4:6),std::uint16_t(slot)});
        co_await text({dialogue::SubstitutionAction::Character,jp()?0x5bu:0x6au,{},0xffff});
        if(!jp())co_await text({dialogue::SubstitutionAction::Character,0x50,{},0xffff});
        co_await text({dialogue::SubstitutionAction::String,0,[&label]{return std::span<const std::uint8_t>(label);},std::uint16_t(jp()?10:49)});
    }
    co_await print();w.menu_state().force_left_alignment=false;w.output().policy().instant=false;
    co_await equipment_stats(who);co_return 0;
}
Commands::Operation::Execution::Routine Commands::Operation::Execution::equipment_select(unsigned who) {
    auto &o=owner;auto &w=o.windows;unsigned previous=1;
    for(;;) {
        co_await target_prompt(4);co_await window({dialogue::WindowAction::Focus,dialogue::WindowId{6},{},0});
        if(jp())o.model.select_initial(std::uint16_t(previous-1));
        const auto slot=co_await select();previous=slot;
        co_await window({dialogue::WindowAction::Close,dialogue::WindowId{0x28},{},0});if(!slot)co_return 0;
        co_await window({dialogue::WindowAction::Open,dialogue::WindowId{7},{},0});
        const auto title=o.content->equipment_title(slot-1);
        const auto end=std::find(title.begin(),title.end(),0);
        co_await window({dialogue::WindowAction::Title,dialogue::WindowId{7},{title.begin(),title.end()},unsigned(jp()?4:end-title.begin())});
        unsigned ordinal=0,selected=0xffff;
        const auto &character=o.party.character(who);
        for(unsigned position=1;position<=14;++position) {
            const auto item=character.items[position-1];if(!item)continue;
            const auto properties=o.content->item(item);
            if((properties.type&0x30)!=0x10 || ((properties.type&12)>>2)+1!=slot || !o.content->can_use(who,item))continue;
            const bool equipped=std::find(character.equipment.begin(),character.equipment.end(),position)!=character.equipment.end();
            auto label=item_label(*o.content,item,equipped,jp());
            const auto option=o.model.append_value(label,{},std::uint16_t(position),0,0,false);w.menu_options()[option].sound_effect=115;
            if(equipped)selected=ordinal;
            ++ordinal;
        }
        o.model.append_value(o.content->equipment_text(5),{},0xffff,0,0,false);
        o.model.prepare_selection(1,false,std::uint16_t(selected),{});co_await print();
        preview_equipment=character.equipment;
        w.metadata(dialogue::WindowId{7}).cursor_callback=dialogue::MenuCallbackId{1};
        selection_callback=[this,who,slot](std::uint16_t position)->Routine {
            preview_equipment=owner.party.character(who).equipment;preview_equipment.at(slot-1)=std::uint8_t(position==0xffff?0:position);
            co_await equipment_stats(who,true);co_return 0;
        };
        co_await target_prompt(1);const auto position=co_await select();
        co_await window({dialogue::WindowAction::Close,dialogue::WindowId{0x28},{},0});
        w.metadata(dialogue::WindowId{7}).cursor_callback.reset();selection_callback={};
        if(position==0xffff)o.inventory.change_equipment(who,party::EquipmentSlot(slot-1),0);
        else if(position)o.inventory.change_equipment(who,party::EquipmentSlot((o.content->item(character.items.at(position-1)).type&12)>>2),position);
        co_await window({dialogue::WindowAction::Close,dialogue::WindowId{7},{},0});co_await equipment_display(who);
    }
}
Commands::Operation::Execution::Routine Commands::Operation::Execution::equipment() {
    auto &o=owner;auto &w=o.windows;co_await wallet();w.save_text_context();
    for(;;) {
        unsigned who=o.party.party_order[0];
        if(o.party.controlled_count==1){co_await equipment_display(who);co_await meter(o.meters.begin_select(0));}
        else {
            co_await target_prompt(0);
            character_callback=[this](unsigned character)->Routine {co_await equipment_display(character);co_return 0;};
            who=co_await character_select(0);character_callback={};
            co_await window({dialogue::WindowAction::Close,dialogue::WindowId{0x28},{},0});if(!who)break;
        }
        co_await equipment_select(who);if(o.party.controlled_count==1)break;
    }
    co_await window({dialogue::WindowAction::Close,dialogue::WindowId{0x2d},{},0});co_await window({dialogue::WindowAction::Close,dialogue::WindowId{6},{},0});
    w.restore_text_context();
    if(o.party.controlled_count==1){co_await sound(27);co_await meter(o.meters.begin_clear_selection());}
    co_return 0;
}
} // namespace eb::native::world::menu
