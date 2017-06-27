//
//  world.cpp
//  C++FitnessRPG
//
//  Created by Barbara Johnson on 6/15/17.
//  Copyright © 2017 Barbara Johnson. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>
#include "world.hpp"

using namespace std;


enum MapTypes
{
    Grass = 1,
    Rock,
    Incline,
    Wall,
    Water,
    Road,
    Building,
    Shrine
};

enum Directions
{
    North,
    East,
    South,
    West
};

void InitWorld(int world_size, std::vector<int>& World) {
    int temp = world_size;
    
    // min and max of random number generator to match MapTypes enum
    const int LOW = 1;
    const int HIGH = 8;
    
    cout << "I am initializing a " << world_size << " world" << endl;
    
    for (int i = 0; i < world_size; i++) {
        World.push_back(0);
    }
    
    // prep for random numbers
     time_t seconds;
     time(&seconds);
     srand((unsigned int) seconds);
 
    // temp to see if it worked
    cout << "Your new world: " << endl;
    for (auto element = World.cbegin(); element != World.cend(); ++ element)
    {
        cout << *element << " ";
    }
    
    cout << endl;

}

void PrintWorld(int world_size, std::vector<int>& World) {
    int temp = world_size;
    
    if (temp == 0) {
        cout << "You need to create the world first." << endl;
    }
    else {
        cout << "I'm printing the " << temp << " sized map!" << endl;
        for (auto element = World.cbegin(); element != World.cend(); ++ element)
        {
            cout << *element << " ";
        }
        
        cout << endl;
    }

}
