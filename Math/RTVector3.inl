// Filename: RTVector3.inl
// Author: Gael Huber
// Description: Describes a class for basic Vector3 functionality

/**
* Default constructor.
* Builds a zero vector
*/
template <typename Unit>
Vector3<Unit>::Vector3()
    :   _x(0), _y(0), _z(0)
{ }

/**
* Constructor
* @param
*   Unit The x coordinate
* @param
*   Unit The y coordinate
* @param
*   Unit The z coordinate
*/
template <typename Unit>
Vector3<Unit>::Vector3(Unit x, Unit y, Unit z)
    :   _x(x), _y(y), _z(z)
{ }

/**
* Constructor
* @param
*   Unit* An array of Units of length 3
*/
template <typename Unit>
Vector3<Unit>::Vector3(Unit* coordinates)
    :   _x(coordinates[0]), _y(coordinates[1]), _z(coordinates[2])
{ }

/**
* Copy constructor
* @param
*   const Vector3& The vector to copy
*/
template <typename Unit>
Vector3<Unit>::Vector3(const Vector3& value)
    :   _x(value._x), _y(value._y), _z(value._z)
{ }

/**
* Destructor
*/
template <typename Unit>
Vector3<Unit>::~Vector3()
{ }

/**
* Assignment operator
* @param
*   const Vector3& The vector being assigned
* @return
*   Vector3& The vector value of the vector after assignment
*/
template <typename Unit>
Vector3<Unit>& Vector3<Unit>::operator=(const Vector3& other)
{
    _x = other._x;
    _y = other._y;
    _z = other._z;
    return *this;
}

/**
* Get the x coordinate
* @return
*   Unit The x coordinate
*/
template <typename Unit>
Unit Vector3<Unit>::getX() const
{
    return _x;
}

/**
* Get the y coordinate
* @return
*   Unit The y coordinate
*/
template <typename Unit>
Unit Vector3<Unit>::getY() const
{
    return _y;
}

/**
* Get the z coordinate
* @return
*   Unit The z coordinate
*/
template <typename Unit>
Unit Vector3<Unit>::getZ() const
{
    return _z;
}

/**
* Array-based accessor
* @param
*   int The array index [0..2]
* @return
*   Unit The value at that array index
*/
template <typename Unit>
Unit Vector3<Unit>::operator[](int index) const
{
    assert(index >= 0);
    assert(index < 3);
    return _f[index];
}

/**
* Dot product of two vectors
* @param
*   const Vector3& The vector to take the dot product against
* @return
*   Unit The dot product of the two vectors
*/
template <typename Unit>
Unit Vector3<Unit>::dot(const Vector3& other) const
{
    return _x*other._x + _y*other._y + _z*other._z;
}

/**
* Cross product of two vectors
* @param
*   const Vector3& The right-hand vector in the cross product
* @return
*   Vector3 The resultant vector
*/
template <typename Unit>
Vector3<Unit> Vector3<Unit>::cross(const Vector3& other) const
{
    return Vector3(
                   _y*other._z - _z*other._y,
                   _z*other._x - _x*other._z,
                   _x*other._y - _y*other._x
                   );
}

/**
* Addition of two vectors
* @param
*   const Vector3& The vector to add
* @return
*   Vector3 The resultant vector
*/
template <typename Unit>
Vector3<Unit> Vector3<Unit>::add(const Vector3& other) const
{
    return Vector3(_x+other._x, _y+other._y, _z+other._z);
}

/**
* Addition of two vectors
* @param
*   const Vector3& The vector to add
* @return
*   Vector3 The resultant vector
*/
template <typename Unit>
Vector3<Unit> Vector3<Unit>::operator+(const Vector3& other) const
{
    return Vector3(_x+other._x, _y+other._y, _z+other._z);
}

