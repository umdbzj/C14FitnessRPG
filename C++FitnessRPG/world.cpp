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

Loc::Loc() {
    terrain = 0;
    resouce = 0;
    
    // min and max of random number generator to match MapTypes enum
    const int LOW = 1;
    const int HIGH = 8;
    
    // prep for random numbers
    time_t seconds;
    time(&seconds);
    srand((unsigned int) seconds);
    
    terrain = (rand() % (HIGH - LOW + 1) + LOW);
}

void InitWorld(int world_size, std::vector<int>& World) {
    int sq_map_size = world_size * world_size;

    if (World.size() == 0) {
    for (int i = 0; i < sq_map_size; i++) {
        World.push_back(0);  // temp for testing
        }
    }
    else {
        cout << "Can't create another world! But you knew that already, didn't you?" << endl;
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
            if ((current_position % world_size) == 0) {    // make row
                cout << endl;
            }
            
            current_position += 1;
            
        }
        
        cout << endl;
    }

}

void UpdateWorld(std::vector<int>& World) {
    cout << "I'm ready to update!" << endl;
    
    // Assuming mutation probability is 0.001 (the default in Chapter 3 of dissertation)
    const int LOW = 1;
    const int HIGH = 1000;
    const int VAL_LOW = 1;
    const int VAL_HIGH = 9;
    int test_num = 0;
    int location = 0;
    
    // prep for random numbers
    time_t seconds;
    time(&seconds);
    srand((unsigned int) seconds);
    
    // go through all items in the vector and determine if each has probability to mutate
    // if random number == 1000, then mutate (message and change item to a 9
    for (auto element = World.cbegin(); element != World.cend(); ++ element)
    {
        
        test_num = (rand() % (HIGH - LOW + 1) + LOW);
        if (test_num == 1000) {
            cout << "Mutation at: " << location << endl;
            World[location] = (rand() % (VAL_HIGH - VAL_LOW + 1) + VAL_LOW);
            
        }
        location += 1;
    }

    
}
