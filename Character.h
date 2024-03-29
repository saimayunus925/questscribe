//
// Created by Saima Yunus on 12/30/23.
//

#ifndef QUESTSCRIBE_CHARACTER_H
#define QUESTSCRIBE_CHARACTER_H

#include <iostream>
#include <string>
#include <vector>
#include "PersonalityTraits.h"
#include "Ability.h"
#include "GameItem.h"
using std::string, std::vector;

class Character {
    protected:
        string name; // The name of the character
        PersonalityTraits character_personality; // The personality traits of the character, represented by a *PersonalityTraits* object
        int level; // The level or experience of the character
        int health_points; // HP (health points) -> Represents the character's health or life
        int mana_points; // MP (mana points) -> Represents the character's magical or special abilities
        int attack_damage; // The amount of damage the character deals
        int defense; // The ability to resist or reduce incoming damage
        vector<Ability> character_abilities; // A list of the character's powers/abilities
        vector<GameItem> inventory; // The character's inventory (list/collection of their items)
        // TODO: make Ability and GameItem and CombatMove classes, so each character can have their own sets of abilities, inventory, and moves
    public:
        // TODO - make Character methods
        void create_personality(int openness, int conscientiousness, int extroversion, int agreeableness, int neuroticism); // creates character's Big 5 personality based on passed-in parameters, and stores the info in character's 'Personality' attribute
        void change_trait(char trait, int new_score); // changes one of the character's Big 5 scores (determined by 'trait' variable, e.g. if trait == 'E', we'll change our character's extroversion score) to the given 'new_score' parameter
};


#endif //QUESTSCRIBE_CHARACTER_H
