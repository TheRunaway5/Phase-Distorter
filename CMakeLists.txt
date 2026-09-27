# Phase Distorter standalone entry point. The release ships translated C++
# sources, so configuring here never needs the original assembly checkout.
cmake_minimum_required(VERSION 3.20)
project(earthbound_cpp_v1 VERSION 0.1.0 LANGUAGES CXX)
# Enable CTest at this top level so `ctest --test-dir build` discovers the
# checks registered by cpp/. The child project shares this cache option.
option(EB_BUILD_TESTS "Build verification programs" ON)
if(EB_BUILD_TESTS)
    enable_testing()
endif()
# Keep the instruction sources outside build/: they are tracked release inputs,
# not disposable products that a clean build must regenerate from a ROM.
set(EB_PREGENERATED_DIR "${CMAKE_CURRENT_SOURCE_DIR}/generated" CACHE PATH
    "Code-only compiled US/JP source profiles")
add_subdirectory(cpp)

# A standalone install has a clearly named native application at its top level.
# These are the application itself, not shell/batch wrappers. Keep cpp/'s bin/
# installation as a compatibility path for existing development scripts.
if(TARGET eb_cpp)
    install(PROGRAMS "$<TARGET_FILE:eb_cpp>" DESTINATION .
        RENAME "Phase Distorter${CMAKE_EXECUTABLE_SUFFIX}")
    get_target_property(PHASE_DISTORTER_SDL_SHARED eb_cpp PHASE_DISTORTER_SDL_SHARED)
    if(WIN32 AND PHASE_DISTORTER_SDL_SHARED)
        # cpp/ deploys this DLL at build time. Its imported SDL target is scoped
        # to that directory, so use the executable's resolved output directory.
        install(FILES "$<TARGET_FILE_DIR:eb_cpp>/SDL2.dll" DESTINATION .)
    endif()
endif()
