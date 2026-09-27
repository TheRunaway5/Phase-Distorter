// CPU contracts run against isolated memory rather than a game boot. These
// fixtures target width flags, addressing, arithmetic, stack, and control-flow
// behavior; they do not establish individual SNES bus phases.
#include "eb/cpu.hpp"
#include "eb/bus.hpp"
#include <cstdlib>
#include <iostream>
#include <vector>

static void check(bool ok,const char* message) {
    if(!ok) { std::cerr<<message<<'\n'; std::exit(1); }
}
int main() {
    std::vector<std::uint8_t> mem(0x1000000);
    eb::Cpu c(mem);
    mem[0xfffc]=0x34;mem[0xfffd]=0x12;c.reset();
    check(c.pc==0x1234 && c.e && c.p==0x34,"Reset vector and emulation state");
    c.execute<0x18>(0,1);c.execute<0xfb>(0,1);c.execute<0xc2>(0x30,2);
    check(!c.e && !(c.p&0x30),"CLC XCE REP enters 16-bit native mode");
    c.execute<0x18>(0,1);c.execute<0xa9>(0x7fff,3);c.execute<0x69>(1,3);
    check(c.a==0x8000 && (c.p&0xc3)==0xc0,"16-bit ADC signed overflow");
    c.execute<0xe2>(0x20,2);c.execute<0xa9>(0x42,2);
    check(c.a==0x8042,"8-bit LDA preserves accumulator high byte");
    c.execute<0xf8>(0,1);c.execute<0x18>(0,1);c.execute<0xa9>(0x99,2);c.execute<0x69>(1,2);
    check(c.a==0x8000 && (c.p&3)==3,"BCD 99 + 01 wraps and sets carry");
    c.execute<0xe9>(1,2);check(c.a==0x8099 && !(c.p&1),"BCD 00 - 01 borrows");
    c.execute<0xd8>(0,1);c.execute<0xc2>(0x30,2);
    c.s=0x1fff;c.pc=0xc08000;c.execute<0x22>(0xc12345,4);
    check(c.pc==0xc12345 && c.s==0x1ffc && mem[0x1fff]==0xc0 && mem[0x1ffe]==0x80 && mem[0x1ffd]==3,"JSL stack bytes");
    c.execute<0x6b>(0,1);check(c.pc==0xc08004 && c.s==0x1fff,"RTL returns across banks");
    c.d=0x200;c.x=0x1234;c.y=0;c.execute<0x9b>(0,1);check(c.y==0x1234,"TXY width follows index flag");
    c.execute<0xe2>(0x10,2);check(c.x==0x34 && c.y==0x34,"SEP X clears high index bytes");
    c.execute<0xc2>(0x10,2); c.a=2;c.x=0xfffe;c.y=0x100;c.pc=0xc08000;
    mem[0x01fffe]=0xaa;mem[0x01ffff]=0xbb;mem[0x010000]=0xcc;
    c.execute<0x54>(0x0102,3);c.execute<0x54>(0x0102,3);c.execute<0x54>(0x0102,3);
    check(mem[0x020100]==0xaa && mem[0x020101]==0xbb && mem[0x020102]==0xcc && c.pc==0xc08003 && c.a==0xffff,"MVN copies, wraps X, and repeats source instruction");
    c.pc=0xc08000;c.s=0x1fff;c.p=0x08;mem[0xffea]=0x10;mem[0xffeb]=0x90;c.interrupt(true);
    check(c.pc==0x9010 && c.s==0x1ffb && (c.p&0x0c)==4,"Native NMI pushes bank and disables decimal mode");
    c.execute<0x40>(0,1);check(c.pc==0xc08000 && c.s==0x1fff && c.p==8,"RTI restores native state");
    c.e=true;c.p=0x34;c.d=0x1200;c.x=1;c.pc=0x8000;mem[0x1200]=0x56;mem[0x1300]=0x78;
    c.execute<0xb5>(0xff,2);check((c.a&255)==0x56,"Emulation direct indexed page wrap");
    // Integrated timing keeps architectural cycles independent of cartridge
    // speed and uses each explicitly accessed region's master-clock rate.
    std::vector<std::uint8_t> rom(0x300000);
    eb::Bus bus(rom); eb::Cpu timed(bus); timed.pc=0xc00000;
    auto before=bus.master_clocks(); timed.execute<0xea>(0,1);
    check(bus.master_clocks()-before==14 && timed.cycles==2,"Slow-ROM NOP is one eight-clock fetch plus six-clock internal cycle");
    bus.write(0x420d,1); before=bus.master_clocks(); timed.execute<0xea>(0,1);
    check(bus.master_clocks()-before==12 && timed.cycles==4,"Fast-ROM NOP changes master clocks without changing architectural cycles");
    before=bus.master_clocks(); timed.execute<0xaf>(0x7e0000,4);
    check(bus.master_clocks()-before==32,"Long LDA charges slow WRAM data access with fast instruction fetches");
    before=bus.master_clocks(); timed.execute<0xad>(0x4016,3);
    check(bus.master_clocks()-before==30,"Controller serial-port access consumes twelve master clocks");
    timed.e=false;timed.p=0x10;
    before=bus.master_clocks(); timed.execute<0xaf>(0x7e0000,4);
    check(bus.master_clocks()-before==40,"Wide LDA charges both WRAM byte accesses");
    before=bus.master_clocks(); timed.interrupt(true);
    check(bus.master_clocks()-before==60,"Native NMI includes discarded fetch, four stack writes and two vector reads");
    std::cout<<"CPU semantic checks passed\n";
}
