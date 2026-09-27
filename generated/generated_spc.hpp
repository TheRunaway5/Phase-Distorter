// Shared source-translated sound driver dispatch. The implementation selects
// only known SPC instruction addresses and verifies their currently loaded RAM
// bytes. False means the site or bytes are unsupported, not permission for an
// opcode-decoder fallback. Both regional programs use this compiled driver.
#pragma once
namespace eb {
class Spc;
bool spc_translated_step(Spc&);
}
