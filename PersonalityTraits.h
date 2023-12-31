//
// Created by Saima Yunus on 12/30/23.
//

#ifndef QUESTSCRIBE_PERSONALITYTRAITS_H
#define QUESTSCRIBE_PERSONALITYTRAITS_H


class PersonalityTraits {
    protected:
        int openness_score; // 0-10 score that reflects character's degree of openness to new ideas/experiences
        int conscientiousness_score; // 0-10 score that reflects character's degree of conscientiousness (are they responsible/hardworking/goal-oriented/etc?)
        int extroversion_score; // 0-10 score that reflects character's degree of extroversion (low score == introvert, high score == extrovert)
        int agreeableness_score; // 0-10 score that reflects character's degree of agreeableness (are they polite/empathetic/kind/etc?)
        int neuroticism_score; // 0-10 score that reflects character's degree of neuroticism (depression/anxiety/self-doubt and so on)
    public:
        PersonalityTraits(); // default constructor
        PersonalityTraits(int O, int C, int E, int A, int N); // parametrized constructor: O = openness parameter,
        // C = conscientiousness parameter, E = extroversion parameter, A = agreeableness parameter, N = neuroticism parameter
        /* setter/mutator functions */
        void set_openness_score(int new_openness_score); // set openness score to 'new_openness_score' parameter
        void set_conscientiousness_score(int new_conscientiousness_score); // set conscientiousness score to 'new_conscientiousness_score' parameter
        void set_extroversion_score(int new_extroversion_score); // set extroversion score to 'new_extroversion_score' parameter
        void set_agreeableness_score(int new_agreeableness_score); // set agreeableness score to 'new_agreeableness_score' parameter
        void set_neuroticism_score(int new_neuroticism_score); // set neuroticism score to 'new_neuroticism_score' parameter
        /* setter/mutator functions that increment/decrement the object variables by 1 point only */
        void increment_openness_score(); // increment openness score by 1
        void decrement_openness_score(); // decrement openness score by 1
        void increment_conscientiousness_score(); // increment conscientiousness score by 1
        void decrement_conscientiousness_score(); // decrement conscientiousness score by 1
        void increment_extroversion_score(); // increment extroversion score by 1
        void decrement_extroversion_score(); // decrement extroversion score by 1
        void increment_agreeableness_score(); // increment agreeableness score by 1
        void decrement_agreeableness_score(); // decrement agreeableness score by 1
        void increment_neuroticism_score(); // increment neuroticism score by 1
        void decrement_neuroticism_score(); // decrement neuroticism score by 1
        /* getter/accessor functions */
        int get_openness_score(); // returns current openness score
        int get_conscientiousness_score(); // returns current conscientiousness score
        int get_extroversion_score(); // returns current extroversion score
        int get_agreeableness_score(); // returns current agreeableness score
        int get_neuroticism_score(); // returns current neuroticism score
};


#endif //QUESTSCRIBE_PERSONALITYTRAITS_H
