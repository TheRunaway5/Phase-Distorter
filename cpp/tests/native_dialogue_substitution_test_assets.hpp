#pragma once

#include "eb/native/dialogue/substitution_resources.hpp"
#include <algorithm>
#include <array>
#include <vector>

// Test-only generated text bytes and descriptor records. No original authored
// names or other game content are included. overlay() combines this fixture
// with the independent font/window image without overwriting its resources.
namespace dialogue_substitution_test_assets {
struct Input {
    eb::GameVersion version;
    std::vector<std::uint8_t> image = std::vector<std::uint8_t>(0x300000);
    unsigned stats, items, teleports, enemies, npc, abilities, names, suffixes;
    unsigned item_stride, teleport_stride, enemy_stride, enemy_prefix, name_size;
    unsigned game_state, party, party_stride, party_name_size, favorite_size;
    explicit Input(eb::GameVersion value) : version(value) {
        const bool jp = value == eb::GameVersion::JP;
        stats = jp ? 0x43305 : 0x4550f;
        items = jp ? 0x157000 : 0x155000; item_stride = jp ? 24 : 39;
        teleports = jp ? 0x15899e : 0x157880; teleport_stride = jp ? 16 : 31;
        enemies = jp ? 0x15a440 : 0x159589; enemy_stride = jp ? 77 : 94; enemy_prefix = jp ? 0 : 1;
        npc = jp ? 0x159dda : 0x158f23;
        abilities = jp ? 0x159a06 : 0x158a50;
        names = jp ? 0x159d30 : 0x158d7a; name_size = jp ? 10 : 25;
        suffixes = jp ? 0x3ec91 : 0x3f112;
        game_state = jp ? 0x9aa9 : 0x97f5; party = jp ? 0x9c7f : 0x99ce;
        party_stride = jp ? 94 : 95; party_name_size = jp ? 4 : 5; favorite_size = jp ? 9 : 12;
        for (unsigned i = 0; i < 254; ++i) record(items + i * item_stride,name_size,i);
        for (unsigned i = 0; i < 17; ++i) {
            record(teleports + i * teleport_stride,name_size,i + 31);
            record(names + i * name_size,name_size,i + 63);
        }
        for (unsigned i = 0; i < 231; ++i) {
            if (enemy_prefix) image[enemies + i * enemy_stride] = 0xee;
            record(enemies + i * enemy_stride + enemy_prefix,name_size,i + 97);
        }
        for (unsigned i = 0; i < 19; ++i) {
            image[npc + i * 2] = std::uint8_t(0x80 + i); // Non-name metadata is not consulted.
            image[npc + i * 2 + 1] = std::uint8_t((i * 13) % 231);
        }
        for (unsigned i = 1; i < 53; ++i) {
            image[abilities + i * 15] = std::uint8_t(i % 17 + 1);
            image[abilities + i * 15 + 1] = std::uint8_t(i % 5 + 1);
        }
        for (unsigned i = 0; i < 5; ++i) image[suffixes + i * 2] = std::uint8_t(0x71 + i);
        const std::array<unsigned, 7> global_offsets{0,12,36,42,48,48 + favorite_size,52 + favorite_size};
        const std::array<unsigned, 7> global_tags{12,24,6,6,favorite_size,0x84,0x84};
        for (unsigned i = 0; i < 7; ++i) descriptor(i + 1,global_tags[i],game_state + global_offsets[i]);
        const std::array<unsigned, 22> offsets{0,5,6,69,71,10,75,77,12,21,22,23,24,25,26,27,34,28,29,30,31,32};
        const std::array<unsigned, 22> tags{party_name_size,0x81,0x84,0x82,0x82,0x82,0x82,0x82,0x82,
                                          0x81,0x81,0x81,0x81,0x81,0x81,0x81,0x81,0x81,0x81,0x81,0x81,0x81};
        for (unsigned member = 0; member < 4; ++member)
            for (unsigned field = 0; field < offsets.size(); ++field)
                descriptor(8 + member * 22 + field,tags[field],
                           party + member * party_stride + offsets[field] - (jp && field ? 1 : 0));
    }
    void put(unsigned at, unsigned value) { image.at(at) = std::uint8_t(value); image.at(at + 1) = std::uint8_t(value >> 8); }
    void put32(unsigned at, unsigned value) { put(at,value); put(at + 2,value >> 16); }
    void descriptor(unsigned id, unsigned tag, unsigned address) {
        image.at(stats + id * 3) = std::uint8_t(tag); put(stats + id * 3 + 1,address);
    }
    static std::uint8_t letter(unsigned seed) { return std::uint8_t(0x61 + seed % 26); }
    void record(unsigned at, unsigned size, unsigned seed) {
        std::fill_n(image.begin() + at,size,std::uint8_t(0xdd));
        for (unsigned i = 0; i < 4; ++i) image[at + i] = letter(seed + i);
        image[at + 4] = 0;
    }
    std::shared_ptr<const eb::native::dialogue::SubstitutionResources> load() const {
        return eb::native::dialogue::SubstitutionResources::import(image,version);
    }
    void overlay(std::vector<std::uint8_t>& destination) const {
        if (destination.size() < image.size()) destination.resize(image.size());
        const std::array<std::pair<unsigned,unsigned>, 8> ranges{{
            {stats,96 * 3},{items,254 * item_stride},{teleports,17 * teleport_stride},
            {enemies,231 * enemy_stride},{npc,19 * 2},{abilities,54 * 15},
            {names,17 * name_size},{suffixes,10}
        }};
        for (auto [first,size] : ranges)
            std::copy_n(image.begin() + first,size,destination.begin() + first);
    }
};
} // namespace dialogue_substitution_test_assets
