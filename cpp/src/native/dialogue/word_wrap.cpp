#include "eb/native/dialogue/word_wrap.hpp"
#include <stdexcept>
#include <utility>

// Source: src/unknown/C4/C445E1.asm. Only authored stream/metric semantics
// survive here; the original function's window mutation is owned by TextOutput.
namespace eb::native::dialogue {
WordScanner::WordScanner(std::shared_ptr<const Program> program, Lookahead cursors,
                         std::array<std::uint8_t, 128> widths, std::uint8_t character_padding)
    : program_(std::move(program)), cursors_(cursors), widths_(widths), padding_(character_padding) {
    if (!program_ || program_->version() != GameVersion::US)
        throw std::invalid_argument("Word lookahead requires a US dialogue program");
}

bool WordScanner::advance(unsigned symbol_budget) {
    while (symbol_budget-- && !finished_) {
        std::uint8_t byte = cursors_.dictionary ? program_->byte(*cursors_.dictionary) : 0;
        if (byte) {
            cursors_.dictionary = Program::advance(*cursors_.dictionary);
        } else {
            byte = program_->byte(cursors_.primary);
            cursors_.primary = Program::advance(cursors_.primary);
        }
        if (byte >= 0x15 && byte <= 0x17) {
            const auto index = unsigned(byte - 0x15) * 256 + program_->byte(cursors_.primary);
            cursors_.primary = Program::advance(cursors_.primary);
            const auto entry = program_->dictionary_entry(index);
            byte = program_->byte(entry);
            cursors_.dictionary = Program::advance(entry);
        }
        if (byte == 0x50 || byte < 0x20) {
            finished_ = true;
        } else {
            ++measure_.characters;
            const auto width = byte == 0x2f ? 8u : unsigned(widths_[(byte - 0x50) & 0x7f]) + padding_;
            measure_.pixels = std::uint16_t(measure_.pixels + width);
        }
    }
    return finished_;
}
bool WordScanner::finished() const { return finished_; }
WordMeasure WordScanner::result() const {
    if (!finished_) throw std::logic_error("Word lookahead has not reached a boundary");
    return measure_;
}
} // namespace eb::native::dialogue
