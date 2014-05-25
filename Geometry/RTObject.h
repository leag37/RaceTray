// Filename: RTObject.h
// Author: Gael Huber
// Description: Base engine object definition
#ifndef __RTOBJECT_H__
#define __RTOBJECT_H__

#include "Effects/RTMaterial.h"
#include "Math/RTMath.h"
#include "Scene/RTSceneCollisionData.h"

namespace RaceTray
{
    /** \addtogroup Geometry
    *   @{
    */

    /**
    * The base object. All engine entities derive from the base object.
    */
    class Object
    {
    public:
        /**
        * Default constructor
        */
        Object();

        /**
        * Constructor
        * @param
        *   const Vector3f The position of the object
        */
        Object(const Vector3f& position);

        /**
        * Copy constructor
        * @param
        *   const Object& The object to copy
        */
        Object(const Object& other);

        /**
        * Destructor
        */
        virtual ~Object();

        /**
        * Return the object position
        * @return
        *   const Vector3f& The object position
        */
        const Vector3f& getPosition() const;

        /**
        * Set the object position
        * @param
        *   const Vector3f& The new position
        */
        void setPosition(const Vector3f& value);

        /**
        * Set the material for the object
        * @param
        *   const Material& The material to set for this object
        */
        void setMaterial(const Material& material);

        /**
        * Check against this object for a ray collision.
        * @param
        *   const Ray& The ray against which to check
        * @param
        *   SceneCollisionData& The information about the collision, if any
        */
        virtual void checkRayCollision(const Rayf& ray, SceneCollisionData& data) = 0;

    protected:
        /**
        * Position of the object
        */
        Vector3f _position;

        /**
        * The object's material
        */
        Material _material;
    };

    /** @} */

}   // Namespace

#endif // __RTOBJECT_H__
