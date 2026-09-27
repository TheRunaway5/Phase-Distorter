// Synthetic donor images exercise the complete import/load boundary without
// shipping game data. Failure cases also verify that an existing good pack and
// the original donor survive malformed input or unsuccessful replacement.
#include "eb/asset_store.hpp"

#include <array>
#include <chrono>
#include <fstream>
#include <iostream>
#include <stdexcept>

namespace {
void require(bool ok, const char* message) { if (!ok) throw std::runtime_error(message); }
template<class Work> void rejects(Work work, const char* message) {
    bool failed = false;
    try { work(); } catch (const std::exception&) { failed = true; }
    require(failed, message);
}
void write(const std::filesystem::path& path, std::span<const std::uint8_t> bytes) {
    std::ofstream out(path, std::ios::binary);
    out.write(reinterpret_cast<const char*>(bytes.data()), static_cast<std::streamsize>(bytes.size()));
    if (!out) throw std::runtime_error("Cannot create test fixture");
}
std::vector<std::uint8_t> read(const std::filesystem::path& path) {
    std::ifstream in(path, std::ios::binary);
    return {std::istreambuf_iterator<char>(in), std::istreambuf_iterator<char>()};
}
std::span<const std::uint8_t> bytes(std::string_view text) {
    return {reinterpret_cast<const std::uint8_t*>(text.data()), text.size()};
}
} // namespace

int main() {
    const auto directory = std::filesystem::temp_directory_path() /
        ("eb-asset-tests-" + std::to_string(std::chrono::steady_clock::now().time_since_epoch().count()));
    try {
        require(eb::sha256({}) == "e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855", "SHA256 empty");
        require(eb::sha256(bytes("abc")) == "ba7816bf8f01cfea414140de5dae2223b00361a396177a9cb410ff61f20015ad", "SHA256 abc");
        require(eb::sha256(bytes("abcdbcdecdefdefgefghfghighijhijkijkljklmklmnlmnomnopnopq")) ==
            "248d6a61d20638b8e5c026930c3e6039a33ce45964ff2167f6ecedd419db06c1", "SHA256 padding boundary");
        const std::string million(1000000, 'a');
        require(eb::sha256(bytes(million)) == "cdc76e5c9914fb9281a1c7e284d73e67f1809a48a497200e046d39ccc7112cd0", "SHA256 multiple blocks");

        std::filesystem::create_directories(directory);
        const auto rom_path = directory / "my-game.sfc", pack_path = directory / "assets.ebpak";
        std::vector<std::uint8_t> rom(4096), code(4096);
        for (std::size_t i = 0; i < rom.size(); ++i) rom[i] = static_cast<std::uint8_t>((i * 137 + i / 13) & 255);
        code = rom;
        const std::array<eb::AssetRange, 3> ranges{{{0, 512}, {530, 2010}, {2560, 1536}}};
        for (auto range : ranges) std::fill_n(code.begin() + range.offset, range.size, 0);
        const auto digest = eb::sha256(rom);
        const eb::AssetLayout layout{code, ranges, digest};
        write(rom_path, rom);
        rejects([&] { eb::load_assets(pack_path, layout); }, "Missing pack must fail");
        eb::import_assets(rom_path, pack_path, layout);
        require(eb::load_assets(pack_path, layout) == rom, "Extracted assets must reconstruct exact image");
        const auto good_pack = read(pack_path);
        require(good_pack.size() == 80 + ranges.size() * 8 + 4058, "Pack contains data ranges only");
        require(read(rom_path) == rom, "Import must not modify donor");
        rejects([&] { eb::import_assets(rom_path, rom_path, layout); }, "Donor overwrite must fail");
        require(read(rom_path) == rom, "Rejected destination preserves donor");

        auto japanese = rom;
        japanese[100] ^= 0x80; // Synthetic second game's asset data; compiled code stays identical.
        const auto japanese_digest = eb::sha256(japanese);
        const std::array<eb::AssetProfile, 2> profiles{{
            {eb::GameVersion::US, "Test US", layout},
            {eb::GameVersion::JP, "Test JP", {code, ranges, japanese_digest}}
        }};
        write(directory / "mother2.sfc", japanese);
        require(eb::identify_rom(rom_path, profiles).version == eb::GameVersion::US, "Identify first game");
        require(eb::import_game_assets(directory / "mother2.sfc", directory / "mother2.ebpak", profiles) ==
                eb::GameVersion::JP, "Import identifies second game");
        const auto loaded_jp = eb::load_game_assets(directory / "mother2.ebpak", profiles);
        require(loaded_jp.version == eb::GameVersion::JP && loaded_jp.title == "Test JP" && loaded_jp.image == japanese,
                "Pack selects matching program and data");
        rejects([&] { eb::load_assets(directory / "mother2.ebpak", layout); }, "Wrong program/data pairing must fail");
        require(eb::load_game_assets(pack_path, profiles).image == rom, "Second game must preserve first game's pack");

        auto headered = std::vector<std::uint8_t>(512, 0xa5);
        headered.insert(headered.end(), rom.begin(), rom.end());
        write(directory / "headered.smc", headered);
        eb::import_assets(directory / "headered.smc", pack_path, layout);
        require(read(pack_path) == good_pack, "Copier header must not change imported assets");

        auto wrong = rom;
        wrong[100] ^= 1;
        write(directory / "wrong.sfc", wrong);
        rejects([&] { eb::import_assets(directory / "wrong.sfc", pack_path, layout); }, "Wrong ROM hash must fail");
        rejects([&] { eb::identify_rom(directory / "wrong.sfc", profiles); }, "Unknown game must fail automatic identification");
        require(read(pack_path) == good_pack, "Failed import must preserve existing assets");
        write(directory / "truncated.sfc", std::span(rom).first(100));
        rejects([&] { eb::import_assets(directory / "truncated.sfc", pack_path, layout); }, "Truncated ROM must fail");

        for (const auto offset : {std::size_t(0), std::size_t(80), good_pack.size() - 1}) {
            auto broken = good_pack;
            broken[offset] ^= 1;
            write(directory / "bad.ebpak", broken);
            rejects([&] { eb::load_assets(directory / "bad.ebpak", layout); }, "Corrupt pack must fail");
        }
        write(directory / "short.ebpak", std::span(good_pack).first(12));
        rejects([&] { eb::load_assets(directory / "short.ebpak", layout); }, "Truncated pack must fail safely");
        auto extra = good_pack;
        extra.push_back(0);
        write(directory / "extra.ebpak", extra);
        rejects([&] { eb::load_assets(directory / "extra.ebpak", layout); }, "Trailing data must fail");
        rejects([&] { eb::import_assets(rom_path, directory, layout); }, "Failed atomic destination must report error");
        for (const auto& entry : std::filesystem::directory_iterator(directory))
            require(entry.path().filename().string().find(".tmp.") == std::string::npos, "Failed import removes temporary files");
        std::filesystem::remove_all(directory);
        std::cout << "Asset validation, extraction, header handling, corruption rejection, and atomic replacement pass\n";
        return 0;
    } catch (const std::exception& error) {
        std::error_code ignored;
        std::filesystem::remove_all(directory, ignored);
        std::cerr << error.what() << '\n';
        return 1;
    }
}
