// Generated from ca65 instruction spans. Do not edit.
#pragma once
#include <cstddef>
#include <cstdint>
#include "eb/asset_store.hpp"
namespace eb::jp {
// Code-only template. Load an imported asset pack before constructing Bus.
const std::uint8_t* rom_data();
std::size_t rom_size();
AssetLayout asset_layout();
}
