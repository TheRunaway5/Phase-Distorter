#include "native_save_test_data.hpp"
#include <iostream>
#include <limits>
#include <vector>

namespace {
using namespace eb::native::saves;
using namespace save_test;
template <class F> void rejects(F operation) {
  bool rejected = false;
  try {
    operation();
  } catch (const std::exception &) {
    rejected = true;
  }
  require(rejected, "Malformed native save input was accepted");
}
void check_region(eb::GameVersion version) {
  const auto l = layout(version);
  const auto input = fixture(version, 0x375f);
  SaveArchive a(version, input);
  require(a.version_matches(), "Regional version was not recognized");
  for (unsigned block = 0; block < 6; ++block)
    require(a.validate_block(block).valid(), "Fixture checksum invalid");
  require(copy(a.bytes()) == input, "Inspection mutated input");
  for (const unsigned checksum_at : {28u, 30u}) {
    auto isolated = input;
    isolated[checksum_at] ^= 1;
    const auto v = SaveArchive(version, isolated).validate_block(0);
    require(v.signature && v.additive_checksum == (checksum_at != 28) &&
                v.xor_checksum == (checksum_at != 30),
            "Checksums were not validated independently");
  }
  for (unsigned slot = 0; slot < 3; ++slot) {
    const auto s = a.load(slot);
    const auto *p = input.data() + slot * 2560 + 32;
    check_named_values(s, p);
    SaveArchive written(version, input);
    written.save(slot, s, s.game.elapsed_timer);
    auto expected = input;
    std::copy_n(p, l.persisted_bytes(),
                expected.data() + slot * 2560 + 1280 + 32);
    seal(expected.data() + slot * 2560 + 1280);
    require(
        copy(written.bytes()) == expected,
        "Decode/encode did not preserve the complete payload/header/padding");
    auto new_state = s;
    new_state.game.leader_x = 0xffff;
    new_state.game.leader_y = 0x8000;
    new_state.characters[5].values.current_hp = 1234;
    new_state.event_flags[127] = 0x81;
    written.save(slot, new_state, 0x87654321);
    const auto loaded = written.load(slot);
    require(loaded.game.leader_x == 0xffff && loaded.game.leader_y == 0x8000 &&
                loaded.characters[5].values.current_hp == 1234 &&
                loaded.event_flags[127] == 0x81 &&
                loaded.game.elapsed_timer == 0x87654321,
            "Typed updated state did not roundtrip");
    require(s.game.elapsed_timer == dword(p + l.game_bytes - 5),
            "Save modified caller state");
  }
  for (unsigned destination = 0; destination < 3; ++destination) {
    for (unsigned source = 0; source < 3; ++source) {
      SaveArchive copied(version, input);
      copied.copy_slot(destination, source);
      auto expected = input;
      std::copy_n(input.data() + source * 2560, 2560,
                  expected.data() + destination * 2560);
      require(copy(copied.bytes()) == expected,
              "Slot copy changed neighboring bytes or chose a different "
              "redundant copy");
    }
    SaveArchive erased(version, input);
    erased.erase_slot(destination);
    require(!erased.load(destination).occupied(),
            "Erased slot remained occupied");
    require(erased.validate_block(destination * 2).valid() &&
                erased.validate_block(destination * 2 + 1).valid(),
            "Erased copies not valid empty blocks");
    for (unsigned i = 0; i < input.size(); ++i)
      if (i < destination * 2560 || i >= (destination + 1) * 2560)
        require(erased.bytes()[i] == input[i],
                "Erase touched another slot/tail");
  }
  auto bad = input;
  bad[1200] ^= 1; // Padding participates in both source checksums.
  SaveArchive corrupt(version, bad);
  require(!corrupt.validate_block(0).additive_checksum &&
              !corrupt.validate_block(0).xor_checksum,
          "Padding not checksummed");
  rejects([&] { (void)corrupt.load(0); });
  const auto recovery = corrupt.repair_integrity();
  require(recovery.selected[0] == SelectedCopy::Backup && !recovery.lost_slots,
          "Backup was not selected");
  require(std::equal(corrupt.bytes().begin(), corrupt.bytes().begin() + 1280,
                     input.begin() + 1280),
          "Backup was not copied completely");
  bad[1280 + 1200] ^= 1;
  SaveArchive both_bad(version, bad);
  require(both_bad.repair_integrity().lost_slots == 1 &&
              !both_bad.load(0).occupied(),
          "Both bad copies did not erase/report loss");
  bad = input;
  bad[0] = 0;
  SaveArchive bad_signature(version, bad);
  const auto report = bad_signature.repair_integrity();
  require(report.signature_erased[0] &&
              report.selected[0] == SelectedCopy::Primary &&
              !report.lost_slots && !bad_signature.load(0).occupied(),
          "Signature erase must precede checksum-based backup recovery");
  require(std::equal(bad_signature.bytes().begin() + 1280,
                     bad_signature.bytes().begin() + 2560,
                     input.begin() + 1280),
          "Valid differing backup was unnecessarily synchronized");
  bad = input;
  bad[20] = 1;
  require(SaveArchive(version, bad).validate_block(0).signature,
          "Source does not compare the literal's terminator");
  bad = input;
  bad[27] ^= 1;
  require(SaveArchive(version, bad).validate_block(0).signature,
          "Uncompared signature tail was rejected");
  bad = input;
  put(bad.data() + 8190, 0);
  SaveArchive wrong_version(version, bad);
  rejects([&] { (void)wrong_version.load(0); });
  require(wrong_version.repair_integrity().version_reset &&
              copy(wrong_version.bytes()) ==
                  copy(SaveArchive::empty(version).bytes()),
          "Version reset was not exact");
  const auto before = copy(a.bytes());
  rejects([&] { a.save(3, a.load(0), 0); });
  rejects([&] { a.copy_slot(0, std::numeric_limits<unsigned>::max()); });
  rejects([&] { a.erase_slot(3); });
  rejects([&] { (void)a.validate_block(6); });
  auto wrong_region = a.load(0);
  wrong_region.version = version == eb::GameVersion::US ? eb::GameVersion::JP
                                                        : eb::GameVersion::US;
  rejects([&] { a.save(0, wrong_region, 0); });
  if (version == eb::GameVersion::JP) {
    auto malformed = a.load(0);
    malformed.characters[5].name[4] = 1;
    rejects([&] { a.save(0, malformed, 0); });
    malformed = a.load(0);
    malformed.game.favourite_thing[11] = 1;
    rejects([&] { a.save(0, malformed, 0); });
  }
  require(copy(a.bytes()) == before, "Rejected mutation changed archive");
  auto independent = a;
  independent.erase_slot(0);
  require(copy(a.bytes()) == before, "Copied archive shares mutable storage");
  for (auto size : {0u, 1u, 8191u, 8193u, 16384u}) {
    const std::vector<std::uint8_t> b(size);
    rejects([&] { SaveArchive invalid(version, b); });
  }
}
} // namespace
int main() {
  try {
    check_region(eb::GameVersion::US);
    check_region(eb::GameVersion::JP);
    rejects([] { (void)SaveArchive::empty(static_cast<eb::GameVersion>(99)); });
    std::cout << "Native save codec: both regions, all slots/copies, "
                 "corruption, roundtrip and rejection tests passed\n";
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
