// Filename: RTMatrix44.h
// Author: Gael Huber
// Description: Homogeneous matrix math
#ifndef __RTMATRIX44_H__
#define __RTMATRIX44_H__

#include "RTMath.h"

namespace RaceTray
{
    /** \addtogroup Math
    *   @{
    */

    template <typename Unit>
    class Matrix44
    {
    public:

    private:

    };

    /**
    * Build a matrix which translates by x, y, z
    * @param
    *   const Vector3& The vector {x, y, z} by which to base translation
    * @return
    *   Matrix44 The resultant transformation matrix
    */
    template <typename Unit>
    Matrix44<Unit> MatrixTranslation(const Vector3<Unit>& v);

    #include "RTMatrix44.inl"

    /** @} */

}   // Namespace

#endif // __RTMATRIX44_H__
