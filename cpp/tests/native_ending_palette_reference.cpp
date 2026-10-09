#include "eb/native/cutscenes/ending/palette.hpp"
#include "eb/native/cutscenes/ending/resources.hpp"
#include "eb/native/display/transient_memory.hpp"
#include "eb/native/world_palettes.hpp"
#include "native_ending_text_oracle.hpp"
namespace {
using namespace eb::native;
namespace ending=cutscenes::ending;
void check(bool value,const std::string &message){if(!value)throw std::runtime_error(message);}
void special_palette(const eb::GameAssets &assets) {
  const bool jp=assets.version==eb::GameVersion::JP;
  ending_text_reference::Oracle source(assets.image,assets.version,
      ending_text_reference::reference_layout(assets.version).staff);
  ending::Resources resources(assets.image,assets.version);
  WorldPalettes content(assets.image,world_palette_layout(assets.version));
  display::TransientMemory heap;heap.configure(assets.version);
  const auto rejects=[&](const auto &call,const std::string &context) {
    bool rejected=false;
    try{call();}catch(const std::logic_error &){rejected=true;}
    check(rejected,context);
  };
  display::TransientMemory unconfigured;
  rejects([&]{(void)unconfigured.read_words16(0x2220);},"Unconfigured heap palette read admitted");
  unsigned cases{},aliases{},unsupported{};
  for(unsigned pattern=0;pattern<3;++pattern) {
    for(unsigned bank=0;bank<2;++bank)for(unsigned i=0;i<heap.capacity();++i)
      heap.bank(bank)[i]=std::uint8_t(i*71+bank*107+pattern*53+(i>>4));
    heap.after_interrupt();check(bool(heap.allocate(29)),"Retained heap fixture allocation failed");
    const unsigned selected=heap.selected_bank(),cursor=heap.cursor();
    std::vector<std::uint8_t> retained;
    for(unsigned bank=0;bank<2;++bank)
      retained.insert(retained.end(),heap.bank(bank).begin(),heap.bank(bank).end());
    const auto compare_heap=[&] {
      check(heap.selected_bank()==selected&&heap.cursor()==cursor,"Palette read changed heap allocation state");
      for(unsigned bank=0;bank<2;++bank)for(unsigned i=0;i<heap.capacity();++i) {
        check(heap.bank(bank)[i]==retained[bank*heap.capacity()+i],"Palette read changed retained heap byte");
        check(source.bus->work_ram[0x2000+bank*heap.capacity()+i]==heap.bank(bank)[i],
            "Original special palette copy changed its retained heap");
      }
    };
    const auto compare=[&](std::array<std::uint16_t,96> scenery,const std::string &context) {
      const auto control=scenery[32];
      std::array<std::uint16_t,16> borrowed{};
      std::span<const std::uint16_t> override;
      if(control>=16) {
        const auto address=std::uint16_t(0x0200+unsigned(control)*32);
        borrowed=heap.read_words16(address);override=borrowed;++aliases;
      }
      const auto result=content.resolve_photograph({0,0},scenery,resources.frame_palette(),override);
      // Establish the original saved average from its authored map palette1,
      // then let the real adjustment read every control word in this input.
      source.call(jp?0xc005f7:0xc005e7,true);
      std::array<std::uint16_t,256> expected{};
      for(unsigned i=0;i<expected.size();++i) {
        expected[i]=std::uint16_t(i*3137+pattern*21713+0xa543);source.put(0x200+i*2,expected[i]);
      }
      for(unsigned i=0;i<16;++i) {
        source.put(0x220+i*2,resources.frame_palette()[i]);expected[16+i]=resources.frame_palette()[i];
      }
      for(unsigned p=0;p<6;++p)for(unsigned i=0;i<16;++i) {
        source.put(0x240+(p*16+i)*2,scenery[p*16+i]);expected[32+p*16+i]=result.scenery_word(p,i);
      }
      for(unsigned p=0;p<8;++p)for(unsigned i=0;i<16;++i) {
        source.put(0x300+(p*16+i)*2,resources.sprite_palettes()[p*16+i]);
        expected[128+p*16+i]=result.sprite_word(p,i);
      }
      for(unsigned bank=0;bank<2;++bank)
        std::copy(heap.bank(bank).begin(),heap.bank(bank).end(),
            source.bus->work_ram.begin()+0x2000+bank*heap.capacity());
      // The linked helper's ASL*5 and ADC retain only the low-word address;
      // selector0101 reads actual2220, rather than palette1 or padded zeros.
      source.call(jp?0xc00490:0xc00480,true);
      source.call(jp?0xc00788:0xc00778,true);
      for(unsigned i=0;i<expected.size();++i)
        check(expected[i]==ending_text_reference::word(source.bus->work_ram,0x200+i*2),
            context+" complete palette differs word="+std::to_string(i));
      compare_heap();++cases;
    };
    for(unsigned selector=0;selector<16;++selector) {
      std::array<std::uint16_t,96> scenery{};
      for(unsigned i=0;i<scenery.size();++i)
        scenery[i]=std::uint16_t(((i*533+pattern*17491+0x8ace)&0x3def)|0x8000);
      scenery[32]=std::uint16_t(selector);
      compare(scenery,"CGRAM selector="+std::to_string(selector));
    }
    for(unsigned index=0;index<resources.photographs().size();++index) {
      const auto offset=resources.photographs()[index].palette_offset;
      std::array<std::uint16_t,96> scenery{};
      for(unsigned i=0;i<scenery.size();++i)
        scenery[i]=std::uint16_t(ending_text_reference::word(resources.photo_palettes(),offset+i*2));
      const auto address=std::uint16_t(0x0200+unsigned(scenery[32])*32);
      if(scenery[32]>=16&&(address<0x2000||unsigned(address)+32>0x2000+2*heap.capacity())) {
        rejects([&]{(void)heap.read_words16(address);},"Unowned authored palette alias admitted");
        ++unsupported;continue;
      }
      compare(scenery,"Authored photograph="+std::to_string(index));
    }
    for(const auto address:{0x1fe0u,0xa200u,0xfff0u,0x2000+2*heap.capacity()-31})
      rejects([&]{(void)heap.read_words16(std::uint16_t(address));},"Out-of-range heap word read admitted");
    for(const auto address:{0x2000+heap.capacity()-16,0x2000+2*heap.capacity()-32}) {
      const auto words=heap.read_words16(std::uint16_t(address));
      for(unsigned i=0;i<words.size();++i)
        check(words[i]==ending_text_reference::word(retained,address-0x2000+i*2),
            "Boundary-spanning actual heap read differs");
      compare_heap();
    }
  }
  std::array<std::uint16_t,96> scenery{};scenery[32]=0x0101;
  std::array<std::uint16_t,16> borrowed{};
  rejects([&]{(void)content.resolve_photograph({0,0},scenery,resources.frame_palette());},
      "Unowned wrapped palette source admitted");
  rejects([&]{(void)content.resolve_photograph({0,0},scenery,resources.frame_palette(),
      std::span<const std::uint16_t>(borrowed).first(15));},"Truncated retained palette admitted");
  scenery[32]=1;
  rejects([&]{(void)content.resolve_photograph({0,0},scenery,resources.frame_palette(),borrowed);},
      "Unsolicited retained override replaced owned CGRAM palette");
  std::cout<<"PASS actual LOAD_SPECIAL_SPRITE_PALETTE "<<assets.title<<" complete256word_cases="<<cases
      <<" actual_heap_alias_cases="<<aliases<<" explicitly_unowned_authored_aliases="<<unsupported
      <<" retained_banks/cursor=unchanged source_instructions="<<source.steps<<'\n';
}
void run(const eb::GameAssets &assets) {
  special_palette(assets);
  const bool jp=assets.version==eb::GameVersion::JP;
  ending_text_reference::Oracle source(assets.image,assets.version,
      ending_text_reference::reference_layout(assets.version).staff);
  battle::PaletteBankState palettes;battle::PsiScratch scratch;
  unsigned preparations{},steps{},finishes{};std::uint64_t bytes{};
  const auto compare=[&](const std::string &context) {
    for(unsigned i=0;i<65536;++i)check(scratch.bytes[i]==source.bus->work_ram[0x10000+i],
        context+" retained BUFFER differs byte="+std::to_string(i));
    for(unsigned i=0;i<256;++i)check(palettes.staged_color(i)==ending_text_reference::word(source.bus->work_ram,0x200+i*2),
        context+" raw palette differs color="+std::to_string(i));
    check(palettes.upload_mode==source.bus->work_ram[0x30],context+" palette upload intent differs");
    bytes+=65536;
  };
  for(unsigned pattern=0;pattern<3;++pattern)for(unsigned divisor:{0u,1u,64u,0xffffu})
    for(unsigned mask:{0u,0xffffu,0x5555u,0x8000u}) {
      const std::string context=assets.title+" pattern="+std::to_string(pattern)+" divisor="+
          std::to_string(divisor)+" mask="+std::to_string(mask);
      for(unsigned i=0;i<65536;++i) {
        const auto byte=std::uint8_t(i*(pattern*31+17)+(i>>8)*13+pattern*97);
        scratch.bytes[i]=byte;source.bus->work_ram[0x10000+i]=byte;
      }
      for(unsigned i=0;i<256;++i) {
        const auto value=std::uint16_t(i*3137+pattern*21713+0xa543);
        palettes.staged_color(i)=value;source.put(0x200+i*2,value);
      }
      palettes.upload_mode=source.bus->work_ram[0x30]=0x5a;
      source.call(jp?0xc46d31:0xc496e7,true,divisor,mask);
      ending::prepare_photograph_palette(palettes,scratch,std::uint16_t(divisor),std::uint16_t(mask));
      compare(context+" prepare");++preparations;
      for(unsigned tick=0;tick<64;++tick) {
        // These are synchronous original palette helpers only. The complete
        // credits caller owns each real WorldFrame and is a separate proof.
        source.call(jp?0xc4262b:0xc426ed,true);
        ending::advance_photograph_palette(palettes,scratch);compare(context+" tick="+std::to_string(tick));++steps;
      }
      source.call(jp?0xc46d8a:0xc49740,true);
      ending::finish_photograph_palette(palettes,scratch);compare(context+" finish");++finishes;
    }
  // UPDATE_MAP_PALETTE_ANIMATION reads actual retained counters on every
  // call; another real BUFFER producer must never be hidden by cached ramps.
  for(unsigned pattern=0;pattern<3;++pattern) {
    for(unsigned i=0;i<65536;++i) {
      const auto byte=std::uint8_t(i*71+(i>>8)*29+pattern*101);
      scratch.bytes[i]=byte;source.bus->work_ram[0x10000+i]=byte;
    }
    for(unsigned i=0;i<256;++i){palettes.staged_color(i)=0xa55a;source.put(0x200+i*2,0xa55a);}
    palettes.upload_mode=source.bus->work_ram[0x30]=0;
    source.call(jp?0xc4262b:0xc426ed,true);
    ending::advance_photograph_palette(palettes,scratch);compare("Direct retained counters pattern="+std::to_string(pattern));++steps;
  }
  std::cout<<"PASS actual photograph palette helpers "<<assets.title<<" preparations="<<preparations
      <<" advances="<<steps<<" target_copies="<<finishes<<" complete_BUFFER_bytes="<<bytes
      <<" source_instructions="<<source.steps<<" physical_frame_proof=separate\n";
}
}
int main(int argc,char **argv) {
  if(argc!=2)return 77;
  try{run(eb::load_game_assets(argv[1],eb::asset_profiles()));return 0;}
  catch(const std::exception &e){std::cerr<<"FAIL photograph palette: "<<e.what()<<'\n';return 1;}
}
