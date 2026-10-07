// The translated source program is an independent test oracle only. Native
// collision production samples owned imported map data or the actual retained
// collision window supplied by its caller.
#include "eb/native/world_collision.hpp"
#include "eb/native/world/collision_window.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include <algorithm>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>

namespace {
using namespace eb::native;
std::string context;
void require(bool ok, const char *message) {
    if (!ok) throw std::runtime_error(std::string(message) + ": " + context);
}
struct Oracle {
    std::unique_ptr<eb::SnesBus> bus;
    eb::MainCpu65816 cpu;
    unsigned delta, flags, left, top, ladder_x, ladder_y, replace_flags, entity_shapes;
    Oracle(const eb::GameAssets &assets)
        : bus(std::make_unique<eb::SnesBus>(assets.image,assets.version)), cpu(*bus) {
        const bool jp = assets.version == eb::GameVersion::JP;
        delta = jp ? 0x22e : 0;
        flags = jp ? 0x612a : 0x5da4; left = flags + 8; top = flags + 10;
        ladder_x = flags + 4; ladder_y = flags + 6; replace_flags = flags + 16;
        entity_shapes = jp ? 0x2f6c : 0x2b6e;
        cpu.set_runtime(eb::MainCpuRuntime::Legacy);
        cpu.emulation_mode = false;
        cpu.data_bank = 0x7e;
        bus->work_ram[0x0d] = 0x80;
    }
    void put(unsigned at, unsigned value) { bus->work_ram[at] = value; bus->work_ram[at + 1] = value >> 8; }
    unsigned word(unsigned at) const { return bus->work_ram[at] | unsigned(bus->work_ram[at + 1]) << 8; }
    void call(unsigned entry, unsigned a = 0, unsigned x = 0, unsigned y = 0, bool far = false) {
        entry += delta;
        cpu.status_register = eb::MainCpu65816::InterruptDisable;
        cpu.direct_page = 0x1e00; cpu.stack_pointer = 0x1fff;
        const unsigned trampoline = 0xc0ff00;
        cpu.program_counter = trampoline;
        cpu.accumulator = a; cpu.x_index = x; cpu.y_index = y;
        if (far) cpu.execute_instruction<0x22>(entry,4);
        else cpu.execute_instruction<0x20>(entry & 0xffff,3);
        unsigned steps = 0;
        while (cpu.program_counter != trampoline + (far ? 4 : 3) || cpu.stack_pointer != 0x1fff) {
            if (++steps > 100000)
                throw std::runtime_error("Collision source oracle did not return: " + cpu.describe_registers());
            cpu.step_instruction();
        }
    }
    void cache(const WorldMapArea &area, CollisionPoint anchor) {
        // Populate one coherent 512x512 world window. This cache belongs solely
        // to this unbound full-map fixture. Retained-window cases below keep
        // their original loaded ring unchanged across all queries.
        for (int dy = -32; dy < 32; ++dy)
            for (int dx = -32; dx < 32; ++dx) {
                const unsigned x = (unsigned(anchor.x / 8) + dx) & 8191,
                               y = (unsigned(anchor.y / 8) + dy) & 8191;
                bus->work_ram[0xe000 + (y & 63) * 64 + (x & 63)] = area.collision(x,y);
            }
    }
    void initialize(CollisionPoint origin, unsigned initial_flags) {
        put(left,origin.x); put(top,origin.y); put(flags,initial_flags);
        put(ladder_x,0x1234); put(ladder_y,0x5678);
    }
    void ladder(std::optional<CollisionCell> expected) {
        require(word(ladder_x) == (expected ? expected->x : 0x1234) &&
                word(ladder_y) == (expected ? expected->y : 0x5678),
                "Ladder/stairs last-hit state differs");
    }
};
struct Counts { std::uint64_t edges{}, directions{}, perimeters{}, tiles{}, probes{}, wraps{}; };

void retained_vertical_surfaces(const WorldMap &map,const WorldCollision &collision,Oracle &oracle) {
    unsigned calls{},distinct{};
    for(const CollisionPoint center : {CollisionPoint{1088,672},CollisionPoint{6997,7480},CollisionPoint{1110,1656}}) {
        const auto area=map.prepare(map.sector(center.x/256,center.y/128).combination,
                                    std::vector<std::uint8_t>(128));
        WorldCollisionWindow retained;retained.load({center.x,center.y},area);
        // Source C05F33 reads the retained64x64 collision bytes, independent
        // of the query's absolute position. The cache producer is separately
        // compared against the complete source map/camera caller; this leaf
        // oracle never recaches or substitutes full-map terrain at a query.
        std::copy(retained.cells().begin(),retained.cells().end(),oracle.bus->work_ram.begin()+0xe000);
        const auto before=retained.cells();
        for(const auto offset : {0u,1u,7u,512u,513u,1024u,65528u,65535u})
          for(bool diagonal : {false,true})for(unsigned shape=0;shape<17;++shape) {
            const CollisionPoint anchor{std::uint16_t(center.x+offset),
                std::uint16_t(center.y+(diagonal?offset:0))};
            context="retained vertical center="+std::to_string(center.x)+","+std::to_string(center.y)+
                " anchor="+std::to_string(anchor.x)+","+std::to_string(anchor.y)+" shape="+std::to_string(shape);
            oracle.put(oracle.entity_shapes,shape);
            oracle.initialize({},0xa500);
            oracle.call(0xc05f33,anchor.x,anchor.y,0,true);
            const auto native=collision.vertical_surfaces(
                [&](CollisionCell cell){return retained.sample(cell);},anchor,shape);
            require(oracle.cpu.accumulator==native&&oracle.word(oracle.flags)==native,
                    "Retained enemy shape surface flags differ");
            const auto origin=collision.origin(anchor,shape);
            require(oracle.word(oracle.left)==origin.x&&oracle.word(oracle.top)==origin.y,
                    "Retained enemy shape origin differs");
            const auto global=collision.vertical_surfaces(
                [&](CollisionCell cell){return area.collision(cell.x,cell.y);},anchor,shape);
            distinct+=global!=native;++calls;
          }
        require(retained.cells()==before&&std::equal(before.begin(),before.end(),oracle.bus->work_ram.begin()+0xe000),
                "Enemy shape queries rewrote their retained terrain window");
    }
    require(distinct>0,"Retained terrain comparison did not differ from full-map sampling");
    std::cout<<"PASS retained enemy terrain C05F33: "<<calls<<" original/native shape queries, "
        <<distinct<<" distinct full-map flags; fixed actual window,512px aliases and unsigned16 wrap\n";
}

void compare_at(const WorldCollision &collision, const WorldMapArea &area, Oracle &oracle,
                CollisionPoint anchor, Counts &counts) {
    oracle.cache(area,anchor);
    const std::string location = "area=" + std::to_string(area.combination()) + " xy=" +
        std::to_string(anchor.x) + "," + std::to_string(anchor.y);
    for (unsigned id = 0; id < 17; ++id) {
        context = location + " shape=" + std::to_string(id);
        const auto origin = collision.origin(anchor,id);
        constexpr unsigned initial = 0xa500;
        for (unsigned side = 0; side < 4; ++side) {
            constexpr unsigned entries[]{0xc05503,0xc0559c,0xc05639,0xc056d0};
            oracle.initialize(origin,initial);
            oracle.call(entries[side],side < 2 ? origin.x : origin.y,id);
            require(oracle.word(oracle.flags) == collision.edge(area,origin,id,CollisionEdge(side),initial),
                    "Collision edge surface flags differ");
            oracle.ladder({});
            ++counts.edges;
        }
        oracle.initialize({},initial);
        oracle.call(0xc05d8b,anchor.x,anchor.y,id,true);
        require(oracle.cpu.accumulator == collision.perimeter(area,anchor,id,initial),
                "Full perimeter surface flags differ");
        require(oracle.word(oracle.left) == origin.x && oracle.word(oracle.top) == origin.y,
                "Collision anchor/shape conversion differs");
        oracle.ladder({});
        ++counts.perimeters;
        for (unsigned direction : {0,1,2,3,4,5,6,7,65535}) {
            oracle.initialize({},0xffff);
            oracle.put(oracle.entity_shapes,id);
            oracle.put(0x1e0e,direction); // Authored fourth argument, caller-owned stack local.
            oracle.call(0xc05cd7,anchor.x,anchor.y,0,true);
            require(oracle.cpu.accumulator == collision.directional_surface(area,anchor,id,CollisionDirection(direction)),
                    "Directional surface flags differ");
            require(oracle.word(oracle.left) == origin.x && oracle.word(oracle.top) == origin.y,
                    "Directional collision origin differs");
            oracle.ladder({});
            ++counts.directions;
        }
    }
    context = location + " probes";
    const CollisionCell cell{std::uint16_t(anchor.x / 8),std::uint16_t(anchor.y / 8)};
    oracle.initialize({},0xffff);
    oracle.call(0xc054c9,cell.x,cell.y);
    const auto tile = collision.tile(area,cell);
    require(oracle.cpu.accumulator == tile.surface_flags,"Single collision tile differs");
    oracle.ladder(tile.ladder_stairs);
    ++counts.tiles;
    // All masks, both ignored high bits, and all three accumulation policies:
    // source replaces surface flags only when SET_TEMP_ENTITY_SURFACE_FLAGS=1.
    for (unsigned selection = 0; selection < 256; ++selection) {
        const auto hit = collision.probes(area,anchor,std::uint8_t(selection));
        for (unsigned policy : {0,1,2}) {
            oracle.initialize(anchor,0xa500);
            oracle.put(oracle.replace_flags,policy);
            oracle.call(0xc05769,selection);
            require(oracle.cpu.accumulator == hit.blocked,"Six-probe obstacle mask differs");
            require(oracle.word(oracle.flags) == (policy == 1 ? hit.surface_flags : 0xa500),
                    "Six-probe surface accumulation differs");
            oracle.ladder(hit.last_ladder_stairs);
            ++counts.probes;
        }
    }
}
}

