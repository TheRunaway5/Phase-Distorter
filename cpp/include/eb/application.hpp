#pragma once

#include <string>

namespace eb {
// Shared application body. The native entry points provide UTF-8 arguments and
// platform-specific console behavior before entering the same frontend/game path.
int run_application(int argc, char** argv);

#ifdef _WIN32
// Explorer launches have no terminal to display failures. The Windows entry
// enables dialogs only for those interactive launches, never for headless tools.
void show_desktop_error(const std::string& message);
#else
inline void show_desktop_error(const std::string&) {}
#endif
} // namespace eb
