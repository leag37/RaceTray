// Filename: RTRay.inl
// Author: Gael Huber
// Description: Ray implementation

/**
* Default constructor
*/
template <typename Unit>
Ray<Unit>::Ray()
    :   _origin(Vector3<Unit>()),
        _direction(Vector3<Unit>())
{ }

/**
* Constructor
* @param
*   const Vector3<Unit>& The origin of the ray
* @param
*   const Vector3<Unit>& The direction of the ray
*/
template <typename Unit>
Ray<Unit>::Ray(const Vector3<Unit>& origin, const Vector3<Unit>& direction)
    :   _origin(origin),
        _direction(direction)
{ }

/**
* Copy constructor
* @param
*   const Ray<Unit>& The ray to copy
*/
template <typename Unit>
Ray<Unit>::Ray(const Ray& other)
    :   _origin(other._origin),
        _direction(other._direction)
{ }

/**
* Destructor
*/
template <typename Unit>
Ray<Unit>::~Ray()
{ }

/**
* Return the ray's origin
* @return
*   const Vector3<Unit>& The origin of the ray
*/
template <typename Unit>
const Vector3<Unit>& Ray<Unit>::getOrigin() const
{
    return _origin;
}

/**
* Return the ray's direction
* @return
*   const Vector3<Unit>& The direction of the ray
*/
template <typename Unit>
const Vector3<Unit>& Ray<Unit>::getDirection() const
{
    return _direction;
}
