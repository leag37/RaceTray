// Filename: RTMath.h
// Author: Gael Huber
// Description: Pure mathematical definitions of certain classes and functions. There may be some
//  apparent overlap with the Geometry package, the difference being the classes in the Geometry
//  package contain the polygonal representations of each object (e.g. Prism vs. PrismMesh)
#ifndef __RTMATH_H__
#define __RTMATH_H__

#include <assert.h>
#include <math.h>

// Class definition includes
#include "RTMathPrerequisites.h"
#include "RTColor.h"
//#include "RTColor32.h"
//#include "RTMatrix33.h"
#include "RTMatrix44.h"
//#include "RTPlane.h"
//#include "RTPrism.h"
//#include "RTPyramid.h"
#include "RTRay.h"
//#include "RTSphere.h"
#include "RTVector2.h"
#include "RTVector3.h"
//#include "RTVector4.h"


namespace RaceTray
{
    /** \addtogroup Math
    *   @{
    */

    //**************************************
    // Typedefs for standard class types
    //**************************************
    /**
    * Color composed of floats
    */
    typedef Color<float> Colorf;

    /**
    * Color composed of doubles
    */
    typedef Color<double> Colord;

    /**
    * Ray composed of floats
    */
    typedef Ray<float> Rayf;

    /**
    * Vector2 of floats
    */
    typedef Vector2<float> Vector2f;

    /**
    * Vector2 of doubles
    */
    typedef Vector2<double> Vector2d;

    /**
    * Vector2 of ints
    */
    typedef Vector2<int> Vector2i;

    /**
    * Vector3 of floats
    */
    typedef Vector3<float> Vector3f;

    /**
    * Vector3 of doubles
    */
    typedef Vector3<double> Vector3d;

    /**
    * Vector3 of ints
    */
    typedef Vector3<int> Vector3i;

    /**
    * Vector3 of longs
    */
    typedef Vector3<long> Vector3l;



    //***********************
    // Math constants
    //***********************

    const Vector3f Vec3Zerof = Vector3f(0.0f, 0.0f, 0.0f);
    const Vector3d Vec3Zerod = Vector3d(0.0, 0.0, 0.0);

    /** @} */

}   // Namespace

#endif // __RTMATH_H__
