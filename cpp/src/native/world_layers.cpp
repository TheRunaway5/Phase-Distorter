#include "eb/native/world_layers.hpp"
#include <stdexcept>

namespace eb::native {
namespace {
template<std::size_t N>
std::array<bool, N> layers(unsigned bits) {
  std::array<bool, N> result{};
  for (unsigned i = 0; i < N; ++i) result[i] = (bits & (1u << i)) != 0;
  return result;
}
}
WorldLayerConfigurations::WorldLayerConfigurations(
    std::span<const std::uint8_t> image, GameVersion version) {
  if (version != GameVersion::US && version != GameVersion::JP)
    throw std::invalid_argument("Invalid layer configuration region");
  const unsigned start = version == GameVersion::US ? 0xaff1 : 0xafd0;
  if (image.size() < start + 41)
    throw std::invalid_argument("Truncated layer configuration content");
  for (unsigned i = 0; i < configurations_.size(); ++i) {
    auto &c = configurations_[i];
    const auto main = image[start + i], sub = image[start + 11 + i];
    const auto window = image[start + 21 + i], math = image[start + 31 + i];
    if ((main & ~31) || (sub & ~31) || (window & 1))
      throw std::invalid_argument("Unsupported authored layer configuration");
    c.main = layers<5>(main); c.sub = layers<5>(sub);
    c.math = layers<6>(math);
    c.use_subscreen = (window & 2) != 0;
    c.clip = ColorWindowPolicy((window >> 6) & 3);
    c.prevent = ColorWindowPolicy((window >> 4) & 3);
    c.subtract = (math & 128) != 0; c.half = (math & 64) != 0;
  }
}
const WorldLayerConfiguration &WorldLayerConfigurations::at(unsigned id) const {
  return configurations_.at(id);
}
void apply_world_layer_configuration(const WorldLayerConfigurations &configurations,
    const WorldLayerSelection &selection, WorldEncounterVisualState &visual) {
  const auto &c = configurations.at(selection.value);
  visual.visible_layers = c.main; visual.subscreen_layers = c.sub;
  visual.color_math_layers = c.math; visual.use_subscreen = c.use_subscreen;
  visual.subtract = c.subtract; visual.half_intensity = c.half;
  visual.clip_colors = c.clip; visual.prevent_math = c.prevent;
}
} // namespace eb::native
