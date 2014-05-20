// Filename: RTRay.h
// Author: Gael Huber
// Description: A ray is defined by having an origin and a direction vector
#ifndef __RTRAY_H__
#define __RTRAY_H__

#include "RTMath.h"

namespace RaceTray
{
    /** \addtogroup Math
    *   @{
    */

    /**
    * Represents a ray in 3 dimensional space defined as an origin vector and a direction vector
    */
    template <typename Unit>
    class Ray
    {
    public:
        /**
        * Default constructor
        */
        Ray();

        /**
        * Constructor
        * @param
        *   const Vector3<Unit>& The origin of the ray
        * @param
        *   const Vector3<Unit>& The direction of the ray
        */
        Ray(const Vector3<Unit>& origin, const Vector3<Unit>& direction);

        /**
        * Copy constructor
        * @param
        *   const Ray<Unit>& The ray to copy
        */
        Ray(const Ray& other);

        /**
        * Destructor
        */
        ~Ray();

        /**
        * Return the ray's origin
        * @return
        *   const Vector3<Unit>& The origin of the ray
        */
        const Vector3<Unit>& getOrigin() const;

        /**
        * Return the ray's direction
        * @return
        *   const Vector3<Unit>& The direction of the ray
        */
        const Vector3<Unit>& getDirection() const;

    private:
        /**
        * The origin vector of the ray
        */
        Vector3<Unit> _origin;

        /**
        * The direction vector of the ray
        */
        Vector3<Unit> _direction;
    };

    #include "RTRay.inl"

    /** @} */

}   // Namespace

#endif // __RTRAY_H__
