#include "execution.hpp"
namespace eb::native::story {
void SourceMeterStatus::Execution::build_suffix() {
    load_abs(disabled_base());branch([this]{return !(p&Z);},"suffix_done");
    call("status",false);cmp_imm(0);branch([this]{return p&Z;},"suffix_done");call("palette",true);
    label("suffix_done");finished=unsigned(atoms.size());
}
void SourceMeterStatus::Execution::build_status() {
    label("status");rep(0x31);load_abs(count_base());and_imm(255);
    if(jp){inc_reg('a',true);carry(false);adc_imm(0x9aa9);transfer('a','x');load_abs(0x99,'a','x');}
    else{transfer('a','x');inc_reg('x',true);load_abs(controlled_base(),'a','x');}
    and_imm(255);shift();transfer('a','x');load_abs(pointer_base(),'a','x');transfer('a','x');
    sep(0x20);load_abs(jp?0x0d:0x0e,'a','x');immediate(0,'x');rep(0x20);and_imm(255);
    cmp_imm(1);branch([this]{return p&Z;},"status_incapacitated");cmp_imm(2);branch([this]{return !(p&Z);},"status_selected");
    label("status_incapacitated");immediate(1,'x');label("status_selected");
    immediate(0);cmp_abs(cache_base(),'x');branch([this]{return p&Z;},"status_store");immediate(1);
    label("status_store");store_abs(cache_base(),'x');ret(false);
}
}
