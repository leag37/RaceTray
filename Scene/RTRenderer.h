// Filename: RTRenderer.h
// Author: Gael Huber
// Description: Render pipeline owner
#ifndef __RTRENDERER_H__
#define __RTRENDERER_H__

#include <vector>

#include "Geometry/RTObject.h"
#include "Math/RTMath.h"
#include "Scene/RTCamera.h"
#include "Scene/RTLight.h"
#include "Scene/RTLightPair.h"
#include "Scene/RTSceneGraph.h"
#include "Scene/RTStaticRenderTarget.h"

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
        /**
        * Trace the primary ray through the scene and output the color given by the ray. The primary
        * ray originates at the camera.
        * @param
        *   const Rayf& The ray being traced through the scene from the camera
        * @param
        *   const SceneGraph* The SceneGraph instance against which to render
        * @param
        *   const vector<Light*>& The vector holding all the light data in the scene
        * @return
        *   Colorf The final color from the ray
        */
        Colorf tracePrimaryRay(const Rayf& ray, const SceneGraph* sceneGraph, const std::vector<Light*>& lights);

        /**
        * Trace a shadow ray through the scene and output the color given by the ray. The shadow
        * ray originates at the contact point on the receiving object and goes towards the source
        * light.
        * @param
        *   const LightPair& The pairing of the receiving object and the source light
        * @param
        *   const Rayf& The ray being traced through the scene from the camera
        * @param
        *   const SceneGraph* The SceneGraph instance against which to render
        * @param
        *   const vector<Light*>& The vector holding all the light data in the scene
        * @param
        *   int recursiveIndex The current recursive index
        * @return
        *   Colorf The final color from the ray
        */
        Colorf traceShadowRay(const LightPair& lightPair, const Rayf& ray, const SceneGraph* sceneGraph, const std::vector<Light*>& lights, int recursiveIndex);

        /**
        * Trace a reflection ray through the scene and output the color given by the ray. The reflection
        * ray's output is determined by the material component of the receiving object
        * @param
        *   const Object* The receiving object of the reflection
        * @param
        *   const Rayf& The ray being traced through the scene from the camera
        * @param
        *   const SceneGraph* The SceneGraph instance against which to render
        * @param
        *   const vector<Light*>& The vector holding all the light data in the scene
        * @param
        *   int recursiveIndex The current recursive index
        * @return
        *   Colorf The final color from the ray
        */
        Colorf traceReflectionRay(const Object* object, const Rayf& ray, const SceneGraph* sceneGraph, const std::vector<Light*>& lights, int recursiveIndex);

    private:
        /**
        * The render target for this renderer
        */
        RenderTarget* _renderTarget;

    };

    /** @} */

}   // Namespace

#endif // __RTRENDERER_H__
