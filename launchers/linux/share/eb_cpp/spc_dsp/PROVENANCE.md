# Standalone S-DSP synthesis

These files were downloaded directly from
https://github.com/blarggs-audio-libraries/snes_spc at commit
`ec8ee2bbe30451614c1d02a83f7af1c97d497d45` on 2026-09-26.
They are the accurate standalone S-DSP implementation from snes_spc 0.9.0,
copyright Shay Green, licensed under LGPL-2.1-or-later; see `LICENSE` and the
source-file notices.

Only `snes_spc/SPC_DSP.cpp`, `snes_spc/SPC_DSP.h`, and their four required
`blargg_*.h` headers are included, unmodified. No SPC700 CPU interpreter,
SNES_SPC class, music-file player, or previous project runtime is included.
The game's SPC700 instructions are compiled from its assembly by this project's
translator; this library implements the DSP hardware they control.

The author's standalone DSP description is at
https://www.slack.net/~ant/libs/audio.html#snes_spc.
