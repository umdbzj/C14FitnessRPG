//
//  world.cpp
//  C++FitnessRPG
//
//  Created by Barbara Johnson on 6/15/17.
//  Copyright © 2017 Barbara Johnson. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "world.hpp"

using namespace std;


enum MapTypes
{
    Grass,
    Rock,
    Incline,
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

void CreateWorld(int world_size) {
    int temp = world_size;
    
    cout << "I am creating a " << temp << " by " << temp << " world" << endl;
    

}

void PrintWorld() {
    cout << "I'm printing a world!" << endl;
}
