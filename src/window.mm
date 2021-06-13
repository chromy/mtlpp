#include "window.hpp"
#include "layer.hpp"

#import <AppKit/NSWindow.h>

namespace mtlpp
{
    void Window::SetLayer(const Layer& layer)
    {
        ((__bridge NSWindow*)m_ptr).contentView.layer = ((__bridge CALayer*)layer.GetPtr());
    }

    void Window::SetWantsLayer(bool yes)
    {
        if(yes)
        {
            ((__bridge NSWindow*)m_ptr).contentView.wantsLayer = YES;
        }
        else
        {
            ((__bridge NSWindow*)m_ptr).contentView.wantsLayer = NO;
        }
    }
}
