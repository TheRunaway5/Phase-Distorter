#pragma once
#include <array>
#include <cstdint>
#include <functional>
#include <span>
#include <string>

namespace eb {
class SnesBus;
// Architectural execution helpers called from source-translated SPC instructions.
// No opcode is fetched or decoded from RAM at runtime.
class Spc700AudioCpu {
public:
    // The SnesBus must outlive this instance: construction installs its APU clock
    // callback, and destruction removes that callback before it can dangle.
    explicit Spc700AudioCpu(SnesBus& system_bus);
    explicit Spc700AudioCpu(std::span<uint8_t> flat_memory); // independent instruction vectors
    ~Spc700AudioCpu();
    Spc700AudioCpu(const Spc700AudioCpu&) = delete;
    Spc700AudioCpu& operator=(const Spc700AudioCpu&) = delete;
    // Register names expand PC, A, X, Y, SP, and PSW from the SPC700 manual.
    uint16_t program_counter = 0xffc0;
    uint8_t accumulator = 0, x_index = 0, y_index = 0, stack_pointer = 0xef, status_register = 2;
    uint64_t instruction_count = 0, cycle_count = 0;
    bool is_stopped = false, is_sleeping = false;
    // The DSP shares this physical RAM for BRR samples and echo storage. CPU
    // register overlays are handled by read_byte/write_byte and do not replace the RAM.
    std::array<uint8_t, 65536> audio_ram{};
    std::array<uint8_t, 128> dsp_registers{};
    // A live SnesAudioDsp connects these callbacks. The register array above is also
    // retained for standalone SPC tests that do not instantiate audio synthesis.
    std::function<uint8_t(uint8_t)> read_dsp_register;
    std::function<void(uint8_t, uint8_t)> write_dsp_register;
    std::function<void(unsigned)> advance_dsp_clocks;
    std::function<void(uint16_t, uint8_t)> observe_memory_write;
    enum StatusFlag : uint8_t {
        Carry = 1,
        Zero = 2,
        InterruptEnable = 4,
        HalfCarry = 8,
        Break = 16,
        DirectPage = 32,
        Overflow = 64,
        Negative = 128
    };
    uint8_t read_byte(uint16_t address);
    void write_byte(uint16_t address, uint8_t value);
    void step_instruction();
    // Input is SNES master-clock time. Internal advance_audio_cycles() and DSP callbacks
    // use SPC clocks; mixing the two units would change music tempo.
    void advance_master_clocks(unsigned master_clocks);
    std::string describe_registers() const;
    template <unsigned Opcode> void execute_instruction(uint16_t operand, unsigned instruction_size) {
        static_assert(Opcode < 256);
        execute_opcode_semantics(Opcode, operand, instruction_size);
    }
    void execute_opcode_semantics(uint8_t opcode, uint16_t operand, unsigned instruction_size);

private:
    SnesBus* system_bus_ = nullptr;
    std::span<uint8_t> instruction_test_memory_;
    uint8_t control_register_ = 0x80, test_register_ = 0x0a, dsp_register_address_ = 0;
    // Each timer has a free-running divider, an 8-bit target counter, and a
    // four-bit output latch whose value is consumed by a register read.
    std::array<unsigned, 3> timer_clock_dividers_{};
    std::array<uint8_t, 3> timer_target_counters_{}, timer_target_values_{}, timer_output_latches_{};
    // Signed clock debt carries fractional CPU/APU phase across advance_master_clocks calls.
    // Completing an instruction can overshoot the requested time; that debt
    // is paid before the next instruction, rather than rounded away.
    int64_t master_to_audio_clock_balance_ = 0;
    void set_status_flag(StatusFlag status_flag, bool value) {
        if (value)
            status_register |= status_flag;
        else
            status_register &= ~status_flag;
    }
    void update_negative_zero_flags(uint8_t value) {
        set_status_flag(Negative, value & 0x80);
        set_status_flag(Zero, value == 0);
    }
    void update_negative_zero_flags_word(uint16_t value) {
        set_status_flag(Negative, value & 0x8000);
        set_status_flag(Zero, value == 0);
    }
    uint16_t direct_page_address(uint8_t address) const {
        return ((status_register & DirectPage) ? 0x100 : 0) | address;
    }
    uint16_t read_memory_word(uint16_t address);
    uint16_t read_direct_page_word(uint8_t address);
    void push_stack_byte(uint8_t value);
    uint8_t pull_stack_byte();
    void push_stack_word(uint16_t value);
    uint16_t pull_stack_word();
    uint8_t apply_arithmetic_logic_operation(unsigned operation, uint8_t left, uint8_t right);
    void advance_audio_cycles(unsigned elapsed_audio_cycles);
    bool execute_boot_rom_instruction();
};
// Generated SPC program dispatch; the boot ROM has its own fixed-site dispatch
// in execute_boot_rom_instruction(). Both paths share the same architectural execution helpers.
bool execute_translated_audio_instruction(Spc700AudioCpu& audio_cpu);
} // namespace eb
