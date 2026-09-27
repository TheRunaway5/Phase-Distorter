#pragma once
#include <array>
#include <cstdint>
#include <functional>
#include <span>
#include <string>

namespace eb {
class Bus;
// Architectural execution helpers called from source-translated SPC instructions.
// No opcode is fetched or decoded from RAM at runtime.
class Spc {
public:
    // The Bus must outlive this instance: construction installs its APU clock
    // callback, and destruction removes that callback before it can dangle.
    explicit Spc(Bus& bus);
    explicit Spc(std::span<uint8_t> flat_memory); // independent instruction vectors
    ~Spc();
    Spc(const Spc&)=delete;
    Spc& operator=(const Spc&)=delete;
    uint16_t pc=0xffc0;
    uint8_t a=0, x=0, y=0, sp=0xef, p=2;
    uint64_t instructions=0, cycles=0;
    bool stopped=false, sleeping=false;
    // The DSP shares this physical RAM for BRR samples and echo storage. CPU
    // register overlays are handled by read/write and do not replace the RAM.
    std::array<uint8_t,65536> ram{};
    std::array<uint8_t,128> dsp{};
    // A live Dsp connects these callbacks. The register array above is also
    // retained for standalone SPC tests that do not instantiate audio synthesis.
    std::function<uint8_t(uint8_t)> dsp_read;
    std::function<void(uint8_t,uint8_t)> dsp_write;
    std::function<void(unsigned)> dsp_tick;
    std::function<void(uint16_t,uint8_t)> observe_write;
    enum Flag : uint8_t { C=1, Z=2, I=4, H=8, B=16, P=32, V=64, N=128 };
    uint8_t read(uint16_t address);
    void write(uint16_t address,uint8_t value);
    void step();
    // Input is SNES master-clock time. Internal advance() and DSP callbacks
    // use SPC clocks; mixing the two units would change music tempo.
    void tick(unsigned master_clocks);
    std::string describe() const;
    template<unsigned Opcode> void execute(uint16_t operand, unsigned length) {
        static_assert(Opcode<256);
        execute_opcode(Opcode,operand,length);
    }
    void execute_opcode(uint8_t opcode,uint16_t operand,unsigned length);
private:
    Bus* bus_=nullptr;
    std::span<uint8_t> flat_;
    uint8_t control_=0x80, test_=0x0a, dsp_address_=0;
    // Each timer has a free-running divider, an 8-bit target counter, and a
    // four-bit output latch whose value is consumed by a register read.
    std::array<unsigned,3> timer_prescaler_{};
    std::array<uint8_t,3> timer_counter_{}, timer_target_{}, timer_output_{};
    // Signed clock debt carries fractional CPU/APU phase across tick calls.
    // Completing an instruction can overshoot the requested time; that debt
    // is paid before the next instruction, rather than rounded away.
    int64_t clock_balance_=0;
    void flag(Flag f,bool value) { if (value) p|=f; else p&=~f; }
    void nz(uint8_t v) { flag(N,v&0x80); flag(Z,v==0); }
    void nz16(uint16_t v) { flag(N,v&0x8000); flag(Z,v==0); }
    uint16_t dp(uint8_t address) const { return ((p&P)?0x100:0)|address; }
    uint16_t read_word(uint16_t address);
    uint16_t read_dp_word(uint8_t address);
    void push(uint8_t value);
    uint8_t pull();
    void push_word(uint16_t value);
    uint16_t pull_word();
    uint8_t alu(unsigned operation,uint8_t left,uint8_t right);
    void advance(unsigned elapsed);
    bool ipl_step();
};
// Generated SPC program dispatch; the boot ROM has its own fixed-site dispatch
// in ipl_step(). Both paths share the same architectural execution helpers.
bool spc_translated_step(Spc& spc);
} // namespace eb
