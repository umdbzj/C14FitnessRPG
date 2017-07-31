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
    int resource;
    
public:

    Loc();
    
    void setTerrain(int terrain);
    
    int getTerrain();
};

void InitWorld(int world_size, std::vector<Loc>& World);

void PrintWorld(int world_size, std::vector<Loc>& World);

void UpdateWorld(std::vector<Loc>& World);

#endif /* world_hpp */
