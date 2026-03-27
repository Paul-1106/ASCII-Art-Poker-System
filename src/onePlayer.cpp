#include <iostream>
#include <string>
#include <vector>
#include <cmath>

#include <mylib/poker.h>

void Poker::onePlayer(size_t& credit, size_t creditRequirement) {

    char quit = 'q';
    int turn = 0;

    while (credit >= 100) {

        if (credit < 100) {
            std::cout << "You do not have enough credits to to play poker. Enter '5' on the menu page to receive free credits.\n";
        }
    }


}