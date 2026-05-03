#include <iostream>
#include <string>
#include <vector>
#include <cmath>

#include <mylib/poker.h>

void Poker::onePlayer(double& credit, size_t creditRequirement) {

    char quit = 'q';
    int turn = 0;
    double creditBet;
    double creditReward;
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

    // Comparing each hand deck to points
    std::pair<std::string, double> highCard = {"High Card", 0.0};
    std::pair<std::string, double> pairCard = {"Pair", 1.0};
    std::pair<std::string, double> twoPairCard = {"Two Pair", 1.5};
    std::pair<std::string, double> threeKindCard = {"Three of a Kind", 2.0};
    std::pair<std::string, double> straightCard = {"Straight", 2.5};
    std::pair<std::string, double> flushCard = {"Flush", 3.5};
    std::pair<std::string, double> fullHouseCard = {"Full House", 4.0};
    std::pair<std::string, double> fourKindCard = {"Four of a Kind", 8.0};
    std::pair<std::string, double> straightFlushCard = {"Straight Flush", 12.5};
    std::pair<std::string, double> royalFlushCard = {"Royal Flush", 20.0};
    std::pair<std::string, double> fiveKindCard = {"Five of a Kind", 40.0}; 

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

                    std::cout << "example: (card1, card2, card3, card4, card5) in lowercase\n";
                    std::cout << "Change 'card1'? (y/n)\n";
                    std::cin >> cardChange1; 
                    turn += 1;

                    if (cardChange1 == 'y') {
                        std::random_device random;
                        std::mt19937 mEngine(random());
                        std::uniform_int_distribution<std::size_t> dist(0, pokerCards.size() - 1);
                        std::string randomCard = pokerCards[dist(mEngine)];
                    }
                    else if (cardChange1 != 'n' && cardChange1 != 'y') {
                        std::cout << "Not a valid option! (y/n)\n";
                        std::cin >> cardChange1;
                    }
                    else {
                        std::cout << "Change 'card2'? (y/n)\n";
                        std::cin >> cardChange2;

                        if (cardChange2 == 'y') {
                            std::random_device random2;
                            std::mt19937 mEngine2(random2());
                            std::uniform_int_distribution<std::size_t> dist2(0, pokerCards.size() - 1);
                            std::string randomCard2 = pokerCards[dist2(mEngine2)];
                        }
                        else if (cardChange2 != 'n' && cardChange2 != 'y') {
                            std::cout << "Not a valid option! (y/n)\n";
                            std::cin >> cardChange2;
                        }
                        else {
                            std::cout << "Change 'card3'? (y/n)\n";
                            std::cin >> cardChange3;

                            if (cardChange3 == 'y') {
                                std::random_device random3;
                                std::mt19937 mEngine3(random3());
                                std::uniform_int_distribution<std::size_t> dist3(0, pokerCards.size() - 1);
                                std::string randomCard3 = pokerCards[dist3(mEngine3)];
                            }
                            else if (cardChange3 != 'n' && cardChange3 != 'y') {
                                std::cout << "Not a valid option! (y/n)\n";
                                std::cin >> cardChange3;
                            }
                            else {
                                std::cout << "Change 'card4'? (y/n)\n";
                                std::cin >> cardChange4;

                                if (cardChange4 == 'y') {
                                    std::random_device random4;
                                    std::mt19937 mEngine4(random4());
                                    std::uniform_int_distribution<std::size_t> dist4(0, pokerCards.size() - 1);
                                    std::string randomCard4 = pokerCards[dist4(mEngine4)];                            
                                }
                                else if (cardChange4 != 'n' && cardChange4 != 'y') {
                                    std::cout << "Not a valid option! (y/n)\n";
                                    std::cin >> cardChange4;
                                }
                                else {
                                    std::cout << "Change 'card5'? (y/n)\n";
                                    std::cin >> cardChange5;

                                    if (cardChange5 == 'y') {
                                        std::random_device random5;
                                        std::mt19937 mEngine5(random5());
                                        std::uniform_int_distribution<std::size_t> dist5(0, pokerCards.size() - 1);
                                        std::string randomCard5 = pokerCards[dist5(mEngine5)];
                                    }
                                    else if (cardChange5 != 'n' && cardChange5 != 'y') {
                                        std::cout << "Not a valid option! (y/n)\n";
                                        std::cin >> cardChange5;
                                    }
                                    else {
                                        break;
                                    }
                                }
                            }
                        }
                    }

                }
                else if (swap == 'p') {

                    turn += 1;
                }
                else {
                    std::cout << "That input is not valid. Please select 's' to swap your deck or 'p' if you are satisfy with your deck.\n";
                    std::cin >> swap;
                }
                break;
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


    // Poker card code if card code is in user's poker hand
    auto h2 = std::find(pokerCards.begin(), pokerCards.end(), twoHeart);
    auto d2 = std::find(pokerCards.begin(), pokerCards.end(), twoDiamond);
    auto c2 = std::find(pokerCards.begin(), pokerCards.end(), twoClub);
    auto s2 = std::find(pokerCards.begin(), pokerCards.end(), twoSpade);
    auto q2 = std::find(pokerCards.begin(), pokerCards.end(), twoQuatrefoil);
    auto h3 = std::find(pokerCards.begin(), pokerCards.end(), threeHeart);
    auto d3 = std::find(pokerCards.begin(), pokerCards.end(), threeDiamond);
    auto c3 = std::find(pokerCards.begin(), pokerCards.end(), threeClub);
    auto s3 = std::find(pokerCards.begin(), pokerCards.end(), threeSpade);
    auto q3 = std::find(pokerCards.begin(), pokerCards.end(), threeQuatrefoil);
    auto h4 = std::find(pokerCards.begin(), pokerCards.end(), fourHeart);
    auto d4 = std::find(pokerCards.begin(), pokerCards.end(), fourDiamond);
    auto c4 = std::find(pokerCards.begin(), pokerCards.end(), fourClub);
    auto s4 = std::find(pokerCards.begin(), pokerCards.end(), fourSpade);
    auto q4 = std::find(pokerCards.begin(), pokerCards.end(), fourQuatrefoil);
    auto h5 = std::find(pokerCards.begin(), pokerCards.end(), fiveHeart);
    auto d5 = std::find(pokerCards.begin(), pokerCards.end(), fiveDiamond);
    auto c5 = std::find(pokerCards.begin(), pokerCards.end(), fiveClub);
    auto s5 = std::find(pokerCards.begin(), pokerCards.end(), fiveSpade);
    auto q5 = std::find(pokerCards.begin(), pokerCards.end(), fiveQuatrefoil);
    auto h6 = std::find(pokerCards.begin(), pokerCards.end(), sixHeart);
    auto d6 = std::find(pokerCards.begin(), pokerCards.end(), sixDiamond);
    auto c6 = std::find(pokerCards.begin(), pokerCards.end(), sixClub);
    auto s6 = std::find(pokerCards.begin(), pokerCards.end(), sixSpade);
    auto q6 = std::find(pokerCards.begin(), pokerCards.end(), sixQuatrefoil);
    auto h7 = std::find(pokerCards.begin(), pokerCards.end(), sevenHeart);
    auto d7 = std::find(pokerCards.begin(), pokerCards.end(), sevenDiamond);
    auto c7 = std::find(pokerCards.begin(), pokerCards.end(), sevenClub);
    auto s7 = std::find(pokerCards.begin(), pokerCards.end(), sevenSpade);
    auto q7 = std::find(pokerCards.begin(), pokerCards.end(), sevenQuatrefoil);
    auto h8 = std::find(pokerCards.begin(), pokerCards.end(), eightHeart);
    auto d8 = std::find(pokerCards.begin(), pokerCards.end(), eightDiamond);
    auto c8 = std::find(pokerCards.begin(), pokerCards.end(), eightClub);
    auto s8 = std::find(pokerCards.begin(), pokerCards.end(), eightSpade);
    auto q8 = std::find(pokerCards.begin(), pokerCards.end(), eightQuatrefoil);
    auto h9 = std::find(pokerCards.begin(), pokerCards.end(), nineHeart);
    auto d9 = std::find(pokerCards.begin(), pokerCards.end(), nineDiamond);
    auto c9 = std::find(pokerCards.begin(), pokerCards.end(), nineClub);
    auto s9 = std::find(pokerCards.begin(), pokerCards.end(), nineSpade);
    auto q9 = std::find(pokerCards.begin(), pokerCards.end(), nineQuatrefoil);
    auto h10 = std::find(pokerCards.begin(), pokerCards.end(), tenHeart);
    auto d10 = std::find(pokerCards.begin(), pokerCards.end(), tenDiamond);
    auto c10 = std::find(pokerCards.begin(), pokerCards.end(), tenClub);
    auto s10 = std::find(pokerCards.begin(), pokerCards.end(), tenSpade);
    auto q10 = std::find(pokerCards.begin(), pokerCards.end(), tenQuatrefoil);
    auto hJack = std::find(pokerCards.begin(), pokerCards.end(), jackHeart);
    auto dJack = std::find(pokerCards.begin(), pokerCards.end(), jackDiamond);
    auto cJack = std::find(pokerCards.begin(), pokerCards.end(), jackClub);
    auto sJack = std::find(pokerCards.begin(), pokerCards.end(), jackSpade);
    auto qJack = std::find(pokerCards.begin(), pokerCards.end(), jackQuatrefoil);
    auto hQueen = std::find(pokerCards.begin(), pokerCards.end(), queenHeart);
    auto dQueen = std::find(pokerCards.begin(), pokerCards.end(), queenDiamond);
    auto cQueen = std::find(pokerCards.begin(), pokerCards.end(), queenClub);
    auto sQueen = std::find(pokerCards.begin(), pokerCards.end(), queenSpade);
    auto qQueen = std::find(pokerCards.begin(), pokerCards.end(), queenQuatrefoil);
    auto hKing = std::find(pokerCards.begin(), pokerCards.end(), kingHeart);
    auto dKing = std::find(pokerCards.begin(), pokerCards.end(), kingDiamond);
    auto cKing = std::find(pokerCards.begin(), pokerCards.end(), kingClub);
    auto sKing = std::find(pokerCards.begin(), pokerCards.end(), kingSpade);
    auto qKing = std::find(pokerCards.begin(), pokerCards.end(), kingQuatrefoil);
    auto hAce = std::find(pokerCards.begin(), pokerCards.end(), aceHeart);
    auto dAce = std::find(pokerCards.begin(), pokerCards.end(), aceDiamond);
    auto cAce = std::find(pokerCards.begin(), pokerCards.end(), aceClub);
    auto sAce = std::find(pokerCards.begin(), pokerCards.end(), aceSpade);
    auto qAce = std::find(pokerCards.begin(), pokerCards.end(), aceQuatrefoil);

    // Determine a poker hand rank based on user's cards
    if (h2 != pokerCards.end() && d2 != pokerCards.end() && c2 != pokerCards.end() && s2 != pokerCards.end() && q2 != pokerCards.end()) {

        std::cout << fiveKindCard.first << "\n"; // 'Pair.first' will write the KEY of the pair function
        
        creditReward = creditBet * fiveKindCard.second; // 'Pair.second' will write the VALUE of the pair function
        std::cout << "You have recieved $" << creditReward << "\n";
        credit += creditReward; // Total amount of rewards will add to the user's balance
    }
    else if (h10 != pokerCards.end() && hJack != pokerCards.end() && hQueen != pokerCards.end() && hKing != pokerCards.end() && hAce != pokerCards.end()) {

        std::cout << royalFlushCard.first << "\n";

        creditReward = creditBet * royalFlushCard.second;
        std::cout << "You have recieved $" << creditReward << "\n";
        credit += creditReward;
    }
    else if (hAce != pokerCards.end() && h2 != pokerCards.end() && h3 != pokerCards.end() && h4 != pokerCards.end() && h5 != pokerCards.end()) {

        std::cout << straightFlushCard.first << "\n";
        
        creditReward = creditBet * straightFlushCard.second;
        std::cout << "You have recieved $" << creditReward << "\n";
        credit += creditReward;
    }
    else if (h2 != pokerCards.end() && d2 != pokerCards.end() && c2 != pokerCards.end() && s2 != pokerCards.end()) {

        std::cout << fourKindCard.first << "\n";
        
        creditReward = creditBet * fourKindCard.second;
        std::cout << "You have recieved $" << creditReward << "\n";
        credit += creditReward;
    }
    else if (h2 != pokerCards.end() && d2 != pokerCards.end() && h3 != pokerCards.end() && d3 != pokerCards.end() && c3 != pokerCards.end()) {
        
        std::cout << fullHouseCard.first << "\n";
        
        creditReward = creditBet * fullHouseCard.second;
        std::cout << "You have recieved $" << creditReward << "\n";
        credit += creditReward;
    }
    else if (h2 != pokerCards.end() && h4 != pokerCards.end() && h5 != pokerCards.end() && h7 != pokerCards.end() && h8 != pokerCards.end()) {
        
        std::cout << flushCard.first << "\n";
        
        creditReward = creditBet * flushCard.second;
        std::cout << "You have recieved $" << creditReward << "\n";
        credit += creditReward;
    }
    else if (h2 != pokerCards.end() && d3 != pokerCards.end() && c4 != pokerCards.end() && s5 != pokerCards.end() && q6 != pokerCards.end()) {
        
        std::cout << straightCard.first << "\n";
        
        creditReward = creditBet * straightCard.second;
        std::cout << "You have recieved $" << creditReward << "\n";
        credit += creditReward;
    }
    else if (h2 != pokerCards.end() && d2 != pokerCards.end() && c2 != pokerCards.end()) {
        
        std::cout << threeKindCard.first << "\n";
        
        creditReward = creditBet * threeKindCard.second;
        std::cout << "You have recieved $" << creditReward << "\n";
        credit += creditReward;
    }
    else if (h2 != pokerCards.end() && d2 != pokerCards.end() && h3 != pokerCards.end() && d3 != pokerCards.end()) {
        
        std::cout << twoPairCard.first << "\n";
        
        creditReward = creditBet * twoPairCard.second;
        std::cout << "You have recieved $" << creditReward << "\n";
        credit += creditReward;
    }
    else if (h2 != pokerCards.end() && d2 != pokerCards.end()) {
        
        std::cout << pairCard.first << "\n";
        
        creditReward = creditBet * pairCard.second;
        std::cout << "You have recieved $" << creditReward << "\n";
        credit += creditReward;
    }
    else {
        
        std::cout << highCard.first << "\n";
        
        creditReward = creditBet * highCard.second;
        std::cout << "You have recieved $" << creditReward << "\n";
        credit += creditReward;
    }

    std::cout << "Check your credit balance by pressing '3' as a menu option.\n";
}