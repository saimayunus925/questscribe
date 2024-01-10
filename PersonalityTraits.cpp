
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

/* SETTER/MUTATOR FUNCTIONS FOR EACH BIG 5 TRAIT */

void PersonalityTraits::set_openness_score(int new_openness_score) {
    openness_score = new_openness_score; // set openness score to 'new_openness_score' parameter
}

void PersonalityTraits::set_conscientiousness_score(int new_conscientiousness_score) {
    conscientiousness_score = new_conscientiousness_score; // set conscientiousness score to 'new_conscientiousness_score' parameter
}

void PersonalityTraits::set_extroversion_score(int new_extroversion_score) {
    extroversion_score = new_extroversion_score; // set extroversion score to 'new_extroversion_score' parameter
}

void PersonalityTraits::set_agreeableness_score(int new_agreeableness_score) {
    agreeableness_score = new_agreeableness_score; // set agreeableness score to 'new_agreeableness_score' parameter
}

void PersonalityTraits::set_neuroticism_score(int new_neuroticism_score) {
    neuroticism_score = new_neuroticism_score; // set neuroticism score to 'new_neuroticism_score' parameter
}

/* FUNCTIONS TO INCREMENT/DECREMENT EACH BIG 5 TRAIT SCORE BY 1 */

void PersonalityTraits::increment_openness_score() {
    openness_score++; // increment/increase openness score by 1
}

void PersonalityTraits::increment_conscientiousness_score() {
    conscientiousness_score++; // increment/increase conscientiousness score by 1
}

void PersonalityTraits::increment_extroversion_score() {
    extroversion_score++; // increment/increase extroversion score by 1
}

void PersonalityTraits::increment_agreeableness_score() {
    agreeableness_score++; // increment/increase agreeableness score by 1
}

void PersonalityTraits::increment_neuroticism_score() {
    neuroticism_score++; // increment/increase neuroticism score by 1
}

void PersonalityTraits::decrement_openness_score() {
    openness_score--; // decrement/decrease openness score by 1
}

void PersonalityTraits::decrement_conscientiousness_score() {
    conscientiousness_score--; // decrement/decrease conscientiousness score by 1
}

void PersonalityTraits::decrement_extroversion_score() {
    extroversion_score--; // decrement/decrease extroversion score by 1
}

void PersonalityTraits::decrement_agreeableness_score() {
    agreeableness_score--; // decrement/decrease agreeableness score by 1
}

void PersonalityTraits::decrement_neuroticism_score() {
    neuroticism_score--; // decrement/decrease neuroticism score by 1
}