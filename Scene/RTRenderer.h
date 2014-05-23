// Filename: RTRenderer.h
// Author: Gael Huber
// Description: Render pipeline owner
#ifndef __RTRENDERER_H__
#define __RTRENDERER_H__

#include <vector>

#include "Math/RTMath.h"
#include "Scene/RTSceneGraph.h"
#include "Scene/RTLight.h"
#include "Scene/RTCamera.h"

namespace RaceTray
{
    /** \addtogroup Scene
    *   @{
    */

    /**
    * Renderer owns the rendering pipeline. It is responsible for applying colors to the frame and
    * flushing the output when done.
    */
    class Renderer
    {
    public:
        /**
        * Default constructor
        */
        Renderer();

        /**
        * Destructor
        */
        ~Renderer();

        /**
        * Initialize the renderer, including the output buffer
        * @return
        *   bool Return true if the initialization succeeded
        */
        bool initialize();

        /**
        * Destroy the renderer and all its components
        */
        void destroy();

        /**
        * Given the scene graph, camera, and lights, render the scene to the target output
        * @param
        *   const SceneGraph* The SceneGraph instance against which to render
        * @param
        *   const vector<Light*>& The vector holding all the light data in the scene
        * @param
        *   const Camera& The scene's camera
        */
        bool render(const SceneGraph* sceneGraph, const std::vector<Light*>& lights, const Camera& camera);

    private:

    };

    /** @} */

}   // Namespace

#endif // __RTRENDERER_H__
