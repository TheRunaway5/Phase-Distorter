// Source: CC_1C_01_data.asm; C19249/C1931B/C19216/C1CA06 and
// GET_PSI_NAME; regional item/enemy/PSI/teleport table declarations.
#include "eb/native/dialogue/substitution_resources.hpp"
#include <algorithm>
#include <stdexcept>

namespace eb::native::dialogue {
namespace {
void require(bool ok, const char* message) {
    if (!ok) throw std::invalid_argument(message);
}
std::span<const std::uint8_t> bytes(std::span<const std::uint8_t> image, unsigned at, unsigned count) {
    require(at <= image.size() && count <= image.size() - at, "Truncated dialogue substitution resource");
    return image.subspan(at, count);
}
unsigned word(std::span<const std::uint8_t> source, unsigned at) {
    return source[at] | unsigned(source[at + 1]) << 8;
}
struct Layout {
    unsigned stats, items, teleports, enemies, npc, abilities, names, suffixes;
    unsigned item_stride, teleport_stride, enemy_stride, enemy_name_offset, name_size;
    unsigned game_state, party, party_stride, party_name_size, favorite_size;
};
Layout layout(GameVersion version) {
    // Linked source data labels, validated independently against both regional
    // manifests. These offsets locate immutable data, never executable code.
    switch (version) {
    case GameVersion::US:
        return {0x04550f,0x155000,0x157880,0x159589,0x158f23,0x158a50,0x158d7a,0x03f112,
                39,31,94,1,25,0x97f5,0x99ce,95,5,12};
    case GameVersion::JP:
        return {0x043305,0x157000,0x15899e,0x15a440,0x159dda,0x159a06,0x159d30,0x03ec91,
                24,16,77,0,10,0x9aa9,0x9c7f,94,4,9};
    }
    throw std::invalid_argument("Unsupported dialogue substitution region");
}
struct Field {
    StatField key;
    unsigned offset, size;
    StatKind kind;
};
constexpr std::array<Field, 22> party_fields{{
    {StatField::CharacterName,0,5,StatKind::String},
    {StatField::Level,5,1,StatKind::Number},
    {StatField::Experience,6,4,StatKind::Number},
    {StatField::CurrentHp,69,2,StatKind::Number},
    {StatField::TargetHp,71,2,StatKind::Number},
    {StatField::MaximumHp,10,2,StatKind::Number},
    {StatField::CurrentPp,75,2,StatKind::Number},
    {StatField::TargetPp,77,2,StatKind::Number},
    {StatField::MaximumPp,12,2,StatKind::Number},
    {StatField::Offense,21,1,StatKind::Number},
    {StatField::Defense,22,1,StatKind::Number},
    {StatField::Speed,23,1,StatKind::Number},
    {StatField::Guts,24,1,StatKind::Number},
    {StatField::Luck,25,1,StatKind::Number},
    {StatField::Vitality,26,1,StatKind::Number},
    {StatField::Iq,27,1,StatKind::Number},
    {StatField::BaseIq,34,1,StatKind::Number},
    {StatField::BaseOffense,28,1,StatKind::Number},
    {StatField::BaseDefense,29,1,StatKind::Number},
    {StatField::BaseSpeed,30,1,StatKind::Number},
    {StatField::BaseGuts,31,1,StatKind::Number},
    {StatField::BaseLuck,32,1,StatKind::Number}
}};
StatDescriptor descriptor(const Layout& source, unsigned tag, unsigned address) {
    const auto kind = tag & 0x80 ? StatKind::Number : StatKind::String;
    const unsigned count = tag & 0x7f;
    // C19249 handles every integer tag other than1/2 as a four-byte read.
    const unsigned size = kind == StatKind::String ? count : count == 1 || count == 2 ? count : 4;
    if (!tag && !address) return {{StatField::None,0},StatKind::String,0};
    const std::array<Field, 7> globals{{
        {StatField::Mother2PlayerName,0,12,StatKind::String},
        {StatField::EarthBoundPlayerName,12,24,StatKind::String},
        {StatField::PetName,36,6,StatKind::String},
        {StatField::FavouriteFood,42,6,StatKind::String},
        {StatField::FavouriteThing,48,source.favorite_size,StatKind::String},
        {StatField::MoneyCarried,48 + source.favorite_size,4,StatKind::Number},
        {StatField::BankBalance,52 + source.favorite_size,4,StatKind::Number}
    }};
    const auto resolved = [&](const Field& field, unsigned party) {
        require(kind == field.kind && size == field.size,
                "Stat descriptor width or type differs from its semantic live field");
        return StatDescriptor{{field.key,std::uint8_t(party)},kind,std::uint8_t(size)};
    };
    for (const auto& field : globals)
        if (address == source.game_state + field.offset) return resolved(field,0);
    for (unsigned party = 0; party < 4; ++party) {
        for (auto field : party_fields) {
            if (field.key == StatField::CharacterName) field.size = source.party_name_size;
            else field.offset -= 5 - source.party_name_size;
            if (address == source.party + party * source.party_stride + field.offset)
                return resolved(field,party);
        }
    }
    throw std::invalid_argument("Stat descriptor does not name a supported live field");
}
std::vector<std::uint8_t> terminated(std::span<const std::uint8_t> table, unsigned start) {
    const auto tail = table.subspan(start);
    const auto end = std::find(tail.begin(), tail.end(), 0);
    require(end != tail.end(), "Substitution text leaves its declared content table");
    return {tail.begin(),end + 1};
}
std::vector<std::uint8_t> field(std::span<const std::uint8_t> table, unsigned start, unsigned size) {
    const auto value = table.subspan(start,size);
    return {value.begin(),value.end()};
}
} // namespace

std::shared_ptr<const SubstitutionResources>
SubstitutionResources::import(std::span<const std::uint8_t> image, GameVersion version) {
    const auto source = layout(version);
    auto result = std::shared_ptr<SubstitutionResources>(new SubstitutionResources(version));
    const auto stats = bytes(image,source.stats,96 * 3);
    for (unsigned i = 0; i < result->stats_.size(); ++i)
        result->stats_[i] = descriptor(source,stats[i * 3],word(stats,i * 3 + 1));
    const auto items = bytes(image,source.items,254 * source.item_stride);
    result->item_table_.assign(items.begin(),items.end());
    result->item_stride_ = source.item_stride;
    result->item_name_size_ = source.name_size;
    for (unsigned i = 0; i < result->item_text_lengths_.size(); ++i) {
        // US C4487C ignores the nominal name maximum and reads to NUL. Keep
        // any actual continuation inside the imported item table. JP's plain
        // PRINT_STRING is bounded to10 and permits fully occupied fields.
        if (version == GameVersion::US) {
            const auto tail = items.subspan(i * source.item_stride);
            const auto end = std::find(tail.begin(),tail.end(),0);
            require(end != tail.end(), "Substitution text leaves its declared content table");
            result->item_text_lengths_[i] = unsigned(end - tail.begin()) + 1;
        } else result->item_text_lengths_[i] = source.name_size;
    }
    const auto teleports = bytes(image,source.teleports,17 * source.teleport_stride);
    for (unsigned i = 0; i < result->teleports_.size(); ++i)
        result->teleports_[i] = field(teleports,i * source.teleport_stride,source.name_size);
    const auto enemies = bytes(image,source.enemies,231 * source.enemy_stride);
    for (unsigned i = 0; i < result->enemies_.size(); ++i) {
        result->enemies_[i] = field(enemies,i * source.enemy_stride + source.enemy_name_offset,source.name_size);
        if (version == GameVersion::US)
            result->enemy_articles_[i] = enemies[i * source.enemy_stride];
    }
    if (version == GameVersion::US) {
        // THETHE at C20998 has two consecutive four-byte phrases, no NUL.
        const auto articles = bytes(image,0x020998,result->articles_.size());
        std::copy(articles.begin(),articles.end(),result->articles_.begin());
    }
    const auto npc = bytes(image,source.npc,19 * 2);
    for (unsigned i = 0; i < result->npc_enemies_.size(); ++i) {
        require(npc[i * 2 + 1] < result->enemies_.size(), "NPC name references an invalid enemy catalog entry");
        result->npc_enemies_[i] = npc[i * 2 + 1];
        result->npc_flags_[i] = npc[i * 2];
    }
    const auto abilities = bytes(image,source.abilities,54 * 15);
    for (unsigned i = 0; i < result->abilities_.size(); ++i) {
        const unsigned name = abilities[i * 15], level = abilities[i * 15 + 1];
        require((!name && !level) || (name >= 1 && name <= 17 && level >= 1 && level <= 5),
                "PSI name or suffix reference leaves its imported catalog");
        result->abilities_[i] = {std::uint8_t(name),std::uint8_t(level)};
    }
    const auto names = bytes(image,source.names,17 * source.name_size);
    for (unsigned i = 0; i < result->psi_names_.size(); ++i)
        result->psi_names_[i] = terminated(names,i * source.name_size);
    const auto suffixes = bytes(image,source.suffixes,5 * 2);
    for (unsigned i = 0; i < result->suffixes_.size(); ++i) {
        require(suffixes[i * 2 + 1] == 0, "PSI suffix does not end within its declared two-byte record");
        result->suffixes_[i] = {suffixes[i * 2],suffixes[i * 2 + 1]};
    }
    return result;
}
const StatDescriptor& SubstitutionResources::stat(unsigned id) const { return stats_.at(id); }
CharacterNameSelection SubstitutionResources::character_name(unsigned id) const {
    require(id >= 1 && id < npc_enemies_.size(), "Character name selector leaves the source party/NPC domain");
    if (id <= 4) return {CharacterNameKind::Party,std::uint16_t(id - 1),std::uint16_t(version_ == GameVersion::US ? 5 : 4)};
    if (id == 7) return {CharacterNameKind::Pet,0,6};
    return {CharacterNameKind::Enemy,npc_enemies_[id],std::uint16_t(version_ == GameVersion::US ? 25 : 10)};
}
std::span<const std::uint8_t> SubstitutionResources::item_text(unsigned id) const {
    const auto length = item_text_lengths_.at(id);
    return std::span(item_table_).subspan(id * item_stride_,length);
}
std::span<const std::uint8_t> SubstitutionResources::raw_item_name(unsigned id) const {
    (void)item_text_lengths_.at(id);
    return std::span(item_table_).subspan(id * item_stride_,item_name_size_);
}
std::uint16_t SubstitutionResources::item_cost(unsigned id) const {
    (void)item_text_lengths_.at(id);
    const auto at = id * item_stride_ + item_name_size_ + 1;
    return std::uint16_t(item_table_[at] | unsigned(item_table_[at + 1]) << 8);
}
ItemProperties SubstitutionResources::item_properties(unsigned id) const {
    (void)item_text_lengths_.at(id);
    const auto at = id * item_stride_ + item_name_size_;
    return {item_table_[at], item_table_[at + 3],
            {item_table_[at + 6], item_table_[at + 7], item_table_[at + 8], item_table_[at + 9]}};
}
std::span<const std::uint8_t> SubstitutionResources::teleport_name(unsigned id) const { return teleports_.at(id); }
std::span<const std::uint8_t> SubstitutionResources::enemy_name(unsigned id) const { return enemies_.at(id); }
std::uint8_t SubstitutionResources::enemy_article(unsigned id) const {
    require(version_ == GameVersion::US, "Japanese enemy names have no article metadata");
    return enemy_articles_.at(id);
}
std::span<const std::uint8_t, 4> SubstitutionResources::article_text(bool capital) const {
    require(version_ == GameVersion::US, "Japanese dialogue has no article text");
    return std::span<const std::uint8_t, 4>(articles_.data() + (capital ? 0 : 4),4);
}
std::span<const std::uint8_t> SubstitutionResources::psi_name(unsigned name_id) const {
    require(name_id >= 2 && name_id <= psi_names_.size(), "PSI name requires an imported non-favourite name ID");
    return psi_names_[name_id - 1];
}
std::span<const std::uint8_t> SubstitutionResources::psi_suffix(unsigned level) const {
    require(level >= 1 && level <= suffixes_.size(), "PSI suffix level leaves its imported catalog");
    return suffixes_[level - 1];
}
PsiNameSelection SubstitutionResources::psi(unsigned ability_id) const {
    const auto result = abilities_.at(ability_id);
    require(result.name_id && result.level, "Null PSI ability has no defined name/suffix substitution");
    return result;
}
} // namespace eb::native::dialogue
