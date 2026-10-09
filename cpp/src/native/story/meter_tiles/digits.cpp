#include "execution.hpp"
namespace eb::native::story {
void SourceMeterTiles::Execution::build_digits() {
    label("hp");rep(0x31);phd();push();transfer('d','a');adc_imm(0xfff0);transfer('a','d');pop();
    store_dp(0x0e,'y');store_dp(2);transfer('x','a');call("separate",false);load_dp(0x0e,'y');immediate(0,'x');load_dp(2);call("fill",false);pld();ret(false);
    label("pp");rep(0x31);phd();push();transfer('d','a');adc_imm(0xfff0);transfer('a','d');pop();
    store_dp(4,'y');store_dp(2);load_dp(0x1e,'y');store_dp(0x0e,'y');load_abs(4,'a','x');and_imm(255);
    branch([this]{return p&Z;},"can_concentrate");load_dp(2);call("fill_x",false);jump("pp_return",true);
    label("can_concentrate");load_dp(4);call("separate",false);load_dp(0x0e,'y');immediate(1,'x');load_dp(2);call("fill",false);
    label("pp_return");pld();ret(false);
    label("separate");rep(0x31);phd();push();transfer('d','a');adc_imm(0xfff0);transfer('a','d');pop();
    store_dp(0x0e);immediate(std::uint16_t(decimal()+2),'x');immediate(10,'y');call("mod16",true);sep(A8);store_abs(0,'a','x');
    inc_reg('x',true);immediate(10,'y');rep(A8);load_dp(0x0e);call("div16",true);store_dp(0x0e);
    immediate(10,'y');call("mod16",true);sep(A8);store_abs(0,'a','x');inc_reg('x',true);immediate(10,'y');rep(A8);
    load_dp(0x0e);call("div16",true);sep(A8);store_abs(0,'a','x');rep(A8);pld();ret(false);
    label("fill_x");rep(0x31);phd();push();transfer('d','a');adc_imm(0xfff0);transfer('a','d');pop();
    optimized_mult(4,24);carry(false);adc_imm(std::uint16_t(digit()+12));transfer('a','x');immediate(0);store_dp(0x0e);jump("fill_x_test",true);
    label("fill_x_loop");carry(false);adc_imm(0x264c);store_abs(0,'a','x');load_dp(0x0e);carry(false);adc_imm(0x265c);store_abs(6,'a','x');
    load_dp(0x0e);inc_reg();store_dp(0x0e);inc_reg('x');inc_reg('x');label("fill_x_test");cmp_imm(3);branch([this]{return !(p&C);},"fill_x_loop");pld();ret(false);
    label("fill");rep(0x31);phd();push();transfer('d','a');adc_imm(0xffe8);transfer('a','d');pop();
    store_dp(2,'x');transfer('a','x');cmp_imm(0x3000,'y');branch([this]{return p&C;},"fraction_active");
    immediate(0);store_dp(0x16);jump("fraction_ready",true);label("fraction_active");transfer('y','a');carry(true);adc_imm(0x3000,true);store_dp(0x16);
    label("fraction_ready");constant_pair(0x0a,0x3400);load_dp(0x16);store_dp(6);zero_dp(8);call("div32",true);
    load_dp(6);transfer('a','y');load_dp(2);optimized_mult(4,12);store_dp(2);transfer('x','a');optimized_mult(4,24);
    carry(false);alu_dp(2,'a');carry(false);adc_imm(std::uint16_t(digit()+4));transfer('a','x');
    load_abs(std::uint16_t(decimal()+2));and_imm(255);store_dp(0x14);
    load_abs(std::uint16_t(decimal()+1));and_imm(255);store_dp(4);
    load_abs(decimal());and_imm(255);store_dp(0x12);
    // Ones top/bottom. Preserve every arithmetic and temporary word store.
    load_dp(0x14);shift_reg(true);shift_reg(true);for(unsigned i=0;i<4;++i)shift_reg(false);store_dp(2);
    load_dp(0x14);shift_reg(false);shift_reg(false);carry(false);alu_dp(2,'a');store_dp(2,'y');carry(false);alu_dp(2,'a');carry(false);adc_imm(0x2600);
    store_dp(2);store_abs(0,'a','x');load_dp(2);carry(false);adc_imm(16);store_abs(6,'a','x');transfer('x','a');inc_reg('a',true);inc_reg('a',true);store_dp(2);store_dp(0x10);
    load_dp(4);branch([this]{return !(p&Z);},"tens_visible");load_dp(0x12);branch([this]{return !(p&Z);},"tens_visible");
    immediate(0x248,'x');jump("tens_palette",true);label("tens_visible");immediate(0x200,'x');label("tens_palette");
    load_dp(0x14);cmp_imm(9);branch([this]{return !(p&Z);},"tens_static");cmp_imm(0,'y');branch([this]{return !(p&Z);},"tens_animation");
    label("tens_static");immediate(0,'y');label("tens_animation");
    load_dp(4);shift_reg(true);shift_reg(true);for(unsigned i=0;i<4;++i)shift_reg(false);store_dp(2);
    load_dp(4);shift_reg(false);shift_reg(false);carry(false);alu_dp(2,'a');store_dp(2,'y');carry(false);alu_dp(2,'a');store_dp(2,'x');carry(false);alu_dp(2,'a');carry(false);adc_imm(0x2400);
    load_dp(0x10,'x');store_dp(2,'x');store_abs(0,'a','x');carry(false);adc_imm(16);load_dp(2,'x');store_abs(6,'a','x');
    load_dp(2);inc_reg('a',true);inc_reg('a',true);store_dp(0x0e);
    load_dp(0x12);branch([this]{return !(p&Z);},"hundreds_visible");immediate(0x248,'x');jump("hundreds_palette",true);
    label("hundreds_visible");immediate(0x200,'x');label("hundreds_palette");
    load_dp(4);cmp_imm(9);branch([this]{return !(p&Z);},"hundreds_static");cmp_imm(0,'y');branch([this]{return !(p&Z);},"hundreds_animation");
    label("hundreds_static");immediate(0,'y');label("hundreds_animation");store_dp(4,'y');
    load_dp(0x12);shift_reg(true);shift_reg(true);for(unsigned i=0;i<4;++i)shift_reg(false);store_dp(2);
    load_dp(0x12);shift_reg(false);shift_reg(false);carry(false);alu_dp(2,'a');carry(false);alu_dp(4,'a');store_dp(2,'x');carry(false);alu_dp(2,'a');carry(false);adc_imm(0x2400);
    transfer('a','x');store_dp(0x12,'x');push('x');load_dp(0x0e);transfer('a','x');pop();store_abs(0,'a','x');
    load_dp(0x0e);push();load_dp(0x12,'x');transfer('x','a');carry(false);adc_imm(16);pop('x');store_abs(6,'a','x');pld();ret(false);
}
}
