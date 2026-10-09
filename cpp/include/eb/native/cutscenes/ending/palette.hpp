#pragma once
#include "eb/native/battle/palette_effects.hpp"
#include "eb/native/battle/psi_animation.hpp"
namespace eb::native::cutscenes::ending {
// The live BUFFER target, RGB slopes and 8.8 progress belong to the same
// scene scratch owner that map loading and authored DMA already borrow.
// These source helpers do not wait, tick actors, or publish a physical frame.
void prepare_photograph_palette(battle::PaletteBankState &,battle::PsiScratch &,
    std::uint16_t divisor,std::uint16_t palette_mask);
void advance_photograph_palette(battle::PaletteBankState &,battle::PsiScratch &);
void finish_photograph_palette(battle::PaletteBankState &,const battle::PsiScratch &);
}
