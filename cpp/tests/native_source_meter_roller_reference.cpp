// Independent mapped HP_PP_ROLLER authority. The genuine C1 JSL is charged
// separately; all prior WindowTick and declared-input preparation is excluded.
#define main eb_embedded_meter_screen_reference_main
#include "native_source_screen_reference.cpp"
#undef main
#include "eb/native/story/source_meter_roller.hpp"
#include "eb/native/story/source_random.hpp"
#include "eb/native/story/source_window_publication.hpp"
#include "eb/native/display/text_tiles.hpp"
#include "eb/native/saves/session.hpp"
#include "eb/native/battle/outcomes.hpp"
#include <tuple>

namespace eb {
struct RuntimeStateAudit {
  static native::SourceMathState meter_math(const SnesBus& b) {
    return {b.cpu_io_registers_[2],b.cpu_io_registers_[3],b.multiply_result_,b.divide_result_,
      b.pending_product_,b.pending_quotient_,b.math_remaining_cpu_cycles_,b.pending_divide_};
  }
};
}
namespace {
void meter_bytes(const GameAssets& assets,unsigned pc,std::span<const std::uint8_t> bytes) {
  require((pc&0x3fffff)+bytes.size()<=assets.image.size(),"Original meter byte audit escaped cartridge");
  require(std::equal(bytes.begin(),bytes.end(),assets.image.begin()+(pc&0x3fffff)),
    "Immutable original meter/caller byte audit differs at "+std::to_string(pc));
}
struct MeterLayout {unsigned caller,roller,speed,multiply,asr,rows,stride,fraction,order,disabled,half,fastest,flipout,hp_speed,reset_call,reset,controlled;};
MeterLayout meter_layout(GameVersion version) {
  if(version==GameVersion::JP)return {0xc13532,0xc20f3b,0xc20de9,0xc08fdb,0xc09244,0x9c7f,94,66,0x9b20,0x994b,0x9949,0x994a,0x994c,0x991f,0xc25e34,0xc20e2b,0x9b55};
  return {0xc12e14,0xc2109f,0xc20f58,0xc08ff7,0xc09262,0x99ce,95,67,0x986f,0x9697,0x9695,0x9696,0x9698,0x9627,0xc25f08,0xc20f9a,0x98a4};
}
void meter_authority(const GameAssets& assets) {
  const auto l=meter_layout(assets.version);
  const std::array<std::uint8_t,4> call{0x22,std::uint8_t(l.roller),std::uint8_t(l.roller>>8),0xc2};meter_bytes(assets,l.caller,call);
  const std::array<std::uint8_t,4> reset{0x22,std::uint8_t(l.reset),std::uint8_t(l.reset>>8),0xc2};meter_bytes(assets,l.reset_call,reset);
  // Excluded producers still execute immutable original bytes on this host's
  // own preparation bus; authority probes never pass through the timed bus.
  const unsigned random_entry=assets.version==GameVersion::JP?0xc08e8b:0xc08e9a;
  const unsigned random_call=assets.version==GameVersion::JP?0xc13504:0xc12dd7;
  const std::array<std::uint8_t,4> random_jsl{0x22,std::uint8_t(random_entry),std::uint8_t(random_entry>>8),0xc0};
  meter_bytes(assets,random_call,random_jsl);
  constexpr std::array<std::uint8_t,2> random_rep{0xc2,0x31};meter_bytes(assets,random_call-2,random_rep);
  constexpr std::array<std::uint8_t,56> random_bytes{
    0x08,0xc2,0x20,0xad,0x24,0x00,0xe2,0x20,0xeb,0xad,0x26,0x00,0xc2,0x20,0x8f,0x02,0x42,0x00,
    0x18,0x69,0x6d,0x00,0x8d,0x26,0x00,0xaf,0x16,0x42,0x00,0x6a,0x6a,0x48,0x29,0x03,0x00,0x18,
    0x6d,0x24,0x00,0x6a,0x90,0x03,0x09,0x00,0x80,0x8d,0x24,0x00,0x68,0x6a,0x6a,0x29,0xff,0x00,0x28,0x6b};
  meter_bytes(assets,random_entry,random_bytes);
  constexpr std::array<std::uint8_t,12> seed_bytes{0xa9,0x34,0x12,0x8d,0x24,0x00,0xa9,0x78,0x56,0x8d,0x26,0x00};
  meter_bytes(assets,assets.version==GameVersion::JP?0xc08123:0xc08121,seed_bytes);
  if(assets.version==GameVersion::US) {
    constexpr std::array<std::uint8_t,154> reset_bytes{
    0xc2,0x31,0x0b,0x7b,0x69,0xf0,0xff,0x5b,0xa9,0x00,0x00,0x85,0x02,0x80,0x6d,0xa6,0x02,0xbd,0x6f,0x98,0x29,0xff,0x00,0x3a,
    0xa0,0x5f,0x00,0x22,0xf7,0x8f,0xc0,0x18,0x69,0xce,0x99,0xa8,0xb9,0x0e,0x00,0x29,0xff,0x00,0xc9,0x01,0x00,0xf0,0x0b,0xb9,
    0x45,0x00,0xd0,0x06,0xa9,0x01,0x00,0x99,0x47,0x00,0xb9,0x43,0x00,0xf0,0x1b,0xb9,0x45,0x00,0x85,0x0e,0x98,0x18,0x69,0x47,
    0x00,0xaa,0xbd,0x00,0x00,0x85,0x04,0xa5,0x0e,0xc5,0x04,0x90,0x05,0xf0,0x03,0x9d,0x00,0x00,0xb9,0x49,0x00,0xf0,0x1b,0xb9,
    0x4b,0x00,0x85,0x0e,0x98,0x18,0x69,0x4d,0x00,0xaa,0xbd,0x00,0x00,0x85,0x04,0xa5,0x0e,0xc5,0x04,0x90,0x05,0xf0,0x03,0x9d,
    0x00,0x00,0xe6,0x02,0xad,0xa4,0x98,0x29,0xff,0x00,0x85,0x04,0xa5,0x02,0xc5,0x04,0xb0,0x05,0xf0,0x03,0x4c,0xa9,0x0f,0xe2,
    0x20,0xa9,0x01,0x8d,0x96,0x96,0xc2,0x20,0x2b,0x6b,
    };
    meter_bytes(assets,0xc20f9a,reset_bytes);
    constexpr std::array<std::uint8_t,781> bytes0{
      0xc2,0x31,0x0b,0x7b,0x69,0xec,0xff,0x5b,0xad,0x97,0x96,0x29,0xff,0x00,0xf0,0x03,0x4c,0xaa,0x13,0xad,0x02,0x00,0x29,0xff,
      0x00,0x29,0x03,0x00,0xaa,0xbd,0x6f,0x98,0x29,0xff,0x00,0xd0,0x03,0x4c,0xaa,0x13,0x29,0xff,0x00,0x85,0x12,0x18,0xe9,0x04,
      0x00,0x70,0x05,0x30,0x08,0x4c,0xaa,0x13,0x10,0x03,0x4c,0xaa,0x13,0xa5,0x12,0x3a,0xa0,0x5f,0x00,0x22,0xf7,0x8f,0xc0,0x18,
      0x69,0xce,0x99,0x85,0x10,0xad,0x98,0x96,0xd0,0x14,0xa5,0x10,0x18,0x69,0x43,0x00,0xaa,0x86,0x0e,0xbd,0x00,0x00,0x29,0x01,
      0x00,0xd0,0x03,0x4c,0x16,0x12,0xa5,0x10,0xaa,0xbc,0x45,0x00,0xaa,0xbd,0x47,0x00,0x85,0x02,0x98,0xc5,0x02,0xb0,0x75,0xa5,
      0x10,0x18,0x69,0x43,0x00,0xaa,0x9b,0x84,0x0e,0xad,0x96,0x96,0x29,0xff,0x00,0xd0,0x05,0xad,0x98,0x96,0xf0,0x0c,0xa9,0x00,
      0x40,0x85,0x06,0xa9,0x06,0x00,0x85,0x08,0x80,0x03,0x20,0x58,0x0f,0xa5,0x06,0x85,0x0a,0xa5,0x08,0x85,0x0c,0xa4,0x0e,0xb9,
      0x00,0x00,0x85,0x06,0xb9,0x02,0x00,0x85,0x08,0x18,0xa5,0x06,0x65,0x0a,0x85,0x06,0xa5,0x08,0x65,0x0c,0x85,0x08,0xa5,0x06,
      0x99,0x00,0x00,0xa5,0x08,0x99,0x02,0x00,0xa5,0x10,0x18,0x69,0x45,0x00,0xaa,0xbd,0x00,0x00,0xc5,0x02,0xb0,0x05,0xf0,0x03,
      0x4c,0x2b,0x12,0xa5,0x02,0x9d,0x00,0x00,0xa5,0x10,0xaa,0xa9,0x01,0x00,0x9d,0x43,0x00,0x4c,0x2b,0x12,0x98,0xc5,0x02,0xd0,
      0x18,0xa5,0x10,0x18,0x69,0x43,0x00,0xaa,0xbd,0x00,0x00,0xc9,0x01,0x00,0xd0,0x09,0xa9,0x00,0x00,0x9d,0x00,0x00,0x4c,0x2b,
      0x12,0xa5,0x10,0x18,0x69,0x43,0x00,0xaa,0x9b,0x84,0x0e,0xad,0x98,0x96,0xf0,0x0c,0xa9,0x00,0x40,0x85,0x06,0xa9,0x06,0x00,
      0x85,0x08,0x80,0x03,0x20,0x58,0x0f,0xa5,0x06,0x85,0x0a,0xa5,0x08,0x85,0x0c,0xa4,0x0e,0xb9,0x00,0x00,0x85,0x06,0xb9,0x02,
      0x00,0x85,0x08,0x38,0xa5,0x06,0xe5,0x0a,0x85,0x06,0xa5,0x08,0xe5,0x0c,0x85,0x08,0xa5,0x06,0x99,0x00,0x00,0xa5,0x08,0x99,
      0x02,0x00,0xa5,0x10,0xaa,0xbc,0x45,0x00,0x98,0xc5,0x02,0x90,0x07,0xc0,0xe8,0x03,0x90,0x2a,0xf0,0x28,0xa5,0x10,0xaa,0xa5,
      0x02,0x9d,0x45,0x00,0xa5,0x10,0xaa,0xa9,0x01,0x00,0x9d,0x43,0x00,0x80,0x15,0xa5,0x10,0x48,0xaa,0xbd,0x45,0x00,0xfa,0xdd,
      0x47,0x00,0xf0,0x08,0xa9,0x01,0x00,0xa6,0x0e,0x9d,0x00,0x00,0xad,0x98,0x96,0xd0,0x14,0xa5,0x10,0x18,0x69,0x49,0x00,0xaa,
      0x86,0x0e,0xbd,0x00,0x00,0x29,0x01,0x00,0xd0,0x03,0x4c,0x53,0x13,0xa5,0x10,0xaa,0xbc,0x4b,0x00,0xaa,0xbd,0x4d,0x00,0x85,
      0x02,0x98,0xc5,0x02,0xb0,0x70,0xa5,0x10,0x18,0x69,0x49,0x00,0xaa,0x9b,0xad,0x98,0x96,0xf0,0x0c,0xa9,0x00,0x40,0x85,0x06,
      0xa9,0x06,0x00,0x85,0x08,0x80,0x0a,0xa9,0x00,0x90,0x85,0x06,0xa9,0x01,0x00,0x85,0x08,0xa5,0x06,0x85,0x0a,0xa5,0x08,0x85,
      0x0c,0xb9,0x00,0x00,0x85,0x06,0xb9,0x02,0x00,0x85,0x08,0x18,0xa5,0x06,0x65,0x0a,0x85,0x06,0xa5,0x08,0x65,0x0c,0x85,0x08,
      0xa5,0x06,0x99,0x00,0x00,0xa5,0x08,0x99,0x02,0x00,0xa5,0x10,0x18,0x69,0x4b,0x00,0xaa,0xbd,0x00,0x00,0xc5,0x02,0xb0,0x05,
      0xf0,0x03,0x4c,0x68,0x13,0xa5,0x02,0x9d,0x00,0x00,0xa5,0x10,0xaa,0xa9,0x01,0x00,0x9d,0x49,0x00,0x4c,0x68,0x13,0x98,0xc5,
      0x02,0xd0,0x18,0xa5,0x10,0x18,0x69,0x49,0x00,0xaa,0xbd,0x00,0x00,0xc9,0x01,0x00,0xd0,0x09,0xa9,0x00,0x00,0x9d,0x00,0x00,
      0x4c,0x68,0x13,0xa5,0x10,0x18,0x69,0x49,0x00,0xaa,0x9b,0xad,0x98,0x96,0xf0,0x0c,0xa9,0x00,0x40,0x85,0x06,0xa9,0x06,0x00,
      0x85,0x08,0x80,0x0a,0xa9,0x00,0x90,0x85,0x06,0xa9,0x01,0x00,0x85,0x08,0xa5,0x06,0x85,0x0a,0xa5,0x08,0x85,0x0c,0xb9,0x00,
      0x00,0x85,0x06,0xb9,0x02,0x00,0x85,0x08,0x38,0xa5,0x06,0xe5,0x0a,0x85,0x06,0xa5,0x08,0xe5,0x0c,0x85,0x08,0xa5,0x06,0x99,
      0x00,0x00,0xa5,0x08,0x99,0x02,0x00,0xa5,0x10,0xaa,0xbc,0x4b,0x00,0x98,0xc5,0x02,0x90,0x07,0xc0,0xe8,0x03,0x90,0x2a,0xf0,
      0x28,0xa5,0x10,0xaa,0xa5,0x02,0x9d,0x4b,0x00,0xa5,0x10,0xaa,0xa9,0x01,0x00,0x9d,0x49,0x00,0x80,0x15,0xa5,0x10,0x48,0xaa,
      0xbd,0x4b,0x00,0xfa,0xdd,0x4d,0x00,0xf0,0x08,0xa9,0x01,0x00,0xa6,0x0e,0x9d,0x00,0x00,0xad,0x98,0x96,0xf0,0x3d,0xa5,0x10,
      0xaa,0xbc,0x45,0x00,0xc0,0xe7,0x03,0xd0,0x09,0xaa,0xa9,0x01,0x00,0x9d,0x47,0x00,0x80,0x0c,0xc0,0x01,0x00,0xd0,0x07,0xaa,
      0xa9,0xe7,0x03,0x9d,0x47,0x00,0xa5,0x10,0xaa,0xbc,0x4b,0x00,0xc0,0xe7,0x03,0xd0,0x06,0xaa,0x9e,0x4d,0x00,0x80,0x0c,0xc0,
      0x00,0x00,0xd0,0x07,0xaa,0xa9,0xe7,0x03,0x9d,0x4d,0x00,0x2b,0x6b,
    };
    meter_bytes(assets,0xc2109f,bytes0);
    constexpr std::array<std::uint8_t,66> bytes1{
      0xc2,0x31,0x0b,0x7b,0x69,0xf2,0xff,0x5b,0xad,0x95,0x96,0x29,0xff,0x00,0xf0,0x1c,0xe2,0x10,0xa0,0x01,0xad,0x27,0x96,0x85,
      0x06,0xad,0x29,0x96,0x85,0x08,0x22,0x62,0x92,0xc0,0xa5,0x06,0x85,0x14,0xa5,0x08,0x85,0x16,0x80,0x12,0xad,0x27,0x96,0x85,
      0x06,0xad,0x29,0x96,0x85,0x08,0xa5,0x06,0x85,0x14,0xa5,0x08,0x85,0x16,0xc2,0x10,0x2b,0x60,
    };
    meter_bytes(assets,0xc20f58,bytes1);
    constexpr std::array<std::uint8_t,59> bytes2{
      0xc2,0x10,0xeb,0xf0,0x26,0xe2,0x20,0xeb,0x48,0x98,0xc2,0x20,0x8f,0x02,0x42,0x00,0xea,0xea,0xaf,0x16,0x42,0x00,0xa8,0xe2,
      0x20,0x68,0x8f,0x03,0x42,0x00,0xc2,0x20,0x98,0xeb,0x29,0x00,0xff,0x18,0x6f,0x16,0x42,0x00,0x6b,0xe2,0x20,0x98,0xc2,0x20,
      0x8f,0x02,0x42,0x00,0xea,0xea,0xaf,0x16,0x42,0x00,0x6b,
    };
    meter_bytes(assets,0xc08ff7,bytes2);
    constexpr std::array<std::uint8_t,23> bytes3{
      0xa5,0x08,0x10,0x06,0x30,0x0d,0x46,0x08,0x66,0x06,0x88,0x10,0xf9,0x6b,0x38,0x66,0x08,0x66,0x06,0x88,0x10,0xf8,0x6b,
    };
    meter_bytes(assets,0xc09262,bytes3);
  }
  if(assets.version==GameVersion::JP) {
    constexpr std::array<std::uint8_t,159> reset_bytes{
    0xc2,0x31,0x0b,0x7b,0x69,0xf0,0xff,0x5b,0xa9,0x00,0x00,0x85,0x02,0x80,0x72,0xa5,0x02,0x18,0x69,0xa9,0x9a,0xaa,0xbd,0x77,
    0x00,0x29,0xff,0x00,0x3a,0xa0,0x5e,0x00,0x22,0xdb,0x8f,0xc0,0x18,0x69,0x7f,0x9c,0xa8,0xb9,0x0d,0x00,0x29,0xff,0x00,0xc9,
    0x01,0x00,0xf0,0x0b,0xb9,0x44,0x00,0xd0,0x06,0xa9,0x01,0x00,0x99,0x46,0x00,0xb9,0x42,0x00,0xf0,0x1b,0xb9,0x44,0x00,0x85,
    0x0e,0x98,0x18,0x69,0x46,0x00,0xaa,0xbd,0x00,0x00,0x85,0x04,0xa5,0x0e,0xc5,0x04,0x90,0x05,0xf0,0x03,0x9d,0x00,0x00,0xb9,
    0x48,0x00,0xf0,0x1b,0xb9,0x4a,0x00,0x85,0x0e,0x98,0x18,0x69,0x4c,0x00,0xaa,0xbd,0x00,0x00,0x85,0x04,0xa5,0x0e,0xc5,0x04,
    0x90,0x05,0xf0,0x03,0x9d,0x00,0x00,0xe6,0x02,0xad,0x55,0x9b,0x29,0xff,0x00,0x85,0x04,0xa5,0x02,0xc5,0x04,0xb0,0x05,0xf0,
    0x03,0x4c,0x3a,0x0e,0xe2,0x20,0xa9,0x01,0x8d,0x4a,0x99,0xc2,0x20,0x2b,0x6b,
    };
    meter_bytes(assets,0xc20e2b,reset_bytes);
    constexpr std::array<std::uint8_t,785> bytes0{
      0xc2,0x31,0x0b,0x7b,0x69,0xec,0xff,0x5b,0xad,0x4b,0x99,0x29,0xff,0x00,0xf0,0x03,0x4c,0x4a,0x12,0xad,0x02,0x00,0x29,0xff,
      0x00,0x29,0x03,0x00,0x18,0x69,0xa9,0x9a,0xaa,0xbd,0x77,0x00,0x29,0xff,0x00,0xd0,0x03,0x4c,0x4a,0x12,0x29,0xff,0x00,0x85,
      0x12,0x18,0xe9,0x04,0x00,0x70,0x05,0x30,0x08,0x4c,0x4a,0x12,0x10,0x03,0x4c,0x4a,0x12,0xa5,0x12,0x3a,0xa0,0x5e,0x00,0x22,
      0xdb,0x8f,0xc0,0x18,0x69,0x7f,0x9c,0x85,0x10,0xad,0x4c,0x99,0xd0,0x14,0xa5,0x10,0x18,0x69,0x42,0x00,0xaa,0x86,0x0e,0xbd,
      0x00,0x00,0x29,0x01,0x00,0xd0,0x03,0x4c,0xb6,0x10,0xa5,0x10,0xaa,0xbc,0x44,0x00,0xaa,0xbd,0x46,0x00,0x85,0x02,0x98,0xc5,
      0x02,0xb0,0x75,0xa5,0x10,0x18,0x69,0x42,0x00,0xaa,0x9b,0x84,0x0e,0xad,0x4a,0x99,0x29,0xff,0x00,0xd0,0x05,0xad,0x4c,0x99,
      0xf0,0x0c,0xa9,0x00,0x40,0x85,0x06,0xa9,0x06,0x00,0x85,0x08,0x80,0x03,0x20,0xe9,0x0d,0xa5,0x06,0x85,0x0a,0xa5,0x08,0x85,
      0x0c,0xa4,0x0e,0xb9,0x00,0x00,0x85,0x06,0xb9,0x02,0x00,0x85,0x08,0x18,0xa5,0x06,0x65,0x0a,0x85,0x06,0xa5,0x08,0x65,0x0c,
      0x85,0x08,0xa5,0x06,0x99,0x00,0x00,0xa5,0x08,0x99,0x02,0x00,0xa5,0x10,0x18,0x69,0x44,0x00,0xaa,0xbd,0x00,0x00,0xc5,0x02,
      0xb0,0x05,0xf0,0x03,0x4c,0xcb,0x10,0xa5,0x02,0x9d,0x00,0x00,0xa5,0x10,0xaa,0xa9,0x01,0x00,0x9d,0x42,0x00,0x4c,0xcb,0x10,
      0x98,0xc5,0x02,0xd0,0x18,0xa5,0x10,0x18,0x69,0x42,0x00,0xaa,0xbd,0x00,0x00,0xc9,0x01,0x00,0xd0,0x09,0xa9,0x00,0x00,0x9d,
      0x00,0x00,0x4c,0xcb,0x10,0xa5,0x10,0x18,0x69,0x42,0x00,0xaa,0x9b,0x84,0x0e,0xad,0x4c,0x99,0xf0,0x0c,0xa9,0x00,0x40,0x85,
      0x06,0xa9,0x06,0x00,0x85,0x08,0x80,0x03,0x20,0xe9,0x0d,0xa5,0x06,0x85,0x0a,0xa5,0x08,0x85,0x0c,0xa4,0x0e,0xb9,0x00,0x00,
      0x85,0x06,0xb9,0x02,0x00,0x85,0x08,0x38,0xa5,0x06,0xe5,0x0a,0x85,0x06,0xa5,0x08,0xe5,0x0c,0x85,0x08,0xa5,0x06,0x99,0x00,
      0x00,0xa5,0x08,0x99,0x02,0x00,0xa5,0x10,0xaa,0xbc,0x44,0x00,0x98,0xc5,0x02,0x90,0x07,0xc0,0xe8,0x03,0x90,0x2a,0xf0,0x28,
      0xa5,0x10,0xaa,0xa5,0x02,0x9d,0x44,0x00,0xa5,0x10,0xaa,0xa9,0x01,0x00,0x9d,0x42,0x00,0x80,0x15,0xa5,0x10,0x48,0xaa,0xbd,
      0x44,0x00,0xfa,0xdd,0x46,0x00,0xf0,0x08,0xa9,0x01,0x00,0xa6,0x0e,0x9d,0x00,0x00,0xad,0x4c,0x99,0xd0,0x14,0xa5,0x10,0x18,
      0x69,0x48,0x00,0xaa,0x86,0x0e,0xbd,0x00,0x00,0x29,0x01,0x00,0xd0,0x03,0x4c,0xf3,0x11,0xa5,0x10,0xaa,0xbc,0x4a,0x00,0xaa,
      0xbd,0x4c,0x00,0x85,0x02,0x98,0xc5,0x02,0xb0,0x70,0xa5,0x10,0x18,0x69,0x48,0x00,0xaa,0x9b,0xad,0x4c,0x99,0xf0,0x0c,0xa9,
      0x00,0x40,0x85,0x06,0xa9,0x06,0x00,0x85,0x08,0x80,0x0a,0xa9,0x00,0x90,0x85,0x06,0xa9,0x01,0x00,0x85,0x08,0xa5,0x06,0x85,
      0x0a,0xa5,0x08,0x85,0x0c,0xb9,0x00,0x00,0x85,0x06,0xb9,0x02,0x00,0x85,0x08,0x18,0xa5,0x06,0x65,0x0a,0x85,0x06,0xa5,0x08,
      0x65,0x0c,0x85,0x08,0xa5,0x06,0x99,0x00,0x00,0xa5,0x08,0x99,0x02,0x00,0xa5,0x10,0x18,0x69,0x4a,0x00,0xaa,0xbd,0x00,0x00,
      0xc5,0x02,0xb0,0x05,0xf0,0x03,0x4c,0x08,0x12,0xa5,0x02,0x9d,0x00,0x00,0xa5,0x10,0xaa,0xa9,0x01,0x00,0x9d,0x48,0x00,0x4c,
      0x08,0x12,0x98,0xc5,0x02,0xd0,0x18,0xa5,0x10,0x18,0x69,0x48,0x00,0xaa,0xbd,0x00,0x00,0xc9,0x01,0x00,0xd0,0x09,0xa9,0x00,
      0x00,0x9d,0x00,0x00,0x4c,0x08,0x12,0xa5,0x10,0x18,0x69,0x48,0x00,0xaa,0x9b,0xad,0x4c,0x99,0xf0,0x0c,0xa9,0x00,0x40,0x85,
      0x06,0xa9,0x06,0x00,0x85,0x08,0x80,0x0a,0xa9,0x00,0x90,0x85,0x06,0xa9,0x01,0x00,0x85,0x08,0xa5,0x06,0x85,0x0a,0xa5,0x08,
      0x85,0x0c,0xb9,0x00,0x00,0x85,0x06,0xb9,0x02,0x00,0x85,0x08,0x38,0xa5,0x06,0xe5,0x0a,0x85,0x06,0xa5,0x08,0xe5,0x0c,0x85,
      0x08,0xa5,0x06,0x99,0x00,0x00,0xa5,0x08,0x99,0x02,0x00,0xa5,0x10,0xaa,0xbc,0x4a,0x00,0x98,0xc5,0x02,0x90,0x07,0xc0,0xe8,
      0x03,0x90,0x2a,0xf0,0x28,0xa5,0x10,0xaa,0xa5,0x02,0x9d,0x4a,0x00,0xa5,0x10,0xaa,0xa9,0x01,0x00,0x9d,0x48,0x00,0x80,0x15,
      0xa5,0x10,0x48,0xaa,0xbd,0x4a,0x00,0xfa,0xdd,0x4c,0x00,0xf0,0x08,0xa9,0x01,0x00,0xa6,0x0e,0x9d,0x00,0x00,0xad,0x4c,0x99,
      0xf0,0x3d,0xa5,0x10,0xaa,0xbc,0x44,0x00,0xc0,0xe7,0x03,0xd0,0x09,0xaa,0xa9,0x01,0x00,0x9d,0x46,0x00,0x80,0x0c,0xc0,0x01,
      0x00,0xd0,0x07,0xaa,0xa9,0xe7,0x03,0x9d,0x46,0x00,0xa5,0x10,0xaa,0xbc,0x4a,0x00,0xc0,0xe7,0x03,0xd0,0x06,0xaa,0x9e,0x4c,
      0x00,0x80,0x0c,0xc0,0x00,0x00,0xd0,0x07,0xaa,0xa9,0xe7,0x03,0x9d,0x4c,0x00,0x2b,0x6b,
    };
    meter_bytes(assets,0xc20f3b,bytes0);
    constexpr std::array<std::uint8_t,66> bytes1{
      0xc2,0x31,0x0b,0x7b,0x69,0xf2,0xff,0x5b,0xad,0x49,0x99,0x29,0xff,0x00,0xf0,0x1c,0xe2,0x10,0xa0,0x01,0xad,0x1f,0x99,0x85,
      0x06,0xad,0x21,0x99,0x85,0x08,0x22,0x44,0x92,0xc0,0xa5,0x06,0x85,0x14,0xa5,0x08,0x85,0x16,0x80,0x12,0xad,0x1f,0x99,0x85,
      0x06,0xad,0x21,0x99,0x85,0x08,0xa5,0x06,0x85,0x14,0xa5,0x08,0x85,0x16,0xc2,0x10,0x2b,0x60,
    };
    meter_bytes(assets,0xc20de9,bytes1);
    constexpr std::array<std::uint8_t,57> bytes2{
      0xeb,0xf0,0x26,0xe2,0x20,0xeb,0x48,0x98,0xc2,0x20,0x8f,0x02,0x42,0x00,0xea,0xea,0xaf,0x16,0x42,0x00,0xa8,0xe2,0x20,0x68,
      0x8f,0x03,0x42,0x00,0xc2,0x20,0x98,0xeb,0x29,0x00,0xff,0x18,0x6f,0x16,0x42,0x00,0x6b,0xe2,0x20,0x98,0xc2,0x20,0x8f,0x02,
      0x42,0x00,0xea,0xea,0xaf,0x16,0x42,0x00,0x6b,
    };
    meter_bytes(assets,0xc08fdb,bytes2);
    constexpr std::array<std::uint8_t,23> bytes3{
      0xa5,0x08,0x10,0x06,0x30,0x0d,0x46,0x08,0x66,0x06,0x88,0x10,0xf9,0x6b,0x38,0x66,0x08,0x66,0x06,0x88,0x10,0xf8,0x6b,
    };
    meter_bytes(assets,0xc09244,bytes3);
  }
}
SourceMeterRollerContext meter_context(unsigned flags=4) {return {true,true,true,0xc2,0xc1,0x7e,std::uint8_t(flags),0x1e00,0x1ffc,0x1234,0x4567,0x89ab};}
struct MeterOriginal : ScreenOriginal {
  unsigned instruction_entry=0xffffffff;
  explicit MeterOriginal(const GameAssets& assets,bool speed):ScreenOriginal(assets,speed) {meter_authority(assets);}
  unsigned caller()const{return meter_layout(bus.game_version()).caller;}
  unsigned target()const{return meter_layout(bus.game_version()).roller;}
  unsigned return_pc()const{return caller()+4;}
  void reset_seed() {
    // Execute only this original host's genuine reset seed producer. This
    // producer's clocks are excluded from the fresh measured original bus.
    SnesBus prehistory(bus.cartridge_image(),bus.game_version());MainCpu65816 producer(prehistory);
    producer.set_runtime(MainCpuRuntime::Legacy);producer.emulation_mode=false;producer.status_register=4;
    producer.data_bank=0x7e;producer.program_counter=bus.game_version()==GameVersion::JP?0xc08123:0xc08121;
    for(unsigned i=0;i<4;++i)producer.step_instruction();
    require(producer.program_counter==(bus.game_version()==GameVersion::JP?0xc0812f:0xc0812d),
      "Original actual reset seed producer lost its four source atoms");
    std::copy_n(prehistory.work_ram.begin()+0x24,4,bus.work_ram.begin()+0x24);
  }
  void excluded_window_random() {
    SnesBus prehistory(bus.cartridge_image(),bus.game_version());MainCpu65816 producer(prehistory);
    producer.set_runtime(MainCpuRuntime::Legacy);producer.emulation_mode=false;producer.status_register=4;
    producer.data_bank=0x7e;producer.stack_pointer=0x1fff;producer.direct_page=0x1e00;
    std::copy_n(bus.work_ram.begin()+0x24,4,prehistory.work_ram.begin()+0x24);
    const unsigned site=bus.game_version()==GameVersion::JP?0xc13504:0xc12dd7;
    producer.program_counter=site;bool returned{};
    for(unsigned count=0;count<100;++count){producer.step_instruction();
  if(producer.program_counter==site+4){returned=true;break;}}
    require(returned,"Original excluded WindowTick RAND producer did not return");
    std::copy_n(prehistory.work_ram.begin()+0x24,4,bus.work_ram.begin()+0x24);
  }
  void reset_meter_predecessor() {
    const auto l=meter_layout(bus.game_version());SnesBus prehistory(bus.cartridge_image(),bus.game_version());
    prehistory.work_ram=bus.work_ram;MainCpu65816 producer(prehistory);producer.set_runtime(MainCpuRuntime::Legacy);
    producer.emulation_mode=false;producer.status_register=4;producer.data_bank=0x7e;
    producer.direct_page=0x1e00;producer.stack_pointer=0x1fff;producer.program_counter=l.reset_call;bool returned{};
    for(unsigned count=0;count<2000;++count){producer.step_instruction();
  if(producer.program_counter==l.reset_call+4){returned=true;break;}}
    require(returned,"Original genuine RESET_HPPP_ROLLING prehistory did not return");
    std::copy_n(prehistory.work_ram.begin()+l.rows,6*l.stride,bus.work_ram.begin()+l.rows);
    bus.work_ram[l.fastest]=prehistory.work_ram[l.fastest];
  }
  void prior_math(unsigned a,unsigned b) {
    // Independent actual MMIO producer: completed division retains a
    // distinctive quotient, then real operand writes and NOPs finish multiply.
    bus.write_byte(0x4204,0x37);bus.write_byte(0x4205,0x91);bus.write_byte(0x4206,0x2b);
    cpu.program_counter=0xc0ff00;for(unsigned i=0;i<8;++i)cpu.execute_instruction<0xea>(0,1);
    bus.write_byte(0x4202,std::uint8_t(a));bus.write_byte(0x4203,std::uint8_t(b));
    for(unsigned i=0;i<8;++i)cpu.execute_instruction<0xea>(0,1);
    require(!bus.math_pending(),"Original declared prior multiply remained incomplete");
  }
  void step_meter(){instruction_entry=cpu.program_counter;step();}
  void drain_meter(){
    while(bus.take_nmi()) {
      const unsigned pc=cpu.program_counter,stack=cpu.stack_pointer;interrupted_sites.insert(pc);
      const auto image=bus.cartridge_image();
      require(image[0xffea]==0x47&&image[0xffeb]==0x81&&image[0x8147]==0x5c&&image[0x8148]==0x70&&
        image[0x8149]==0x81&&image[0x814a]==0xc0,"Original meter native NMI vector differs");
      instruction_entry=0xffffffff;cpu.service_interrupt(true);++interrupts;bool done{};
      for(unsigned i=0;i<2000;++i){if(cpu.program_counter==pc&&cpu.stack_pointer==stack){done=true;break;}step_meter();}
      require(done,"Original meter NMI lost its real interrupted context");
    }
  }
  void instruction_meter(){drain_meter();require(cpu.program_counter!=return_pc(),"Original meter ran into the subsequent WindowTick gate");
    step_meter();++foreground;drain_meter();}
};
struct PhysicalOwners {
  std::array<std::array<std::uint8_t,544>,2> objects{};
  std::array<std::uint8_t,544> displayed_objects{};
  std::array<std::array<battle::PsiScroll,4>,2> scroll{};
  std::array<battle::PsiScroll,4> staged{},hardware{};
  std::array<std::uint8_t,1036> working{};
  std::array<std::uint16_t,5> builder{};
  std::array<std::uint8_t,512> staged_palette{},displayed_palette{};
  std::array<std::array<std::uint8_t,7>,2> dma{};
  std::array<std::uint8_t,65536> vram{};
  std::array<std::uint8_t,256> ring{};
  std::vector<battle::PsiTransfer> pending_transfers;
  std::uint16_t ring_credit{};
  std::uint8_t ring_producer{},ring_consumer{};
  InputState input;
  SourceMathState math;
  std::uint16_t primary{},secondary{},heap{},base{},request{},next{},flag{};
  std::uint8_t pending{},counter{},brightness{},palette{};
  std::uint32_t timer{};
  std::uint64_t clocks{},frames{},interrupts{},polls{},phase{},publications{},scene_frames{};
  bool operator==(const PhysicalOwners&)const=default;
};
PhysicalOwners physical_owners(MeterOriginal& o) {
  PhysicalOwners r;const bool jp=o.bus.game_version()==GameVersion::JP;
  for(unsigned b=0;b<2;++b){std::copy_n(o.bus.work_ram.begin()+(b?0x800:0x500),544,r.objects[b].begin());
    for(unsigned i=0;i<4;++i)r.scroll[b][i]={std::uint16_t(o.word(0x41+b*2+i*8)),std::uint16_t(o.word(0x45+b*2+i*8))};}
  std::copy_n(o.bus.work_ram.begin()+(jp?0x2800:0x2400),1036,r.working.begin());
  r.builder={std::uint16_t(o.word(3)),std::uint16_t(o.word(5)),std::uint16_t(o.word(7)),o.bus.work_ram[10],o.bus.work_ram[9]};
  r.displayed_objects=o.bus.object_attributes;const auto view=o.bus.scene_read_view();
  for(unsigned i=0;i<4;++i){r.staged[i]={std::uint16_t(o.word(0x31+i*4)),std::uint16_t(o.word(0x33+i*4))};
    r.hardware[i]={view.background_scroll_x[i],view.background_scroll_y[i]};}
  std::copy_n(o.bus.work_ram.begin()+0x200,512,r.staged_palette.begin());r.displayed_palette=o.bus.palette_ram;
  for(unsigned channel=0;channel<2;++channel)for(unsigned i=0;i<7;++i)r.dma[channel][i]=o.bus.read_byte(0x4300+channel*16+i);
  r.vram=o.bus.video_ram;
  std::copy_n(o.bus.work_ram.begin()+0x400,256,r.ring.begin());
  r.ring_credit=std::uint16_t(o.word(0x99));r.ring_producer=o.bus.work_ram[0];r.ring_consumer=o.bus.work_ram[1];
  // Admitted original compositions have an empty actual raw ring. Native-only
  // rejection snapshots additionally retain every semantic transfer field.
  for(unsigned i=0;i<2;++i){r.input.state[i]=std::uint16_t(o.word(0x65+i*2));r.input.held[i]=std::uint16_t(o.word(0x69+i*2));
    r.input.pressed[i]=std::uint16_t(o.word(0x6d+i*2));r.input.repeat_timer[i]=std::uint16_t(o.word(0x71+i*2));}
  r.input.player_activity=std::uint16_t(o.word(jp?0xa2a:0xa34));r.math=RuntimeStateAudit::meter_math(o.bus);
  r.primary=std::uint16_t(o.word(0x24));r.secondary=std::uint16_t(o.word(0x26));r.heap=std::uint16_t(o.word(0xa1));r.base=std::uint16_t(o.word(0xa3));
  r.request=std::uint16_t(o.word(0x2c));r.next=std::uint16_t(o.word(0x2e));r.flag=std::uint16_t(o.word(jp?0xa031:0x9e2b));
  r.pending=o.bus.work_ram[0x2b];r.counter=o.bus.work_ram[2];r.brightness=o.bus.work_ram[0xd];r.palette=o.bus.work_ram[0x30];
  r.timer=o.word(0xa7)|(o.word(0xa9)<<16);r.clocks=o.bus.master_clocks();r.frames=o.bus.completed_frames;r.interrupts=o.interrupts;
  r.phase=AudioFrameClock::physical_phase(o.bus.scanline_index(),o.bus.scanline_clock(),o.bus.completed_frames);
  r.publications=r.scene_frames=o.interrupts;return r;
}
PhysicalOwners physical_owners(const session::World& w,const RandomState* random,
    const SourceWorkClock* work,const AudioFrameClock* physical,const WorldRuntime& runtime) {
  PhysicalOwners r;
  for(unsigned b=0;b<2;++b){r.objects[b]=w.actor_object_display_state.buffers[b].bytes;r.scroll[b]=w.frame_display.source_buffer(b+1).scroll;}
  if(w.frame_display.screen().raw_objects)r.displayed_objects=w.frame_display.screen().raw_objects->bytes;
  r.working=w.actor_object_display_state.working;const auto&builder=w.actor_object_display_state.builder;
  r.builder={builder.address,builder.end_address,builder.high_address,builder.high_buffer,w.actor_object_display_state.scratch.high_pointer_bank};
  r.staged=w.display.staged_scroll;r.hardware=w.display.source_hardware_scroll();r.vram=w.display.vram();r.input=w.input;
  std::copy(w.display.descriptor_bytes().begin(),w.display.descriptor_bytes().end(),r.ring.begin());
  r.ring_credit=w.display.pending_bytes();r.ring_producer=w.display.producer_index();r.ring_consumer=w.display.consumer_index();
  r.pending_transfers.assign(w.display.pending().begin(),w.display.pending().end());
  for(unsigned i=0;i<256;++i){const auto staged=w.palette.staged_color(i),displayed=w.palette.displayed[i/16][i%16];
    r.staged_palette[i*2]=std::uint8_t(staged);r.staged_palette[i*2+1]=std::uint8_t(staged>>8);
    r.displayed_palette[i*2]=std::uint8_t(displayed);r.displayed_palette[i*2+1]=std::uint8_t(displayed>>8);}
  for(unsigned channel=0;channel<2;++channel)std::copy_n(w.peripherals.dma(channel).begin(),7,r.dma[channel].begin());
  r.math=w.peripherals.source_math_state();
  if(random){r.primary=random->primary_word;r.secondary=random->secondary_word;}
  r.heap=w.display.transient_memory().current_address();r.base=w.display.transient_memory().base_address();r.flag=w.display.dma_transfer_flag();
  r.request=w.frame_display.display_request();r.next=w.frame_display.next_buffer_id();r.pending=w.clock.new_frame_started;r.counter=w.clock.frame_counter;
  r.brightness=w.fade.state().brightness;r.palette=w.palette.upload_mode;r.timer=w.session.elapsed_timer;
  r.clocks=work?work->master_clocks():0;r.frames=physical?physical->physical_frames():0;r.phase=physical?physical->phase():0;
  r.interrupts=work?work->completed_source_interrupts():0;r.polls=w.clock.input_polls;
  r.publications=w.clock.publications;r.scene_frames=runtime.scene().completed_frames();return r;
}
// Source structs.asm order, independently projected from each host's own
// typed/raw records. Reserved bytes remain declared immutable entry facts.
std::vector<std::uint8_t> character_bytes(const saves::Character& stored,GameVersion version) {
  std::vector<std::uint8_t> bytes;const auto&v=stored.values;
  const auto value=[&]<class T>(T item){for(unsigned i=0;i<sizeof(T);++i)bytes.push_back(std::uint8_t(item>>(i*8)));};
  const auto list=[&](const auto&items){for(auto item:items)value(item);};
  for(unsigned i=0;i<(version==GameVersion::JP?4u:5u);++i)value(stored.name[i]);
  value(v.level);value(v.experience);value(v.maximum_hp);value(v.maximum_pp);list(v.afflictions);
  value(v.offense);value(v.defense);value(v.speed);value(v.guts);value(v.luck);value(v.vitality);value(v.iq);
  value(v.base_offense);value(v.base_defense);value(v.base_speed);value(v.base_guts);value(v.base_luck);value(v.base_vitality);value(v.base_iq);
  list(v.items);list(v.equipment);list(stored.reserved_53_59);value(stored.position_index);value(stored.reserved_63);value(stored.reserved_65);
  value(v.hp_fraction);value(v.current_hp);value(v.target_hp);value(v.pp_fraction);value(v.current_pp);value(v.target_pp);value(v.hp_pp_window_options);
  value(v.miss_rate);value(v.fire_resistance);value(v.freeze_resistance);value(v.flash_resistance);value(v.paralysis_resistance);value(v.hypnosis_brainshock_resistance);
  value(v.boosted_speed);value(v.boosted_guts);value(v.boosted_vitality);value(v.boosted_iq);value(v.boosted_luck);
  list(stored.reserved_92_93);value(v.battle_selection);
  require(bytes.size()==meter_layout(version).stride,"Independent full character projection lost regional source extent");return bytes;
}
std::vector<std::uint8_t> party_bytes(const saves::PersistedState& state) {
  std::vector<std::uint8_t> result{0x69,0xa5};
  for(const auto& character:state.characters){const auto bytes=character_bytes(character,state.version);result.insert(result.end(),bytes.begin(),bytes.end());}
  result.push_back(0x5a);result.push_back(0x96);return result;
}
struct MeterCase {
  bool fast=true,enabled=true,reset{},homogeneous=true;
  unsigned budget=1,flags=4,line=40,horizontal=100,slot{},member=1,disabled{},half{},fastest{},flipout{};
  std::uint32_t speed=0x8000;
  std::uint16_t hp_current=1,hp_target=999,hp_fraction=1,pp_current=999,pp_target=1,pp_fraction=1;
};
saves::PersistedState meter_seed(GameVersion version,const MeterCase& c) {
  saves::PersistedState seed;seed.version=version;
  seed.game.party_order={1,2,3,4,5,6};seed.game.party_order[c.slot]=std::uint8_t(c.member);
  seed.game.controlled_order={0,1,2,3,4,5};seed.game.display_order={4,2,1,3,5,6};seed.game.controlled_count=4;seed.game.party_count=6;
  seed.game.money_carried=0x123456;seed.game.bank_balance=0x654321;
  for(unsigned index=0;index<6;++index){auto&s=seed.characters[index];auto&v=s.values;
    for(unsigned i=0;i<(version==GameVersion::JP?4u:5u);++i)s.name[i]=std::uint8_t(0x41+index*7+i);
    v.level=std::uint8_t(17+index);v.experience=0x17345678+index;v.maximum_hp=std::uint16_t(777+index);v.maximum_pp=std::uint16_t(333+index);
    for(unsigned i=0;i<7;++i)v.afflictions[i]=std::uint8_t(0x80+index*7+i);
    v.afflictions[0]=0;v.offense=11+index;v.defense=12+index;v.speed=13+index;v.guts=14+index;v.luck=15+index;v.vitality=16+index;v.iq=17+index;
    v.base_offense=21+index;v.base_defense=22+index;v.base_speed=23+index;v.base_guts=24+index;v.base_luck=25+index;v.base_vitality=26+index;v.base_iq=27+index;
    for(unsigned i=0;i<14;++i)v.items[i]=std::uint8_t(0x31+index*3+i);
    for(unsigned i=0;i<4;++i)v.equipment[i]=std::uint8_t(i+1);
    for(unsigned i=0;i<4;++i)s.reserved_53_59[i]=std::uint16_t(0xc500+index*17+i);
    s.position_index=0xab00+index;s.reserved_63=0x7100+index;s.reserved_65=0x9100+index;
    const bool chosen=c.homogeneous&&index<4;const bool selected=c.member==index+1;
    v.hp_fraction=chosen||selected?c.hp_fraction:std::uint16_t(0x8300+index);v.current_hp=chosen||selected?c.hp_current:std::uint16_t(711+index);
    v.target_hp=chosen||selected?c.hp_target:std::uint16_t(501+index);v.pp_fraction=chosen||selected?c.pp_fraction:std::uint16_t(0x5300+index);
    v.current_pp=chosen||selected?c.pp_current:std::uint16_t(411+index);v.target_pp=chosen||selected?c.pp_target:std::uint16_t(201+index);
    v.hp_pp_window_options=0x8900+index;v.miss_rate=31+index;v.fire_resistance=32+index;v.freeze_resistance=33+index;v.flash_resistance=34+index;
    v.paralysis_resistance=35+index;v.hypnosis_brainshock_resistance=36+index;v.boosted_speed=37+index;v.boosted_guts=38+index;v.boosted_vitality=39+index;v.boosted_iq=40+index;v.boosted_luck=41+index;
    s.reserved_92_93={std::uint8_t(0xd0+index),std::uint8_t(0xe0+index)};v.battle_selection=0xf0+index;
    s.miss_rate=v.miss_rate;s.boosted_speed=v.boosted_speed;s.boosted_guts=v.boosted_guts;s.boosted_vitality=v.boosted_vitality;s.boosted_iq=v.boosted_iq;s.boosted_luck=v.boosted_luck;
  }
  return seed;
}
struct MeterNative {
  std::unique_ptr<party::State> party;
  NativeAudio audio;dialogue::State text;session::World world;
  dialogue::TextOutput output;dialogue::WindowHost windows;
  std::shared_ptr<dialogue::WindowGraphics> window_graphics;
  std::unique_ptr<party::MeterWindows> meters;
  std::unique_ptr<WorldRuntime> runtime;
  std::unique_ptr<AudioFrameClock> physical;
  std::unique_ptr<SourceWorkClock> work;
  std::unique_ptr<SourceNmiWork> nmi;
  saves::PersistedState seed;
  MeterNative(const GameAssets&assets,const session::Content&content,bool fast,bool interrupt_owner=true,bool physical_owner=true)
    :party(std::make_unique<party::State>(assets.version)),audio(assets.image,assets.version),world(content,audio,256),
      output(content.fonts,text),windows(content.windows,text,output),
      window_graphics(std::make_shared<dialogue::WindowGraphics>(content.window_art,output)) {
    audio.initialize();world.clock.interrupt_mask=0;world.bind_actor_graphics(assets.image);
    world.display.transient_memory().configure(assets.version);world.clock.action_scripts_disabled=1;world.clock.disabled_transitions=1;
    world.runtime->require_idle();world.command_menu.reset();world.interaction_calls.reset();world.startup.reset();world.relocation.reset();world.map_load.reset();world.runtime.reset();
    // Transfer the actual authoritative event allocation after its idle old
    // Runtime borrowers have retired. Keep the existing actor span unchanged;
    // text precedes World in declaration order, so this owner outlives actors.
    const auto *flag_data=world.text.event_flags.data();const auto flag_bytes=world.text.event_flags;
    require(flag_data&&flag_bytes.size()==128&&world.actors.scene().event_flags.data()==flag_data&&
      world.actors.scene().event_flags.size()==128,"Original native World lost its actual event owner before transfer");
    text.event_flags=std::move(world.text.event_flags);
    require(text.event_flags.data()==flag_data&&text.event_flags.size()==128&&text.event_flags==flag_bytes&&
      world.actors.scene().event_flags.data()==flag_data&&world.actors.scene().event_flags.size()==128,
      "Fresh dialogue did not retain actual authoritative event storage/bytes and the unchanged actor span");
    windows.set_graphics(window_graphics);windows.animations().configure(content.text_animations);
    meters=std::make_unique<party::MeterWindows>(windows,*party,content.meters);
    runtime=std::make_unique<WorldRuntime>(windows,*party,world.random,*meters,world.clock,world.input,world.actors,
      world.activation,world.enemies,content.collision,world.area,world.area_colors,content.map,content.palettes,content.animations,
      world.spawn,NpcStripAdmission::Admitted,ActorRetentionReader{},SceneView{256});
    runtime->bind_presentation(world.presentation);runtime->bind_actor_graphics(*world.actor_graphics);runtime->refresh_world_capture();runtime->reset_interrupt_callback();
    for(unsigned b=0;b<2;++b)for(unsigned i=0;i<544;++i)world.actor_object_display_state.buffers[b].bytes[i]=std::uint8_t(i*71+b*113+37);
    for(unsigned round=0;round<2;++round){const unsigned b=1+(round%2);
      for(unsigned i=0;i<4;++i)world.display.staged_scroll[i]={std::uint16_t(0x4100+b*0x211+i*2*0x127),std::uint16_t(0x4100+b*0x211+(i*2+1)*0x127)};
      world.frame_display.update_world_screen();}
    physical=std::make_unique<AudioFrameClock>(world.clock,[this]{work->request_nmi();},[]{},0,0,false);
    if(physical_owner)physical->bind_peripherals(world.peripherals);else world.peripherals.bind_clock(*physical);
    work=std::make_unique<SourceWorkClock>(*physical,audio,world.clock,*runtime,world.actor_object_display_state,*world.actor_object_display,world.frame_display,fast);audio.bind_clock(*work);
    nmi=std::make_unique<SourceNmiWork>(*runtime,audio,world.clock,world.session,world.frame_display,world.palette,world.display,world.scratch,world.fade,world.presentation,world.peripherals,SourceInterruptContext{true,true,true});
    if(interrupt_owner)work->bind_interrupt_work(*nmi);
    seed=meter_seed(assets.version,MeterCase{});saves::restore_party(seed,*party);
  }
  std::unique_ptr<WorldRuntime::Operation> suspension(SourceMeterRollerContext ctx=meter_context()) {
    auto operation=runtime->begin_source_meter_window_tick(*work,ctx);
    for(unsigned i=0;i<100;++i)if(operation->advance(1)==dialogue::Progress::Suspended){
      require(operation->service()==SceneService::SourceMeterRoller,"Actual WindowTick did not suspend before its semantic roller");return operation;}
    throw std::runtime_error(context+": Actual WindowTick did not reach its source roller");
  }
};
struct MeterOwners {
  PhysicalOwners physical;
  std::vector<std::uint8_t> rows;
  std::array<std::uint8_t,6> order{};
  std::array<std::uint8_t,256> page{};
  std::array<std::uint8_t,3> policy{};
  std::uint16_t flipout{};std::uint32_t speed{};
  bool operator==(const MeterOwners&)const=default;
};
MeterOwners meter_owners(MeterOriginal&o) {
  MeterOwners r;r.physical=physical_owners(o);const auto l=meter_layout(o.bus.game_version());
  r.rows.assign(o.bus.work_ram.begin()+l.rows-2,o.bus.work_ram.begin()+l.rows+6*l.stride+2);
  std::copy_n(o.bus.work_ram.begin()+l.order,6,r.order.begin());std::copy_n(o.bus.work_ram.begin()+0x1d00,256,r.page.begin());
  r.policy={o.bus.work_ram[l.disabled],o.bus.work_ram[l.half],o.bus.work_ram[l.fastest]};r.flipout=std::uint16_t(o.word(l.flipout));
  r.speed=o.word(l.hp_speed)|(o.word(l.hp_speed+2)<<16);return r;
}
MeterOwners meter_owners(const MeterNative&n,const SourceMeterRollerEntry*entry) {
  MeterOwners r;r.physical=physical_owners(n.world,&n.world.random,n.work.get(),n.physical.get(),*n.runtime);
  if(n.party){r.rows=party_bytes(saves::capture_party(*n.party,n.seed));r.order=n.party->party_order;}
  if(entry)std::copy(entry->page().begin(),entry->page().end(),r.page.begin());
  r.policy={n.windows.prompt_state().rolling_disabled,n.windows.prompt_state().half_meter_speed,n.world.clock.fastest_hp_increase};
  r.flipout=n.world.clock.flipout;r.speed=n.world.clock.hp_speed;return r;
}
void same_meter(MeterOriginal&o,const MeterNative&n,const SourceMeterRollerEntry&entry,const char*where) {
  const auto expected=meter_owners(o),actual=meter_owners(n,&entry);
  if(actual!=expected){std::ostringstream out;out<<where<<" entry="<<std::hex<<o.instruction_entry<<" PC="<<o.cpu.program_counter<<std::dec
    <<" atom="<<o.foreground<<" clocks="<<actual.physical.clocks<<'/'<<expected.physical.clocks
    <<" rows="<<(actual.rows==expected.rows)<<" order="<<(actual.order==expected.order)<<" page="<<(actual.page==expected.page)
    <<" controls="<<(actual.policy==expected.policy&&actual.speed==expected.speed&&actual.flipout==expected.flipout)
    <<" physical="<<(actual.physical==expected.physical)<<" math="<<(actual.physical.math==expected.physical.math)
    <<" RNG="<<actual.physical.primary<<','<<actual.physical.secondary<<'/'<<expected.physical.primary<<','<<expected.physical.secondary;
    require(false,out.str());}++checks;
}
std::array<std::uint8_t,256> declared_meter_page() {std::array<std::uint8_t,256> page{};for(unsigned i=0;i<256;++i)page[i]=std::uint8_t(i*53+0xa7);return page;}
void prepare_meter(MeterOriginal&o,MeterNative&n,SourceMeterRollerEntry&entry,const MeterCase&c) {
  auto&w=n.world;const auto l=meter_layout(o.bus.game_version());const auto original_seed=meter_seed(o.bus.game_version(),c);
  const auto raw=party_bytes(original_seed);std::copy(raw.begin(),raw.end(),o.bus.work_ram.begin()+l.rows-2);
  std::copy(original_seed.game.party_order.begin(),original_seed.game.party_order.end(),o.bus.work_ram.begin()+l.order);o.bus.work_ram[l.controlled]=original_seed.game.controlled_count;
  n.seed=meter_seed(o.bus.game_version(),c);saves::restore_party(n.seed,*n.party);
  n.windows.prompt_state().rolling_disabled=std::uint8_t(c.disabled);o.bus.work_ram[l.disabled]=std::uint8_t(c.disabled);
  n.windows.prompt_state().half_meter_speed=std::uint8_t(c.half);o.bus.work_ram[l.half]=std::uint8_t(c.half);
  w.clock.fastest_hp_increase=std::uint8_t(c.fastest);o.bus.work_ram[l.fastest]=std::uint8_t(c.fastest);
  w.clock.flipout=std::uint16_t(c.flipout);o.put(l.flipout,c.flipout);w.clock.hp_speed=c.speed;o.put(l.hp_speed,c.speed);o.put(l.hp_speed+2,c.speed>>16);
  if(c.reset){o.reset_meter_predecessor();battle::reset_rolling(*n.party,w.clock);}
  const auto page=declared_meter_page();std::copy(page.begin(),page.end(),o.bus.work_ram.begin()+0x1d00);entry.set_page(page);
  o.reset_seed();o.excluded_window_random();o.prior_math(0x97,0xc3);w.peripherals.divide_word(0x9137,0x2b);w.peripherals.multiply_byte(0x97,0xc3);
  for(unsigned i=0;i<16;++i)n.work->retire_source_work({2,1,0,0});
  w.fade.force_blank(true);const auto fade=w.fade.state();o.bus.work_ram[0xd]=fade.brightness;o.bus.work_ram[0x28]=fade.step;o.bus.work_ram[0x29]=fade.delay;o.bus.work_ram[0x2a]=fade.remaining;
  w.clock.frame_counter=std::uint8_t(0xfc|c.slot);o.bus.work_ram[2]=w.clock.frame_counter;w.clock.new_frame_started=0x7f;o.bus.work_ram[0x2b]=0x7f;
  w.session.elapsed_timer=0x1234ffff;o.put(0xa7,0xffff);o.put(0xa9,0x1234);
  w.input.state={0x3000,0x8400};w.input.held={0x1234,0x4321};w.input.pressed={0xabcd,0xefab};w.input.repeat_timer={9,7};w.input.player_activity=0xffff;
  for(unsigned i=0;i<2;++i){o.put(0x65+i*2,w.input.state[i]);o.put(0x69+i*2,w.input.held[i]);o.put(0x6d+i*2,w.input.pressed[i]);o.put(0x71+i*2,w.input.repeat_timer[i]);}
  o.put(o.bus.game_version()==GameVersion::JP?0xa2a:0xa34,w.input.player_activity);o.put(0x20,0x851b);
  o.put(0xa3,w.display.transient_memory().base_address());o.put(0xa1,w.display.transient_memory().current_address());w.display.set_source_dma_transfer_flag(0xbeef);o.put(o.bus.game_version()==GameVersion::JP?0xa031:0x9e2b,0xbeef);
  w.palette.upload_mode=0;o.bus.work_ram[0x30]=0;
  for(unsigned i=0;i<256;++i){const auto staged=std::uint16_t(0x8000|((i*113+57)&0x7fff)),displayed=std::uint16_t((i*53+71)&0x7fff);
    w.palette.staged_color(i)=staged;o.put(0x200+i*2,staged);w.palette.displayed[i/16][i%16]=displayed;
    o.bus.palette_ram[i*2]=std::uint8_t(displayed);o.bus.palette_ram[i*2+1]=std::uint8_t(displayed>>8);}
  o.bus.work_ram[o.bus.game_version()==GameVersion::JP?0xc9:0xcb]=w.audio.sound_queue_start();o.bus.work_ram[o.bus.game_version()==GameVersion::JP?0xc8:0xca]=w.audio.sound_queue_end();
  const auto target=std::uint64_t(262*1364)+c.line*1364+c.horizontal;o.cpu.program_counter=0xc0ff00;
  while(o.bus.master_clocks()<target){o.cpu.execute_instruction<0xea>(0,1);n.work->retire_source_work({2,1,0,0});}
  require(o.bus.master_clocks()==n.work->master_clocks(),"Independent meter warmup clock epochs differ");
  n.physical->nmi_enabled(c.enabled);w.clock.interrupt_mask=std::uint8_t(c.enabled?0x80:0);w.clock.retained_hardware_interrupt_mask=w.clock.interrupt_mask;
  o.bus.write_byte(0x4200,w.clock.interrupt_mask);o.bus.work_ram[0x1e]=w.clock.interrupt_mask;
  o.cpu.program_counter=l.caller;o.cpu.status_register=std::uint8_t(c.flags);o.cpu.direct_page=0x1e00;o.cpu.data_bank=0x7e;o.cpu.stack_pointer=0x1fff;
  o.cpu.accumulator=0x1234;o.cpu.x_index=0x4567;o.cpu.y_index=0x89ab;
}
void meter_case(const GameAssets&assets,const session::Content&content,const MeterCase&c,std::set<unsigned>&sites) {
  context=assets.title+" ROLLER fast="+std::to_string(c.fast)+" budget="+std::to_string(c.budget)+" status="+std::to_string(c.flags)+
    " slot="+std::to_string(c.slot)+" member="+std::to_string(c.member)+" speed="+std::to_string(c.speed)+" phase="+std::to_string(c.line)+":"+std::to_string(c.horizontal);
  MeterOriginal o(assets,c.fast);MeterNative n(assets,content,c.fast);SourceMeterRollerEntry entry;prepare_meter(o,n,entry,c);
  const auto before_prefix=meter_owners(n,&entry);auto expected_prefix=before_prefix;auto expected_rng=n.world.random;next_random(expected_rng);
  expected_prefix.physical.primary=expected_rng.primary_word;expected_prefix.physical.secondary=expected_rng.secondary_word;
  auto operation=n.suspension(meter_context(c.flags));require(meter_owners(n,&entry)==expected_prefix,"Excluded semantic prefix advanced source clocks/math/input or rolled party before its actual suspension");
  o.audit();same_meter(o,n,entry,"independently prepared actual meter entry");const auto initial=meter_owners(n,&entry);
  const auto audio=n.audio.master_clocks(),refresh=n.work->refresh_pauses();o.instruction_meter();n.work->retire_source_work({8,4,3,0});same_meter(o,n,entry,"actual separately charged C1-to-C2 far JSL");
  auto leaf=operation->begin_source_meter_roller(*n.work,meter_context(c.flags),SourceMeterRollerCall(entry));const auto called=meter_owners(n,&entry);
  require(!leaf->advance(0)&&!leaf->retired_instructions()&&meter_owners(n,&entry)==called,"Meter factory/zero budget changed actual party/local/physical owners");
  if(c.budget==1){while(!leaf->complete()){o.instruction_meter();leaf->advance(1);same_meter(o,n,entry,"every actual meter/helper retirement");
    require(leaf->registers()==SourceMeterRollerRegisters{std::uint16_t(o.cpu.accumulator),std::uint16_t(o.cpu.x_index),std::uint16_t(o.cpu.y_index),o.cpu.direct_page,o.cpu.stack_pointer,o.cpu.status_register},
      "Source meter A/X/Y/P/D/S differs at actual retirement");require(leaf->retired_instructions()+1==o.foreground,"Source roller lost or duplicated a main/nested literal atom");}}
  else{while(o.cpu.program_counter!=o.return_pc())o.instruction_meter();while(!leaf->advance(c.budget)){}same_meter(o,n,entry,"large-budget actual roller return");}
  const auto regs=SourceMeterRollerRegisters{std::uint16_t(o.cpu.accumulator),std::uint16_t(o.cpu.x_index),std::uint16_t(o.cpu.y_index),o.cpu.direct_page,o.cpu.stack_pointer,o.cpu.status_register};
  require(o.cpu.program_counter==o.return_pc()&&o.cpu.stack_pointer==0x1fff&&o.cpu.direct_page==0x1e00&&o.cpu.data_bank==0x7e&&!o.cpu.emulation_mode&&
    !(o.cpu.status_register&0x30)&&leaf->registers()==regs&&o.foreground==leaf->retired_instructions()+1,"Original roller lost its exact caller/stack/D/DB/width/register return");
  require(n.audio.master_clocks()-audio==n.work->master_clocks()-initial.physical.clocks&&n.work->master_clocks()-initial.physical.clocks==o.bus.master_clocks()-initial.physical.clocks&&
    n.work->refresh_pauses()-refresh==o.refreshes(),"Meter independent audio/physical elapsed or original refresh receipt differs");
  require(n.world.clock.input_polls==initial.physical.polls&&n.world.random==expected_rng&&n.world.peripherals.quotient()==initial.physical.math.quotient,"Meter polled input, consumed another RAND or changed retained quotient");
  const auto complete=meter_owners(n,&entry);operation->respond_source_meter_roller(*leaf);
  require(meter_owners(n,&entry)==complete&&!n.party->source_meter_active(),"Meter response replayed work or failed to release exact actual party lease");
  bool reused{};try{operation->respond_source_meter_roller(*leaf);}catch(const std::logic_error&){reused=true;}
  require(reused&&meter_owners(n,&entry)==complete,"Duplicate meter receipt changed state/time");sites.insert(o.interrupted_sites.begin(),o.interrupted_sites.end());
}
std::vector<std::uint8_t> party_other(const party::State*state) {
  std::vector<std::uint8_t> bytes;
  if(!state)return bytes;
  const auto append=[&](const auto&values){bytes.insert(bytes.end(),values.begin(),values.end());};
  append(state->controlled_order);append(state->display_order);
  for(auto field:{party::NameField::Mother2Player,party::NameField::EarthBoundPlayer,party::NameField::Pet,party::NameField::FavouriteFood,party::NameField::FavouriteThing})append(state->name_field(field));
  for(auto item:{state->party_count,state->controlled_count,state->party_status,state->auto_fight,state->party_psi})bytes.push_back(item);
  for(auto item:{state->money_carried,state->bank_balance,state->battle_money_deposited})for(unsigned i=0;i<4;++i)bytes.push_back(std::uint8_t(item>>(i*8)));
  return bytes;
}
struct MeterSnapshot {
  MeterOwners owners;std::vector<std::uint8_t> other_party;
  std::array<std::uint16_t,6> meter_state{};
  std::uint64_t audio{},pending_windows{};
  bool operator==(const MeterSnapshot&)const=default;
};
struct MeterFixture {
  MeterNative native;std::unique_ptr<SourceMeterRollerEntry> entry=std::make_unique<SourceMeterRollerEntry>();
  std::unique_ptr<WorldRuntime::Operation> operation;
  MeterFixture(const GameAssets&assets,const session::Content&content,bool suspend=true,bool interrupt_owner=true,bool physical_owner=true)
    :native(assets,content,true,interrupt_owner,physical_owner){entry->set_page(declared_meter_page());native.world.fade.force_blank(true);native.physical->nmi_enabled(true);
    native.world.clock.interrupt_mask=0x80;native.world.clock.retained_hardware_interrupt_mask=0x80;
  if(suspend)operation=native.suspension();}
  std::unique_ptr<SourceMeterRoller> begin(SourceMeterRollerContext ctx=meter_context()) {return operation->begin_source_meter_roller(*native.work,ctx,SourceMeterRollerCall(*entry));}
};
MeterSnapshot meter_snapshot(const MeterFixture&f) {
  MeterSnapshot r;r.owners=meter_owners(f.native,f.entry.get());r.other_party=party_other(f.native.party.get());
  if(f.native.meters){const auto&s=f.native.meters->state();r.meter_state={s.render,s.drawn_mask,s.selected_phase,s.area_dirty,s.upload,0};}
  r.audio=f.native.audio.master_clocks();r.pending_windows=f.native.windows.pending_publications();return r;
}
void meter_rejection(const GameAssets&assets,const session::Content&content,unsigned kind) {
  context=assets.title+" ROLLER pure helper/context kind="+std::to_string(kind);MeterFixture f(assets,content);auto ctx=meter_context();
  if(kind==0)ctx.native_mode=false;
  if(kind==1)ctx.low_wram_stack=false;
  if(kind==2)ctx.decimal_clear=false;
  if(kind==3)ctx.program_bank=0xc0;
  if(kind==4)ctx.caller_bank=0xc2;
  if(kind==5)ctx.data_bank=0x7f;
  if(kind==6)ctx.direct_page=0x1d12;
  if(kind==7)ctx.direct_page=0x1d00;
  if(kind==8)ctx.stack_pointer=0x1dfc;
  if(kind==9)ctx.stack_pointer=0xffff;
  if(kind==10)ctx.caller_status|=8;
  if(kind==11)ctx.caller_status|=0x10;
  if(kind==12){f.native.world.clock.interrupt_mask=0x90;f.native.world.clock.retained_hardware_interrupt_mask=0x90;}
  if(kind==13){for(unsigned i=0;i<257;++i)f.native.world.frame_display.request_retained_screen();require(f.native.world.frame_display.pending_display_id()==3,"Genuine pending producer did not reach invalid3");}
  if(kind==14)f.native.windows.queue_scene();
  if(kind==15)f.native.world.display.queue_frame(0);
  const auto before=meter_snapshot(f);const auto picture=f.native.runtime->scene().frame();bool rejected{};
  if(kind==16){auto call=SourceMeterRollerCall(*f.entry);f.entry.reset();const auto dead=meter_snapshot(f);
    try{auto leaf=f.operation->begin_source_meter_roller(*f.native.work,ctx,call);}catch(const std::logic_error&){rejected=true;}
    require(rejected&&meter_snapshot(f)==dead&&!f.native.party->source_meter_active()&&!f.native.runtime->failed(),"Expired entry call was borrowed or mutated before admission");return;}
  try{auto leaf=f.begin(ctx);}catch(const std::logic_error&){rejected=true;}
  require(rejected&&meter_snapshot(f)==before&&f.native.runtime->scene().frame()==picture&&!f.native.party->source_meter_active()&&!f.native.runtime->failed(),
    "Invalid roller context/path claimed a lease or changed actual party/page/physical owners before admission");
}
void meter_public_rejection(const GameAssets&assets,const session::Content&content,unsigned kind) {
  context=assets.title+" ROLLER pure public tick kind="+std::to_string(kind);
  if(kind==0){ScreenNative n(assets,content,true);auto&w=n.world;w.fade.force_blank(true);n.physical->nmi_enabled(true);w.clock.interrupt_mask=0x80;w.clock.retained_hardware_interrupt_mask=0x80;w.clock.disabled_transitions=1;
    w.runtime->restore_world_interrupt_callback();
    const auto snapshot=[&]{return std::tuple{physical_owners(w,&w.random,n.work.get(),n.physical.get(),*w.runtime),party_bytes(saves::capture_party(w.party,saves::PersistedState{w.party.version()})),party_other(&w.party),n.audio.master_clocks(),w.windows.pending_publications()};};
    const auto before=snapshot();const auto picture=w.runtime->scene().frame();bool rejected{};
    try{auto operation=w.runtime->begin_source_meter_window_tick(*n.work,meter_context());}catch(const std::logic_error&){rejected=true;}
    require(rejected&&snapshot()==before&&w.runtime->scene().frame()==picture&&!w.party.source_meter_active()&&!w.runtime->failed(),"Actual World callback gate began source meter work or changed owners/time");return;}
  MeterFixture f(assets,content,false,kind!=2,kind!=3);
  if(kind==1){f.native.world.clock.interrupt_mask=0x90;f.native.world.clock.retained_hardware_interrupt_mask=0x90;}
  if(kind==4)f.native.party.reset();
  if(kind==5)f.native.nmi.reset();
  if(kind==6)f.native.windows.queue_scene();
  if(kind==7)f.native.world.display.queue_frame(0);
  if(kind==8)f.native.meters.reset();
  const auto before=meter_snapshot(f);const auto picture=f.native.runtime->scene().frame();bool rejected{};
  const bool before_failed=f.native.runtime->failed();
  try{auto operation=f.native.suspension();}catch(const std::logic_error&){rejected=true;}
  require(rejected&&meter_snapshot(f)==before&&f.native.runtime->scene().frame()==picture&&f.native.runtime->failed()==before_failed,"Unsupported live party/meter/NMI/peripheral/IRQ owner entered excluded prefix or changed owners/time");
}
void meter_receipts(const GameAssets&assets,const session::Content&content) {
  context=assets.title+" ROLLER exact receipt/semantic/generic/page bypass";MeterFixture f(assets,content),foreign(assets,content);auto leaf=f.begin();
  const auto before=meter_snapshot(f),other=meter_snapshot(foreign);bool duplicate{},early{},actor{},frame{},publication{},semantic{},page{},cross{};
  try{f.begin();}catch(const std::logic_error&){duplicate=true;}try{f.operation->respond_source_meter_roller(*leaf);}catch(const std::logic_error&){early=true;}
  try{f.operation->respond_actor();}catch(const std::logic_error&){actor=true;}try{f.operation->complete_frame({0,0});}catch(const std::logic_error&){frame=true;}
  try{f.operation->complete_publication();}catch(const std::logic_error&){publication=true;}
  try{party::advance_meters(*f.native.party,0,{1,0,0,0,0});}catch(const std::logic_error&){semantic=true;}
  try{f.entry->set_page(declared_meter_page());}catch(const std::logic_error&){page=true;}
  try{foreign.operation->respond_source_meter_roller(*leaf);}catch(const std::logic_error&){cross=true;}
  require(duplicate&&early&&actor&&frame&&publication&&semantic&&page&&cross&&meter_snapshot(f)==before&&meter_snapshot(foreign)==other,
    "Active source roller/page lease permitted duplicate/foreign/generic/semantic work or mutated owners/time");
  while(!leaf->advance(1)){}const auto complete=meter_snapshot(f);f.operation->respond_source_meter_roller(*leaf);
  bool reused{},stale{};try{f.operation->respond_source_meter_roller(*leaf);}catch(const std::logic_error&){reused=true;}try{leaf->advance(1);}catch(const std::logic_error&){stale=true;}
  require(reused&&stale&&meter_snapshot(f)==complete&&!f.native.party->source_meter_active(),"Consumed roller receipt stayed live or changed actual owners/time");
  party::advance_meters(*f.native.party,0,{1,0,0,0,0});require(meter_snapshot(f)==complete,"Response retained the semantic meter lease or replayed work");
}
void meter_abandon(const GameAssets&assets,const session::Content&content,bool parent,bool completed) {
  context=assets.title+" ROLLER abandoned parent="+std::to_string(parent)+" complete="+std::to_string(completed);MeterFixture f(assets,content);auto leaf=f.begin();
  if(completed){while(!leaf->advance(1)){}}else leaf->advance(1);
  if(parent){f.operation.reset();const auto before=meter_snapshot(f);bool rejected{};try{leaf->advance(1);}catch(const std::logic_error&){rejected=true;}
    require(rejected&&meter_snapshot(f)==before&&f.native.runtime->failed(),"Abandoned actual parent left incomplete/completed roller live");}
  else{leaf.reset();const auto before=meter_snapshot(f);bool rejected{};try{f.operation->complete_frame({0,0});}catch(const std::logic_error&){rejected=true;}
    require(rejected&&meter_snapshot(f)==before&&f.native.runtime->failed(),"Abandoned literal roller permitted generic completion or another source owner");}
}
void meter_lost_owner(const GameAssets&assets,const session::Content&content,unsigned owner,unsigned stage) {
  context=assets.title+" ROLLER lost owner="+std::to_string(owner)+" stage="+std::to_string(stage);MeterFixture f(assets,content);std::unique_ptr<SourceMeterRoller> leaf;
  auto call=SourceMeterRollerCall(*f.entry);
  if(stage){leaf=f.begin();
  if(stage==2){while(!leaf->advance(1)){}}else leaf->advance(1);}
  if(owner==0)f.native.party.reset();
  if(owner==1)f.native.meters.reset();
  if(owner==2)f.entry.reset();
  if(owner==3)f.native.nmi.reset();
  if(owner==4)f.native.work.reset();
  if(owner==5)f.native.physical.reset();
  const auto before=meter_snapshot(f);bool rejected{};
  try{if(!stage){auto unused=f.operation->begin_source_meter_roller(*f.native.work,meter_context(),call);}else if(stage==2)f.operation->respond_source_meter_roller(*leaf);else leaf->advance(1);}catch(const std::logic_error&){rejected=true;}
  require(rejected&&meter_snapshot(f)==before,"Source roller borrowed an expired party/meter/page/NMI/work/physical owner or advanced effects");
}
void meter_foreign_work(const GameAssets&assets,const session::Content&content) {
  context=assets.title+" ROLLER foreign actual work/Scene/party";MeterFixture f(assets,content),other(assets,content);const auto before=meter_snapshot(f),foreign=meter_snapshot(other);bool rejected{};
  try{auto leaf=f.operation->begin_source_meter_roller(*other.native.work,meter_context(),SourceMeterRollerCall(*f.entry));}catch(const std::logic_error&){rejected=true;}
  require(rejected&&meter_snapshot(f)==before&&meter_snapshot(other)==foreign&&!f.native.runtime->failed()&&!other.native.runtime->failed(),"Foreign actual Work/Scene claimed a meter/page lease or changed owner state");
}
void meter_wrong_parent(const GameAssets&assets,const session::Content&content) {
  context=assets.title+" ROLLER unrelated actual ScreenUpdate parent";MeterFixture f(assets,content,false);f.operation=f.native.runtime->begin(TickKind::WorldFrame);bool suspended{};
  for(unsigned i=0;i<100;++i)if(f.operation->advance(1)==dialogue::Progress::Suspended){suspended=true;break;}
  require(suspended&&f.operation->service()==SceneService::ScreenUpdate,"Genuine unrelated parent did not reach its source screen continuation");
  const auto before=meter_snapshot(f);bool rejected{};try{auto leaf=f.begin();}catch(const std::logic_error&){rejected=true;}
  require(rejected&&meter_snapshot(f)==before&&!f.native.runtime->failed(),"Unrelated pending ScreenUpdate admitted roller work or changed owners/time");
}
void meter_compatibility42(const GameAssets&assets,const session::Content&content) {
  context=assets.title+" ROLLER unchanged42 source-window opt-in";cutscenes::DisplayState text;MeterFixture f(assets,content,false);
  f.native.windows.bind_source_text_tiles(text);f.native.windows.initialize_cold_text_tiles();
  party::State expected(assets.version);saves::restore_party(f.native.seed,expected);const auto&w=f.native.world;
  party::advance_meters(expected,w.clock.frame_counter,{f.native.windows.prompt_state().rolling_disabled,f.native.windows.prompt_state().half_meter_speed,w.clock.fastest_hp_increase,w.clock.flipout,w.clock.hp_speed});
  auto random=w.random;next_random(random);const auto clocks=f.native.work->master_clocks(),audio=f.native.audio.master_clocks(),polls=w.clock.input_polls;
  auto operation=f.native.runtime->begin_source_window_tick(*f.native.work,{true,true,true,0xc2,0x7e,0x1e00,0x1ffc});bool suspended{};
  for(unsigned i=0;i<100;++i)if(operation->advance(1)==dialogue::Progress::Suspended){suspended=true;break;}
  require(suspended&&operation->service()==SceneService::WindowPublication&&party_bytes(saves::capture_party(*f.native.party,f.native.seed))==party_bytes(saves::capture_party(expected,f.native.seed))&&
    !f.native.party->source_meter_active()&&w.random==random&&f.native.work->master_clocks()==clocks&&f.native.audio.master_clocks()==audio&&w.clock.input_polls==polls,
    "Existing42 opt-in acquired a timed roller, rolled twice or changed physical/input work");
}
void meter_compatibility43(const GameAssets&assets,const session::Content&content) {
  context=assets.title+" ROLLER unchanged43 source-RAND opt-in";MeterFixture f(assets,content,false);const auto party=meter_snapshot(f).owners.rows;
  auto expected=f.native.world.random;next_random(expected);auto operation=f.native.runtime->begin_source_random_window_tick(*f.native.work,{true,true,true,0xc0,0xc1,0x7e,4,0x1e00,0x1ffc,0x1234});bool suspended{};
  for(unsigned i=0;i<100;++i)if(operation->advance(1)==dialogue::Progress::Suspended){suspended=true;break;}
  require(suspended&&operation->service()==SceneService::SourceRandom&&meter_snapshot(f).owners.rows==party&&!f.native.party->source_meter_active(),"Existing43 pre-RAND boundary was replaced by a roller");
  auto leaf=operation->begin_source_random(*f.native.work,{true,true,true,0xc0,0xc1,0x7e,4,0x1e00,0x1ffc,0x1234});while(!leaf->advance(1)){}operation->respond_source_random(*leaf);
  require(f.native.world.random==expected&&meter_snapshot(f).owners.rows==party&&!f.native.party->source_meter_active(),"Existing43 timed RAND changed party meters or acquired a roller lease");
}
unsigned meter_regressions(const GameAssets&assets,const session::Content&content) {
  unsigned calls{};for(unsigned kind=0;kind<17;++kind){meter_rejection(assets,content,kind);++calls;}
  for(unsigned kind=0;kind<9;++kind){meter_public_rejection(assets,content,kind);++calls;}
  meter_receipts(assets,content);++calls;for(bool parent:{false,true})for(bool complete:{false,true}){meter_abandon(assets,content,parent,complete);++calls;}
  for(unsigned owner=0;owner<6;++owner)for(unsigned stage=0;stage<3;++stage)if(owner!=4||stage){meter_lost_owner(assets,content,owner,stage);++calls;}
  meter_foreign_work(assets,content);++calls;meter_wrong_parent(assets,content);++calls;meter_compatibility42(assets,content);++calls;meter_compatibility43(assets,content);++calls;
  require(calls==52,"Meter regression matrix count differs");return calls;
}
constexpr std::array<std::uint32_t,10> meter_speeds{0,1,0x8000,0x10000,0x18000,0x64000,0x7fffffff,0x80000000,0x80000001,0xffffffff};
MeterCase meter_scenario(unsigned kind) {
  MeterCase c;
  if(kind==0){c.hp_fraction=c.pp_fraction=0xffff;}
  if(kind==1){c.hp_current=999;c.hp_target=1;c.pp_current=1;c.pp_target=999;c.hp_fraction=c.pp_fraction=0xffff;c.half=1;c.speed=0x80000001;}
  if(kind==2){c.hp_current=c.hp_target=33;c.pp_current=c.pp_target=17;}
  if(kind==3){c.hp_fraction=c.pp_fraction=0;}
  if(kind==4){c.flipout=1;c.hp_current=c.hp_target=999;c.pp_current=c.pp_target=999;}
  if(kind==5){c.flipout=0x8000;c.hp_current=c.hp_target=1;c.pp_current=c.pp_target=0;}
  if(kind==6){c.disabled=0xff;c.half=0x80;c.fastest=0x7f;c.flipout=0x8001;}
  if(kind==7)c.member=6;
  if(kind==8){c.reset=true;c.hp_current=0;c.hp_target=0;c.pp_current=50;c.pp_target=1;}
  if(kind==9){c.reset=true;c.hp_current=999;c.hp_target=1;c.pp_current=999;c.pp_target=0;c.hp_fraction=c.pp_fraction=0xffff;}
  if(kind==10){c.hp_current=1000;c.hp_target=999;c.pp_current=1000;c.pp_target=999;c.speed=1;}
  if(kind==11){c.hp_current=1001;c.hp_target=1000;c.pp_current=1001;c.pp_target=1000;c.speed=0;}
  if(kind==12){c.hp_current=0;c.hp_target=0xffff;c.pp_current=0xffff;c.pp_target=0;}
  if(kind==13){c.hp_current=0xffff;c.hp_target=0;c.pp_current=0;c.pp_target=0xffff;}
  if(kind==14){c.hp_current=0x7fff;c.hp_target=0x8000;c.pp_current=0x8000;c.pp_target=0x7fff;}
  if(kind==15){c.hp_current=0x8000;c.hp_target=0x7fff;c.pp_current=0x7fff;c.pp_target=0x8000;}
  if(kind==16){c.hp_current=c.hp_target=57;c.pp_current=c.pp_target=71;c.hp_fraction=c.pp_fraction=0x7fff;}
  if(kind==17){c.hp_fraction=c.pp_fraction=0x8000;}
  if(kind==18)c.fastest=0x80;
  if(kind==19){c.flipout=0x8000;c.hp_current=999;c.hp_target=1;c.pp_current=1;c.pp_target=999;}
  if(kind>=20&&kind<=27)c.speed=meter_speeds[kind-20+(kind>=25?1:0)];
  if(kind==28)c.half=0x80;
  if(kind==29)c.half=0xff;
  if(kind==30){c.slot=3;c.member=4;c.homogeneous=false;}
  if(kind==31){c.slot=2;c.member=0;}
  return c;
}
void meter_witnesses(GameVersion version,const std::set<unsigned>&sites) {
  const bool jp=version==GameVersion::JP;
  std::vector<unsigned> required{jp?0xc20f51u:0xc210b5u,jp?0xc20f5fu:0xc210bfu,jp?0xc20f6cu:0xc210ccu,
    jp?0xc0900du:0xc0902bu,jp?0xc09013u:0xc09031u,
    jp?0xc20df4u:0xc20f63u,jp?0xc20e00u:0xc20f6fu,jp?0xc20e05u:0xc20f74u,
    jp?0xc09255u:0xc09273u,jp?0xc09257u:0xc09275u,
    jp?0xc20e0fu:0xc20f7eu,jp?0xc20e13u:0xc20f82u,
    jp?0xc21002u:0xc21162u,jp?0xc21007u:0xc21167u,
    jp?0xc2108cu:0xc211ecu,jp?0xc21091u:0xc211f1u,
    jp?0xc2113cu:0xc2129cu,jp?0xc21141u:0xc212a1u,
    jp?0xc211c9u:0xc21329u,jp?0xc211ceu:0xc2132eu,
    jp?0xc2121fu:0xc2137fu,jp?0xc2123cu:0xc2139cu,
    jp?0xc2124bu:0xc213abu,jp?0xc13536u:0xc12e18u};
  for(unsigned pc:required)require(sites.contains(pc),"Declared full physical matrix missed actual original roller interruption at "+std::to_string(pc));
}
void run_meter(const GameAssets&assets,bool smoke) {
  const session::Content content(assets.image,assets.version);std::set<unsigned>sites;unsigned cases{};
  for(bool fast:{false,true})for(unsigned budget:{1u,4096u})for(unsigned flags:{1u,4u,0x25u,0xc4u})for(unsigned kind=0;kind<(smoke?8u:32u);++kind){
    auto c=meter_scenario(kind);c.fast=fast;c.budget=budget;c.flags=flags;meter_case(assets,content,c,sites);++cases;}
  const auto regressions=meter_regressions(assets,content);
  if(!smoke){
    constexpr std::array<std::array<std::uint16_t,2>,14>endpoints{{{0,0},{0,1},{1,0},{1,1},{1,999},{998,999},{999,1},{999,999},{1000,999},{1001,1000},{0x7fff,0x8000},{0x8000,0x7fff},{0xffff,0},{0,0xffff}}};
    constexpr std::array<std::uint16_t,8>fractions{0,1,2,3,0x7fff,0x8000,0xfffe,0xffff};unsigned index{};
    for(bool fast:{false,true})for(unsigned budget:{1u,4096u})for(const auto pair:endpoints)for(auto fraction:fractions){MeterCase c;c.fast=fast;c.budget=budget;
      c.hp_current=pair[0];c.hp_target=pair[1];c.pp_current=pair[1];c.pp_target=pair[0];c.hp_fraction=fraction;c.pp_fraction=fraction^0x8000;
      c.speed=meter_speeds[index%meter_speeds.size()];c.half=std::array<unsigned,4>{0,1,0x80,0xff}[index%4];c.slot=index%4;c.member=1+index%4;++index;meter_case(assets,content,c,sites);++cases;}
    for(bool fast:{false,true})for(unsigned budget:{1u,4096u})for(auto speed:meter_speeds)for(unsigned half:{0u,1u,0x80u,0xffu})for(unsigned control=0;control<4;++control){
      auto c=meter_scenario(control&1?1:0);c.fast=fast;c.budget=budget;c.speed=speed;c.half=half;c.fastest=control&1?0x80:0;c.flipout=control&2?0x8000:0;meter_case(assets,content,c,sites);++cases;}
    for(bool fast:{false,true})for(unsigned budget:{1u,4096u})for(unsigned member:{0u,5u,6u,0x7fu,0x80u,0xffu})for(unsigned disabled:{0u,1u,0xffu}){
      MeterCase c;c.fast=fast;c.budget=budget;c.member=member;c.disabled=disabled;c.flipout=0x8001;c.half=0x80;c.fastest=0x7f;meter_case(assets,content,c,sites);++cases;}
    for(bool fast:{false,true})for(unsigned budget:{1u,4096u})for(unsigned slot=0;slot<4;++slot)for(unsigned member=1;member<=4;++member){
      MeterCase c;c.fast=fast;c.budget=budget;c.slot=slot;c.member=member;c.homogeneous=false;meter_case(assets,content,c,sites);++cases;}
    for(bool fast:{false,true})for(unsigned budget:{1u,4096u})for(unsigned kind:{0u,1u,4u}){auto c=meter_scenario(kind);c.fast=fast;c.budget=budget;c.enabled=false;c.line=224;c.horizontal=1300;meter_case(assets,content,c,sites);++cases;}
    // Static linked-byte CFG upper7396+external62+refresh280<=7738.
    // Six full shortest lines provide8184 clocks before225; uniform4-clock
    // slots exercise short12-clock atoms. No wait or phase is fitted to output.
    // Complementary HP/PP directions and the real flipout target branch share
    // this identical declared sweep, with strict witnesses from the full union.
    for(bool fast:{false,true})for(unsigned kind:{0u,1u,4u})for(unsigned line=219;line<=224;++line)for(unsigned h=0;h<1364;h+=4){
      auto c=meter_scenario(kind);c.fast=fast;c.line=line;c.horizontal=h;
  if(kind==0){c.half=1;c.speed=0x80000001;}
      meter_case(assets,content,c,sites);++cases;}
    meter_witnesses(assets.version,sites);
  }
  require(cases==(smoke?128u:14024u),"Declared meter composition count differs");
  std::cout<<"PASS "<<assets.title<<" original roller compositions="<<cases<<" regressions="<<regressions<<" checks="<<checks<<" sites="<<sites.size()<<'\n';
}
} // namespace
#ifndef EB_NATIVE_SOURCE_METER_ROLLER_REFERENCE_NO_MAIN
int main(int argc,char**argv){try{
  if(argc<2)return 77;
  const bool smoke=std::string(argv[1])=="--meter-roller-smoke";
  if(smoke&&argc<3)return 77;
  for(int arg=smoke?2:1;arg<argc;++arg)run_meter(load_game_assets(argv[arg],asset_profiles()),smoke);
  std::cout<<"PASS independent source meter roller checks="<<checks<<'\n';
}catch(const std::exception&error){std::cerr<<context<<": "<<error.what()<<'\n';return 1;}}
#endif
