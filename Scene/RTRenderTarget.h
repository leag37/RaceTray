// Filename: RTRenderTarget.h
// Author: Gael Huber
// Description: Describes a render target for output.
#ifndef __RTRENDERTARGET_H__
#define __RTRENDERTARGET_H__

#include "Math/RTMath.h"

namespace RaceTray
{
    /** \addtogroup Scene
    *   @{
    */

    /**
    * The render target is the target output during the scene render process. Each pixels gets
    * copied to the target before the final draw call is made.
    */
    class RenderTarget
    {
    public:
        /**
        * Default constructor
        */
        RenderTarget();

        /**
        * Destructor
        */
        virtual ~RenderTarget();

        /**
        * Initialize the render target
        * @param
        *   int The width of the render target
        * @param
        *   height The height of the render target
        * @return
        *   bool Returns true if the target is successfully created
        */
        virtual bool initialize(int width, int height) = 0;

        /**
        * Destroy the render target
        */
        virtual void destroy() = 0;

    protected:
        /**
        * The width of the render target
        */
        int _width;

        /**
        * The height of the render target
        */
        int _height;
    };

    /** @} */

}   // Namespace

#endif // __RTRENDERTARGET_H__
