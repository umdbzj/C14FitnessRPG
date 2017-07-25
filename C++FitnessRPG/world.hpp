//
//  world.hpp
//  C++FitnessRPG
//
//  Created by Barbara Johnson on 6/15/17.
//  Copyright © 2017 Barbara Johnson. All rights reserved.
//

#ifndef world_hpp
#define world_hpp

class Loc
{
    int terrain;
    int resouce;
    
public:
    Loc();
};

void InitWorld(int world_size, std::vector<int>& World);

void PrintWorld(int world_size, std::vector<int>& World);

void UpdateWorld(std::vector<int>& World);

#endif /* world_hpp */
