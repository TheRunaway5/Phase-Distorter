#pragma once

#include "eb/native/dialogue/program.hpp"

namespace eb::native::dialogue {
struct WordMeasure {
    std::uint16_t characters{}, pixels{};
    bool operator==(const WordMeasure &) const = default;
};

// US UNKNOWN_C445E1's non-consuming authored-word scan. The host supplies the
// focused font's original metrics. Native windows apply the resulting width
// and retain their own placement/indentation state. Japanese text has no such
// prefetch. Work is resumable so malformed or very long content cannot block a
// host frame; each unit reads at most four content bytes.
class WordScanner {
  public:
    WordScanner(std::shared_ptr<const Program>, Lookahead,
                std::array<std::uint8_t, 128> widths, std::uint8_t character_padding);
    bool advance(unsigned symbol_budget = 4096);
    bool finished() const;
    WordMeasure result() const;

  private:
    std::shared_ptr<const Program> program_;
    Lookahead cursors_;
    std::array<std::uint8_t, 128> widths_;
    std::uint8_t padding_{};
    WordMeasure measure_;
    bool finished_{};
};
} // namespace eb::native::dialogue
