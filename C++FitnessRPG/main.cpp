//
//  main.cpp
//  C++FitnessRPG
//
//  Created by Barbara Johnson on 6/7/17.
//  Copyright © 2017 Barbara Johnson. All rights reserved.
//

#include <iostream>

// Function practice
int OpponentInfo()
{
    
    int stamina = 15;
    
    std::cout << "You will be chased across the map by Self Doubt," << std::endl;
    std::cout << "which is a vampire of incredible persistence and tenancity." << std::endl;
    std::cout << "Self Doubt has stamina of: " << stamina << std::endl;
    
    
    return 0;
}

int main(int argc, const char * argv[]) {
    
    enum MapTypes
    {
        Grass,
        Rock,
        Incline,
        Water,
        Road,
        Building
    };
    
    enum Directions
    {
        North,
        East,
        South,
        West
    };
    
    
    int PlayerStamina = 0;
    std::string PlayerName;
    
    std::cout << "What is your name? ";
    std::cin >> PlayerName;
    
    std::cout << "Enter a digit between 1 and 15: ";
    std::cin >> PlayerStamina;
    
    
    
    return OpponentInfo();
}
