#pragma once
#include "native_world_startup_fixture.hpp"
#include "eb/native/world_scene_presentation.hpp"
#include "native_overlay_test_assets.hpp"
namespace map_load_test {
using namespace eb::native;
// The host borrows the retained animation staging, so the storage base is
// constructed before (and destroyed after) the base containing WindowHost.
struct RetainedMapState { WorldMapLoadState load_state; };
struct Fixture : RetainedMapState, startup_test::Fixture {
  WorldLayerConfigurations layer_data;
  WorldLayerSelection layers;
  WorldEncounterVisualState visual;
  WorldScenePresentation presentation;
  WorldStartupData startup_data;
  OverlaySprites overlay_data;
  WorldOverlayPlayback overlays;
  std::unique_ptr<WorldMapLoad> loader;
  explicit Fixture(startup_test::Resources &r) : startup_test::Fixture(r),
      layer_data(r.bytes,r.version),presentation(scene_colors,visual,layer_data,layers),
      startup_data(r.bytes,r.version),
      overlay_data(r.bytes.size()>0x200000 ? OverlaySprites(r.bytes,r.version,*r.sprites)
                                          : overlay_test::make(*r.sprites,r.version)),
      overlays(actors,overlay_data) {
    actors.bind_overlays(overlays);
    runtime->bind_presentation(presentation);
    runtime->refresh_world_capture();
    loader=std::make_unique<WorldMapLoad>(load_state,owners());
  }
  WorldMapLoadOwners owners() {
    return {*runtime,actors,enemies,talk,area,colors,*r.map,*r.palettes,*r.animations,
            spawn,random,windows,party,clock,presentation,scene_colors,*graphics,overlays};
  }
  void bind_startup() { startup->bind_map_load(*loader,startup_data,*graphics); }
};
}
