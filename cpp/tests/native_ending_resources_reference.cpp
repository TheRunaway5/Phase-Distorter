#include "eb/native/cutscenes/ending/resources.hpp"
#include "native_ending_text_oracle.hpp"
#include "eb/native/sprite_resources.hpp"
#include "eb/native/display/transient_memory.hpp"
namespace {
using namespace ending_text_reference;
void decode(const eb::GameAssets &assets,unsigned entry,unsigned bytes,std::span<const std::uint8_t> native) {
  require(native.size()==bytes,"Ending imported decoded extent differs");
  Oracle oracle(assets.image,assets.version,reference_layout(assets.version).staff);
  std::array<std::uint8_t,65536> expected{};
  for(unsigned i=0;i<expected.size();++i)expected[i]=std::uint8_t(i*37+(i>>8)+11);
  std::copy(expected.begin(),expected.end(),oracle.bus->work_ram.begin()+0x10000);
  std::copy(native.begin(),native.end(),expected.begin());
  oracle.layout.font=entry;oracle.layout.font_bytes=bytes;
  const auto actual=oracle.original_font();require(std::equal(actual.begin(),actual.end(),native.begin()),"Ending asset differs from actual original DECOMP");
  require(std::equal(expected.begin(),expected.end(),oracle.bus->work_ram.begin()+0x10000),"Original ending DECOMP changed retained BUFFER tail");
}
// Exact linked TRY prefix only. Its US sprite-stage alias after both heaps
// is separate from this retained-bank owner and remains a scene integration gate.
void photograph_heap_clear(const eb::GameAssets &assets,unsigned seed,unsigned selected_bank){
 const bool jp=assets.version==eb::GameVersion::JP;
 const unsigned entry=jp?0xc4c2a0:0xc4f264, end=jp?0xc4c306:0xc4f2ca;
 auto bus=std::make_unique<eb::SnesBus>(assets.image,assets.version);
 eb::MainCpu65816 cpu(*bus);cpu.set_runtime(eb::MainCpuRuntime::Legacy);
 cpu.emulation_mode=false;cpu.status_register=eb::MainCpu65816::InterruptDisable;
 cpu.data_bank=0x7e;cpu.direct_page=0x1e00;cpu.stack_pointer=0x1fff;
 bus->work_ram[0x0d]=0x80;
 for(unsigned i=0x2000;i<0x2800;++i)bus->work_ram[i]=std::uint8_t((i+seed*71)%255+1);
 for(unsigned i=0xe000;i<0x10000;++i)bus->work_ram[i]=std::uint8_t(i*37+(i>>8)+11);
 eb::native::display::TransientMemory memory;memory.configure(assets.version);
 for(unsigned index=0;index<2;++index)std::copy_n(bus->work_ram.begin()+0x2000+index*memory.capacity(),memory.capacity(),memory.bank(index).begin());
 if(selected_bank)memory.after_interrupt();
 const unsigned count=seed?memory.capacity()-1:23;
 require(bool(memory.allocate(count)),"Actual transient-bank allocation failed");
 const unsigned selected=memory.selected_bank(),cursor=memory.cursor();
 const auto retained=std::array<std::uint8_t,8192>{};
 auto expected=retained;
 std::copy_n(bus->work_ram.begin()+0xe000,8192,expected.begin());
 std::fill_n(bus->work_ram.begin()+(jp?0x9eb3:0x9c08),128,255);
 bus->work_ram[jp?0x4de0:0x4a5a]=1;
 bus->work_ram[0x30]=0x5a;
 cpu.program_counter=0xc4ff00;cpu.accumulator=seed;cpu.x_index=0;cpu.y_index=0;
 cpu.execute_instruction<0x22>(entry,4);
 unsigned steps{};
 while(cpu.program_counter!=end){
  if(++steps>100000)throw std::runtime_error("Photograph original prefix did not reach linked clear boundary: "+cpu.describe_registers());
  cpu.step_instruction();
 }
 memory.clear_for_photograph();
 require(memory.selected_bank()==selected&&memory.cursor()==cursor,"Photograph clear changed actual SBRK bank/cursor");
 for(unsigned index=0;index<2;++index)require(std::equal(memory.bank(index).begin(),memory.bank(index).end(),bus->work_ram.begin()+0x2000+index*memory.capacity()),"Photograph retained native bank differs from original clear");
 memory.clear_for_photograph();
 require(memory.selected_bank()==selected&&memory.cursor()==cursor,"Repeated photograph clear reset actual SBRK state");
 if(seed)require(!memory.allocate(1),"Photograph clear incorrectly reopened an exhausted bank");
 else require(memory.allocate(1)->offset==cursor,"Photograph clear changed the next actual allocation offset");
 require(cpu.data_bank==0x7e,"Original photograph prefix changed caller data bank");
 require(cpu.x_index==0x2800&&cpu.y_index==1024,"Original photograph clear cursor/count differs");
 require(std::all_of(bus->work_ram.begin()+0x2000,bus->work_ram.begin()+0x2800,[](auto v){return v==0;}),"Original photograph clear differs from exact WRAM2000..27FF");
 require(std::equal(expected.begin(),expected.end(),bus->work_ram.begin()+0xe000),"Original photograph prefix changed collision/map/path-cache bytes E000..FFFF");
 require(bus->work_ram[0x30]==0x5a,"Prefix crossed palette upload stage");
 std::cout<<"PASS actual photograph clear "<<assets.title<<" entry=0x"<<std::hex<<entry<<" stop=0x"<<end<<" DB=7E effective_clear=7E2000..7E27FF"<<std::dec<<" seed="<<seed<<" selected_bank="<<selected_bank<<" words=1024 native_heap_bytes="<<memory.capacity()*2<<" bank_cursor_preserved=1 retained_collision_map_path_bytes=8192 instructions="<<steps<<"\n";
}
void run(const eb::GameAssets &assets) {
  {
    eb::native::display::TransientMemory unconfigured;bool rejected{};
    try{unconfigured.clear_for_photograph();}catch(const std::logic_error&){rejected=true;}
    require(rejected&&unconfigured.selected_bank()==0&&unconfigured.cursor()==0,
        "Unconfigured photograph clear manufactured regional ownership");
  }
  for(unsigned seed=0;seed<3;++seed)for(unsigned selected=0;selected<2;++selected)
    photograph_heap_clear(assets,seed,selected);
  const bool jp=assets.version==eb::GameVersion::JP;
  eb::native::cutscenes::ending::Resources resources(assets.image,assets.version);
  const std::array compressed{resources.compressed_frame(),resources.compressed_font(),resources.compressed_photo_palettes()};
  const std::array<unsigned,3> identities{jp?0xe1d6dcu:0xe1e94au,jp?0xe1d2ccu:0xe1e528u,jp?0xe12ba1u:0xe1374au};
  const std::array<unsigned,3> extents{0x900,jp?0x800u:0xc00u,0xf00};
  for(unsigned i=0;i<compressed.size();++i) {
    const auto &asset=compressed[i];
    require(asset.source_identity==identities[i]&&asset.output_bytes==extents[i],
        "Ending compressed source identity/decoded extent differs");
    require(!asset.bytes.empty()&&asset.bytes.back()==255,
        "Ending compressed source is not bounded through its terminator");
    require(std::equal(asset.bytes.begin(),asset.bytes.end(),assets.image.begin()+identities[i]-0xc00000),
        "Ending compressed stream differs from the actual regional image");
  }
  {
    auto donor=assets.image;
    eb::native::cutscenes::ending::Resources owned(donor,assets.version);
    std::fill(donor.begin(),donor.end(),0);
    const std::array retained{owned.compressed_frame(),owned.compressed_font(),owned.compressed_photo_palettes()};
    for(unsigned i=0;i<retained.size();++i)
      require(std::equal(retained[i].bytes.begin(),retained[i].bytes.end(),compressed[i].bytes.begin(),compressed[i].bytes.end()),
          "Ending compressed stream retained a borrowed donor image");
  }
  decode(assets,jp?0xe1d6dc:0xe1e94a,0x900,resources.frame());
  decode(assets,jp?0xe1d2cc:0xe1e528,jp?0x800:0xc00,resources.font());
  decode(assets,jp?0xe12ba1:0xe1374a,0xf00,resources.photo_palettes());
  Oracle oracle(assets.image,assets.version,reference_layout(assets.version).staff);
  std::array<std::uint8_t,128> flags{};
  for(unsigned mode=0;mode<20;++mode) {
    for(unsigned i=0;i<flags.size();++i)flags[i]=mode==0?0:mode==1?255:std::uint8_t((i+mode)*71+(i>>2)*23);
    std::copy(flags.begin(),flags.end(),oracle.bus->work_ram.begin()+(jp?0x9eb3:0x9c08));
    oracle.call(jp?0xc4c473:0xc4f433,true);
    require(oracle.cpu.accumulator==eb::native::cutscenes::ending::count_photographs(resources,flags),"COUNT_PHOTO_FLAGS differs from actual source");
  }
  for(unsigned encoded=0;encoded<256;++encoded)if((encoded&31)&&((encoded&31)<=17)) {
    oracle.call(jp?0xc07c3c:0xc079ec,true,encoded);
    require(oracle.cpu.accumulator==resources.photograph_sprite(std::uint8_t(encoded)),
            "Saved photograph sprite differs from actual C079EC");
  }
  eb::native::SpriteResources sprites(assets.image,eb::native::sprite_catalog_layout(assets.version));
  const unsigned group_table=jp?0xef6541:0xef133f;
  std::uint64_t raw_bytes{},bank_bytes{};unsigned raw_frames{},raw_banks{};
  std::array<bool,256> checked_banks{};
  for(unsigned group=0;group<464;++group) {
    unsigned header{};for(unsigned byte=0;byte<3;++byte)header|=unsigned(oracle.bus->read_byte(group_table+group*4+byte))<<(byte*8);
    const auto &native_header=sprites.raw_header(group);
    for(unsigned byte=0;byte<9;++byte)require(native_header[byte]==oracle.bus->read_byte(header+byte),
        "Raw sprite immutable header differs from original content");
    require(sprites.frame_table_identity(group)==header+9,"Raw sprite frame table identity differs");
    if(!checked_banks[native_header[8]]) {
      checked_banks[native_header[8]]=true;++raw_banks;
      const auto bank=sprites.raw_bank(group);const unsigned identity=unsigned(native_header[8])<<16;
      for(unsigned byte=0;byte<65536;++byte)require(bank[byte]==oracle.bus->read_byte(identity+byte),
          "Raw sprite retained geometry bank differs from actual original ROM");
      bank_bytes+=bank.size();
    }
    oracle.call(jp?0xc01e03:0xc01ded,false,group);
    require(oracle.cpu.accumulator==sprites.definition(group).shape&&
        word(oracle.bus->work_ram,jp?0x4a00:0x467a)*8==sprites.definition(group).width&&
        word(oracle.bus->work_ram,jp?0x4a02:0x467c)*8==sprites.definition(group).height,
        "Raw sprite geometry differs from actual C01DED");
    const unsigned bytes=word(oracle.bus->work_ram,jp?0x4a00:0x467a)*
        word(oracle.bus->work_ram,jp?0x4a02:0x467c)*32;
    for(unsigned pose=0;pose<sprites.definition(group).frames;++pose)for(unsigned format=0;format<2;++format) {
      const unsigned reference=oracle.bus->read_byte(header+9+pose*2)|
          unsigned(oracle.bus->read_byte(header+10+pose*2))<<8;
      const unsigned identity=(unsigned(oracle.bus->read_byte(header+8))<<16)|(reference&(format?0xfffe:0xfff0));
      const auto raw=sprites.raw_frame(group,pose,format?eb::native::SpriteFrameFormat::EightDirection:
          eb::native::SpriteFrameFormat::FourDirection);
      require(raw.reference==reference&&raw.source_identity==identity&&raw.bytes.size()==bytes,
          "Raw sprite frame reference/bank/source identity differs");
      for(unsigned byte=0;byte<bytes;++byte)require(raw.bytes[byte]==oracle.bus->read_byte(identity+byte),
          "Raw sprite immutable planar payload differs from actual original ROM");
      raw_bytes+=bytes;++raw_frames;
    }
  }
  std::cout<<"PASS raw sprite content "<<assets.title<<" groups=464 original_geometry_helpers=464 formats=2 frames="
      <<raw_frames<<" planar_bytes="<<raw_bytes<<" raw_banks="<<raw_banks<<" bank_bytes="<<bank_bytes<<'\n';
  std::cout<<"PASS ending resources "<<assets.title<<" actual_decodes=3 retained_BUFFER_bytes=196608 original_photo_counts=20 original_photo_sprites=136\n";
}
}
int main(int argc,char **argv) {
  if(argc<2)return 77;
  try {for(int i=1;i<argc;++i)run(eb::load_game_assets(argv[i],eb::asset_profiles()));return 0;}
  catch(const std::exception &error){std::cerr<<error.what()<<'\n';return 1;}
}
