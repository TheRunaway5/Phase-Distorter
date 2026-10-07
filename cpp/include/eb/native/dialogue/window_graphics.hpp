#pragma once

#include "eb/native/dialogue/initialization_resources.hpp"
#include "eb/native/dialogue/menu_host.hpp"

namespace eb::native::dialogue {
struct PartyNameInputs {
    // US runs include their source terminator and may extend beyond the name
    // field. JP reads exactly the first four bytes, including zero values.
    std::array<std::span<const std::uint8_t>, 4> names;
};
enum class ArtworkPublication { None, Common, GeneratedThenCommon, CommonThenGenerated, All };
enum class ArtworkDelivery { Copy, Synchronized };
enum class ArtworkDisposition { Published, Queued };
struct ArtworkEffect {
    ArtworkDelivery delivery{};
    unsigned first_cell{}, cell_count{}; // Native indexed artwork atlas cells.
    bool operator==(const ArtworkEffect &) const = default;
};

// LOAD_WINDOW_GFX preparation and ordered artwork publications. This owner
// retains indexed image cells, never a source processor or memory bus. The
// world/video adapter services transfers at their original copy/transfer
// boundary; preparation and read-only sampling never advance a frame.
// Output outlives this owner, which outlives every borrowing operation.
class WindowGraphics {
  public:
    class Operation {
      public:
        ~Operation();
        Operation(const Operation &) = delete;
        Operation &operator=(const Operation &) = delete;
        Progress advance(unsigned work_budget = 4096);
        const std::optional<ArtworkEffect> &effect() const;
        // A queued source copy retains its live prepared image references.
        // The adapter calls publish_next() when that publication completes.
        // Synchronized delivery emits source chunks of at most288 cells and
        // yields BudgetExhausted until queued work is published, including
        // its final chunk. These waits do not advance a logical frame.
        void respond(ArtworkDisposition = ArtworkDisposition::Published);
        bool complete() const;

      private:
        friend class WindowGraphics;
        TextOutput::Owner callback_owner(TextOutput &) const;
        struct Execution;
        explicit Operation(std::unique_ptr<Execution>);
        std::unique_ptr<Execution> execution_;
    };
    // Optional retained staging is exactly 1184 indexed cells. Publication
    // starts separately with a blank atlas, regardless of retained staging.
    WindowGraphics(std::shared_ptr<const WindowInitializationResources>, TextOutput &,
                   std::span<const WindowArtwork> retained = {});
    ~WindowGraphics();
    WindowGraphics(const WindowGraphics &) = delete;
    WindowGraphics &operator=(const WindowGraphics &) = delete;
    GameVersion version() const;
    bool bound_to(const TextOutput &) const;
    // Shared authored artwork staging may be produced by map decompression.
    // Replaces actual native cells without publishing them or changing atlas
    // subscribers. Requires idle output and no queued transfer using staging.
    void retain_prepared_artwork(unsigned first, std::span<const WindowArtwork>);
    // TELEPORT's map decompression occurs while its actual conversation is
    // suspended. Borrow that continuation without acknowledging or entering it.
    void retain_prepared_artwork(unsigned first, std::span<const WindowArtwork>, Conversation &);
    void prepare(const PartyNameInputs &, unsigned flavor);
    void prepare_nested(const PartyNameInputs &, unsigned flavor, Conversation &);
    void prepare_nested(const PartyNameInputs &, unsigned flavor, MenuHost::Operation &);
    void prepare_nested(const PartyNameInputs &, unsigned flavor, Operation &);
    std::unique_ptr<Operation> begin_publication(ArtworkPublication,
                                               ArtworkDelivery = ArtworkDelivery::Copy);
    std::unique_ptr<Operation> begin_publication_nested(ArtworkPublication, MenuHost::Operation &,
                                                      ArtworkDelivery = ArtworkDelivery::Copy);
    std::unique_ptr<Operation> begin_publication_nested(ArtworkPublication, Conversation &,
                                                      ArtworkDelivery = ArtworkDelivery::Copy);
    bool publish_next();
    unsigned pending_publications() const;
    std::span<const WindowArtwork> prepared_artwork() const;
    std::shared_ptr<const TextFrame> frame() const; // 32x32 cells, 256x256 pixels.
    std::shared_ptr<const TextFrame> party_name(unsigned member, bool prepared = false) const;
    std::shared_ptr<const TextFrame> status_label(unsigned index, bool prepared = false) const;

  private:
    friend class TextOutput;
    friend class WindowHost;
    void bind_cell(unsigned cell, const std::shared_ptr<TextImage> &);
    std::shared_ptr<TextImage> image(unsigned cell) const;
    void prepare(const PartyNameInputs &, unsigned, TextOutput::Owner);
    void retain_prepared_artwork(unsigned, std::span<const WindowArtwork>, TextOutput::Owner);
    void prepare_owned(const PartyNameInputs &, unsigned, TextOutput::Owner);
    std::unique_ptr<Operation> begin_publication(ArtworkPublication, ArtworkDelivery,
                                               TextOutput::Owner);
    struct Execution;
    std::unique_ptr<Execution> execution_;
};
} // namespace eb::native::dialogue
