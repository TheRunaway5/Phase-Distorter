#include "eb/native/cutscenes/ending/asset_work.hpp"
#include <algorithm>
#include <stdexcept>
namespace eb::native::cutscenes::ending {
namespace {void require(bool ok,const char *message){if(!ok)throw std::logic_error(message);}}
AssetWork::AssetWork(GameVersion version,story::SourceWorkClock &clock,DecodeWorkState &decode,
    battle::PsiScratch &scratch,battle::PsiDisplayState &video,WorldDisplayFade &fade)
    :version_(version),clock_(clock),decode_(decode),scratch_(scratch),video_(video),fade_(fade) {
  require(version==GameVersion::US||version==GameVersion::JP,"Asset work requires its actual region");
  require(clock.uses_video(video),"Asset work requires its actual source clock video owner");
}
bool AssetWork::uses(GameVersion version,const battle::PsiScratch &scratch,
    const battle::PsiDisplayState &video,const WorldDisplayFade &fade) const noexcept {
  return version_==version&&&scratch_==&scratch&&&video_==&video&&&fade_==&fade;
}
std::unique_ptr<AssetWork::Operation> AssetWork::begin_decode(CompressedAsset source,AssetCall call) {
  require(!active_&&!failed_&&!clock_.failed(),"Asset work is failed or busy");
  auto operation=std::unique_ptr<Operation>(new Operation(*this));
  operation->decode(source,call);active_=operation.get();return operation;
}
std::unique_ptr<AssetWork::Operation> AssetWork::begin_copy(battle::PsiTransfer transfer,AssetCall call) {
  require(!active_&&!failed_&&!clock_.failed(),"Asset work is failed or busy");
  auto operation=std::unique_ptr<Operation>(new Operation(*this));
  operation->copy(transfer,call);active_=operation.get();return operation;
}
AssetWork::Operation::Operation(AssetWork &owner):owner_(owner) {}
AssetWork::Operation::~Operation() {
  if(owner_.active_==this){owner_.active_=nullptr;owner_.failed_=true;}
}
unsigned AssetWork::Operation::source_line() const noexcept {
  return cursor_<atoms_.size()?atoms_[cursor_].line:0;
}
void AssetWork::Operation::decode(CompressedAsset source,AssetCall call) {
  require(!source.bytes.empty()&&source.source_identity>=0xc00000&&source.source_identity<=0xffffff&&
      (source.source_identity&65535)+source.bytes.size()<=65536&&source.output_bytes&&
      source.output_bytes<=65536u-call.destination,"DECOMP exceeds its immutable source or actual BUFFER");
  source_=source;
  const auto add=[&](unsigned cycles,unsigned rom,unsigned slow,unsigned line,
      Effect effect=Effect::None,unsigned operand=0) {
    atoms_.push_back({{cycles,rom,slow,0},effect,operand,line});
  };
  const auto control=[&](unsigned cycles,unsigned rom,unsigned line){add(cycles,rom,0,line);};
  const auto read=[&](unsigned offset,unsigned line,bool word=false) {
    add(word?7:6,word?4:3,3,line,word?Effect::ReadEncodedWord:Effect::ReadEncodedByte,offset);
  };
  // JSL; source's MOVE_INT argument prologue, including its overlapping bank
  // word/DECOMP_DEST_BUFFER byte; DB7E, M/X16 and actual caller D alignment.
  control(8,4,0);atoms_.back().cost.slow_accesses=3;
  const unsigned d=unsigned(call.unaligned_direct_page);
  add(4+d,2,2,3);add(5,3,2,3,Effect::SourceLow,source.source_identity&65535);
  add(4+d,2,2,3);add(5,3,2,3,Effect::SourceBank,source.source_identity>>16);
  add(4+d,2,2,4);add(5,3,2,5,Effect::Destination,call.destination);
  add(3,1,1,6);control(3,2,7);add(3+d,2,1,8);add(3,1,1,9);
  add(4,1,1,10);control(3,2,11);add(4,1,2,12);add(5,3,2,13);
  add(5,1,2,14);add(3,1,1,15);control(3,2,16);control(3,3,17);
  unsigned cursor{},produced{};
  for(;;) {
    require(cursor<source.bytes.size(),"Truncated DECOMP command");
    const unsigned header_at=cursor,header=source.bytes[cursor++];
    read(header_at,19);control(2,2,20);control(header==255?2:3,2,21);
    if(header==255) {
      require(cursor==source.bytes.size()&&produced==source.output_bytes,"DECOMP terminator/output extent differs");
      add(4,1,1,22);add(5,1,2,23);add(4,1,1,24);add(6,1,3,25);break;
    }
    const bool extended=(header>>5)==7;
    unsigned kind=header>>5,count=(header&31)+1;
    control(2,2,27);control(2,2,28);control(extended?2:3,2,29);
    if(extended) {
      require(cursor<source.bytes.size(),"Truncated extended DECOMP command");
      kind=(header>>2)&7;count=(((header&3)<<8)|source.bytes[cursor])+1;
      read(header_at,30);control(2,1,31);control(2,1,32);control(2,1,33);control(2,2,34);
      add(3,1,1,35);read(header_at,36);control(2,1,37);control(2,2,38);
      add(3,2,1,39,Effect::LengthHigh,header&3);read(cursor++,40);control(2,1,41);
      add(3,2,1,42,Effect::LengthLow,(count-1)&255);control(3,2,43);
      add(7,2,4,44,Effect::LengthIncrement);control(3,2,45);control(3,2,46);
    }else {
      add(3,1,1,48);read(header_at,49);control(2,1,50);control(2,2,51);control(2,1,52);
      add(3,2,1,53,Effect::LengthLow,count);add(3,2,1,54,Effect::LengthHigh,0);
    }
    require(kind<7&&count*(kind==2?2u:1u)<=source.output_bytes-produced,"DECOMP command exceeds BUFFER");
    add(4,1,1,56);control(kind<4?3:2,2,57);
    const unsigned start=call.destination+produced;
    if(kind<4) {
      control(2,2,60);control(kind==1?3:2,2,61);
      if(kind!=1){control(2,2,62);control(kind==2?3:2,2,63);}
      if(kind!=1&&kind!=2){control(2,2,64);control(kind==3?3:2,2,65);}
      if(kind==0) {
        require(count<=source.bytes.size()-cursor,"Truncated literal DECOMP command");
        for(unsigned i=0;i<count;++i) {
          read(cursor++,67);control(2,1,68);add(5,3,1,69,Effect::StoreByte,start+i);
          control(2,1,70);control(3,2,71);add(7,2,4,72,Effect::LengthDecrement);
          control(3,2,73);control(i+1<count?3:2,2,74);
        }
        control(3,3,75);
      }else {
        const bool word=kind==2;
        require((word?2u:1u)<=source.bytes.size()-cursor,"Truncated DECOMP fill value");
        if(word)control(3,2,89);
        read(cursor,word?90:kind==1?77:105,word);cursor+=word?2:1;
        control(2,1,word?91:kind==1?78:106);if(word)control(2,1,92);
        add(4,1,2,word?93:kind==1?79:107);add(4,2,2,word?94:kind==1?80:108);
        for(unsigned i=0;i<count;++i) {
          add(word?6:5,3,word?2:1,word?96:kind==1?82:110,
              word?Effect::StoreWord:Effect::StoreByte,start+i*(word?2:1));
          control(2,1,word?97:kind==1?83:111);
          if(word)control(2,1,98);else if(kind==3) add(2,1,0,112,Effect::IncrementValue);
          control(2,1,word?99:kind==1?84:113);control(i+1<count?3:2,2,word?100:kind==1?85:114);
        }
        add(5,1,2,word?101:kind==1?86:115);if(word)control(3,2,102);
        control(3,3,word?103:kind==1?87:116);
      }
    }else {
      control(3,3,58);add(3,2,1,118,Effect::Command,kind<<5);control(3,2,119);
      require(2<=source.bytes.size()-cursor,"Truncated DECOMP reference");
      const unsigned reference=(unsigned(source.bytes[cursor])<<8)|source.bytes[cursor+1];
      read(cursor,120,true);cursor+=2;control(3,1,121);control(2,1,122);add(4,2,2,123);
      control(2,1,124);control(2,1,125);add(4,1,2,126);control(2,1,127);control(3,2,128);
      add(3,2,1,129);control(2,2,130);control(kind==4?3:2,2,131);
      if(kind!=4){control(2,2,132);control(kind==5?3:2,2,133);}
      if(kind==6){control(2,2,134);control(3,2,135);}
      for(unsigned i=0;i<count;++i) {
        const unsigned relative=kind==6?reference-i:reference+i;
        require((kind!=6||i<=reference)&&relative<produced+i,"DECOMP reference escapes previously produced BUFFER");
        const unsigned line=kind==4?137:kind==5?148:176;
        add(5,3,1,line,Effect::ReadOutput,call.destination+relative);
        if(kind==5) {
          add(3,2,1,149,Effect::Command,256);
          for(unsigned bit=0;bit<8;++bit) {
            add(5,2,2,150+bit*2,Effect::ShiftCommand);add(2,1,0,151+bit*2,Effect::RotateValue);
          }
        }
        add(5,3,1,kind==4?138:kind==5?166:177,Effect::StoreByte,start+i);
        control(2,1,kind==4?139:kind==5?167:178);control(2,1,kind==4?140:kind==5?168:179);
        control(3,2,kind==4?141:kind==5?169:180);
        add(7,2,4,kind==4?142:kind==5?170:181,Effect::LengthDecrement);
        control(3,2,kind==4?143:kind==5?171:182);control(i+1<count?3:2,2,kind==4?144:kind==5?172:183);
      }
      add(5,1,2,kind==4?145:kind==5?173:184);control(3,3,kind==4?146:kind==5?174:185);
    }
    produced+=count*(kind==2?2:1);
  }
}
void AssetWork::Operation::copy(battle::PsiTransfer transfer,AssetCall call) {
  require(transfer.kind==battle::PsiTransferKind::Vram&&transfer.source.empty()&&
      (!transfer.source_identity||transfer.source_identity==0x7f0000)&&
      transfer.mode<=15&&transfer.mode%3==0&&owner_.video_.peripherals()&&
      (owner_.fade_.state().brightness&128),
      "Timed COPY requires actual forced blank, owned BUFFER and DMA peripherals");
  transfer_=transfer;transfer_.source_identity=0x7f0000;
  const auto add=[&](unsigned cycles,unsigned rom,unsigned slow,unsigned line,
      Effect effect=Effect::None,unsigned operand=0) {
    atoms_.push_back({{cycles,rom,slow,0},effect,operand,line});
  };
  // Literal JSL PREPARE_VRAM_COPY normal entry. STA MODE and STA bank are
  // word stores with their genuine neighboring parameter-byte effects.
  const unsigned d=unsigned(call.unaligned_direct_page);
  add(8,4,3,0);add(3,2,0,3);
  add(5,3,2,4,Effect::CopyMode,transfer.mode);
  add(5,3,2,5,Effect::CopySize,transfer.byte_count);
  add(4+d,2,2,6);add(5,3,2,6,Effect::CopySourceLow,transfer.source_offset);
  add(4+d,2,2,6);add(5,3,2,6,Effect::CopySourceBank,0x7f);
  add(5,3,2,7,Effect::CopyDestination,transfer.destination);add(3,3,0,8);
  add(3,1,1,19);add(3,2,0,20);add(3,2,0,21);add(4,1,2,22);
  add(5,3,2,23);add(5,1,2,24);add(3,1,1,25);add(2,2,0,26);
  add(3,1,1,27);add(4,1,1,28);add(3,2,0,29);add(6,3,2,30);
  // COPY_TO_VRAM enters DB/D0, M16/X16. The branch uses INIDISP_MIRROR,
  // not a fitted delay. DMA_TABLE data is bank00 ROM (8-clock bytes),
  // while the source C0 instruction fetches follow real MEMSEL.
  add(3,1,1,1);add(4,1,2,2);add(3,2,0,3);add(3,2,1,4);add(3,2,0,5);
  add(3,2,1,36,Effect::ReadCopyMode);
  add(5,3,2,37,Effect::ReadDmaTable);add(5,3,0,38,Effect::StoreDmaWord,0);
  add(4,3,1,39,Effect::ReadDmaVmain);add(4,3,0,40,Effect::StoreVmain);
  add(4,2,2,41,Effect::ReadCopySize);add(5,3,0,42,Effect::StoreDmaWord,5);
  add(4,2,2,43,Effect::ReadCopySource);add(5,3,0,44,Effect::StoreDmaWord,2);
  add(3,2,1,45,Effect::ReadCopyBank);add(4,3,0,46,Effect::StoreDmaByte,4);
  add(4,2,2,47,Effect::ReadCopyDestination);add(5,3,0,48,Effect::StoreVmadd);
  add(2,2,0,49);add(4,3,0,50,Effect::Dma);
  add(5,3,2,51,Effect::ReadHeapBase);add(5,3,2,52,Effect::HeapReset);
  if(owner_.version_==GameVersion::US) {add(3,3,0,54);add(6,4,2,55,Effect::FlagClear);}
  add(3,2,0,58);add(5,1,2,59);add(4,1,1,60);add(6,1,2,61);
  // Return through the actual near COPY caller and far PREPARE caller.
  add(4,1,1,31);add(5,1,2,32);add(4,1,1,33);add(6,1,3,34);
}
void AssetWork::Operation::effect(const Atom &a) {
  auto &d=owner_.decode_;auto &bytes=owner_.scratch_.bytes;
  switch(a.effect) {
  case Effect::None:break;
  case Effect::SourceLow:d.source=(d.source&0xff0000)|a.operand;break;
  case Effect::SourceBank:d.source=(d.source&65535)|(a.operand<<16);d.destination&=0xff00;break;
  case Effect::Destination:d.destination=std::uint16_t(a.operand);break;
  case Effect::LengthLow:d.remaining=std::uint16_t((d.remaining&0xff00)|a.operand);break;
  case Effect::LengthHigh:d.remaining=std::uint16_t((d.remaining&255)|(a.operand<<8));break;
  case Effect::LengthIncrement:++d.remaining;break;
  case Effect::LengthDecrement:--d.remaining;break;
  case Effect::Command:d.command=std::uint8_t(a.operand==256?value_:a.operand);break;
  case Effect::ReadEncodedByte:value_=source_.bytes[a.operand];break;
  case Effect::ReadEncodedWord:value_=std::uint16_t(source_.bytes[a.operand]|unsigned(source_.bytes[a.operand+1])<<8);break;
  case Effect::ReadOutput:value_=bytes[a.operand];break;
  case Effect::StoreByte:bytes[a.operand]=std::uint8_t(value_);break;
  case Effect::StoreWord:bytes[a.operand]=std::uint8_t(value_);bytes[a.operand+1]=std::uint8_t(value_>>8);break;
  case Effect::IncrementValue:value_=std::uint8_t(value_+1);break;
  case Effect::ShiftCommand:carry_=d.command&128;d.command=std::uint8_t(d.command<<1);break;
  case Effect::RotateValue:value_=std::uint8_t((value_>>1)|(carry_?128:0));break;
  case Effect::ReadCopyMode:dma_mode_=owner_.video_.source_copy_parameters().mode;break;
  case Effect::ReadCopySize:value_=owner_.video_.source_copy_parameters().byte_count;break;
  case Effect::ReadCopySource:value_=owner_.video_.source_copy_parameters().source_offset;break;
  case Effect::ReadCopyBank:value_=std::uint16_t(owner_.video_.source_copy_parameters().source_identity>>16);break;
  case Effect::ReadCopyDestination:value_=owner_.video_.source_copy_parameters().destination;break;
  case Effect::ReadDmaTable: {
    constexpr std::array<unsigned,6> modes{1,9,0,8,0,8};
    require(dma_mode_<=15&&dma_mode_%3==0,"Source COPY selected an unowned DMA table entry");
    value_=std::uint16_t(modes[dma_mode_/3]|((dma_mode_>=12?0x19u:0x18u)<<8));break;
  }
  case Effect::ReadDmaVmain:value_=std::uint16_t(dma_mode_==6||dma_mode_==9?0:0x80);break;
  case Effect::StoreDmaWord:
    owner_.video_.peripherals()->write_source_dma_register(1,a.operand,std::uint8_t(value_));
    owner_.video_.peripherals()->write_source_dma_register(1,a.operand+1,std::uint8_t(value_>>8));break;
  case Effect::StoreDmaByte:owner_.video_.peripherals()->write_source_dma_register(1,a.operand,std::uint8_t(value_));break;
  case Effect::StoreVmain:owner_.video_.set_source_vmain(std::uint8_t(value_));break;
  case Effect::StoreVmadd:owner_.video_.set_source_vmadd(value_);break;
  case Effect::ReadHeapBase:value_=owner_.video_.transient_memory().base_address();break;
  case Effect::HeapReset:owner_.video_.transient_memory().set_source_current_address(value_);break;
  case Effect::FlagClear:owner_.video_.set_source_dma_transfer_flag(0);break;
  default: {
    auto parameters=owner_.video_.source_copy_parameters();
    switch(a.effect) {
    case Effect::CopyMode:parameters.mode=std::uint8_t(a.operand);parameters.byte_count&=0xff00;break;
    case Effect::CopySize:parameters.byte_count=std::uint16_t(a.operand);break;
    case Effect::CopySourceLow:parameters.source_offset=std::uint16_t(a.operand);break;
    case Effect::CopySourceBank:parameters.source_identity=a.operand<<16;parameters.destination&=0xff00;break;
    case Effect::CopyDestination:parameters.destination=std::uint16_t(a.operand);break;
    case Effect::Dma: {
      require(owner_.fade_.state().brightness&128,"Source direct DMA lost actual forced blank");
      const auto &registers=owner_.video_.peripherals()->dma(1);
      require(registers[4]==0x7f,"Source direct DMA changed to an unowned source bank");
      auto latched=transfer_;
      latched.source_offset=std::uint16_t(registers[2]|unsigned(registers[3])<<8);
      latched.byte_count=std::uint16_t(registers[5]|unsigned(registers[6])<<8);
      latched.destination=owner_.video_.source_vmadd();latched.mode=std::uint8_t(dma_mode_);
      owner_.video_.complete_source_dma(owner_.scratch_,latched);return;
    }
    default:throw std::logic_error("Invalid ending asset semantic atom");
    }
    owner_.video_.set_source_copy_parameters(parameters);break;
  }
  }
}
dialogue::Progress AssetWork::Operation::advance(unsigned budget) {
  require(!executing_&&!owner_.failed_&&!owner_.clock_.failed(),"Asset work is failed or reentrant");
  if(complete_)return dialogue::Progress::Finished;
  executing_=true;
  try {
    while(budget--&&cursor_<atoms_.size()) {
      const auto &a=atoms_[cursor_];
      const auto apply=[&]{effect(a);};
      if(a.effect==Effect::Dma) {
        const auto &r=owner_.video_.peripherals()->dma(1);
        const unsigned size=r[5]|unsigned(r[6])<<8;
        owner_.clock_.retire_dma_work(a.cost,size?size:65536,apply);
      }
      else owner_.clock_.retire_source_work(a.cost,apply);
      ++cursor_;
    }
    executing_=false;
    if(cursor_!=atoms_.size())return dialogue::Progress::BudgetExhausted;
    complete_=true;owner_.active_=nullptr;return dialogue::Progress::Finished;
  }catch(...){executing_=false;owner_.failed_=true;throw;}
}
}
