//
//  characters.cpp
//  C++FitnessRPG
//
//  Created by Barbara Johnson on 8/4/17.
//  Copyright © 2017 Barbara Johnson. All rights reserved.
//

#include "characters.hpp"

Ally::Ally() {
    int HIGH = 15;
    int LOW = 1;
    
    isEnemy = false;
    charName = "Generic Ally";
    charLevel = 1;
    hitPoints = 50;
    charClass = "Paladin";
    charRace = "Angel";
    
    for (int i = 0; i < 7; i++) {
        charStats[i] = (rand() % (HIGH - LOW + 1) + LOW);
        
    }
    charStats[7] = 50;
    charStats[8] = 0;
    
}

Enemy::Enemy() {
    int HIGH = 15;
    int LOW = 1;
    
    isEnemy = true;
    charName = "Generic Enemy";
    charLevel = 1;
    hitPoints = 50;
    charClass = "Thief";
    charRace = "Demon";
    
    for (int i = 0; i < 7; i++) {
        charStats[i] = (rand() % (HIGH - LOW + 1) + LOW);
        
    }
    charStats[7] = 50;
    charStats[8] = 0;
    
}

void Character::Move() {
    if (isEnemy) {
        cout << "Lumbers toward the player." << endl;
    }
    else {
        cout << "Flys to the player's aid." << endl;
    }
}
