// Filename: RTStaticRenderTarget.h
// Author: Gael Huber
// Description: This class defines static render targets, which inherit from RenderTarget
#ifndef __RTSTATICRENDERTARGET_H__
#define __RTSTATICRENDERTARGET_H__

#include "Math/RTMath.h"
#include "Scene/RTRenderTarget.h"

namespace RaceTray
{
    /** \addtogroup Scene
    *   @{
    */

    /**
    * A static render target contains a simple array buffer to represent screen pixels
    */
    class StaticRenderTarget : public RenderTarget
    {
    public:
        /**
        * Default constructor
        */
        StaticRenderTarget();

        /**
        * Copy constructor
        * @param
        *   const StaticRenderTarget& The render target to copy
        */
        StaticRenderTarget(const StaticRenderTarget& other);

        /**
        * Destructor
        */
        ~StaticRenderTarget();

        /**
        * Initialize the render target
        * @param
        *   int The width of the render target
        * @param
        *   height The height of the render target
        * @return
        *   bool Returns true if the target is successfully created
        */
        bool initialize(int width, int height);

        /**
        * Destroy the render target
        */
        void destroy();

    private:
        /**
        * The color bitmap for the render target's pixel data
        */
        Colorf *_bitmap;
    };

    /** @} */

}   // Namespace

#endif // __RTSTATICRENDERTARGET_H__
