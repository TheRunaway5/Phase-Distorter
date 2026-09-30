#pragma once

#include <cstddef>
#include <cstdint>
#include <span>
#include <vector>

namespace eb::native {
// Authored content codec. The caller supplies a strict decoded-size limit;
// source offsets and forward/overlapping/reversed references are all checked.
std::vector<std::uint8_t>
decompress_content(std::span<const std::uint8_t> content, std::size_t offset,
                   std::size_t maximum_output);
} // namespace eb::native
