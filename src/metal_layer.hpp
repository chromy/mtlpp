#pragma once

#include "defines.hpp"
#include "ns.hpp"
#include "layer.hpp"
#include "metal_drawable.hpp"

namespace mtlpp
{
    class Device;

    class MetalLayer : public Layer
    {
    public:
        MetalLayer();
        MetalLayer(const ns::Handle& handle) : Layer(handle) {}

        void SetDevice(const Device& device);
        void SetDrawableSize(float width, float height);
        void SetOpaque(bool yes);
        MetalDrawable NextDrawable() const;
    private:
    };
}
