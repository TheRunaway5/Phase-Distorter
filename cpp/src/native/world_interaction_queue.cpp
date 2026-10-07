#include "eb/native/world_interaction_queue.hpp"
#include <algorithm>
#include <stdexcept>

namespace eb::native {
void WorldInteractionQueue::bind_door_scratch_tail(std::uint8_t &skip,
    std::uint8_t &padding) {
  if((skip_command_text_&&skip_command_text_!=&skip)||
     (character_padding_&&character_padding_!=&padding))
    throw std::logic_error("Door scratch dialogue owners must remain stable");
  skip_command_text_=&skip;character_padding_=&padding;
}
void WorldInteractionQueue::preflight_retain_doors() const {
  if (failed())
    throw std::logic_error("Retained doors require a healthy interaction queue");
  if (state_.current >= 4 || state_.next >= 4)
    throw std::out_of_range("Interaction queue indices exceed their four records");
  unsigned saved{};
  for (unsigned index = state_.current, visits = 0;
       visits < 4 && index != state_.next; ++visits, index = (index + 1) & 3)
    if (version_ == GameVersion::JP && state_.records[index].type == 10) {
      ++saved;
      if(!skip_command_text_||!character_padding_)
        throw std::logic_error("Japanese retained door requires actual command-text and character-padding owners");
      if(saved>1)
        throw std::logic_error("Japanese multiple retained doors require the remaining actual text-policy aliases");
    }
}
void WorldInteractionQueue::retain_doors() {
  preflight_retain_doors();
  unsigned saved = 0;
  for (unsigned visits = 0; visits < 4 && state_.current != state_.next;
       ++visits) {
    const auto &record = state_.records[state_.current];
    if (record.type == 10) {
      std::copy(record.key.begin(), record.key.end(), door_scratch_.begin() + saved * 4);
      ++saved;
    }
    state_.current = std::uint16_t((state_.current + 1) & 3);
  }
  std::fill_n(door_scratch_.begin() + saved * 4, 4, 0);
  if(version_==GameVersion::JP&&saved) {
    *skip_command_text_=door_scratch_[6];
    *character_padding_=door_scratch_[7];
  }
  // A retained null key terminates the real scratch traversal even when later
  // saved keys exist. enqueue also retains the live current_type suppression.
  for (unsigned i = 0; i < saved; ++i) {
    dialogue::ReferenceKey key;
    std::copy_n(door_scratch_.begin() + i * 4, 4, key.begin());
    if (std::all_of(key.begin(), key.end(), [](auto byte) { return byte == 0; }))
      break;
    queue_.enqueue(10, key);
  }
}
} // namespace eb::native
