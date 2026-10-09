#pragma once

#include "eb/native/dialogue/window_host.hpp"
#include "eb/native/party/meter_window_resources.hpp"
#include "eb/native/party/state.hpp"

namespace eb::native::story {class SourceMeterTiles;}
namespace eb::native::party {
struct MeterWindowState {
    std::uint8_t render{};
    std::uint16_t drawn_mask{}, selected_phase = 0xffff, area_dirty{};
    std::uint8_t upload{};
};

// Visible HP/PP window algorithms. The party owner supplies live values, the
// window host owns the sole staged/published BG2 surface and ordered queue,
// and bound WindowGraphics supplies live artwork identities. This owner
// neither rolls HP/PP values nor advances logical time. All borrowers outlive
// this stable owner, which outlives its pending frame-only operation.
class MeterWindows {
  public:
    class Operation {
      public:
        ~Operation();
        Operation(const Operation&) = delete;
        Operation& operator=(const Operation&) = delete;
        dialogue::OutputProgress advance();
        const std::optional<dialogue::WindowEffect>& effect() const;
        void respond();
        bool complete() const;
      private:
        friend class MeterWindows;
        struct Execution;
        explicit Operation(std::unique_ptr<Execution>);
        std::unique_ptr<Execution> execution_;
    };
    MeterWindows(dialogue::WindowHost&, State&, std::shared_ptr<const MeterWindowResources>);
    ~MeterWindows();
    MeterWindows(const MeterWindows&) = delete;
    MeterWindows& operator=(const MeterWindows&) = delete;
    std::weak_ptr<const void> source_lifetime() const noexcept { return source_lifetime_; }
    bool bound_to(const dialogue::WindowHost&, const State&) const noexcept;
    MeterWindowState& state();
    const MeterWindowState& state() const;
    void update(std::uint16_t frame_counter);
    void draw(unsigned phase);
    void draw_all();
    void undraw(unsigned phase);
    std::unique_ptr<Operation> begin_show();
    std::unique_ptr<Operation> begin_hide(bool battle);
    std::unique_ptr<Operation> begin_clear_selection();
    // Complete C43573. Its captured phase survives both regional waits; the
    // controlled count is read at the actual post-wait row-clear operation.
    std::unique_ptr<Operation> begin_select(unsigned phase);
    std::span<const dialogue::ArtworkCellReference, 12> digit_cells(unsigned phase) const;
    std::array<std::uint16_t,48> source_digit_words() const;
    std::span<const std::uint8_t,3> source_decimal_digits() const;
    void set_source_digit_words(std::span<const std::uint16_t,48>);
    void set_source_decimal_digits(std::span<const std::uint8_t,3>);
    bool source_tiles_active() const noexcept;

  private:
    friend class story::SourceMeterTiles;
    void validate_source_tiles(const void*) const;
    void claim_source_tiles(const void*);
    void release_source_tiles(const void*) noexcept;
    std::uint8_t read_source_digit_byte(unsigned) const;
    void store_source_digit_byte(unsigned,std::uint8_t);
    struct Execution;
    std::unique_ptr<Execution> execution_;
    std::shared_ptr<const void> source_lifetime_=std::make_shared<const unsigned>(0);
    enum class Action { Show, Hide, ClearSelection, Select };
    std::unique_ptr<Operation> begin(Action, bool battle = false, unsigned phase = 0);
    void require_live() const;
    void clear_selection();
    void finish(Action, bool battle);
};
} // namespace eb::native::party
