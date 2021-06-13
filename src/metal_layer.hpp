#pragma once

#include "defines.hpp"
#include "ns.hpp"
#include "layer.hpp"

namespace mtlpp
{
    class Device;

    class MetalLayer : public Layer
    {
    public:
        MetalLayer();
        MetalLayer(const ns::Handle& handle) : Layer(handle) {}

        void SetDevice(const Device& device);
        void SetOpaque(bool yes);
    private:
    };
}
