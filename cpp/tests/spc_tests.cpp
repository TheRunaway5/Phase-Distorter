// Isolated SPC700 contracts complement the external instruction-vector runner.
// Directly controlled RAM/registers make arithmetic and I/O behavior testable
// independently of the game sound driver or an audio playback device.
#include "eb/spc.hpp"
#include "eb/bus.hpp"
#include <array>
#include <cstdlib>
#include <iostream>
#include <stdexcept>

#ifdef EB_SPC_STANDALONE_TEST
namespace eb { bool spc_translated_step(Spc&) { return false; } }
#endif

namespace {
unsigned checks=0;
std::array<uint8_t,65536> cartridge{};
void check(bool condition,const char* message) {
    ++checks;
    if (!condition) { std::cerr<<"FAIL: "<<message<<'\n'; std::exit(1); }
}
template<class Predicate> void run_until(eb::Spc& s,Predicate predicate) {
    for (unsigned i=0;i<10000 && !predicate();++i) s.step();
    check(predicate(),"SPC instruction execution reaches expected event");
}

void ipl_upload() {
    eb::Bus b(cartridge); eb::Spc s(b);
    s.ram.fill(0x5a);
    run_until(s,[&] { return b.apu_to_cpu[0]==0xaa && b.apu_to_cpu[1]==0xbb; });
    check(s.ram[1]==0 && s.ram[0xef]==0 && s.ram[0x100]==0x5a,"IPL real zero-fill loop covers only intended RAM");
    b.cpu_to_apu={0xcc,1,0,2};
    run_until(s,[&] { return b.apu_to_cpu[0]==0xcc; });
    constexpr uint8_t data[]={0xe8,0x42,0xc4,0xf4};
    for (unsigned i=0;i<4;++i) {
        b.cpu_to_apu[1]=data[i]; b.cpu_to_apu[0]=i;
        run_until(s,[&] { return b.apu_to_cpu[0]==i; });
    }
    for (unsigned i=0;i<10;++i) s.step();
    check(s.ram[0x200]==0xe8 && s.ram[0x201]==0x42 && s.ram[0x202]==0xc4 && s.ram[0x203]==0xf4,"IPL transfers actual CPU port bytes to RAM");
    b.cpu_to_apu={7,0,0,2};
    run_until(s,[&] { return s.pc==0x200; });
    check(b.apu_to_cpu[0]==7 && s.sp==0xef && s.x==0 && s.y==0,"IPL exit acknowledges command and jumps via uploaded pointer");
}

void arithmetic() {
    eb::Bus b(cartridge); eb::Spc s(b);
    for (unsigned operation=0;operation<2;++operation)
        for (unsigned left=0;left<256;++left) for (unsigned right=0;right<256;++right) for (unsigned carry=0;carry<2;++carry) {
            s.a=left; s.p=carry;
            if (operation) s.execute<0xa8>(right,2); else s.execute<0x88>(right,2);
            const int result=operation ? int(left)-int(right)-int(1-carry) : int(left)+int(right)+int(carry);
            const uint8_t value=result;
            unsigned expected=(value==0?eb::Spc::Z:0)|(value&0x80);
            if (operation ? result>=0 : result>255) expected|=eb::Spc::C;
            if (operation ? int(left&15)-int(right&15)-int(1-carry)>=0 : (left&15)+(right&15)+carry>15) expected|=eb::Spc::H;
            if (((operation?(left^right):~(left^right))&(left^value)&0x80)) expected|=eb::Spc::V;
            if (s.a!=value || s.p!=expected) check(false,"exhaustive ADC/SBC result and N/V/H/Z/C");
        }
    check(true,"exhaustive ADC/SBC all input bytes and carries");
    s.a=0xff; s.y=0x7f; s.p=0; s.ram[0x20]=1; s.ram[0x21]=0; s.execute<0x7a>(0x20,2);
    check(s.a==0 && s.y==0x80 && (s.p&(eb::Spc::N|eb::Spc::V|eb::Spc::H))==(eb::Spc::N|eb::Spc::V|eb::Spc::H),"ADDW full-width carry boundaries");
    s.execute<0x9a>(0x20,2); check(s.a==255 && s.y==127 && (s.p&eb::Spc::V) && (s.p&eb::Spc::C),"SUBW overflow and no borrow");
    s.a=0xff; s.y=0xff; s.p=0; s.execute<0xcf>(0,1);
    check(s.a==1 && s.y==0xfe && (s.p&eb::Spc::N),"MUL result and flags on Y");
    s.a=0x34; s.y=0x12; s.x=0x20; s.execute<0x9e>(0,1);
    check(s.a==0x91 && s.y==0x14 && !(s.p&eb::Spc::V),"DIV regular quotient/remainder");
    s.a=0x34; s.y=0x12; s.x=0; s.execute<0x9e>(0,1);
    check(s.a==0xed && s.y==0x34 && (s.p&eb::Spc::V),"DIV zero follows silicon overflow algorithm");
    s.a=0x9a; s.p=0; s.execute<0xdf>(0,1);
    check(s.a==0 && (s.p&eb::Spc::C) && (s.p&eb::Spc::Z),"DAA decimal carry");
    s.a=0xff; s.p=0; s.execute<0xbe>(0,1);
    check(s.a==0x99 && !(s.p&eb::Spc::C),"DAS decimal borrow");
}

void addressing_control() {
    eb::Bus b(cartridge); eb::Spc s(b);
    s.p=eb::Spc::P; s.x=2; s.ram[0x100]=0xa5; s.ram[0x200]=0x5a;
    s.execute<0xf4>(0xfe,2); check(s.a==0xa5,"direct-page indexed offset wraps inside page");
    s.ram[0x1ff]=0x34; s.ram[0x100]=0x12; s.ram[0x1234]=0x6b; s.x=0;
    s.execute<0xe7>(0xff,2); check(s.a==0x6b,"indirect direct-page pointer wraps inside page");
    s.pc=0x200; s.sp=0xef; s.execute<0x3f>(0x4321,3);
    check(s.pc==0x4321 && s.sp==0xed && s.ram[0x1ef]==2 && s.ram[0x1ee]==3,"CALL pushes exact return address high then low");
    s.execute<0x6f>(0,1); check(s.pc==0x203 && s.sp==0xef,"RET restores exact call continuation");
    s.p=0; s.pc=0x300; auto before=s.cycles; s.execute<0xd0>(0xfc,2);
    check(s.pc==0x2fe && s.cycles-before==4,"taken relative branch sign and timing");
    s.p=eb::Spc::Z; before=s.cycles; s.execute<0xd0>(0xfc,2);
    check(s.pc==0x300 && s.cycles-before==2,"untaken branch timing");
    s.ram[0x20]=0; s.execute<0xe2>(0x20,2); check(s.ram[0x20]==0x80,"SET1 high bit");
    s.execute<0xf2>(0x20,2); check(s.ram[0x20]==0,"CLR1 high bit");
    s.p=eb::Spc::C; s.execute<0xca>(0x6123,3); check(s.ram[0x123]==8,"MOV1 encoded 13-bit address plus bit selector");
    s.execute<0xea>(0x6123,3); check(s.ram[0x123]==0,"NOT1 encoded memory bit");
    s.y=1; s.p=0x82; s.pc=0x400; s.execute<0xfe>(0x80,2);
    check(s.y==0 && s.pc==0x402 && s.p==0x82,"DBNZ preserves all status flags");
}

void io_timers() {
    eb::Bus b(cartridge); eb::Spc s(b);
    b.write(0x2140,0x55); s.write(0xf4,0xaa);
    check(s.read(0xf4)==0x55 && b.read(0x2140)==0xaa,"SPC independent communication directions");
    s.write(0xf1,0x90); check(s.read(0xf4)==0 && b.read(0x2140)==0xaa,"SPC input clear does not clear output");
    s.write(0xffc0,0x42); check(s.read(0xffc0)==0xcd,"IPL overlays RAM on reads only");
    s.write(0xf1,0); check(s.read(0xffc0)==0x42,"disabling IPL reveals RAM write");
    s.write(0xf2,0x0c); s.write(0xf3,0x7f); s.write(0xf2,0x8c); s.write(0xf3,0x11);
    check(s.read(0xf3)==0x7f,"DSP upper-address mirrors are read-only");
    s.write(0xfa,2); s.write(0xfc,0); s.write(0xf1,5);
    for (unsigned i=0;i<128;++i) s.execute<0x00>(0,1);
    check(s.read(0xfd)==1 && s.read(0xfd)==0,"timer0 prescaler/target and destructive output read");
    for (unsigned i=0;i<1920;++i) s.execute<0x00>(0,1);
    check(s.read(0xff)==1,"timer2 zero target means 256 ticks");
    check(s.read(0xfd)==15,"timer0 output is four-bit accumulation");
    for (unsigned i=0;i<128;++i) s.execute<0x00>(0,1);
    s.a=0x42; s.p=0; s.execute<0xc4>(0xfd,2);
    check(s.read(0xfd)==0,"MOV store dummy read clears timer output");
}

void complete_opcode_coverage() {
    eb::Bus b(cartridge); eb::Spc s(b);
    for (unsigned opcode=0;opcode<256;++opcode) {
        s.pc=0x800; s.a=0x22; s.x=3; s.y=4; s.p=0; s.sp=0xef; s.stopped=s.sleeping=false;
        s.execute_opcode(opcode,0x2020,3);
    }
    check(s.instructions==256,"all 256 static semantic helpers are defined");
}
}
int main() {
    ipl_upload(); arithmetic(); addressing_control(); io_timers(); complete_opcode_coverage();
    std::cout<<"spc: "<<checks<<" checks passed (including exhaustive 8-bit ADC/SBC)\n";
}
