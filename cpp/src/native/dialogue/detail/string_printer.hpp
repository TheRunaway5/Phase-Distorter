#pragma once

#include "eb/native/dialogue/substitutions.hpp"
#include "eb/native/dialogue/window_host.hpp"
#include <stdexcept>

namespace eb::native::dialogue::detail {
// Shared PRINT_STRING continuation for menus and substitutions. The captured
// pointer/index advances before PRINT_LETTER, and later bytes are read live.
// This borrows an activation; its caller owns effect acknowledgement/lifetime.
class StringPrinter {
  public:
    StringPrinter(WindowHost &host, TextOutput::Owner owner, TextReader reader,
                  std::uint16_t maximum, bool wrapped = false)
        : host_(host), owner_(owner), reader_(std::move(reader)), remaining_(maximum), wrapped_(wrapped) {
        if (!reader_) throw std::invalid_argument("String printing requires a live source");
    }
    Progress advance(unsigned budget = 4096) {
        auto &output = host_.output();
        output.require_owner(owner_);
        while (budget--) {
            if (stage_ == Stage::Done) return Progress::Finished;
            if (stage_ == Stage::Start) {
                if (host_.version() == GameVersion::US) {
                    if (wrapped_)
                        output.prepare_string(reader_(), remaining_, host_.menu_state().force_normal_font,
                                              host_.positioning_window(), owner_);
                    if (host_.menu_state().center_next_string) {
                        const auto &window = host_.positioning_window();
                        const auto width = output.string_width(reader_(), remaining_,
                            host_.menu_state().force_normal_font, window, owner_);
                        const auto x = std::uint16_t(window.geometry.columns * 8 - width) >> 1;
                        host_.position_source({std::uint16_t(x >> 3), window.cursor.line}, x & 7, owner_);
                        host_.menu_state().center_next_string = false;
                    }
                }
                stage_ = Stage::Read;
            } else if (stage_ == Stage::Read) {
                const auto bytes = reader_();
                if (!remaining_) {
                    stage_ = Stage::Done;
                    return Progress::Finished;
                }
                if (index_ >= bytes.size())
                    throw std::out_of_range("String leaves its supplied live content extent before NUL or maximum");
                if (!bytes[index_]) {
                    stage_ = Stage::Done;
                    return Progress::Finished;
                }
                const auto code = bytes[index_++];
                --remaining_;
                output.begin_glyph(code, owner_);
                stage_ = Stage::Output;
            } else {
                if (output.advance(owner_) == OutputProgress::Suspended) return Progress::Suspended;
                stage_ = Stage::Read;
            }
        }
        return Progress::BudgetExhausted;
    }
  private:
    enum class Stage { Start, Read, Output, Done } stage_ = Stage::Start;
    WindowHost &host_;
    TextOutput::Owner owner_;
    TextReader reader_;
    std::uint16_t remaining_;
    std::size_t index_{};
    bool wrapped_{};
};
} // namespace eb::native::dialogue::detail
