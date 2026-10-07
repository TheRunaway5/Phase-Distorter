// Source: C1AC4A/C1ACA1 and MEMCPY24; C1ACF8/C1AD02; C1AD0A/C1AD26.
#include "eb/native/dialogue/prepared_message.hpp"
#include <stdexcept>
#include <utility>

namespace eb::native::dialogue {
bool PreparedMessage::names_equal() const {
    const auto target=name(PreparedName::Target),attacker=name(PreparedName::Attacker);
    for(unsigned i=0;i<target.size();++i) {
        if(target[i]!=attacker[i])return false;
        if(!target[i])return true;
    }
    throw std::logic_error("Prepared-name comparison leaves retained string storage");
}
namespace {
unsigned index(PreparedName selected) {
    switch (selected) {
    case PreparedName::Attacker: return 0;
    case PreparedName::Target: return 1;
    }
    throw std::invalid_argument("Unknown prepared name selection");
}
} // namespace
PreparedMessage::PreparedMessage(GameVersion version) : version_(version) {
    if (version != GameVersion::US && version != GameVersion::JP)
        throw std::invalid_argument("Unsupported prepared-message region");
}
std::span<const std::uint8_t> PreparedMessage::name(PreparedName selected) const {
    switch (selected) {
    case PreparedName::Attacker:
        return std::span(attacker_).first(version_ == GameVersion::US ? 30 : 14);
    case PreparedName::Target:
        return std::span(target_).first(version_ == GameVersion::US ? 28 : 12);
    }
    throw std::invalid_argument("Unknown prepared name selection");
}
std::span<std::uint8_t> PreparedMessage::writable_name(PreparedName selected) {
    const auto field = std::as_const(*this).name(selected);
    return {const_cast<std::uint8_t*>(field.data()),field.size()};
}
void PreparedMessage::copy_name(PreparedName selected, std::span<const std::uint8_t> source) {
    auto destination = writable_name(selected);
    if (source.size() >= destination.size())
        throw std::out_of_range("Prepared-name copy leaves no room for its terminator");
    // Source MEMCPY24 decrements Y before each byte. Do not snapshot aliases:
    // a source beginning later inside this field can observe earlier writes.
    for (auto remaining = source.size(); remaining != 0; --remaining)
        destination[remaining - 1] = source[remaining - 1];
    destination[source.size()] = 0;
    if (version_ == GameVersion::US) metadata(selected).enemy_id = 0xffff;
}
NameMetadata& PreparedMessage::metadata(PreparedName selected) { return metadata_[index(selected)]; }
const NameMetadata& PreparedMessage::metadata(PreparedName selected) const { return metadata_[index(selected)]; }
} // namespace eb::native::dialogue
