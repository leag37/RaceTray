// Filename: RTSceneBuilder.h
// Author: Gael Huber
// Description: Defines the base class for a scene builder
#ifndef __RTSCENEBUILDER_H__
#define __RTSCENEBUILDER_H__

namespace RaceTray
{
    /** \addtogroup Scene
    *   @{
    */

    // Forward declaration
    class Scene;

    /**
    * Base class that is responsible for constructing a scene.
    */
    class SceneBuilder
    {
    public:
        /**
        * Default constructor
        */
        SceneBuilder();

        /**
        * Destructor
        */
        virtual ~SceneBuilder();

        /**
        * Build the scene
        * @param
        *   Scene* The scene to build
        */
        virtual bool buildScene(Scene* scene) = 0;
    };

    /** @} */

}   // Namespace

#endif // __RTSCENEBUILDER_H__
