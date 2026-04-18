#include <iostream>
#include <string>
#include <vector>
#include <cmath>

#include <mylib/poker.h>

void Poker::onePlayer(size_t& credit, size_t creditRequirement, const std::string& twoH) {

    char quit = 'q';
    int turn = 0;
    size_t creditBet;
    size_t creditReward;
    size_t points = 0;
    std::string card1, card2, card3, card4, card5;
    std::vector<std::string> pokerHand = {card1, card2, card3, card4, card5};
    char swap = ' ';
    const std::vector<std::string>& cardDeck = {twoH, twoD, twoC, twoS, twoQ, threeH, threeD, threeC, threeS, threeQ, fourH, fourD, fourC, fourS, fourQ, fiveH,
    fiveD, fiveC, fiveS, fiveQ, sixH, sixD, sixC, sixS, sixQ, sevenH, sevenD, sevenC, sevenS, sevenQ, eightH, eightD, eightC, eightS, eightQ, nineH, nineD, nineC,
    nineS, nineQ, tenH, tenD, tenC, tenS, tenQ, jackH, jackD, jackC, jackS, jackQ, queenH, queenD, queenC, queenS, queenQ, kingH, kingD, kingC, kingS, kingQ,
    aceH, aceD, aceC, aceS, aceQ};
    
    
    // The reqirement of playing one player mode of poker is to have at least 100 credits in credit balance
    while (credit >= creditRequirement && turn < 2) {

        // 'turn' variable will add up by 1 when user decides to swap some cards, else the variable will add up by 2
        if (credit >= creditRequirement) {
            
            // Your credit will automatically deduct when betting the amount of credits on poker
            std::cout << "Enter your bet: \n";
            std::cin >> creditBet;
            std::cout << twoH << "\n";

            // If user input at least 100 credits
            if (creditBet >= creditRequirement) {

                std::cout << "You have beted " << creditBet << " credits\n\n";
                credit -= creditBet;

                for (size_t i{0}; i < pokerHand.size(); ++i) {

                    std::random_device random;
                    std::mt19937 mEngine(random());

                    std::uniform_int_distribution<std::size_t> dist(0, pokerHand.size() - 1);

                    std::string randomCard = pokerHand[dist(mEngine)];

                    // CONTINUE

                    std::cout << twoD << "\n\n";
                    turn += 1;
                    std::cout << "Swap cards or pass? (s = Swap | p = Pass)\n";
                    std::cin >> swap;

                    if (swap == 's') {

                        std::cout << "Select cards you want to replace.\n";
                        //std::cin 
                        turn += 1;
                    }
                    else if (swap == 'p') {

                        turn += 1;
                    }
                    else {
                        std::cout << "That input is not valid. Please select 's' to swap your deck or 'p' if you are satisfy with your deck.\n";
                        std::cin >> swap;
                    }
                }
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
    std::cout << "You have recieved " << creditReward << "\n";
    std::cout << "Check your credit balance by pressing '3' as a menu option.\n";


}