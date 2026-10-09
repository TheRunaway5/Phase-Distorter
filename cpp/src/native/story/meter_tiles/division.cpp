#include "execution.hpp"
namespace eb::native::story {
void SourceMeterTiles::Execution::build_division() {
    label("mod16");call("div16",true);transfer('y','a');ret(true);
    label("div16");store_abs(scratch_base());store_abs(std::uint16_t(scratch_base()+2),'y');immediate(0);immediate(16,'y');
    label("div16_loop");rmw_abs(scratch_base(),'r');shift_reg(false,true);alu_abs(std::uint16_t(scratch_base()+2),'c');
    branch([this]{return !(p&C);},"div16_overflow");alu_abs(std::uint16_t(scratch_base()+2),'s');
    label("div16_overflow");inc_reg('y',true);branch([this]{return !(p&Z);},"div16_loop");
    transfer('a','y');load_abs(scratch_base());shift_reg(false,true);ret(true);
    label("div32");load_dp(8);alu_dp(0x0c,'e');store_abs(std::uint16_t(scratch_base()+4));call("div32s",true);
    rmw_abs(std::uint16_t(scratch_base()+4),'r');branch([this]{return !(p&C);},"div32_return");
    immediate(0);alu_dp(6,'s');store_dp(6);immediate(0);alu_dp(8,'s');store_dp(8);
    label("div32_return");ret(true);
    label("div32s");load_dp(8);branch([this]{return !(p&N);},"dividend_positive");
    eor_imm(0xffff);store_dp(8);load_dp(6);eor_imm(0xffff);inc_reg();store_dp(6);
    branch([this]{return !(p&Z);},"dividend_positive");rmw_dp(8,'i');
    label("dividend_positive");load_dp(0x0c);branch([this]{return !(p&N);},"divisor_positive");
    eor_imm(0xffff);store_dp(0x0c);load_dp(0x0a);eor_imm(0xffff);inc_reg();store_dp(0x0a);
    branch([this]{return !(p&Z);},"divisor_positive");rmw_dp(0x0c,'i');
    label("divisor_positive");load_dp(0x0a);store_abs(scratch_base());load_dp(0x0c);store_abs(std::uint16_t(scratch_base()+2));
    zero_dp(0x0a);zero_dp(0x0c);immediate(32,'y');
    label("div32_loop");rmw_dp(6,'r');rmw_dp(8,'r');rmw_dp(0x0a,'r');rmw_dp(0x0c,'r');
    load_dp(0x0c);alu_abs(std::uint16_t(scratch_base()+2),'c');branch([this]{return !(p&Z);},"cmp32_done");
    load_dp(0x0a);alu_abs(scratch_base(),'c');label("cmp32_done");
    branch([this]{return !(p&C);},"div32_overflow");load_dp(0x0a);alu_abs(scratch_base(),'s');store_dp(0x0a);
    load_dp(0x0c);alu_abs(std::uint16_t(scratch_base()+2),'s');store_dp(0x0c);
    label("div32_overflow");inc_reg('y',true);branch([this]{return !(p&Z);},"div32_loop");
    rmw_dp(6,'r');rmw_dp(8,'r');ret(true);
}
}
