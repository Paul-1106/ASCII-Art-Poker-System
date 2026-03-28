#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <random>

#include <mylib/poker.h>

void Poker::freeCredits(size_t& credit) {
    
    // vector that a random selector value will select one of the elements
    std::vector<size_t> randomNumber = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 10, 10, 10, 10, 20, 20, 100};

    // A random number engine seed from hardware
    std::random_device rd;

    // A Mersenne Twister engine from seed
    std::mt19937 mEngine(rd());

    // A uniform distribution from first index to the last index in vector
    std::uniform_int_distribution<size_t> distr(0, randomNumber.size() - 1);

    // Calling a distribution from the Mersenne Twitter engine to 'random_index' variable
    size_t random_index = distr(mEngine);

    // Converting from an index number to an element number
    size_t random_element = randomNumber[random_index];

    std::cout << "You have recieved " << random_element << " credits for free!\n";

    // Add one of the element from the vector to credit balance
    credit += random_element;
    
    std::cout << "Your total balance: " << credit << " credits\n";
}