#include "eb/native/world_music.hpp"
#include <stdexcept>

namespace eb::native {
WorldMusicData::WorldMusicData(std::span<const std::uint8_t> image, GameVersion version)
    : version_(version) {
    unsigned sectors, pointers;
    switch (version) {
    case GameVersion::US: sectors = 0x1cd637; pointers = 0xf58ef; break;
    case GameVersion::JP: sectors = 0x1cd634; pointers = 0xf592b; break;
    default: throw std::invalid_argument("Unsupported world music region");
    }
    const auto byte = [&](unsigned offset) {
        if (offset >= image.size()) throw std::invalid_argument("Truncated world music content");
        return image[offset];
    };
    const auto word = [&](unsigned offset) { return byte(offset) | unsigned(byte(offset + 1)) << 8; };
    for (unsigned i = 0; i < sectors_.size(); ++i) sectors_[i] = byte(sectors + i);
    // Group0 is the source's null entry. It does not become a guessed song:
    // actual selection of its adjacent-content alias remains a domain error.
    for (unsigned group = 1; group < groups_.size(); ++group) {
        unsigned offset = 0xf0000 + (word(pointers + group * 2) & 0x7fff);
        for (unsigned rows = 0;; ++rows, offset += 4) {
            if (rows >= 1024) throw std::invalid_argument("Unterminated world music predicates");
            auto flag = std::uint16_t(word(offset));
            groups_[group].push_back({flag, byte(offset + 2), byte(offset + 3)});
            if (!flag) break;
            if (!(flag & 0x7fff) || (flag & 0x7fff) > 1024)
                throw std::invalid_argument("World music flag exceeds authored storage");
        }
    }
}
unsigned WorldMusicData::group(std::uint16_t x, std::uint16_t y) const {
    // Source signed division by128 precedes row*32; actual map domain is the
    // declared positive32x80 sector field. Invalid aliases never become songs.
    if (x >= 8192 || y >= 10240) throw std::out_of_range("World music coordinates exceed imported sectors");
    return sectors_.at((y / 128) * 32 + x / 256);
}
unsigned WorldMusicData::select(unsigned group, std::span<const std::uint8_t> flags) const {
    if (flags.size() != 128) throw std::invalid_argument("World music needs the actual128 flag bytes");
    const auto &entries = groups_.at(group);
    for (unsigned row = 0; row < entries.size(); ++row) {
        const auto flag = entries[row].event_flag;
        if (!flag) return row;
        const auto bit = (flag & 0x7fff) - 1;
        const bool value = (flags[bit / 8] >> (bit % 8)) & 1;
        // CMP #8000 / BLTEQ makes exactly8000 an unset predicate. Nonzero
        // lower bits were validated at import, retaining original> semantics.
        if (value == (flag > 0x8000)) return row;
    }
    throw std::out_of_range("World music selected the source null-content alias");
}
const WorldMusicEntry &WorldMusicData::entry(unsigned group, unsigned row) const { return groups_.at(group).at(row); }
} // namespace eb::native
