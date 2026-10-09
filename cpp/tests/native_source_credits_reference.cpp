// Independent source oracle for the CPU-free staff-text scene. This test alone
// runs the frozen CREDITS_SCROLL_FRAME{,-jp}.asm and DECOMP implementations.
// Addresses below were checked in each regional linked earthbound.dbg, rather
// than obtained from the production resource importer or semantic adapter.
#include "eb/native/cutscenes/credits.hpp"
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
using namespace eb::native::cutscenes;
void require(bool ok, const char* message) { if (!ok) throw std::runtime_error(message); }
unsigned word(std::span<const std::uint8_t> bytes, unsigned at) {
    return bytes[at] | (unsigned(bytes[at + 1]) << 8);
}
unsigned longword(std::span<const std::uint8_t> bytes, unsigned at) {
    return word(bytes, at) | (word(bytes, at + 2) << 16);
}
struct Layout {
    unsigned callback, decomp, font, font_bytes, staff, staff_bytes, palette;
    unsigned rows, row, next, wipe, script, scroll, head, tail, queue, name;
};
Layout reference_layout(eb::GameVersion version) {
    // src/ending/{credits_scroll_frame,initialize_credits_scene}{,-jp}.asm;
    // src/bankconfig/common/bank21.asm places UNKNOWN_E14DE8 after STAFF_TEXT.
    // GAME_STATE+earthbound_playername is a 24-byte buffer in both versions.
    if (version == eb::GameVersion::JP)
        return {0xc0fb8d,0xc419ea,0xe1d2cc,0x800,0xe13596,0xca8,0xe1d6a6,
                0x8176,0xb6c0,0xb6ac,0xb6ae,0xb6b0,0xb6b4,0xb6be,0xb6bc,0x54dc,0x9ab5};
    return {0xc0f41e,0xc41a9e,0xe1e528,0xc00,0xe1413f,0xca9,0xe1e914,
            0x7dfe,0xb4f7,0xb4e3,0xb4e5,0xb4e7,0xb4eb,0xb4f5,0xb4f3,0x5156,0x9801};
}
struct Oracle {
    eb::GameVersion version;
    Layout layout;
    std::unique_ptr<eb::SnesBus> bus;
    eb::MainCpu65816 cpu;
    unsigned script_start;
    std::array<std::uint8_t, 2048> canvas{};
    std::uint64_t ticks=0, publications=0, steps=0;
    Oracle(std::span<const std::uint8_t> image, eb::GameVersion region, unsigned script)
        : version(region), layout(reference_layout(region)), bus(std::make_unique<eb::SnesBus>(image, region)),
          cpu(*bus), script_start(script) {
        cpu.set_runtime(eb::MainCpuRuntime::Legacy);
        cpu.emulation_mode = false;
        cpu.status_register = eb::MainCpu65816::InterruptDisable;
        cpu.data_bank = 0x7e;
        cpu.direct_page = 0x1e00;
        cpu.stack_pointer = 0x1fff;
        put(layout.script, script); put(layout.script + 2, script >> 16);
        put(layout.wipe, 7);
        bus->work_ram[0x0d] = 0x80;
    }
    void put(unsigned at, unsigned value) {
        bus->work_ram[at] = value; bus->work_ram[at + 1] = value >> 8;
    }
    void call(unsigned entry, bool far) {
        const unsigned trampoline = (entry & 0xff0000) | 0xff00;
        cpu.program_counter = trampoline;
        cpu.accumulator = cpu.x_index = cpu.y_index = 0;
        if (far) cpu.execute_instruction<0x22>(entry, 4);
        else cpu.execute_instruction<0x20>(entry & 0xffff, 3);
        unsigned count = 0;
        while (cpu.program_counter != trampoline + (far ? 4 : 3) || cpu.stack_pointer != 0x1fff) {
            if (++count > 3000000)
                throw std::runtime_error("Credits source did not return: " + cpu.describe_registers());
            cpu.step_instruction();
        }
        steps += count;
        require(cpu.direct_page == 0x1e00 && cpu.data_bank == 0x7e,
                "Credits source did not restore the caller's frame");
    }
    std::vector<std::uint8_t> original_font() {
        put(0x1e0e, layout.font); put(0x1e10, layout.font >> 16);
        put(0x1e12, 0); put(0x1e14, 0x7f);
        call(layout.decomp, true);
        return {bus->work_ram.begin() + 0x10000, bus->work_ram.begin() + 0x10000 + layout.font_bytes};
    }
    void tick(std::span<const std::uint8_t> name) {
        require(name.size() <= 24, "Reference name exceeds the source game-state field");
        std::fill_n(bus->work_ram.begin() + layout.name, 25, 0);
        std::copy(name.begin(), name.end(), bus->work_ram.begin() + layout.name);
        call(layout.callback, false);
        ++ticks;
    }
    unsigned pending() const {
        return (word(bus->work_ram, layout.head) - word(bus->work_ram, layout.tail)) & 127;
    }
    bool publish_next() {
        // Consume exactly one source descriptor, as PROCESS_CREDITS_DMA_QUEUE
        // does. Resolve its source bytes now, preserving composition-ring reuse.
        const auto tail = word(bus->work_ram, layout.tail);
        if (tail == word(bus->work_ram, layout.head)) return false;
        const auto record = layout.queue + tail * 9;
        const auto mode = bus->work_ram[record];
        const auto size = word(bus->work_ram, record + 1);
        const auto source = longword(bus->work_ram, record + 3);
        const auto target = word(bus->work_ram, record + 7);
        require(mode == 0 || mode == 3, "Unexpected source text publication mode");
        require(target >= 0x6c00 && (target - 0x6c00) * 2 + size <= canvas.size(),
                "Source text publication escaped the text surface");
        for (unsigned byte = 0; byte < size; ++byte)
            canvas[(target - 0x6c00) * 2 + byte] = bus->read_byte(source + (mode == 0 ? byte : 0));
        put(layout.tail, (tail + 1) & 127);
        ++publications;
        return true;
    }
    void compare(const CreditsTextScene& native) const {
        const auto& state = native.state();
        const auto& ram = bus->work_ram;
        require(native.pending_rows() == pending(), "Pending publication count differs");
        require(state.ticks == ticks && state.cursor == longword(ram, layout.script) - script_start,
                "Staff cursor/tick differs from original callback");
        require(state.scroll_position == longword(ram, layout.scroll) &&
                (state.scroll_position >> 16) == word(ram, 0x3b), "Quarter-pixel/source integer scroll differs");
        require(state.next_credit_position == word(ram, layout.next) &&
                state.wipe_threshold == word(ram, layout.wipe) && state.composition_row == word(ram, layout.row),
                "Command spacing, temporary rows or wipe progression differs");
        for (unsigned i = 0; i < 512; ++i)
            require(native.composition_rows()[i] == word(ram, layout.rows + i * 2),
                    "Temporary glyph composition differs");
        for (unsigned i = 0; i < 1024; ++i)
            require(native.tile_canvas()[i] == word(canvas, i * 2), "Published text canvas differs");
        if (version == eb::GameVersion::US)
            require(std::equal(native.converted_player_name().begin(), native.converted_player_name().end(),
                               ram.begin() + 0xb4f9), "US converted name buffer differs");
    }
};
} // namespace
#include "eb/native/cutscenes/ending/credits_work.hpp"
#include "eb/native/story/source_work.hpp"
#include "eb/native/party_trail.hpp"
using eb::native::cutscenes::ending::CreditsWork;
using eb::native::story::SourceWorkCost;
namespace {
struct Receipt {
  std::uint64_t clock{};
  unsigned cursor{},next{},row{},wipe{},scroll{},head{},position{},latch{},hardware_y{};
  std::array<std::uint8_t,1024> composition{};
  std::array<std::uint8_t,24> name{};
  std::array<std::uint8_t,1152> queue{};
  bool operator==(const Receipt &) const=default;
};
Receipt retained(const Oracle &o) {
  Receipt r;r.clock=o.bus->master_clocks();const auto &ram=o.bus->work_ram;
  r.cursor=longword(ram,o.layout.script)-o.script_start;r.next=word(ram,o.layout.next);
  r.row=word(ram,o.layout.row);r.wipe=word(ram,o.layout.wipe);r.scroll=longword(ram,o.layout.scroll);
  r.head=word(ram,o.layout.head);r.position=word(ram,0x3b);
  r.latch=o.bus->ppu_registers()[0x12];r.hardware_y=o.bus->scene_read_view().background_scroll_y[2];
  std::copy_n(ram.begin()+o.layout.rows,r.composition.size(),r.composition.begin());
  if(o.version==eb::GameVersion::US)std::copy_n(ram.begin()+0xb4f9,24,r.name.begin());
  std::copy_n(ram.begin()+o.layout.queue,r.queue.size(),r.queue.begin());return r;
}
Receipt retained(const CreditsTextScene &text,const CreditsWork &work,const eb::native::PartyTrail &trail,
                 const eb::native::battle::PsiDisplayState &video,std::span<const std::uint8_t> composition,
                 std::uint64_t clock,eb::GameVersion region) {
  Receipt r;r.clock=clock;const auto &s=text.state();r.cursor=s.cursor;r.next=s.next_credit_position;
  r.row=s.composition_row;r.wipe=s.wipe_threshold;r.scroll=s.scroll_position;r.head=work.queue_start();
  r.position=video.staged_scroll[2].y;r.latch=video.source_scroll_latch();r.hardware_y=video.source_hardware_scroll()[2].y;
  std::copy_n(composition.begin(),r.composition.size(),r.composition.begin());
  if(region==eb::GameVersion::US)r.name=text.converted_player_name();
  for(unsigned i=0;i<r.queue.size();++i) {const auto &p=trail.points[i/12];
    const std::uint16_t words[]={p.x,p.y,p.surface_flags,p.walking_style,p.direction,p.reserved};r.queue[i]=std::uint8_t(words[(i%12)/2]>>((i&1)*8));}
  return r;
}
class Timing final : public eb::native::story::SourceWorkService {
public:
  Timing(std::span<const std::uint8_t> image,eb::GameVersion version,CreditsTextScene &text,CreditsWork &work,
         eb::native::PartyTrail &trail,eb::native::battle::PsiDisplayState &video,std::span<const std::uint8_t> composition,bool fast)
      :bus(image,version),text(text),work(work),trail(trail),video(video),composition(composition),fast(fast),version(version) {bus.write_byte(0x420d,fast);}
  bool uses(const eb::native::ActorWorld &,const eb::native::battle::PsiDisplayState &) const noexcept override {return false;}
  Receipt snapshot() const {return retained(text,work,trail,video,composition,bus.master_clocks(),version);}
  void retire_source_work(SourceWorkCost cost,const std::function<void()> &effect={}) override {
    auto before=snapshot();if(effect)effect();bus.advance_master_clocks_with_refresh(cost.master_clocks(fast));
    auto after=snapshot();before.clock=after.clock;if(before!=after)writes.push_back(after);
  }
  void retire_dma_work(SourceWorkCost,unsigned,const std::function<void()> &) override {throw std::logic_error("Credits callback unexpectedly requested DMA");}
  eb::SnesBus bus;CreditsTextScene &text;CreditsWork &work;eb::native::PartyTrail &trail;
  eb::native::battle::PsiDisplayState &video;std::span<const std::uint8_t> composition;bool fast;eb::GameVersion version;
  std::vector<Receipt> writes;
};
void call(Oracle &o,std::span<const std::uint8_t> name,std::vector<Receipt> &writes,unsigned adjacent) {
  std::fill_n(o.bus->work_ram.begin()+o.layout.name,25,0);std::copy(name.begin(),name.end(),o.bus->work_ram.begin()+o.layout.name);
  o.bus->work_ram[o.layout.name+24]=std::uint8_t(adjacent);
  auto &cpu=o.cpu;cpu.direct_page=0x0200;cpu.stack_pointer=0x1fff;cpu.program_counter=0xc08000;cpu.accumulator=cpu.x_index=cpu.y_index=0;
  cpu.status_register=eb::MainCpu65816::InterruptDisable;cpu.execute_instruction<0x20>(o.layout.callback&65535,3);
  for(unsigned steps=0;steps<10000;++steps) {
    if(cpu.program_counter==0xc08003&&cpu.stack_pointer==0x1fff){++o.ticks;return;}
    auto before=retained(o);cpu.step_instruction();auto after=retained(o);before.clock=after.clock;
    if(before!=after)writes.push_back(after);
  }
  throw std::runtime_error("Actual original credits callback did not return");
}
void compare_receipts(const std::vector<Receipt> &actual,const std::vector<Receipt> &expected,std::string context) {
  if(actual.size()!=expected.size()) {for(const auto &r:expected)std::cerr<<"SOURCE clock="<<r.clock<<" cur="<<r.cursor<<" next="<<r.next<<" row="<<r.row<<" wipe="<<r.wipe<<" scroll="<<r.scroll<<" pos="<<r.position<<" latch="<<r.latch<<" hw="<<r.hardware_y<<" head="<<r.head<<"\n";for(const auto &r:actual)std::cerr<<"NATIVE clock="<<r.clock<<" scroll="<<r.scroll<<" pos="<<r.position<<" hw="<<r.hardware_y<<"\n";}
  require(actual.size()==expected.size(),(context+" write count native="+std::to_string(actual.size())+" source="+std::to_string(expected.size())).c_str());
  for(unsigned i=0;i<actual.size();++i)if(actual[i]!=expected[i]) {
    const auto &a=actual[i],&e=expected[i];
    throw std::runtime_error(context+" write="+std::to_string(i)+" clocks="+std::to_string(a.clock)+"/"+std::to_string(e.clock)+
        " cursor="+std::to_string(a.cursor)+"/"+std::to_string(e.cursor)+" head="+std::to_string(a.head)+"/"+std::to_string(e.head)+
        " scroll="+std::to_string(a.scroll)+"/"+std::to_string(e.scroll));
  }
}
void rejection(const eb::GameAssets &assets) {
  for(unsigned kind=0;kind<5;++kind) {
    const auto resource=std::make_shared<const CreditsResources>(CreditsContent{assets.version,{4,255},std::vector<CreditsGlyph>(1024),{}});
    CreditsTextScene text(resource);eb::native::PartyTrail trail;eb::native::battle::PsiDisplayState video;
    std::array<std::uint8_t,2048> composition{};std::array<std::uint8_t,24> name;name.fill(0x80);
    eb::native::cutscenes::ending::NameBoundaryOwners boundaries;
    if(kind==1||kind>=3)boundaries.after_encoded_name=[]{return std::optional<std::uint8_t>(0);};
    if(kind==1&&assets.version==eb::GameVersion::JP)boundaries.after_encoded_name=[]{return std::optional<std::uint8_t>();};
    if(kind==2&&assets.version==eb::GameVersion::US)boundaries.after_encoded_name=[]{return std::optional<std::uint8_t>(0x51);};
    if(kind>=3)boundaries.after_converted_name=[]{return std::optional<std::uint8_t>(0);};
    CreditsWork work(text,trail,composition,video,std::move(boundaries));
    Timing timing(assets.image,assets.version,text,work,trail,video,composition,false);
    if(assets.version==eb::GameVersion::US)for(unsigned tick=0;tick<4;++tick)work.with_source_work(timing,[&]{text.advance_callback(name);});
    const auto before=timing.snapshot();bool rejected=false;
    if(kind<3) {
      try {(void)work.maximum_master_clocks(name,false);}catch(const std::logic_error &){rejected=true;}
      require(rejected&&!work.failed()&&before==timing.snapshot(),"Unsupported adjacent name owner changed actual callback owners");
    }else if(kind==3) {
      auto copy=text;
      try {work.with_source_work(timing,[&]{copy.advance_callback(name);});}catch(const std::logic_error &){rejected=true;}
      require(rejected&&work.failed()&&before==timing.snapshot()&&copy.state()==text.state(),"Copied callback owner retired source work");
    }else {
      try {work.with_source_work(timing,[]{});}catch(const std::logic_error &){rejected=true;}
      require(rejected&&work.failed()&&before==timing.snapshot(),"Missing actual callback retired source work");
    }
  }
}
void reference(const eb::GameAssets &assets) {
  rejection(assets);

  unsigned cases=0;std::uint64_t stores=0,ticks=0;
  for(bool fast:{false,true})for(bool imported:{false,true})for(bool retained_name:{false,true})for(unsigned boundary:{0u,0x51u}) {
    auto image=assets.image;std::vector<std::uint8_t> script{0,17,1,0x80,0x81,0x82,0,2,0x84,0x85,0,3,1,4,4,4,4,255};
    std::shared_ptr<const CreditsResources> resource;
    unsigned origin;
    if(imported){resource=CreditsResources::import(image,assets.version);origin=reference_layout(assets.version).staff;}
    else {std::copy(script.begin(),script.end(),image.begin()+0x288000);origin=0xe88000;
      resource=std::make_shared<const CreditsResources>(CreditsContent{assets.version,script,std::vector<CreditsGlyph>(1024),{}});}
    std::array<std::uint8_t,24> name_seed{};if(retained_name)name_seed.fill(0x51);
    CreditsTextScene text(resource,name_seed);eb::native::PartyTrail trail;eb::native::battle::PsiDisplayState video;
    std::array<std::uint8_t,2048> composition{};const auto encoded_boundary=assets.version==eb::GameVersion::JP?boundary:0;
    CreditsWork work(text,trail,composition,video,{{[encoded_boundary]{return std::optional<std::uint8_t>(encoded_boundary);}}, {[boundary]{return std::optional<std::uint8_t>(boundary);}}});Oracle original(image,assets.version,origin);
    original.bus->write_byte(0x420d,fast);if(assets.version==eb::GameVersion::US)std::copy(name_seed.begin(),name_seed.end(),original.bus->work_ram.begin()+0xb4f9);
    if(assets.version==eb::GameVersion::US)original.bus->work_ram[0xb511]=std::uint8_t(boundary);
    for(unsigned i=0;i<trail.points.size();++i)trail.points[i]={std::uint16_t(i*17+41),std::uint16_t(i*37+91),
      std::uint16_t(i*71+131),std::uint16_t(i*137+181),std::uint16_t(i*257+211),std::uint16_t(i*521+251)};
    for(unsigned i=1024;i<composition.size();++i)composition[i]=std::uint8_t(i*13+11);
    const auto initialized=retained(text,work,trail,video,composition,0,assets.version);
    std::copy(initialized.queue.begin(),initialized.queue.end(),original.bus->work_ram.begin()+original.layout.queue);
    Timing timing(image,assets.version,text,work,trail,video,composition,fast);
    const unsigned limit=imported?18140:1400;
    for(unsigned tick=0;tick<limit;++tick) {
      require(original.publish_next()==text.publish_next_row(),"Actual row foreground consumption differs");
      std::array<std::uint8_t,24> full{};for(unsigned i=0;i<24;++i)full[i]=128+i;
      const std::array<std::uint8_t,6> boundaries{144,145,172,174,175,146};const std::array<std::uint8_t,1> short_name{147};
      std::span<const std::uint8_t> name;
      if(imported)name=boundaries;
      else if(text.state().cursor==14)name=boundaries;
      else if(text.state().cursor==15)name=short_name;
      else if(text.state().cursor>=16)name=full;
      const auto bound=work.maximum_master_clocks(name,fast);const auto before=timing.snapshot();
      require(work.maximum_master_clocks(name,fast)==bound&&timing.snapshot()==before,"Credits pure bound changed its actual owners");
      timing.writes.clear();std::vector<Receipt> expected;
      call(original,name,expected,encoded_boundary);timing.retire_source_work({6,3,2,0});
      work.with_source_work(timing,[&]{text.advance_callback(name);});
      const auto context=assets.title+" fast="+std::to_string(fast)+" imported="+std::to_string(imported)+" retained="+std::to_string(retained_name)+" boundary="+std::to_string(boundary)+" tick="+std::to_string(tick);
      compare_receipts(timing.writes,expected,context);
      require(timing.bus.master_clocks()==original.bus->master_clocks(),(context+" final clocks native="+std::to_string(timing.bus.master_clocks())+" source="+std::to_string(original.bus->master_clocks())).c_str());original.compare(text);
      require(retained(original)==timing.snapshot(),(context+" final actual composition/queue/scroll differs").c_str());
      for(unsigned i=1024;i<composition.size();++i)require(composition[i]==std::uint8_t(i*13+11),"Credits callback overwrote retained text-buffer tail");
      for(unsigned i=96;i<trail.points.size();++i) {const auto &p=trail.points[i];
        require(p==eb::native::PartyTrailPoint{std::uint16_t(i*17+41),std::uint16_t(i*37+91),std::uint16_t(i*71+131),
          std::uint16_t(i*137+181),std::uint16_t(i*257+211),std::uint16_t(i*521+251)},"Credits descriptor escaped its real1152-byte trail alias");}
      stores+=expected.size();++ticks;
    }
    ++cases;
  }
  std::cout<<"PASS source credits "<<assets.title<<" cases="<<cases<<" callbacks="<<ticks<<" stores="<<stores<<" exact original clocks, queue alias, composition, name and physical scroll ports\n";
}
}
int main(int argc,char **argv) {
  try {if(argc<2)return 77;for(int i=1;i<argc;++i)reference(eb::load_game_assets(argv[i],eb::asset_profiles()));return 0;}
  catch(const std::exception &error){std::cerr<<error.what()<<'\n';return 1;}
}
