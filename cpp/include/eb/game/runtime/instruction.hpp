#pragma once

#include <cstdint>

namespace eb {
class MainCpu65816;
namespace game::runtime {
// Address calculation is independent of the semantic operation. Source sites
// supply the mode explicitly; no instruction bytes are decoded at runtime.
enum class AddressMode {
    Absolute,
    AbsoluteIndexedX,
    AbsoluteIndexedY,
    Accumulator,
    DirectPageIndirect,
    DirectPageIndirectLong,
    DirectPageIndirectLongIndexedY,
    DirectPageIndexedIndirectX,
    DirectPageIndirectIndexedY,
    DirectPage,
    DirectPageIndexedX,
    DirectPageIndexedY,
    Immediate,
    Implied,
    AbsoluteIndirect,
    AbsoluteIndirectLong,
    AbsoluteIndexedIndirectX,
    Long,
    LongIndexedX,
    BlockMove,
    Relative8,
    Relative16,
    SignatureByte,
    StackRelativeIndirectIndexedY,
    StackRelative
};

// Executes exactly one resumable source step. Construction preserves fetches,
// addressing reads and architectural PC/count updates. The caller names one
// semantic operation, then calls finish() to advance clocks and hardware.
// This object owns no persistent state and must never outlive its source step.
class Instruction {
  public:
    // timing_opcode selects only base cycles and the existing preload site's
    // guarded identity. It never selects an operation or an addressing mode.
    Instruction(MainCpu65816 &cpu, std::uint8_t timing_opcode, std::uint32_t operand, unsigned length,
                AddressMode mode);
    Instruction(const Instruction &) = delete;
    Instruction &operator=(const Instruction &) = delete;
    bool finish();

    // Source-operation mapping used by the gameplay generator and differential
    // tests. Each declaration's trailing mnemonic is the authoritative key.
    void add_with_carry();                      // ADC
    void and_accumulator();                     // AND
    void shift_left();                          // ASL
    void branch_if_carry_clear();               // BCC
    void branch_if_carry_set();                 // BCS
    void branch_if_zero();                      // BEQ
    void test_bits();                           // BIT
    void branch_if_negative();                  // BMI
    void branch_if_not_zero();                  // BNE
    void branch_if_nonnegative();               // BPL
    void branch_always();                       // BRA
    void software_break();                      // BRK
    void branch_long();                         // BRL
    void branch_if_overflow_clear();            // BVC
    void branch_if_overflow_set();              // BVS
    void clear_carry();                         // CLC
    void clear_decimal();                       // CLD
    void enable_interrupts();                   // CLI
    void clear_overflow();                      // CLV
    void compare_accumulator();                 // CMP
    void coprocessor_interrupt();               // COP
    void compare_x();                           // CPX
    void compare_y();                           // CPY
    void decrement();                           // DEC
    void decrement_x();                         // DEX
    void decrement_y();                         // DEY
    void xor_accumulator();                     // EOR
    void increment();                           // INC
    void increment_x();                         // INX
    void increment_y();                         // INY
    void jump_long();                           // JML
    void jump();                                // JMP
    void call_long();                           // JSL
    void call();                                // JSR
    void load_accumulator();                    // LDA
    void load_x();                              // LDX
    void load_y();                              // LDY
    void shift_right();                         // LSR
    void move_byte_forward();                   // MVN
    void move_byte_backward();                  // MVP
    void no_operation();                        // NOP
    void or_accumulator();                      // ORA
    void push_effective_absolute();             // PEA
    void push_effective_indirect();             // PEI
    void push_effective_relative();             // PER
    void push_accumulator();                    // PHA
    void push_data_bank();                      // PHB
    void push_direct_page();                    // PHD
    void push_program_bank();                   // PHK
    void push_status();                         // PHP
    void push_x();                              // PHX
    void push_y();                              // PHY
    void pull_accumulator();                    // PLA
    void pull_data_bank();                      // PLB
    void pull_direct_page();                    // PLD
    void pull_status();                         // PLP
    void pull_x();                              // PLX
    void pull_y();                              // PLY
    void clear_status_bits();                   // REP
    void rotate_left();                         // ROL
    void rotate_right();                        // ROR
    void return_from_interrupt();               // RTI
    void return_long();                         // RTL
    void return_from_call();                    // RTS
    void subtract_with_borrow();                // SBC
    void set_carry();                           // SEC
    void set_decimal();                         // SED
    void disable_interrupts();                  // SEI
    void set_status_bits();                     // SEP
    void store_accumulator();                   // STA
    void stop();                                // STP
    void store_x();                             // STX
    void store_y();                             // STY
    void store_zero();                          // STZ
    void transfer_accumulator_to_x();           // TAX
    void transfer_accumulator_to_y();           // TAY
    void transfer_accumulator_to_direct_page(); // TCD
    void transfer_accumulator_to_stack();       // TCS
    void transfer_direct_page_to_accumulator(); // TDC
    void reset_tested_bits();                   // TRB
    void set_tested_bits();                     // TSB
    void transfer_stack_to_accumulator();       // TSC
    void transfer_stack_to_x();                 // TSX
    void transfer_x_to_accumulator();           // TXA
    void transfer_x_to_stack();                 // TXS
    void transfer_x_to_y();                     // TXY
    void transfer_y_to_accumulator();           // TYA
    void transfer_y_to_x();                     // TYX
    void wait_for_interrupt();                  // WAI
    void reserved_no_operation();               // WDM
    void exchange_accumulator_bytes();          // XBA
    void exchange_carry_emulation();            // XCE

  private:
    MainCpu65816 &cpu_;
    AddressMode mode_;
    std::uint32_t operand_, instruction_address_, address_ = 0, unindexed_address_ = 0;
    unsigned cycles_, operand_mask_;
    bool byte_operand_, bank_wrap_ = false;
    // A wide memory access costs one extra cycle; read/modify/write costs two.
    // Control flow/effective-address pushes opt out explicitly in their method.
    unsigned wide_memory_cycles_ = 1;
    bool indexed_read_ = false, returning_from_interrupt_ = false;

    void resolve_address();
    void use_index_width();
    std::uint16_t value();
    void store(std::uint16_t value);
    void compare(std::uint16_t left);
    void branch(bool condition, bool taken_cost_in_base = false);
    void push_linear(std::uint8_t value);
    std::uint8_t pull_linear();
    void push_word_linear(std::uint16_t value);
    std::uint16_t pull_word_linear();
    void restore_stack_page();
    void software_interrupt(bool coprocessor);
    void move_byte(int direction);
};
} // namespace game::runtime
} // namespace eb
