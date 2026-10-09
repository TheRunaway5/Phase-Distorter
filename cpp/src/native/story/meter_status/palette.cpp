#include "execution.hpp"
#include <stdexcept>
namespace eb::native::story {
void SourceMeterStatus::Execution::build_palette() {
    label("palette");rep(0x31);phd();transfer('d','a');adc_imm(0xffee);transfer('a','d');
    load_abs(count_base());and_imm(255);
    if(jp){inc_reg('a',true);carry(false);adc_imm(0x9aa9);transfer('a','x');load_abs(0x99,'a','x');}
    else{transfer('a','x');inc_reg('x',true);load_abs(controlled_base(),'a','x');}
    and_imm(255);shift();transfer('a','x');load_abs(pointer_base(),'a','x');transfer('a','x');
    load_abs(jp?0x0d:0x0e,'a','x');and_imm(255);transfer('a','x');
    cmp_imm(1,'x');branch([this]{return p&Z;},"palette_incapacitated");cmp_imm(2,'x');
    branch([this]{return !(p&Z);},"palette_ordinary");label("palette_incapacitated");
    load_abs(disabled_base());branch([this]{return !(p&Z);},"palette_ordinary");
    const auto base=resources->raw_palettes_identity();
    immediate(std::uint16_t(base+320));store_dp(0x0e);immediate(std::uint16_t(base>>16));store_dp(0x10);
    immediate(64,'x');immediate(0x200);call("copy",true);jump("palette_done");
    label("palette_ordinary");immediate(std::uint16_t(base));store_dp(6);immediate(std::uint16_t(base>>16));store_dp(8);
    load_abs(std::uint16_t(party_base()-1));and_imm(255);inc_reg('a',true);store_dp(4);shift();adc_dp(4);transfer('a','x');
    add({6,6,0,0},[this]{const auto properties=resources->raw_palette_properties();if(unsigned(x)+1>=properties.size()) {
        throw std::logic_error("Status palette property read left its actual immutable extent");}
        load(std::uint16_t(properties[x]|(unsigned(properties[x+1])<<8)));});
    carry(false);adc_dp(6);store_dp(6);store_dp(0x0e);load_dp(8);store_dp(0x10);
    immediate(64,'x');immediate(0x200);call("copy",true);
    label("palette_done");add({5,3,2,0},[this]{store_word(0x200,0);});immediate(8);call("upload",true);pld();ret(true);

    label("copy");store_abs(0xa5,'x');counter_rmw(true);transfer('a','x');immediate(0,'y');jump("copy_decrement");
    label("copy_word");
    dynamic([this]{return SourceWorkCost{unsigned(7+(d&255?1:0)),4,3,0};},[this]{
        const auto pointer=std::uint32_t(local(0x0e))|(std::uint32_t(local(0x10)&255)<<16);
        const auto address=pointer+y,base=resources->raw_palettes_identity();
        if(address<base||address-base+1>=384)throw std::logic_error("Status palette pointer left its reached immutable six palettes");
        const auto colors=resources->raw_palettes();const auto at=address-base;load(std::uint16_t(colors[at]|(unsigned(colors[at+1])<<8)));
    });
    add({6,3,2,0},[this]{store_word(x,a);});inc_reg('x');inc_reg('x');inc_reg('y');inc_reg('y');
    label("copy_decrement");counter_rmw(false);branch([this]{return !(p&N);},"copy_word");ret(true);
    label("upload");sep(0x20);store_abs(0x30);rep(0x20);ret(true);
}
}
