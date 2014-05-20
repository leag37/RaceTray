// Filename:  Main.cpp

#include "Scene/RTScene.h"
#include <iostream>

using namespace RaceTray;

int main()
{
    // Create the scene
    Scene *scene = new Scene();

    if(scene->initialize() == true)
    {
        // Run the scene
        if(scene->play() == true)
        {
            std::cout << "The scene completed successfully." << std::endl;
        }
        else
        {
            std::cout << "The scene did not complete successfully." << std::endl;
        }
    }
    else
    {
        std::cout << "The scene was not initialized successfully" << std::endl;
    }

    // Destroy the scene
    scene->destroy();
    delete scene;

    std::cin.ignore(1);

    return 0;
}
