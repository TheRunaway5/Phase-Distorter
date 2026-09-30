#include "eb/native/dialogue/prepared_message.hpp"
#include "native_dialogue_substitution_test_assets.hpp"
#include <algorithm>
#include <iostream>
#include <limits>
#include <stdexcept>
#include <type_traits>
#include <utility>

namespace {
using eb::GameVersion;
using namespace eb::native::dialogue;
unsigned checks{};
void check(bool okay, const char* why) {
    ++checks;
    if (!okay) throw std::runtime_error(why);
}
template<class F> void rejects(F action, const char* why) {
    bool rejected = false;
    try { action(); } catch (const std::exception&) { rejected = true; }
    check(rejected,why);
}
std::vector<std::uint8_t> value(std::span<const std::uint8_t> bytes) {
    return {bytes.begin(),bytes.end()};
}
void equal(std::span<const std::uint8_t> actual, std::span<const std::uint8_t> expected, const char* why) {
    check(actual.size() == expected.size(),why);
    for (unsigned i = 0; i < expected.size(); ++i) check(actual[i] == expected[i],why);
}
constexpr std::array choices{PreparedName::Attacker,PreparedName::Target};
PreparedName other(PreparedName selected) {
    return selected == PreparedName::Attacker ? PreparedName::Target : PreparedName::Attacker;
}
unsigned extent(GameVersion version, PreparedName selected) {
    return selected == PreparedName::Attacker ? (version == GameVersion::US ? 30 : 14)
                                             : (version == GameVersion::US ? 28 : 12);
}
std::vector<std::uint8_t> seed(unsigned size, unsigned offset = 0) {
    std::vector<std::uint8_t> bytes(size);
    for (unsigned i = 0; i < size; ++i) bytes[i] = std::uint8_t(17 + i * 29 + offset);
    return bytes;
}
void initialize(PreparedMessage& message) {
    for (const auto selected : choices) {
        message.copy_name(selected,seed(unsigned(message.name(selected).size() - 1)));
        message.metadata(selected) = {std::uint16_t(selected == PreparedName::Attacker ? 0x1234 : 0xabcd),
                                      std::uint8_t(selected == PreparedName::Attacker ? 0x82 : 0xfe)};
    }
    message.set_number(0xfedcba98); message.set_item(0xe7);
}
void untouched(const PreparedMessage& message, PreparedName selected,
               const std::vector<std::uint8_t>& expected_name, NameMetadata expected_metadata) {
    equal(message.name(other(selected)),expected_name,"Copy changed the other prepared name");
    check(message.metadata(other(selected)) == expected_metadata,"Copy changed other metadata");
    check(message.number() == 0xfedcba98 && message.item() == 0xe7,"Name copy changed shared number/item");
}
void fields(GameVersion version) {
    PreparedMessage message(version);
    check(message.version() == version,"Prepared-message region changed");
    check(message.number() == 0 && message.item() == 0,"New scalar state is not zero");
    for (const auto selected : choices) {
        check(message.name(selected).size() == extent(version,selected),"Wrong regional prepared-name extent");
        equal(message.name(selected),std::vector<std::uint8_t>(extent(version,selected)),"New name is not zero");
        check(message.metadata(selected) == NameMetadata{},"Initial metadata is fabricated");
    }
    initialize(message);
    const auto attacker = value(message.name(PreparedName::Attacker));
    const auto target = value(message.name(PreparedName::Target));
    const auto attacker_metadata = message.metadata(PreparedName::Attacker);
    const auto target_metadata = message.metadata(PreparedName::Target);
    for (const std::uint32_t number : {0u,1u,255u,256u,65535u,65536u,9999999u,10000000u,
                                      0x7fffffffu,0x80000000u,0xfffffffeu,0xffffffffu}) {
        message.set_number(number);
        check(message.number() == number,"CNUM storage truncated or rejected source bits");
        check(message.item() == 0xe7,"CNUM changed CITEM");
    }
    for (unsigned item = 0; item < 256; ++item) {
        message.set_item(std::uint8_t(item));
        check(message.item() == item,"CITEM normalized a raw byte");
        check(message.number() == 0xffffffffu,"CITEM changed CNUM");
    }
    equal(message.name(PreparedName::Attacker),attacker,"Scalar setters changed attacker");
    equal(message.name(PreparedName::Target),target,"Scalar setters changed target");
    check(message.metadata(PreparedName::Attacker) == attacker_metadata &&
          message.metadata(PreparedName::Target) == target_metadata,"Scalar setters changed metadata");
}
void copies(GameVersion version) {
    for (const auto selected : choices) {
        const auto size = extent(version,selected);
        for (unsigned count = 0; count < size; ++count) {
            for (unsigned embedded_zero = 0; embedded_zero <= count; ++embedded_zero) {
                PreparedMessage message(version); initialize(message);
                const auto other_name = value(message.name(other(selected)));
                const auto other_metadata = message.metadata(other(selected));
                auto expected = value(message.name(selected));
                auto source = seed(count,73);
                if (embedded_zero < count) source[embedded_zero] = 0;
                std::copy(source.begin(),source.end(),expected.begin()); expected[count] = 0;
                auto metadata = message.metadata(selected);
                if (version == GameVersion::US) metadata.enemy_id = 0xffff;
                const auto borrowed = message.name(selected);
                message.copy_name(selected,source);
                equal(message.name(selected),expected,"Exact count, terminator or retained tail changed");
                check(message.metadata(selected) == metadata,"Copy modified article or wrong regional enemy ID");
                check(borrowed.data() == message.name(selected).data(),"Prepared buffer moved after copy");
                equal(borrowed,expected,"Borrowed view did not observe current bytes");
                std::fill(source.begin(),source.end(),0xee);
                equal(borrowed,expected,"Prepared name retained external source instead of copied bytes");
                untouched(message,selected,other_name,other_metadata);
            }
        }
    }
}
void overlaps(GameVersion version) {
    for (const auto selected : choices) {
        const auto size = extent(version,selected);
        for (unsigned start = 0; start < size; ++start) {
            for (unsigned count = 0; count < size && count <= size - start; ++count) {
                PreparedMessage message(version); initialize(message);
                const auto original = value(message.name(selected));
                auto expected = original;
                // Independent result for backwards source-copy aliases: each
                // read follows the overwritten chain until its original byte
                // lies beyond the destination's count. Offset zero is a no-op.
                for (unsigned i = 0; i < count; ++i) {
                    auto origin = i;
                    if (start) do { origin += start; } while (origin < count);
                    expected[i] = original[origin];
                }
                expected[count] = 0;
                const auto borrowed = message.name(selected);
                message.copy_name(selected,borrowed.subspan(start,count));
                equal(borrowed,expected,"MEMCPY24 overlap order differs from source");
                check(message.metadata(selected).article == (selected == PreparedName::Attacker ? 0x82 : 0xfe),
                      "Overlapping copy changed article");
            }
        }
        PreparedMessage message(version); initialize(message);
        const auto opposite = value(message.name(other(selected)));
        const auto count = std::min(size - 1,unsigned(opposite.size()));
        auto expected = value(message.name(selected));
        std::copy_n(opposite.begin(),count,expected.begin()); expected[count] = 0;
        message.copy_name(selected,message.name(other(selected)).first(count));
        equal(message.name(selected),expected,"Cross-name borrow copied wrong bytes");
        equal(message.name(other(selected)),opposite,"Cross-name source was mutated");
    }
}
void invalid(GameVersion version) {
    for (const auto selected : choices) {
        PreparedMessage message(version); initialize(message);
        const auto before = value(message.name(selected)), opposite = value(message.name(other(selected)));
        const auto metadata = message.metadata(selected), opposite_metadata = message.metadata(other(selected));
        const auto size = extent(version,selected);
        for (const auto count : {size,size + 1,64u,128u}) {
            const auto source = seed(count);
            rejects([&]{message.copy_name(selected,source);},"Oversized copy accepted");
            equal(message.name(selected),before,"Rejected copy partially changed name");
            check(message.metadata(selected) == metadata,"Rejected copy changed metadata");
            untouched(message,selected,opposite,opposite_metadata);
        }
        for (const auto id : {-1,2,127}) {
            const auto bad = static_cast<PreparedName>(id);
            rejects([&]{message.copy_name(bad,{});},"Unknown copy selector accepted");
            rejects([&]{(void)message.name(bad);},"Unknown name selector accepted");
            rejects([&]{(void)message.metadata(bad);},"Unknown metadata selector accepted");
            rejects([&]{(void)std::as_const(message).metadata(bad);},"Unknown const metadata selector accepted");
            equal(message.name(selected),before,"Rejected selector changed name");
            check(message.metadata(selected) == metadata,"Rejected selector changed metadata");
        }
    }
}
void articles(GameVersion version) {
    for (const unsigned offset : {0u,128u}) {
        dialogue_substitution_test_assets::Input fixture(version);
        const std::array<std::uint8_t,8> phrases{0x81,0,0xfd,0x52,0x91,0xff,0x02,0x00};
        std::copy(phrases.begin(),phrases.end(),fixture.image.begin() + 0x20998);
        if (version == GameVersion::US)
            for (unsigned id = 0; id < 231; ++id)
                fixture.image[fixture.enemies + id * fixture.enemy_stride] = std::uint8_t(id + offset);
        const auto resources = fixture.load();
        if (version == GameVersion::JP) {
            rejects([&]{(void)resources->article_text(false);},"JP invented lowercase article text");
            rejects([&]{(void)resources->article_text(true);},"JP invented capital article text");
            for (const unsigned id : {0u,230u,231u,std::numeric_limits<unsigned>::max()})
                rejects([&]{(void)resources->enemy_article(id);},"JP invented enemy article metadata");
            continue;
        }
        for (unsigned id = 0; id < 231; ++id) {
            check(resources->enemy_article(id) == std::uint8_t(id + offset),"Article metadata normalized raw byte");
            equal(resources->enemy_name(id),std::span(fixture.image).subspan(
                  fixture.enemies + id * fixture.enemy_stride + 1,fixture.name_size),"Article import changed enemy name");
            fixture.image[fixture.enemies + id * fixture.enemy_stride] ^= 0xff;
            check(resources->enemy_article(id) == std::uint8_t(id + offset),"Article catalog retained caller storage");
        }
        equal(resources->article_text(true),std::span(phrases).first(4),"Capital phrase not exact imported four bytes");
        equal(resources->article_text(false),std::span(phrases).last(4),"Lowercase phrase not exact imported four bytes");
        std::fill_n(fixture.image.begin() + 0x20998,8,0x77);
        equal(resources->article_text(true),std::span(phrases).first(4),"Article phrase retained caller storage");
        for (const unsigned id : {231u,65535u,std::numeric_limits<unsigned>::max()})
            rejects([&]{(void)resources->enemy_article(id);},"Article metadata escaped imported table");
    }
}
} // namespace
int main() {
    static_assert(!std::is_copy_constructible_v<PreparedMessage> && !std::is_move_constructible_v<PreparedMessage>);
    static_assert(!std::is_copy_assignable_v<PreparedMessage> && !std::is_move_assignable_v<PreparedMessage>);
    try {
        rejects([]{PreparedMessage invalid(static_cast<GameVersion>(255));},"Unsupported region accepted");
        for (const auto version : {GameVersion::US,GameVersion::JP}) {
            fields(version); copies(version); overlaps(version); invalid(version); articles(version);
        }
        std::cout << "native prepared message state checks=" << checks << '\n';
    } catch (const std::exception& error) {
        std::cerr << "After " << checks << " checks: " << error.what() << '\n'; return 1;
    }
}
