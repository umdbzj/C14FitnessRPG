//
//  main.cpp
//  C++FitnessRPG
//
//  Created by Barbara Johnson on 6/7/17.
//  Copyright © 2017 Barbara Johnson. All rights reserved.
//

#include <iostream>
#include <vector>
#include "world.hpp"

using namespace std;


// Function practice
int OpponentInfo()
{
    const int LOW = 1;
    const int HIGH = 15;
    int stamina = 0;
    
    // prep for random numbers
        time_t seconds;
        time(&seconds);
        srand((unsigned int) seconds);
    
    stamina = rand() % (HIGH - LOW + 1) + LOW;
    cout << "Your opponent has stamina of: " << stamina << endl;
    
    
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
    int world_size = 0;
    int controlChoice = 0;
    string PlayerName;
    
    vector<int> World;
    
    // Overall loop to control game flow
    do {
        cout << "==================================================================" << endl;
        cout << "What do you want to do?  (enter digit corresponding with choice) " << endl;
        cout << "1 - Start new game" << endl;
        cout << "2 - Resume existing game" << endl;
        cout << "3 - Display world" << endl;
        cout << "4 - Take turn" << endl;
        cout << "8 - Save game" << endl;
        cout << "9 - Quit" << endl;
        
        cin >> controlChoice;
        
        switch(controlChoice) {
            case 1:
                cout << "How big do you want the world to be? (One int between 1 and 50) " << endl;
                cin >> world_size;
                InitWorld(world_size, World);
                break;
            case 2:
                cout << "I would load an existing game at this point." << endl;
                break;
            case 3:
                PrintWorld(world_size, World);
                break;
            case 4:
                cout << "I would prompt for your choice of direction and run an update." << endl;
                break;
            case 8:
                cout << "This would save the game state." << endl;
                break;
            case 9:
                cout << "This would end the game loop." << endl;
                break;
            default:
                cout << "Sorry, but your choice is not valid.  Please try again." << endl;
                break;
        }

        
    } while (controlChoice != 9); // end of do ... while
    
    

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
        cout << "Good luck. This will be too close to call." << endl;
    }
    else {
        cout << "Oh, " << PlayerName << ", that vamp doesn't stand a chance!" << endl;
    }
    
    
        return 0;
    
}
