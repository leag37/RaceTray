// Filename: RTSimpleSceneGraph.cpp
// Author: Gael Huber
// Description: Encapsulates simple scene graph, which uses std::vector and naive searches to query the scene

#include "Geometry/RTObject.h"
#include "Scene/RTSimpleSceneGraph.h"

namespace RaceTray
{
    /**
    * Constructor
    */
    SimpleSceneGraph::SimpleSceneGraph()
    {

    }

    /**
    * Destructor
    */
    SimpleSceneGraph::~SimpleSceneGraph()
    {

    }

    /**
    * Initialize the scene graph
    * @return
    *   bool Returns true if successful
    */
    bool SimpleSceneGraph::initialize()
    {
        return true;
    }

    /**
    * Add an object to the scene graph
    * @param
    *   Object* The object being added
    */
    void SimpleSceneGraph::add(Object* object)
    {
        _sceneObjects.push_back(object);
    }

}   // Namespace
