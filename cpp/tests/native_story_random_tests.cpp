#include "eb/native/story/random.hpp"
#include <array>
#include <iostream>
#include <stdexcept>

int main() {
    try {
        using eb::native::story::RandomState;
        // Source RAND's low-byte product, secondary carry, primary17th bit
        // and explicit rotated-low-bit insertion are distinct observable cases.
        struct Case { RandomState before, after; unsigned result; };
        constexpr std::array cases{
            Case{{0,0},{0,0x006d},0},
            Case{{0xffff,0xffff},{0xffff,0x006c},0xe0},
            Case{{0xffff,1},{0x8001,0xff6e},0x0f},
            Case{{1,1},{0x8000,0x016e},0},
            Case{{0x8000,0xabff},{0x4000,0x016c},0},
            Case{{0xffff,12},{0x8000,0xff79},0xbf},
        };
        unsigned checks = 0;
        for (const auto& test : cases) {
            auto state = test.before;
            const auto result = eb::native::story::next_random(state);
            ++checks;
            if (state != test.after || result != test.result)
                throw std::runtime_error("RAND carry/product source example differs");
        }
        auto first = RandomState{0x1234,0x9876};
        auto second = first;
        for (unsigned i = 0; i < 4096; ++i) {
            const auto value = eb::native::story::next_random(first);
            ++checks;
            if (value != eb::native::story::next_random(second) || first != second)
                throw std::runtime_error("Independent native owners affected one another");
            auto restored = first;
            auto lookahead = first;
            ++checks;
            if (eb::native::story::next_random(restored) != eb::native::story::next_random(lookahead) ||
                restored != lookahead)
                throw std::runtime_error("Two source words were insufficient to resume RAND");
        }
        std::cout << "native story random: " << checks << " checks passed\n";
    } catch (const std::exception& error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
