//
//  characters.hpp
//  C++FitnessRPG
//
//  Created by Barbara Johnson on 8/4/17.
//  Copyright © 2017 Barbara Johnson. All rights reserved.
//

#ifndef characters_hpp
#define characters_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class Character
{
    // generic attributes and functions
public:

    bool isEnemy;
    
    void Move();
    
protected:
    string charName;
    int charLevel;
    int hitPoints;
    string charClass;
    string charRace;
    int charStats [9];
    
};

class Ally: public Character
{
public:
    Ally();
    
};

class Enemy: public Character
{
public:
    Enemy();
};

#endif /* characters_hpp */
