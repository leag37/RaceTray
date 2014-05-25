// Filename: RTObject.cpp
// Author: Gael Huber
// Description: Base engine object definition

#include "Geometry/RTObject.h"

namespace RaceTray
{
    /**
    * Default constructor
    */
    Object::Object()
    {
    }

    /**
    * Constructor
    * @param
    *   const Vector3f The position of the object
    */
    Object::Object(const Vector3f& position)
        :   _position(position)
    {

    }

    /**
    * Copy constructor
    * @param
    *   const Object& The object to copy
    */
    Object::Object(const Object& other)
        :   _position(other._position)
    {

    }

    /**
    * Destructor
    */
    Object::~Object()
    {

    }

    /**
    * Return the object position
    * @return
    *   const Vector3f& The object position
    */
    const Vector3f& Object::getPosition() const
    {
        return _position;
    }

    /**
    * Set the object position
    * @param
    *   const Vector3f& The new position
    */
    void Object::setPosition(const Vector3f& value)
    {
        _position = value;
    }

    /**
    * Set the material for the object
    * @param
    *   const Material& The material to set for this object
    */
    void Object::setMaterial(const Material& material)
    {
        _material = material;
    }

}   // Namespace
