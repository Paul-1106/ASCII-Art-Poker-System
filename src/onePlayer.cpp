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
    std::string randomCard, randomCard2, randomCard3, randomCard4, randomCard5;
    char cardChange1, cardChange2, cardChange3, cardChange4, cardChange5;
    // std::vector<std::string> pokerHand = {card1, card2, card3, card4, card5};
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

    // All updated poker cards will be in the 'handDeck' container
    std::vector<std::string> handDeck = {randomCard, randomCard2, randomCard3, randomCard4, randomCard5};

    // Poker card code if card code is in user's poker hand
    auto h2 = std::find(handDeck.begin(), handDeck.end(), twoHeart);
    auto d2 = std::find(handDeck.begin(), handDeck.end(), twoDiamond);
    auto c2 = std::find(handDeck.begin(), handDeck.end(), twoClub);
    auto s2 = std::find(handDeck.begin(), handDeck.end(), twoSpade);
    auto q2 = std::find(handDeck.begin(), handDeck.end(), twoQuatrefoil);
    auto h3 = std::find(handDeck.begin(), handDeck.end(), threeHeart);
    auto d3 = std::find(handDeck.begin(), handDeck.end(), threeDiamond);
    auto c3 = std::find(handDeck.begin(), handDeck.end(), threeClub);
    auto s3 = std::find(handDeck.begin(), handDeck.end(), threeSpade);
    auto q3 = std::find(handDeck.begin(), handDeck.end(), threeQuatrefoil);
    auto h4 = std::find(handDeck.begin(), handDeck.end(), fourHeart);
    auto d4 = std::find(handDeck.begin(), handDeck.end(), fourDiamond);
    auto c4 = std::find(handDeck.begin(), handDeck.end(), fourClub);
    auto s4 = std::find(handDeck.begin(), handDeck.end(), fourSpade);
    auto q4 = std::find(handDeck.begin(), handDeck.end(), fourQuatrefoil);
    auto h5 = std::find(handDeck.begin(), handDeck.end(), fiveHeart);
    auto d5 = std::find(handDeck.begin(), handDeck.end(), fiveDiamond);
    auto c5 = std::find(handDeck.begin(), handDeck.end(), fiveClub);
    auto s5 = std::find(handDeck.begin(), handDeck.end(), fiveSpade);
    auto q5 = std::find(handDeck.begin(), handDeck.end(), fiveQuatrefoil);
    auto h6 = std::find(handDeck.begin(), handDeck.end(), sixHeart);
    auto d6 = std::find(handDeck.begin(), handDeck.end(), sixDiamond);
    auto c6 = std::find(handDeck.begin(), handDeck.end(), sixClub);
    auto s6 = std::find(handDeck.begin(), handDeck.end(), sixSpade);
    auto q6 = std::find(handDeck.begin(), handDeck.end(), sixQuatrefoil);
    auto h7 = std::find(handDeck.begin(), handDeck.end(), sevenHeart);
    auto d7 = std::find(handDeck.begin(), handDeck.end(), sevenDiamond);
    auto c7 = std::find(handDeck.begin(), handDeck.end(), sevenClub);
    auto s7 = std::find(handDeck.begin(), handDeck.end(), sevenSpade);
    auto q7 = std::find(handDeck.begin(), handDeck.end(), sevenQuatrefoil);
    auto h8 = std::find(handDeck.begin(), handDeck.end(), eightHeart);
    auto d8 = std::find(handDeck.begin(), handDeck.end(), eightDiamond);
    auto c8 = std::find(handDeck.begin(), handDeck.end(), eightClub);
    auto s8 = std::find(handDeck.begin(), handDeck.end(), eightSpade);
    auto q8 = std::find(handDeck.begin(), handDeck.end(), eightQuatrefoil);
    auto h9 = std::find(handDeck.begin(), handDeck.end(), nineHeart);
    auto d9 = std::find(handDeck.begin(), handDeck.end(), nineDiamond);
    auto c9 = std::find(handDeck.begin(), handDeck.end(), nineClub);
    auto s9 = std::find(handDeck.begin(), handDeck.end(), nineSpade);
    auto q9 = std::find(handDeck.begin(), handDeck.end(), nineQuatrefoil);
    auto h10 = std::find(handDeck.begin(), handDeck.end(), tenHeart);
    auto d10 = std::find(handDeck.begin(), handDeck.end(), tenDiamond);
    auto c10 = std::find(handDeck.begin(), handDeck.end(), tenClub);
    auto s10 = std::find(handDeck.begin(), handDeck.end(), tenSpade);
    auto q10 = std::find(handDeck.begin(), handDeck.end(), tenQuatrefoil);
    auto hJack = std::find(handDeck.begin(), handDeck.end(), jackHeart);
    auto dJack = std::find(handDeck.begin(), handDeck.end(), jackDiamond);
    auto cJack = std::find(handDeck.begin(), handDeck.end(), jackClub);
    auto sJack = std::find(handDeck.begin(), handDeck.end(), jackSpade);
    auto qJack = std::find(handDeck.begin(), handDeck.end(), jackQuatrefoil);
    auto hQueen = std::find(handDeck.begin(), handDeck.end(), queenHeart);
    auto dQueen = std::find(handDeck.begin(), handDeck.end(), queenDiamond);
    auto cQueen = std::find(handDeck.begin(), handDeck.end(), queenClub);
    auto sQueen = std::find(handDeck.begin(), handDeck.end(), queenSpade);
    auto qQueen = std::find(handDeck.begin(), handDeck.end(), queenQuatrefoil);
    auto hKing = std::find(handDeck.begin(), handDeck.end(), kingHeart);
    auto dKing = std::find(handDeck.begin(), handDeck.end(), kingDiamond);
    auto cKing = std::find(handDeck.begin(), handDeck.end(), kingClub);
    auto sKing = std::find(handDeck.begin(), handDeck.end(), kingSpade);
    auto qKing = std::find(handDeck.begin(), handDeck.end(), kingQuatrefoil);
    auto hAce = std::find(handDeck.begin(), handDeck.end(), aceHeart);
    auto dAce = std::find(handDeck.begin(), handDeck.end(), aceDiamond);
    auto cAce = std::find(handDeck.begin(), handDeck.end(), aceClub);
    auto sAce = std::find(handDeck.begin(), handDeck.end(), aceSpade);
    auto qAce = std::find(handDeck.begin(), handDeck.end(), aceQuatrefoil);

    // Comparing each hand deck to points
    std::pair<std::string, double> highCard = {"High Card", 0.0};
    std::pair<std::string, double> pairCard = {"Pair", 1.0};
    std::pair<std::string, double> twoPairCard = {"Two Pair", 1.5};
    std::pair<std::string, double> threeKindCard = {"Three of a Kind", 2.5};
    std::pair<std::string, double> straightCard = {"Straight", 4.5};
    std::pair<std::string, double> flushCard = {"Flush", 8.0};
    std::pair<std::string, double> fullHouseCard = {"Full House", 12.5};
    std::pair<std::string, double> fourKindCard = {"Four of a Kind", 20.0};
    std::pair<std::string, double> straightFlushCard = {"Straight Flush", 40.5};
    std::pair<std::string, double> royalFlushCard = {"Royal Flush", 75.5};
    std::pair<std::string, double> fiveKindCard = {"Five of a Kind", 100.0}; 

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
                randomCard = pokerCards[dist(mEngine)];

                //Random card selector (2/5)
                std::random_device random2;
                std::mt19937 mEngine2(random2());
                std::uniform_int_distribution<std::size_t> dist2(0, pokerCards.size() - 1);
                randomCard2 = pokerCards[dist2(mEngine2)];

                //Random card selector (3/5)
                std::random_device random3;
                std::mt19937 mEngine3(random3());
                std::uniform_int_distribution<std::size_t> dist3(0, pokerCards.size() - 1);
                randomCard3 = pokerCards[dist3(mEngine3)];

                //Random card selector (4/5)
                std::random_device random4;
                std::mt19937 mEngine4(random4());
                std::uniform_int_distribution<std::size_t> dist4(0, pokerCards.size() - 1);
                randomCard4 = pokerCards[dist4(mEngine4)];

                // Random card selector (5/5)
                std::random_device random5;
                std::mt19937 mEngine5(random5());
                std::uniform_int_distribution<std::size_t> dist5(0, pokerCards.size() - 1);
                randomCard5 = pokerCards[dist5(mEngine5)];

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

    // Determine a poker hand rank based on user's cards
    if (h2 != handDeck.end()) {

        std::cout << fiveKindCard.first << "\n"; // 'Pair.first' will write the KEY of the pair function
        
        creditReward = creditBet * fiveKindCard.second; // 'Pair.second' will write the VALUE of the pair function
        std::cout << "You have recieved $" << creditReward << "\n";
        credit += creditReward; // Total amount of rewards will add to the user's balance
    }
    else if (h10 != handDeck.end() && hJack != handDeck.end() && hQueen != handDeck.end() && hKing != handDeck.end() && hAce != handDeck.end()) {

        std::cout << royalFlushCard.first << "\n";

        creditReward = creditBet * royalFlushCard.second;
        std::cout << "You have recieved $" << creditReward << "\n";
        credit += creditReward;
    }
    else if (hAce != handDeck.end() && h2 != handDeck.end() && h3 != handDeck.end() && h4 != handDeck.end() && h5 != handDeck.end()) {

        std::cout << straightFlushCard.first << "\n";
        
        creditReward = creditBet * straightFlushCard.second;
        std::cout << "You have recieved $" << creditReward << "\n";
        credit += creditReward;
    }
    else if (h2 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() && s2 != handDeck.end()) {

        std::cout << fourKindCard.first << "\n";
        
        creditReward = creditBet * fourKindCard.second;
        std::cout << "You have recieved $" << creditReward << "\n";
        credit += creditReward;
    }
    else if (h2 != handDeck.end() && d2 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end()) {
        
        std::cout << fullHouseCard.first << "\n";
        
        creditReward = creditBet * fullHouseCard.second;
        std::cout << "You have recieved $" << creditReward << "\n";
        credit += creditReward;
    }
    else if (h2 != handDeck.end() && h4 != handDeck.end() && h5 != handDeck.end() && h7 != handDeck.end() && h8 != handDeck.end()) {
        
        std::cout << flushCard.first << "\n";
        
        creditReward = creditBet * flushCard.second;
        std::cout << "You have recieved $" << creditReward << "\n";
        credit += creditReward;
    }
    else if (h2 != handDeck.end() && d3 != handDeck.end() && c4 != handDeck.end() && s5 != handDeck.end() && q6 != handDeck.end()) {
        
        std::cout << straightCard.first << "\n";
        
        creditReward = creditBet * straightCard.second;
        std::cout << "You have recieved $" << creditReward << "\n";
        credit += creditReward;
    }
    else if (h2 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end()) {
        
        std::cout << threeKindCard.first << "\n";
        
        creditReward = creditBet * threeKindCard.second;
        std::cout << "You have recieved $" << creditReward << "\n";
        credit += creditReward;
    }
    else if (h2 != handDeck.end() && d2 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end()) {
        
        std::cout << twoPairCard.first << "\n";
        
        creditReward = creditBet * twoPairCard.second;
        std::cout << "You have recieved $" << creditReward << "\n";
        credit += creditReward;
    }
    else if (h2 != handDeck.end() && d2 != handDeck.end()) {
        
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