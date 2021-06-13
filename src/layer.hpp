#pragma once

#include "defines.hpp"
#include "ns.hpp"

namespace mtlpp
{
    class Layer : public ns::Object
    {
        public:
            Layer() {};
            Layer(const ns::Handle& handle) : ns::Object(handle) {}
            virtual ~Layer();
    };
}