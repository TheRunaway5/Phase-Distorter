#include "native_dialogue_substitution_test_assets.hpp"
#include <algorithm>
#include <iostream>
#include <limits>
#include <stdexcept>

namespace {
using namespace eb::native::dialogue;
using dialogue_substitution_test_assets::Input;
unsigned checks{};
void check(bool ok, const char* message) {
    ++checks;
    if (!ok) throw std::runtime_error(message);
}
template<class F> void rejects(F operation, const char* message) {
    bool rejected = false;
    try { operation(); } catch (const std::exception&) { rejected = true; }
    check(rejected,message);
}
void raw_fields(eb::GameVersion version) {
    Input input(version);
    // Preserve arbitrary occupied name bytes and suffix after an embedded NUL.
    // The later metadata zero bounds US substitution without changing its
    // unbounded-within-table string behavior.
    for (unsigned id = 0; id < 254; ++id) {
        const auto start = input.items + id * input.item_stride;
        for (unsigned i = 0; i < input.name_size; ++i)
            input.image[start + i] = std::uint8_t(0x50 + (id * 7 + i) % 80);
        if (id % 3 == 0) input.image[start + 1] = 0;
        input.image[start + input.name_size] = 0;
    }
    const auto resources = input.load();
    check(resources->item_count() == 254,"Raw accessor altered declared item count");
    const auto first = resources->raw_item_name(0).data();
    for (unsigned id = 0; id < 254; ++id) {
        const auto start = input.items + id * input.item_stride;
        const auto field = resources->raw_item_name(id);
        const auto text = resources->item_text(id);
        const auto expected = std::span(input.image).subspan(start,input.name_size);
        check(field.size() == input.name_size && std::equal(field.begin(),field.end(),expected.begin()),
              "Raw name omitted suffix, fabricated NUL, or crossed its regional extent");
        check(field.data() == text.data() && field.data() == first + id * input.item_stride,
              "Raw and substitution names no longer borrow one shared imported item table");
        const unsigned expected_text_size = version == eb::GameVersion::JP ? input.name_size :
            id % 3 == 0 ? 2 : input.name_size + 1;
        check(text.size() == expected_text_size && std::equal(text.begin(),text.end(),input.image.begin() + start),
              "Adding raw fields changed existing regional item substitution semantics");
    }
    const auto saved_raw = std::vector<std::uint8_t>(resources->raw_item_name(253).begin(),
                                                   resources->raw_item_name(253).end());
    const auto saved_text = std::vector<std::uint8_t>(resources->item_text(253).begin(),
                                                    resources->item_text(253).end());
    input.image.clear();
    input.image.shrink_to_fit();
    check(std::equal(saved_raw.begin(),saved_raw.end(),resources->raw_item_name(253).begin()),
          "Raw field borrowed the destroyed import image");
    check(std::equal(saved_text.begin(),saved_text.end(),resources->item_text(253).begin()),
          "Continuation text borrowed the destroyed import image");
    for (unsigned id : {254u,255u,65535u,std::numeric_limits<unsigned>::max()}) {
        rejects([&]{resources->raw_item_name(id);},"Raw field accessor accepted out-of-table item");
        rejects([&]{resources->item_text(id);},"Substitution accessor accepted out-of-table item");
    }
}
void continuation_and_bounds() {
    Input input(eb::GameVersion::US);
    // A source US substitution can traverse metadata and the next item record;
    // inventory still takes precisely the first25 bytes of the same backing.
    std::fill_n(input.image.begin() + input.items,input.item_stride * 2 + 4,0x71);
    input.image[input.items + input.item_stride * 2 + 4] = 0;
    const auto resources = input.load();
    check(resources->raw_item_name(0).size() == 25 && resources->item_text(0).size() == input.item_stride * 2 + 5,
          "US source continuation was limited to raw name or one record");
    check(resources->item_text(1).data() == resources->item_text(0).data() + input.item_stride &&
              resources->item_text(1).size() == input.item_stride + 5,
          "Overlapping US continuation strings were independently stored or truncated");
    const auto final = input.items + 253 * input.item_stride;
    std::fill_n(input.image.begin() + final,input.item_stride,0x7f);
    rejects([&]{input.load();},"US unterminated final item escaped declared imported table");
    input.image[final + input.item_stride - 1] = 0;
    check(input.load()->item_text(253).size() == input.item_stride,
          "Final table byte is not a valid original US terminator");
    for (const auto version : {eb::GameVersion::US,eb::GameVersion::JP}) {
        Input truncated(version);
        const auto end = truncated.items + 254 * truncated.item_stride;
        rejects([&]{SubstitutionResources::import(std::span(truncated.image).first(end - 1),version);},
                "Shared item import accepted a truncated final record");
    }
}
} // namespace
int main() {
    try {
        raw_fields(eb::GameVersion::US);
        raw_fields(eb::GameVersion::JP);
        continuation_and_bounds();
        std::cout << "PASS " << checks << " raw item fields, shared import and regional continuation checks\n";
    } catch (const std::exception& error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
