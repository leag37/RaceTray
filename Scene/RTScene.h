// Filename: RTScene.h
// Author: Gael Huber
// Description: A scene is the overarching container for all data within RaceTray.
#ifndef __RTSCENE_H__
#define __RTSCENE_H__

#include <vector>

#include "Math/RTMath.h"

#include "RTRenderer.h"

namespace RaceTray
{
    /** \addtogroup Scene
    *   @{
    */

    /**
    * A scene is the overarching container for all data within the RaceTray ray tracer. The scene
    * the scene graph, physics world, animation sequences, the render pipeline, and the
    * application configuration.
    */
    class Scene
    {
    public:
        /**
        * Default constructor
        */
        Scene();

        /**
        * Copy constructor
        * @param
        *   const Scene& The scene to copy
        */
        Scene(const Scene& other);

        /**
        * Destructor
        */
        ~Scene();

        /**
        * Initialize the scene. This takes care of reading in any configuration files specified and
        * preparing the scene to be played.
        * @return
        *   bool Returns true if the scene was initialized successfully
        */
        bool initialize();

        /**
        * Destroy the scene and free all resources used.
        */
        void destroy();

        /**
        * Play the scene
        * @return
        *   bool Returns true if the scene was played successfully
        */
        bool play();

    private:
        /**
        * Scene graph
        */
        SceneGraph* _sceneGraph;

        /**
        * Physical world
        */
        //PhysicsWorld* _physicsWorld;

        /**
        * Renderer
        */
        Renderer* _renderer;

        /**
        * Camera
        */
        Camera* _camera;

        /**
        * Light list
        */
        std::vector<Light*> _lights;
    };

    /** @} */

}   // Namespace

#endif // __RTSCENE_H__
