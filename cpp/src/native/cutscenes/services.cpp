#include "eb/native/cutscenes/services.hpp"
#include <stdexcept>
namespace eb::native::cutscenes {
Services::Services(std::span<const std::uint8_t> image,GameVersion version,Display &display,story::InputState &input)
    :display_(display),coffee_resources_(image,version),coffee_text_(coffee_resources_),
     coffee_(coffee_resources_,coffee_text_,coffee_state_,display),stone_resources_(image,version),
     stone_(stone_resources_,stone_state_,display,input) {}
void Services::bind_cast(std::span<const std::uint8_t> image,GameVersion version,WorldStartupOwners world) {
  if(active_||failed_||cast_)throw std::logic_error("Cast binding requires an idle healthy unbound cinematic owner");
  display_.owners().runtime.require_content_boundary();
  auto resources=std::make_unique<cast::Resources>(image,version);
  auto scene=std::make_unique<cast::Scene>(*resources,cast_state_,display_,world);
  cast_resources_=std::move(resources);cast_=std::move(scene);
}
bool Services::supports(std::uint8_t event) const noexcept {return event==1||event==2||event==9||event==16||(event==11&&cast_);}
bool Services::uses(const story::Scene &scene) const noexcept {return coffee_.uses(scene)&&stone_.uses(scene)&&(!cast_||cast_->uses(scene));}
std::unique_ptr<Services::Operation> Services::begin(std::uint8_t event,WorldRuntime::Operation &parent) {
  if(failed_||active_||!supports(event))throw std::logic_error("Cinematic event requires its complete healthy native owner");
  display_.owners().runtime.require_content_boundary(&parent);
  Operation::Child child;
  if(event==1||event==2)child=coffee_.begin(event==2?1:0,&parent);
  else if(event==11)child=cast_->begin(&parent);
  else child=stone_.begin(event==9,&parent);
  auto result=std::unique_ptr<Operation>(new Operation(*this,std::move(child)));
  active_=result.get();active_event_=last_event_=event;++started_;return result;
}
Services::Operation::Operation(Services &owner,Child child):owner_(owner),child_(std::move(child)){}
Services::Operation::~Operation(){if(owner_.active_==this){owner_.active_=nullptr;owner_.failed_=true;}}
dialogue::Progress Services::Operation::advance(unsigned budget) {
  if(owner_.failed_)throw std::logic_error("Cinematic event owner failed");
  if(done_)return dialogue::Progress::Finished;
  try {
    const auto progress=std::visit([&](auto &child){return child->advance(budget);},child_);
    if(progress==dialogue::Progress::Finished){done_=true;owner_.active_=nullptr;owner_.active_event_=0;++owner_.completed_;}
    return progress;
  }catch(...){owner_.failed_=true;throw;}
}
WorldRuntime::Operation *Services::Operation::runtime_operation() noexcept {
  return std::visit([](auto &child){return child->runtime_operation();},child_);
}
std::uint16_t Services::Operation::result() const {
  if(!done_)throw std::logic_error("Cinematic result precedes authored scene completion");
  return std::visit([](const auto &child){return child->result();},child_);
}
bool Services::Operation::bicycle_dismount_pending() const noexcept {
  if(const auto *child=std::get_if<std::unique_ptr<cast::Scene::Operation>>(&child_))
    return (*child)->bicycle_dismount_pending();
  return false;
}
void Services::Operation::respond_bicycle_dismount() {
  if(!bicycle_dismount_pending())throw std::logic_error("Cinematic has no actual bicycle dismount request");
  std::get<std::unique_ptr<cast::Scene::Operation>>(child_)->respond_bicycle_dismount();
}
}
