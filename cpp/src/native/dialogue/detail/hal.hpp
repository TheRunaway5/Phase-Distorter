#pragma once

#include <cstddef>
#include <cstdint>
#include <span>
#include <stdexcept>
#include <vector>

namespace eb::native::dialogue::detail {
// One bounded original HAL asset, including its terminator. Callers declare
// both compressed and decoded extents; no adjacent asset is consumed. Forward
// copies may refer to newly produced bytes, while reverse copies must remain
// within the already decoded output on every byte.
inline std::vector<std::uint8_t> decode_hal_exact(std::span<const std::uint8_t> packed,
                                                std::size_t expected) {
    const auto require = [](bool ok, const char* message) {
        if (!ok) throw std::runtime_error(message);
    };
    std::size_t cursor = 0;
    const auto next = [&]() {
        require(cursor < packed.size(), "Truncated compressed native resource");
        return packed[cursor++];
    };
    std::vector<std::uint8_t> out;
    for (;;) {
        const unsigned head = next();
        if (head == 255) break;
        unsigned kind = head >> 5, count = (head & 31) + 1;
        if (kind == 7) { kind = (head >> 2) & 7; count = (((head & 3) << 8) | next()) + 1; }
        require(kind != 7 && out.size() <= expected && count * (kind == 2 ? 2u : 1u) <= expected - out.size(),
                "Invalid compressed native resource length");
        if (kind == 0) while (count--) out.push_back(next());
        else if (kind <= 3) {
            const unsigned a = next(), b = kind == 2 ? next() : 0;
            for (unsigned i = 0; i < count; ++i) {
                out.push_back(std::uint8_t(a + (kind == 3 ? i : 0)));
                if (kind == 2) out.push_back(std::uint8_t(b));
            }
        } else {
            int source = int(next()) << 8;
            source |= next();
            while (count--) {
                require(source >= 0 && unsigned(source) < out.size(), "Invalid native resource back reference");
                auto value = out[unsigned(source)];
                if (kind == 5) {
                    unsigned reversed = 0;
                    for (unsigned bit = 0; bit < 8; ++bit) { reversed = reversed << 1 | (value & 1); value >>= 1; }
                    value = std::uint8_t(reversed);
                }
                out.push_back(value);
                source += kind == 6 ? -1 : 1;
            }
        }
    }
    require(out.size() == expected && cursor == packed.size(), "Native resource asset extent differs");
    return out;
}
} // namespace eb::native::dialogue::detail
