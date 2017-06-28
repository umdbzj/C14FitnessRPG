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
    int sq_map_size = world_size * world_size;
    
    // min and max of random number generator to match MapTypes enum
    const int LOW = 1;
    const int HIGH = 8;
    
    cout << "I am initializing a " << world_size << " x " << world_size << " world" << endl;
    
    // prep for random numbers
    time_t seconds;
    time(&seconds);
    srand((unsigned int) seconds);
    
    for (int i = 0; i < sq_map_size; i++) {
        World.push_back(rand() % (HIGH - LOW + 1) + LOW);
    }
    

 
// test printing to see if it worked
//   cout << "Your new world: " << endl;
//    for (auto element = World.cbegin(); element != World.cend(); ++ element)
//   {
//        cout << *element << " ";
//   }
    
    cout << endl;

}

void PrintWorld(int world_size, std::vector<int>& World) {
    int temp = world_size;
    int num_cells = world_size * world_size;
    
    if (temp == 0) {
        cout << "You need to create the world first." << endl;
    }
    else {
        cout << "I'm printing the " << temp << " x " << temp << " sized map!" << endl;
        cout << "That's " << num_cells << " big!" << endl;
        int current_position = 1;
        for (auto element = World.cbegin(); element != World.cend(); ++ element)
        {
            cout << *element << " ";
            if ((current_position % world_size) == 0) {
                cout << endl;
            }
            
            current_position += 1;
            
        }
        
        cout << endl;
    }

}
