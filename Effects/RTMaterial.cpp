// Filename: RTMaterial.cpp
// Author: Gael Huber
// Description: Defines a material that can be applied to an object
#include "Effects/RTMaterial.h"

namespace RaceTray
{
    /**
    * Default constructor
    */
    Material::Material()
    {

    }

    /**
    * Constructor
    * @param
    *   const Colorf& The color of the material
    */
    Material::Material(const Colorf& color)
        :   _color(color)
    {

    }

    /**
    * Copy constructor
    * @param
    *   const Material& The material to copy
    */
    Material::Material(const Material& other)
        :   _color(other._color)
    {

    }

    /**
    * Destructor
    */
    Material::~Material()
    {

    }

    /**
    * Get the color of the material
    * @return
    *   const Colorf& The material's color
    */
    const Colorf& Material::getColor() const
    {
        return _color;
    }

}   // Namespace


