// Filename: RTStaticRenderTarget.cpp
// Author: Gael Huber
// Description: Implementation for StaticRenderTarget

#include "Scene/RTStaticRenderTarget.h"

namespace RaceTray
{
    /**
    * Default constructor
    */
    StaticRenderTarget::StaticRenderTarget()
        :   RenderTarget(),
            _bitmap(0)
    { }

    /**
    * Copy constructor
    * @param
    *   const StaticRenderTarget& The render target to copy
    */
    StaticRenderTarget::StaticRenderTarget(const StaticRenderTarget& other)
    {
        // TODO
    }

    /**
    * Destructor
    */
    StaticRenderTarget::~StaticRenderTarget()
    { }

    /**
    * Initialize the render target
    * @param
    *   int The width of the render target
    * @param
    *   height The height of the render target
    * @return
    *   bool Returns true if the target is successfully created
    */
    bool StaticRenderTarget::initialize(int width, int height)
    {
        // Store width and height
        _width = width;
        _height = height;

        // Create the buffer
        int size = _width * _height;
        _bitmap = new Colorf[size];

        // If allocation failed, return false
        if(_bitmap == 0)
        {
            return false;
        }

        // Initialize the buffer
        for(int i = 0; i < size; ++i)
        {
            _bitmap[i] = Colorf();
        }

        return true;
    }

    /**
    * Destroy the render target
    */
    void StaticRenderTarget::destroy()
    {
        // Release the bitmap
        if(_bitmap != 0)
        {
            delete[] _bitmap;
        }
    }


}   // Namespace

