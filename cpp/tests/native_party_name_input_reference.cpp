// PartyNameSnapshot -> complete native WindowGraphics preparation versus
// original LOAD_WINDOW_GFX. Expected pixels come only from original source
// execution over local imported content. Original records are seeded by named
// source offsets, never by copying the adapter's serialized result.
// This proof covers preparation/shared brush, not GPU/frame/audio scheduling.
#include "eb/native/party/name_inputs.hpp"
#include "eb/asset_store.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include <algorithm>
#include <array>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>

namespace {
namespace dialogue = eb::native::dialogue;
namespace party = eb::native::party;
void require(bool condition,const std::string& message) {
    if (!condition) throw std::runtime_error(message);
}
struct Layout { unsigned load,party,stride,flavor,brush,position,column,render; };
Layout layout(eb::GameVersion version) {
    if (version == eb::GameVersion::JP)
        return {0xc459ab,0x9c7f,94,0x9c7e,0x3918,0xa029,0xa02b,0};
    return {0xc47c3f,0x99ce,95,0x99cd,0x3492,0x9e23,0x9e25,0x9652};
}
struct Reference {
    eb::GameVersion version;
    Layout p;
    std::unique_ptr<eb::SnesBus> bus;
    eb::MainCpu65816 cpu;
    unsigned cases{},raw_glyphs{};
    std::uint64_t steps{},art_pixels{},brush_pixels{};
    explicit Reference(const eb::GameAssets& assets)
        : version(assets.version),p(layout(version)),bus(std::make_unique<eb::SnesBus>(assets.image,version)),cpu(*bus) {
        cpu.set_runtime(eb::MainCpuRuntime::Legacy);
        bus->work_ram[0x0d] = 0x80; bus->write_byte(0x2100,0x80);
        call(0xc200d9);
        call(version == eb::GameVersion::US ? 0xc43f53 : 0xc43be8);
    }
    unsigned word(unsigned at) const { return bus->work_ram.at(at) | (unsigned(bus->work_ram.at(at + 1)) << 8); }
    void put(unsigned at,std::uint32_t value,unsigned bytes) {
        for (unsigned i = 0; i < bytes; ++i) bus->work_ram.at(at + i) = std::uint8_t(value >> (8 * i));
    }
    void call(unsigned entry) {
        cpu.emulation_mode = false; cpu.status_register = eb::MainCpu65816::InterruptDisable;
        cpu.direct_page = 0x1e00; cpu.stack_pointer = 0x1fff; cpu.data_bank = 0x7e;
        cpu.accumulator = cpu.x_index = cpu.y_index = 0;
        const auto trampoline = (entry & 0xff0000) | 0xff00;
        cpu.program_counter = trampoline; cpu.execute_instruction<0x22>(entry,4);
        for (unsigned i = 0; i < 5'000'000; ++i) {
            if (cpu.program_counter == trampoline + 4 && cpu.stack_pointer == 0x1fff) {
                require(cpu.direct_page == 0x1e00 && cpu.data_bank == 0x7e,"Original loader failed caller ABI");
                return;
            }
            if (version == eb::GameVersion::US && cpu.program_counter == 0xc44b3a) {
                require(cpu.accumulator == 6 && cpu.x_index == 16,"Original name did not use raw Battle6 raster");
                ++raw_glyphs;
            }
            cpu.step_instruction(); ++steps;
        }
        throw std::runtime_error("Original name initialization failed to return: " + cpu.describe_registers());
    }
    void seed(const party::State& state) {
        const unsigned delta = version == eb::GameVersion::JP ? 1 : 0;
        for (unsigned member = 0; member < 4; ++member) {
            const auto at = p.party + member * p.stride;
            std::fill_n(bus->work_ram.begin() + at,p.stride,0xa5);
            const auto name = state.name_field(member + 1);
            std::copy(name.begin(),name.end(),bus->work_ram.begin() + at);
            const auto& c = state.character(member + 1);
            put(at + 5 - delta,c.level,1); put(at + 6 - delta,c.experience,4);
            put(at + 10 - delta,c.maximum_hp,2); put(at + 12 - delta,c.maximum_pp,2);
            for (unsigned g = 0; g < 7; ++g) put(at + 14 - delta + g,c.afflictions[g],1);
            // Named fixed source offsets keep this oracle independent of the
            // production field serializer and the C++ struct's memory layout.
            put(at + 21 - delta,c.offense,1); put(at + 22 - delta,c.defense,1);
            put(at + 23 - delta,c.speed,1); put(at + 24 - delta,c.guts,1);
            put(at + 25 - delta,c.luck,1); put(at + 26 - delta,c.vitality,1); put(at + 27 - delta,c.iq,1);
            put(at + 28 - delta,c.base_offense,1); put(at + 29 - delta,c.base_defense,1);
            put(at + 30 - delta,c.base_speed,1); put(at + 31 - delta,c.base_guts,1);
            put(at + 32 - delta,c.base_luck,1); put(at + 33 - delta,c.base_vitality,1);
            put(at + 34 - delta,c.base_iq,1);
            for (unsigned i = 0; i < 14; ++i) put(at + 35 - delta + i,c.items[i],1);
            for (unsigned i = 0; i < 4; ++i) put(at + 49 - delta + i,c.equipment[i],1);
        }
    }
    dialogue::WindowArtwork cell(unsigned address) const {
        dialogue::WindowArtwork pixels;
        for (unsigned y = 0; y < 8; ++y) for (unsigned x = 0; x < 8; ++x)
            pixels[y * 8 + x] = ((bus->work_ram[address + y * 2] >> (7 - x)) & 1) |
                (((bus->work_ram[address + y * 2 + 1] >> (7 - x)) & 1) << 1);
        return pixels;
    }
    void prepare(const party::State& party,dialogue::WindowGraphics& graphics,dialogue::TextOutput& output,unsigned flavor) {
        seed(party); bus->work_ram[p.flavor] = std::uint8_t(flavor);
        unsigned expected_glyphs{};
        if (version == eb::GameVersion::US)
            for (unsigned i = 0; i < 4; ++i) {
                auto at = p.party + i * p.stride;
                while (bus->work_ram[at++]) ++expected_glyphs;
            }
        const auto before_glyphs = raw_glyphs;
        const auto original_visible = bus->video_ram;
        const auto published = graphics.frame(); const auto frozen = published->pixels;
        const auto before_brush = output.composition_snapshot();
        const party::PartyNameSnapshot names(party);
        call(p.load); graphics.prepare(names.inputs(),flavor);
        require(raw_glyphs - before_glyphs == expected_glyphs,"Original glyph scan did not traverse seeded stat continuation");
        require(bus->video_ram == original_visible && graphics.frame()->pixels == frozen && published->pixels == frozen,
                "Preparation published or mutated a previously captured frame");
        const auto prepared = graphics.prepared_artwork();
        require(prepared.size() == 1184,"Native prepared extent changed");
        for (unsigned i = 0; i < prepared.size(); ++i) {
            require(prepared[i] == cell(0x10000 + i * 16),"Native/source prepared name/status/base artwork differs cell=" + std::to_string(i));
            art_pixels += 64;
        }
        const auto brush = output.composition_snapshot();
        if (version == eb::GameVersion::US) {
            require(brush.columns.size() == 52,"US shared brush extent changed");
            for (unsigned i = 0; i < 52; ++i) for (unsigned half = 0; half < 2; ++half) {
                const auto expected = cell(p.brush + i * 32 + half * 16);
                require(std::equal(expected.begin(),expected.end(),brush.columns[i].begin() + half * 64),
                        "Native/source complete shared brush differs");
                brush_pixels += 64;
            }
            require(brush.brush_column == word(p.column) && brush.fractional_offset == (word(p.position) & 7) &&
                        brush.publication_position == word(p.render) && brush.partial_publication == bool(word(p.render + 2)),
                    "Raw-name continuation changed source brush cursor/publication state");
        } else require(brush == before_brush,"JP fixed-name preparation modified variable brush history");
        ++cases;
    }
};
void run(const eb::GameAssets& assets) {
    Reference source(assets);
    party::State party(assets.version);
    dialogue::State state;
    dialogue::TextOutput output(dialogue::FontResources::import(assets.image,assets.version),state);
    dialogue::WindowGraphics graphics(dialogue::WindowInitializationResources::import(assets.image,assets.version),output);
    for (unsigned scenario = 0; scenario < 8; ++scenario) {
        for (unsigned id = 1; id <= 4; ++id) {
            auto name = party.name_field(id);
            for (unsigned i = 0; i < name.size(); ++i)
                name[i] = std::uint8_t((assets.version == eb::GameVersion::US ? 0x71 : 0x41) + i + id);
            auto& c = party.character(id);
            c = {};
            if (scenario == 0) name[id % name.size()] = 0;
            if (scenario >= 2) c.level = std::uint8_t(48 + scenario + id); // Includes imported records96..127.
            if (scenario >= 3) c.experience = 0x00434241;
            if (scenario >= 4) { c.experience = 0x44434241; c.maximum_hp = 0x4645; c.maximum_pp = 0x4847; }
            if (scenario >= 5) c.afflictions.fill(0x71);
            if (scenario >= 6) {
                c.offense = c.defense = c.speed = c.guts = c.luck = c.vitality = c.iq = 0x72;
                c.base_offense = c.base_defense = c.base_speed = c.base_guts = c.base_luck = c.base_vitality = c.base_iq = 0x73;
            }
            if (scenario == 7) { c.items.fill(0x74); c.equipment = {0x75,0x76,0x77,0}; }
        }
        source.prepare(party,graphics,output,scenario % 5 + 1);
    }
    std::cout << (assets.version == eb::GameVersion::US ? "US" : "JP") << ": " << source.cases
              << " complete LOAD_WINDOW_GFX preparations, " << source.raw_glyphs << " raw glyphs, "
              << source.art_pixels << " indexed artwork pixels, " << source.brush_pixels
              << " shared brush pixels; " << source.steps << " original instructions\n";
}
}
int main(int argc,char** argv) {
    try {
        if (argc < 2) { std::cout << "SKIP party-name source reference: local imported packs required\n"; return 77; }
        for (int i = 1; i < argc; ++i) run(eb::load_game_assets(argv[i],eb::asset_profiles()));
    } catch (const std::exception& error) { std::cerr << error.what() << '\n'; return 1; }
}
