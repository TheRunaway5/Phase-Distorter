#pragma once

#include <cstddef>
#include <cstdint>
#include <string>
#include <vector>

namespace eb {
struct InputChange {
    std::uint64_t frame;
    std::uint16_t buttons;
};

// A held JOY1 mask begins at each strictly increasing hardware-frame boundary.
std::vector<InputChange> input_script(const std::string &path);
// CLI and replay fields share decimal/0x parsing and reject trailing garbage.
std::uint64_t parse_unsigned_integer(const std::string &text, const std::string &name);
// A timeline is consumed in nondecreasing hardware-frame order. Repeated
// requests for the same frame do not consume an event twice. Physical buttons
// are supplied separately so replay-only sessions can exclude them explicitly.
class InputReplay {
  public:
    explicit InputReplay(std::vector<InputChange> changes, std::uint16_t initial_buttons = 0);
    std::uint16_t buttons_for_frame(std::uint64_t frame, std::uint16_t physical_buttons = 0);
    // Reposition after a save-state load, including a jump before the first event.
    void seek(std::uint64_t frame);

  private:
    std::vector<InputChange> changes_;
    std::size_t next_change_{};
    std::uint16_t held_buttons_{};
    std::uint16_t initial_buttons_{};
};
} // namespace eb
