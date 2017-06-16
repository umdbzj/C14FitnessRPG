//
//  main.cpp
//  C++FitnessRPG
//
//  Created by Barbara Johnson on 6/7/17.
//  Copyright © 2017 Barbara Johnson. All rights reserved.
//

#include <iostream>
#include "world.hpp"

using namespace std;


// Function practice
int OpponentInfo()
{
    
    int stamina = 15;
    
    cout << "You will be chased across the map by Self Doubt," << endl;
    cout << "which is a vampire of incredible persistence and tenancity." << endl;
    cout << "Self Doubt has stamina of: " << stamina << endl;
    
    
    return stamina;
}


int main(int argc, const char * argv[]) {
    
        
    enum charAttributes
    {
        strength,
        stamina,
        charisma,
        intelligence,
        wisdom,
        dexterity,
        consitution,
        health,
        experience
    };
    
    int playerStats [9] = {0};
    int NPCStats [9] = {0};
    int world_size = 1;
    
    string PlayerName;
    
    cout << "How big do you want the world to be? (One int only!) " << endl;
    cin >> world_size;
    
    CreateWorld(world_size);
    
    PrintWorld();
    
    cout << "What is your name? ";
    cin >> PlayerName;
    
    cout << "Enter a digit between 1 and 15: ";
    cin >> playerStats[stamina];
    
    NPCStats[stamina] = OpponentInfo();
    
    if (playerStats[stamina] < NPCStats[stamina])
    {
        cout << "Good luck, " << PlayerName << ".  You'll need it!!" << endl;
    }
    else if (playerStats[stamina] == NPCStats[stamina]){
        cout << "Good luck." << endl;
    }
    else {
        cout << "Oh, " << PlayerName << " you're a rouge?  That vamp doesn't stand a chance!" << endl;
    }
    
    
        return 0;
    
}
