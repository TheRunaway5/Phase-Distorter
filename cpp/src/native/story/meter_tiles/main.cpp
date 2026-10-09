#include "execution.hpp"
#include <stdexcept>
namespace eb::native::story {
void SourceMeterTiles::Execution::build_main() {
    if(boundary==SourceMeterTilesBoundary::WindowSetup) {
        sep(A8);immediate(1);
        add({4,3,1,0},[this]{meters.state().upload=1;receipt.upload_started=true;});
        // The genuine external C1 JSL belongs only to this boundary. Its
        // matching body RTL below restores the declared caller S1FFF.
        add({8,4,3,0},[this]{s=std::uint16_t(s-3);});
    }
    rep(0x31);phd();transfer('d','a');adc_imm(0xffde);transfer('a','d');
    load_abs(render_base());and_imm(255);long_equal("finish","render_enabled");
    load_abs(2);and_imm(255);and_imm(3);store_dp(0x20);
    if(jp){carry(false);adc_imm(0x9aa9);transfer('a','x');load_abs(0x77,'a','x');}
    else {immediate(order_base(),'y');load_indirect(0x20);}
    and_imm(255);long_equal("finish","member_present");and_imm(255);carry(false);adc_imm(4,true);
    branch([this]{return p&V;},"guest_overflow");branch([this]{return p&N;},"chosen");jump("finish");
    label("guest_overflow");branch([this]{return !(p&N);},"chosen");jump("finish");label("chosen");
    load_dp(0x20,'y');sep(I8);load_abs(jp?0x993f:0x9647);call("mask",true);and_imm(1);
    long_equal("finish","drawn");load_abs(std::uint16_t(render_base()+1));alu_dp(0x20,'c');
    branch([this]{return !(p&Z);},"unselected");immediate(18);jump("row",true);label("unselected");immediate(19);
    label("row");optimized_mult(4,32);carry(false);adc_imm(96);store_dp(2);
    load_abs(count_base());and_imm(255);optimized_mult(4,7);push();shift_reg(false);pop();shift_reg(true,true);store_dp(4);
    immediate(16);carry(true);alu_dp(4,'s');carry(false);alu_dp(2,'a');inc_reg();inc_reg();inc_reg();store_dp(0x1e);
    load_dp(0x20);optimized_mult(4,7);store_dp(2);load_dp(0x1e);carry(false);alu_dp(2,'a');store_dp(0x1c);
    shift_reg(false);carry(false);adc_imm(bg2());store_dp(4);store_dp(0x1a);
    load_dp(0x1c);carry(false);adc_imm(0x7c00);store_dp(0x1c);
    if(jp){load_dp(0x20);carry(false);adc_imm(0x9aa9);rep(I8);transfer('a','x');load_abs(0x77,'a','x');}
    else {rep(I8);immediate(order_base(),'y');load_indirect(0x20);}
    and_imm(255);inc_reg('a',true);immediate(std::uint16_t(stride()),'y');call("mult_low",true);
    carry(false);adc_imm(party_base());store_dp(0x18);immediate(std::uint16_t(hp_fraction()),'y');load_indirect(0x18);
    store_dp(0x16);and_imm(1);long_equal("hp_inactive","hp_active");load_dp(0x16);transfer('a','y');store_dp(0x14,'y');
    immediate(std::uint16_t(hp_fraction()+2),'y');load_indirect(0x18);transfer('a','x');load_dp(0x20);load_dp(0x14,'y');call("hp",false);
    load_dp(0x20);optimized_mult(4,24);carry(false);adc_imm(digit());store_dp(2);
    load_abs(upload_base());and_imm(255);branch([this]{return !(p&Z);},"hp_copy_top_start");
    // Entry is upload1; no uncharged PREPARE/COPY path is admitted.
    // A pure entry/retained-lease gate excludes the absent upload0 child.
    label("hp_copy_top_start");load_dp(2,'y');immediate(0,'x');store_dp(0x1e,'x');jump("hp_copy_top_test",true);
    label("hp_copy_top");load_abs(0,'a','y');load_dp(0x1a,'x');store_dp(4,'x');store_abs(0,'a','x');
    inc_reg('y');inc_reg('y');rmw_dp(4,'i');rmw_dp(4,'i');load_dp(4);store_dp(0x1a);load_dp(0x1e,'x');inc_reg('x');store_dp(0x1e,'x');
    label("hp_copy_top_test");cmp_imm(3,'x');branch([this]{return !(p&Z);},"hp_copy_top");
    load_dp(0x1a);store_dp(4);carry(false);adc_imm(58);store_dp(0x1e);immediate(0,'x');store_dp(0x14,'x');jump("hp_copy_bottom_test",true);
    label("hp_copy_bottom");transfer('a','x');load_abs(0,'a','y');store_abs(0,'a','x');inc_reg('y');inc_reg('y');
    load_dp(0x1e);inc_reg();inc_reg();store_dp(0x1e);load_dp(0x14,'x');inc_reg('x');store_dp(0x14,'x');
    label("hp_copy_bottom_test");cmp_imm(3,'x');branch([this]{return !(p&Z);},"hp_copy_bottom");
    carry(false);adc_imm(58);store_dp(4);store_dp(0x1a);jump("pp_begin",true);
    label("hp_inactive");load_dp(4);carry(false);adc_imm(128);store_dp(4);store_dp(0x1a);
    label("pp_begin");immediate(std::uint16_t(hp_fraction()+6),'y');load_indirect(0x18);store_dp(0x16);and_imm(1);
    long_equal("upload_finish","pp_active");load_dp(0x16);store_dp(0x0e);
    immediate(std::uint16_t(hp_fraction()+8),'y');load_indirect(0x18);transfer('a','y');load_dp(0x18);carry(false);
    adc_imm(jp?0x0d:0x0e);transfer('a','x');load_dp(0x20);call("pp",false);
    load_dp(0x20);optimized_mult(4,24);carry(false);adc_imm(std::uint16_t(digit()+12));store_dp(2);
    load_abs(upload_base());and_imm(255);branch([this]{return !(p&Z);},"pp_copy_top_start");
    label("pp_copy_top_start");load_dp(2);store_dp(0x12);immediate(0,'x');store_dp(0x1e,'x');jump("pp_copy_top_test",true);
    label("pp_copy_top");transfer('a','x');load_abs(0,'a','x');load_dp(0x1a,'x');store_dp(4,'x');store_abs(0,'a','x');
    load_dp(0x12);inc_reg();inc_reg();store_dp(0x12);rmw_dp(4,'i');rmw_dp(4,'i');load_dp(4,'x');store_dp(0x1a,'x');
    load_dp(0x1e,'x');inc_reg('x');store_dp(0x1e,'x');label("pp_copy_top_test");cmp_imm(3,'x');branch([this]{return !(p&Z);},"pp_copy_top");
    load_dp(0x1a);store_dp(4);carry(false);adc_imm(58);transfer('a','y');immediate(0,'x');store_dp(0x1e,'x');jump("pp_copy_bottom_test",true);
    label("pp_copy_bottom");load_dp(0x12);transfer('a','x');load_abs(0,'a','x');store_abs(0,'a','y');
    load_dp(0x12);inc_reg();inc_reg();store_dp(0x12);inc_reg('y');inc_reg('y');load_dp(0x1e,'x');inc_reg('x');store_dp(0x1e,'x');
    label("pp_copy_bottom_test");cmp_imm(3,'x');branch([this]{return !(p&Z);},"pp_copy_bottom");
    label("upload_finish");load_abs(upload_base());and_imm(255);branch([this]{return p&Z;},"finish");sep(A8);add({4,3,1,0},[this]{meters.state().upload=0;receipt.upload_cleared=true;});
    label("finish");rep(A8|I8);pld();add({6,1,3,0},[this]{
        if(!returns.empty()||!saved_d.empty()||!saved_values.empty())throw std::logic_error("Source meter artwork retained an unfinished child frame");
        s=std::uint16_t(s+3);receipt.completed=true;
    });
    label("mask_shift");shift_reg(true);label("mask");inc_reg('y',true);branch([this]{return !(p&N);},"mask_shift");ret(true);
}
void SourceMeterTiles::Execution::build_mult() {
    label("mult_low");if(!jp)rep(I8);
    add({3,1,0,0},[this]{a=std::uint16_t((a<<8)|(a>>8));nz(std::uint8_t(a),true);});
    branch([this]{return p&Z;},"mult_product");
    // Pure all-member admission proves the following branch is always taken.
    label("mult_product");sep(A8);transfer('y','a');rep(A8);add({6,4,0,0},[this]{hardware.begin_source_multiply(a);});
    add({2,1,0,0});add({2,1,0,0});add({6,4,0,0},[this]{load(hardware.product());});ret(true);
}
}
