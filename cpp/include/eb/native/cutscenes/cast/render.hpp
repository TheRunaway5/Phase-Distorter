#pragma once
#include "eb/native/cutscenes/display_view.hpp"
#include "eb/native/battle/background_loader.hpp"
namespace eb::native::cutscenes::cast {
std::shared_ptr<const DirectSceneFrame> render(const DisplayView &,BattleBackgroundSceneFrame,
                                              const battle::BackgroundDisplayState &);
}
