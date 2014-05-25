// Filename: RTCamera.h
// Author: Gael Huber
// Description: A simple camera class
#ifndef __RTCAMERA_H__
#define __RTCAMERA_H__

#include "Math/RTMath.h"

namespace RaceTray
{
    /** \addtogroup Scene
    *   @{
    */

    /**
    * The base implementation for a camera. This camera controls the position, orientation, and
    * frustum for the scene.
    */
    class Camera
    {
    public:
        /**
        * Default constructor
        */
        Camera();

        /**
        * Destructor
        */
        virtual ~Camera();

        /**
        * Set the camera position
        * @param
        *   const Vector3f& The new camera position
        */
        void setPosition(const Vector3f& value);

        /**
        * Given screen coordinates (x, y), calculate the direction vector for the ray originating
        * at the focal point
        */
        Rayf getRayForScreenCoords(const Vector2i& screenCoords) const;

    private:
        /**
        * The position of the camera in 3D space
        */
        Vector3f _position;

        /**
        * The orientation of the camera, represented in a Vector3 as (yaw, pitch, roll)
        */
        Vector3f _orientation;

        /**
        * The forward vector for the camera
        */
        Vector3f _forward;

        /**
        * The right vector for the camera
        */
        Vector3f _right;

        /**
        * The up vector for the camera
        */
        Vector3f _up;
    };

    /** @} */

}   // Namespace

#endif // __RTCAMERA_H__
