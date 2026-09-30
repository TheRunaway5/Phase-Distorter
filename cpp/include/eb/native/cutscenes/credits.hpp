#pragma once

#include "eb/game_version.hpp"
#include <array>
#include <cstdint>
#include <deque>
#include <memory>
#include <span>
#include <vector>

namespace eb::native::cutscenes {
using CreditsGlyph = std::array<std::uint8_t, 64>;

// Owned content. Script bytes retain the authored staff encoding, not Unicode.
// Glyph indices are those used by the staff script (including blank 0..63).
// Palette entries are the eight imported RGB15 colors; pixel index 0 is transparent.
struct CreditsContent {
    GameVersion version = GameVersion::US;
    std::vector<std::uint8_t> script;
    std::vector<CreditsGlyph> glyphs;
    std::array<std::uint16_t, 8> palette{};
};
struct CreditsContentLayout {
    std::uint32_t script, compressed_font, palette;
    unsigned font_bytes, script_bytes;
};
CreditsContentLayout credits_content_layout(GameVersion version);

class CreditsResources {
  public:
    explicit CreditsResources(CreditsContent content);
    static std::shared_ptr<const CreditsResources> import(std::span<const std::uint8_t> assets,
                                                          GameVersion version);
    GameVersion version() const { return content_.version; }
    std::span<const std::uint8_t> script() const { return content_.script; }
    std::span<const CreditsGlyph> glyphs() const { return content_.glyphs; }
    const std::array<std::uint16_t, 8>& palette() const { return content_.palette; }
    unsigned scroll_length() const { return version() == GameVersion::JP ? 4520 : 4528; }
  private:
    CreditsContent content_;
};

struct CreditsTextState {
    std::uint64_t ticks{};
    std::size_t cursor{};
    std::uint32_t scroll_position{}; // 16.16 pixels, fractional word first in source.
    std::uint16_t next_credit_position{}, composition_row{}, wipe_threshold = 7;
    bool script_ended{};
    bool operator==(const CreditsTextState&) const = default;
};

// Native owner of the complete staff-text callback: command decoding, centering,
// small/tall glyph placement, current player-name insertion, circular rows,
// erasure and quarter-pixel scrolling. Source: credits_scroll_frame{,-jp}.asm.
// No processor, emulated memory, video hardware, DMA queue or source call remains.
// Empty authored text lines and a US name converting to an empty glyph string
// are rejected: source zero-length copies transfer 65536 hardware bytes, outside
// this native text surface. Both imported staff scripts contain no empty lines.
// advance_tick composes/enqueues source-ordered row publications. The ordinary
// PLAY_CREDITS schedule publishes one pending row before the next callback.
// Pending text rows borrow the composition ring at publication time, preserving
// source buffer reuse; wipes reference constant zero. A stalled host must not
// reach 128 pending rows (ambiguous/full original ring); such a schedule throws.
// Photos, music, fades and the ending's later 2000-frame hold belong to the host.
class CreditsTextScene {
  public:
    // The US source initializer preserves this global buffer between scene
    // invocations. Supply the previous scene's converted_player_name() when
    // reopening credits; a new host/game starts with the default zero buffer.
    explicit CreditsTextScene(std::shared_ptr<const CreditsResources> resources,
                              std::array<std::uint8_t, 24> retained_converted_name = {});
    // Current encoded player name is read only when command 4 executes. A span
    // ending before 24 bytes has an implicit terminator. No game-state copy is retained.
    // Returns false without mutation after PLAY_CREDITS' regional scroll limit.
    bool advance_tick(std::span<const std::uint8_t> player_name = {});
    // Publishes exactly one queued update. False
    // means the queue was empty. No callback/scroll advancement occurs here.
    bool publish_next_row();
    std::size_t pending_rows() const { return publications_.size(); }
    bool script_ended() const { return state_.script_ended; }
    bool scroll_complete() const;
    const CreditsTextState& state() const { return state_; }
    const std::array<std::uint16_t, 1024>& tile_canvas() const { return canvas_; }
    const std::array<std::uint16_t, 512>& composition_rows() const { return rows_; }
    const std::array<std::uint8_t, 24>& converted_player_name() const { return converted_name_; }
    // Logical 256-column text layer. Top row samples source display row 1 plus integer scroll_position;
    // fractional motion is available in state() for a native presentation host.
    std::vector<std::uint8_t> indexed_canvas(unsigned height = 224) const;
  private:
    std::uint8_t next_byte();
    void line(std::span<const std::uint8_t> glyphs, bool tall, bool player,
              unsigned first_row, unsigned screen_row);
    void command(std::span<const std::uint8_t> player_name);
    struct RowPublication {
        unsigned source_row, destination_row, column, count;
        bool clear;
    };
    void enqueue(RowPublication row);
    std::shared_ptr<const CreditsResources> resources_;
    CreditsTextState state_;
    std::array<std::uint16_t, 512> rows_{};
    std::array<std::uint16_t, 1024> canvas_{};
    std::array<std::uint8_t, 24> converted_name_{};
    std::deque<RowPublication> publications_;
};
} // namespace eb::native::cutscenes
