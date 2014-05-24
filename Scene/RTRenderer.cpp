// Filename: RTRenderer.cpp
// Author: Gael Huber
// Description: Implementation for the renderer
#include "Scene/RTRenderer.h"

namespace RaceTray
{
    bool Renderer::render(const SceneGraph* sceneGraph, const std::vector<Light*>& lights, const Camera& camera)
    {
        // Iterate through each pixel in the scene
        // For each pixel, construct a ray
        // Trace the ray against the scene graph
        /*
        RenderTarget& renderTarget = camera.getRenderTarget();

        // Iterate through all pixels in the target
        for(int x = 0; x < renderTarget.getWidth(); ++x)
        {
            for(int y = 0; y < renderTarget.getHeight(); ++y)
            {
                // Convert x, y to screen coordinates
                Vector2i screenCoords(x, y);

                // Get the ray and trace it
                Ray ray = camera.getRayForScreenCoords(screenCoords);

                // Trace the ray through the scene
                Colorf color = traceRay(ray, sceneGraph, lights);

                // Set the final color for the pixel
                renderTarget.setColorFor(color, screenCoords);
            }
        }

        // Render the result to file
        BMPWriter writer = BMPWriter();
        writer.write(renderTarget, "render");
        */

        return true;
    }

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
    Colorf Renderer::tracePrimaryRay(const Rayf& ray, const SceneGraph* sceneGraph, const std::vector<Light*>& lights)
    {
        /*
            // Query the scene for an object collision
            CollisionData collision = sceneGraph->queryRay(ray);

            // Final color starts as black
            Colorf finalColor = Colorf();

            // Set the recursive index
            int recursiveIndex = 0;

            // If a collision was found
            if(collision.hasCollision() == true)
            {
                // Get the collision object
                Object* collisionObject = collision.getObject();

                // Various color types
                Colorf shadowColor, reflectionColor, refractionColor;

                // Test against all light sources
                for(std::vector<Light*>::iterator itr = lights.begin(); itr != lights.end(); ++itr)
                {
                    // Calculate direction of light ray
                    Ray shadowRay;

                    // Create a light pair with the object and source light
                    LightPair lightPair = LightPair(collision, *itr);

                    // Cast the shadow ray and add the resultant color
                    shadowColor += traceShadowRay(lightPair, shadowRay, sceneGraph, lights, recursiveIndex + 1);
                }

                // Trace the reflection ray. The reflection ray works similarly to the primary ray,
                // however the final color contribution is entirely dependent on the material
                Ray reflectionRay = object->getReflectionRay();
                reflectionColor = traceReflectionRay(collisionObject, reflectionRay, sceneGraph, lights, recursiveIndex + 1);

                // Trace refraction ray
                // TODO

                // Compute fresnel term to get the refraction and reflection mixing values
                float kR, kT;
                ComputeFresnel(collisionObject->getMaterial().refractiveIndex, collision.contactNormal, &kR, kT);

                // Compute the final color value using the contribution terms of refraction and
                // reflection as well as the value derived from shadow
                finalColor = (kR * refractionColor) + (kT * reflectionColor) + shadowColor;

                // Clamp the color within range
                finalColor.clamp();
            }
        */

        return Colorf();
    }

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
    Colorf Renderer::traceShadowRay(const LightPair& lightPair, const Rayf& ray, const SceneGraph* sceneGraph, const std::vector<Light*>& lights, int recursiveIndex)
    {
        /*
        Colorf finalColor = Colorf();

        if(recursiveIndex > _maxRecursiveIndex)
        {
            return finalColor;
        }

        // Query the scene for a collision
        CollisionData collision = sceneGraph->queryRay(ray);

        // If there is a collision, this object is occluded, apply only ambient term
        if(collision.hasCollision() == false)
        {
            // For this light model
            finalColor += lightPair.object->getColor() + lightPair.light->getAmbient();
        }
        else
        {
            // No collisions, so take the full lighting effect
            finalColor = ComputeColor(lightPair.light, lightPair.object);
        }
        */
        return Colorf();
    }

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
    Colorf Renderer::traceReflectionRay(const Object* object, const Rayf& ray, const SceneGraph* sceneGraph, const std::vector<Light*>& lights, int recursiveIndex)
    {
        // Trace the primary ray, except the return color should be dependent on the specular value
        // of the receiving object's material
        /*
        Colorf finalColor;

        if(recursiveIndex > _maxRecursiveIndex)
        {
            return finalColor;
        }

        finalColor = tracePrimaryRay(ray, sceneGraph, lights);

        // Apply specular value to the returned color
        finalColor *= do specular!

        return finalColor;
        */
        return Colorf();
    }


}   // Namespace
