#include "eb/cpu.hpp"
#include "eb/bus.hpp"
#include <iomanip>
#include <sstream>
#include <stdexcept>

namespace eb {
namespace {
#include "opcodes.inc"
// Minimum architectural cycle totals indexed by the compile-time opcode.
// execute_opcode adds width, direct-page, branch, and indexing penalties;
// tick converts those totals to master clocks and adds bus-speed stalls.
constexpr unsigned base_cycles[256] = {
8,6,8,4,5,3,5,6,3,2,2,4,6,4,6,5,
2,5,5,7,5,4,6,6,2,4,2,2,6,4,7,5,
6,6,8,4,3,3,5,6,4,2,2,5,4,4,6,5,
2,5,5,7,4,4,6,6,2,4,2,2,4,4,7,5,
7,6,2,4,7,3,5,6,3,2,2,3,3,4,6,5,
2,5,5,7,7,4,6,6,2,4,3,2,4,4,7,5,
6,6,6,4,3,3,5,6,4,2,2,6,5,4,6,5,
2,5,5,7,4,4,6,6,2,4,4,2,6,4,7,5,
3,6,4,4,3,3,3,6,2,2,2,3,4,4,4,5,
2,6,5,7,4,4,4,6,2,5,2,2,4,5,5,5,
2,6,2,4,3,3,3,6,2,2,2,4,4,4,4,5,
2,5,5,7,4,4,4,6,2,4,2,2,4,4,4,5,
2,6,3,4,3,3,5,6,2,2,2,3,4,4,6,5,
2,5,5,7,6,4,6,6,2,4,3,3,6,4,7,5,
2,6,3,4,3,3,5,6,2,2,2,3,4,4,6,5,
2,5,5,7,5,4,6,6,2,4,4,2,8,4,7,5};
}
Cpu::Cpu(Bus& bus) : version(bus.game_version()), bus_(&bus) {}
Cpu::Cpu(std::span<std::uint8_t> memory) : flat_(memory) {
    if (memory.size()!=0x1000000) throw std::invalid_argument("CPU vector memory must have 24-bit address space");
}
// Data operations and discarded instruction fetches use the same bus path so
// open-bus values and register side effects remain visible to subsequent code.
std::uint8_t Cpu::read(std::uint32_t address) {
    address &= 0xffffff;
    if(bus_) access_wait_clocks_+=bus_->access_clocks(address)-6;
    return bus_ ? bus_->read(address) : flat_[address];
}
void Cpu::write(std::uint32_t address, std::uint8_t value) {
    address &= 0xffffff;
    if(bus_) access_wait_clocks_+=bus_->access_clocks(address)-6;
    if(observe_write) observe_write(address,value);
    if(bus_) bus_->write(address,value); else flat_[address]=value;
}
// Some addressing modes wrap the second byte within the current 64 KiB bank;
// long addressing carries into the next bank. Keep byte order explicit because
// an operand can straddle two I/O registers with different side effects.
std::uint16_t Cpu::read16(std::uint32_t address,bool wrap) {
    auto next=wrap ? (address&0xff0000)|std::uint16_t(address+1) : (address+1)&0xffffff;
    const auto low=read(address); return low | (read(next)<<8);
}
void Cpu::write16(std::uint32_t address,std::uint16_t value,bool wrap) {
    auto next=wrap ? (address&0xff0000)|std::uint16_t(address+1) : (address+1)&0xffffff;
    write(address,value); write(next,value>>8);
}
// Hardware time advances once the instruction's architectural effects finish.
// This preserves cycle totals but does not claim a microcycle-accurate schedule
// for every access inside that instruction (see docs/cpu.md).
void Cpu::tick(unsigned elapsed) {
    cycles+=elapsed;
    if(bus_) {
        const auto clocks=elapsed*6+access_wait_clocks_;
        access_wait_clocks_=0;
        bus_->run_cpu(clocks);
        // Advancing a transfer can start another scanline's HDMA. Drain that
        // debt too; retaining master clocks avoids per-channel rounding loss.
        while(const auto dma=bus_->take_dma_clocks()) bus_->run_cpu(dma);
    }
}
void Cpu::reset() {
    a=x=y=d=dbr=0; s=0x1ff; p=0x34; e=true; stopped=waiting=false;
    instructions=cycles=0; pc=read16(0xfffc); access_wait_clocks_=0;
}
void Cpu::nz(std::uint16_t value,bool byte) {
    flag(Z,(value & (byte ? 0xff : 0xffff))==0);
    flag(N,value & (byte ? 0x80:0x8000));
}
// Centralize mode transitions: emulation forces M/X, and entering 8-bit index
// mode clears X/Y high bytes immediately, including after a pulled status word.
void Cpu::status(std::uint8_t value) {
    p=value | (e ? M|X : 0);
    if(x8()) { x&=0xff; y&=0xff; }
}
// Unlike index registers, the accumulator's high byte survives 8-bit writes.
// Z/N still describe only the currently selected accumulator width.
void Cpu::put_a(std::uint16_t value) {
    a=m8() ? (a&0xff00)|(value&0xff) : value; nz(a,m8());
}
void Cpu::push(std::uint8_t value) { write(s,value); s=e ? 0x100|((s-1)&0xff) : std::uint16_t(s-1); }
std::uint8_t Cpu::pull() { s=e ? 0x100|((s+1)&0xff) : std::uint16_t(s+1); return read(s); }
void Cpu::push16(std::uint16_t value) { push(value>>8); push(value); }
std::uint16_t Cpu::pull16() { const auto low=pull(); return low | (pull()<<8); }
// Emulation mode wraps an aligned direct page at 256 bytes. A nonzero low
// byte in D uses the full 16-bit addition instead, including indexed forms.
std::uint16_t Cpu::dp(std::uint8_t offset,std::uint16_t index) const {
    return e && !(d&0xff) ? (d&0xff00)|((offset+index)&0xff) : std::uint16_t(d+offset+index);
}
// Short pointers borrow DBR for their bank; long pointers read a third byte.
// The short emulation-mode pointer has its own page-wrap rule, which must not
// be replaced with a generic consecutive read16/read24 helper.
std::uint32_t Cpu::dp_pointer(std::uint8_t offset,bool lng,std::uint16_t index) {
    const std::uint16_t addr=dp(offset,index);
    auto next=[&](unsigned n) { return (!lng && e && !(d&0xff)) ? (addr&0xff00)|((addr+n)&0xff) : std::uint16_t(addr+n); };
    const auto lo=read(addr); const auto hi=read(next(1));
    return lo|(hi<<8)|(lng ? read(next(2))<<16 : dbr<<16);
}
// Hardware interrupts push the interrupted PC, unlike JSR's return-minus-one.
// The stack frame and vector bank depend on E; both entry paths clear decimal
// mode and mask further IRQs before dispatching the translated handler.
void Cpu::interrupt(bool nmi) {
    access_wait_clocks_=0;
    if(bus_) read(pc); // discarded opcode fetch at interrupt entry
    waiting=false;
    if(!e) push(pc>>16);
    push16(pc);
    push(e ? p&~0x10 : p);
    flag(I,true); flag(D,false);
    pc=read16(e ? (nmi ? 0xfffa:0xfffe) : (nmi ? 0xffea:0xffee));
    tick(e ? 7:8);
}
// Interrupt arbitration happens before source-site dispatch. An asserted IRQ
// wakes WAI even when P.I prevents entering its handler; NMI takes precedence.
void Cpu::step() {
    if(stopped) return;
    if(bus_ && bus_->take_nmi()) { interrupt(true); return; }
    if(bus_ && bus_->irq_pending()) { waiting=false; if(!(p&I)) { interrupt(false); return; } }
    if(waiting) { tick(6); return; }
    if(!translated_step(*this)) throw std::runtime_error("No translated assembly instruction at "+describe());
}
std::string Cpu::describe() const {
    std::ostringstream out;
    out<<std::hex<<std::setfill('0')<<"PC="<<std::setw(6)<<pc<<" A="<<std::setw(4)<<a
       <<" X="<<std::setw(4)<<x<<" Y="<<std::setw(4)<<y<<" S="<<std::setw(4)<<s
       <<" D="<<std::setw(4)<<d<<" DB="<<std::setw(2)<<unsigned(dbr)
       <<" P="<<std::setw(2)<<unsigned(p)<<" E="<<e;
    return out.str();
}
// Decimal arithmetic is performed nibble by nibble so carry/borrow propagation
// matches packed BCD at both widths. Carry means "no borrow" for subtraction;
// overflow still describes the signed binary operation, not decimal range.
std::uint16_t Cpu::arithmetic(std::uint16_t value,bool sub) {
    const unsigned mask=m8()?0xff:0xffff, sign=m8()?0x80:0x8000;
    const unsigned lhs=a&mask, rhs=value&mask, carry=bool(p&C);
    unsigned result;
    if(sub) {
        result=lhs+(rhs^mask)+carry;
        flag(V,((lhs^rhs)&(lhs^result)&sign)!=0);
        if(p&D) {
            int borrow=1-int(carry); result=0;
            for(unsigned shift=0;shift<(m8()?8u:16u);shift+=4) {
                int digit=int((lhs>>shift)&15)-int((rhs>>shift)&15)-borrow;
                borrow=digit<0;
                if(borrow) digit-=6;
                result|=(unsigned(digit)&15)<<shift;
            }
            flag(C,!borrow);
        } else flag(C,result>mask);
    } else {
        result=lhs+rhs+carry;
        if(p&D) {
            // Overflow observes the last binary nibble addition before its
            // decimal correction; lower corrected nibbles carry into it.
            unsigned c=carry; result=0;
            for(unsigned shift=0;shift<(m8()?8u:16u);shift+=4) {
                unsigned digit=((lhs>>shift)&15)+((rhs>>shift)&15)+c;
                if(shift==(m8()?4u:12u)) flag(V,(~(lhs^rhs)&(lhs^(digit<<shift))&sign)!=0);
                if(digit>9) digit+=6;
                c=digit>15; result|=(digit&15)<<shift;
            }
            flag(C,c);
        } else { flag(V,(~(lhs^rhs)&(lhs^result)&sign)!=0); flag(C,result>mask); }
    }
    return result&mask;
}
void Cpu::execute_opcode(std::uint8_t opcode,std::uint32_t operand,unsigned length) {
    access_wait_clocks_=0;
    const auto [op,mode]=instruction_set[opcode];
    const auto old_pc=pc;
    // Preserve instruction-fetch bus reads/open-bus state. These bytes do not
    // select the operation: the generated source site fixes opcode/operand.
    if(bus_) for(unsigned i=0;i<length;++i)
        read((old_pc&0xff0000)|std::uint16_t(old_pc+i));
    pc=(pc&0xff0000)|std::uint16_t(pc+length);
    ++instructions;
    unsigned elapsed=base_cycles[opcode];
    // M controls most operand widths, but the load/store/compare index family
    // uses X. Register-transfer exceptions handle their own destination width.
    const bool index_op=op==Op::LDX||op==Op::LDY||op==Op::STX||op==Op::STY||op==Op::CPX||op==Op::CPY;
    const bool byte=index_op ? x8():m8();
    const unsigned mask=byte?0xff:0xffff;
    std::uint32_t address=0, unindexed_address=0;
    bool wrap=false;
    // Resolve addressing once, without reading the operand yet. The value()
    // closure below delays reads until the semantic operation needs them,
    // avoiding accidental I/O reads for store-only instructions.
    switch(mode) {
    case Mode::dp: address=dp(operand); wrap=true; break;
    case Mode::dpx: address=dp(operand,x); wrap=true; break;
    case Mode::dpy: address=dp(operand,y); wrap=true; break;
    case Mode::abs: address=(dbr<<16)|(operand&0xffff); break;
    case Mode::absx: unindexed_address=(dbr<<16)|(operand&0xffff); address=(unindexed_address+x)&0xffffff; break;
    case Mode::absy: unindexed_address=(dbr<<16)|(operand&0xffff); address=(unindexed_address+y)&0xffffff; break;
    case Mode::lng: address=operand; break;
    case Mode::lngx: address=(operand+x)&0xffffff; break;
    case Mode::dix: address=dp_pointer(operand,false,x); break;
    case Mode::di: address=dp_pointer(operand); break;
    case Mode::diy: unindexed_address=dp_pointer(operand); address=(unindexed_address+y)&0xffffff; break;
    case Mode::dil: address=dp_pointer(operand,true); break;
    case Mode::dily: address=(dp_pointer(operand,true)+y)&0xffffff; break;
    case Mode::sr: address=std::uint16_t(s+operand); wrap=true; break;
    case Mode::siy: address=((dbr<<16)+read16(std::uint16_t(s+operand),true)+y)&0xffffff; break;
    default: break;
    }
    const auto value=[&]() -> std::uint16_t {
        if(mode==Mode::imm) return operand&mask;
        if(mode==Mode::acc) return a&mask;
        return byte ? read(address) : read16(address,wrap);
    };
    const auto store=[&](std::uint16_t v) {
        if(mode==Mode::acc) put_a(v); else if(byte) write(address,v); else write16(address,v,wrap);
    };
    const auto compare=[&](std::uint16_t lhs) { unsigned rhs=value(); flag(C,(lhs&mask)>=rhs); nz((lhs&mask)-rhs,byte); };
    // Relative targets retain the program bank. Only emulation mode adds the
    // short-branch page-crossing penalty; BRA already includes its taken cost.
    const auto branch=[&](bool condition) {
        if(condition) {
            auto before=pc; pc=(pc&0xff0000)|std::uint16_t(pc+std::int8_t(operand));
            if(op!=Op::BRA) ++elapsed;
            if(e && ((before^pc)&0xff00)) ++elapsed;
        }
    };
    // These instructions use a linear stack sequence even in emulation mode,
    // then restore page 1 after the sequence. Ordinary push/pull wraps each
    // byte in page 1 instead; merging the helpers would change boundary cases.
    const auto push_linear=[&](std::uint8_t v) { write(s,v); --s; };
    const auto pull_linear=[&]() { ++s; return read(s); };
    const auto push16_linear=[&](std::uint16_t v) { push_linear(v>>8); push_linear(v); };
    const auto pull16_linear=[&]() { auto low=pull_linear(); return std::uint16_t(low|(pull_linear()<<8)); };
    const auto restore_stack_page=[&]() { if(e) s=0x100|(s&0xff); };
    switch(op) {
    case Op::ORA: put_a(a|value()); break;
    case Op::AND: put_a(a&value()); break;
    case Op::EOR: put_a(a^value()); break;
    case Op::ADC: put_a(arithmetic(value(),false)); break;
    case Op::SBC: put_a(arithmetic(value(),true)); break;
    case Op::CMP: compare(a); break;
    case Op::CPX: compare(x); break;
    case Op::CPY: compare(y); break;
    case Op::LDA: put_a(value()); break;
    case Op::LDX: x=value(); nz(x,byte); break;
    case Op::LDY: y=value(); nz(y,byte); break;
    case Op::STA: store(a); break;
    case Op::STX: store(x); break;
    case Op::STY: store(y); break;
    case Op::STZ: store(0); break;
    case Op::BIT: { auto v=value(); flag(Z,(a&v&mask)==0); if(mode!=Mode::imm) { flag(N,v&(byte?0x80:0x8000)); flag(V,v&(byte?0x40:0x4000)); } break; }
    case Op::TSB: { auto v=value(); flag(Z,(v&a&mask)==0); store(v|a); break; }
    case Op::TRB: { auto v=value(); flag(Z,(v&a&mask)==0); store(v&~a); break; }
    case Op::ASL: { auto v=value(); flag(C,v&(byte?0x80:0x8000)); v=(v<<1)&mask; store(v); nz(v,byte); break; }
    case Op::LSR: { auto v=value(); flag(C,v&1); v>>=1; store(v); nz(v,byte); break; }
    case Op::ROL: { auto v=value(); bool c=p&C; flag(C,v&(byte?0x80:0x8000)); v=((v<<1)|c)&mask; store(v); nz(v,byte); break; }
    case Op::ROR: { auto v=value(); bool c=p&C; flag(C,v&1); v=(v>>1)|(c?(byte?0x80:0x8000):0); store(v); nz(v,byte); break; }
    case Op::INC: { auto v=(value()+1)&mask; store(v); nz(v,byte); break; }
    case Op::DEC: { auto v=(value()-1)&mask; store(v); nz(v,byte); break; }
    case Op::INX: x=(x+1)&(x8()?0xff:0xffff); nz(x,x8()); break;
    case Op::DEX: x=(x-1)&(x8()?0xff:0xffff); nz(x,x8()); break;
    case Op::INY: y=(y+1)&(x8()?0xff:0xffff); nz(y,x8()); break;
    case Op::DEY: y=(y-1)&(x8()?0xff:0xffff); nz(y,x8()); break;
    case Op::BCC: branch(!(p&C)); break;
    case Op::BCS: branch(p&C); break;
    case Op::BEQ: branch(p&Z); break;
    case Op::BNE: branch(!(p&Z)); break;
    case Op::BMI: branch(p&N); break;
    case Op::BPL: branch(!(p&N)); break;
    case Op::BVC: branch(!(p&V)); break;
    case Op::BVS: branch(p&V); break;
    case Op::BRA: branch(true); break;
    case Op::BRL: pc=(pc&0xff0000)|std::uint16_t(pc+std::int16_t(operand)); break;
    case Op::CLC: flag(C,false); break;
    case Op::SEC: flag(C,true); break;
    case Op::CLD: flag(D,false); break;
    case Op::SED: flag(D,true); break;
    case Op::CLI: flag(I,false); break;
    case Op::SEI: flag(I,true); break;
    case Op::CLV: flag(V,false); break;
    case Op::REP: status(p&~operand); break;
    case Op::SEP: status(p|operand); break;
    case Op::XCE: { bool carry=p&C; flag(C,e); e=carry; status(p); if(e) s=0x100|(s&0xff); break; }
    case Op::TAX: x=a&(x8()?0xff:0xffff); nz(x,x8()); break;
    case Op::TAY: y=a&(x8()?0xff:0xffff); nz(y,x8()); break;
    case Op::TXA: put_a(x); break;
    case Op::TYA: put_a(y); break;
    case Op::TXY: y=x&(x8()?0xff:0xffff); nz(y,x8()); break;
    case Op::TYX: x=y&(x8()?0xff:0xffff); nz(x,x8()); break;
    case Op::TSX: x=s&(x8()?0xff:0xffff); nz(x,x8()); break;
    case Op::TXS: s=e ? 0x100|(x&0xff) : x; break;
    case Op::TCS: s=e ? 0x100|(a&0xff) : a; break;
    case Op::TSC: a=s; nz(a,false); break;
    case Op::TCD: d=a; nz(d,false); break;
    case Op::TDC: a=d; nz(a,false); break;
    case Op::XBA: a=(a<<8)|(a>>8); nz(a,true); break;
    case Op::PHA: if(m8()) push(a); else {push16(a);++elapsed;} break;
    case Op::PLA: put_a(m8()?pull():pull16()); if(!m8()) ++elapsed; break;
    case Op::PHX: if(x8()) push(x); else {push16(x);++elapsed;} break;
    case Op::PLX: x=x8()?pull():pull16(); nz(x,x8()); if(!x8()) ++elapsed; break;
    case Op::PHY: if(x8()) push(y); else {push16(y);++elapsed;} break;
    case Op::PLY: y=x8()?pull():pull16(); nz(y,x8()); if(!x8()) ++elapsed; break;
    case Op::PHP: push(p); break;
    case Op::PLP: status(pull()); break;
    case Op::PHB: push(dbr); break;
    case Op::PLB: dbr=pull_linear(); restore_stack_page(); nz(dbr,true); break;
    case Op::PHK: push(pc>>16); break;
    case Op::PHD: push16_linear(d); restore_stack_page(); break;
    case Op::PLD: d=pull16_linear(); restore_stack_page(); nz(d,false); break;
    case Op::PEA: push16_linear(operand); restore_stack_page(); break;
    case Op::PEI: push16_linear(read16(std::uint16_t(d+std::uint8_t(operand)),true)); restore_stack_page(); break;
    case Op::PER: push16_linear(std::uint16_t(pc+std::int16_t(operand))); restore_stack_page(); break;
    case Op::JMP: {
        std::uint16_t dest=operand;
        if(mode==Mode::ind) dest=read16(operand&0xffff,true);
        else if(mode==Mode::indx) dest=read16((pc&0xff0000)|std::uint16_t(operand+x),true);
        pc=(pc&0xff0000)|dest; break;
    }
    case Op::JML: {
        if(mode==Mode::lng) pc=operand;
        else { auto dest=read16(operand&0xffff,true); pc=dest|(read(std::uint16_t(operand+2))<<16); }
        break;
    }
    case Op::JSR: {
        std::uint16_t dest=operand;
        if(mode==Mode::indx) dest=read16((pc&0xff0000)|std::uint16_t(operand+x),true);
        if(mode==Mode::indx) {push16_linear(std::uint16_t(pc-1));restore_stack_page();}
        else push16(std::uint16_t(pc-1));
        pc=(pc&0xff0000)|dest; break;
    }
    case Op::JSL: push_linear(pc>>16); push16_linear(std::uint16_t(pc-1)); restore_stack_page(); pc=operand; break;
    case Op::RTS: { auto ret=pull16(); pc=(pc&0xff0000)|std::uint16_t(ret+1); break; }
    case Op::RTL: { auto ret=pull16_linear(); pc=(pull_linear()<<16)|std::uint16_t(ret+1); restore_stack_page(); break; }
    case Op::RTI: { status(pull()); auto ret=pull16(); pc=e ? (old_pc&0xff0000)|ret : ret|(pull()<<16); if(e) --elapsed; break; }
    case Op::BRK: case Op::COP: {
        if(!e) push(old_pc>>16);
        push16(pc); push(p); flag(I,true); flag(D,false);
        pc=read16(e ? (op==Op::COP?0xfff4:0xfffe) : (op==Op::COP?0xffe4:0xffe6));
        if(e) --elapsed;
        break;
    }
    // Move one byte per dispatch and revisit the same source site until A
    // underflows. Keeping the loop interruptible preserves instruction timing
    // and externally visible reads/writes rather than using a host memcpy.
    case Op::MVN: case Op::MVP: {
        dbr=operand&0xff; write((dbr<<16)|y,read(((operand>>8)<<16)|x));
        const int direction=op==Op::MVN?1:-1;
        x=(x+direction)&(x8()?0xff:0xffff); y=(y+direction)&(x8()?0xff:0xffff);
        if(a--!=0) pc=old_pc;
        break;
    }
    case Op::WAI: waiting=true; break;
    case Op::STP: stopped=true; break;
    case Op::NOP: case Op::WDM: break;
    }
    // Architectural cycle totals, with width/direct-page/index penalties.
    // Explicit fetch/data accesses also accumulate SNES memory-speed waits;
    // bus access ordering within an instruction remains a separate fidelity gate.
    switch(mode) {
    case Mode::dp: case Mode::dpx: case Mode::dpy: case Mode::di: case Mode::dix:
    case Mode::diy: case Mode::dil: case Mode::dily: if(d&0xff) ++elapsed; break;
    default: break;
    }
    const bool memory_mode=mode!=Mode::imp && mode!=Mode::acc && mode!=Mode::sig && mode!=Mode::rel && mode!=Mode::rel16 && mode!=Mode::move;
    if(memory_mode && !byte && op!=Op::JMP && op!=Op::JML && op!=Op::JSR && op!=Op::JSL && op!=Op::PEA && op!=Op::PEI && op!=Op::PER) {
        ++elapsed;
        if(op==Op::ASL||op==Op::LSR||op==Op::ROL||op==Op::ROR||op==Op::INC||op==Op::DEC||op==Op::TSB||op==Op::TRB) ++elapsed;
    }
    const bool indexed_read=op==Op::ORA||op==Op::AND||op==Op::EOR||op==Op::ADC||op==Op::SBC||op==Op::CMP||op==Op::LDA||op==Op::LDX||op==Op::LDY||op==Op::BIT;
    if(indexed_read && (mode==Mode::absx||mode==Mode::absy||mode==Mode::diy) &&
       (!x8() || ((address^unindexed_address)&0xffff00))) ++elapsed;
    tick(elapsed);
}
}
