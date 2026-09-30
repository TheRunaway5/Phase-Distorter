#pragma once

#include "eb/native/action_bindings.hpp"

namespace eb::native {

struct ActionProgramStats {
    std::size_t instructions{}, operations{}, unsupported_operations{}, opaque_call_boundaries{};
    std::size_t unsupported_bytecodes{}, imported_bytes{};
};

// Diagnostic provenance only. No execution API accepts the authored identifier.
struct ActionOperationDiagnostic {
    std::uint32_t instruction{}, authored_identifier{};
    ActionRequestKind kind{};
    bool inline_length_known{};
};

// Eagerly compiles reachable authored instructions and native service operations
// before world execution. Unknown engine calls form explicit opaque boundaries;
// their trailing bytes are never guessed to be instructions. Other entrypoints
// and branches remain available. Executable content has an instruction
// whitelist. The world must also reject responses with inline_length_known=false:
// opaque operand bytes could overlap another legitimate script entrypoint.
class CompiledActionProgram {
  public:
    CompiledActionProgram(std::shared_ptr<const ActionScriptData> source, GameVersion version,
                          std::span<const std::uint32_t> extra_entrypoints = {});
    std::shared_ptr<const ActionScriptData> scripts() const;
    const BoundAction &operation(std::uint32_t token) const;
    const ActionOperationDiagnostic &diagnostic(std::uint32_t token) const;
    const ActionProgramStats &stats() const;
    GameVersion version() const { return version_; }

  private:
    std::shared_ptr<const ActionScriptData> scripts_;
    std::vector<BoundAction> operations_;
    std::vector<ActionOperationDiagnostic> diagnostics_;
    ActionProgramStats stats_;
    GameVersion version_;
};
} // namespace eb::native
