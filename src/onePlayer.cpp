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
    std::string card1, card2, card3, card4, card5;
    char cardChange1, cardChange2, cardChange3, cardChange4, cardChange5;
    std::vector<std::string> pokerHand = {card1, card2, card3, card4, card5};
    char swap = ' ';

    // Adding elements to have access from the 'cards.cpp' file
    std::string twoHeart, twoDiamond, twoClub, twoSpade, twoQuatrefoil, threeHeart, threeDiamond, threeClub, threeSpade, threeQuatrefoil,
                fourHeart, fourDiamond, fourClub, fourSpade, fourQuatrefoil, fiveHeart, fiveDiamond, fiveClub, fiveSpade, fiveQuatrefoil,
                sixHeart, sixDiamond, sixClub, sixSpade, sixQuatrefoil, sevenHeart, sevenDiamond, sevenClub, sevenSpade, sevenQuatrefoil,
                eightHeart, eightDiamond, eightClub, eightSpade, eightQuatrefoil, nineHeart, nineDiamond, nineClub, nineSpade, nineQuatrefoil,
                tenHeart, tenDiamond, tenClub, tenSpade, tenQuatrefoil, jackHeart, jackDiamond, jackClub, jackSpade, jackQuatrefoil,
                queenHeart, queenDiamond, queenClub, queenSpade, queenQuatrefoil, kingHeart, kingDiamond, kingClub, kingSpade, kingQuatrefoil,
                aceHeart, aceDiamond, aceClub, aceSpade, aceQuatrefoil = " ";

    // To access the variables from string variables above in order
    cards(twoHeart, twoDiamond, twoClub, twoSpade, twoQuatrefoil, threeHeart, threeDiamond, threeClub, threeSpade, threeQuatrefoil,
                fourHeart, fourDiamond, fourClub, fourSpade, fourQuatrefoil, fiveHeart, fiveDiamond, fiveClub, fiveSpade, fiveQuatrefoil,
                sixHeart, sixDiamond, sixClub, sixSpade, sixQuatrefoil, sevenHeart, sevenDiamond, sevenClub, sevenSpade, sevenQuatrefoil,
                eightHeart, eightDiamond, eightClub, eightSpade, eightQuatrefoil, nineHeart, nineDiamond, nineClub, nineSpade, nineQuatrefoil,
                tenHeart, tenDiamond, tenClub, tenSpade, tenQuatrefoil, jackHeart, jackDiamond, jackClub, jackSpade, jackQuatrefoil,
                queenHeart, queenDiamond, queenClub, queenSpade, queenQuatrefoil, kingHeart, kingDiamond, kingClub, kingSpade, kingQuatrefoil,
                aceHeart, aceDiamond, aceClub, aceSpade, aceQuatrefoil);

    // A random selector will pick an element from a 'pokerHand' vector
    std::vector<std::string> pokerCards = {twoHeart, twoDiamond, twoClub, twoSpade, twoQuatrefoil, threeHeart, threeDiamond, threeClub, threeSpade,
            threeQuatrefoil, fourHeart, fourDiamond, fourClub, fourSpade, fourQuatrefoil, fiveHeart, fiveDiamond, fiveClub, fiveSpade, fiveQuatrefoil,
            sixHeart, sixDiamond, sixClub, sixSpade, sixQuatrefoil, sevenHeart, sevenDiamond, sevenClub, sevenSpade, sevenQuatrefoil,
            eightHeart, eightDiamond, eightClub, eightSpade, eightQuatrefoil, nineHeart, nineDiamond, nineClub, nineSpade, nineQuatrefoil,
            tenHeart, tenDiamond, tenClub, tenSpade, tenQuatrefoil, jackHeart, jackDiamond, jackClub, jackSpade, jackQuatrefoil,
            queenHeart, queenDiamond, queenClub, queenSpade, queenQuatrefoil, kingHeart, kingDiamond, kingClub, kingSpade, kingQuatrefoil,
            aceHeart, aceDiamond, aceClub, aceSpade, aceQuatrefoil};

    // The reqirement of playing one player mode of poker is to have at least 100 credits in credit balance
    while (credit >= creditRequirement && turn < 2) {

        // 'turn' variable will add up by 1 when user decides to swap some cards, else the variable will add up by 2
        if (credit >= creditRequirement) {
            
            // Your credit will automatically deduct when betting the amount of credits on poker
            std::cout << "Enter your bet: \n";
            std::cin >> creditBet;

            // If user input at least 100 credits
            if (creditBet >= creditRequirement) {

                std::cout << "You have beted " << creditBet << " credits\n\n";
                credit -= creditBet;

                for (size_t i{0}; i < pokerCards.size(); ++i) {

                    // Random card selector (1/5)
                    std::random_device random;
                    std::mt19937 mEngine(random());
                    std::uniform_int_distribution<std::size_t> dist(0, pokerCards.size() - 1);
                    std::string randomCard = pokerCards[dist(mEngine)];

                    //Random card selector (2/5)
                    std::random_device random2;
                    std::mt19937 mEngine2(random2());
                    std::uniform_int_distribution<std::size_t> dist2(0, pokerCards.size() - 1);
                    std::string randomCard2 = pokerCards[dist2(mEngine2)];

                    //Random card selector (3/5)
                    std::random_device random3;
                    std::mt19937 mEngine3(random3());
                    std::uniform_int_distribution<std::size_t> dist3(0, pokerCards.size() - 1);
                    std::string randomCard3 = pokerCards[dist3(mEngine3)];

                    //Random card selector (4/5)
                    std::random_device random4;
                    std::mt19937 mEngine4(random4());
                    std::uniform_int_distribution<std::size_t> dist4(0, pokerCards.size() - 1);
                    std::string randomCard4 = pokerCards[dist4(mEngine4)];

                    // Random card selector (5/5)
                    std::random_device random5;
                    std::mt19937 mEngine5(random5());
                    std::uniform_int_distribution<std::size_t> dist5(0, pokerCards.size() - 1);
                    std::string randomCard5 = pokerCards[dist5(mEngine5)];

                    std::cout << randomCard << randomCard2 << randomCard3 << randomCard4 << randomCard5 << "\n\n";
                    turn += 1;
                    std::cout << "Swap cards or pass? (s = Swap | p = Pass)\n";
                    std::cin >> swap;

                    if (swap == 's') {

                        std::cout << "example: (card1, card2, card3, card4, card5)\n";
                        std::cout << "Change 'card1'? (y/n)\n";
                        std::cin >> cardChange1; 
                        turn += 1;

                        if (cardChange1 == 'y') {
                            
                        }
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