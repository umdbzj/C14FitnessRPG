//
//  player.cpp
//  C++FitnessRPG
//
//  Created by Barbara Johnson on 6/30/17.
//  Copyright © 2017 Barbara Johnson. All rights reserved.
//

#include <iostream>
#include <vector>
#include "player.hpp"

using namespace std;

Player::Player() {
    int HIGH = 15;
    int LOW = 1;
    
    Player::resources = 5;
    
    // prep for random numbers
    time_t seconds;
    time(&seconds);
    srand((unsigned int) seconds);
    
    for (int i = 0; i < 7; i++) {
       playerStats[i] = (rand() % (HIGH - LOW + 1) + LOW);

    }
    playerStats[7] = 50;
    playerStats[8] = 0;
    
}

void Player::sayHello() {
    
    /*
     strength,
     stamina,
     charisma,
     intelligence,
     wisdom,
     dexterity,
     consitution,
     health,
     experience
     
     */
    
    cout << endl;
    cout << "I am " << Player::playerName << endl;
    cout << "I have " << Player::resources << " resources." << endl;
    cout << "I have strength " << Player::playerStats[0] << ", ";
    cout << "stamina " << Player::playerStats[1] << ", ";
    cout << "charisma " << Player::playerStats[2] << ", ";
    cout << "intelligence " << Player::playerStats[3] << ", ";
    cout << "wisdom " << Player::playerStats[4] << ", ";
    cout << "dexterity " << Player::playerStats[5] << ", ";
    cout << "constitution " << Player::playerStats[6] << ", ";
    cout << "health " << Player::playerStats[7] << ", ";
    cout << "and experience " << Player::playerStats[8] << endl;
    
    
    cout << endl;
    
}

int Player::getResource() {
    return Player::resources;
    
}

int Player::getStat(int stat) {
    if (stat >= 0 && stat < 9) {
        return playerStats[stat];
    }
    else {
        return 0;
    }
};


