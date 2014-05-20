// Filename: RTVector3.h
// Author: Gael Huber
// Description: Describes a class for basic Vector3 functionality
#ifndef __RTVECTOR3_H__
#define __RTVECTOR3_H__

#include "RTMath.h"

namespace RaceTray
{
    /** \addtogroup Math
    *   @{
    */

    /**
    * Represents a 3 dimensional vector
    */
    template <typename Unit>
    class Vector3
    {
    public:
        /**
        * Default constructor. Builds a zero vector
        */
        Vector3();

        /**
        * Constructor
        * @param
        *   Unit The x coordinate
        * @param
        *   Unit The y coordinate
        * @param
        *   Unit The z coordinate
        */
        Vector3(Unit x, Unit y, Unit z);

        /**
        * Constructor
        * @param
        *   Unit* An array of Units of length 3
        */
        Vector3(Unit* coordinates);

        /**
        * Copy constructor
        * @param
        *   const Vector3& The vector to copy
        */
        Vector3(const Vector3& value);

        /**
        * Destructor
        */
        ~Vector3();

        /**
        * Assignment operator
        * @param
        *   const Vector3& The vector being assigned
        * @return
        *   Vector3& The vector value of the vector after assignment
        */
        Vector3& operator=(const Vector3& other);

        /**
        * Get the x coordinate
        * @return
        *   Unit The x coordinate
        */
        Unit getX() const;

        /**
        * Get the y coordinate
        * @return
        *   Unit The y coordinate
        */
        Unit getY() const;

        /**
        * Get the z coordinate
        * @return
        *   Unit The z coordinate
        */
        Unit getZ() const;

        /**
        * Array-based accessor
        * @param
        *   int The array index [0..2]
        * @return
        *   Unit The value at that array index
        */
        Unit operator[](int index) const;

        /**
        * Dot product of two vectors
        * @param
        *   const Vector3& The vector to take the dot product against
        * @return
        *   Unit The dot product of the two vectors
        */
        Unit dot(const Vector3& other) const;

        /**
        * Cross product of two vectors
        * @param
        *   const Vector3& The right-hand vector in the cross product
        * @return
        *   Vector3 The resultant vector
        */
        Vector3 cross(const Vector3& other) const;

        /**
        * Addition of two vectors
        * @param
        *   const Vector3& The vector to add
        * @return
        *   Vector3 The resultant vector
        */
        Vector3 add(const Vector3& other) const;

        /**
        * Addition of two vectors
        * @param
        *   const Vector3& The vector to add
        * @return
        *   Vector3 The resultant vector
        */
        Vector3 operator+(const Vector3& other) const;

        /**
        * Add a vector to the target vector
        * @param
        *   const Vector3& The vector to add
        * @return
        *   Vector3& The resultant vector
        */
        Vector3& operator+=(const Vector3& other);

        /**
        * Subtraction of two vectors
        * @param
        *   const Vector3& The vector to subtract
        * @return
        *   Vector3 The resultant vector
        */
        Vector3 sub(const Vector3& other) const;

        /**
        * Subtraction of two vectors
        * @param
        *   const Vector3& The vector to subtract
        * @return
        *   Vector3 The resultant vector
        */
        Vector3 operator-(const Vector3& other) const;

        /**
        * Subtract a vector from the target vector
        * @param
        *   const Vector3& The vector to subtract
        * @return
        *   Vector3& The resultant vector
        */
        Vector3& operator-=(const Vector3& other);

        /**
        * Scale a vector by a scalar
        * @param
        *   Unit The amount by which to scale
        * @return
        *   Vector3 The scaled vector
        */
        Vector3 scale(Unit scale) const;

        /**
        * Scale a vector by a scalar
        * @param
        *   Unit The amount by which to scale
        * @return
        *   Vector3 The scaled vector
        */
        Vector3 operator*(Unit scale) const;

        /**
        * Scale a vector by a scalar
        * @param
        *   Unit The amount by which to scale
        * @return
        *   Vector3& The scaled vector
        */
        Vector3& operator*=(Unit scale);

        /**
        * Calculate the length of the vector
        * @return
        *   Unit The length of the vector
        */
        Unit length() const;

        /**
        * Calculate the squared length of the vector
        * @return
        *   Unit The squared length of the vector
        */
        Unit sqrLength() const;

        /**
        * Return the normalized version of the vector
        * @return
        *   Vector3 The normalized copy
        */
        Vector3 normal() const;

        /**
        * Normalize the vector
        * @return
        *   Vector3& The normalized vector
        */
        Vector3& normalize();

        /**
        * Returns whether two vectors are equal
        * @param
        *   const Vector3& The vector to compare against
        * @return
        *   bool True if the vectors are equivalent
        */
        bool operator==(const Vector3& other);

        /**
        * Returns whether two vectors are not equal
        * @param
        *   const Vector3& The vector to compare against
        * @return
        *   bool True if the vectors are not equivalent
        */
        bool operator!=(const Vector3& other);

    private:
        /**
        * Union of x, y, z coordinates
        */
        union
        {
            struct
            {
                Unit _x;
                Unit _y;
                Unit _z;
            };
            Unit _f[3];
        };
    };

    #include "RTVector3.inl"

    /** @} */

}   // Namespace

#endif // __RTVECTOR3_H__
