// Filename: RTColor.h
// Author: Gael Huber
// Description: 4-component color values
#ifndef __RTCOLOR_H__
#define __RTCOLOR_H__

#include "RTMath.h"

namespace RaceTray
{
    /** \addtogroup Math
    *   @{
    */

    /**
    * 4-channel color values represented as {r, g, b, a} with each channel having a range of [0..1]
    */
    template <typename Unit>
    class Color
    {
    public:
        /**
        * Default constructor
        */
        Color();

        /**
        * Constructor build from 4 specified channels
        * @param
        *   Unit Red channel
        * @param
        *   Unit Green channel
        * @param
        *   Unit Blue channel
        * @param
        *   Unit Alpha channel
        */
        Color(Unit r, Unit g, Unit b, Unit a);

        /**
        * Copy constructor
        * @param
        *   const Color<Unit>& The color to copy
        */
        Color(const Color& other);

        /**
        * Destructor
        */
        ~Color();

        /**
        * Assignment operator
        * @param
        *   const Color<Unit>& The color to assign
        * @return
        *   Color<Unit>& The color after the assignment has been finished
        */
        Color& operator=(const Color& other);

        /**
        * Get the red channel
        * @return
        *   Unit The color's red channel
        */
        Unit getRed() const;

        /**
        * Set the red channel
        * @param
        *   Unit The color's red channel
        */
        void setRed(Unit value);

        /**
        * Get the green channel
        * @return
        *   Unit The color's green channel
        */
        Unit getGreen() const;

        /**
        * Set the green channel
        * @param
        *   Unit The color's green channel
        */
        void setGreen(Unit value);

        /**
        * Get the blue channel
        * @return
        *   Unit The color's blue channel
        */
        Unit getBlue() const;

        /**
        * Set the blue channel
        * @param
        *   Unit The color's blue channel
        */
        void setBlue(Unit value);

        /**
        * Get the alpha channel
        * @return
        *   Unit The color's alpha channel
        */
        Unit getAlpha() const;

        /**
        * Set the alpha channel
        * @param
        *   Unit The color's alpha channel
        */
        void setAlpha(Unit value);

        /**
        * Add two colors together
        * @param
        *   const Color& The color to add
        * @return
        *   Color& The sum of the two colors
        */
        Color& operator+=(const Color& other);

        /**
        * Add two colors together
        * @param
        *   const Color& The color to add
        * @return
        *   Color& The sum of the two colors
        */
        Color& add(const Color& other);

        /**
        * Add two colors together
        * @param
        *   const Color& The color to add
        * @return
        *   Color The sum of the two colors
        */
        Color operator+(const Color& other) const;

        /**
        * Add two colors together
        * @param
        *   const Color& The color to add
        * @return
        *   Color The sum of the two colors
        */
        Color sum(const Color& other) const;

        /**
        * Find the difference between two colors
        * @param
        *   const Color& The color to subtract
        * @return
        *   Color& The difference of the two colors
        */
        Color& operator-=(const Color& other);

        /**
        * Find the difference between two colors
        * @param
        *   const Color& The color to subtract
        * @return
        *   Color& The difference of the two colors
        */
        Color& sub(const Color& other);

        /**
        * Find the difference between two colors
        * @param
        *   const Color& The color to subtract
        * @return
        *   Color The difference of the two colors
        */
        Color operator-(const Color& other) const;

        /**
        * Find the difference between two colors
        * @param
        *   const Color& The color to subtract
        * @return
        *   Color The difference of the two colors
        */
        Color difference(const Color& other) const;

        /**
        * Clamp the values of the color between [0..1]
        */
        void clamp();

        /**
        * Return a copy of the color clamped between [0..1]
        * @return
        *   Color The clamped color
        */
        Color clamped() const;

    private:
        /**
        * Red channel
        */
        Unit _r;

        /**
        * Green channel
        */
        Unit _g;

        /**
        * Blue channel
        */
        Unit _b;

        /**
        * Alpha channel
        */
        Unit _a;
    };

    #include "RTColor.inl"

    /** @} */

}   // Namespace

#endif // __RTCOLOR_H__
