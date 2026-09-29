#include "eb/input_replay.hpp"
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <utility>

namespace eb {
std::uint64_t parse_unsigned_integer(const std::string &text, const std::string &name) {
    // Parse the whole field rather than accepting a valid prefix plus garbage.
    if (text.empty() || text.front() == '-')
        throw std::runtime_error(name + " requires an unsigned integer");
    std::size_t count = 0;
    const int base = text.starts_with("0x") || text.starts_with("0X") ? 16 : 10;
    auto value = std::stoull(text, &count, base);
    if (count != text.size())
        throw std::runtime_error("Invalid value for " + name + ": " + text);
    return value;
}

std::vector<InputChange> input_script(const std::string &path) {
    // Scripts describe a held joypad mask from each listed hardware frame onward.
    // Strictly increasing frame numbers make replay order unambiguous.
    std::vector<InputChange> changes;
    if (path.empty())
        return changes;
    std::ifstream input(path);
    if (!input)
        throw std::runtime_error("Cannot open input script: " + path);
    std::string line;
    unsigned line_number = 0;
    while (std::getline(input, line)) {
        ++line_number;
        if (auto comment = line.find('#'); comment != std::string::npos)
            line.erase(comment);
        std::istringstream fields(line);
        std::string frame_text, buttons_text, extra;
        if (!(fields >> frame_text))
            continue;
        const auto location = path + ':' + std::to_string(line_number);
        if (!(fields >> buttons_text) || fields >> extra)
            throw std::runtime_error(location + ": expected '<frame> <joymask>'");
        const auto frame = parse_unsigned_integer(frame_text, location + " frame");
        const auto buttons = parse_unsigned_integer(buttons_text, location + " joymask");
        if (buttons > 0xffff)
            throw std::runtime_error(location + ": joymask must fit in 16 bits");
        if (!changes.empty() && frame <= changes.back().frame)
            throw std::runtime_error(location + ": input frames must be strictly increasing");
        changes.push_back({frame, static_cast<std::uint16_t>(buttons)});
    }
    if (!input.eof())
        throw std::runtime_error("Cannot read input script: " + path);
    return changes;
}

InputReplay::InputReplay(std::vector<InputChange> changes, std::uint16_t initial_buttons)
    : changes_(std::move(changes)), held_buttons_(initial_buttons) {
    for (std::size_t index = 1; index < changes_.size(); ++index) {
        if (changes_[index].frame <= changes_[index - 1].frame)
            throw std::invalid_argument("Input replay frames must be strictly increasing");
    }
}

std::uint16_t InputReplay::buttons_for_frame(std::uint64_t frame, std::uint16_t physical_buttons) {
    // A CPU step can cross more than one hardware boundary (for example DMA).
    // Consume every event now due and retain its mask until the next change.
    while (next_change_ < changes_.size() && changes_[next_change_].frame <= frame)
        held_buttons_ = changes_[next_change_++].buttons;
    return held_buttons_ | physical_buttons;
}

} // namespace eb
