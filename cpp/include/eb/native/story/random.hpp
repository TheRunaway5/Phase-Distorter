#pragma once

#include <cstdint>
#include <memory>
#include <stdexcept>

namespace eb::native::story {
class SourceRandom;
// The same two source RAND words are used by semantic and literal producers.
// Value copies keep independent lifetime/lease identities; assignment updates
// the destination words without transferring a borrowed source invocation.
struct RandomState {
    std::uint16_t primary_word{}, secondary_word{};
    RandomState(std::uint16_t primary=0,std::uint16_t secondary=0)
        : primary_word(primary),secondary_word(secondary) {}
    RandomState(const RandomState &other)
        : RandomState(other.primary_word,other.secondary_word) {}
    RandomState(RandomState &&other) : RandomState(static_cast<const RandomState &>(other)) {}
    RandomState &operator=(const RandomState &other) {
        if(this!=&other) {
            if(source_lease_)throw std::logic_error("An actual source RAND owns these shared words");
            primary_word=other.primary_word;secondary_word=other.secondary_word;
        }
        return *this;
    }
    RandomState &operator=(RandomState &&other) {return operator=(static_cast<const RandomState &>(other));}
    bool operator==(const RandomState &other) const noexcept {
        return primary_word==other.primary_word&&secondary_word==other.secondary_word;
    }
    std::weak_ptr<const void> source_lifetime() const noexcept {return lifetime_;}
    bool source_active() const noexcept {return source_lease_!=nullptr;}
private:
    friend class SourceRandom;
    friend std::uint8_t next_random(RandomState&);
    std::shared_ptr<const void> lifetime_=std::make_shared<const unsigned>(0);
    const void *source_lease_{};
};

// Untimed semantic RAND; its existing integer result and value copies remain
// independent of physical work. An active literal source owns the same words.
std::uint8_t next_random(RandomState&);
} // namespace eb::native::story
