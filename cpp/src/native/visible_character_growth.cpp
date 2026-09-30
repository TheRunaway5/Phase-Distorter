#include "eb/native/visible_character_growth.hpp"
#include <algorithm>
#include <stdexcept>

namespace eb::native {
VisibleCharacterGrowth::VisibleCharacterGrowth(
    std::shared_ptr<const CharacterGrowth> growth,
    std::span<const std::uint8_t> assets, party::State &party,
    story::RandomState &random, ContextReader context)
    : growth_(std::move(growth)), party_(party), random_(random),
      context_(std::move(context)) {
  if (!growth_ || growth_->version() != party.version() || !context_)
    throw std::invalid_argument("Invalid visible growth owner dependencies");
  const bool jp = party.version() == GameVersion::JP;
  const auto references =
      jp ? std::array{0xc747d7u, 0xc747ebu, 0xc74801u, 0xc74818u,
                      0xc7482du, 0xc74841u, 0xc74858u, 0xc7486bu,
                      0xc7487fu, 0xc74896u, 0xc748adu}
         : std::array{0xef7a66u, 0xef7a7du, 0xef7a97u, 0xef7ab1u,
                      0xef7ac9u, 0xef7ae0u, 0xef7afbu, 0xef7b11u,
                      0xef7b28u, 0xef7b46u, 0xef7b64u};
  for (unsigned i = 0; i < references.size(); ++i)
    for (unsigned j = 0; j < 4; ++j)
      messages_[i][j] = references[i] >> (j * 8);
  const std::size_t table = jp ? 0x159a06 : 0x158a50;
  psi_levels_.push_back({}); // Source scan starts at authored index1.
  for (unsigned i = 1; i < 256; ++i) {
    const auto at = table + i * 15;
    if (at >= assets.size())
      throw std::invalid_argument("Truncated visible growth PSI table");
    if (!assets[at])
      return;
    if (assets.size() - at < 9)
      throw std::invalid_argument("Truncated visible growth PSI levels");
    psi_levels_.push_back({assets[at + 6], assets[at + 7], assets[at + 8]});
  }
  throw std::invalid_argument("Unterminated visible growth PSI table");
}
std::unique_ptr<VisibleCharacterGrowth::Operation>
VisibleCharacterGrowth::begin(unsigned character,
                              std::optional<std::uint32_t> experience) {
  if (active_)
    throw std::logic_error("Visible character growth is already active");
  const auto &c = party_.character(character);
  growth_->validate(c, character);
  if (c.level < 1 || c.level > 99 || (!experience && c.level == 99))
    throw std::out_of_range("Invalid level for visible character growth");
  auto result =
      std::unique_ptr<Operation>(new Operation(*this, character, experience));
  active_ = result.get();
  return result;
}
std::unique_ptr<VisibleCharacterGrowth::Operation>
VisibleCharacterGrowth::begin_level_up(unsigned character) {
  return begin(character, {});
}
std::unique_ptr<VisibleCharacterGrowth::Operation>
VisibleCharacterGrowth::begin_experience(unsigned character,
                                         std::uint32_t amount) {
  return begin(character, amount);
}
VisibleCharacterGrowth::Operation::Operation(
    VisibleCharacterGrowth &owner, unsigned character,
    std::optional<std::uint32_t> experience)
    : owner_(owner), character_(character), experience_(experience),
      phase_(experience ? Phase::AddExperience : Phase::StartLevel) {}
VisibleCharacterGrowth::Operation::~Operation() {
  // Destruction releases borrowing exclusivity; it cannot undo already shown
  // dialogue or applied growth. The host decides whether to discard the scene.
  if (owner_.active_ == this)
    owner_.active_ = nullptr;
}
bool VisibleCharacterGrowth::Operation::complete() const noexcept {
  return phase_ == Phase::Complete && !request_;
}
void VisibleCharacterGrowth::Operation::respond() {
  if (!request_)
    throw std::logic_error("Visible growth has no request to acknowledge");
  request_.reset();
}
void VisibleCharacterGrowth::Operation::message(
    GrowthMessage message, std::optional<std::uint32_t> number,
    std::optional<std::uint8_t> psi) {
  GrowthPresentationRequest request;
  request.kind = GrowthRequestKind::Message;
  request.timing = GrowthRequestTiming::MaySuspend;
  request.message = message;
  request.number = number;
  request.psi = psi;
  request.authored_message = owner_.messages_[static_cast<unsigned>(message)];
  request_ = request;
}
GrowthProgress VisibleCharacterGrowth::Operation::advance() {
  if (request_)
    return GrowthProgress::AwaitingRequest;
  auto &c = owner_.party_.character(character_);
  while (phase_ != Phase::Complete) {
    switch (phase_) {
    case Phase::AddExperience:
      c.experience += *experience_;
      if (c.level >= 99 || c.experience < owner_.growth_->experience_for_level(
                                              character_, c.level + 1)) {
        phase_ = Phase::Complete;
        break;
      }
      phase_ = Phase::StartLevel;
      request_.emplace();
      request_->kind = GrowthRequestKind::LevelUpMusic;
      request_->timing = GrowthRequestTiming::MaySuspend;
      return GrowthProgress::AwaitingRequest;
    case Phase::StartLevel: {
      old_level_ = c.level;
      ++c.level;
      ++levels_gained_;
      stat_ = 0;
      psi_ = 1;
      message(GrowthMessage::Level, c.level);
      request_->prompt_mode = 1;
      GrowthTargetName name;
      const auto field = owner_.party_.name_field(character_);
      name.length = field.size();
      std::copy(field.begin(), field.end(), name.bytes.begin());
      name.clear_enemy_id = owner_.party_.version() == GameVersion::US;
      request_->target_name = name;
      phase_ = Phase::PromptAfterLevel;
      return GrowthProgress::AwaitingRequest;
    }
    case Phase::PromptAfterLevel:
      request_.emplace();
      request_->kind = GrowthRequestKind::PromptMode;
      request_->timing = GrowthRequestTiming::Immediate;
      request_->prompt_mode = 2;
      phase_ = Phase::Stats;
      return GrowthProgress::AwaitingRequest;
    case Phase::Stats: {
      owner_.growth_->validate(c, character_);
      const auto context = owner_.context_(character_);
      const auto stat = stat_;
      const auto amount = owner_.growth_->grow_stat(
          c, character_, old_level_, stat, owner_.random_, context);
      if (++stat_ == 7)
        phase_ = Phase::HP;
      if (amount) {
        message(static_cast<GrowthMessage>(1 + stat), amount);
        return GrowthProgress::AwaitingRequest;
      }
      break;
    }
    case Phase::HP: {
      const auto amount = owner_.growth_->grow_hp(c, owner_.random_);
      message(GrowthMessage::HP, amount);
      phase_ = character_ == 3 ? Phase::ClearPrompt : Phase::PP;
      return GrowthProgress::AwaitingRequest;
    }
    case Phase::PP: {
      const auto context = owner_.context_(character_);
      const auto amount =
          owner_.growth_->grow_pp(c, character_, owner_.random_, context);
      phase_ = Phase::PSI;
      if (amount) {
        message(GrowthMessage::PP, amount);
        return GrowthProgress::AwaitingRequest;
      }
      break;
    }
    case Phase::PSI: {
      const unsigned column = character_ == 4 ? 2 : character_ - 1;
      while (psi_ < owner_.psi_levels_.size()) {
        const auto id = psi_++;
        if (owner_.psi_levels_[id][column] == old_level_ + 1) {
          message(GrowthMessage::PSI, {}, static_cast<std::uint8_t>(id));
          return GrowthProgress::AwaitingRequest;
        }
      }
      phase_ = Phase::ClearPrompt;
      break;
    }
    case Phase::ClearPrompt:
      request_.emplace();
      request_->kind = GrowthRequestKind::PromptMode;
      request_->timing = GrowthRequestTiming::Immediate;
      request_->prompt_mode = 0;
      phase_ = Phase::AfterLevel;
      return GrowthProgress::AwaitingRequest;
    case Phase::AfterLevel:
      if (experience_ && c.level < 99 &&
          c.experience >=
              owner_.growth_->experience_for_level(character_, c.level + 1))
        phase_ = Phase::StartLevel;
      else
        phase_ = Phase::Complete;
      break;
    case Phase::Complete:
      break;
    }
  }
  if (owner_.active_ == this)
    owner_.active_ = nullptr;
  return GrowthProgress::Complete;
}
} // namespace eb::native
