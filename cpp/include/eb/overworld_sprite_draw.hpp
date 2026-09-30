#pragma once
namespace eb {
class MainCpu65816;
class SnesBus;
class OverworldSpriteRuntime;
class GameSceneRenderer;
// Native ordinary draw service at the compatibility boundary. Retires the
// source callback and updates only its declared drawing/overlay state.
bool try_native_sprite_draw(MainCpu65816 &cpu, SnesBus &bus,
                            OverworldSpriteRuntime &runtime, GameSceneRenderer &renderer);
}
