//
// Created by Saima Yunus on 1/10/24.
//

#include "Character.h"
#include "PersonalityTraits.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void Character::create_personality(int openness, int conscientiousness, int extroversion, int agreeableness,
                                   int neuroticism) {
    // create character's personality by setting each of their personality traits (Big 5) to the corresponding passed-in Big 5 parameter
    // e.g. the character's openness_score is the 'openness' parameter value, etc
    this->character_personality.set_openness_score(openness);
    this->character_personality.set_conscientiousness_score(conscientiousness);
    this->character_personality.set_extroversion_score(extroversion);
    this->character_personality.set_agreeableness_score(agreeableness);
    this->character_personality.set_neuroticism_score(neuroticism);
}

void Character::change_trait(char trait, int new_score) {
    // 'trait': char to determine which trait we'll change ('O': openness, 'C': conscientiousness, 'E': extroversion, etc)
    // 'new_score': the new score we'll set the selected Big 5 trait to
    if (toupper(trait) == 'O')
        this->character_personality.set_openness_score(new_score); // trait == 'O': set character's openness score to new score
    else if (toupper(trait) == 'C')
        this->character_personality.set_conscientiousness_score(new_score); // trait == 'C': set character's conscientiousness score to new score
    else if (toupper(trait) == 'E')
        this->character_personality.set_extroversion_score(new_score); // trait == 'E': set character's extroversion score to new score
    else if (toupper(trait) == 'A')
        this->character_personality.set_agreeableness_score(new_score); // trait == 'A': set character's agreeableness score to new score
    else if (toupper(trait) == 'N')
        this->character_personality.set_neuroticism_score(new_score); // trait == 'N': set character's neuroticism score to new score
}