// Filename: RTScene.cpp
// Author: Gael Huber
// Description: Implementation file for scene.

#include <iostream>
#include <time.h>

#include "RTScene.h"
#include "Scene/RTSimpleSceneBuilder.h"
#include "Scene/RTSimpleSceneGraph.h"

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
        // Initialize the renderer
        _renderer = new Renderer();
        if(_renderer->initialize() == false)
        {
            return false;
        }

        // Initialize scene graph, world, etc.
        _sceneGraph = new SimpleSceneGraph();
        _sceneGraph->initialize();

        // Create a scene builder and invoke it to build the scene
        time_t buildStart = time(0);

        SceneBuilder* sceneBuilder = new SimpleSceneBuilder();
        bool result = sceneBuilder->buildScene(this);
        delete sceneBuilder;

        time_t buildEnd = time(0);

        std::cout << "Scene built in " << buildEnd - buildStart << " seconds." << std::endl;
        return result;
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
        // Start timing the scene
        time_t sceneStart = time(0);

        /*
        Update physics tick
        renderer->render(sceneGraph, _lights, camera);
        */

        // Stop timing the scene and output total duration
        time_t sceneEnd = time(0);
        std::cout << "Scene completed in " << sceneEnd - sceneStart << " seconds." << std::endl;

        return true;
    }

    /**
    * Register a camera with the scene and set it as the active camera
    * @param
    *   Camera* The camera to register
    */
    void Scene::registerCamera(Camera* camera)
    {
        _camera = camera;
    }

    /**
    * Add a renderable object to the scene
    * @param
    *   Object* The object to add to the scene graph
    */
    void Scene::addRenderable(Object* object)
    {
        _sceneGraph->add(object);
    }

}   // Namespace
