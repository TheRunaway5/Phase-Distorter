#pragma once
#include "eb/native/world_encounter.hpp"

namespace eb::native {
struct WorldLayerConfiguration {
  std::array<bool, 5> main{}, sub{};
  std::array<bool, 6> math{};
  bool use_subscreen{}, subtract{}, half{};
  ColorWindowPolicy clip = ColorWindowPolicy::Never;
  ColorWindowPolicy prevent = ColorWindowPolicy::Never;
};
class WorldLayerConfigurations {
public:
  WorldLayerConfigurations(std::span<const std::uint8_t>, GameVersion);
  const WorldLayerConfiguration &at(unsigned selection) const;
private:
  std::array<WorldLayerConfiguration, 10> configurations_{};
};
struct WorldLayerSelection { unsigned value{}; };

void apply_world_layer_configuration(const WorldLayerConfigurations &,
    const WorldLayerSelection &, WorldEncounterVisualState &);
} // namespace eb::native
