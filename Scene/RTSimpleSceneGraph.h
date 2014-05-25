// Filename: RTSimpleSceneGraph.h
// Author: Gael Huber
// Description: Encapsulates simple scene graph, which uses std::vector and naive searches to query the scene
#ifndef __RTSIMPLESCENEGRAPH_H__
#define __RTSIMPLESCENEGRAPH_H__

#include <vector>

#include "Scene/RTSceneGraph.h"

namespace RaceTray
{
    /** \addtogroup Scene
    *   @{
    */

    /**
    * The scene graph contains all physical scene information, including objects, particles, etc.
    * A simple scene graph uses std::vectors and naive search methods for  querying the scene.
    */
    class SimpleSceneGraph : public SceneGraph
    {
    public:
        /**
        * Constructor
        */
        SimpleSceneGraph();

        /**
        * Destructor
        */
        ~SimpleSceneGraph();

        /**
        * Initialize the scene graph
        * @return
        *   bool Returns true if successful
        */
        bool initialize();

        /**
        * Add an object to the scene graph
        * @param
        *   Object* The object being added
        */
        void add(Object* object);

    private:
        /**
        * Scene objects
        */
        std::vector<Object*> _sceneObjects;
    };

    /** @} */

}   // Namespace

#endif // __RTSIMPLESCENEGRAPH_H__

