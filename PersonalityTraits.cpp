
#include "PersonalityTraits.h"
#include <iostream>
#include <string>
using namespace std;

PersonalityTraits::PersonalityTraits() {
    // default constructor: makes a 'blank slate' personality by setting all the Big 5 traits to 0
    openness_score = 0;
    conscientiousness_score = 0;
    extroversion_score = 0;
    agreeableness_score = 0;
    neuroticism_score = 0;
}

PersonalityTraits::PersonalityTraits(int O, int C, int E, int A, int N) {
    // parametrized constructor: creates a new personality by initializing each Big 5 trait to its corresponding parameter
    // e.g. O -> openness, C -> conscientiousness, E -> extroversion, etc.
    openness_score = O;
    conscientiousness_score = C;
    extroversion_score = E;
    agreeableness_score = A;
    neuroticism_score = N;
}