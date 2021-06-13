#pragma once

#include "defines.hpp"
#include "ns.hpp"

namespace mtlpp
{
    class Layer;

    class Window
    {
        public:
            Window(const ns::Handle& handle) : m_ptr(handle.ptr) {}

            void SetLayer(const Layer& layer);
            void SetWantsLayer(bool yes);
        private:
            const void* m_ptr;
    };
}