int main(int argc, char **argv) {
    try {
        require(argc >= 2,"native_world_collision_reference pack.ebpak ...");
        for (int arg = 1; arg < argc; ++arg) {
            const auto assets = eb::load_game_assets(argv[arg],eb::asset_profiles());
            const WorldMap map(assets.image,world_map_layout(assets.version));
            const WorldCollision collision(assets.image,world_collision_layout(assets.version));
            Oracle oracle(assets);
            Counts counts;
            retained_vertical_surfaces(map,collision,oracle);
            for (unsigned combination = 0; combination < 32; ++combination) {
                std::vector<std::uint8_t> flags(128,combination & 1 ? 0xff : 0);
                const auto area = map.prepare(combination,flags);
                std::optional<CollisionPoint> center;
                for (unsigned y = 0; y < 80 && !center; ++y)
                    for (unsigned x = 0; x < 32 && !center; ++x)
                        if (map.sector(x,y).combination == combination)
                            center = CollisionPoint{std::uint16_t(x * 256 + 128),std::uint16_t(y * 128 + 64)};
                // Unplaced combinations still have a defined block-zero
                // border; they do not need a fictitious authored sector.
                if (!center) center = CollisionPoint{128,64};
                for (unsigned phase = 0; phase < 8; ++phase)
                    compare_at(collision,area,oracle,{std::uint16_t(center->x + phase),std::uint16_t(center->y + phase)},counts);
            }
            // Around unsigned16 wrap, native queries deliberately use logical
            // world cells instead of whatever stale cell shares a ring index.
            // Select an area absent from the origin so all wrapped/out-of-map
            // cells resolve to the same authored border, making the source
            // cache coherent even across its mathematical 65536-pixel seam.
            const unsigned border_combination = (map.sector(0,0).combination + 1) % 32;
            const auto border = map.prepare(border_combination,std::vector<std::uint8_t>(128));
            for (unsigned coordinate : {0,1,7,8,31,65520,65527,65528,65529,65530,65531,65532,65533,65534,65535}) {
                compare_at(collision,border,oracle,{std::uint16_t(coordinate),std::uint16_t(coordinate)},counts);
                ++counts.wraps;
            }
            std::cout << "PASS " << assets.title << ": " << counts.edges << " edges, " << counts.directions
                      << " directions, " << counts.perimeters << " perimeters, " << counts.tiles << " tiles, "
                      << counts.probes << " probe masks/policies, " << counts.wraps << " wrapped origins\n";
        }
    } catch (const std::exception &error) { std::cerr << error.what() << '\n'; return 1; }
}
