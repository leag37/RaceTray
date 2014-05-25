// Filename: RTMaterial.h
// Author: Gael Huber
// Description: Defines a material that can be applied to an object
#ifndef __RTMATERIAL_H__
#define __RTMATERIAL_H__

#include "Math/RTMath.h"

namespace RaceTray
{
    /** \addtogroup Effects
    *   @{
    */

    /**
    * Materials can be applied to any object and define the physical properties of the object.
    */
    class Material
    {
    public:
        /**
        * Default constructor
        */
        Material();

        /**
        * Constructor
        * @param
        *   const Colorf& The color of the material
        */
        Material(const Colorf& color);

        /**
        * Copy constructor
        * @param
        *   const Material& The material to copy
        */
        Material(const Material& other);

        /**
        * Destructor
        */
        ~Material();

        /**
        * Get the color of the material
        * @return
        *   const Colorf& The material's color
        */
        const Colorf& getColor() const;

    private:
        /**
        * Define the color for this material.
        * NOTE: This will eventually be replaced by things like index of refraction, luminosity, radiance, etc.
        */
        Colorf _color;
    };

    /** @} */

}   // Namespace

#endif // __RTMATERIAL_H__

