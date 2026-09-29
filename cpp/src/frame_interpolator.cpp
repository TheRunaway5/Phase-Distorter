#include "eb/frame_interpolator.hpp"
#include <algorithm>
#include <cmath>
#include <limits>
#include <stdexcept>

namespace eb {
namespace {
constexpr unsigned block = 8;
unsigned difference(uint32_t a, uint32_t b) {
    return std::abs(int((a>>16)&255)-int((b>>16)&255)) +
           std::abs(int((a>>8)&255)-int((b>>8)&255)) + std::abs(int(a&255)-int(b&255));
}
uint32_t mix(uint32_t a, uint32_t b, unsigned weight) {
    if (a==b || !weight) return a;
    if (weight==256) return b;
    uint32_t result=0xff000000;
    for (unsigned shift : {0u,8u,16u})
        result |= ((((a>>shift)&255)*(256-weight)+((b>>shift)&255)*weight+128)>>8)<<shift;
    return result;
}
}
void FrameInterpolator::reset() {
    previous_.clear(); current_.clear(); output_.clear(); motion_.clear(); sample_offsets_.clear();
    width_=height_=columns_=0; interpolate_=false;
}
void FrameInterpolator::submit(std::span<const uint32_t> pixels, unsigned width, unsigned height,
                               uint64_t frame, double aspect, bool interpolate) {
    if (!width || !height || width>1024 || height>1024 || pixels.size()!=size_t(width)*height)
        throw std::invalid_argument("Invalid interpolation picture dimensions");
    const bool continuous=width==width_ && height==height_ && aspect==aspect_ && frame==frame_+1 && interpolate && interpolate_;
    previous_.swap(current_);
    current_.assign(pixels.begin(),pixels.end());
    width_=width; height_=height; columns_=(width+block-1)/block; frame_=frame; aspect_=aspect;
    interpolate_=interpolate;
    if (!continuous) previous_=current_;
    output_.resize(pixels.size());
    motion_.assign(columns_*((height+block-1)/block),{});
    sample_offsets_.resize(motion_.size());
    unchanged_ = previous_ == current_;
    if (continuous && !unchanged_) estimate_motion();
}
void FrameInterpolator::estimate_motion() {
    unsigned unmatched=0;
    for (unsigned by=0;by<height_;by+=block) for (unsigned bx=0;bx<width_;bx+=block) {
        const unsigned right=std::min(bx+block,width_), bottom=std::min(by+block,height_);
        const unsigned count=(right-bx)*(bottom-by);
        const auto score=[&](int dx,int dy,unsigned ceiling) {
            if (int(bx)+dx<0 || int(by)+dy<0 || int(right)+dx>int(width_) || int(bottom)+dy>int(height_))
                return std::numeric_limits<unsigned>::max();
            unsigned sum=0;
            // Every pixel matters: a stride of two completely misses thin
            // outlines and can report a false exact match on pixel art.
            for (unsigned y=by;y<bottom;++y) for (unsigned x=bx;x<right;++x) {
                sum+=difference(current_[y*width_+x],previous_[(int(y)+dy)*width_+int(x)+dx]);
                if (sum>=ceiling) return sum;
            }
            return sum;
        };
        const auto still=score(0,0,std::numeric_limits<unsigned>::max());
        if (!still) continue; // Static artwork/UI keeps an exact zero vector.
        // Errors above the cut threshold are equivalent for our purposes.
        // Cap the rejection budget so unrelated textured candidates fail fast.
        unsigned best=std::min(still,49*count);
        Motion found{};
        // Visit *all* integer offsets, nearest first. Stopping on the first
        // zero in a coarse raster search picked distant diagonal vectors on
        // flat sprite interiors, and skipped odd-distance textured motion.
        // Early rejection bounds the cost of the denser comparison.
        for (int distance=1;distance<=16 && best;++distance) {
            for (int dy=-8;dy<=8 && best;++dy) {
                const int ax=distance-std::abs(dy);
                if (ax<0 || ax>8) continue;
                for (int dx=-ax;dx<=ax;dx+=std::max(1,ax*2)) {
                    const auto error=score(dx,dy,best);
                    if (error<best) { best=error; found={dx,dy}; }
                }
            }
        }
        if (best>48*count) ++unmatched;
        // Reject ambiguous/deforming blocks instead of stretching text, enemy
        // silhouettes, or changing palettes to fit an unreliable correspondence.
        if (best<=24*count && best*4<still)
            motion_[(by/block)*columns_+bx/block]=found;
    }
    // Hard cuts must not drag the outgoing scene across the incoming picture.
    // Fades and isolated animated areas remain eligible for frame generation.
    if (unmatched*2>motion_.size()) {
        previous_=current_;
        unchanged_=true;
        std::fill(motion_.begin(),motion_.end(),Motion{});
    }
}
uint32_t FrameInterpolator::sample_pixel(const std::vector<uint32_t>& image, int x, int y) const {
    // Coordinates use eight fractional bits. Integer bilinear sampling keeps
    // frame generation affordable at 300 Hz without rounding motion to pixels.
    x=std::clamp(x,0,int(width_-1)*256); y=std::clamp(y,0,int(height_-1)*256);
    const unsigned ix=unsigned(x)>>8, iy=unsigned(y)>>8, nx=std::min(ix+1,width_-1), ny=std::min(iy+1,height_-1);
    const auto wx=unsigned(x)&255, wy=unsigned(y)&255;
    if (!wx && !wy) return image[iy*width_+ix];
    return mix(mix(image[iy*width_+ix],image[iy*width_+nx],wx),mix(image[ny*width_+ix],image[ny*width_+nx],wx),wy);
}
std::span<const uint32_t> FrameInterpolator::sample(double fraction) {
    if (current_.empty() || !interpolate_ || unchanged_) return current_;
    if (!std::isfinite(fraction)) fraction=1;
    fraction=std::clamp(fraction,0.0,1.0);
    if (fraction==0) return previous_;
    if (fraction==1) return current_;
    const unsigned weight=unsigned(std::lround(fraction*256));
    // Quantize the final displacement, not time before multiplying it by the
    // vector. At 300 Hz, 1/5 of a five-pixel step must land exactly one pixel
    // away instead of picking up a 1/256-pixel fringe from time quantization.
    for (size_t i=0;i<motion_.size();++i)
        sample_offsets_[i]={int(std::lround(fraction*motion_[i].x*256)),int(std::lround(fraction*motion_[i].y*256))};
    for (unsigned y=0;y<height_;++y) for (unsigned x=0;x<width_;++x) {
        const auto index=y*width_+x;
        const auto block_index=(y/block)*columns_+x/block;
        const auto motion=motion_[block_index], offset=sample_offsets_[block_index];
        // Inverse mapping: find the current-frame block which lands at this
        // output pixel, then sample both endpoints along the same motion path.
        const int cx=std::clamp((int(x)*256-256*motion.x+offset.x+128)>>8,0,int(width_-1));
        const int cy=std::clamp((int(y)*256-256*motion.y+offset.y+128)>>8,0,int(height_-1));
        const auto mapped_index=(cy/block)*columns_+cx/block;
        auto a=previous_[index], b=current_[index];
        unsigned error=difference(a,b);
        // Crossing a block boundary can land in newly exposed background with
        // a zero vector. Keep the original trajectory as a candidate too, and
        // never blend endpoints which disagree about what occupies the pixel.
        for (const auto candidate_index : {block_index,unsigned(mapped_index)}) {
            const auto candidate=motion_[candidate_index], shift=sample_offsets_[candidate_index];
            if (!candidate.x && !candidate.y) continue;
            const auto pa=sample_pixel(previous_,int(x)*256+shift.x,int(y)*256+shift.y);
            const auto pb=sample_pixel(current_,int(x)*256-256*candidate.x+shift.x,int(y)*256-256*candidate.y+shift.y);
            const unsigned candidate_error=difference(pa,pb);
            if (candidate_error<=error) { a=pa; b=pb; error=candidate_error; }
            if (!error) break;
        }
        output_[index]=error<=12 ? mix(a,b,weight) : (weight<128 ? previous_[index]:current_[index]);
    }
    return output_;
}
} // namespace eb
