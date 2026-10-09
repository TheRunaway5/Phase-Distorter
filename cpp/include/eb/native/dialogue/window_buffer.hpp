#pragma once
#include "eb/native/dialogue/window_graphics.hpp"

namespace eb::native::dialogue {
class Conversation;
// LOAD_WINDOW_GFX borrows the actual retained BUFFER, including the artwork
// after the decoded font. Composition and preparation consume no video time.
// The caller subsequently executes its original COPY/TRANSFER publications.
void prepare_window_buffer(WindowGraphics &,std::span<std::uint8_t,65536>,
    const PartyNameInputs &,unsigned flavor,Conversation *parent=nullptr);
}
