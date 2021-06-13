#include "metal_layer.hpp"
#include "device.hpp"

#import <Metal/MTLDevice.h>

#if MTLPP_IS_AVAILABLE(10_11, 8_0)
#import <QuartzCore/CAMetalLayer.h>
#endif

namespace mtlpp
{
    MetalLayer::MetalLayer() :
#if MTLPP_IS_AVAILABLE(10_11, 8_0)
        Layer(ns::Handle{ (__bridge void*)[[CAMetalLayer alloc] init] })
#else
        Layer(ns::Handle{ nullptr })
#endif
    {
    }

    void MetalLayer::SetDevice(const Device &device)
    {
        ((__bridge CAMetalLayer*)m_ptr).device = (__bridge id<MTLDevice>)device.GetPtr();
    }

    void MetalLayer::SetOpaque(bool yes)
    {
        if(yes)
        {
            ((__bridge CAMetalLayer*)m_ptr).opaque = YES;
        }
        else
        {
            ((__bridge CAMetalLayer*)m_ptr).opaque = NO;
        }
    }
}
