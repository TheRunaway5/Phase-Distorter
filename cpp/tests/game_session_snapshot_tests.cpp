#include "eb/game_session.hpp"
#include "eb/game_debug.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_audio_dsp.hpp"
#include "eb/snes_bus.hpp"
#include "eb/spc700_audio_cpu.hpp"
#include "eb/snapshot_archive.hpp"
#include <algorithm>
#include <array>
#include <iostream>
#include <stdexcept>
#include <vector>

namespace {
void require(bool condition, const char *message) {
    if (!condition) throw std::runtime_error(message);
}
std::vector<std::uint8_t> waiting_cartridge(eb::GameVersion version) {
    std::vector<std::uint8_t> bytes(0x300000);
    const unsigned entry = version == eb::GameVersion::US ? 0x875f : 0x8755;
    bytes[0xfffc] = entry;
    bytes[0xfffd] = entry >> 8;
    return bytes;
}
void require_same(const eb::GameSession &a, const eb::GameSession &b) {
    require(a.save_snapshot() == b.save_snapshot(), "Restored machine differs from its exact snapshot");
    const auto pa = a.presentation_frame(), pb = b.presentation_frame();
    require(pa.width == pb.width && pa.frame == pb.frame && pa.fixed_aspect == pb.fixed_aspect &&
            std::equal(pa.pixels.begin(), pa.pixels.end(), pb.pixels.begin(), pb.pixels.end()),
            "Restoration lost its immediately visible picture");
}
void continuation(eb::GameVersion region, bool enhanced, bool partial) {
    const auto content = waiting_cartridge(region);
    eb::GameSession reference(content, region, enhanced);
    reference.configure_presentation(426, true);
    reference.debug().configure({true, true, true, true, true});
    for (unsigned i = 0; i < reference.save_memory().size(); ++i)
        reference.save_memory()[i] = std::uint8_t(i * 17 + i / 256);
    reference.advance_frame(0x8090, partial ? 37 : 0);
    const auto captured = reference.save_snapshot();
    require(reference.save_snapshot() == captured, "Repeated snapshot capture changed machine state");
    const auto pending_audio = reference.take_audio_samples();

    // A different lifetime and configuration proves that all future-affecting
    // state comes from the file, rather than retained live processor pointers.
    eb::GameSession restored(content, region, !enhanced);
    restored.configure_presentation(640, false);
    restored.advance_frame(0);
    unsigned callbacks = 0;
    restored.observe_completed_frames([&](eb::PresentationFrame) { ++callbacks; });
    restored.load_snapshot(captured);
    require(restored.debug().settings().player_max_damage, "Snapshot lost the max-damage switch");
    require(callbacks == 0, "Restoring invoked a completed-frame observer");
    require(restored.save_snapshot() == captured, "Fresh session failed complete snapshot restoration");
    require(restored.take_audio_samples() == pending_audio, "Snapshot lost pending stereo audio");
    require_same(reference, restored);

    for (unsigned frame = 0; frame < 12; ++frame) {
        const auto buttons = std::uint16_t(frame % 2 ? 0x8080 : 0x0010);
        reference.advance_frame(buttons);
        restored.advance_frame(buttons);
        require_same(reference, restored);
        require(reference.take_audio_samples() == restored.take_audio_samples(),
                "DSP continuation diverged after snapshot restoration");
    }
    require(callbacks == 12, "Restoration lost or duplicated the existing frame observer");

    const auto advanced = restored.save_snapshot();
    restored.load_snapshot(captured);
    restored.load_snapshot(advanced);
    require_same(reference, restored);
}

void legacy_continuation(eb::GameVersion region, bool partial, unsigned legacy_format) {
    const auto content = waiting_cartridge(region);
    eb::GameSession reference(content, region, false);
    reference.configure_presentation(426, true);
    reference.advance_frame(0x8090, partial ? 37 : 0);
    const auto captured = reference.save_snapshot();
    eb::SnapshotArchive envelope(captured);
    std::array<std::uint8_t, 8> magic{};
    std::uint32_t format{};
    eb::GameVersion stored_region{};
    std::uint64_t cartridge_hash{}, checksum{};
    std::vector<std::uint8_t> payload;
    envelope(magic, format, stored_region, cartridge_hash, checksum);
    envelope.blob(payload); envelope.finish();
    require(format == 9, "New snapshots did not declare NPC scan schema 9");

    // Re-encode real complete/partial state with each older positional layout,
    // rather than merely relabelling the current payload.
    eb::SnesBus hardware(content, region);
    eb::Spc700AudioCpu audio_cpu(hardware);
    eb::SnesAudioDsp audio_dsp(audio_cpu);
    eb::MainCpu65816 main_cpu(hardware);
    eb::GameDebug debug(hardware, main_cpu);
    std::uint64_t steps{};
    eb::SnapshotArchive current(payload, format);
    current(hardware, audio_cpu, audio_dsp, main_cpu, debug, steps); current.finish();
    eb::SnapshotArchive legacy_machine(legacy_format);
    legacy_machine(hardware, audio_cpu, audio_dsp, main_cpu, debug, steps);
    auto legacy_payload = legacy_machine.release_bytes();
    require(legacy_payload.size() <= payload.size(), "Legacy fixture grew newer snapshot fields");
    format = legacy_format;
    checksum = eb::snapshot_checksum(legacy_payload);
    eb::SnapshotArchive legacy_file(legacy_format);
    legacy_file(magic, format, stored_region, cartridge_hash, checksum);
    legacy_file.blob(legacy_payload);

    eb::GameSession restored(content, region, true);
    restored.configure_presentation(640, false);
    restored.advance_frame(0);
    restored.load_snapshot(legacy_file.bytes());
    require(!restored.debug().settings().player_max_damage, "Legacy snapshot enabled max damage");
    const auto a = reference.presentation_frame(), b = restored.presentation_frame();
    require(reference.frames() == restored.frames() && reference.steps() == restored.steps() &&
                a.width == b.width && a.fixed_aspect == b.fixed_aspect &&
                std::equal(a.pixels.begin(), a.pixels.end(), b.pixels.begin()),
            "Legacy restoration lost its immediately visible machine state");
    require(reference.take_audio_samples() == restored.take_audio_samples(),
            "Legacy restoration lost pending audio");
    for (unsigned frame = 0; frame < 12; ++frame) {
        const auto buttons = std::uint16_t(frame % 2 ? 0x8080 : 0x0010);
        reference.advance_frame(buttons); restored.advance_frame(buttons);
        require_same(reference, restored);
        require(reference.take_audio_samples() == restored.take_audio_samples(),
                "Legacy continuation changed DSP output");
    }
}

void atomic_rejections(eb::GameVersion region) {
    const auto content = waiting_cartridge(region);
    eb::GameSession session(content, region);
    session.advance_frame(0);
    session.advance_frame(0, session.steps() + 19);
    unsigned callbacks = 0;
    session.observe_completed_frames([&](eb::PresentationFrame) { ++callbacks; });
    const auto before = session.save_snapshot();
    const auto reject = [&](std::vector<std::uint8_t> bytes) {
        bool failed = false;
        try { session.load_snapshot(bytes); }
        catch (const std::exception &) { failed = true; }
        require(failed, "Invalid snapshot was accepted");
        require(session.save_snapshot() == before && callbacks == 0,
                "Rejected snapshot changed the current machine or its observer");
    };
    for (const auto size : {std::size_t(0), std::size_t(8), std::size_t(20), before.size() / 2,
                           before.size() - 1})
        reject({before.begin(), before.begin() + size});
    auto damaged = before;
    damaged.back() ^= 0x80;
    reject(damaged);
    damaged = before;
    damaged.push_back(0);
    reject(damaged);
    // Reach the candidate-machine decoder with a valid envelope/checksum, then
    // reject both an early field and trailing state after all owners loaded.
    const auto repair_envelope = [](std::vector<std::uint8_t> &bytes) {
        const auto size = std::uint32_t(bytes.size() - 33);
        for (unsigned i = 0; i < 4; ++i) bytes[29 + i] = std::uint8_t(size >> (i * 8));
        const auto checksum = eb::snapshot_checksum(std::span<const std::uint8_t>(bytes).subspan(33));
        for (unsigned i = 0; i < 8; ++i) bytes[21 + i] = std::uint8_t(checksum >> (i * 8));
    };
    damaged = before;
    damaged[33] = 9; // Native-resource presence must be a canonical boolean.
    repair_envelope(damaged);
    reject(damaged);
    damaged = before;
    damaged.push_back(0);
    repair_envelope(damaged);
    reject(damaged);
    damaged = before;
    damaged[8] = 0xff; // Unsupported schema.
    reject(damaged);
    damaged = before;
    // Envelope's payload byte count follows magic, schema, region and hashes.
    std::fill_n(damaged.begin() + 29, 4, 0xff);
    reject(damaged);
    auto other_content = content;
    other_content[100] ^= 1;
    eb::GameSession wrong_content(other_content, region);
    reject(wrong_content.save_snapshot());
    const auto other_region = region == eb::GameVersion::US ? eb::GameVersion::JP : eb::GameVersion::US;
    eb::GameSession wrong_region(waiting_cartridge(other_region), other_region);
    reject(wrong_region.save_snapshot());
    session.advance_frame(0);
    require(callbacks == 1, "Failed restoration detached the current frame observer");
}

struct LargeArchiveValue {
    std::array<std::uint8_t, 256> data{};
    void snapshot_io(eb::SnapshotArchive &archive) { archive(data); }
};
void allocation_rejections() {
    // A byte count can fit the archive while the requested C++ object storage
    // would exceed it. Refuse before resize/allocation, not after reading the
    // first truncated element of a 256 MiB vector.
    constexpr auto count = eb::SnapshotArchive::maximum_objects;
    std::vector<std::uint8_t> bytes(4 + count);
    for (unsigned i = 0; i < 4; ++i) bytes[i] = std::uint8_t(count >> (i * 8));
    const auto reject = [&](auto decode) {
        eb::SnapshotArchive archive(bytes);
        bool failed = false;
        try { decode(archive); }
        catch (const std::runtime_error &error) {
            failed = std::string(error.what()).find("allocation limit") != std::string::npos;
        }
        require(failed, "Oversized snapshot object allocation was not rejected before decoding");
    };
    std::vector<LargeArchiveValue> objects;
    reject([&](auto &archive) { archive(objects); });
    require(objects.empty(), "Rejected snapshot vector still allocated its declared objects");
    reject([&](auto &archive) {
        archive.sequence(objects, [](auto &io, LargeArchiveValue &value) { io(value.data); });
    });
    require(objects.empty(), "Rejected snapshot sequence still allocated its declared objects");
    std::map<std::uint64_t, LargeArchiveValue> map;
    reject([&](auto &archive) { archive(map); });
    require(map.empty(), "Rejected snapshot map still allocated its declared objects");
}
} // namespace

int main() {
    try {
        allocation_rejections();
        for (const auto region : {eb::GameVersion::US, eb::GameVersion::JP}) {
            for (const bool enhanced : {false, true})
                for (const bool partial : {false, true}) continuation(region, enhanced, partial);
            for (const bool partial : {false, true})
                for (unsigned legacy_format : {1u, 2u, 3u, 4u, 5u, 6u, 7u, 8u}) legacy_continuation(region, partial, legacy_format);
            atomic_rejections(region);
        }
        std::cout << "Complete session snapshot persistence, continuation and atomic rejection checks passed\n";
    } catch (const std::exception &error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
