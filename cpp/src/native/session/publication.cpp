#include "state.hpp"
namespace eb {
std::shared_ptr<const DirectSceneFrame> crop_native_scene(const DirectSceneFrame &source,unsigned width) {
    auto result=std::make_shared<DirectSceneFrame>(source);
    const float shift=(float(width)-float(source.width))/2;
    result->width=width;
    for(auto &motion:result->motions) motion.x+=shift;
    for(auto &quad:result->quads) {
        quad.x+=shift;
        quad.clip.left+=shift; quad.clip.right+=shift;
    }
    return result;
}
void NativeSession::State::capture() {
        const auto source=world.runtime->published_frame();
        captured=crop_native_scene(*source,width);
        pixels=rasterize_direct_scene({captured,{}});
        const unsigned left=(width-256)/2;
        for(unsigned y=0;y<224;++y)
            std::copy_n(pixels.begin()+y*width+left,256,canonical.begin()+y*256);
        if(observer) {
            observing=true;
            try { observer({pixels,width,0,physical_frames,{},{},captured,{},{}}); }
            catch(...) { observing=false; throw; }
            observing=false;
        }
    }
} // namespace eb
