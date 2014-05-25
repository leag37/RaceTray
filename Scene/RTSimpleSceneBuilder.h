// Filename: RTSimpleSceneBuilder.h
// Author: Gael Huber
// Description: Defines a simple scene builder
#ifndef __RTSIMPLESCENEBUILDER_H__
#define __RTSIMPLESCENEBUILDER_H__

#include "Scene/RTSceneBuilder.h"

namespace RaceTray
{
    /** \addtogroup Scene
    *   @{
    */

    /**
    * A simple scene builder constructs a random scene with primitive shapes.
    */
    class SimpleSceneBuilder : public SceneBuilder
    {
    public:
        /**
        * Default constructor
        */
        SimpleSceneBuilder();

        /**
        * Destructor
        */
        ~SimpleSceneBuilder();

        /**
        * Build the scene
        * @param
        *   Scene* The scene to build
        */
        bool buildScene(Scene* scene);
    };

    /** @} */

}   // Namespace

#endif // __RTSIMPLESCENEBUILDER_H__
