//
// Created by Saima Yunus on 12/30/23.
//

#ifndef QUESTSCRIBE_ABILITY_H
#define QUESTSCRIBE_ABILITY_H

#include <iostream>
#include <string>
using std::string;

class Ability {
    protected:
        string name; // The name of the ability
        string description; // A brief description of what the ability does
        string type; // The type of ability (e.g., offensive, defensive, utility)
        int cooldown; // The time it takes before the ability can be used again
        int mana_cost; // If applicable, the amount of mana or energy required to use the ability
        int range; // The effective range of the ability
        int damage_or_healing; // The amount of damage dealt or healing provided
    public:
        // TODO - make Ability class methods
};

#endif //QUESTSCRIBE_ABILITY_H
