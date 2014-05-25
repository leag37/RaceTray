// Filename: RTSimpleSceneBuilder.cpp
// Author: Gael Huber
// Description: Defines a simple scene builder

#include "Effects/RTMaterial.h"
#include "Geometry/RTSphere.h"
#include "Scene/RTCamera.h"
#include "Scene/RTScene.h"
#include "Scene/RTSimpleSceneBuilder.h"

namespace RaceTray
{
    /**
    * Default constructor
    */
    SimpleSceneBuilder::SimpleSceneBuilder()
    {

    }

    /**
    * Destructor
    */
    SimpleSceneBuilder::~SimpleSceneBuilder()
    {

    }

    /**
    * Build the scene
    * @param
    *   Scene* The scene to build
    */
    bool SimpleSceneBuilder::buildScene(Scene* scene)
    {
        // Add a camera
        Camera* camera = new Camera();
        camera->setPosition(Vector3f(0.0f, 0.0f, -1.0f));
        scene->registerCamera(camera);

        // Create a random sphere
        Material mat = Material(Colorf(0.5f, 0.0f, 0.5f, 1.0f));

        Sphere* sphere = new Sphere();
        sphere->setPosition(Vector3f(1.0f, 1.0f, 5.0f));
        sphere->setMaterial(mat);
        scene->addRenderable(sphere);

        return true;
    }
}
