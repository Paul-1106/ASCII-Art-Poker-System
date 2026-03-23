#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <random>

#include <mylib/poker.h>

void Poker::freeCredits() {
    
    size_t addCredit = 0;
    std::vector<size_t> randomNumber = {5, 10, 20, 30, 40, 50, 100};
    size_t randomNumberOut = 0;

    std::random_device rd;
    std::mt19937 mEngine(rd());

    std::uniform_int_distribution<size_t> distr(0, randomNumber.size() - 1);

    size_t random_index = distr(mEngine);
    size_t random_element = randomNumber[random_index];

    credit += random_element;

    std::cout << "You have recieved " << random_element << "credits for free!\n";

}