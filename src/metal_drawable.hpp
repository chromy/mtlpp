#pragma once

#include "defines.hpp"
#include "ns.hpp"
#include "drawable.hpp"
#include "texture.hpp"

namespace mtlpp
{
    class MetalDrawable : public Drawable
    {
    public:
        MetalDrawable() {}
        MetalDrawable(const ns::Handle& handle) : Drawable(handle) {}

        Texture GetTexture();

    private:
    };
}