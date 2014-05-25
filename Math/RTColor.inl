// Filename: RTColor.inl
// Author: Gael Huber
// Description: Color implementation

/**
* Default constructor
*/
template <typename Unit>
Color<Unit>::Color()
    :   _r(0), _g(0), _b(0), _a(0)
{ }

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
template <typename Unit>
Color<Unit>::Color(Unit r, Unit g, Unit b, Unit a)
    :   _r(r), _g(g), _b(b), _a(a)
{ }

/**
* Copy constructor
* @param
*   const Color<Unit>& The color to copy
*/
template <typename Unit>
Color<Unit>::Color(const Color& other)
    :   _r(other._r), _g(other._g), _b(other._b), _a(other._a)
{ }

/**
* Destructor
*/
template <typename Unit>
Color<Unit>::~Color()
{ }

/**
* Assignment operator
* @param
*   const Color<Unit>& The color to assign
* @return
*   Color<Unit>& The color after the assignment has been finished
*/
template <typename Unit>
Color<Unit>& Color<Unit>::operator=(const Color& other)
{
    _r = other._r;
    _g = other._g;
    _b = other._b;
    _a = other._a;
    return *this;
}
