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
    int playerStats [9] = {0};
    
    void sayHello();
    
};


#endif /* player_hpp */
