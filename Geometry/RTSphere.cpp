// Filename: RTSphere.cpp
// Author: Gael Huber
// Description: Definition for a simple sphere
#include "Geometry/RTSphere.h"

namespace RaceTray
{
    /**
    * Default constructor. The default radius for a sphere is 1m
    */
    Sphere::Sphere()
        :   Object(),
            _radius(0.0f)
    {
    }

    /**
    * Constructor
    * @param
    *   const Vector3f The sphere's position
    * @param
    *   float The radius of the sphere
    */
    Sphere::Sphere(const Vector3f& position, float radius)
        :   Object(position),
            _radius(radius)
    {
    }

    /**
    * Copy constructor
    *   const Sphere& The sphere to copy
    */
    Sphere::Sphere(const Sphere& other)
        :   _radius(other._radius)
    {
        _position = other._position;
    }

    /**
    * Destructor
    */
    Sphere::~Sphere()
    {

    }

    /**
    * Check against this object for a ray collision.
    * @param
    *   const Ray& The ray against which to check
    * @param
    *   SceneCollisionData& The information about the collision, if any
    */
    void Sphere::checkRayCollision(const Rayf& ray, SceneCollisionData& data)
    {
        // TODO!
    }

}   // Namespace
