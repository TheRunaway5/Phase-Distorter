#pragma once
#include "eb/native/cutscenes/display_view.hpp"
#include "eb/native/cutscenes/sound_stone/playback.hpp"
#include "eb/native/battle_background_scene.hpp"
#include "eb/native/battle/background_loader.hpp"

namespace eb::native::cutscenes::sound_stone {
// Pure capture from the actual published video/palette/scroll owners. The
// source selects16/32-pixel objects at VRAM word2000; each sprite remains in
// authored OAM order. This function never advances the background controller.
std::shared_ptr<const DirectSceneFrame> render(const DisplayView &,
    BattleBackgroundSceneFrame, const battle::BackgroundDisplayState &,
    std::span<const Sprite>);
}
