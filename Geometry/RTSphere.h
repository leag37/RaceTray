// Filename: RTSphere.h
// Author: Gael Huber
// Description: Definition for a simple sphere
#ifndef __RTSPHERE_H__
#define __RTSPHERE_H__

#include "Geometry/RTObject.h"

namespace RaceTray
{
    /** \addtogroup Geometry
    *   @{
    */

    /**
    * The base object. All engine entities derive from the base object.
    */
    class Sphere : public Object
    {
    public:
        /**
        * Default constructor. The default radius for a sphere is 1m
        */
        Sphere();

        /**
        * Constructor
        * @param
        *   const Vector3f The sphere's position
        * @param
        *   float The radius of the sphere
        */
        Sphere(const Vector3f& position, float radius);

        /**
        * Copy constructor
        *   const Sphere& The sphere to copy
        */
        Sphere(const Sphere& other);

        /**
        * Destructor
        */
        ~Sphere();

        /**
        * Check against this object for a ray collision.
        * @param
        *   const Ray& The ray against which to check
        * @param
        *   SceneCollisionData& The information about the collision, if any
        */
        void checkRayCollision(const Rayf& ray, SceneCollisionData& data);

    private:
        /**
        * There sphere radius
        */
        float _radius;
    };

    /** @} */

}   // Namespace

#endif // __RTSPHERE_H__
