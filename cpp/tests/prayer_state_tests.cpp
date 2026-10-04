#include "eb/main_cpu_65816.hpp"
#include "eb/snapshot_archive.hpp"
#include "eb/snes_bus.hpp"
#include "generated_profile.hpp"
#include <algorithm>
#include <array>
#include <iostream>
#include <memory>
#include <stdexcept>
namespace {
void require(bool ok, const char *text) {
  if (!ok)
    throw std::runtime_error(text);
}
void run(eb::GameVersion version) {
  const bool jp = version == eb::GameVersion::JP;
  auto bus =
      std::make_unique<eb::SnesBus>(std::array<std::uint8_t, 1>{0}, version);
  eb::MainCpu65816 cpu(*bus);
  cpu.emulation_mode = false;
  cpu.status_register = 0;
  cpu.direct_page = 0x1e00;
  const unsigned psi = eb::source_profile(version).wram_psi_animation_state;
  std::array<std::uint8_t, 56> expected{};
  expected[0] = 9;
  expected[46] = 4;
  expected[54] = 31;
  std::copy(expected.begin(), expected.end(), bus->work_ram.begin() + psi);
  cpu.program_counter = jp ? 0xc2c334 : 0xc2c37a;
  cpu.step_instruction();
  // The same direct-page store as a deep overworld scratch frame. Without
  // preservation this becomes a blue palette target of 16,384 after return.
  cpu.direct_page = psi + 50;
  cpu.accumulator = 0x4000;
  cpu.execute_instruction<0x85>(4, 2);
  require(bus->work_ram[psi + 55] == 0x40,
          "Fixture failed to overwrite the battle scratch");
  eb::SnapshotArchive ar;
  ar(*bus);
  auto bytes = ar.release_bytes();
  auto restored =
      std::make_unique<eb::SnesBus>(std::array<std::uint8_t, 1>{0}, version);
  eb::SnapshotArchive load(bytes);
  load(*restored);
  load.finish();
  for (auto *candidate : {bus.get(), restored.get()}) {
    eb::MainCpu65816 returning(*candidate);
    returning.emulation_mode = false;
    returning.status_register = 0;
    returning.program_counter = jp ? 0xc2c1ca : 0xc2c21f;
    returning.step_instruction();
    require(std::equal(expected.begin(), expected.end(),
                       candidate->work_ram.begin() + psi),
            "Prayer return did not restore the suspended PSI owner");
    candidate->work_ram[psi + 55] = 0x40;
    returning.program_counter = jp ? 0xc2c383 : 0xc2c3c9;
    returning.step_instruction();
    require(std::equal(expected.begin(), expected.end(),
                       candidate->work_ram.begin() + psi),
            "Battle loading overwrote the prayer continuation");
    candidate->work_ram[psi + 55] = 0x55;
    returning.program_counter = jp ? 0xc2c1ca : 0xc2c21f;
    returning.step_instruction();
    require(candidate->work_ram[psi + 55] == 0x55,
            "Completed prayer retained ownership of unrelated battle loading");
  }
  eb::SnapshotArchive legacy(6);
  legacy(*bus);
  auto legacy_bytes = legacy.release_bytes();
  auto old =
      std::make_unique<eb::SnesBus>(std::array<std::uint8_t, 1>{0}, version);
  eb::SnapshotArchive old_load(legacy_bytes, 6);
  old_load(*old);
  old_load.finish();
  eb::MainCpu65816 old_return(*old);
  old_return.emulation_mode = false;
  old_return.status_register = 0;
  old_return.accumulator = 479;
  old_return.program_counter = jp ? 0xc2c1ca : 0xc2c21f;
  old_return.step_instruction();
  require(std::all_of(old->work_ram.begin() + psi,
                      old->work_ram.begin() + psi + 56,
                      [](auto v) { return !v; }),
          "An older mid-prayer snapshot resumed overwritten PSI scratch");
  const unsigned group_at = jp ? 0x4e12 : 0x4a8c;
  const unsigned battle = eb::source_profile(version).wram_battle_mode_flag;
  for (unsigned group :
       {475u, 476u, 477u, 478u, 479u, 480u, 481u, 482u, 483u}) {
    old->work_ram[group_at] = group;
    old->work_ram[group_at + 1] = group >> 8;
    old->work_ram[battle] = 1;
    require(old->flashing_context().giygas ==
                ((group >= 476 && group <= 480) || group == 483),
            "Giygas feedback used the wrong regional battle group");
    old->work_ram[battle] = 0;
    require(!old->flashing_context().giygas,
            "Giygas feedback stayed active in prayer text");
  }
}
} // namespace
int main() {
  try {
    run(eb::GameVersion::US);
    run(eb::GameVersion::JP);
    std::cout << "Regional prayer scratch ownership and mid-cutscene snapshot "
                 "checks passed\n";
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
