// Filename: RTCamera.cpp
// Author: Gael Huber
// Description: A simple camera class

#include "Scene/RTCamera.h"

namespace RaceTray
{
    /**
    * Default constructor
    */
    Camera::Camera()
    {
        // Initialize default position
        _position = Vector3f(0.0f, 0.0f, 0.0f);

        // Default orientation
        _orientation = Vector3f(0.0f, 0.0f, 0.0f);

        // Default forward, right, and up vectors
        _forward = Vector3f(0.0f, 0.0f, 1.0f);
        _right = Vector3f(1.0f, 0.0f, 0.0f);
        _up = Vector3f(0.0f, 1.0f, 0.0f);
    }

    /**
    * Destructor
    */
    Camera::~Camera()
    {

    }

    /**
    * Set the camera position
    * @param
    *   const Vector3f& The new camera position
    */
    void Camera::setPosition(const Vector3f& value)
    {
        _position = value;
    }

    /**
    * Given screen coordinates (x, y), calculate the direction vector for the ray originating
    * at the focal point
    */
    Rayf Camera::getRayForScreenCoords(const Vector2i& screenCoords) const
    {
        return Rayf();
    }

}   // Namespace
