// Filename: RTSceneGraph.h
// Author: Gael Huber
// Description: Base class for encapsulating scene graph functionality
#ifndef __RTSCENEGRAPH_H__
#define __RTSCENEGRAPH_H__

namespace RaceTray
{
    /** \addtogroup Scene
    *   @{
    */

    // Forward declarations
    class Object;

    /**
    * The scene graph contains all physical scene information, including objects, particles, etc.
    */
    class SceneGraph
    {
    public:
        /**
        * Default constructor
        */
        SceneGraph();

        /**
        * Destructor
        */
        ~SceneGraph();

        /**
        * Initialize the scene graph
        * @return
        *   bool Returns true if successful
        */
        virtual bool initialize() = 0;

        /**
        * Add an object to the scene graph
        * @param
        *   Object* The object being added
        */
        virtual void add(Object* object) = 0;
    };

    /** @} */

}   // Namespace

#endif // __RTSCENEGRAPH_H__
