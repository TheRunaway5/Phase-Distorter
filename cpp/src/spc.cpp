#include "eb/spc.hpp"
#include "eb/bus.hpp"

#include <iomanip>
#include <sstream>
#include <stdexcept>

namespace eb {
namespace {
// The IPL is the hardware's fixed boot ROM, also exposed to SPC data reads.
// Instruction execution at these addresses uses ipl_step's explicit sites;
// these bytes are never decoded to choose a runtime instruction.
constexpr uint8_t ipl[64]={
    0xcd,0xef,0xbd,0xe8,0x00,0xc6,0x1d,0xd0,0xfc,0x8f,0xaa,0xf4,0x8f,0xbb,0xf5,0x78,
    0xcc,0xf4,0xd0,0xfb,0x2f,0x19,0xeb,0xf4,0xd0,0xfc,0x7e,0xf4,0xd0,0x0b,0xe4,0xf5,
    0xcb,0xf4,0xd7,0x00,0xfc,0xd0,0xf3,0xab,0x01,0x10,0xef,0x7e,0xf4,0x10,0xeb,0xba,
    0xf6,0xda,0x00,0xba,0xf4,0xc4,0xf4,0xdd,0x5d,0xd0,0xdb,0x1f,0x00,0x00,0xc0,0xff};
// Base SPC-cycle costs. Taken conditional branches add their two-cycle cost
// in execute_opcode, then advance clocks the timers and DSP together.
constexpr uint8_t timings[256]={
    2,8,4,5,3,4,3,6,2,6,5,4,5,4,6,8, 2,8,4,5,4,5,5,6,5,5,6,5,2,2,4,6,
    2,8,4,5,3,4,3,6,2,6,5,4,5,4,5,4, 2,8,4,5,4,5,5,6,5,5,6,5,2,2,3,8,
    2,8,4,5,3,4,3,6,2,6,4,4,5,4,6,6, 2,8,4,5,4,5,5,6,5,5,4,5,2,2,4,3,
    2,8,4,5,3,4,3,6,2,6,4,4,5,4,5,5, 2,8,4,5,4,5,5,6,5,5,5,5,2,2,3,6,
    2,8,4,5,3,4,3,6,2,6,5,4,5,2,4,5, 2,8,4,5,4,5,5,6,5,5,5,5,2,2,12,5,
    3,8,4,5,3,4,3,6,2,6,4,4,5,2,4,4, 2,8,4,5,4,5,5,6,5,5,5,5,2,2,3,4,
    3,8,4,5,4,5,4,7,2,5,6,4,5,2,4,9, 2,8,4,5,5,6,6,7,4,5,5,5,2,2,6,3,
    2,8,4,5,3,4,3,6,2,4,5,3,4,3,4,3, 2,8,4,5,4,5,5,6,3,4,5,4,2,2,4,3};
}

Spc::Spc(Bus& bus):bus_(&bus) {
    dsp[0x6c]=0xe0;
    bus_->apu_tick=[this](unsigned clocks) { tick(clocks); };
}
Spc::Spc(std::span<uint8_t> flat_memory):flat_(flat_memory) {
    if (flat_.size()!=65536) throw std::invalid_argument("SPC flat memory must contain 65536 bytes");
}
Spc::~Spc() { if (bus_) bus_->apu_tick={}; }
// The IPL overlay affects reads only while CONTROL.7 is set; underlying RAM
// remains available for writes. The F0..FF range selects hardware registers,
// so a read there may consume timer output rather than just inspect memory.
uint8_t Spc::read(uint16_t address) {
    if (!flat_.empty()) return flat_[address];
    if (address>=0xffc0 && (control_&0x80)) return ipl[address-0xffc0];
    if (address<0xf0 || address>0xff) return ram[address];
    if (address>=0xf4 && address<=0xf7) return bus_->cpu_to_apu[address-0xf4];
    if (address>=0xfd) { const auto i=address-0xfd; const auto value=timer_output_[i]; timer_output_[i]=0; return value; }
    switch (address) {
    case 0xf0: case 0xf1: case 0xfa: case 0xfb: case 0xfc: return 0;
    case 0xf2: return dsp_address_;
    case 0xf3: return dsp_read?dsp_read(dsp_address_&127):dsp[dsp_address_&127];
    default: return ram[address];
    }
}
// Keep port direction and RAM write gating separate: TEST can suppress the
// backing RAM write without suppressing a register's hardware side effects.
void Spc::write(uint16_t address,uint8_t value) {
    if (observe_write) observe_write(address,value);
    if (!flat_.empty()) { flat_[address]=value; return; }
    if (test_&2) ram[address]=value;
    if (address<0xf0 || address>0xff) return;
    if (address>=0xf4 && address<=0xf7) { bus_->apu_to_cpu[address-0xf4]=value; return; }
    if (address>=0xfa && address<=0xfc) { timer_target_[address-0xfa]=value; return; }
    switch (address) {
    case 0xf0: if (!(p&P)) test_=value; break;
    // Enabling a timer starts a fresh target count/output, but does not reset
    // its free-running prescaler. Port-clear bits affect CPU-to-APU latches.
    case 0xf1:
        for (unsigned i=0;i<3;++i) if ((value&(1<<i)) && !(control_&(1<<i))) { timer_counter_[i]=0; timer_output_[i]=0; }
        if (value&0x10) bus_->cpu_to_apu[0]=bus_->cpu_to_apu[1]=0;
        if (value&0x20) bus_->cpu_to_apu[2]=bus_->cpu_to_apu[3]=0;
        control_=value; break;
    case 0xf2: dsp_address_=value; break;
    case 0xf3:
        if (dsp_address_<128) {
            // ENDX acknowledges on any write. Other DSP behavior requires the DSP processor.
            dsp[dsp_address_]=dsp_address_==0x7c?0:value;
            if (dsp_write) dsp_write(dsp_address_,value);
        }
        break;
    default: break;
    }
}
uint16_t Spc::read_word(uint16_t address) { const auto lo=read(address); return lo|(read(uint16_t(address+1))<<8); }
// Direct-page words wrap the low byte inside the selected page (P chooses
// page 0 or 1). Absolute words instead wrap only at the end of the 64 KiB RAM.
uint16_t Spc::read_dp_word(uint8_t address) { const auto lo=read(dp(address)); return lo|(read(dp(uint8_t(address+1)))<<8); }
void Spc::push(uint8_t value) { write(0x100|sp,value); --sp; }
uint8_t Spc::pull() { ++sp; return read(0x100|sp); }
void Spc::push_word(uint16_t value) { push(value>>8); push(value); }
uint16_t Spc::pull_word() { const auto lo=pull(); return lo|(pull()<<8); }

// Timers 0/1 divide by 128 and timer 2 by 16 before their target comparison.
// The uint8_t counter intentionally wraps: target zero denotes 256 pulses.
// Outputs wrap at four bits and are cleared only by their register reads.
void Spc::advance(unsigned elapsed) {
    cycles+=elapsed;
    if (dsp_tick) dsp_tick(elapsed);
    for (unsigned i=0;i<3;++i) {
        const unsigned period=i==2?16:128;
        timer_prescaler_[i]+=elapsed;
        while (timer_prescaler_[i]>=period) {
            timer_prescaler_[i]-=period;
            if ((control_&(1<<i)) && (test_&8) && !(test_&1)) {
                if (++timer_counter_[i]==timer_target_[i]) { timer_counter_[i]=0; timer_output_[i]=(timer_output_[i]+1)&15; }
            }
        }
    }
}
void Spc::tick(unsigned clocks) {
    // Preserve the fractional asynchronous 1.024 MHz clock without drift.
    clock_balance_+=int64_t(clocks)*1024000;
    while (clock_balance_>0) {
        const auto before=cycles;
        if (stopped || sleeping) advance(2); else step();
        clock_balance_-=int64_t(cycles-before)*21477272;
    }
}
std::string Spc::describe() const {
    std::ostringstream s;
    s<<std::hex<<std::setfill('0')<<"SPC PC="<<std::setw(4)<<pc<<" A="<<std::setw(2)<<unsigned(a)
     <<" X="<<std::setw(2)<<unsigned(x)<<" Y="<<std::setw(2)<<unsigned(y)<<" SP="<<std::setw(2)<<unsigned(sp)
     <<" P="<<std::setw(2)<<unsigned(p);
    return s.str();
}
// Source execution is deliberately closed: an unknown PC fails with the
// register state instead of interpreting RAM as a fallback. This makes missing
// translation coverage observable during gameplay and regression runs.
void Spc::step() {
    if (stopped || sleeping) { advance(2); return; }
    if (pc>=0xffc0 && (control_&0x80)) { if (ipl_step()) return; }
    else if (spc_translated_step(*this)) return;
    throw std::runtime_error("untranslated SPC instruction: "+describe());
}

// OR/AND/XOR/CMP/ADC/SBC share their flag rules across addressing families.
// CMP returns the subtraction result for N/Z but callers suppress its write;
// ADC/SBC additionally expose the nibble carry used by decimal adjustment.
uint8_t Spc::alu(unsigned operation,uint8_t left,uint8_t right) {
    uint8_t value=left;
    switch (operation) {
    case 0: value=left|right; break;
    case 1: value=left&right; break;
    case 2: value=left^right; break;
    case 3: value=left-right; flag(C,left>=right); break;
    case 4: {
        const unsigned carry=(p&C)?1:0, result=unsigned(left)+right+carry;
        value=result;
        flag(C,result>255); flag(H,(left&15)+(right&15)+carry>15); flag(V,~(left^right)&(left^value)&0x80); break;
    }
    case 5: {
        const int borrow=(p&C)?0:1, result=int(left)-right-borrow;
        value=result;
        flag(C,result>=0); flag(H,int(left&15)-int(right&15)-borrow>=0); flag(V,(left^right)&(left^value)&0x80); break;
    }
    default: throw std::logic_error("invalid SPC ALU operation");
    }
    nz(value); return value;
}

void Spc::execute_opcode(uint8_t op,uint16_t operand,unsigned length) {
    pc=uint16_t(pc+length); ++instructions;
    unsigned elapsed=timings[op];
    const uint8_t lo=operand, hi=operand>>8;
    const auto branch=[&](bool take,uint8_t displacement) { if(take) { pc=uint16_t(pc+int8_t(displacement)); elapsed+=2; } };
    // SPC store forms perform a dummy destination read first. Do not elide it:
    // a destination in F0..FF can acknowledge a timer or read an I/O latch.
    const auto store=[&](uint16_t addr,uint8_t value) { (void)read(addr); write(addr,value); };
    // The matrix groups repeated semantic families by opcode bits. This op
    // value comes from a generated call site, never from an instruction fetch;
    // lo/hi retain source operand order even for memory-to-memory operations.
    const unsigned low=op&31;
    if ((op&15)==1) { push_word(pc); pc=read_word(0xffde - (op>>4)*2); }
    else if ((op&15)==2) {
        const auto address=dp(lo); const uint8_t value=read(address), mask=1<<(op>>5);
        write(address,(op&16)?value&~mask:value|mask);
    } else if ((op&15)==3) {
        const bool bit=read(dp(lo))&(1<<(op>>5)); branch((op&16)?!bit:bit,hi);
    } else if (low==16) {
        const Flag selected[]={N,V,C,Z}; const bool set=p&selected[op>>6];
        branch((op&0x20)?set:!set,lo);
    } else if (op<0xc0 && (low==4 || low==5 || low==6 || low==7 || low==8 || low==9 ||
                           low==0x14 || low==0x15 || low==0x16 || low==0x17 || low==0x18 || low==0x19)) {
        const unsigned operation=op>>5;
        uint16_t destination=0;
        uint8_t left=a,right=0;
        bool memory=false;
        switch (low) {
        case 4: right=read(dp(lo)); break;
        case 5: right=read(operand); break;
        case 6: right=read(dp(x)); break;
        case 7: right=read(read_dp_word(uint8_t(lo+x))); break;
        case 8: right=lo; break;
        case 9: right=read(dp(lo)); destination=dp(hi); left=read(destination); memory=true; break;
        case 0x14: right=read(dp(uint8_t(lo+x))); break;
        case 0x15: right=read(uint16_t(operand+x)); break;
        case 0x16: right=read(uint16_t(operand+y)); break;
        case 0x17: right=read(uint16_t(read_dp_word(lo)+y)); break;
        case 0x18: right=lo; destination=dp(hi); left=read(destination); memory=true; break;
        case 0x19: right=read(dp(y)); destination=dp(x); left=read(destination); memory=true; break;
        }
        const auto value=alu(operation,left,right);
        if (operation!=3) { if (memory) write(destination,value); else a=value; }
    } else if (op<0xc0 && (low==0x0b || low==0x0c || low==0x1b || low==0x1c)) {
        const unsigned operation=op>>5;
        const uint16_t address=low==0x0c?operand:dp(low==0x1b?uint8_t(lo+x):lo);
        uint8_t value=low==0x1c?a:read(address);
        const bool carry=p&C;
        switch (operation) {
        case 0: flag(C,value&0x80); value<<=1; break;
        case 1: flag(C,value&0x80); value=uint8_t((value<<1)|carry); break;
        case 2: flag(C,value&1); value>>=1; break;
        case 3: flag(C,value&1); value=uint8_t((value>>1)|(carry?0x80:0)); break;
        case 4: --value; break;
        case 5: ++value; break;
        }
        nz(value); if (low==0x1c) a=value; else write(address,value);
    } else switch (op) {
    case 0x00: break;
    case 0x0a: case 0x2a: case 0x4a: case 0x6a: case 0x8a: case 0xaa: case 0xca: case 0xea: {
        const uint16_t address=operand&0x1fff; const uint8_t mask=1<<(operand>>13), value=read(address);
        const bool bit=value&mask, carry=p&C;
        switch (op) {
        case 0x0a: flag(C,carry||bit); break; case 0x2a: flag(C,carry||!bit); break;
        case 0x4a: flag(C,carry&&bit); break; case 0x6a: flag(C,carry&&!bit); break;
        case 0x8a: flag(C,carry!=bit); break; case 0xaa: flag(C,bit); break;
        case 0xca: write(address,carry?value|mask:value&~mask); break;
        case 0xea: write(address,value^mask); break;
        } break;
    }
    case 0x0d: push(p); break; case 0x2d: push(a); break; case 0x4d: push(x); break; case 0x6d: push(y); break;
    case 0x8e: p=pull(); break; case 0xae: a=pull(); break; case 0xce: x=pull(); break; case 0xee: y=pull(); break;
    case 0x0e: case 0x4e: { const auto v=read(operand); nz(uint8_t(a-v)); write(operand,op==0x0e?v|a:v&~a); break; }
    case 0x0f: push_word(pc); push(p); flag(B,true); flag(I,false); pc=read_word(0xffde); break;
    case 0x1a: case 0x3a: {
        const auto v=uint16_t(read_dp_word(lo)+(op==0x1a?-1:1));
        write(dp(lo),v); write(dp(uint8_t(lo+1)),v>>8); nz16(v); break;
    }
    case 0x1d: --x; nz(x); break; case 0x3d: ++x; nz(x); break;
    case 0x1e: alu(3,x,read(operand)); break; case 0x3e: alu(3,x,read(dp(lo))); break;
    case 0x5e: alu(3,y,read(operand)); break; case 0x7e: alu(3,y,read(dp(lo))); break;
    case 0xc8: alu(3,x,lo); break; case 0xad: alu(3,y,lo); break;
    case 0x1f: pc=read_word(uint16_t(operand+x)); break;
    case 0x20: flag(P,false); break; case 0x40: flag(P,true); break;
    case 0x60: flag(C,false); break; case 0x80: flag(C,true); break;
    case 0xa0: flag(I,true); break; case 0xc0: flag(I,false); break;
    case 0xe0: flag(V,false); flag(H,false); break; case 0xed: flag(C,!(p&C)); break;
    case 0x2e: branch(a!=read(dp(lo)),hi); break; case 0xde: branch(a!=read(dp(uint8_t(lo+x))),hi); break;
    case 0x2f: pc=uint16_t(pc+int8_t(lo)); break;
    case 0x3f: push_word(pc); pc=operand; break; case 0x4f: push_word(pc); pc=0xff00|lo; break;
    case 0x5f: pc=operand; break;
    case 0x5a: case 0x7a: case 0x9a: {
        const uint16_t left=uint16_t(a|(y<<8)), right=read_dp_word(lo);
        const bool add=op==0x7a; const int result=add?int(left)+right:int(left)-right;
        const uint16_t value=result; flag(C,add?result>65535:result>=0); nz16(value);
        if (op!=0x5a) {
            flag(H,add?((left&0xfff)+(right&0xfff)>0xfff):((left&0xfff)>=(right&0xfff)));
            flag(V,(add?~(left^right):(left^right))&(left^value)&0x8000);
            a=value; y=value>>8;
        } break;
    }
    case 0x5d: x=a; nz(x); break; case 0x7d: a=x; nz(a); break;
    case 0x9d: x=sp; nz(x); break; case 0xbd: sp=x; break;
    case 0xdd: a=y; nz(a); break; case 0xfd: y=a; nz(y); break;
    case 0x6e: { const auto address=dp(lo); const auto v=uint8_t(read(address)-1); write(address,v); branch(v!=0,hi); break; }
    case 0x6f: pc=pull_word(); break; case 0x7f: p=pull(); pc=pull_word(); break;
    case 0x8d: y=lo; nz(y); break; case 0xcd: x=lo; nz(x); break; case 0xe8: a=lo; nz(a); break;
    case 0x8f: store(dp(hi),lo); break;
    // DIV YA,X has defined overflow behavior beyond ordinary integer division.
    // The alternate formula also handles X==0 without a host divide-by-zero.
    case 0x9e: {
        const unsigned ya=a|(y<<8); flag(H,(y&15)>=(x&15)); flag(V,y>=x);
        if (y<unsigned(x)*2) { a=ya/x; y=ya%x; }
        else { a=255-(ya-unsigned(x)*512)/(256-x); y=x+(ya-unsigned(x)*512)%(256-x); }
        nz(a); break;
    }
    case 0x9f: a=uint8_t((a<<4)|(a>>4)); nz(a); break;
    case 0xaf: write(dp(x),a); ++x; break;
    case 0xba: { const auto value=read_dp_word(lo); a=value; y=value>>8; nz16(value); break; }
    // DAS/DAA adjust a previous BCD subtraction/addition using its H/C flags.
    // They do not reuse the 65816 decimal ALU: these are separate SPC opcodes.
    case 0xbe:
        if (!(p&C)||a>0x99) { a-=0x60; flag(C,false); }
        if (!(p&H)||(a&15)>9) a-=6;
        nz(a); break;
    case 0xbf: a=read(dp(x)); ++x; nz(a); break;
    case 0xc4: store(dp(lo),a); break; case 0xc5: store(operand,a); break; case 0xc6: store(dp(x),a); break;
    case 0xc7: store(read_dp_word(uint8_t(lo+x)),a); break;
    case 0xc9: store(operand,x); break; case 0xcb: store(dp(lo),y); break; case 0xcc: store(operand,y); break;
    case 0xcf: { const auto result=unsigned(y)*a; a=result; y=result>>8; nz(y); break; }
    case 0xd4: store(dp(uint8_t(lo+x)),a); break; case 0xd5: store(uint16_t(operand+x),a); break;
    case 0xd6: store(uint16_t(operand+y),a); break; case 0xd7: store(uint16_t(read_dp_word(lo)+y),a); break;
    case 0xd8: store(dp(lo),x); break; case 0xd9: store(dp(uint8_t(lo+y)),x); break;
    case 0xda: (void)read(dp(lo)); write(dp(lo),a); write(dp(uint8_t(lo+1)),y); break;
    case 0xdb: store(dp(uint8_t(lo+x)),y); break;
    case 0xdc: --y; nz(y); break; case 0xfc: ++y; nz(y); break;
    case 0xdf:
        if ((p&C)||a>0x99) { a+=0x60; flag(C,true); }
        if ((p&H)||(a&15)>9) a+=6;
        nz(a); break;
    case 0xe4: a=read(dp(lo)); nz(a); break; case 0xe5: a=read(operand); nz(a); break;
    case 0xe6: a=read(dp(x)); nz(a); break; case 0xe7: a=read(read_dp_word(uint8_t(lo+x))); nz(a); break;
    case 0xe9: x=read(operand); nz(x); break; case 0xeb: y=read(dp(lo)); nz(y); break; case 0xec: y=read(operand); nz(y); break;
    case 0xef: sleeping=true; break;
    case 0xf4: a=read(dp(uint8_t(lo+x))); nz(a); break; case 0xf5: a=read(uint16_t(operand+x)); nz(a); break;
    case 0xf6: a=read(uint16_t(operand+y)); nz(a); break; case 0xf7: a=read(uint16_t(read_dp_word(lo)+y)); nz(a); break;
    case 0xf8: x=read(dp(lo)); nz(x); break; case 0xf9: x=read(dp(uint8_t(lo+y))); nz(x); break;
    case 0xfa: { const auto v=read(dp(lo)); write(dp(hi),v); break; }
    case 0xfb: y=read(dp(uint8_t(lo+x))); nz(y); break;
    case 0xfe: --y; branch(y!=0,lo); break;
    case 0xff: stopped=true; break;
    default: throw std::logic_error("SPC opcode semantic missing: "+std::to_string(op));
    }
    advance(elapsed);
}

bool Spc::ipl_step() {
    // Static translation of the original 64-byte S-SMP boot ROM (fullsnes IPL listing).
    // Its real load/store/branch instructions implement all upload handshakes.
    switch (pc) {
    case 0xffc0: execute<0xcd>(0xef,2); break;
    case 0xffc2: execute<0xbd>(0,1); break;
    case 0xffc3: execute<0xe8>(0,2); break;
    case 0xffc5: execute<0xc6>(0,1); break;
    case 0xffc6: execute<0x1d>(0,1); break;
    case 0xffc7: execute<0xd0>(0xfc,2); break;
    case 0xffc9: execute<0x8f>(0xf4aa,3); break;
    case 0xffcc: execute<0x8f>(0xf5bb,3); break;
    case 0xffcf: execute<0x78>(0xf4cc,3); break;
    case 0xffd2: execute<0xd0>(0xfb,2); break;
    case 0xffd4: execute<0x2f>(0x19,2); break;
    case 0xffd6: execute<0xeb>(0xf4,2); break;
    case 0xffd8: execute<0xd0>(0xfc,2); break;
    case 0xffda: execute<0x7e>(0xf4,2); break;
    case 0xffdc: execute<0xd0>(0x0b,2); break;
    case 0xffde: execute<0xe4>(0xf5,2); break;
    case 0xffe0: execute<0xcb>(0xf4,2); break;
    case 0xffe2: execute<0xd7>(0,2); break;
    case 0xffe4: execute<0xfc>(0,1); break;
    case 0xffe5: execute<0xd0>(0xf3,2); break;
    case 0xffe7: execute<0xab>(1,2); break;
    case 0xffe9: execute<0x10>(0xef,2); break;
    case 0xffeb: execute<0x7e>(0xf4,2); break;
    case 0xffed: execute<0x10>(0xeb,2); break;
    case 0xffef: execute<0xba>(0xf6,2); break;
    case 0xfff1: execute<0xda>(0,2); break;
    case 0xfff3: execute<0xba>(0xf4,2); break;
    case 0xfff5: execute<0xc4>(0xf4,2); break;
    case 0xfff7: execute<0xdd>(0,1); break;
    case 0xfff8: execute<0x5d>(0,1); break;
    case 0xfff9: execute<0xd0>(0xdb,2); break;
    case 0xfffb: execute<0x1f>(0,3); break;
    default: return false;
    }
    return true;
}
} // namespace eb
