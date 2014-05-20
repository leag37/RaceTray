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
        * Add two colors together
        * @param
        *   const Color& The color to add
        * @return
        *   Color& The sum of the two colors
        */
        Color& operator+=(const Color& other);

        Color& add(const Color& other);

        Color operator+(const Color& other) const;

        Color sum(const Color& other) const;

        Color& operator-=(const Color& other);

        Color& sub(const Color& other);

        Color operator-(const Color& other) const;

        Color difference(const Color& other) const;

        void clamp();

        Color clamped();


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
