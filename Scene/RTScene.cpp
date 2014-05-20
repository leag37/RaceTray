// Filename: RTScene.cpp
// Author: Gael Huber
// Description: Implementation file for scene.

#include "RTScene.h"

namespace RaceTray
{
    /**
    * Default constructor
    */
    Scene::Scene()
    {
        // TODO
    }

    /**
    * Copy constructor
    * @param
    *   const Scene& The scene to copy
    */
    Scene::Scene(const Scene& other)
    {
        // TODO: Is copy constructor supported?
    }

    /**
    * Destructor
    */
    Scene::~Scene()
    {
        // TODO
    }

    /**
    * Initialize the scene. This takes care of reading in any configuration files specified and
    * preparing the scene to be played.
    * @return
    *   bool Returns true if the scene was initialized successfully
    */
    bool Scene::initialize()
    {
        // TODO
        return true;
    }

    /**
    * Destroy the scene and free all resources used.
    */
    void Scene::destroy()
    {
        // TODO
    }

    /**
    * Play the scene
    * @return
    *   bool Returns true if the scene was played successfully
    */
    bool Scene::play()
    {
        return true;
    }


}   // Namespace