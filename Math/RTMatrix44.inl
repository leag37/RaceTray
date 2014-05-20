// Filename: RTMatrix44.inl
// Author: Gael Huber
// Description: Homogeneous 4x4 matrix math

/**
* Build a matrix which translates by x, y, z
* @param
*   const Vector3& The vector {x, y, z} by which to base translation
* @return
*   Matrix44 The resultant transformation matrix
*/
template <typename Unit>
Matrix44<Unit> MatrixTranslation(const Vector3<Unit>& v)
{
    return Matrix44<Unit>();
}
