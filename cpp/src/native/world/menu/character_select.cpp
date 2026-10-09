#include "internal.hpp"
#include <stdexcept>
namespace eb::native::world::menu {
Commands::Operation::Execution::Routine Commands::Operation::Execution::character_select(unsigned mode,unsigned inventory_window) {
    // CHAR_SELECT_PROMPT preserves the captured active bank's argument even
    // when the cursor callback moves focus to a newly created inventory.
    auto &o=owner;auto &w=o.windows;
    const auto saved_argument=w.capture_argument();
    if(mode==1) {
        w.save_text_context();
        const unsigned id=o.party.controlled_count==1?0x33:0x27+o.party.controlled_count;
        co_await window({dialogue::WindowAction::Open,dialogue::WindowId{id},{},0});
        for(unsigned index=0;index<o.party.controlled_count;++index) {
            const auto who=o.party.party_order.at(index);auto name=o.party.name_field(who);
            std::vector<std::uint8_t> label(name.begin(),name.end());label.push_back(0);
            o.model.append_value(label,{},who,std::uint16_t(index*6),0,false);
        }
        co_await print();const auto result=co_await select();
        co_await window({dialogue::WindowAction::Close,dialogue::WindowId{id},{},0});
        w.restore_text_context();w.restore_argument(saved_argument);co_return result;
    }
    unsigned index=mode==2 || o.meters.state().selected_phase==0xffff?0:o.meters.state().selected_phase;
    if(index>=o.party.controlled_count)throw std::out_of_range("Character selector retains a phase outside the live controlled party");
    if(character_callback)co_await character_callback(o.party.party_order.at(index));
    else if(inventory_window)co_await inventory(o.party.party_order.at(index),inventory_window);
    w.set_pagination(w.pagination_window(),0);unsigned wait=10;
    for(;;) {
        if(mode==0)co_await meter(o.meters.begin_select(index));
        w.output().policy().instant=false;co_await tick(story::TickKind::Window);
        unsigned candidate=index;
        for(unsigned polls=0;;) {
            // The original four decoration cells are refreshed before each
            // group of C12E42 polls; drawing does not add an input boundary.
            if(const auto id=w.pagination_window())w.draw_window(*id);
            bool moved=false;
            for(;polls<wait;++polls) {
                co_await tick(story::TickKind::World);
                const auto pressed=o.input.pressed[0];
                if(pressed&0x0200){candidate=index;do{candidate=candidate?candidate-1:o.party.controlled_count-1;}while(character_filter && !character_filter(o.party.party_order.at(candidate)));w.set_pagination(w.pagination_window(),2);moved=true;break;}
                if(pressed&0x0100){candidate=index;do{candidate=candidate+1<o.party.controlled_count?candidate+1:0;}while(character_filter && !character_filter(o.party.party_order.at(candidate)));w.set_pagination(w.pagination_window(),3);moved=true;break;}
                if(pressed&0x00a0){co_await sound(1);w.set_pagination(w.pagination_window(),{});w.restore_argument(saved_argument);co_return o.party.party_order.at(index);}
                if(pressed&0xa000){co_await sound(mode==0?27:2);co_await meter(o.meters.begin_clear_selection());w.set_pagination(w.pagination_window(),{});w.restore_argument(saved_argument);co_return 0;}
            }
            if(moved)break;
            w.set_pagination(w.pagination_window(),w.pagination_frame().value_or(0)?0:1);polls=0;wait=10;
        }
        if(candidate!=index) {
            co_await sound(mode==0?27:2);index=candidate;
            if(character_callback)co_await character_callback(o.party.party_order.at(index));
            else if(inventory_window)co_await inventory(o.party.party_order.at(index),inventory_window);
        }
        wait=4;
    }
}
} // namespace eb::native::world::menu
