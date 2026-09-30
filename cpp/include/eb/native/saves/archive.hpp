#pragma once

#include "eb/native/saves/state.hpp"
#include <array>
#include <cstddef>
#include <cstdint>
#include <span>

namespace eb::native::saves {
struct Layout {
  std::uint16_t version;
  unsigned game_bytes, character_bytes, favourite_thing_bytes,
      character_name_bytes;
  unsigned persisted_bytes() const noexcept {
    return game_bytes + 6 * character_bytes + 128;
  }
};
Layout layout(GameVersion);
struct BlockValidation {
  bool signature{}, additive_checksum{}, xor_checksum{};
  bool valid() const noexcept {
    return signature && additive_checksum && xor_checksum;
  }
};
enum class SelectedCopy { Primary, Backup, Erased };
struct IntegrityReport {
  bool version_reset{};
  std::array<bool, 6> signature_erased{};
  std::array<SelectedCopy, 3> selected{};
  std::array<bool, 3> backup_repaired{};
  std::uint8_t lost_slots{};
};

// Exact ordinary SRAM archive, not a file-I/O service. Construction validates
// size only and copies its input. Repair and every mutation are explicit, owned
// in-memory operations. Export bytes() to a separate persistence service.
// Source replay SRAM/extensions are deliberately outside this 8KiB format.
class SaveArchive {
public:
  static constexpr std::size_t byte_size = 0x2000, block_size = 0x500,
                               header_size = 32;
  static constexpr unsigned slot_count = 3, copies_per_slot = 2;
  SaveArchive(GameVersion, std::span<const std::uint8_t>);
  static SaveArchive empty(GameVersion);
  GameVersion version() const noexcept { return version_; }
  std::span<const std::uint8_t, byte_size> bytes() const noexcept {
    return bytes_;
  }
  bool version_matches() const noexcept;
  BlockValidation validate_block(unsigned block) const;
  IntegrityReport repair_integrity() noexcept;
  // Requires a matching regional version and valid primary. Call repair
  // explicitly first when loading untrusted or damaged input.
  PersistedState load(unsigned slot) const;
  // TIMER is an explicit native input. Both copies retain their own archival
  // header/padding bytes, just as SAVE_GAME_SLOT does; only persisted fields
  // and checksums are written. Invalid arguments never change the archive.
  void save(unsigned slot, const PersistedState &, std::uint32_t elapsed_timer);
  void copy_slot(unsigned destination, unsigned source);
  void erase_slot(unsigned slot);

private:
  GameVersion version_;
  std::array<std::uint8_t, byte_size> bytes_{};
  void erase_block(unsigned block) noexcept;
  void copy_block(unsigned destination, unsigned source) noexcept;
  void require_version() const;
};
} // namespace eb::native::saves
