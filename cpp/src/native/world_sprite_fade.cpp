#include "eb/native/world_sprite_fade.hpp"
#include <algorithm>
#include <stdexcept>

namespace eb::native {
namespace {
constexpr unsigned records_base = 0x7c00, marks_base = 0x7f00;
std::uint16_t word(const battle::PsiScratch &scratch, unsigned at) {
    return std::uint16_t(scratch.bytes.at(at) | unsigned(scratch.bytes.at(at + 1)) << 8);
}
void word(battle::PsiScratch &scratch, unsigned at, std::uint16_t value) {
    scratch.bytes.at(at) = std::uint8_t(value);
    scratch.bytes.at(at + 1) = std::uint8_t(value >> 8);
}
std::vector<std::uint8_t> pixels(const battle::PsiScratch &scratch, unsigned start,
                               unsigned width, unsigned height) {
    std::vector<std::uint8_t> result(width * height);
    for (unsigned y = 0; y < height; ++y)
        for (unsigned x = 0; x < width; ++x) {
            const auto at = start + ((y / 8) * (width / 8) + x / 8) * 32 + (y & 7) * 2;
            for (unsigned plane = 0; plane < 4; ++plane)
                result[y * width + x] |= ((scratch.bytes.at(at + (plane / 2) * 16 + (plane & 1)) >>
                                          (7 - (x & 7))) & 1) << plane;
        }
    return result;
}
void pixels(battle::PsiScratch &scratch, unsigned start, unsigned width,
            unsigned height, std::span<const std::uint8_t> input) {
    std::fill_n(scratch.bytes.begin() + start, width * height / 2, 0);
    for (unsigned y = 0; y < height; ++y)
        for (unsigned x = 0; x < width; ++x) {
            const auto at = start + ((y / 8) * (width / 8) + x / 8) * 32 + (y & 7) * 2;
            for (unsigned plane = 0; plane < 4; ++plane)
                scratch.bytes.at(at + (plane / 2) * 16 + (plane & 1)) |=
                    ((input[y * width + x] >> plane) & 1) << (7 - (x & 7));
        }
}
} // namespace
struct WorldSpriteFade::Record {
    unsigned role{}, address{};
    ActorId generation{};
    SpriteEffectCanvas canvas;
    Record(unsigned role, unsigned address, ActorId generation, SpriteEffectCanvas canvas)
        : role(role), address(address), generation(generation), canvas(std::move(canvas)) {}
};
WorldSpriteFade::WorldSpriteFade(const SpriteEffectContent &content, ActorWorld &actors,
                               story::RandomState &random, PreparedActorState &prepared,
                               battle::PsiScratch &scratch)
    : content_(content), actors_(actors), random_(random), prepared_(prepared), scratch_(scratch) {}
WorldSpriteFade::~WorldSpriteFade() = default;
WorldActor &WorldSpriteFade::target(const Record &record) {
    if (actors_.actor_for_role(record.role) != record.generation)
        throw std::logic_error("Sprite fade refers to a retired actor generation");
    auto &actor = actors_.actor(record.generation);
    if (!actor.has_appearance() || !actor.appearance.available())
        throw std::logic_error("Sprite fade appearance was released");
    return actor;
}
void WorldSpriteFade::apply(std::uint16_t role, std::uint16_t mode) {
    if (mode == 0 || mode == 1 || mode == 6)
        return;
    const auto id = actors_.actor_for_role(role);
    if (!id)
        throw std::logic_error("Sprite fade requires a living authored artwork owner");
    auto &actor = actors_.actor(*id);
    if (!actor.has_appearance() || !actor.appearance.available() || !actor.appearance.geometry_height())
        return;
    const unsigned pose = role >= 24
        ? eight_direction_pose(actor.behavior.direction, actor.action().animation)
        : four_direction_pose(actor.behavior.direction, 0);
    const auto seed = content_.seed(actor.appearance.sprite(), pose, true);
    const auto planar = content_.planar_seed(actor.appearance.sprite(), pose);
    const auto bytes = seed.width * seed.height / 2;
    const unsigned start = controller_ ? allocated_ : 0;
    const unsigned index = controller_ ? count_ : 0;
    // The source can overwrite its own records for corrupt/outsize inputs.
    // Native ownership does not invent canvases after that ownership is lost.
    if (bytes * 2 + start + 2 > records_base || (index + 1) * 20 > marks_base - records_base ||
        planar.size() != bytes + 2)
        throw std::out_of_range("Sprite fade exceeds its owned scratch buffers or records");
    if (controller_ && !actors_.actor(*controller_).authored_role())
        throw std::logic_error("Sprite fade controller lost its authored role");
    SpriteEffectCanvas canvas(seed, mode >= 2 && mode <= 5
                                      ? SpriteEffectDirection::Reveal : SpriteEffectDirection::Erase);
    records_.reserve(index + 1);
    if (!controller_) {
        // INIT_ENTITY_WIPE's prepared fields are real shared creation state.
        auto prepared = prepared_;
        prepared.height = 0;
        prepared.variables = {};
        prepared.priority = 0;
        auto input = prepared;
        input.x = input.y = 0;
        const auto created = actors_.create_authored_script(actors_.version() == GameVersion::JP ? 855 : 859, input, {0,30});
        if (!created)
            throw std::logic_error("Sprite fade controller allocation exhausted authored roles");
        prepared_ = prepared;
        controller_ = *created;
        records_.clear();
        count_ = allocated_ = 0;
        pause_saved_ = false;
        std::fill_n(scratch_.bytes.begin() + records_base, 1024, 0);
    }
    const unsigned address = records_base + count_ * 20;
    const auto destination = start + bytes;
    const unsigned kind = (mode >= 2 && mode <= 5) ? mode - 1 :
                          (mode >= 7 && mode <= 10) ? mode - 6 : 0;
    word(scratch_, address, role);
    actor.appearance.set_fade_hidden(true);
    word(scratch_, address + 2, mode);
    word(scratch_, address + 6, std::uint16_t(seed.width));
    word(scratch_, address + 8, std::uint16_t(seed.height));
    word(scratch_, address + 10, std::uint16_t(start));
    word(scratch_, address + 12, std::uint16_t(destination));
    word(scratch_, address + 14, std::uint16_t(bytes));
    allocated_ = std::uint16_t(start + bytes * 2);
    std::fill_n(scratch_.bytes.begin() + start, bytes * 2, 0);
    word(scratch_, address + 16, 0);
    word(scratch_, address + 18, 0);
    const auto seed_at = mode >= 2 && mode <= 5 ? start : destination;
    // Descending inclusive word copy includes the following buffer's first word.
    std::copy(planar.begin(), planar.end(), scratch_.bytes.begin() + seed_at);
    auto &variables = actors_.actor(*controller_).action().variables;
    if (kind) {
        variables[kind - 1] = 1;
        word(scratch_, address + 4, std::uint16_t(kind));
    }
    variables[4] = std::uint16_t(variables[0] + variables[1] + variables[2] + variables[3]);
    records_.emplace_back(role, address, *id, std::move(canvas));
    ++count_;
}
void WorldSpriteFade::publish(Record &record) {
    auto &appearance = target(record).appearance;
    const auto current = appearance.image();
    if (!current)
        throw std::logic_error("Sprite fade upload requires an actual displayed orientation");
    appearance.replace_image(record.canvas.snapshot(current->authored_mirror
                                  ? SpriteOrientation::Mirrored : SpriteOrientation::Normal));
}
std::optional<std::uint16_t> WorldSpriteFade::step(WorldSpriteFadeTask task, ActorId controller) {
    if (task < WorldSpriteFadeTask::PauseActors || task > WorldSpriteFadeTask::ReleaseController)
        throw std::invalid_argument("Invalid sprite fade task");
    if (!controller_ || *controller_ != controller)
        throw std::logic_error("Sprite fade helper requires its live controller generation");
    const auto controller_role = actors_.actor(controller).authored_role();
    if (!controller_role)
        throw std::logic_error("Sprite fade controller requires an authored role");
    if (task == WorldSpriteFadeTask::PauseActors) {
        for (unsigned role = 0; role < paused_.size(); ++role)
            paused_[role] = actors_.authored_pause(role);
        for (unsigned role = 0; role < paused_.size(); ++role)
            if (role != *controller_role && actors_.actor_for_role(role))
                actors_.set_authored_pause(role, false, false);
        pause_saved_ = true;
        return {};
    }
    if (task == WorldSpriteFadeTask::RestoreActors) {
        if (!pause_saved_)
            throw std::logic_error("Sprite fade pause backup has not been produced");
        for (unsigned role = 0; role < paused_.size(); ++role)
            actors_.set_authored_pause(role, paused_[role].scripts_and_physics_enabled,
                                      paused_[role].tick_callback_enabled);
        return {};
    }
    if (task == WorldSpriteFadeTask::ReleaseController) {
        controller_.reset(); // Event859 itself follows this write with END.
        return {};
    }
    if (task == WorldSpriteFadeTask::FinishTask)
        return {}; // Source C4CC2C only restores processor widths/flags and returns.
    if (task == WorldSpriteFadeTask::ResetDissolve) {
        std::fill_n(scratch_.bytes.begin() + marks_base, 128, 0);
        return {};
    }
    unsigned phase = 0;
    if (task == WorldSpriteFadeTask::Dissolve) {
        phase = story::next_random(random_) & 63;
        unsigned probes = 0;
        while (word(scratch_, marks_base + phase * 2)) {
            phase = (phase + 1) & 63;
            if (++probes == 64)
                throw std::logic_error("Sprite dissolve has exhausted its actual phase marks");
        }
        word(scratch_, marks_base + phase * 2, 1);
    }
    std::uint16_t remaining = 0;
    for (auto &record : records_) {
        if (word(scratch_, record.address) != record.role)
            throw std::logic_error("Sprite fade record no longer names its captured generation");
        const auto kind = word(scratch_, record.address + 4);
        if (task == WorldSpriteFadeTask::ShowSprites) {
            target(record).appearance.set_fade_hidden(false);
        } else if (task == WorldSpriteFadeTask::RefreshSprites) {
            auto &actor = target(record);
            if (kind == 1) actor.action().animation = 0;
            actor.appearance.select_four(actor.behavior.direction, actor.action().animation,
                                         actor.behavior.surface_flags);
        } else if (task == WorldSpriteFadeTask::HideBlinkSprites) {
            if (kind == 1) target(record).action().animation = 0xffff;
        } else if ((task == WorldSpriteFadeTask::Rows && kind == 2) ||
                   (task == WorldSpriteFadeTask::Columns && kind == 3) ||
                   (task == WorldSpriteFadeTask::Dissolve && kind == 4)) {
            const auto width = word(scratch_, record.address + 6),
                       height = word(scratch_, record.address + 8),
                       source = word(scratch_, record.address + 10),
                       destination = word(scratch_, record.address + 12),
                       bytes = word(scratch_, record.address + 14);
            auto step = word(scratch_, record.address + 16), pass = word(scratch_, record.address + 18);
            if (width != record.canvas.width() || height != record.canvas.height() ||
                bytes != width * height / 2 || unsigned(source) + bytes > 65536 ||
                unsigned(destination) + bytes > 65536)
                throw std::logic_error("Sprite fade retained buffer geometry changed");
            if (task != WorldSpriteFadeTask::Dissolve && pass == 2)
                continue;
            (void)target(record); // Validate the actual generation before any scratch write.
            ++remaining;
            record.canvas.load_pixels(pixels(scratch_, source, width, height),
                                      pixels(scratch_, destination, width, height));
            if (task == WorldSpriteFadeTask::Rows) {
                record.canvas.copy_row(step);
                step = std::uint16_t(step + 2);
                if (step >= height) { step = 1; ++pass; }
            } else if (task == WorldSpriteFadeTask::Columns) {
                const auto column = ((pass == 0) == bool(step & 1)) ? step : width - step - 1;
                record.canvas.copy_column(column);
                ++step;
                if (step >= width / 2) { step = 0; ++pass; }
            } else {
                record.canvas.copy_phase(phase);
            }
            pixels(scratch_, destination, width, height, record.canvas.pixels());
            publish(record);
            if (task != WorldSpriteFadeTask::Dissolve) {
                word(scratch_, record.address + 16, step);
                word(scratch_, record.address + 18, pass);
            }
        }
    }
    if (task == WorldSpriteFadeTask::Rows || task == WorldSpriteFadeTask::Columns)
        return remaining;
    return {};
}
} // namespace eb::native
