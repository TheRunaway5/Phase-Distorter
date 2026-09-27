// A GUI subsystem executable opens directly from Explorer without a console.
// Terminal launches attach to their existing console; redirected streams remain
// redirected. This layer never creates a console or changes game behavior.
#include "eb/application.hpp"

#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>
#include <shellapi.h>

#include <cstdio>
#include <cstdint>
#include <fcntl.h>
#include <io.h>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

namespace {
bool desktop_errors = false;

bool redirected(HANDLE handle) {
    if (!handle || handle == INVALID_HANDLE_VALUE) return false;
    const auto type = GetFileType(handle);
    return type == FILE_TYPE_DISK || type == FILE_TYPE_PIPE;
}

bool bind_stream(FILE* stream, HANDLE handle, DWORD standard, const char* mode, int flags) {
    if (!handle || handle == INVALID_HANDLE_VALUE) return false;
    HANDLE duplicate = INVALID_HANDLE_VALUE;
    // The CRT owns its handle after _open_osfhandle. Duplicate first so reopening
    // its FILE does not close an inherited handle that we still need to preserve.
    if (!DuplicateHandle(GetCurrentProcess(), handle, GetCurrentProcess(), &duplicate,
                         0, FALSE, DUPLICATE_SAME_ACCESS)) return false;
    const int descriptor = _open_osfhandle(reinterpret_cast<intptr_t>(duplicate), flags | _O_TEXT);
    if (descriptor < 0) { CloseHandle(duplicate); return false; }
    // GUI startup can leave stdout's CRT descriptor at -2. Reopen it before
    // duplicating the real destination into that stream's ordinary descriptor.
    const bool opened = std::freopen("NUL", mode, stream) != nullptr;
    const bool bound = opened && _dup2(descriptor, _fileno(stream)) == 0;
    _close(descriptor);
    if (bound) SetStdHandle(standard, reinterpret_cast<HANDLE>(_get_osfhandle(_fileno(stream))));
    return bound;
}

bool attach_parent_streams() {
    const HANDLE original_out = GetStdHandle(STD_OUTPUT_HANDLE);
    const HANDLE original_err = GetStdHandle(STD_ERROR_HANDLE);
    const HANDLE original_in = GetStdHandle(STD_INPUT_HANDLE);
    // Snapshot redirected handles before AttachConsole, which can replace the
    // process standard handles. No AllocConsole call: Explorer stays window-only.
    const bool out_redirected = redirected(original_out), err_redirected = redirected(original_err);
    const bool in_redirected = redirected(original_in);
    struct SavedHandle {
        HANDLE value = INVALID_HANDLE_VALUE;
        ~SavedHandle() { if (value != INVALID_HANDLE_VALUE) CloseHandle(value); }
    } saved_out, saved_err, saved_in;
    // stdout and stderr can name the same handle after `2>&1`. Preserve each
    // before reopening either FILE, because reopening may close that old handle.
    const auto preserve = [](HANDLE original, bool keep, SavedHandle& saved) {
        if (keep) DuplicateHandle(GetCurrentProcess(), original, GetCurrentProcess(),
                                  &saved.value, 0, FALSE, DUPLICATE_SAME_ACCESS);
    };
    preserve(original_out, out_redirected, saved_out);
    preserve(original_err, err_redirected, saved_err);
    preserve(original_in, in_redirected, saved_in);
    const bool attached = AttachConsole(ATTACH_PARENT_PROCESS) != FALSE || GetConsoleWindow() != nullptr;
    const auto destination = [attached](HANDLE original, bool keep, DWORD standard) {
        return keep ? original : attached ? GetStdHandle(standard) : INVALID_HANDLE_VALUE;
    };
    const bool out = bind_stream(stdout, destination(saved_out.value, out_redirected, STD_OUTPUT_HANDLE),
                                 STD_OUTPUT_HANDLE, "w", _O_WRONLY);
    const bool err = bind_stream(stderr, destination(saved_err.value, err_redirected, STD_ERROR_HANDLE),
                                 STD_ERROR_HANDLE, "w", _O_WRONLY);
    bind_stream(stdin, destination(saved_in.value, in_redirected, STD_INPUT_HANDLE), STD_INPUT_HANDLE, "r", _O_RDONLY);
    std::ios::sync_with_stdio(true);
    std::cout.clear();
    std::cerr.clear();
    std::cin.clear();
    return out || err;
}

std::string utf8(const wchar_t* value) {
    const int size = WideCharToMultiByte(CP_UTF8, WC_ERR_INVALID_CHARS, value, -1, nullptr, 0, nullptr, nullptr);
    if (!size) throw std::runtime_error("Cannot decode the Windows command line as UTF-8.");
    std::string text(static_cast<std::size_t>(size), '\0');
    if (!WideCharToMultiByte(CP_UTF8, WC_ERR_INVALID_CHARS, value, -1, text.data(), size, nullptr, nullptr))
        throw std::runtime_error("Cannot decode the Windows command line as UTF-8.");
    text.pop_back();
    return text;
}
} // namespace

void eb::show_desktop_error(const std::string& message) {
    if (!desktop_errors) return;
    const int size = MultiByteToWideChar(CP_UTF8, 0, message.c_str(), -1, nullptr, 0);
    std::wstring text(static_cast<std::size_t>(size ? size : 1), L'\0');
    if (size) MultiByteToWideChar(CP_UTF8, 0, message.c_str(), -1, text.data(), size);
    else text = L"Phase Distorter could not start. Please check the application files.";
    MessageBoxW(nullptr, text.c_str(), L"Phase Distorter", MB_OK | MB_ICONERROR | MB_TASKMODAL);
}

int WINAPI wWinMain(HINSTANCE, HINSTANCE, PWSTR, int) {
    const bool diagnostics = attach_parent_streams();
    desktop_errors = !diagnostics;
    try {
        int argc = 0;
        wchar_t** wide = CommandLineToArgvW(GetCommandLineW(), &argc);
        if (!wide) throw std::runtime_error("Cannot read the Windows command line.");
        struct ReleaseArguments { wchar_t** value; ~ReleaseArguments() { LocalFree(value); } } release{wide};
        std::vector<std::string> text;
        text.reserve(static_cast<std::size_t>(argc));
        for (int index = 0; index < argc; ++index) text.push_back(utf8(wide[index]));
        for (const auto& argument : text)
            if (argument == "--headless" || argument == "--import-only" || argument == "--help" || argument == "-h")
                desktop_errors = false; // Unattended invocations must never wait on a message box.
        std::vector<char*> argv;
        argv.reserve(text.size() + 1);
        for (auto& argument : text) argv.push_back(argument.data());
        argv.push_back(nullptr);
        return eb::run_application(argc, argv.data());
    } catch (const std::exception& error) {
        std::cerr << "Phase Distorter: " << error.what() << '\n';
        eb::show_desktop_error(error.what());
        return 1;
    }
}
