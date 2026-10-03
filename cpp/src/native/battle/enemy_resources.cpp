#include "eb/native/battle/enemy_resources.hpp"
#include <stdexcept>

namespace eb::native::battle {
std::shared_ptr<const EnemyResources> EnemyResources::import(
    std::span<const std::uint8_t> image, GameVersion version) {
    unsigned table, stride, shift;
    switch (version) {
    case GameVersion::US: table = 0x159589; stride = 94; shift = 0; break;
    case GameVersion::JP: table = 0x15a440; stride = 77; shift = 17; break;
    default: throw std::invalid_argument("Unsupported enemy catalog region");
    }
    if (table > image.size() || count * stride > image.size() - table)
        throw std::invalid_argument("Truncated enemy configuration table");
    auto result = std::shared_ptr<EnemyResources>(new EnemyResources(version));
    result->stride_ = stride; result->shift_ = shift;
    result->table_.assign(image.begin() + table, image.begin() + table + count * stride);
    for (unsigned id = 0; id < count; ++id) {
        const auto row = image.subspan(table + id * stride, stride);
        const auto byte = [&](unsigned us_offset) { return row[us_offset - shift]; };
        const auto word = [&](unsigned offset) {
            return std::uint16_t(byte(offset) | unsigned(byte(offset + 1)) << 8);
        };
        auto& e = result->enemies_[id];
        e.gender = byte(26); e.sprite = word(28); e.hp = word(33); e.pp = word(35);
        e.experience = word(37) | std::uint32_t(word(39)) << 16;
        e.money = word(41); e.level = byte(54);
        e.offense = byte(56); e.defense = byte(58);
        e.speed = byte(60); e.guts = byte(61); e.luck = byte(62);
        e.fire = byte(63); e.freeze = byte(64); e.flash = byte(65);
        e.paralysis = byte(66); e.hypnosis_brainshock = byte(67);
        e.action_pattern = byte(69); e.final_action = word(78);
        e.final_argument = byte(84); e.boss = byte(86);
        for (unsigned i = 0; i < 4; ++i) {
            e.actions[i] = word(70 + i * 2); e.arguments[i] = byte(80 + i);
        }
        e.iq = byte(85); e.initial_status = byte(89); e.row = byte(91);
    }
    return result;
}
std::pair<std::uint16_t, std::uint8_t> EnemyResources::action(unsigned id, unsigned index) const {
    (void)enemies_.at(id);
    const auto base = id * stride_;
    const auto action_at = base + 70 - shift_ + index * 2;
    const auto argument_at = base + 80 - shift_ + index;
    return {std::uint16_t(table_.at(action_at) | unsigned(table_.at(action_at + 1)) << 8),
            table_.at(argument_at)};
}
} // namespace eb::native::battle
