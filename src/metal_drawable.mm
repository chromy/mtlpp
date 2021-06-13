#include "metal_drawable.hpp"

#import <Metal/Metal.h>
#import <QuartzCore/CAMetalLayer.h>

namespace mtlpp
{
    Texture MetalDrawable::GetTexture()
    {
        ns::Handle handle;
        handle.ptr = ((__bridge id<CAMetalDrawable>)m_ptr).texture;
        return handle;
    }
}
