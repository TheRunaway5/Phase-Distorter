#include "eb/native/dialogue/text_animation_resources.hpp"

#include <algorithm>
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native::dialogue;
using eb::GameVersion;
unsigned checks{};
void check(bool value, const char *message) {
    ++checks;
    if (!value) throw std::runtime_error(message);
}
template<class F> void rejects(F operation, const char *message) {
    bool caught = false;
    try { operation(); } catch (const std::exception &) { caught = true; }
    check(caught, message);
}
struct Input {
    GameVersion version;
    unsigned first, second;
    std::vector<std::uint8_t> image;
    explicit Input(GameVersion region) : version(region),
        first(region == GameVersion::US ? 0x3e84e : 0x3e432), second(first + 20), image(second + 18) {
        for (unsigned i = 0; i < 9; ++i) {
            // Synthetic identities test word order, not bundled original art.
            put(first + i * 2, 0x101 + i * 3);
            put(second + i * 2, 0x148 - i * 2);
        }
    }
    void put(unsigned at, unsigned word) {
        image.at(at) = std::uint8_t(word); image.at(at + 1) = std::uint8_t(word >> 8);
    }
    std::shared_ptr<const TextAnimationResources> import() const {
        return TextAnimationResources::import(image, version);
    }
};
void ranges_and_ownership(GameVersion version) {
    Input input(version);
    const auto original = input.image;
    auto resources = input.import();
    check(resources->version() == version && resources->sequence(1).size() == 9 &&
              resources->sequence(2).size() == 9, "Animation region or declared sequence extent differs");
    for (unsigned i = 0; i < 9; ++i) {
        check(resources->sequence(1)[i] == 0x101 + i * 3 && resources->sequence(2)[i] == 0x148 - i * 2,
              "Animation words lost byte order, ordering or upper bits");
    }
    std::fill(input.image.begin(), input.image.end(), 0xff);
    input.image.clear(); input.image.shrink_to_fit();
    check(resources->sequence(1).front() == 0x101 && resources->sequence(2).back() == 0x138,
          "Imported animation retained borrowed input storage");
    auto copy = resources;
    const auto held = resources->sequence(1);
    resources.reset();
    check(copy->sequence(1).data() == held.data() && held.back() == 0x119,
          "Immutable sequence storage moved while its resource owner remained live");
    for (unsigned selector = 0; selector < 256; ++selector)
        if (selector != 1 && selector != 2)
            rejects([&] { copy->sequence(std::uint8_t(selector)); },
                    "Resource API invented a sequence for a no-op selector");
    for (unsigned size : {0u, input.first, input.first + 1, input.first + 19, input.second,
                          input.second + 1, input.second + 17})
        rejects([&] { TextAnimationResources::import(std::span(original).first(size), version); },
                "Truncated animation asset was accepted");
    rejects([&] { TextAnimationResources::import(original, static_cast<GameVersion>(255)); },
            "Unknown animation game region was accepted");
}
void termination(GameVersion version) {
    for (unsigned length = 0; length <= 9; ++length) {
        Input input(version);
        input.put(input.first + length * 2, 0);
        for (unsigned i = length + 1; i < 10; ++i) input.put(input.first + i * 2, 0xffff);
        const auto resources = input.import();
        check(resources->sequence(1).size() == length, "First zero did not terminate the bounded sequence");
        check(resources->sequence(2).size() == 9, "First terminator changed second sequence extent");
    }
    Input missing(version);missing.put(missing.first + 18, 0x140);
    rejects([&] { missing.import(); }, "Missing terminator read into the adjacent sequence");
    for (unsigned index = 0; index < 9; ++index) {
        Input zero(version); zero.put(zero.second + index * 2, 0);
        rejects([&] { zero.import(); }, "Second fixed-count sequence treated zero as a terminator");
    }
}
void glyph_bounds(GameVersion version) {
    for (unsigned word = 0; word <= 0x150; ++word) {
        const bool valid = word >= 0x10 && word <= 0x14f &&
                           (version == GameVersion::JP || word <= 0xcf || word >= 0x100);
        Input input(version);input.put(input.second + 8, word);
        if (valid) check(input.import()->sequence(2)[4] == word, "Supported full-word fixed glyph was rejected");
        else rejects([&] { input.import(); }, "Undeclared fixed glyph was imported as blank artwork");
        if (word) {
            Input first(version); first.put(first.first, word);
            if (valid) check(first.import()->sequence(1).front() == word, "First sequence narrowed fixed glyph");
            else rejects([&] { first.import(); }, "First sequence accepted unsupported fixed art");
        }
    }
    for (unsigned word : {0x1ffu, 0x7fffu, 0x8000u, 0xffffu}) {
        Input input(version);input.put(input.second + 16, word);
        rejects([&] { input.import(); }, "High-bit glyph escaped fixed-art validation");
    }
}
} // namespace
int main() {
    try {
        for (auto version : {GameVersion::US, GameVersion::JP}) {
            ranges_and_ownership(version); termination(version); glyph_bounds(version);
        }
        std::cout << "PASS native text-animation resources: " << checks << " checks\n";
    } catch (const std::exception &error) {
        std::cerr << error.what() << '\n'; return 1;
    }
}
