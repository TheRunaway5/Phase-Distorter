#pragma once
#include "eb/native/cutscenes/display.hpp"
namespace eb::native::cutscenes::ending {
// Samples the actual regional credits VRAM layout and displayed scrolls.
// Background priorities, transparency and palette identities remain separate
// draw commands for the shared publication owner.
std::shared_ptr<const DirectSceneFrame> render(const DisplayView &,const battle::BackgroundDisplayState &);
}
