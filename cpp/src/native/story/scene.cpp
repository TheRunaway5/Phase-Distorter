#include "eb/native/story/scene.hpp"
#include "eb/native/world_display_fade.hpp"
#include "eb/native/battle/animation_commands.hpp"
#include "eb/native/battle/frame.hpp"
#include "eb/native/story/window_layer.hpp"
#include "eb/native/story/party_formation.hpp"
#include "eb/native/story/battle_dialogue.hpp"
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
    battle::AnimationCommands *animations{};
    battle::Frame *battle_frame{};
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
    std::shared_ptr<const DirectSceneFrame> capture(const DirectSceneFrame &stamp, bool next) {
        // A battle publisher owns its actual planes and window composition.
        // Do not build or capacity-check a discarded overworld+window atlas.
        if (publication && publication->window_host())
            return next ? publication->capture_next(stamp) : publication->capture(stamp);
        auto result = with_window_layer(stamp,*windows.frame(),windows.palette(),view.raised_windows);
        if (!publication) return result;
        return next ? publication->capture_next(*result) : publication->capture(*result);
    }
    void publish() {
        auto stamp = *world;
        stamp.frame = frames;
        published = capture(stamp, false);
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
    std::unique_ptr<battle::AnimationCommands::Operation> animation;
    std::unique_ptr<battle::Frame::Operation> battle_frame;
    std::uint64_t owner{};
    bool done{}, tick_for_meter{}, party_sprite_blink{}, battle_after_wait{}, publication_only{};
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
        if (publication_only) { finish(); return; }
        if (battle_frame) {
            if (battle_frame->advance()) {
                battle_frame.reset();
                if (tick) tick->respond();
                else finish();
            } else {
                require(battle_frame->needs_publication(), "Battle frame lost its transfer continuation");
                pending = SceneService::Publication;
            }
            return;
        }
        if (animation) {
            if (animation->advance()) {
                const auto result = animation->result();
                animation.reset();
                if (conversation) {
                    dialogue::Response response{0, s.windows.prompt_state().pressed, s.input.held[0]};
                    response.battle_animation_result = dialogue::BattleAnimationResult{true, result};
                    conversation->respond(response);
                } else finish();
            } else {
                require(animation->service().has_value(), "Battle animation lost its pending setup service");
                pending = *animation->service() == battle::PsiSetupService::Publication
                    ? SceneService::Publication : SceneService::Frame;
            }
            return;
        }
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
                if (battle_after_wait) {
                    // A real WAIT callback may invalidate admission. Preserve
                    // the completed tick until its child has actually begun,
                    // so repairing that state retries without another WAIT.
                    auto child = s.battle_frame->begin();
                    tick.reset();
                    battle_after_wait = false;
                    battle_frame = std::move(child);
                } else {
                    tick.reset();
                    if (tick_for_meter) { meter->respond(); tick_for_meter = false; }
                    else if (conversation) answer_conversation();
                    else finish();
                }
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
            case TickService::FrameBoundary:
                if (s.battle_frame && tick->battle_body_pending()) {
                    require(s.publication && s.publication->supports_battle_frame(*s.battle_frame),
                            "Battle frame requires its actual display publisher");
                    s.battle_frame->validate_begin();
                }
                pending = SceneService::Frame;
                return;
            case TickService::BattleHelper:
                if (s.battle_frame) battle_frame = s.battle_frame->begin();
                else pending = SceneService::BattleHelper;
                return;
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
                   request && request->kind == dialogue::RequestKind::BattleAnimation && s.animations) {
            require(request->battle_animation.has_value(), "Battle animation lacks its typed operands");
            require(s.publication && s.publication->supports_animation(*s.animations),
                    "Battle animation requires its actual display publisher");
            animation = s.animations->begin(request->battle_animation->ally, request->battle_animation->enemy);
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
                                            Operation *parent,std::optional<dialogue::WindowEffect> window,
                                            std::optional<std::array<std::uint16_t, 2>> animation,
                                            bool battle_wait) {
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
    if (battle_wait) {
        require(s.battle_frame && s.publication && s.publication->supports_battle_frame(*s.battle_frame),
                "Battle frame requires its actual display publisher");
        s.battle_frame->validate_begin();
    }
    const auto owner = ++s.next;
    auto e = std::make_unique<Operation::Execution>(s,conversation,parent_tick,owner);
    if (kind) e->start_tick(*kind);
    e->battle_after_wait = battle_wait;
    if (window) e->start_window_effect(*window);
    if (animation) {
        require(s.animations != nullptr, "Scene has no battle animation owner");
        require(s.publication && s.publication->supports_animation(*s.animations),
                "Battle animation requires its actual display publisher");
        e->animation = s.animations->begin((*animation)[0], (*animation)[1]);
    }
    auto operation = std::unique_ptr<Operation>(new Operation(std::move(e)));
    s.stack.push_back(owner);
    return operation;
}
std::unique_ptr<Scene::Operation> Scene::begin_publication() {
    auto &s = *execution_;
    s.check(0);
    require(s.clock.interrupt_mask & 0x80,
            "Publication requires the actual native NMI interrupt source");
    auto operation = begin({}, nullptr, nullptr);
    operation->execution_->publication_only = true;
    operation->execution_->pending = SceneService::Publication;
    return operation;
}
std::unique_ptr<Scene::Operation> Scene::begin_battle_frame() {
    return begin(TickKind::Frame, nullptr, nullptr, {}, {}, true);
}
std::unique_ptr<Scene::Operation> Scene::begin_nested_battle_frame(Operation &parent) {
    return begin(TickKind::Frame, nullptr, &parent, {}, {}, true);
}
std::unique_ptr<Scene::Operation> Scene::begin_animation(std::uint16_t ally, std::uint16_t enemy) {
    return begin({}, nullptr, nullptr, {}, std::array<std::uint16_t, 2>{ally, enemy});
}
std::unique_ptr<Scene::Operation> Scene::begin_nested_animation(std::uint16_t ally, std::uint16_t enemy, Operation &parent) {
    return begin({}, nullptr, &parent, {}, std::array<std::uint16_t, 2>{ally, enemy});
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
FrameRequirement Scene::Operation::frame_requirement() const {
    auto &e = *execution_;
    e.check(SceneService::Frame);
    const auto &clock = e.scene.clock;
    if (!(clock.interrupt_mask & 0xb0)) return FrameRequirement::VBlank;
    return clock.new_frame_started ? FrameRequirement::InputOnly : FrameRequirement::NmiPublication;
}
void Scene::Operation::complete_publication() { complete_publication_impl(nullptr); }
void Scene::Operation::complete_publication(FrameBoundaryService &boundary) {
    complete_publication_impl(&boundary);
}
void Scene::Operation::complete_publication_impl(FrameBoundaryService *boundary) {
    auto &e = *execution_;
    auto &s = e.scene;
    s.check(e.owner);
    require(e.pending == SceneService::Publication ||
                (e.pending == SceneService::Frame && frame_requirement() == FrameRequirement::NmiPublication),
            "Scene has no pending NMI publication");
    require((s.clock.interrupt_mask & 0x80) != 0,
            "IRQ-only publication requires its native interrupt timing owner");
    if (boundary) boundary->validate_publication();
    // Queue descriptors retain live sources. A rejected immutable capture does
    // not consume the source NMI clock or invoke its scheduled callback.
    while (s.windows.publish_next()) {}
    auto stamp = *s.world;
    stamp.frame = s.frames + 1;
    auto published = s.capture(stamp, true);
    ++s.frames;
    ++s.clock.frame_counter;
    ++s.clock.new_frame_started;
    ++s.clock.publications;
    s.published = std::move(published);
    try {
        if (s.publication) s.publication->complete_publication();
        if (boundary) boundary->after_publication();
        if (e.pending == SceneService::Publication) {
            require(e.publication_only || bool(e.animation) || bool(e.battle_frame), "Publication lost its continuation");
            if (e.publication_only) {}
            else if (e.battle_frame) e.battle_frame->respond();
            else e.animation->respond();
            e.pending.reset();
        }
    } catch (...) {
        s.poisoned = true;
        throw;
    }
}
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
    if (boundary) boundary->validate_input();
    const auto requirement = frame_requirement();
    if (requirement == FrameRequirement::NmiPublication) {
        complete_publication_impl(boundary);
        // NEW_FRAME_STARTED is a byte, not a boolean. Wrapping to zero does
        // not release the source WAIT loop and must not poll input yet.
        if (!s.clock.new_frame_started) return;
    } else if (requirement == FrameRequirement::VBlank) {
        // With all B0 interrupt bits clear WAIT observes physical VBlank only.
        // It cannot transfer queued graphics/palettes or run the NMI callback.
        auto stamp = *s.world;
        stamp.frame = s.frames + 1;
        auto published = s.capture(stamp, false);
        ++s.frames;
        s.published = std::move(published);
    }
    try {
        s.clock.new_frame_started = 0;
        if (boundary) raw = boundary->read_input(raw);
        poll_input(s.input,raw,s.windows.prompt_state().debug);
        ++s.clock.input_polls;
        s.windows.prompt_state().pressed = s.input.pressed[0];
        if (e.animation) e.animation->respond();
        else {
            require(bool(e.tick), "Frame wait lost its tick continuation");
            e.tick->respond();
        }
        e.pending.reset();
    } catch (...) {
        s.poisoned = true;
        throw;
    }
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
    require(!request || (request->kind != dialogue::RequestKind::WorldControl &&
                         request->kind != dialogue::RequestKind::BattleAnimation),
            "Native command requires its bound service");
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
void Scene::bind_battle_animations(battle::AnimationCommands &animations) {
    auto &e = *execution_; e.check(0);
    require(e.publication && e.publication->supports_animation(animations),
            "Battle animations require their actual display publisher");
    require(animations.version() == e.windows.version() && animations.uses(e.clock),
            "Battle animations and Scene must share the actual region and clock");
    require(!e.animations || e.animations == &animations, "Scene already has another battle animation owner");
    require(!e.battle_frame || e.battle_frame->shares_animation(animations),
            "Battle frame and animations must share the actual PSI, roster and swirl owners");
    require(!animations.failed(), "Scene cannot bind failed battle animations");
    e.animations = &animations;
}
void Scene::bind_battle_frame(battle::Frame &frame) {
    auto &e = *execution_; e.check(0);
    require(e.publication && e.publication->supports_battle_frame(frame),
            "Battle frame requires its actual display publisher");
    require(frame.version() == e.windows.version() &&
                frame.uses(e.clock, e.windows, e.party, e.meters),
            "Battle frame and Scene must share the actual region, windows, party, meters and clock");
    require(!e.battle_frame || e.battle_frame == &frame, "Scene already has another battle frame owner");
    require(!e.animations || frame.shares_animation(*e.animations),
            "Battle frame and animations must share the actual PSI, roster and swirl owners");
    frame.validate_begin();
    e.battle_frame = &frame;
}
void Scene::bind_publication(ScenePublication &publication) {
    auto &s = *execution_;
    s.check(0);
    require(!s.animations || publication.supports_animation(*s.animations),
            "Scene publication does not own the bound battle animation transport");
    require(!s.battle_frame || publication.supports_battle_frame(*s.battle_frame),
            "Scene publication does not own the bound battle frame transport");
    require(!publication.window_host() || publication.window_host() == &s.windows,
            "Scene publication must share the actual window host");
    require(!s.publication || s.publication == &publication, "Scene already has a publication owner");
    s.publication = &publication;
}
const ScenePublication *Scene::publication() const noexcept { return execution_->publication; }
bool Scene::uses(const TickState &clock) const noexcept { return &execution_->clock == &clock; }
bool Scene::uses(const dialogue::WindowHost& windows, const party::State& party) const noexcept {
    return &execution_->windows == &windows && &execution_->party == &party;
}
bool Scene::uses(const BattleDialogue& dialogue) const noexcept {
    return dialogue.uses(execution_->windows, execution_->input);
}
bool Scene::uses(const PartyFormation& formation) const noexcept {
    const auto& e = *execution_;
    return formation.bound_to(e.party, e.actors, e.windows, e.clock) &&
        (!e.interactions || formation.uses(*e.interactions)) &&
        (!e.formation || e.formation == &formation);
}
void Scene::handoff_publication(ScenePublication &expected, ScenePublication &next,
                                const WorldDisplayFade &fade, BattleServices services) {
    auto &s = *execution_;
    s.check(0);
    require(s.publication == &expected && &expected != &next,
            "Scene handoff requires its distinct expected and next publishers");
    require(fade.state().brightness & 0x80, "Scene handoff requires actual forced blank");
    require((!s.battle_frame || (!s.battle_frame->busy() && !s.battle_frame->failed())) &&
                (!s.animations || (!s.animations->busy() && !s.animations->failed())),
            "Scene handoff cannot detach unfinished battle services");
    const auto before_fade = expected.display_fade(), after_fade = next.display_fade();
    require((before_fade || after_fade) && (!before_fade || before_fade == &fade) &&
                (!after_fade || after_fade == &fade),
            "Scene handoff requires the actual shared display fade owner");
    const auto *visual = expected.publication_visual();
    require(visual && next.uses_visual(*visual),
            "Scene handoff requires the actual shared visual owner");
    require(expected.frame_display() && next.uses_frame_display(*expected.frame_display()),
            "Scene handoff requires the actual shared global display transport");
    require((!expected.window_host() || expected.window_host() == &s.windows) &&
                (!next.window_host() || next.window_host() == &s.windows),
            "Scene handoff must retain the actual window host");
    auto *before = expected.window_palette_publication();
    auto *after = next.window_palette_publication();
    require(before && after && s.windows.palette_publication() == before,
            "Scene handoff lost its actual window palette routing");
    if (services.frame) {
        require(next.supports_battle_frame(*services.frame) &&
                    services.frame->version() == s.windows.version() &&
                    services.frame->uses(s.clock, s.windows, s.party, s.meters),
                "Scene handoff requires the actual battle frame owners");
        services.frame->validate_begin();
    }
    if (services.animations) {
        require(next.supports_animation(*services.animations) &&
                    services.animations->version() == s.windows.version() &&
                    services.animations->uses(s.clock) && !services.animations->failed() &&
                    !services.animations->busy(),
                "Scene handoff requires the actual battle animation owners");
        require(!services.frame || services.frame->shares_animation(*services.animations),
                "Battle frame and animations must share the actual PSI, roster and swirl owners");
    }
    // All fallible admission is complete. The checked sink replacement and
    // pointer commits do not capture, consume transfers or invoke callbacks.
    s.windows.replace_palette_publication(*before, *after);
    s.publication = &next;
    s.battle_frame = services.frame;
    s.animations = services.animations;
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
bool Scene::failed() const noexcept { return execution_->poisoned; }
bool Scene::busy() const noexcept { return !execution_->stack.empty(); }
std::uint64_t Scene::completed_frames() const { return execution_->frames; }
std::shared_ptr<const DirectSceneFrame> Scene::frame() const { return execution_->published; }
std::vector<WorldSoundEvent> Scene::take_sound_events() { return std::exchange(execution_->sounds,{}); }
} // namespace eb::native::story
