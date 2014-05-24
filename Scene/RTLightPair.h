// Filename: RTLightPair.h
// Author: Gael Huber
// Description: Pairs a light source with the corresponding collision data
#ifndef __RTLIGHTPAIR_H__
#define __RTLIGHTPAIR_H__

#include "Scene/RTLight.h"
#include "Scene/RTSceneCollisionData.h"

namespace RaceTray
{
    /** \addtogroup Scene
    *   @{
    */

    /**
    * A light pair represents a simple structure to pair a source light with the corresponding
    * target collision data
    */
    struct LightPair
    {
        /**
        * The source light
        */
        const Light* light;

        /**
        * The collision data
        */
        const SceneCollisionData& collisionData;
    };

    /** @} */

}   // Namespace

#endif // __RTLIGHTPAIR_H__
