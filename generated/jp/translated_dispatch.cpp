// Generated from ca65 instruction spans. Do not edit.
#include "eb/cpu.hpp"
#include "generated_code.hpp"

namespace eb::jp {
bool translated_bank_c0(Cpu&, std::uint16_t);
bool translated_bank_c1(Cpu&, std::uint16_t);
bool translated_bank_c2(Cpu&, std::uint16_t);
bool translated_bank_c3(Cpu&, std::uint16_t);
bool translated_bank_c4(Cpu&, std::uint16_t);
bool translated_bank_c5(Cpu&, std::uint16_t);
bool translated_bank_c6(Cpu&, std::uint16_t);
bool translated_bank_c7(Cpu&, std::uint16_t);
bool translated_bank_c8(Cpu&, std::uint16_t);
bool translated_bank_c9(Cpu&, std::uint16_t);
bool translated_bank_ca(Cpu&, std::uint16_t);
bool translated_bank_cb(Cpu&, std::uint16_t);
bool translated_bank_cc(Cpu&, std::uint16_t);
bool translated_bank_cd(Cpu&, std::uint16_t);
bool translated_bank_ce(Cpu&, std::uint16_t);
bool translated_bank_cf(Cpu&, std::uint16_t);
bool translated_bank_d0(Cpu&, std::uint16_t);
bool translated_bank_d1(Cpu&, std::uint16_t);
bool translated_bank_d2(Cpu&, std::uint16_t);
bool translated_bank_d3(Cpu&, std::uint16_t);
bool translated_bank_d4(Cpu&, std::uint16_t);
bool translated_bank_d5(Cpu&, std::uint16_t);
bool translated_bank_d6(Cpu&, std::uint16_t);
bool translated_bank_d7(Cpu&, std::uint16_t);
bool translated_bank_d8(Cpu&, std::uint16_t);
bool translated_bank_d9(Cpu&, std::uint16_t);
bool translated_bank_da(Cpu&, std::uint16_t);
bool translated_bank_db(Cpu&, std::uint16_t);
bool translated_bank_dc(Cpu&, std::uint16_t);
bool translated_bank_dd(Cpu&, std::uint16_t);
bool translated_bank_de(Cpu&, std::uint16_t);
bool translated_bank_df(Cpu&, std::uint16_t);
bool translated_bank_e0(Cpu&, std::uint16_t);
bool translated_bank_e1(Cpu&, std::uint16_t);
bool translated_bank_e2(Cpu&, std::uint16_t);
bool translated_bank_e3(Cpu&, std::uint16_t);
bool translated_bank_e4(Cpu&, std::uint16_t);
bool translated_bank_e5(Cpu&, std::uint16_t);
bool translated_bank_e6(Cpu&, std::uint16_t);
bool translated_bank_e7(Cpu&, std::uint16_t);
bool translated_bank_e8(Cpu&, std::uint16_t);
bool translated_bank_e9(Cpu&, std::uint16_t);
bool translated_bank_ea(Cpu&, std::uint16_t);
bool translated_bank_eb(Cpu&, std::uint16_t);
bool translated_bank_ec(Cpu&, std::uint16_t);
bool translated_bank_ed(Cpu&, std::uint16_t);
bool translated_bank_ee(Cpu&, std::uint16_t);
bool translated_bank_ef(Cpu&, std::uint16_t);
bool translated_bank_f0(Cpu&, std::uint16_t);
bool translated_bank_f1(Cpu&, std::uint16_t);
bool translated_bank_f2(Cpu&, std::uint16_t);
bool translated_bank_f3(Cpu&, std::uint16_t);
bool translated_bank_f4(Cpu&, std::uint16_t);
bool translated_bank_f5(Cpu&, std::uint16_t);
bool translated_bank_f6(Cpu&, std::uint16_t);
bool translated_bank_f7(Cpu&, std::uint16_t);
bool translated_bank_f8(Cpu&, std::uint16_t);
bool translated_bank_f9(Cpu&, std::uint16_t);
bool translated_bank_fa(Cpu&, std::uint16_t);
bool translated_bank_fb(Cpu&, std::uint16_t);
bool translated_bank_fc(Cpu&, std::uint16_t);
bool translated_bank_fd(Cpu&, std::uint16_t);
bool translated_bank_fe(Cpu&, std::uint16_t);
bool translated_bank_ff(Cpu&, std::uint16_t);

std::uint32_t canonical_rom_address(std::uint32_t address) {
    address &= 0xFFFFFF;
    const auto bank = address >> 16;
    if (bank == 0x7E || bank == 0x7F) return 0xFFFFFFFF;
    if ((bank & 0x40) == 0 && (address & 0xFFFF) < 0x8000) return 0xFFFFFFFF;
    address = 0xC00000 | (address & 0x3FFFFF);
    // The 3 MiB HiROM cartridge mirrors its last MiB in F0-FF/70-7D.
    if (address >= 0xF00000) address -= 0x100000;
    return address;
}

bool translated_step(Cpu& c) {
    const auto address = canonical_rom_address(c.pc);
    switch (address >> 16) {
    case 0xC0: return translated_bank_c0(c, static_cast<std::uint16_t>(address));
    case 0xC1: return translated_bank_c1(c, static_cast<std::uint16_t>(address));
    case 0xC2: return translated_bank_c2(c, static_cast<std::uint16_t>(address));
    case 0xC3: return translated_bank_c3(c, static_cast<std::uint16_t>(address));
    case 0xC4: return translated_bank_c4(c, static_cast<std::uint16_t>(address));
    case 0xC5: return translated_bank_c5(c, static_cast<std::uint16_t>(address));
    case 0xC6: return translated_bank_c6(c, static_cast<std::uint16_t>(address));
    case 0xC7: return translated_bank_c7(c, static_cast<std::uint16_t>(address));
    case 0xC8: return translated_bank_c8(c, static_cast<std::uint16_t>(address));
    case 0xC9: return translated_bank_c9(c, static_cast<std::uint16_t>(address));
    case 0xCA: return translated_bank_ca(c, static_cast<std::uint16_t>(address));
    case 0xCB: return translated_bank_cb(c, static_cast<std::uint16_t>(address));
    case 0xCC: return translated_bank_cc(c, static_cast<std::uint16_t>(address));
    case 0xCD: return translated_bank_cd(c, static_cast<std::uint16_t>(address));
    case 0xCE: return translated_bank_ce(c, static_cast<std::uint16_t>(address));
    case 0xCF: return translated_bank_cf(c, static_cast<std::uint16_t>(address));
    case 0xD0: return translated_bank_d0(c, static_cast<std::uint16_t>(address));
    case 0xD1: return translated_bank_d1(c, static_cast<std::uint16_t>(address));
    case 0xD2: return translated_bank_d2(c, static_cast<std::uint16_t>(address));
    case 0xD3: return translated_bank_d3(c, static_cast<std::uint16_t>(address));
    case 0xD4: return translated_bank_d4(c, static_cast<std::uint16_t>(address));
    case 0xD5: return translated_bank_d5(c, static_cast<std::uint16_t>(address));
    case 0xD6: return translated_bank_d6(c, static_cast<std::uint16_t>(address));
    case 0xD7: return translated_bank_d7(c, static_cast<std::uint16_t>(address));
    case 0xD8: return translated_bank_d8(c, static_cast<std::uint16_t>(address));
    case 0xD9: return translated_bank_d9(c, static_cast<std::uint16_t>(address));
    case 0xDA: return translated_bank_da(c, static_cast<std::uint16_t>(address));
    case 0xDB: return translated_bank_db(c, static_cast<std::uint16_t>(address));
    case 0xDC: return translated_bank_dc(c, static_cast<std::uint16_t>(address));
    case 0xDD: return translated_bank_dd(c, static_cast<std::uint16_t>(address));
    case 0xDE: return translated_bank_de(c, static_cast<std::uint16_t>(address));
    case 0xDF: return translated_bank_df(c, static_cast<std::uint16_t>(address));
    case 0xE0: return translated_bank_e0(c, static_cast<std::uint16_t>(address));
    case 0xE1: return translated_bank_e1(c, static_cast<std::uint16_t>(address));
    case 0xE2: return translated_bank_e2(c, static_cast<std::uint16_t>(address));
    case 0xE3: return translated_bank_e3(c, static_cast<std::uint16_t>(address));
    case 0xE4: return translated_bank_e4(c, static_cast<std::uint16_t>(address));
    case 0xE5: return translated_bank_e5(c, static_cast<std::uint16_t>(address));
    case 0xE6: return translated_bank_e6(c, static_cast<std::uint16_t>(address));
    case 0xE7: return translated_bank_e7(c, static_cast<std::uint16_t>(address));
    case 0xE8: return translated_bank_e8(c, static_cast<std::uint16_t>(address));
    case 0xE9: return translated_bank_e9(c, static_cast<std::uint16_t>(address));
    case 0xEA: return translated_bank_ea(c, static_cast<std::uint16_t>(address));
    case 0xEB: return translated_bank_eb(c, static_cast<std::uint16_t>(address));
    case 0xEC: return translated_bank_ec(c, static_cast<std::uint16_t>(address));
    case 0xED: return translated_bank_ed(c, static_cast<std::uint16_t>(address));
    case 0xEE: return translated_bank_ee(c, static_cast<std::uint16_t>(address));
    case 0xEF: return translated_bank_ef(c, static_cast<std::uint16_t>(address));
    case 0xF0: return translated_bank_f0(c, static_cast<std::uint16_t>(address));
    case 0xF1: return translated_bank_f1(c, static_cast<std::uint16_t>(address));
    case 0xF2: return translated_bank_f2(c, static_cast<std::uint16_t>(address));
    case 0xF3: return translated_bank_f3(c, static_cast<std::uint16_t>(address));
    case 0xF4: return translated_bank_f4(c, static_cast<std::uint16_t>(address));
    case 0xF5: return translated_bank_f5(c, static_cast<std::uint16_t>(address));
    case 0xF6: return translated_bank_f6(c, static_cast<std::uint16_t>(address));
    case 0xF7: return translated_bank_f7(c, static_cast<std::uint16_t>(address));
    case 0xF8: return translated_bank_f8(c, static_cast<std::uint16_t>(address));
    case 0xF9: return translated_bank_f9(c, static_cast<std::uint16_t>(address));
    case 0xFA: return translated_bank_fa(c, static_cast<std::uint16_t>(address));
    case 0xFB: return translated_bank_fb(c, static_cast<std::uint16_t>(address));
    case 0xFC: return translated_bank_fc(c, static_cast<std::uint16_t>(address));
    case 0xFD: return translated_bank_fd(c, static_cast<std::uint16_t>(address));
    case 0xFE: return translated_bank_fe(c, static_cast<std::uint16_t>(address));
    case 0xFF: return translated_bank_ff(c, static_cast<std::uint16_t>(address));
    default: return false;
    }
}
std::size_t translated_instruction_count() { return 138660; }
} // namespace eb
