//
// Created by Saima Yunus on 12/30/23.
//

#ifndef QUESTSCRIBE_ABILITY_H
#define QUESTSCRIBE_ABILITY_H

#include <iostream>
#include <string>
using std::string;

enum AbilityType { offensive, defensive, utility };

class Ability {
    protected:
        string ability_name; // The name of the ability
        string ability_description; // A brief description of what the ability does
        enum AbilityType ability_type; // The type of ability (e.g., offensive, defensive, utility)
        int ability_cooldown; // The time it takes before the ability can be used again
        int ability_mana_cost; // If applicable, the amount of mana or energy required to use the ability
        int ability_range; // The effective range of the ability
        int ability_damage_or_healing; // The amount of damage dealt or healing provided
    public:
        // TODO - make Ability class methods
};

#endif //QUESTSCRIBE_ABILITY_H
