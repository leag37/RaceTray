// Filename: RTSceneCollisionData.h
// Author: Gael Huber
// Description: Defines information about a ray-scene collision
#ifndef __RTSCENECOLLISIONDATA_H__
#define __RTSCENECOLLISIONDATA_H__

#include "Math/RTMath.h"

namespace RaceTray
{
    /** \addtogroup Scene
    *   @{
    */

    // Forward declarations
    class Object;

    /**
    * Contains information about a ray-scene collision. Primarily holds the origin ray, the
    * intersecting object, the contact point, and the contact normal.
    */
    class SceneCollisionData
    {
    public:
        /**
        * Default constructor
        */
        SceneCollisionData();

    private:
        /**
        * The colliding ray
        */
        Rayf _ray;

        /**
        * The colliding object
        */
        Object* _object;

        /**
        * A flag whether this collision data has information about a valid collision
        */
        bool _hasCollision;

        /**
        * The contact point of the collision
        */
        Vector3f _contactPoint;

        /**
        * The contact normal for the collision
        */
        Vector3f _contactNormal;

    };

    /** @} */

}   // Namespace

#endif // __RTSCENECOLLISIONDATA_H__
