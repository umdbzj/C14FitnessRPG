//
//  player.hpp
//  C++FitnessRPG
//
//  Created by Barbara Johnson on 6/30/17.
//  Copyright © 2017 Barbara Johnson. All rights reserved.
//

#ifndef player_hpp
#define player_hpp

#include <stdio.h>
using namespace std;


class Player

{
    // attributes
public:
    string playerName = "Generic";
    
    Player();
    
    void sayHello();
    
    int getResource();
    
    int getStat(int stat);
    
private:
    int playerStats [9];
    int resources;
    
};


#endif /* player_hpp */
