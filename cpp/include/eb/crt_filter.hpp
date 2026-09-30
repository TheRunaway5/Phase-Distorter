#pragma once
#include <memory>
namespace eb {
// GPU-only postprocessing, before UI. A GL context must outlive this owner.
class CrtFilter {
public:
    CrtFilter();
    ~CrtFilter();
    CrtFilter(const CrtFilter&) = delete;
    CrtFilter& operator=(const CrtFilter&) = delete;
    void draw(unsigned native_texture, int source_width, int source_height, bool direct_scene);
private:
    struct Impl;
    std::unique_ptr<Impl> impl_;
};
}
