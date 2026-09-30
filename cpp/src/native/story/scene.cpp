#include "eb/native/story/scene.hpp"
#include "eb/native/story/window_layer.hpp"
#include "eb/native/story/party_formation.hpp"
#include "eb/native/story/teddy_party.hpp"
#include "eb/native/npcs/interaction.hpp"
#include "eb/native/party/inventory.hpp"
#include <stdexcept>
#include <utility>

namespace eb::native::story {
namespace {
void require(bool ok, const char *message) { if (!ok) throw std::logic_error(message); }
float camera_pixel(std::uint16_t value) {
    return float(value < 0x8000 ? int(value) : int(value) - 65536);
}
}
struct Scene::Execution {
    dialogue::WindowHost &windows;
    party::State &party;
    RandomState &random;
    npcs::Interactions *interactions{};
    party::Inventory *inventory{};
    PartyFormation *formation{};
    TeddyParty *teddy{};
    WorldControlCommandService *world_control{};
    party::MeterWindows &meters;
    TickState &clock;
    InputState &input;
    ActorWorld &actors;
    WorldMapArea &area;
    AreaPalettes &palettes;
    SceneView view;
    Ticks ticks;
    std::vector<std::uint64_t> stack;
    std::uint64_t next{}, frames{};
    bool poisoned{};
    ScenePublication *publication{};
    std::shared_ptr<const DirectSceneFrame> objects, world, published;
    std::vector<WorldSoundEvent> sounds;
    Execution(dialogue::WindowHost &w, party::State &p, RandomState &r, party::MeterWindows &m,
              TickState &c, InputState &i, ActorWorld &a, WorldMapArea &map, AreaPalettes &colors, SceneView v)
        : windows(w), party(p), random(r), meters(m), clock(c), input(i), actors(a), area(map), palettes(colors), view(v), ticks(w,p,r,m,c) {
        require(view.width >= 256, "Native story scene must include the canonical screen");
        objects = actors.draw(view.width,palettes.sprites,view.identity,view.overscan);
        screen();
        publish();
        // Commit the borrowed identity only after every fallible capture has
        // succeeded; a failed constructor must not pin a discarded party.
        windows.bind_party(p);
    }
    void check(std::uint64_t owner) const {
        require(!poisoned, "An abandoned scene operation invalidated its continuation");
        require((stack.empty() ? 0 : stack.back()) == owner, "A child operation owns the native scene");
    }
    void screen() {
        const auto &camera = actors.scene();
        // Actor ticks and scene frames differ during frame-only and nested
        // waits. Retag a copy for this screen without mutating its capture.
        std::shared_ptr<const DirectSceneFrame> scene_objects;
        if (objects) {
            auto copy = std::make_shared<DirectSceneFrame>(*objects);
            copy->frame = frames;
            scene_objects = std::move(copy);
        }
        world = draw_world_scene(area,palettes,
            {camera_pixel(camera.camera_x),camera_pixel(camera.camera_y),view.width,view.overscan,
             frames,view.identity,view.backdrop},std::move(scene_objects));
    }
    void publish() {
        auto stamp = *world;
        stamp.frame = frames;
        auto result = with_window_layer(stamp,*windows.frame(),windows.palette(),view.raised_windows);
        published = publication ? publication->capture(*result) : std::move(result);
    }
};
struct Scene::Operation::Execution {
    Scene::Execution &scene;
    dialogue::Conversation *conversation{};
    Ticks::Operation *parent_tick{};
    std::unique_ptr<Ticks::Operation> tick;
    std::unique_ptr<party::MeterWindows::Operation> meter;
    std::unique_ptr<party::Inventory::Operation> receipt;
    std::unique_ptr<PartyFormation::Operation> formation;
    std::unique_ptr<TeddyParty::Operation> teddy;
    std::uint64_t owner{};
    bool done{}, tick_for_meter{}, party_sprite_blink{};
    std::optional<SceneService> pending;
    Execution(Scene::Execution &s, dialogue::Conversation *c, Ticks::Operation *parent, std::uint64_t token)
        : scene(s), conversation(c), parent_tick(parent), owner(token) {}
    void start_tick(TickKind kind) {
        tick = parent_tick ? scene.ticks.begin_nested(kind,*parent_tick) : scene.ticks.begin(kind);
    }
    void start_window_effect(dialogue::WindowEffect effect) {
        switch(effect.kind) {
        case dialogue::WindowEffectKind::WindowTick: start_tick(TickKind::Window); return;
        case dialogue::WindowEffectKind::FrameWait: start_tick(TickKind::Frame); return;
        case dialogue::WindowEffectKind::ClearPartyBlink: party_sprite_blink=true; return;
        case dialogue::WindowEffectKind::HideMeters:
            meter=scene.meters.begin_hide(scene.windows.prompt_state().battle_mode!=0); return;
        }
        throw std::invalid_argument("Unknown native window effect");
    }
    void check(SceneService kind) const {
        scene.check(owner);
        require(pending == kind,"Native scene has no matching pending service");
    }
    void answer_conversation(std::uint16_t value = 0) {
        // Prompt callbacks may update the shared press word after polling.
        // Preserve that live word; held-repeat still comes from input processing.
        conversation->respond({value,scene.windows.prompt_state().pressed,scene.input.held[0]});
    }
    void answer_item(dialogue::ItemCommandResult result) {
        dialogue::Response response{0,scene.windows.prompt_state().pressed,scene.input.held[0]};
        response.item_result=std::move(result);
        conversation->respond(response);
    }
    void finish() { scene.stack.pop_back(); done = true; }
    void step() {
        auto &s = scene;
        if (party_sprite_blink) {
            // CREATE_WINDOW calls C07C5B, which clears the party actors'
            // spritemap high-bit flags only while intangibility is nonzero.
            // This is not the meter selection helper and adds no frame wait.
            if (s.actors.appearance_scene().intangibility_ticks) pending=SceneService::PartySpriteBlink;
            else {
                party_sprite_blink=false;
                if(conversation) answer_conversation();
                else finish();
            }
            return;
        }
        if (tick) {
            const auto progress = tick->advance(1);
            if (progress == dialogue::Progress::Finished) {
                tick.reset();
                if (tick_for_meter) { meter->respond(); tick_for_meter = false; }
                else if (conversation) answer_conversation();
                else finish();
                return;
            }
            if (progress == dialogue::Progress::BudgetExhausted) return;
            switch (*tick->service()) {
            case TickService::ClearObjects:
                s.objects.reset();
                tick->respond();
                return;
            case TickService::RunActors: {
                const auto result = s.actors.advance_tick();
                if (result == WorldTickResult::NeedsEngine) pending = SceneService::ActorEngine;
                else if (result == WorldTickResult::NeedsCameraRefresh) pending = SceneService::CameraRefresh;
                else {
                    s.objects = s.actors.draw(s.view.width,s.palettes.sprites,s.view.identity,s.view.overscan);
                    auto sounds = s.actors.take_sound_events();
                    s.sounds.insert(s.sounds.end(),sounds.begin(),sounds.end());
                    tick->respond();
                }
                return;
            }
            case TickService::UpdateScreen: s.screen(); tick->respond(); return;
            case TickService::FrameBoundary: pending = SceneService::Frame; return;
            case TickService::BattleHelper: pending = SceneService::BattleHelper; return;
            }
        }
        if (meter) {
            if (meter->advance() == dialogue::OutputProgress::Complete) {
                meter.reset();
                if(conversation) answer_conversation();
                else finish();
            } else {
                require(meter->effect() && meter->effect()->kind == dialogue::WindowEffectKind::FrameWait,
                        "Unexpected native meter continuation");
                tick_for_meter = true;
                start_tick(TickKind::Frame);
            }
            return;
        }
        if (teddy) {
            const auto progress = teddy->advance(1);
            if (progress == dialogue::Progress::Finished) {
                teddy.reset();
                receipt->respond();
            } else if (progress == dialogue::Progress::Suspended) {
                require(teddy->service() == PartyFormationService::BicycleDismount,
                        "Unknown native Teddy lifecycle service");
                pending = SceneService::BicycleDismount;
            }
            return;
        }
        if (receipt) {
            const auto progress=receipt->advance(1);
            if(progress==dialogue::Progress::Finished) {
                const auto recipient=receipt->recipient();
                if(!recipient) {pending=SceneService::ItemFailureScan;return;}
                const auto next=s.inventory->first_empty_index(recipient);
                answer_item({recipient,next});receipt.reset();
            } else if(progress==dialogue::Progress::Suspended) {
                require(receipt->service()==party::InventoryService::TeddyRefresh,
                        "Unknown native item receipt service");
                if(s.teddy) teddy=s.teddy->begin();
                else pending=SceneService::TeddyRefresh;
            }
            return;
        }
        if (formation) {
            const auto progress = formation->advance(1);
            if (progress == dialogue::Progress::Finished) {
                formation.reset();
                answer_conversation();
            } else if (progress == dialogue::Progress::Suspended) {
                require(formation->service() == PartyFormationService::BicycleDismount,
                        "Unknown native party formation service");
                pending = SceneService::BicycleDismount;
            }
            return;
        }
        require(conversation != nullptr,"Native scene lost its current operation");
        const auto progress = conversation->advance(1);
        if (progress == dialogue::Progress::Finished) { finish(); return; }
        if (progress == dialogue::Progress::BudgetExhausted) return;
        const auto &event = *conversation->event();
        if (const auto *text = std::get_if<dialogue::TextEffect>(&event)) {
            if (text->kind == dialogue::TextEffectKind::WindowTick) start_tick(TickKind::Window);
            else pending = SceneService::Dialogue; // Audio owner must finish TextSound.
        } else if (const auto *window = std::get_if<dialogue::WindowEffect>(&event)) {
            start_window_effect(*window);
        } else if (std::holds_alternative<dialogue::PromptEffect>(event)) start_tick(TickKind::World);
        else if (const auto *request = std::get_if<dialogue::Request>(&event);
                 request && request->kind == dialogue::RequestKind::ScriptSound) {
            require(request->script_sound.has_value(), "Script sound lacks its typed audio service");
            pending = SceneService::ScriptSound;
        } else if (const auto *request = std::get_if<dialogue::Request>(&event);
                   request && request->kind == dialogue::RequestKind::WorldControl && s.world_control) {
            require(request->world_control.has_value(), "World control lacks its typed command");
            try { s.world_control->apply(*request->world_control); }
            catch (...) { s.poisoned = true; throw; }
            answer_conversation();
        } else if (const auto *request = std::get_if<dialogue::Request>(&event);
                   request && request->kind == dialogue::RequestKind::SoundWorldTick) start_tick(TickKind::World);
        else if (const auto *request = std::get_if<dialogue::Request>(&event);
                 request && request->kind == dialogue::RequestKind::ShowMeters) meter = s.meters.begin_show();
        else if (const auto *request = std::get_if<dialogue::Request>(&event);
                 request && request->kind == dialogue::RequestKind::RefreshParty && s.formation)
            formation = s.formation->begin();
        else if (const auto *request = std::get_if<dialogue::Request>(&event);
                 request && request->kind == dialogue::RequestKind::NpcGift && s.interactions) {
            require(request->npc_gift.has_value(),"Gift request lacks its typed action");
            npcs::GiftAction action;
            switch(*request->npc_gift) {
            case dialogue::NpcGiftAction::Open:action=npcs::GiftAction::Open;break;
            case dialogue::NpcGiftAction::Close:action=npcs::GiftAction::Close;break;
            case dialogue::NpcGiftAction::IsOpen:action=npcs::GiftAction::IsOpen;break;
            default:throw std::logic_error("Unknown native NPC gift action");
            }
            answer_conversation(s.interactions->apply_gift(action));
        } else if (const auto *request = std::get_if<dialogue::Request>(&event);
                   request && request->kind == dialogue::RequestKind::ItemCommand && s.inventory) {
            require(request->item_command.has_value(),"Item request lacks its typed operands");
            const auto& command=*request->item_command;
            switch(command.kind) {
            case dialogue::ItemCommandKind::FindSpace: {
                const auto result=s.inventory->find_space(command.character);
                answer_item({result<0x8000?std::uint32_t(result):0xffff0000u|result,{}});break;
            }
            case dialogue::ItemCommandKind::AddMoney:
                answer_item({s.inventory->add_wallet32(command.amount),{}});break;
            case dialogue::ItemCommandKind::Give:
                receipt=s.inventory->begin_give(command.character,command.item);break;
            default:throw std::logic_error("Unknown native item command");
            }
        }
        else if (const auto *menu = std::get_if<dialogue::MenuEffect>(&event);
                 menu && menu->kind == dialogue::MenuEffectKind::Input) answer_conversation();
        else pending = SceneService::Dialogue;
    }
};
Scene::Scene(dialogue::WindowHost &w, party::State &p, RandomState &r, party::MeterWindows &m,
             TickState &c, InputState &i, ActorWorld &a, WorldMapArea &map, AreaPalettes &colors, SceneView v)
    : execution_(std::make_unique<Execution>(w,p,r,m,c,i,a,map,colors,v)) {}
Scene::~Scene() = default;
Scene::Operation::Operation(std::unique_ptr<Execution> e) : execution_(std::move(e)) {}
Scene::Operation::~Operation() { if (!execution_->done) execution_->scene.poisoned = true; }
std::unique_ptr<Scene::Operation> Scene::begin(std::optional<TickKind> kind, dialogue::Conversation *conversation,
                                            Operation *parent,std::optional<dialogue::WindowEffect> window) {
    auto &s = *execution_;
    s.check(parent ? parent->execution_->owner : 0);
    Ticks::Operation *parent_tick{};
    if (parent) {
        auto &p = *parent->execution_;
        require(&p.scene == &s && p.pending == SceneService::ActorEngine && p.tick,
                "Nested scene work requires this scene's suspended actor service");
        parent_tick = p.tick.get();
    }
    if (conversation) require(&conversation->output() == &s.windows.output(),
                              "Conversation and scene must share the window output owner");
    const auto owner = ++s.next;
    auto e = std::make_unique<Operation::Execution>(s,conversation,parent_tick,owner);
    if (kind) e->start_tick(*kind);
    if (window) e->start_window_effect(*window);
    auto operation = std::unique_ptr<Operation>(new Operation(std::move(e)));
    s.stack.push_back(owner);
    return operation;
}
std::unique_ptr<Scene::Operation> Scene::begin(TickKind kind) { return begin(kind,nullptr,nullptr); }
std::unique_ptr<Scene::Operation> Scene::begin(dialogue::WindowEffect effect) {
    return begin({},nullptr,nullptr,effect);
}
std::unique_ptr<Scene::Operation> Scene::begin(dialogue::Conversation &c) { return begin({},&c,nullptr); }
std::unique_ptr<Scene::Operation> Scene::begin_nested(dialogue::Conversation &c, Operation &parent) {
    return begin({},&c,&parent);
}
std::unique_ptr<Scene::Operation> Scene::begin_nested(TickKind kind, Operation &parent) {
    return begin(kind,nullptr,&parent);
}
dialogue::Progress Scene::Operation::advance(unsigned budget) {
    auto &e = *execution_;
    if (e.done) return dialogue::Progress::Finished;
    e.scene.check(e.owner);
    // Erasing a suspended actor cancels only its request, never the whole tick.
    if (e.pending == SceneService::ActorEngine && !e.scene.actors.request()) e.pending.reset();
    if (e.pending) return dialogue::Progress::Suspended;
    while (budget--) {
        e.step();
        if (e.done) return dialogue::Progress::Finished;
        if (e.pending) return dialogue::Progress::Suspended;
    }
    return dialogue::Progress::BudgetExhausted;
}
const std::optional<SceneService> &Scene::Operation::service() const { return execution_->pending; }
void Scene::Operation::complete_frame(std::array<std::uint16_t,2> raw) {
    complete_frame_impl(raw, nullptr);
}
void Scene::Operation::complete_frame(std::array<std::uint16_t,2> host, FrameBoundaryService &boundary) {
    complete_frame_impl(host, &boundary);
}
void Scene::Operation::complete_frame_impl(std::array<std::uint16_t,2> raw, FrameBoundaryService *boundary) {
    auto &e = *execution_;
    e.check(SceneService::Frame);
    auto &s = e.scene;
    if (boundary) boundary->validate_frame();
    // Publication completes at the native frame boundary. A queue contains live
    // sources: staging after enqueue and before this boundary remains visible.
    while (s.windows.publish_next()) {}
    auto stamp = *s.world;
    stamp.frame = s.frames + 1;
    auto published = with_window_layer(stamp,*s.windows.frame(),s.windows.palette(),s.view.raised_windows);
    if (s.publication) published = s.publication->capture(*published);
    // Validate/capture before consuming the frame or input sample. A failed
    // renderer capacity check must not turn a retried boundary into two ticks.
    ++s.frames;
    ++s.clock.frame_counter;
    s.published = std::move(published);
    try {
        if (s.publication) s.publication->complete_publication();
        if (boundary) raw = boundary->read_after_publication(raw);
        poll_input(s.input,raw,s.windows.prompt_state().debug);
        s.windows.prompt_state().pressed = s.input.pressed[0];
    } catch (...) {
        s.poisoned = true;
        throw;
    }
    e.tick->respond();
    e.pending.reset();
}
const std::optional<WorldActionRequest> &Scene::Operation::actor_request() const {
    execution_->check(SceneService::ActorEngine); return execution_->scene.actors.request();
}
void Scene::Operation::respond_actor(std::uint16_t value, unsigned bytes,
                                     std::optional<std::uint16_t> sleep_frames) {
    auto &e = *execution_; e.check(SceneService::ActorEngine);
    e.scene.actors.respond(value,bytes,sleep_frames); e.pending.reset();
}
const std::optional<WorldCameraRefresh> &Scene::Operation::camera_request() const {
    execution_->check(SceneService::CameraRefresh); return execution_->scene.actors.camera_refresh();
}
void Scene::Operation::respond_camera() {
    auto &e = *execution_; e.check(SceneService::CameraRefresh);
    e.scene.actors.respond_camera_refresh(); e.pending.reset();
}
void Scene::Operation::respond_battle() {
    auto &e = *execution_; e.check(SceneService::BattleHelper); e.tick->respond(); e.pending.reset();
}
void Scene::Operation::respond_party_sprite_blink() {
    auto &e = *execution_; e.check(SceneService::PartySpriteBlink);
    e.party_sprite_blink=false; e.pending.reset();
    if(e.conversation) e.answer_conversation();
    else e.finish();
}
void Scene::Operation::respond_teddy_refresh() {
    auto &e = *execution_; e.check(SceneService::TeddyRefresh);
    e.receipt->respond(); e.pending.reset();
}
void Scene::Operation::respond_item_failure_scan(std::uint16_t first_empty) {
    auto &e = *execution_; e.check(SceneService::ItemFailureScan);
    require(first_empty<=14,"Receipt failure photo scan returned an invalid index");
    e.answer_item({0,first_empty});e.receipt.reset();e.pending.reset();
}
const dialogue::ScriptSoundRequest &Scene::Operation::script_sound() const {
    auto &e = *execution_; e.check(SceneService::ScriptSound);
    const auto &request = std::get<dialogue::Request>(*e.conversation->event());
    require(request.script_sound.has_value(), "Script sound lacks its typed audio service");
    return *request.script_sound;
}
void Scene::Operation::respond_script_sound() {
    auto &e = *execution_; e.check(SceneService::ScriptSound);
    e.answer_conversation(); e.pending.reset();
}
void Scene::Operation::respond_bicycle_dismount() {
    auto &e = *execution_; e.check(SceneService::BicycleDismount);
    if(e.teddy) e.teddy->respond_bicycle_dismount();
    else { require(bool(e.formation),"Scene lost its suspended formation owner");e.formation->respond_bicycle_dismount(); }
    e.pending.reset();
}
const std::optional<dialogue::ConversationEvent> &Scene::Operation::dialogue_event() const {
    execution_->check(SceneService::Dialogue); return execution_->conversation->event();
}
void Scene::Operation::respond_dialogue(dialogue::Response response) {
    auto &e = *execution_; e.check(SceneService::Dialogue);
    const auto *request = std::get_if<dialogue::Request>(&*e.conversation->event());
    require(!request || request->kind != dialogue::RequestKind::WorldControl,
            "Native world control command requires its bound service");
    e.conversation->respond(response); e.pending.reset();
}
bool Scene::Operation::complete() const { return execution_->done; }
void Scene::bind_interactions(npcs::Interactions& interactions) {
    auto &e=*execution_; e.check(0);
    require(shares_world(interactions.windows(),interactions.actors()),
            "Gift interactions and Scene must share actual windows and actors");
    require(!e.interactions || e.interactions==&interactions,"Scene already has another interaction owner");
    interactions.bind_event_flags();
    e.interactions=&interactions;
}
void Scene::bind_inventory(party::Inventory& inventory) {
    auto &e=*execution_; e.check(0);
    require(inventory.bound_to(e.party,e.random),"Inventory and Scene must share the actual party and random owners");
    require(!e.inventory || e.inventory==&inventory,"Scene already has another inventory owner");
    e.inventory=&inventory;
}
void Scene::bind_party_formation(PartyFormation& formation) {
    auto &e = *execution_; e.check(0);
    require(e.interactions && formation.bound_to(e.party,e.actors,*e.interactions,e.clock),
            "Formation and Scene must share actual party, actors, interactions and clock");
    require(!e.formation || e.formation==&formation,"Scene already has another formation owner");
    e.formation=&formation;
}
void Scene::bind_teddy_party(TeddyParty& teddy) {
    auto &e = *execution_; e.check(0);
    require(e.inventory && e.formation && teddy.bound_to(e.party,e.actors,*e.formation,*e.inventory),
            "Teddy lifecycle and Scene must share actual party, actors, formation and inventory resources");
    require(!e.teddy || e.teddy==&teddy,"Scene already has another Teddy lifecycle owner");
    e.teddy=&teddy;
}
void Scene::bind_world_control(WorldControlCommandService& control) {
    auto &e=*execution_; e.check(0);
    require(control.uses(e.actors), "World control and Scene must share actual actors");
    require(!e.world_control || e.world_control==&control,"Scene already has another world control owner");
    e.world_control=&control;
}
void Scene::bind_publication(ScenePublication &publication) {
    auto &s = *execution_;
    s.check(0);
    require(!s.publication || s.publication == &publication, "Scene already has a publication owner");
    s.publication = &publication;
}
void Scene::clear_world_capture() {
    auto &s = *execution_;
    s.check(0);
    s.objects.reset();
    s.world.reset();
    s.published.reset();
}
void Scene::refresh_world_capture() {
    auto &s = *execution_;
    s.check(0);
    s.screen();
    s.publish();
}
bool Scene::shares_world(const dialogue::WindowHost& windows,const ActorWorld& actors) const {
    return &execution_->windows==&windows && &execution_->actors==&actors;
}
std::uint64_t Scene::completed_frames() const { return execution_->frames; }
std::shared_ptr<const DirectSceneFrame> Scene::frame() const { return execution_->published; }
std::vector<WorldSoundEvent> Scene::take_sound_events() { return std::exchange(execution_->sounds,{}); }
} // namespace eb::native::story
