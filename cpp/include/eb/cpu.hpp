#pragma once
#include "eb/game_version.hpp"
#include <cstdint>
#include <functional>
#include <span>
#include <string>

namespace eb {
class Bus;
// Architectural state retained by the assembly-to-C++ translation. Program
// instructions are compiled call sites, never fetched/decoded from ROM here.
class Cpu {
public:
    explicit Cpu(Bus& bus);
    explicit Cpu(std::span<std::uint8_t> flat_memory); // independent vector tests
    // The generated dispatch chooses a compiled US or JP instruction site
    // using this immutable profile. Flat-memory semantic tests default to US.
    const GameVersion version = GameVersion::US;
    // A retains its hidden high byte in 8-bit accumulator mode. X/Y instead
    // lose their high bytes when the index-width flag becomes 8-bit. PC stores
    // the program bank and 16-bit offset together; DBR is the data bank.
    std::uint16_t a{}, x{}, y{}, s{0x1ff}, d{};
    std::uint8_t p{0x34}, dbr{};
    std::uint32_t pc{};
    // E selects emulation-mode stack/page rules independently of P. WAI can
    // resume on an interrupt request; STP remains stopped until reset.
    bool e{true}, stopped{}, waiting{};
    std::uint64_t instructions{}, cycles{};
    // Optional audit hook sees ordered writes before mutation, including
    // repeated writes to the same address. It must not change machine state.
    std::function<void(std::uint32_t,std::uint8_t)> observe_write;
    enum Flag : std::uint8_t { C=1,Z=2,I=4,D=8,X=16,M=32,V=64,N=128 };
    void reset();
    void step();
    void interrupt(bool nmi);
    std::string describe() const;
    // Generated sites supply fixed opcode/operand/length values. Sharing the
    // semantic helper keeps register and flag behavior consistent across both
    // game translations without interpreting instruction bytes at runtime.
    template<unsigned Opcode> void execute(std::uint32_t operand, unsigned length) {
        static_assert(Opcode < 256);
        execute_opcode(Opcode, operand, length);
    }
    void execute_opcode(std::uint8_t opcode, std::uint32_t operand, unsigned length);
    std::uint8_t read(std::uint32_t address);
    void write(std::uint32_t address, std::uint8_t value);
private:
    Bus* bus_{};
    std::span<std::uint8_t> flat_;
    // Base instruction cycles assume six master clocks per cycle. Accesses
    // accumulate only the extra cost of slower memory regions here.
    unsigned access_wait_clocks_{};
    bool m8() const { return p & M; }
    bool x8() const { return p & X; }
    void flag(Flag f, bool value) { p = value ? p | f : p & ~f; }
    void nz(std::uint16_t value, bool byte);
    void status(std::uint8_t value);
    void put_a(std::uint16_t value);
    void push(std::uint8_t value);
    std::uint8_t pull();
    void push16(std::uint16_t value);
    std::uint16_t pull16();
    std::uint16_t read16(std::uint32_t address, bool bank_wrap=false);
    void write16(std::uint32_t address,std::uint16_t value,bool bank_wrap=false);
    std::uint16_t dp(std::uint8_t offset, std::uint16_t index=0) const;
    std::uint32_t dp_pointer(std::uint8_t offset, bool long_pointer=false, std::uint16_t index=0);
    std::uint16_t arithmetic(std::uint16_t value, bool subtract);
    void tick(unsigned elapsed);
};
// Generated program entry: execute one source site at cpu.pc, or return false
// for an address absent from the static translation. There is no decoder fallback.
bool translated_step(Cpu& cpu);
}
