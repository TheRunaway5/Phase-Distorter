# Debian 12's glibc 2.36 also supports hosts with glibc 2.37. Keep the
# application, SDL2 and GCC runtimes on this baseline when preparing releases.
FROM debian:bookworm-slim@sha256:a4672c0cb26fbdde88e38fa2dfb6c681942306680e41e4378b28770b6e79ee91

RUN apt-get update \
    && apt-get install -y --no-install-recommends \
        build-essential cmake ninja-build pkg-config python3 libsdl2-dev \
        libgl-dev libglx-mesa0 libgl1-mesa-dri xvfb xauth patchelf \
        ca-certificates curl binutils \
    && rm -rf /var/lib/apt/lists/*

# Preserve the release's original SDL2 version and baseline x86-64 target.
RUN curl -fL --retry 3 https://www.libsdl.org/release/SDL2-2.32.10.tar.gz \
        -o /tmp/SDL2.tar.gz \
    && echo '5f5993c530f084535c65a6879e9b26ad441169b3e25d789d83287040a9ca5165  /tmp/SDL2.tar.gz' | sha256sum -c - \
    && tar -xzf /tmp/SDL2.tar.gz -C /tmp \
    && cmake -S /tmp/SDL2-2.32.10 -B /tmp/sdl-build -G Ninja \
        -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=/opt/phase-distorter-sdl2 \
        '-DCMAKE_C_FLAGS=-march=x86-64 -mtune=generic' \
        -DSDL_SHARED=ON -DSDL_STATIC=OFF -DSDL_TEST=OFF -DSDL_TESTS=OFF -DSDL_SSE3=OFF \
    && cmake --build /tmp/sdl-build --parallel 4 \
    && cmake --install /tmp/sdl-build \
    && rm -rf /tmp/SDL2.tar.gz /tmp/SDL2-2.32.10 /tmp/sdl-build

WORKDIR /src
