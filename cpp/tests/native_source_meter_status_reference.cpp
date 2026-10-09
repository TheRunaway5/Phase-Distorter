// Independent original WINDOW_TICK status/palette component only. Original
// six-row pointers come from its own genuine MAIN_LOOP/C43317 producer. No
// whole prefix, final window publication, RUN or Ending timing is claimed.
#define EB_NATIVE_SOURCE_METER_ROLLER_REFERENCE_NO_MAIN
#include "native_source_meter_roller_reference.cpp"
#undef EB_NATIVE_SOURCE_METER_ROLLER_REFERENCE_NO_MAIN
#include "eb/native/story/source_meter_status.hpp"
#include "eb/native/world_scene_presentation.hpp"
#include "eb/native/cutscenes/ending/initializer_work.hpp"
#include <bitset>

namespace {
struct StatusLayout {
  unsigned suffix,last,status,palette,copy,main,main_return,pointers,table;
  unsigned count,order,cache,disabled,flavor,properties,colors,group;
};
StatusLayout status_layout(GameVersion v) {
  if(v==GameVersion::JP)return {0xc13541,0xc13552,0xc1fcab,0xc45c1a,0xc08ec3,
    0xc0b7be,0xc0b7ca,0xc43090,0x514e,0x9b55,0x9b42,0xb676,0xb68a,0x9c7e,0xe01f0e,0xe01f1d,13};
  return {0xc12e23,0xc12e34,0xc1ff2c,0xc47f87,0xc08ed2,
    0xc0b7d8,0xc0b7e4,0xc43317,0x4dc8,0x98a4,0x9891,0xb4a2,0xb4b6,0x99cd,0xe01fb9,0xe01fc8,14};
}
constexpr std::array<std::uint8_t,12> status_us_authentic_main_prefix_and_call{
  0xc2,0x31,0x0b,0x7b,0x69,0xf0,0xff,0x5b,0x22,0x17,0x33,0xc4,
};
constexpr std::array<std::uint8_t,45> status_us_six_pointer_producer{
  0xc2,0x31,0x0b,0x7b,0x69,0xf0,0xff,0x5b,0xa9,0x00,0x00,0x85,0x0e,0x80,0x17,0x0a,0xaa,0xa5,0x0e,0xa0,0x5f,0x00,0x22,0xf7,
  0x8f,0xc0,0x18,0x69,0xce,0x99,0x9d,0xc8,0x4d,0xa5,0x0e,0x1a,0x85,0x0e,0xc9,0x06,0x00,0x90,0xe4,0x2b,0x6b,
};
constexpr std::array<std::uint8_t,17> status_us_suffix{
  0xad,0xb6,0xb4,0xd0,0x0c,0x20,0x2c,0xff,0xc9,0x00,0x00,0xf0,0x04,0x22,0x87,0x7f,0xc4,
};
constexpr std::array<std::uint8_t,63> status_us_status{
  0xc2,0x31,0xad,0xa4,0x98,0x29,0xff,0x00,0xaa,0xca,0xbd,0x91,0x98,0x29,0xff,0x00,0x0a,0xaa,0xbd,0xc8,0x4d,0xaa,0xe2,0x20,
  0xbd,0x0e,0x00,0xa2,0x00,0x00,0xc2,0x20,0x29,0xff,0x00,0xc9,0x01,0x00,0xf0,0x05,0xc9,0x02,0x00,0xd0,0x03,0xa2,0x01,0x00,
  0xa9,0x00,0x00,0xec,0xa2,0xb4,0xf0,0x03,0xa9,0x01,0x00,0x8e,0xa2,0xb4,0x60,
};
constexpr std::array<std::uint8_t,132> status_us_palette{
  0xc2,0x31,0x0b,0x7b,0x69,0xee,0xff,0x5b,0xad,0xa4,0x98,0x29,0xff,0x00,0xaa,0xca,0xbd,0x91,0x98,0x29,0xff,0x00,0x0a,0xaa,
  0xbd,0xc8,0x4d,0xaa,0xbd,0x0e,0x00,0x29,0xff,0x00,0xaa,0xe0,0x01,0x00,0xf0,0x05,0xe0,0x02,0x00,0xd0,0x1b,0xad,0xb6,0xb4,
  0xd0,0x16,0xa9,0x08,0x21,0x85,0x0e,0xa9,0xe0,0x00,0x85,0x10,0xa2,0x40,0x00,0xa9,0x00,0x02,0x22,0xd2,0x8e,0xc0,0x80,0x30,
  0xa9,0xc8,0x1f,0x85,0x06,0xa9,0xe0,0x00,0x85,0x08,0xad,0xcd,0x99,0x29,0xff,0x00,0x3a,0x85,0x04,0x0a,0x65,0x04,0xaa,0xbf,
  0xb9,0x1f,0xe0,0x18,0x65,0x06,0x85,0x06,0x85,0x0e,0xa5,0x08,0x85,0x10,0xa2,0x40,0x00,0xa9,0x00,0x02,0x22,0xd2,0x8e,0xc0,
  0x9c,0x00,0x02,0xa9,0x08,0x00,0x22,0x6b,0x85,0xc0,0x2b,0x6b,
};
constexpr std::array<std::uint8_t,27> status_us_memcpy16{
  0x8e,0xa5,0x00,0x4e,0xa5,0x00,0xaa,0xa0,0x00,0x00,0x80,0x09,0xb7,0x0e,0x9d,0x00,0x00,0xe8,0xe8,0xc8,0xc8,0xce,0xa5,0x00,
  0x10,0xf2,0x6b,
};
constexpr std::array<std::uint8_t,8> status_us_upload{
  0xe2,0x20,0x8d,0x30,0x00,0xc2,0x20,0x6b,
};
constexpr std::array<std::uint8_t,59> status_us_multiply_preparation{
  0xc2,0x10,0xeb,0xf0,0x26,0xe2,0x20,0xeb,0x48,0x98,0xc2,0x20,0x8f,0x02,0x42,0x00,0xea,0xea,0xaf,0x16,0x42,0x00,0xa8,0xe2,
  0x20,0x68,0x8f,0x03,0x42,0x00,0xc2,0x20,0x98,0xeb,0x29,0x00,0xff,0x18,0x6f,0x16,0x42,0x00,0x6b,0xe2,0x20,0x98,0xc2,0x20,
  0x8f,0x02,0x42,0x00,0xea,0xea,0xaf,0x16,0x42,0x00,0x6b,
};
constexpr std::array<std::uint8_t,24> status_us_slow_bank00_palette_dma_parameters{
  0x80,0xfe,0x00,0x01,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x03,0x80,0x00,0x00,0x00,0x00,0x02,0x00,0x02,0x00,0x00,
};
constexpr std::array<std::uint8_t,15> status_us_raw_properties{
  0x00,0x00,0x01,0x40,0x00,0x08,0x80,0x00,0x08,0xc0,0x00,0x08,0x00,0x01,0x08,
};
constexpr std::array<std::uint8_t,384> status_us_reachable_raw_palettes{
  0x00,0x00,0xde,0x7b,0x59,0x3a,0x42,0x08,0x80,0x3b,0xde,0x7b,0x93,0x42,0x42,0x08,0x80,0x3b,0xde,0x7b,0xbf,0x4c,0xbf,0x4c,
  0x80,0x3b,0xde,0x7b,0x4e,0x7d,0x42,0x08,0x80,0x3b,0xde,0x7b,0x12,0x56,0x52,0x76,0x80,0x3b,0xe7,0x1c,0xa5,0x14,0x42,0x08,
  0x80,0x3b,0xde,0x7b,0xee,0x68,0xee,0x68,0x80,0x3b,0xde,0x7b,0x51,0x4a,0x42,0x08,0x00,0x00,0xde,0x5f,0xe6,0x3b,0x25,0x14,
  0x80,0x3b,0xff,0x77,0x6d,0x3a,0x25,0x14,0x80,0x3b,0xde,0x5f,0xbf,0x4c,0xbf,0x4c,0x80,0x3b,0xbf,0x57,0x4f,0x79,0x25,0x14,
  0x80,0x3b,0xde,0x5f,0x6c,0x56,0x4c,0x5f,0x80,0x3b,0xe7,0x1c,0xa5,0x14,0x42,0x08,0x80,0x3b,0xde,0x5f,0x52,0x79,0x52,0x79,
  0x80,0x3b,0xbf,0x57,0x4d,0x5f,0xc7,0x28,0x00,0x00,0xde,0x5f,0x9c,0x2d,0x25,0x14,0x80,0x3b,0xff,0x77,0x93,0x3e,0x25,0x14,
  0x80,0x3b,0xde,0x5f,0x1b,0x1c,0x1b,0x1c,0x80,0x3b,0xbf,0x57,0x4e,0x7d,0x25,0x14,0x80,0x3b,0xde,0x5f,0xba,0x49,0x3f,0x56,
  0x80,0x3b,0xe7,0x1c,0xa5,0x14,0x42,0x08,0x80,0x3b,0xde,0x5f,0x50,0x71,0x50,0x71,0x80,0x3b,0xbf,0x67,0x5f,0x56,0x88,0x24,
  0x00,0x00,0xde,0x5f,0x6d,0x1f,0x25,0x14,0x80,0x3b,0xff,0x67,0x51,0x42,0x25,0x14,0x80,0x3b,0xde,0x5f,0xbf,0x4c,0xbf,0x4c,
  0x80,0x3b,0xbf,0x57,0x4f,0x79,0x25,0x14,0x80,0x3b,0x86,0x10,0xb6,0x36,0x9b,0x1b,0x80,0x3b,0xe7,0x1c,0xa5,0x14,0x42,0x08,
  0x80,0x3b,0xde,0x5f,0x52,0x79,0x52,0x79,0x80,0x3b,0xff,0x6b,0xfd,0x2f,0xc9,0x28,0x00,0x00,0xde,0x5f,0x19,0x16,0x25,0x14,
  0x80,0x3b,0xfe,0x63,0x73,0x3a,0x25,0x14,0x80,0x3b,0xde,0x5f,0xbf,0x4c,0xbf,0x4c,0x80,0x3b,0xbf,0x57,0x4f,0x79,0x25,0x14,
  0x80,0x3b,0xde,0x5f,0xb6,0x39,0x5b,0x1a,0x80,0x3b,0xe7,0x1c,0xa5,0x14,0x42,0x08,0x80,0x3b,0xde,0x5f,0x52,0x79,0x52,0x79,
  0x80,0x3b,0xbf,0x57,0x9c,0x2a,0x68,0x14,0x00,0x00,0x1f,0x2e,0x5c,0x2d,0x25,0x14,0x80,0x3b,0xbf,0x52,0x18,0x25,0x25,0x14,
  0x80,0x3b,0x9f,0x57,0xff,0x68,0xff,0x68,0x80,0x3b,0x5f,0x4b,0x52,0x79,0x25,0x14,0x80,0x3b,0xdf,0x46,0xb9,0x34,0x95,0x1c,
  0x80,0x3b,0xe7,0x1c,0xa5,0x14,0x42,0x08,0x80,0x3b,0x5f,0x4f,0x52,0x79,0x52,0x79,0x80,0x3b,0x5f,0x4b,0x18,0x25,0xae,0x24,
};
constexpr std::array<std::uint8_t,12> status_jp_authentic_main_prefix_and_call{
  0xc2,0x31,0x0b,0x7b,0x69,0xf0,0xff,0x5b,0x22,0x90,0x30,0xc4,
};
constexpr std::array<std::uint8_t,45> status_jp_six_pointer_producer{
  0xc2,0x31,0x0b,0x7b,0x69,0xf0,0xff,0x5b,0xa9,0x00,0x00,0x85,0x0e,0x80,0x17,0x0a,0xaa,0xa5,0x0e,0xa0,0x5e,0x00,0x22,0xdb,
  0x8f,0xc0,0x18,0x69,0x7f,0x9c,0x9d,0x4e,0x51,0xa5,0x0e,0x1a,0x85,0x0e,0xc9,0x06,0x00,0x90,0xe4,0x2b,0x6b,
};
constexpr std::array<std::uint8_t,17> status_jp_suffix{
  0xad,0x8a,0xb6,0xd0,0x0c,0x20,0xab,0xfc,0xc9,0x00,0x00,0xf0,0x04,0x22,0x1a,0x5c,0xc4,
};
constexpr std::array<std::uint8_t,67> status_jp_status{
  0xc2,0x31,0xad,0x55,0x9b,0x29,0xff,0x00,0x3a,0x18,0x69,0xa9,0x9a,0xaa,0xbd,0x99,0x00,0x29,0xff,0x00,0x0a,0xaa,0xbd,0x4e,
  0x51,0xaa,0xe2,0x20,0xbd,0x0d,0x00,0xa2,0x00,0x00,0xc2,0x20,0x29,0xff,0x00,0xc9,0x01,0x00,0xf0,0x05,0xc9,0x02,0x00,0xd0,
  0x03,0xa2,0x01,0x00,0xa9,0x00,0x00,0xec,0x76,0xb6,0xf0,0x03,0xa9,0x01,0x00,0x8e,0x76,0xb6,0x60,
};
constexpr std::array<std::uint8_t,136> status_jp_palette{
  0xc2,0x31,0x0b,0x7b,0x69,0xee,0xff,0x5b,0xad,0x55,0x9b,0x29,0xff,0x00,0x3a,0x18,0x69,0xa9,0x9a,0xaa,0xbd,0x99,0x00,0x29,
  0xff,0x00,0x0a,0xaa,0xbd,0x4e,0x51,0xaa,0xbd,0x0d,0x00,0x29,0xff,0x00,0xaa,0xe0,0x01,0x00,0xf0,0x05,0xe0,0x02,0x00,0xd0,
  0x1b,0xad,0x8a,0xb6,0xd0,0x16,0xa9,0x5d,0x20,0x85,0x0e,0xa9,0xe0,0x00,0x85,0x10,0xa2,0x40,0x00,0xa9,0x00,0x02,0x22,0xc3,
  0x8e,0xc0,0x80,0x30,0xa9,0x1d,0x1f,0x85,0x06,0xa9,0xe0,0x00,0x85,0x08,0xad,0x7e,0x9c,0x29,0xff,0x00,0x3a,0x85,0x04,0x0a,
  0x65,0x04,0xaa,0xbf,0x0e,0x1f,0xe0,0x18,0x65,0x06,0x85,0x06,0x85,0x0e,0xa5,0x08,0x85,0x10,0xa2,0x40,0x00,0xa9,0x00,0x02,
  0x22,0xc3,0x8e,0xc0,0x9c,0x00,0x02,0xa9,0x08,0x00,0x22,0x6b,0x85,0xc0,0x2b,0x6b,
};
constexpr std::array<std::uint8_t,27> status_jp_memcpy16{
  0x8e,0xa5,0x00,0x4e,0xa5,0x00,0xaa,0xa0,0x00,0x00,0x80,0x09,0xb7,0x0e,0x9d,0x00,0x00,0xe8,0xe8,0xc8,0xc8,0xce,0xa5,0x00,
  0x10,0xf2,0x6b,
};
constexpr std::array<std::uint8_t,8> status_jp_upload{
  0xe2,0x20,0x8d,0x30,0x00,0xc2,0x20,0x6b,
};
constexpr std::array<std::uint8_t,57> status_jp_multiply_preparation{
  0xeb,0xf0,0x26,0xe2,0x20,0xeb,0x48,0x98,0xc2,0x20,0x8f,0x02,0x42,0x00,0xea,0xea,0xaf,0x16,0x42,0x00,0xa8,0xe2,0x20,0x68,
  0x8f,0x03,0x42,0x00,0xc2,0x20,0x98,0xeb,0x29,0x00,0xff,0x18,0x6f,0x16,0x42,0x00,0x6b,0xe2,0x20,0x98,0xc2,0x20,0x8f,0x02,
  0x42,0x00,0xea,0xea,0xaf,0x16,0x42,0x00,0x6b,
};
constexpr std::array<std::uint8_t,24> status_jp_slow_bank00_palette_dma_parameters{
  0x80,0xfe,0x00,0x01,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x03,0x80,0x00,0x00,0x00,0x00,0x02,0x00,0x02,0x00,0x00,
};
constexpr std::array<std::uint8_t,15> status_jp_raw_properties{
  0x00,0x00,0x00,0x40,0x00,0x01,0x80,0x00,0x01,0xc0,0x00,0x01,0x00,0x01,0x01,
};
constexpr std::array<std::uint8_t,384> status_jp_reachable_raw_palettes{
  0x00,0x00,0xde,0x7b,0x59,0x3a,0x42,0x08,0x80,0x3b,0xde,0x7b,0x93,0x42,0x42,0x08,0x80,0x3b,0xde,0x7b,0xbf,0x4c,0xbf,0x4c,
  0x80,0x3b,0xde,0x7b,0x4e,0x7d,0x42,0x08,0x80,0x3b,0xde,0x7b,0x12,0x56,0x52,0x76,0x80,0x3b,0xe7,0x1c,0xa5,0x14,0x42,0x08,
  0x80,0x3b,0xde,0x7b,0xee,0x68,0xee,0x68,0x80,0x3b,0xde,0x7b,0x51,0x4a,0x42,0x08,0x00,0x00,0xde,0x5f,0xe6,0x3b,0x25,0x14,
  0x80,0x3b,0xff,0x77,0x6d,0x3a,0x25,0x14,0x80,0x3b,0xde,0x5f,0xbf,0x4c,0xbf,0x4c,0x80,0x3b,0xbf,0x57,0x4f,0x79,0x25,0x14,
  0x80,0x3b,0xde,0x5f,0x6c,0x56,0x4c,0x5f,0x80,0x3b,0xe7,0x1c,0xa5,0x14,0x42,0x08,0x80,0x3b,0xde,0x5f,0x52,0x79,0x52,0x79,
  0x80,0x3b,0xbf,0x57,0x4d,0x5f,0xc7,0x28,0x00,0x00,0xde,0x5f,0x9c,0x2d,0x25,0x14,0x80,0x3b,0xff,0x77,0x93,0x3e,0x25,0x14,
  0x80,0x3b,0xde,0x5f,0x1b,0x1c,0x1b,0x1c,0x80,0x3b,0xbf,0x57,0x4e,0x7d,0x25,0x14,0x80,0x3b,0xde,0x5f,0xba,0x49,0x3f,0x56,
  0x80,0x3b,0xe7,0x1c,0xa5,0x14,0x42,0x08,0x80,0x3b,0xde,0x5f,0x50,0x71,0x50,0x71,0x80,0x3b,0xbf,0x67,0x5f,0x56,0x88,0x24,
  0x00,0x00,0xde,0x5f,0x6d,0x1f,0x25,0x14,0x80,0x3b,0xff,0x67,0x51,0x42,0x25,0x14,0x80,0x3b,0xde,0x5f,0xbf,0x4c,0xbf,0x4c,
  0x80,0x3b,0xbf,0x57,0x4f,0x79,0x25,0x14,0x80,0x3b,0x86,0x10,0xb6,0x36,0x9b,0x1b,0x80,0x3b,0xe7,0x1c,0xa5,0x14,0x42,0x08,
  0x80,0x3b,0xde,0x5f,0x52,0x79,0x52,0x79,0x80,0x3b,0xff,0x6b,0xfd,0x2f,0xc9,0x28,0x00,0x00,0xde,0x5f,0x19,0x16,0x25,0x14,
  0x80,0x3b,0xfe,0x63,0x73,0x3a,0x25,0x14,0x80,0x3b,0xde,0x5f,0xbf,0x4c,0xbf,0x4c,0x80,0x3b,0xbf,0x57,0x4f,0x79,0x25,0x14,
  0x80,0x3b,0xde,0x5f,0xb6,0x39,0x5b,0x1a,0x80,0x3b,0xe7,0x1c,0xa5,0x14,0x42,0x08,0x80,0x3b,0xde,0x5f,0x52,0x79,0x52,0x79,
  0x80,0x3b,0xbf,0x57,0x9c,0x2a,0x68,0x14,0x00,0x00,0x1f,0x2e,0x5c,0x2d,0x25,0x14,0x80,0x3b,0xbf,0x52,0x18,0x25,0x25,0x14,
  0x80,0x3b,0x9f,0x57,0xff,0x68,0xff,0x68,0x80,0x3b,0x5f,0x4b,0x52,0x79,0x25,0x14,0x80,0x3b,0xdf,0x46,0xb9,0x34,0x95,0x1c,
  0x80,0x3b,0xe7,0x1c,0xa5,0x14,0x42,0x08,0x80,0x3b,0x5f,0x4f,0x52,0x79,0x52,0x79,0x80,0x3b,0x5f,0x4b,0x18,0x25,0xae,0x24,
};
void status_authority(const GameAssets& a) {
  if(a.version==GameVersion::US) {
    meter_bytes(a,0xc0b7d8,status_us_authentic_main_prefix_and_call);
    meter_bytes(a,0xc43317,status_us_six_pointer_producer);
    meter_bytes(a,0xc12e23,status_us_suffix);
    meter_bytes(a,0xc1ff2c,status_us_status);
    meter_bytes(a,0xc47f87,status_us_palette);
    meter_bytes(a,0xc08ed2,status_us_memcpy16);
    meter_bytes(a,0xc0856b,status_us_upload);
    meter_bytes(a,0xc08ff7,status_us_multiply_preparation);
    meter_bytes(a,0xc08f98,status_us_slow_bank00_palette_dma_parameters);
    meter_bytes(a,0xe01fb9,status_us_raw_properties);
    meter_bytes(a,0xe01fc8,status_us_reachable_raw_palettes);
  }
  if(a.version==GameVersion::JP) {
    meter_bytes(a,0xc0b7be,status_jp_authentic_main_prefix_and_call);
    meter_bytes(a,0xc43090,status_jp_six_pointer_producer);
    meter_bytes(a,0xc13541,status_jp_suffix);
    meter_bytes(a,0xc1fcab,status_jp_status);
    meter_bytes(a,0xc45c1a,status_jp_palette);
    meter_bytes(a,0xc08ec3,status_jp_memcpy16);
    meter_bytes(a,0xc0856b,status_jp_upload);
    meter_bytes(a,0xc08fdb,status_jp_multiply_preparation);
    meter_bytes(a,0xc08f7c,status_jp_slow_bank00_palette_dma_parameters);
    meter_bytes(a,0xe01f0e,status_jp_raw_properties);
    meter_bytes(a,0xe01f1d,status_jp_reachable_raw_palettes);
  }
}
SourceMeterStatusContext status_context(unsigned flags=4) {
  return {true,true,true,0xc1,0x7e,std::uint8_t(flags),0x1e00,0x1fff,0x1234,0x4567,0x89ab};
}
struct StatusOriginal:MeterOriginal {
  struct InterruptImage {
    unsigned pc{},words{},mode{};std::uint16_t counter{};
    std::array<std::uint8_t,512> staged{},displayed{};
  };
  std::vector<InterruptImage> interrupt_images;
  unsigned copy_words{},counter_decrements{},palette_zeroes{},upload_stores{};
  explicit StatusOriginal(const GameAssets&a,bool fast):MeterOriginal(a,fast) {
    status_authority(a);const auto l=status_layout(a.version);
    SnesBus pre(a.image,a.version);MainCpu65816 producer(pre);producer.set_runtime(MainCpuRuntime::Legacy);
    producer.emulation_mode=false;producer.status_register=4;producer.data_bank=0x7e;
    producer.direct_page=0x1e00;producer.stack_pointer=0x1fff;producer.program_counter=l.main;
    unsigned atoms{};while(producer.program_counter!=l.main_return&&atoms<1000){producer.step_instruction();++atoms;}
    require(producer.program_counter==l.main_return&&producer.direct_page==0x1df0&&producer.stack_pointer==0x1ffd,
      "Original MAIN_LOOP/C43317 pointer producer lost its true caller return/frame");
    const auto ml=meter_layout(a.version);
    for(unsigned i=0;i<6;++i){const unsigned pointer=pre.work_ram[l.table+i*2]|unsigned(pre.work_ram[l.table+i*2+1])<<8;
      require(pointer==ml.rows+i*ml.stride,"Real original C43317 producer lost the six-row invariant");}
    require(!pre.math_pending(),"Real original pointer producer left unowned multiply debt");
    // Only original-owned pointers feed this same original host. Its page,
    // products, registers and elapsed preparation never feed native owners.
    std::copy_n(pre.work_ram.begin()+l.table,12,bus.work_ram.begin()+l.table);
  }
  void audit_status() {
    audit();bus.debug_read_rom=[this](unsigned offset,std::uint8_t value) {
      const auto l=status_layout(bus.game_version());const auto fetch=cpu.program_counter&0x3fffff;
      const bool code=offset>=fetch&&offset-fetch<4,vector=offset==0xffea||offset==0xffeb;
      const unsigned property_pc=bus.game_version()==GameVersion::JP?0xc45c7d:0xc47fe6;
      const unsigned copy_pc=bus.game_version()==GameVersion::JP?0xc08ecf:0xc08ede;
      const bool property=instruction_entry==property_pc&&offset>=(l.properties&0x3fffff)&&offset<(l.properties&0x3fffff)+15;
      const bool color=instruction_entry==copy_pc&&offset>=(l.colors&0x3fffff)&&offset<(l.colors&0x3fffff)+384;
      const unsigned table=bus.game_version()==GameVersion::JP?0x8f7c:0x8f98;
      const bool dma_table=(instruction_entry==0xc081cd||instruction_entry==0xc081d3||instruction_entry==0xc081e7)&&offset>=table&&offset<table+24;
      require(code||vector||property||color||dma_table,"Status/default NMI read undeclared ROM input");
      // The NMI's table accesses are DB00 slow ROM. E0 properties/palettes
      // retain their actual FastROM eligibility independently of program PB.
      if(!fast||vector||dma_table||((cpu.program_counter>>16)==0&&code))access_penalty+=2;
      return value;
    };
    cpu.observe_memory_write=[this](unsigned address,std::uint8_t value) {
      const unsigned bank=address>>16,lo=address&65535;
      if((bank&0x40)==0&&lo==0x420b){require(value==1,"Status/default NMI started an unowned DMA channel");
        const unsigned bytes=bus.read_byte(0x4305)|unsigned(bus.read_byte(0x4306))<<8;
        const unsigned port=bus.read_byte(0x4301),source=bus.read_byte(0x4302)|unsigned(bus.read_byte(0x4303))<<8;
        require((port==4&&bytes==544&&(source==0x500||source==0x800))||
          (port==0x22&&((bytes==256&&(source==0x200||source==0x300))||(bytes==512&&source==0x200))),
          "Status/default NMI lost actual OAM/palette DMA provenance/extent");
        dma_debt+=16+std::uint64_t(bytes)*8;dma_access=true;}
      if(bank==0x7e||((bank&0x40)==0&&lo<0x2000))stores.push_back({instruction_entry,lo,value,bus.master_clocks()});
      const auto l=status_layout(bus.game_version());
      if(instruction_entry==l.copy+14&&bank==0x7e&&lo>=0x200&&lo<0x240&&!(lo&1))++copy_words;
      if(instruction_entry==l.copy+21&&lo==0xa5)++counter_decrements;
      if(instruction_entry==(bus.game_version()==GameVersion::JP?0xc45c96:0xc47fff)&&lo==0x200)++palette_zeroes;
      if(instruction_entry==0xc0856d&&lo==0x30)++upload_stores;
    };
  }
  void drain_status() {
    while(bus.take_nmi()) {
      const unsigned pc=cpu.program_counter,stack=cpu.stack_pointer;interrupted_sites.insert(pc);
      const auto image=bus.cartridge_image();require(image[0xffea]==0x47&&image[0xffeb]==0x81&&image[0x8147]==0x5c&&
        image[0x8148]==0x70&&image[0x8149]==0x81&&image[0x814a]==0xc0,"Original status native NMI vector differs");
      InterruptImage sample{pc,copy_words,bus.work_ram[0x30],std::uint16_t(word(0xa5))};
      std::copy_n(bus.work_ram.begin()+0x200,512,sample.staged.begin());
      instruction_entry=0xffffffff;cpu.service_interrupt(true);++interrupts;bool done{};
      for(unsigned count=0;count<2000;++count){if(cpu.program_counter==pc&&cpu.stack_pointer==stack){done=true;break;}step_meter();}
      require(done,"Original status NMI lost its real caller/D/DB/register frame");
      sample.displayed=bus.palette_ram;interrupt_images.push_back(sample);
      if(sample.mode){const unsigned first=sample.mode==16?256:0,bytes=sample.mode==24?512:256;
        for(unsigned i=first;i<first+bytes;++i)require(sample.displayed[i]==(i&1?sample.staged[i]&0x7f:sample.staged[i]),
          "Original NMI did not publish its actual partial staging image");}
    }
  }
  void instruction_status(){drain_status();require(cpu.program_counter!=status_layout(bus.game_version()).last,
    "Original status suffix crossed its area STZ boundary");step_meter();++foreground;drain_status();}
};

struct StatusNative {
  // Actual component globals are declared before every borrower. Text retains
  // the real existing actor event allocation and also outlives World.
  std::unique_ptr<party::State> party;
  std::unique_ptr<battle::PaletteBankState> palette=std::make_unique<battle::PaletteBankState>();
  std::unique_ptr<CopyCounterState> counter=std::make_unique<CopyCounterState>(0xbeef);
  std::unique_ptr<WorldControlState> control=std::make_unique<WorldControlState>();
  NativeAudio audio;dialogue::State text;session::World world;
  dialogue::TextOutput output;std::unique_ptr<dialogue::WindowHost> windows;
  std::shared_ptr<dialogue::WindowGraphics> graphics;
  std::unique_ptr<party::MeterWindows> meters;
  std::unique_ptr<WorldScenePresentation> presentation;
  std::unique_ptr<WorldRuntime> runtime;
  std::unique_ptr<AudioFrameClock> physical;
  std::unique_ptr<SourceWorkClock> work;
  std::unique_ptr<SourceNmiWork> nmi;
  saves::PersistedState seed;
  StatusNative(const GameAssets&a,const session::Content&content,bool fast,bool interrupt=true,bool physical_owner=true)
    :party(std::make_unique<party::State>(a.version)),audio(a.image,a.version),world(content,audio,256),
      output(content.fonts,text),windows(std::make_unique<dialogue::WindowHost>(content.windows,text,output)),
      graphics(std::make_shared<dialogue::WindowGraphics>(content.window_art,output)) {
    audio.initialize();world.clock.interrupt_mask=0;world.bind_actor_graphics(a.image);
    world.display.transient_memory().configure(a.version);world.clock.action_scripts_disabled=1;world.clock.disabled_transitions=1;
    world.runtime->require_idle();world.command_menu.reset();world.interaction_calls.reset();world.startup.reset();world.relocation.reset();world.map_load.reset();world.runtime.reset();
    const auto *flags=world.text.event_flags.data();const auto bytes=world.text.event_flags;
    require(flags&&bytes.size()==128&&world.actors.scene().event_flags.data()==flags&&world.actors.scene().event_flags.size()==128,
      "Status graph lost its real existing event owner before transfer");
    text.event_flags=std::move(world.text.event_flags);
    require(text.event_flags.data()==flags&&text.event_flags==bytes&&world.actors.scene().event_flags.data()==flags,
      "Status graph did not retain the unchanged actual event allocation");
    windows->set_graphics(graphics);windows->animations().configure(content.text_animations);
    meters=std::make_unique<party::MeterWindows>(*windows,*party,content.meters);
    presentation=std::make_unique<WorldScenePresentation>(world.scene_colors,world.visual,content.layers,world.layer);
    presentation->bind_display_fade(world.fade);presentation->bind_frame_display(world.frame_display);
    presentation->bind_palette_transport(*palette);presentation->bind_video_transport(world.display,world.scratch);
    runtime=std::make_unique<WorldRuntime>(*windows,*party,world.random,*meters,world.clock,world.input,world.actors,
      world.activation,world.enemies,content.collision,world.area,world.area_colors,content.map,content.palettes,content.animations,
      world.spawn,NpcStripAdmission::Admitted,ActorRetentionReader{},SceneView{256});
    runtime->bind_presentation(*presentation);runtime->bind_actor_graphics(*world.actor_graphics);runtime->refresh_world_capture();runtime->reset_interrupt_callback();
    seed=meter_seed(a.version,MeterCase{});saves::restore_party(seed,*party);
    for(unsigned b=0;b<2;++b)for(unsigned i=0;i<544;++i)world.actor_object_display_state.buffers[b].bytes[i]=std::uint8_t(i*71+b*113+37);
    for(unsigned round=0;round<2;++round){const unsigned b=1+round%2;
      for(unsigned i=0;i<4;++i)world.display.staged_scroll[i]={std::uint16_t(0x4100+b*0x211+i*2*0x127),std::uint16_t(0x4100+b*0x211+(i*2+1)*0x127)};
      world.frame_display.update_world_screen();}
    physical=std::make_unique<AudioFrameClock>(world.clock,[this]{work->request_nmi();},[]{},0,0,false);
    if(physical_owner)physical->bind_peripherals(world.peripherals);else world.peripherals.bind_clock(*physical);
    work=std::make_unique<SourceWorkClock>(*physical,audio,world.clock,*runtime,world.actor_object_display_state,*world.actor_object_display,world.frame_display,fast);audio.bind_clock(*work);
    nmi=std::make_unique<SourceNmiWork>(*runtime,audio,world.clock,world.session,world.frame_display,*palette,world.display,world.scratch,
      world.fade,*presentation,world.peripherals,SourceInterruptContext{true,true,true});
    if(interrupt)work->bind_interrupt_work(*nmi);
    windows->publish_palette(1);
  }
  std::unique_ptr<WorldRuntime::Operation> suspension(SourceMeterStatusContext ctx=status_context()) {
    auto operation=runtime->begin_source_meter_status_window_tick(*work,ctx,*control,*counter,*palette);
    for(unsigned i=0;i<100;++i)if(operation->advance(1)==dialogue::Progress::Suspended){
      require(operation->service()==SceneService::SourceMeterStatus,"Actual WindowTick did not stop before semantic status/palette");return operation;}
    throw std::runtime_error(context+": Actual WindowTick did not reach status/palette suspension");
  }
};
struct StatusOwners {
  PhysicalOwners physical;std::vector<std::uint8_t> rows;
  std::array<std::uint8_t,6> order{},controlled{},display{};
  std::array<std::uint8_t,256> page{};
  std::array<std::uint16_t,6> meters{};
  std::array<std::uint16_t,32> window_palette{};
  ScenePalette colors{};
  std::uint16_t counter{},automatic{},disabled{},cache{};
  std::uint8_t count{},flavor{};
  bool operator==(const StatusOwners&)const=default;
};
StatusOwners status_owners(StatusOriginal&o) {
  StatusOwners r;r.physical=physical_owners(o);const auto l=status_layout(o.bus.game_version());const auto ml=meter_layout(o.bus.game_version());
  r.rows.assign(o.bus.work_ram.begin()+ml.rows-2,o.bus.work_ram.begin()+ml.rows+6*ml.stride+2);
  std::copy_n(o.bus.work_ram.begin()+ml.order,6,r.order.begin());std::copy_n(o.bus.work_ram.begin()+l.order,6,r.controlled.begin());
  std::copy_n(o.bus.work_ram.begin()+(o.bus.game_version()==GameVersion::JP?0x9b3c:0x988b),6,r.display.begin());
  std::copy_n(o.bus.work_ram.begin()+0x1d00,256,r.page.begin());
  const auto render=o.bus.game_version()==GameVersion::JP?0x8d07:0x89c9,drawn=o.bus.game_version()==GameVersion::JP?0x993f:0x9647;
  r.meters={std::uint16_t(o.bus.work_ram[render]),std::uint16_t(o.bus.work_ram[drawn]),std::uint16_t(o.bus.work_ram[render+1]),0,std::uint16_t(o.bus.work_ram[o.bus.game_version()==GameVersion::JP?0x991c:0x9624]),0};
  for(unsigned i=0;i<256;++i){const auto word=o.word(0x200+i*2);r.colors[i]={std::uint8_t(word&31),std::uint8_t(word>>5&31),std::uint8_t(word>>10&31)};
    if(i<32)r.window_palette[i]=std::uint16_t(word);}
  r.counter=std::uint16_t(o.word(0xa5));r.automatic=std::uint16_t(o.word(l.count+1));r.count=o.bus.work_ram[l.count];
  r.flavor=o.bus.work_ram[l.flavor];r.disabled=std::uint16_t(o.word(l.disabled));r.cache=std::uint16_t(o.word(l.cache));return r;
}
StatusOwners status_owners(const StatusNative&n,const SourceMeterRollerEntry*entry) {
  StatusOwners r;r.physical=physical_owners(n.world,&n.world.random,n.work.get(),n.physical.get(),*n.runtime);
  // This fixture's Runtime/NMI borrow its unique palette, not World's unused
  // palette/publisher. Snapshot only surviving selected actual owners.
  r.physical.staged_palette={};r.physical.displayed_palette={};r.physical.palette=0;
  if(n.palette){r.physical.palette=n.palette->upload_mode;for(unsigned i=0;i<256;++i){const auto s=n.palette->staged_color(i),d=n.palette->displayed_palette(i/16)[i%16];
    r.physical.staged_palette[i*2]=std::uint8_t(s);r.physical.staged_palette[i*2+1]=std::uint8_t(s>>8);
    r.physical.displayed_palette[i*2]=std::uint8_t(d);r.physical.displayed_palette[i*2+1]=std::uint8_t(d>>8);}}
  if(n.party){r.rows=party_bytes(saves::capture_party(*n.party,n.seed));r.rows[1]=n.world.clock.flavor;r.order=n.party->party_order;r.controlled=n.party->controlled_order;r.display=n.party->display_order;r.count=n.party->controlled_count;}
  if(entry)std::copy(entry->page().begin(),entry->page().end(),r.page.begin());
  if(n.meters){const auto&s=n.meters->state();r.meters={s.render,s.drawn_mask,s.selected_phase,s.area_dirty,s.upload,0};}
  if(n.windows)r.window_palette=n.windows->palette();
  r.colors=n.world.scene_colors;
  if(n.counter)r.counter=n.counter->memcpy_words_left;
  if(n.control)r.automatic=n.control->automatic_mode;
  r.flavor=n.world.clock.flavor;r.disabled=n.world.clock.disabled_transitions;r.cache=n.world.clock.last_controlled_status;return r;
}
void same_status(StatusOriginal&o,const StatusNative&n,const SourceMeterRollerEntry&entry,const char*where) {
  const auto expected=status_owners(o),actual=status_owners(n,&entry);
  if(actual!=expected){std::ostringstream out;out<<where<<" entry="<<std::hex<<o.instruction_entry<<" PC="<<o.cpu.program_counter<<std::dec
    <<" atom="<<o.foreground<<" clocks="<<actual.physical.clocks<<'/'<<expected.physical.clocks
    <<" rows="<<(actual.rows==expected.rows)<<" lists="<<(actual.order==expected.order&&actual.controlled==expected.controlled&&actual.display==expected.display)
    <<" page="<<(actual.page==expected.page)<<" counter="<<actual.counter<<'/'<<expected.counter<<" cache="<<actual.cache<<'/'<<expected.cache
    <<" palette="<<(actual.physical.staged_palette==expected.physical.staged_palette)<<" displayed="<<(actual.physical.displayed_palette==expected.physical.displayed_palette)
    <<" projections="<<(actual.window_palette==expected.window_palette&&actual.colors==expected.colors)<<" physical="<<(actual.physical==expected.physical)
    <<" meter="<<(actual.meters==expected.meters);require(false,out.str());}++checks;
}
struct StatusCase {
  bool fast=true,enabled=true;unsigned budget=1,flags=4,line=40,horizontal=100;
  unsigned count=4,member=0,status=1,cache=0,flavor=1,disabled=0,upload=0;
  std::uint16_t counter=0xbeef,automatic=0x81a7;
};
saves::PersistedState status_seed(GameVersion version,const StatusCase&c) {
  auto s=meter_seed(version,MeterCase{});s.game.controlled_count=std::uint8_t(c.count);
  s.game.controlled_order={5,2,4,1,3,0};s.game.controlled_order[c.count-1]=std::uint8_t(c.member);
  for(unsigned i=0;i<6;++i){s.characters[i].values.afflictions[0]=std::uint8_t(i*31+7);s.characters[i].values.afflictions[1]=std::uint8_t(0xb0+i);}
  s.characters[c.member].values.afflictions[0]=std::uint8_t(c.status);return s;
}
void prepare_status(StatusOriginal&o,StatusNative&n,SourceMeterRollerEntry&entry,const StatusCase&c) {
  const auto l=status_layout(o.bus.game_version());const auto ml=meter_layout(o.bus.game_version());auto&w=n.world;
  const auto original_seed=status_seed(o.bus.game_version(),c),native_seed=status_seed(n.party->version(),c);n.seed=native_seed;saves::restore_party(native_seed,*n.party);
  const auto rows=party_bytes(original_seed);std::copy(rows.begin(),rows.end(),o.bus.work_ram.begin()+ml.rows-2);
  std::copy(original_seed.game.party_order.begin(),original_seed.game.party_order.end(),o.bus.work_ram.begin()+ml.order);
  std::copy(original_seed.game.controlled_order.begin(),original_seed.game.controlled_order.end(),o.bus.work_ram.begin()+l.order);
  std::copy(original_seed.game.display_order.begin(),original_seed.game.display_order.end(),o.bus.work_ram.begin()+(o.bus.game_version()==GameVersion::JP?0x9b3c:0x988b));
  o.bus.work_ram[l.count]=std::uint8_t(c.count);n.control->automatic_mode=c.automatic;o.put(l.count+1,c.automatic);
  w.clock.disabled_transitions=std::uint16_t(c.disabled);o.put(l.disabled,c.disabled);w.clock.last_controlled_status=std::uint16_t(c.cache);o.put(l.cache,c.cache);
  w.clock.flavor=std::uint8_t(c.flavor);o.bus.work_ram[l.flavor]=std::uint8_t(c.flavor);
  n.counter->memcpy_words_left=c.counter;o.put(0xa5,c.counter);const auto page=declared_meter_page();entry.set_page(page);std::copy(page.begin(),page.end(),o.bus.work_ram.begin()+0x1d00);
  auto&m=n.meters->state();m.render=0;m.drawn_mask=0;m.selected_phase=0;m.area_dirty=0;m.upload=1;
  const unsigned render=o.bus.game_version()==GameVersion::JP?0x8d07:0x89c9,drawn=o.bus.game_version()==GameVersion::JP?0x993f:0x9647;
  o.bus.work_ram[render]=0;o.bus.work_ram[render+1]=0;o.bus.work_ram[drawn]=0;o.bus.work_ram[o.bus.game_version()==GameVersion::JP?0x991c:0x9624]=1;
  // Idle semantic native publication and independently declared original
  // immutable palette inputs establish each host's own first32 cache.
  n.windows->publish_palette(1);const auto image=o.bus.cartridge_image();
  for(unsigned i=0;i<32;++i)o.put(0x200+i*2,image[(l.colors&0x3fffff)+i*2]|unsigned(image[(l.colors&0x3fffff)+i*2+1])<<8);
  std::array<std::uint16_t,224> tail{};for(unsigned i=0;i<tail.size();++i)tail[i]=std::uint16_t(0x8000|(((i+32)*113+57)&0x7fff));
  n.presentation->publish_scene_palette_range(32,tail,24);for(unsigned i=0;i<tail.size();++i)o.put(0x240+i*2,tail[i]);
  for(unsigned i=0;i<256;++i){const auto v=std::uint16_t((i*53+71)&0x7fff);n.palette->displayed[i/16][i%16]=v;o.bus.palette_ram[i*2]=std::uint8_t(v);o.bus.palette_ram[i*2+1]=std::uint8_t(v>>8);}
  n.palette->upload_mode=std::uint8_t(c.upload);o.bus.work_ram[0x30]=std::uint8_t(c.upload);
  o.reset_seed();o.excluded_window_random();o.prior_math(0x97,0xc3);w.peripherals.divide_word(0x9137,0x2b);w.peripherals.multiply_byte(0x97,0xc3);for(unsigned i=0;i<16;++i)n.work->retire_source_work({2,1,0,0});
  w.fade.force_blank(true);
  require(w.fade.state()==WorldDisplayFadeState{0x80,0,0,0},"Native blank producer left undeclared fade entry facts");
  o.bus.work_ram[0xd]=0x80;o.bus.work_ram[0x28]=0;o.bus.work_ram[0x29]=0;o.bus.work_ram[0x2a]=0;
  w.clock.frame_counter=0xfc;o.bus.work_ram[2]=0xfc;w.clock.new_frame_started=0x7f;o.bus.work_ram[0x2b]=0x7f;
  w.session.elapsed_timer=0x1234ffff;o.put(0xa7,0xffff);o.put(0xa9,0x1234);
  w.input.state={0x3000,0x8400};w.input.held={0x1234,0x4321};w.input.pressed={0xabcd,0xefab};w.input.repeat_timer={9,7};w.input.player_activity=0xffff;
  for(unsigned i=0;i<2;++i){o.put(0x65+i*2,w.input.state[i]);o.put(0x69+i*2,w.input.held[i]);o.put(0x6d+i*2,w.input.pressed[i]);o.put(0x71+i*2,w.input.repeat_timer[i]);}
  o.put(o.bus.game_version()==GameVersion::JP?0xa2a:0xa34,w.input.player_activity);o.put(0x20,0x851b);
  require(w.display.transient_memory().base_address()==0x2000&&w.display.transient_memory().current_address()==0x2000,
    "Native excluded closed-window preparation changed declared cold heap entry");
  o.put(0xa3,0x2000);o.put(0xa1,0x2000);w.display.set_source_dma_transfer_flag(0xbeef);o.put(o.bus.game_version()==GameVersion::JP?0xa031:0x9e2b,0xbeef);
  require(w.audio.sound_queue_start()==0&&w.audio.sound_queue_end()==0,"Native audio producer left undeclared sound queue entry");
  o.bus.work_ram[o.bus.game_version()==GameVersion::JP?0xc9:0xcb]=0;o.bus.work_ram[o.bus.game_version()==GameVersion::JP?0xc8:0xca]=0;
  const auto target=std::uint64_t(262*1364)+c.line*1364+c.horizontal;o.cpu.program_counter=0xc0ff00;
  while(o.bus.master_clocks()<target){o.cpu.execute_instruction<0xea>(0,1);n.work->retire_source_work({2,1,0,0});}
  require(o.bus.master_clocks()==n.work->master_clocks(),"Independent status warmup physical epochs differ");
  n.physical->nmi_enabled(c.enabled);w.clock.interrupt_mask=std::uint8_t(c.enabled?0x80:0);w.clock.retained_hardware_interrupt_mask=w.clock.interrupt_mask;o.bus.write_byte(0x4200,w.clock.interrupt_mask);o.bus.work_ram[0x1e]=w.clock.interrupt_mask;
  o.cpu.program_counter=l.suffix;o.cpu.status_register=std::uint8_t(c.flags);o.cpu.direct_page=0x1e00;o.cpu.data_bank=0x7e;o.cpu.stack_pointer=0x1fff;
  o.cpu.accumulator=0x1234;o.cpu.x_index=0x4567;o.cpu.y_index=0x89ab;
}

struct StatusWitnesses {
  std::set<unsigned> sites,partial_words;bool previous_full_partial{};
  void observe(const StatusOriginal&o) {
    sites.insert(o.interrupted_sites.begin(),o.interrupted_sites.end());
    for(const auto&sample:o.interrupt_images){if(sample.words&&sample.words<32)partial_words.insert(sample.words);
      if(sample.mode==24&&sample.words&&sample.words<32)previous_full_partial=true;}
  }
};
void status_case(const GameAssets&a,const session::Content&content,const StatusCase&c,StatusWitnesses&witness) {
  context=a.title+" STATUS fast="+std::to_string(c.fast)+" budget="+std::to_string(c.budget)+" count="+std::to_string(c.count)+
    " member="+std::to_string(c.member)+" status="+std::to_string(c.status)+" cache="+std::to_string(c.cache)+
    " flavor="+std::to_string(c.flavor)+" upload="+std::to_string(c.upload)+" phase="+std::to_string(c.line)+":"+std::to_string(c.horizontal);
  StatusOriginal o(a,c.fast);StatusNative n(a,content,c.fast);SourceMeterRollerEntry entry;
  const auto before_prefix=status_owners(n,&entry);auto expected_random=n.world.random;next_random(expected_random);
  auto operation=n.suspension(status_context(c.flags));
  require(n.world.random==expected_random&&n.work->master_clocks()==before_prefix.physical.clocks&&
    n.world.peripherals.source_math_state()==before_prefix.physical.math&&n.world.clock.input_polls==before_prefix.physical.polls&&
    !n.party->source_meter_active()&&!n.palette->source_active()&&!n.counter->source_active(),
    "Excluded actual status prefix consumed source clocks/math/input or preclaimed component owners");
  prepare_status(o,n,entry,c);o.audit_status();same_status(o,n,entry,"independently prepared authentic status suffix");
  const auto initial=status_owners(n,&entry);
  const auto audio=n.audio.master_clocks(),refresh=n.work->refresh_pauses();
  const auto picture=n.runtime->scene().frame();auto leaf=operation->begin_source_meter_status(*n.work,status_context(c.flags),
    SourceMeterStatusCall(entry,*n.control,*n.counter,*n.palette));const auto claimed=status_owners(n,&entry);
  require(claimed==initial&&!leaf->advance(0)&&!leaf->retired_instructions()&&status_owners(n,&entry)==claimed&&n.runtime->scene().frame()==picture,
    "Status factory/zero budget changed actual owners, cache or physical clocks");
  if(c.budget==1){while(!leaf->complete()){o.instruction_status();leaf->advance(1);same_status(o,n,entry,"every literal status/palette/counter retirement");
      require(leaf->registers()==SourceMeterStatusRegisters{std::uint16_t(o.cpu.accumulator),std::uint16_t(o.cpu.x_index),std::uint16_t(o.cpu.y_index),o.cpu.direct_page,o.cpu.stack_pointer,o.cpu.status_register},
        "Status A/X/Y/P/D/S differs at actual retirement");require(leaf->retired_instructions()==o.foreground,"Status duplicated or omitted a real caller/helper atom");}}
  else{while(o.cpu.program_counter!=status_layout(a.version).last)o.instruction_status();while(!leaf->advance(c.budget)){}same_status(o,n,entry,"large-budget true status suffix boundary");}
  require(o.cpu.program_counter==status_layout(a.version).last&&o.cpu.stack_pointer==0x1fff&&o.cpu.direct_page==0x1e00&&
    o.cpu.data_bank==0x7e&&!o.cpu.emulation_mode&&!(o.cpu.status_register&0x30)&&leaf->registers()==SourceMeterStatusRegisters{
      std::uint16_t(o.cpu.accumulator),std::uint16_t(o.cpu.x_index),std::uint16_t(o.cpu.y_index),o.cpu.direct_page,o.cpu.stack_pointer,o.cpu.status_register}&&leaf->retired_instructions()==o.foreground,
    "Status lost actual final caller, register widths, stack or restored D/DB");
  const bool changed=!c.disabled&&c.cache!=(c.status==1||c.status==2?1u:0u);
  require(o.copy_words==(changed?32u:0u)&&o.counter_decrements==(changed?33u:0u)&&o.palette_zeroes==(changed?1u:0u)&&o.upload_stores==(changed?1u:0u)&&
    o.word(0xa5)==(changed?0xffffu:c.counter),"Original status did not execute exactly one real64-byte copy/33DEC/zero/upload or retain skipped counter");
  require(n.audio.master_clocks()-audio==n.work->master_clocks()-initial.physical.clocks&&n.work->master_clocks()-initial.physical.clocks==o.bus.master_clocks()-initial.physical.clocks&&n.work->refresh_pauses()-refresh==o.refreshes(),
    "Status independent audio/useful/DMA/refresh elapsed receipts differ");
  require(n.world.clock.input_polls==initial.physical.polls&&n.world.random==expected_random&&n.world.peripherals.source_math_state()==initial.physical.math,
    "Status consumed input/RAND or changed completed hardware math");
  const auto complete=status_owners(n,&entry);operation->respond_source_meter_status(*leaf);
  require(status_owners(n,&entry)==complete&&!n.party->source_meter_active()&&!n.control->source_meter_active()&&!n.counter->source_active()&&!n.palette->source_active(),
    "Status acknowledgement repeated semantic palette work or retained an actual-owner lease");
  bool duplicate{},stale{};try{operation->respond_source_meter_status(*leaf);}catch(const std::logic_error&){duplicate=true;}
  try{leaf->advance(1);}catch(const std::logic_error&){stale=true;}
  require(duplicate&&stale&&status_owners(n,&entry)==complete,"Consumed status receipt changed actual effects or clocks");witness.observe(o);
}
struct StatusFrame {unsigned width{},height{};std::vector<std::uint8_t> pixels,priority;bool operator==(const StatusFrame&)const=default;};
StatusFrame status_frame(const std::shared_ptr<const dialogue::TextFrame>&f){require(bool(f),"Actual status host lost frame");return {f->width,f->height,f->pixels,f->priority};}
auto status_policy(const dialogue::TextOutput&out){const auto&p=out.policy();return std::tuple{p.instant,p.character_padding,p.text_speed,p.sound_mode,p.prompt_mode,p.allow_overflow};}
auto status_control(const WorldControlState*c){std::array<std::uint32_t,20> fields{};std::optional<CameraTarget> focus;
  if(c){fields={c->x_fraction,c->y_fraction,c->moved_this_tick,c->automatic_mode,c->trodden_surface_flags,c->camera_moved,c->automatic_ticks,c->automatic_restore_style,
    c->direction_interval_ticks,c->direction_interval_previous_mode,c->bicycle_turn_frames,c->encounter.mode,c->encounter.special_defeat,c->encounter.item_dropped,c->encounter.money_gained,c->encounter.experience_gained,
    unsigned(bool(c->camera_focus)),0,0,0};focus=c->camera_focus;}return std::pair{fields,focus};}
struct StatusSnapshot {
  StatusOwners owners;std::vector<std::uint8_t> other_party;
  std::array<std::uint32_t,20> control{};std::optional<CameraTarget> focus;
  StatusFrame scene,published,tail,atlas;dialogue::PromptState prompt;WorldEncounterVisualState visual;
  decltype(status_policy(std::declval<const dialogue::TextOutput&>())) policy;
  std::uint64_t audio{},pending{};std::array<bool,4> claims{};
  bool operator==(const StatusSnapshot&)const=default;
};
struct StatusFixture {
  StatusNative native;std::unique_ptr<SourceMeterRollerEntry> entry=std::make_unique<SourceMeterRollerEntry>();
  std::unique_ptr<WorldRuntime::Operation> operation;
  StatusFixture(const GameAssets&a,const session::Content&content,bool suspend=true,bool interrupt=true,bool physical=true)
    :native(a,content,true,interrupt,physical){entry->set_page(declared_meter_page());native.world.fade.force_blank(true);
    native.physical->nmi_enabled(true);native.world.clock.interrupt_mask=0x80;native.world.clock.retained_hardware_interrupt_mask=0x80;
    if(suspend)operation=native.suspension();
    native.world.clock.disabled_transitions=0;
    native.party->controlled_count=4;native.party->controlled_order={5,2,4,1,3,0};native.party->character(2).afflictions[0]=1;native.world.clock.last_controlled_status=0;}
  std::unique_ptr<SourceMeterStatus> begin(SourceMeterStatusContext c=status_context()) {
    return operation->begin_source_meter_status(*native.work,c,SourceMeterStatusCall(*entry,*native.control,*native.counter,*native.palette));}
};
StatusSnapshot status_snapshot(const StatusFixture&f){const auto&n=f.native;StatusSnapshot r;r.owners=status_owners(n,f.entry.get());r.other_party=party_other(n.party.get());
  const auto control=status_control(n.control.get());r.control=control.first;r.focus=control.second;r.policy=status_policy(n.output);
  if(n.windows){r.scene=status_frame(n.windows->scene());r.published=status_frame(n.windows->frame());r.tail=status_frame(n.windows->tail_frame());r.prompt=n.windows->prompt_state();r.pending=n.windows->pending_publications();}
  if(n.graphics)r.atlas=status_frame(n.graphics->frame());
  r.audio=n.audio.master_clocks();r.visual=n.world.visual;
  r.claims={n.party&&n.party->source_meter_active(),n.control&&n.control->source_meter_active(),n.counter&&n.counter->source_active(),n.palette&&n.palette->source_active()};return r;}
void status_rejection(const GameAssets&a,const session::Content&content,unsigned kind) {
  context=a.title+" STATUS pure helper admission="+std::to_string(kind);StatusFixture f(a,content);auto c=status_context();
  if(kind==0)c.native_mode=false;
  if(kind==1)c.low_wram_stack=false;
  if(kind==2)c.decimal_clear=false;
  if(kind==3)c.program_bank=0xc0;
  if(kind==4)c.data_bank=0x7f;
  if(kind==5)c.direct_page=0x1d12;
  if(kind==6)c.stack_pointer=0xffff;
  if(kind==7)c.caller_status|=8;
  if(kind==8)c.caller_status|=0x10;
  if(kind==9)c.caller_status|=0x20;
  if(kind==10){f.native.world.clock.interrupt_mask=0x90;f.native.world.clock.retained_hardware_interrupt_mask=0x90;}
  if(kind==11){for(unsigned i=0;i<257;++i)f.native.world.frame_display.request_retained_screen();require(f.native.world.frame_display.pending_display_id()==3,"Retained request producer missed invalid3");}
  if(kind==12)f.native.windows->queue_scene();
  if(kind==13)f.native.world.display.queue_frame(0);
  if(kind==14)f.native.party->controlled_count=0;
  if(kind==15)f.native.party->controlled_count=6;
  if(kind==16)f.native.party->controlled_order[3]=6;
  if(kind==17)f.native.world.clock.flavor=0;
  if(kind==18)f.native.world.clock.flavor=6;
  if(kind==19)f.native.palette->upload_mode=1;
  const auto before=status_snapshot(f);const auto picture=f.native.runtime->scene().frame();const auto failed=f.native.runtime->failed();bool rejected{};
  try{auto unused=f.begin(c);}catch(const std::logic_error&){rejected=true;}
  require(rejected&&status_snapshot(f)==before&&f.native.runtime->scene().frame()==picture&&f.native.runtime->failed()==failed,
    "Unsupported status context/owner/path changed effects, clock, lease or preexisting failure before rejection");
}
void status_public_rejection(const GameAssets&a,const session::Content&content,unsigned kind) {
  context=a.title+" STATUS pure prefix admission="+std::to_string(kind);
  if(kind==2) {
    // The real world callback needs the actual fully bound transitions graph.
    // The replacement component Runtime intentionally has no such borrower.
    CopyCounterState counter(0xbeef);ScreenNative native(a,content,true);auto&w=native.world;
    w.fade.force_blank(true);native.physical->nmi_enabled(true);w.clock.interrupt_mask=0x80;w.clock.retained_hardware_interrupt_mask=0x80;
    w.clock.flavor=1;w.clock.disabled_transitions=1;w.party.controlled_count=4;w.party.controlled_order={5,2,4,1,3,0};
    w.runtime->restore_world_interrupt_callback();
    const auto snapshot=[&] {
      return std::tuple{physical_owners(w,&w.random,native.work.get(),native.physical.get(),*w.runtime),
        party_bytes(saves::capture_party(w.party,meter_seed(a.version,MeterCase{}))),party_other(&w.party),status_control(&w.control),
        status_policy(w.output),status_frame(w.windows.scene()),status_frame(w.windows.frame()),status_frame(w.windows.tail_frame()),
        status_frame(w.window_graphics->frame()),w.windows.prompt_state(),w.windows.pending_publications(),w.windows.palette(),
        w.scene_colors,w.visual,counter.memcpy_words_left,counter.source_active(),w.party.source_meter_active(),w.control.source_meter_active(),
        w.palette.source_active(),native.audio.master_clocks()};
    };
    const auto before=snapshot();const auto picture=w.runtime->scene().frame();const auto failed=w.runtime->failed();bool rejected{};
    try{auto unused=w.runtime->begin_source_meter_status_window_tick(*native.work,status_context(),w.control,counter,w.palette);}catch(const std::logic_error&){rejected=true;}
    require(rejected&&snapshot()==before&&w.runtime->scene().frame()==picture&&w.runtime->failed()==failed,
      "Actual world callback acquired a status parent/counter or changed fully bound owners before rejection");
    return;
  }
  StatusFixture f(a,content,false,kind!=0,kind!=1);auto c=status_context();
  if(kind==3)f.native.output.policy().instant=true;
  if(kind==4&&a.version==GameVersion::US)f.native.windows->menu_state().early_tick_exit=1;
  if(kind==5)f.native.party->controlled_count=0;
  if(kind==6)f.native.world.clock.flavor=0;
  if(kind==7)f.native.palette->upload_mode=3;
  if(kind==8)f.native.windows->queue_scene();
  if(kind==9)f.native.world.display.queue_frame(0);
  const auto before=status_snapshot(f);const auto picture=f.native.runtime->scene().frame();const auto failed=f.native.runtime->failed();bool rejected{};
  try{auto unused=f.native.runtime->begin_source_meter_status_window_tick(*f.native.work,c,*f.native.control,*f.native.counter,*f.native.palette);}catch(const std::logic_error&){rejected=true;}
  require(rejected&&status_snapshot(f)==before&&f.native.runtime->scene().frame()==picture&&f.native.runtime->failed()==failed,
    "Unsupported status prefix acquired counter/parent or changed its actual owners before rejection");
}
void status_receipts(const GameAssets&a,const session::Content&content) {
  context=a.title+" STATUS exact leases, semantic bypass, stale receipts";StatusFixture f(a,content),foreign(a,content);auto leaf=f.begin();
  const auto before=status_snapshot(f),other=status_snapshot(foreign);unsigned rejected{};
  const auto gate=[&](auto action){try{action();}catch(const std::logic_error&){++rejected;}};
  gate([&]{f.begin();});gate([&]{f.operation->respond_source_meter_status(*leaf);});gate([&]{foreign.operation->respond_source_meter_status(*leaf);});
  gate([&]{f.operation->complete_frame({0,0});});gate([&]{f.operation->complete_publication();});gate([&]{f.operation->respond_actor();});
  gate([&]{party::advance_meters(*f.native.party,0,{1,0,0,0,0});});gate([&]{f.entry->set_page(declared_meter_page());});
  gate([&]{f.native.windows->publish_palette(1);});gate([&]{f.native.windows->animate_palette(1,0);});
  gate([&]{f.native.windows->queue_scene();});gate([&]{f.native.windows->queue_meter_area();});gate([&]{f.native.presentation->fill_palette(0);});
  WorldControlState copy=*f.native.control;gate([&]{*f.native.control=copy;});
  require(rejected==14&&status_snapshot(f)==before&&status_snapshot(foreign)==other,"Active status leases allowed semantic/window/control work or changed owners");
  while(!leaf->advance(1)){}const auto done=status_snapshot(f);f.operation->respond_source_meter_status(*leaf);auto released=done;released.claims={};
  bool duplicate{},stale{};try{f.operation->respond_source_meter_status(*leaf);}catch(const std::logic_error&){duplicate=true;}try{leaf->advance(1);}catch(const std::logic_error&){stale=true;}
  require(duplicate&&stale&&status_snapshot(f)==released,"Consumed status leaf replayed effects or retained exact owner claims");
  std::array<std::uint8_t,256> page{};std::copy(f.entry->page().begin(),f.entry->page().end(),page.begin());f.entry->set_page(page);*f.native.control=copy;
  require(status_snapshot(f)==released,"Exact status response did not safely release page/control claims");
}
void status_abandon(const GameAssets&a,const session::Content&content,bool parent,bool complete) {
  context=a.title+" STATUS abandoned parent="+std::to_string(parent)+" complete="+std::to_string(complete);StatusFixture f(a,content);auto leaf=f.begin();
  if(complete){while(!leaf->advance(1)){}}else leaf->advance(1);
  if(parent){f.operation.reset();const auto before=status_snapshot(f);bool rejected{};try{leaf->advance(1);}catch(const std::logic_error&){rejected=true;}
    require(rejected&&status_snapshot(f)==before&&f.native.runtime->failed(),"Abandoned status parent kept partial/completed work alive");}
  else{leaf.reset();const auto before=status_snapshot(f);bool rejected{};try{f.operation->complete_frame({0,0});}catch(const std::logic_error&){rejected=true;}
    require(rejected&&status_snapshot(f)==before&&f.native.runtime->failed(),"Abandoned status leaf admitted generic completion");}
}
void status_owner_loss(const GameAssets&a,const session::Content&content,unsigned owner,unsigned stage) {
  context=a.title+" STATUS actual owner loss="+std::to_string(owner)+" stage="+std::to_string(stage);StatusFixture f(a,content);
  auto call=SourceMeterStatusCall(*f.entry,*f.native.control,*f.native.counter,*f.native.palette);std::unique_ptr<SourceMeterStatus> leaf;
  if(stage){leaf=f.begin();if(stage==2){while(!leaf->advance(1)){}}else leaf->advance(1);}
  if(owner==0)f.native.party.reset();
  if(owner==1)f.native.meters.reset();
  if(owner==2)f.entry.reset();
  if(owner==3)f.native.control.reset();
  if(owner==4)f.native.counter.reset();
  if(owner==5)f.native.palette.reset();
  if(owner==6)f.native.presentation.reset();
  if(owner==7)f.native.windows.reset();
  if(owner==8)f.native.nmi.reset();
  if(owner==9)f.native.work.reset();
  if(owner==10)f.native.physical.reset();
  const auto before=status_snapshot(f);const bool failed=f.native.runtime->failed();bool rejected{};
  try{if(!stage){auto unused=f.operation->begin_source_meter_status(*f.native.work,status_context(),call);}
    else if(stage==2)f.operation->respond_source_meter_status(*leaf);else leaf->advance(1);}catch(const std::logic_error&){rejected=true;}
  require(rejected&&status_snapshot(f)==before&&(!stage?f.native.runtime->failed()==failed:true),
    "Status accessed an expired owner or advanced effects after actual loss");
}
void status_foreign(const GameAssets&a,const session::Content&content,unsigned owner) {
  context=a.title+" STATUS foreign identity="+std::to_string(owner);StatusFixture f(a,content),other(a,content);
  const auto before=status_snapshot(f),foreign=status_snapshot(other);bool rejected{};
  try{auto call=SourceMeterStatusCall(*f.entry,owner==1?*other.native.control:*f.native.control,
      owner==2?*other.native.counter:*f.native.counter,owner==3?*other.native.palette:*f.native.palette);
    auto leaf=f.operation->begin_source_meter_status(owner==0?*other.native.work:*f.native.work,status_context(),call);}catch(const std::logic_error&){rejected=true;}
  require(rejected&&status_snapshot(f)==before&&status_snapshot(other)==foreign,"Foreign Work/control/counter/palette acquired a status lease or changed owners");
}
void status_counter_continuity(const GameAssets&a,const session::Content&content) {
  context=a.title+" STATUS true shared initializer counter";StatusFixture f(a,content,false);
  static_assert(std::is_same_v<CopyCounterState,cutscenes::ending::InitializerWorkState>);
  const cutscenes::ending::Resources resources(a.image,a.version);std::array<std::uint8_t,2048> text{};
  cutscenes::ending::InitializerWork initializer(resources,*f.native.work,*f.native.counter,*f.native.palette,text,f.native.world.actors,f.native.world.display);
  const auto before=status_snapshot(f);require(f.native.work->uses_copy_counter(*f.native.counter)&&!initializer.failed(),"Initializer did not bind the real global counter identity");
  f.operation=f.native.suspension();require(f.native.work->uses_copy_counter(*f.native.counter)&&f.native.counter->memcpy_words_left==before.owners.counter,
    "Status prefix replaced/reset the actual initializer counter");
  auto leaf=f.begin();while(!leaf->advance(1)){}f.operation->respond_source_meter_status(*leaf);
  require(f.native.counter->memcpy_words_left==0xffff&&f.native.work->uses_copy_counter(*f.native.counter)&&!initializer.failed(),
    "Initializer/status did not retain one actual global copy-counter word");
}

void status_old_modes(const GameAssets&a,const session::Content&content,unsigned mode) {
  context=a.title+" STATUS old explicit mode compatibility="+std::to_string(mode);StatusFixture f(a,content,false);
  const auto counter=f.native.counter->memcpy_words_left,cache=f.native.world.clock.last_controlled_status;
  if(mode==0){auto op=f.native.runtime->begin_source_random_window_tick(*f.native.work,{true,true,true,0xc0,0xc1,0x7e,4,0x1e00,0x1ffc,0x1234});
    require(op->advance(1)==dialogue::Progress::Suspended&&op->service()==SceneService::SourceRandom,"Old RAND opt-in changed its exact first suspension");}
  if(mode==1){auto op=f.native.runtime->begin_source_meter_window_tick(*f.native.work,meter_context());bool reached{};
    for(unsigned i=0;i<100;++i)if(op->advance(1)==dialogue::Progress::Suspended){reached=true;break;}
    require(reached&&op->service()==SceneService::SourceMeterRoller,"Old roller opt-in skipped its real pre-Roll suspension");}
  require(f.native.counter->memcpy_words_left==counter&&f.native.world.clock.last_controlled_status==cache&&!f.native.counter->source_active()&&!f.native.palette->source_active(),
    "Older opt-in executed status or claimed its new counter/palette");
}
void status_wrong_parent(const GameAssets&a,const session::Content&content) {
  context=a.title+" STATUS unrelated parent";StatusFixture f(a,content,false);f.operation=f.native.runtime->begin(TickKind::WorldFrame);bool reached{};
  for(unsigned i=0;i<100;++i)if(f.operation->advance(1)==dialogue::Progress::Suspended){reached=true;break;}
  require(reached&&f.operation->service()==SceneService::ScreenUpdate,"Real unrelated parent did not reach screen boundary");
  const auto before=status_snapshot(f);bool rejected{};try{auto leaf=f.begin();}catch(const std::logic_error&){rejected=true;}
  require(rejected&&status_snapshot(f)==before,"Unrelated actual parent acquired source status work");
}
unsigned status_regressions(const GameAssets&a,const session::Content&content) {
  unsigned calls{};
  for(unsigned kind=0;kind<20;++kind){status_rejection(a,content,kind);++calls;}
  for(unsigned kind=0;kind<10;++kind)if(kind!=4||a.version==GameVersion::US){status_public_rejection(a,content,kind);++calls;}
  status_receipts(a,content);++calls;
  for(bool parent:{false,true})for(bool complete:{false,true}){status_abandon(a,content,parent,complete);++calls;}
  for(unsigned owner=0;owner<11;++owner)for(unsigned stage=0;stage<3;++stage)if(owner!=9||stage){status_owner_loss(a,content,owner,stage);++calls;}
  for(unsigned owner=0;owner<4;++owner){status_foreign(a,content,owner);++calls;}
  status_counter_continuity(a,content);++calls;status_wrong_parent(a,content);++calls;
  for(unsigned mode=0;mode<2;++mode){status_old_modes(a,content,mode);++calls;}
  require(calls==(a.version==GameVersion::US?75u:74u),"Status concrete regression count differs");return calls;
}
StatusCase status_scenario(unsigned kind) {
  StatusCase c;c.member=kind%6;c.count=1+kind%5;c.flavor=1+kind%5;c.upload=std::array<unsigned,4>{0,8,16,24}[kind%4];
  if(kind==0){c.status=0;c.cache=1;c.flavor=5;}
  if(kind==1)c.status=1;
  if(kind==2)c.status=2;
  if(kind==3){c.status=0;c.cache=0;}
  if(kind==4){c.disabled=0x100;c.counter=0x7fff;}
  if(kind==5){c.disabled=1;c.counter=0xffff;}
  if(kind==6){c.status=1;c.cache=1;c.counter=0;}
  if(kind==7){c.status=2;c.cache=1;c.counter=0x8000;}
  if(kind==8){c.status=0xff;c.cache=1;}
  if(kind==9){c.status=0x80;c.cache=0xbeef;}
  if(kind==10){c.status=3;c.cache=0xffff;c.automatic=0xff00;}
  if(kind==11){c.status=0;c.cache=1;c.automatic=0x0081;}
  return c;
}
void status_witnesses(GameVersion v,const StatusWitnesses&w) {
  const bool jp=v==GameVersion::JP;const auto l=status_layout(v);
  const std::vector<unsigned> required{l.suffix,l.suffix+3,l.suffix+5,l.suffix+8,l.suffix+11,l.suffix+13,l.last,
    jp?0xc1fcadu:0xc1ff2eu,jp?0xc1fcc7u:0xc1ff44u,jp?0xc1fceau:0xc1ff67u,jp?0xc1fcedu:0xc1ff6au,
    jp?0xc45c3au:0xc47fa3u,jp?0xc45c70u:0xc47fd9u,jp?0xc45c7du:0xc47fe6u,
    jp?0xc45c60u:0xc47fc9u,jp?0xc45c92u:0xc47ffbu,l.copy,l.copy+3,l.copy+12,l.copy+14,l.copy+21,l.copy+24,l.copy+26,
    jp?0xc45c96u:0xc47fffu,0xc0856du,jp?0xc45ca0u:0xc48009u,jp?0xc45ca1u:0xc4800au};
  for(unsigned pc:required)require(w.sites.contains(pc),"Declared physical status sweep missed strict actual interruption PC="+std::to_string(pc));
  for(unsigned words:{1u,16u,31u})require(w.partial_words.contains(words),"Uniform sweep missed real first/middle/last partial-copy interruption");
  require(w.previous_full_partial,"Uniform sweep never consumed actual prior upload24 during a partially copied palette");
}
void run_status(const GameAssets&a,bool smoke) {
  const session::Content content(a.image,a.version);StatusWitnesses witness;unsigned cases{};
  for(bool fast:{false,true})for(unsigned budget:{1u,4096u})for(unsigned flags:{1u,4u,0x42u,0xc4u})for(unsigned kind=0;kind<(smoke?8u:12u);++kind){
    auto c=status_scenario(kind);c.fast=fast;c.budget=budget;c.flags=flags;status_case(a,content,c,witness);++cases;}
  const auto regressions=status_regressions(a,content);
  if(!smoke){
    for(bool fast:{false,true})for(unsigned budget:{1u,4096u})for(unsigned count=1;count<=5;++count)for(unsigned member=0;member<6;++member)
      for(unsigned flavor=1;flavor<=5;++flavor)for(unsigned status:{0u,1u,2u,0xffu})for(unsigned cache:{0u,1u,0xbeefu}){
        StatusCase c;c.fast=fast;c.budget=budget;c.count=count;c.member=member;c.flavor=flavor;c.status=status;c.cache=cache;
        c.upload=std::array<unsigned,4>{0,8,16,24}[(count+member+flavor+status+cache)%4];status_case(a,content,c,witness);++cases;}
    for(bool fast:{false,true})for(unsigned budget:{1u,4096u})for(unsigned kind=0;kind<4;++kind){auto c=status_scenario(kind);c.fast=fast;c.budget=budget;c.enabled=false;c.line=224;c.horizontal=1300;status_case(a,content,c,witness);++cases;}
    // Independent literal bound: foreground<=11166 with refresh; default
    // OAM+prior512-byte palette NMI and timer carry<=13976; combined25142.
    // Lines216..224 reserve12240 before225; complete215 adds a no-NMI case.
    // Uniform16-clock slots are declared from that bound, never fitted to an
    // output or witness. Missing source witnesses remain an actual failure.
    for(bool fast:{false,true})for(unsigned kind=0;kind<5;++kind)for(unsigned line=215;line<=224;++line)for(unsigned h=0;h<1364;h+=16){
      auto c=status_scenario(kind);c.fast=fast;c.line=line;c.horizontal=h;c.upload=24;status_case(a,content,c,witness);++cases;}
    // Genuine225:0 hardware enable supplies a pending initial interrupt.
    // Preserve the complete source-derived grid and every strict witness.
    for(bool fast:{false,true})for(unsigned kind=0;kind<5;++kind){auto c=status_scenario(kind);c.fast=fast;c.line=225;c.horizontal=0;c.upload=24;status_case(a,content,c,witness);++cases;}
    status_witnesses(a.version,witness);
  }
  require(cases==(smoke?128u:16018u),"Concrete status composition matrix count differs");
  std::cout<<"PASS "<<a.title<<" original status/palette compositions="<<cases<<" regressions="<<regressions<<" checks="<<checks<<" sites="<<witness.sites.size()<<'\n';
}
} // namespace
int main(int argc,char**argv){try{
  if(argc<2)return 77;
  const bool smoke=std::string(argv[1])=="--meter-status-smoke";
  if(smoke&&argc<3)return 77;
  for(int arg=smoke?2:1;arg<argc;++arg)run_status(load_game_assets(argv[arg],asset_profiles()),smoke);
  std::cout<<"PASS independent original status/palette checks="<<checks<<'\n';
}catch(const std::exception&error){std::cerr<<context<<": "<<error.what()<<'\n';return 1;}}