/**
* Add a vector to the target vector
* @param
*   const Vector3& The vector to add
* @return
*   Vector3& The resultant vector
*/
template <typename Unit>
Vector3<Unit>& Vector3<Unit>::operator+=(const Vector3& other)
{
    _x += other._x;
    _y += other._y;
    _z += other._z;
}

/**
* Subtraction of two vectors
* @param
*   const Vector3& The vector to subtract
* @return
*   Vector3 The resultant vector
*/
template <typename Unit>
Vector3<Unit> Vector3<Unit>::sub(const Vector3& other) const
{
    _x -= other._x;
    _y -= other._y;
    _z -= other._z;
}

/**
* Subtraction of two vectors
* @param
*   const Vector3& The vector to subtract
* @return
*   Vector3 The resultant vector
*/
template <typename Unit>
Vector3<Unit> Vector3<Unit>::operator-(const Vector3& other) const
{
    return Vector3<Unit>(_x-other._x, _y-other._y, _z-other._z);
}

/**
* Subtract a vector from the target vector
* @param
*   const Vector3& The vector to subtract
* @return
*   Vector3& The resultant vector
*/
template <typename Unit>
Vector3<Unit>& Vector3<Unit>::operator-=(const Vector3& other)
{
    _x -= other._x;
    _y -= other._y;
    _z -= other._z;
    return *this;
}

/**
* Scale a vector by a scalar
* @param
*   Unit The amount by which to scale
* @return
*   Vector3 The scaled vector
*/
template <typename Unit>
Vector3<Unit> Vector3<Unit>::scale(Unit scale) const
{
    return Vector3<Unit>(_x*scale, _y*scale, _z*scale);
}

/**
* Scale a vector by a scalar
* @param
*   Unit The amount by which to scale
* @return
*   Vector3 The scaled vector
*/
template <typename Unit>
Vector3<Unit> Vector3<Unit>::operator*(Unit scale) const
{
    return Vector3<Unit>(_x*scale, _y*scale, _z*scale);
}

/**
* Scale a vector by a scalar
* @param
*   Unit The amount by which to scale
* @return
*   Vector3& The scaled vector
*/
template <typename Unit>
Vector3<Unit>& Vector3<Unit>::operator*=(Unit scale)
{
    _x *= scale;
    _y *= scale;
    _z *= scale;
    return *this;
}

/**
* Calculate the length of the vector
* @return
*   Unit The length of the vector
*/
template <typename Unit>
Unit Vector3<Unit>::length() const
{
    // Calculate squared length
    Unit sqrLen = _x*_x + _y*_y +_z*_z;
    return sqrt(sqrLen);
}

/**
* Calculate the squared length of the vector
* @return
*   Unit The squared length of the vector
*/
template <typename Unit>
Unit Vector3<Unit>::sqrLength() const
{
    return _x*_x + _y*_y +_z*_z;
}

/**
* Return the normalized version of the vector
* @return
*   Vector3 The normalized copy
*/
template <typename Unit>
Vector3<Unit> Vector3<Unit>::normal() const
{
    Unit len = length();
    return Vector3<Unit>(_x / len, _y / len, _z / len);
}

/**
* Normalize the vector
* @return
*   Vector3& The normalized vector
*/
template <typename Unit>
Vector3<Unit>& Vector3<Unit>::normalize()
{
    Unit len = length();
    _x /= len;
    _y /= len;
    _z /= len;
}

/**
* Returns whether two vectors are equal
* @param
*   const Vector3& The vector to compare against
* @return
*   bool True if the vectors are equivalent
*/
template <typename Unit>
bool Vector3<Unit>::operator==(const Vector3& other)
{
    return _x == other._x && _y == other._y && _z == other._z;
}

/**
* Returns whether two vectors are not equal
* @param
*   const Vector3& The vector to compare against
* @return
*   bool True if the vectors are not equivalent
*/
template <typename Unit>
bool Vector3<Unit>::operator!=(const Vector3& other)
{
    return _x != other._x || _y != other._y || _z != other._z;
}
