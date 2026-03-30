#include <iostream>
#include <string>
#include <vector>
#include <cmath>

#include <mylib/poker.h>

void Poker::onePlayer(size_t& credit, size_t creditRequirement) {

    char quit = 'q';
    int turn = 0;
    size_t creditBet;
    size_t creditReward;
    size_t points = 0;
    
    
    // The reqirement of playing one player mode of poker is to have at least 100 credits in credit balance
    while (credit >= creditRequirement) {

        if (credit >= creditRequirement) {
            
            // Your credit will automatically deduct when betting the amount of credits on poker
            std::cout << "Enter your bet: \n";
            std::cin >> creditBet;

            // If user input at least 100 credits
            if (creditBet >= creditRequirement) {

                std::cout << "You have beted " << creditBet << "credits\n\n";
                credit -= creditBet;

                // [CONTINUE...]
                
            }
            // If user input less than 100 credits
            else {
                std::cout << "You need to bet at least 100 credits to play poker\n";
            }
        }
        // return this condition if the credit balance is less than 100 
        else {
            std::cout << "You do not have enough credits to to play poker. Enter '5' on the menu page to receive free credits.\n";
        }
    }


}