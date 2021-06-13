#pragma once

#include "defines.hpp"
#include "ns.hpp"

namespace mtlpp
{
    class ClearColor
    {
        double red;
        double green;
        double blue;
        double alpha;

        explicit ClearColor(double red, double green, double blue, double alpha)
         : red(red), green(green), blue(blue), alpha(alpha)
        {
        }

        explicit ClearColor() : ClearColor(0, 0, 0, 0)
        {
        }
    };
}