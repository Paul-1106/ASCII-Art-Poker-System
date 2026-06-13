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
    std::pair<std::string, double> highCard = {"[HIGH CARD]", 0.0};
    std::pair<std::string, double> pairCard = {"[PAIR]", 1.0};
    std::pair<std::string, double> twoPairCard = {"[TWO PAIRS]", 1.5};
    std::pair<std::string, double> threeKindCard = {"[THREE OF A KIND]", 2.5};
    std::pair<std::string, double> straightCard = {"[STRAIGHT]", 4.5};
    std::pair<std::string, double> flushCard = {"[FLUSH]", 8.0};
    std::pair<std::string, double> fullHouseCard = {"[FULL HOUSE]", 12.5};
    std::pair<std::string, double> fourKindCard = {"[FOUR OF A KIND]", 20.0};
    std::pair<std::string, double> straightFlushCard = {"[STRAIGHT FLUSH]", 40.5};
    std::pair<std::string, double> royalFlushCard = {"[ROYAL FLUSH]", 75.5};
    std::pair<std::string, double> fiveKindCard = {"[FIVE OF A KIND]", 100.0}; 

    // Rows of numbers inside of the array
    std::vector<std::variant<std::string, int>> twoCard = {};

    // return this condition if the credit balance is less than 100
    if (credit < creditRequirement) {
        std::cout << "You do not have enough credits to to play poker. Enter '5' on the menu page to receive free credits.\n";
    }

    // The reqirement of playing one player mode of poker is to have at least 100 credits in credit balance
    while (credit >= creditRequirement && turn < 2) {

        // 'turn' variable will add up by 1 when user decides to swap some cards, else the variable will add up by 2
        if (credit >= creditRequirement) {
            
            // Your credit will automatically deduct when betting the amount of credits on poker
            std::cout << "Enter your bet: \n";
            std::cin >> creditBet;

            // If user input at least 100 credits
            if (creditBet >= creditRequirement) {

                std::cout << "You have bet $" << creditBet << " credits\n\n";
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

                    // FIVE OF A KIND
                    if (h2 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                        h3 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                        h4 != handDeck.end() && d4 != handDeck.end() && c4 != handDeck.end() && s4 != handDeck.end() && q4 != handDeck.end() ||
                        h5 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                        h6 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                        h7 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                        h8 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                        h9 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                        h10 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                        hJack != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                        hQueen != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                        hKing != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                        hAce != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end()) {

                        std::cout << fiveKindCard.first << "\n"; // 'Pair.first' will write the KEY of the pair function
                        
                        creditReward = creditBet * fiveKindCard.second; // 'Pair.second' will write the VALUE of the pair function
                        std::cout << "You have recieved $" << creditReward << "\n";
                        credit += creditReward; // Total amount of rewards will add to the user's balance
                    }
                    // ROYAL FLUSH
                    else if (h10 != handDeck.end() && hJack != handDeck.end() && hQueen != handDeck.end() && hKing != handDeck.end() && hAce != handDeck.end() ||
                        d10 != handDeck.end() && dJack != handDeck.end() && dQueen != handDeck.end() && dKing != handDeck.end() && dAce != handDeck.end() ||
                        c10 != handDeck.end() && cJack != handDeck.end() && cQueen != handDeck.end() && cKing != handDeck.end() && cAce != handDeck.end() ||
                        s10 != handDeck.end() && sJack != handDeck.end() && sQueen != handDeck.end() && sKing != handDeck.end() && sAce != handDeck.end() ||
                        q10 != handDeck.end() && qJack != handDeck.end() && qQueen != handDeck.end() && qKing != handDeck.end() && qAce != handDeck.end()) {

                        std::cout << royalFlushCard.first << "\n";

                        creditReward = creditBet * royalFlushCard.second;
                        std::cout << "You have recieved $" << creditReward << "\n";
                        credit += creditReward;
                    }
                    // STRAIGHT FLUSH
                    else if (hAce != handDeck.end() && h2 != handDeck.end() && h3 != handDeck.end() && h4 != handDeck.end() && h5 != handDeck.end() ||
                        dAce != handDeck.end() && d2 != handDeck.end() && d3 != handDeck.end() && d4 != handDeck.end() && d5 != handDeck.end() ||
                        cAce != handDeck.end() && c2 != handDeck.end() && c3 != handDeck.end() && c4 != handDeck.end() && c5 != handDeck.end() ||
                        sAce != handDeck.end() && s2 != handDeck.end() && s3 != handDeck.end() && s4 != handDeck.end() && s5 != handDeck.end() ||
                        qAce != handDeck.end() && q2 != handDeck.end() && q3 != handDeck.end() && q4 != handDeck.end() && q5 != handDeck.end() ||
                        h2 != handDeck.end() && h3 != handDeck.end() && h4 != handDeck.end() && h5 != handDeck.end() && h6 != handDeck.end() ||
                        d2 != handDeck.end() && d3 != handDeck.end() && d4 != handDeck.end() && d5 != handDeck.end() && d6 != handDeck.end() ||
                        c2 != handDeck.end() && c3 != handDeck.end() && c4 != handDeck.end() && c5 != handDeck.end() && c6 != handDeck.end() ||
                        s2 != handDeck.end() && s3 != handDeck.end() && s4 != handDeck.end() && s5 != handDeck.end() && s6 != handDeck.end() ||
                        q2 != handDeck.end() && q3 != handDeck.end() && q4 != handDeck.end() && q5 != handDeck.end() && q6 != handDeck.end() ||
                        h3 != handDeck.end() && h4 != handDeck.end() && h5 != handDeck.end() && h6 != handDeck.end() && h7 != handDeck.end() ||
                        d3 != handDeck.end() && d4 != handDeck.end() && d5 != handDeck.end() && d6 != handDeck.end() && d7 != handDeck.end() ||
                        c3 != handDeck.end() && c4 != handDeck.end() && c5 != handDeck.end() && c6 != handDeck.end() && c7 != handDeck.end() ||
                        s3 != handDeck.end() && s4 != handDeck.end() && s5 != handDeck.end() && s6 != handDeck.end() && s7 != handDeck.end() ||
                        q3 != handDeck.end() && q4 != handDeck.end() && q5 != handDeck.end() && q6 != handDeck.end() && q7 != handDeck.end() ||
                        h4 != handDeck.end() && h5 != handDeck.end() && h6 != handDeck.end() && h7 != handDeck.end() && h8 != handDeck.end() ||
                        d4 != handDeck.end() && d5 != handDeck.end() && d6 != handDeck.end() && d7 != handDeck.end() && d8 != handDeck.end() ||
                        c4 != handDeck.end() && c5 != handDeck.end() && c6 != handDeck.end() && c7 != handDeck.end() && c8 != handDeck.end() ||
                        s4 != handDeck.end() && s5 != handDeck.end() && s6 != handDeck.end() && s7 != handDeck.end() && s8 != handDeck.end() ||
                        q4 != handDeck.end() && q5 != handDeck.end() && q6 != handDeck.end() && q7 != handDeck.end() && q8 != handDeck.end() ||
                        h5 != handDeck.end() && h6 != handDeck.end() && h7 != handDeck.end() && h8 != handDeck.end() && h9 != handDeck.end() ||
                        d5 != handDeck.end() && d6 != handDeck.end() && d7 != handDeck.end() && d8 != handDeck.end() && d9 != handDeck.end() ||
                        c5 != handDeck.end() && c6 != handDeck.end() && c7 != handDeck.end() && c8 != handDeck.end() && c9 != handDeck.end() ||
                        s5 != handDeck.end() && s6 != handDeck.end() && s7 != handDeck.end() && s8 != handDeck.end() && s9 != handDeck.end() ||
                        q5 != handDeck.end() && q6 != handDeck.end() && q7 != handDeck.end() && q8 != handDeck.end() && q9 != handDeck.end() ||
                        h6 != handDeck.end() && h7 != handDeck.end() && h8 != handDeck.end() && h9 != handDeck.end() && h10 != handDeck.end() ||
                        d6 != handDeck.end() && d7 != handDeck.end() && d8 != handDeck.end() && d9 != handDeck.end() && d10 != handDeck.end() ||
                        c6 != handDeck.end() && c7 != handDeck.end() && c8 != handDeck.end() && c9 != handDeck.end() && c10 != handDeck.end() ||
                        s6 != handDeck.end() && s7 != handDeck.end() && s8 != handDeck.end() && s9 != handDeck.end() && s10 != handDeck.end() ||
                        q6 != handDeck.end() && q7 != handDeck.end() && q8 != handDeck.end() && q9 != handDeck.end() && q10 != handDeck.end() ||
                        h7 != handDeck.end() && h8 != handDeck.end() && h9 != handDeck.end() && h10 != handDeck.end() && hJack != handDeck.end() ||
                        d7 != handDeck.end() && d8 != handDeck.end() && d9 != handDeck.end() && d10 != handDeck.end() && dJack != handDeck.end() ||
                        c7 != handDeck.end() && c8 != handDeck.end() && c9 != handDeck.end() && c10 != handDeck.end() && cJack != handDeck.end() ||
                        s7 != handDeck.end() && s8 != handDeck.end() && s9 != handDeck.end() && s10 != handDeck.end() && sJack != handDeck.end() ||
                        q7 != handDeck.end() && q8 != handDeck.end() && q9 != handDeck.end() && q10 != handDeck.end() && qJack != handDeck.end() ||
                        h8 != handDeck.end() && h9 != handDeck.end() && h10 != handDeck.end() && hJack != handDeck.end() && hQueen != handDeck.end() ||
                        d8 != handDeck.end() && d9 != handDeck.end() && d10 != handDeck.end() && dJack != handDeck.end() && dQueen != handDeck.end() ||
                        c8 != handDeck.end() && c9 != handDeck.end() && c10 != handDeck.end() && cJack != handDeck.end() && cQueen != handDeck.end() ||
                        s8 != handDeck.end() && s9 != handDeck.end() && s10 != handDeck.end() && sJack != handDeck.end() && sQueen != handDeck.end() ||
                        q8 != handDeck.end() && q9 != handDeck.end() && q10 != handDeck.end() && qJack != handDeck.end() && qQueen != handDeck.end() ||
                        h9 != handDeck.end() && h10 != handDeck.end() && hJack != handDeck.end() && hQueen != handDeck.end() && hKing != handDeck.end() ||
                        d9 != handDeck.end() && d10 != handDeck.end() && dJack != handDeck.end() && dQueen != handDeck.end() && dKing != handDeck.end() ||
                        c9 != handDeck.end() && c10 != handDeck.end() && cJack != handDeck.end() && cQueen != handDeck.end() && cKing != handDeck.end() ||
                        s9 != handDeck.end() && s10 != handDeck.end() && sJack != handDeck.end() && sQueen != handDeck.end() && sKing != handDeck.end() ||
                        q9 != handDeck.end() && q10 != handDeck.end() && qJack != handDeck.end() && qQueen != handDeck.end() && qKing != handDeck.end()) {

                        std::cout << straightFlushCard.first << "\n";
                        
                        creditReward = creditBet * straightFlushCard.second;
                        std::cout << "You have recieved $" << creditReward << "\n";
                        credit += creditReward;
                    }
                    // FOUR OF A KIND
                    else if (h2 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() && s2 != handDeck.end() ||
                        h3 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() && s3 != handDeck.end() ||
                        h4 != handDeck.end() && d4 != handDeck.end() && c4 != handDeck.end() && s4 != handDeck.end() ||
                        h5 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() ||
                        h6 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() ||
                        h7 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() ||
                        h8 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() ||
                        h9 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() ||
                        h10 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() ||
                        hJack != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() ||
                        hQueen != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() ||
                        hKing != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() ||
                        hAce != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() ||
                        h2 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() && q2 != handDeck.end() ||
                        h3 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() && q3 != handDeck.end() ||
                        h4 != handDeck.end() && d4 != handDeck.end() && c4 != handDeck.end() && q4 != handDeck.end() ||
                        h5 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                        h6 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                        h7 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                        h8 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                        h9 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                        h10 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                        hJack != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                        hQueen != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() ||
                        hKing != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                        hAce != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                        h2 != handDeck.end() && d2 != handDeck.end() && q2 != handDeck.end() && s2 != handDeck.end() ||
                        h3 != handDeck.end() && d3 != handDeck.end() && q3 != handDeck.end() && s3 != handDeck.end() ||
                        h4 != handDeck.end() && d4 != handDeck.end() && q4 != handDeck.end() && s4 != handDeck.end() ||
                        h5 != handDeck.end() && d5 != handDeck.end() && q5 != handDeck.end() && s5 != handDeck.end() ||
                        h6 != handDeck.end() && d6 != handDeck.end() && q6 != handDeck.end() && s6 != handDeck.end() ||
                        h7 != handDeck.end() && d7 != handDeck.end() && q7 != handDeck.end() && s7 != handDeck.end() ||
                        h8 != handDeck.end() && d8 != handDeck.end() && q8 != handDeck.end() && s8 != handDeck.end() ||
                        h9 != handDeck.end() && d9 != handDeck.end() && q9 != handDeck.end() && s9 != handDeck.end() ||
                        h10 != handDeck.end() && d10 != handDeck.end() && q10 != handDeck.end() && s10 != handDeck.end() ||
                        hJack != handDeck.end() && dJack != handDeck.end() && qJack != handDeck.end() && sJack != handDeck.end() ||
                        hQueen != handDeck.end() && dQueen != handDeck.end() && qQueen != handDeck.end() && sQueen != handDeck.end() ||
                        hKing != handDeck.end() && dKing != handDeck.end() && qKing != handDeck.end() && sKing != handDeck.end() ||
                        hAce != handDeck.end() && dAce != handDeck.end() && qAce != handDeck.end() && sAce != handDeck.end() ||
                        h2 != handDeck.end() && q2 != handDeck.end() && c2 != handDeck.end() && s2 != handDeck.end() ||
                        h3 != handDeck.end() && q3 != handDeck.end() && c3 != handDeck.end() && s3 != handDeck.end() ||
                        h4 != handDeck.end() && q4 != handDeck.end() && c4 != handDeck.end() && s4 != handDeck.end() ||
                        h5 != handDeck.end() && q5 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() ||
                        h6 != handDeck.end() && q6 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() ||
                        h7 != handDeck.end() && q7 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() ||
                        h8 != handDeck.end() && q8 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() ||
                        h9 != handDeck.end() && q9 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() ||
                        h10 != handDeck.end() && q10 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() ||
                        hJack != handDeck.end() && qJack != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() ||
                        hQueen != handDeck.end() && qQueen != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() ||
                        hKing != handDeck.end() && qKing != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() ||
                        hAce != handDeck.end() && qAce != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() ||
                        q2 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() && s2 != handDeck.end() ||
                        q3 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() && s3 != handDeck.end() ||
                        q4 != handDeck.end() && d4 != handDeck.end() && c4 != handDeck.end() && s4 != handDeck.end() ||
                        q5 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() ||
                        q6 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() ||
                        q7 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() ||
                        q8 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() ||
                        q9 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() ||
                        q10 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() ||
                        qJack != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() ||
                        qQueen != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() ||
                        qKing != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() ||
                        qAce != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end()) {

                        std::cout << fourKindCard.first << "\n";
                        
                        creditReward = creditBet * fourKindCard.second;
                        std::cout << "You have recieved $" << creditReward << "\n";
                        credit += creditReward;
                    }
                    // FULL HOUSE
                    else if (h2 != handDeck.end() && d2 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() && s3 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() && s3 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() && s3 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() && s3 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() && s3 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() && s3 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() && s3 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() && s3 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() && s3 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() && s3 != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && c3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && c3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && c3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && c3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && c3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && c3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && c3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && c3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && c3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && c3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && h3 != handDeck.end() && c3 != handDeck.end() && q3 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && h3 != handDeck.end() && c3 != handDeck.end() && q3 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && h3 != handDeck.end() && c3 != handDeck.end() && q3 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && h3 != handDeck.end() && c3 != handDeck.end() && q3 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && h3 != handDeck.end() && c3 != handDeck.end() && q3 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && h3 != handDeck.end() && c3 != handDeck.end() && q3 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && h3 != handDeck.end() && c3 != handDeck.end() && q3 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && h3 != handDeck.end() && c3 != handDeck.end() && q3 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && h3 != handDeck.end() && c3 != handDeck.end() && q3 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && h3 != handDeck.end() && c3 != handDeck.end() && q3 != handDeck.end() || // 
                            h2 != handDeck.end() && d2 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && s3 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && s3 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && s3 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && s3 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && s3 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && s3 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && s3 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && s3 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && s3 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && s3 != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && q3 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && q3 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && q3 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && q3 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && q3 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && q3 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && q3 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && q3 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && q3 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && q3 != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() && q3 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() && q3 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() && q3 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() && q3 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() && q3 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() && q3 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() && q3 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() && q3 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() && q3 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() && q3 != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && h3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && h3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && h3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && h3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && h3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && h3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && h3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && h3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && h3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && h3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && d3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && d3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && d3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && d3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && d3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && d3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && d3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && d3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && d3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && d3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() || ////
                            h2 != handDeck.end() && d2 != handDeck.end() && h4 != handDeck.end() && d4 != handDeck.end() && c4 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && h4 != handDeck.end() && d4 != handDeck.end() && c4 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && h4 != handDeck.end() && d4 != handDeck.end() && c4 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && h4 != handDeck.end() && d4 != handDeck.end() && c4 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && h4 != handDeck.end() && d4 != handDeck.end() && c4 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && h4 != handDeck.end() && d4 != handDeck.end() && c4 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && h4 != handDeck.end() && d4 != handDeck.end() && c4 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && h4 != handDeck.end() && d4 != handDeck.end() && c4 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && h4 != handDeck.end() && d4 != handDeck.end() && c4 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && h4 != handDeck.end() && d4 != handDeck.end() && c4 != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && d4 != handDeck.end() && c4 != handDeck.end() && s4 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && d4 != handDeck.end() && c4 != handDeck.end() && s4 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && d4 != handDeck.end() && c4 != handDeck.end() && s4 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && d4 != handDeck.end() && c4 != handDeck.end() && s4 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && d4 != handDeck.end() && c4 != handDeck.end() && s4 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && d4 != handDeck.end() && c4 != handDeck.end() && s4 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && d4 != handDeck.end() && c4 != handDeck.end() && s4 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && d4 != handDeck.end() && c4 != handDeck.end() && s4 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && d4 != handDeck.end() && c4 != handDeck.end() && s4 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && d4 != handDeck.end() && c4 != handDeck.end() && s4 != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && c4 != handDeck.end() && s4 != handDeck.end() && q4 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && c4 != handDeck.end() && s4 != handDeck.end() && q4 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && c4 != handDeck.end() && s4 != handDeck.end() && q4 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && c4 != handDeck.end() && s4 != handDeck.end() && q4 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && c4 != handDeck.end() && s4 != handDeck.end() && q4 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && c4 != handDeck.end() && s4 != handDeck.end() && q4 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && c4 != handDeck.end() && s4 != handDeck.end() && q4 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && c4 != handDeck.end() && s4 != handDeck.end() && q4 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && c4 != handDeck.end() && s4 != handDeck.end() && q4 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && c4 != handDeck.end() && s4 != handDeck.end() && q4 != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && h4 != handDeck.end() && c4 != handDeck.end() && q4 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && h4 != handDeck.end() && c4 != handDeck.end() && q4 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && h4 != handDeck.end() && c4 != handDeck.end() && q4 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && h4 != handDeck.end() && c4 != handDeck.end() && q4 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && h4 != handDeck.end() && c4 != handDeck.end() && q4 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && h4 != handDeck.end() && c4 != handDeck.end() && q4 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && h4 != handDeck.end() && c4 != handDeck.end() && q4 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && h4 != handDeck.end() && c4 != handDeck.end() && q4 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && h4 != handDeck.end() && c4 != handDeck.end() && q4 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && h4 != handDeck.end() && c4 != handDeck.end() && q4 != handDeck.end() || // 
                            h2 != handDeck.end() && d2 != handDeck.end() && h4 != handDeck.end() && d4 != handDeck.end() && s4 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && h4 != handDeck.end() && d4 != handDeck.end() && s4 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && h4 != handDeck.end() && d4 != handDeck.end() && s4 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && h4 != handDeck.end() && d4 != handDeck.end() && s4 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && h4 != handDeck.end() && d4 != handDeck.end() && s4 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && h4 != handDeck.end() && d4 != handDeck.end() && s4 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && h4 != handDeck.end() && d4 != handDeck.end() && s4 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && h4 != handDeck.end() && d4 != handDeck.end() && s4 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && h4 != handDeck.end() && d4 != handDeck.end() && s4 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && h4 != handDeck.end() && d4 != handDeck.end() && s4 != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && h4 != handDeck.end() && d4 != handDeck.end() && q4 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && h4 != handDeck.end() && d4 != handDeck.end() && q4 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && h4 != handDeck.end() && d4 != handDeck.end() && q4 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && h4 != handDeck.end() && d4 != handDeck.end() && q4 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && h4 != handDeck.end() && d4 != handDeck.end() && q4 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && h4 != handDeck.end() && d4 != handDeck.end() && q4 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && h4 != handDeck.end() && d4 != handDeck.end() && q4 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && h4 != handDeck.end() && d4 != handDeck.end() && q4 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && h4 != handDeck.end() && d4 != handDeck.end() && q4 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && h4 != handDeck.end() && d4 != handDeck.end() && q4 != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && d4 != handDeck.end() && c4 != handDeck.end() && q4 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && d4 != handDeck.end() && c4 != handDeck.end() && q4 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && d4 != handDeck.end() && c4 != handDeck.end() && q4 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && d4 != handDeck.end() && c4 != handDeck.end() && q4 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && d4 != handDeck.end() && c4 != handDeck.end() && q4 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && d4 != handDeck.end() && c4 != handDeck.end() && q4 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && d4 != handDeck.end() && c4 != handDeck.end() && q4 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && d4 != handDeck.end() && c4 != handDeck.end() && q4 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && d4 != handDeck.end() && c4 != handDeck.end() && q4 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && d4 != handDeck.end() && c4 != handDeck.end() && q4 != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && h4 != handDeck.end() && s4 != handDeck.end() && q4 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && h4 != handDeck.end() && s4 != handDeck.end() && q4 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && h4 != handDeck.end() && s4 != handDeck.end() && q4 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && h4 != handDeck.end() && s4 != handDeck.end() && q4 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && h4 != handDeck.end() && s4 != handDeck.end() && q4 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && h4 != handDeck.end() && s4 != handDeck.end() && q4 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && h4 != handDeck.end() && s4 != handDeck.end() && q4 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && h4 != handDeck.end() && s4 != handDeck.end() && q4 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && h4 != handDeck.end() && s4 != handDeck.end() && q4 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && h4 != handDeck.end() && s4 != handDeck.end() && q4 != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && d4 != handDeck.end() && s4 != handDeck.end() && q4 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && d4 != handDeck.end() && s4 != handDeck.end() && q4 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && d4 != handDeck.end() && s4 != handDeck.end() && q4 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && d4 != handDeck.end() && s4 != handDeck.end() && q4 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && d4 != handDeck.end() && s4 != handDeck.end() && q4 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && d4 != handDeck.end() && s4 != handDeck.end() && q4 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && d4 != handDeck.end() && s4 != handDeck.end() && q4 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && d4 != handDeck.end() && s4 != handDeck.end() && q4 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && d4 != handDeck.end() && s4 != handDeck.end() && q4 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && d4 != handDeck.end() && s4 != handDeck.end() && q4 != handDeck.end() || ////
                            h2 != handDeck.end() && d2 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() && q3 != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && h5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && h5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && h5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && h5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && h5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && h5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && h5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && h5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && h5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && h5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() || // 
                            h2 != handDeck.end() && d2 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && q5 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && q5 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && q5 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && q5 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && q5 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && q5 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && q5 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && q5 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && q5 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && q5 != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && h5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && h5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && h5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && h5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && h5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && h5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && h5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && h5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && h5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && h5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() || ////
                            h2 != handDeck.end() && d2 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && h6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && h6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && h6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && h6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && h6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && h6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && h6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && h6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && h6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && h6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() || // 
                            h2 != handDeck.end() && d2 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && q6 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && q6 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && q6 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && q6 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && q6 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && q6 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && q6 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && q6 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && q6 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && q6 != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && h6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && h6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && h6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && h6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && h6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && h6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && h6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && h6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && h6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && h6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() || ////
                            h2 != handDeck.end() && d2 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && h7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && h7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && h7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && h7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && h7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && h7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && h7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && h7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && h7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && h7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() || // 
                            h2 != handDeck.end() && d2 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && q7 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && q7 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && q7 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && q7 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && q7 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && q7 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && q7 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && q7 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && q7 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && q7 != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && h7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && h7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && h7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && h7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && h7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && h7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && h7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && h7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && h7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && h7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() || ////
                            h2 != handDeck.end() && d2 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && h8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && h8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && h8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && h8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && h8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && h8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && h8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && h8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && h8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && h8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() || // 
                            h2 != handDeck.end() && d2 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && q8 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && q8 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && q8 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && q8 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && q8 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && q8 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && q8 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && q8 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && q8 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && q8 != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && h8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && h8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && h8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && h8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && h8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && h8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && h8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && h8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && h8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && h8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() || ////
                            h2 != handDeck.end() && d2 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && h9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && h9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && h9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && h9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && h9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && h9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && h9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && h9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && h9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && h9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() || // 
                            h2 != handDeck.end() && d2 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && q9 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && q9 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && q9 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && q9 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && q9 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && q9 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && q9 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && q9 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && q9 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && q9 != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && h9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && h9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && h9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && h9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && h9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && h9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && h9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && h9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && h9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && h9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() || ////
                            h2 != handDeck.end() && d2 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && h10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && h10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && h10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && h10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && h10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && h10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && h10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && h10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && h10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && h10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() || // 
                            h2 != handDeck.end() && d2 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && q10 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && q10 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && q10 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && q10 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && q10 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && q10 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && q10 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && q10 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && q10 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && q10 != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && h10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && h10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && h10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && h10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && h10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && h10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && h10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && h10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && h10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && h10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() || ////
                            h2 != handDeck.end() && d2 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && hJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && hJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && hJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && hJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && hJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && hJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && hJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && hJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && hJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && hJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() || // 
                            h2 != handDeck.end() && d2 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && qJack != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && qJack != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && qJack != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && qJack != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && qJack != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && qJack != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && qJack != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && qJack != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && qJack != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && qJack != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && hJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && hJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && hJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && hJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && hJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && hJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && hJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && hJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && hJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && hJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() || ////
                            h2 != handDeck.end() && d2 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && hQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && hQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && hQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && hQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && hQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && hQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && hQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && hQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && hQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && hQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() || // 
                            h2 != handDeck.end() && d2 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && qQueen != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && qQueen != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && qQueen != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && qQueen != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && qQueen != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && qQueen != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && qQueen != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && qQueen != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && qQueen != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && qQueen != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && hQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && hQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && hQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && hQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && hQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && hQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && hQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && hQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && hQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && hQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() || ////
                            h2 != handDeck.end() && d2 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && hKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && hKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && hKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && hKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && hKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && hKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && hKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && hKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && hKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && hKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() || // 
                            h2 != handDeck.end() && d2 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && qKing != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && qKing != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && qKing != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && qKing != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && qKing != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && qKing != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && qKing != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && qKing != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && qKing != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && qKing != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && hKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && hKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && hKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && hKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && hKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && hKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && hKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && hKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && hKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && hKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() || ////
                            h2 != handDeck.end() && d2 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && hAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && hAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && hAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && hAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && hAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && hAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && hAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && hAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && hAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && hAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() || // 
                            h2 != handDeck.end() && d2 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && qAce != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && qAce != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && qAce != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && qAce != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && qAce != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && qAce != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && qAce != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && qAce != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && qAce != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && qAce != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && hAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && hAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && hAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && hAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && hAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && hAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && hAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && hAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && hAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && hAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() || //
                            h2 != handDeck.end() && d2 != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            d2 != handDeck.end() && c2 != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            c2 != handDeck.end() && s2 != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            s2 != handDeck.end() && q2 != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            q2 != handDeck.end() && h2 != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            h2 != handDeck.end() && c2 != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            d2 != handDeck.end() && s2 != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            c2 != handDeck.end() && q2 != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            s2 != handDeck.end() && h2 != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            q2 != handDeck.end() && d2 != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() || ////////
                            h3 != handDeck.end() && d3 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() && s2 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() && s2 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() && s2 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() && s2 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() && s2 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() && s2 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() && s2 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() && s2 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() && s2 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() && s2 != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && c2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && c2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && c2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && c2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && c2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && c2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && c2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && c2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && c2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && c2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && h2 != handDeck.end() && c2 != handDeck.end() && q2 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && h2 != handDeck.end() && c2 != handDeck.end() && q2 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && h2 != handDeck.end() && c2 != handDeck.end() && q2 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && h2 != handDeck.end() && c2 != handDeck.end() && q2 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && h2 != handDeck.end() && c2 != handDeck.end() && q2 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && h2 != handDeck.end() && c2 != handDeck.end() && q2 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && h2 != handDeck.end() && c2 != handDeck.end() && q2 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && h2 != handDeck.end() && c2 != handDeck.end() && q2 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && h2 != handDeck.end() && c2 != handDeck.end() && q2 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && h2 != handDeck.end() && c2 != handDeck.end() && q2 != handDeck.end() || // 
                            h3 != handDeck.end() && d3 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && s2 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && s2 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && s2 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && s2 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && s2 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && s2 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && s2 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && s2 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && s2 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && s2 != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && q2 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && q2 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && q2 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && q2 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && q2 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && q2 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && q2 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && q2 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && q2 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && q2 != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() && q2 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() && q2 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() && q2 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() && q2 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() && q2 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() && q2 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() && q2 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() && q2 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() && q2 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() && q2 != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && h2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && h2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && h2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && h2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && h2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && h2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && h2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && h2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && h2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && h2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && d2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && d2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && d2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && d2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && d2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && d2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && d2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && d2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && d2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && d2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() || ////
                            h3 != handDeck.end() && d3 != handDeck.end() && h4 != handDeck.end() && d4 != handDeck.end() && c4 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && h4 != handDeck.end() && d4 != handDeck.end() && c4 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && h4 != handDeck.end() && d4 != handDeck.end() && c4 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && h4 != handDeck.end() && d4 != handDeck.end() && c4 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && h4 != handDeck.end() && d4 != handDeck.end() && c4 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && h4 != handDeck.end() && d4 != handDeck.end() && c4 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && h4 != handDeck.end() && d4 != handDeck.end() && c4 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && h4 != handDeck.end() && d4 != handDeck.end() && c4 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && h4 != handDeck.end() && d4 != handDeck.end() && c4 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && h4 != handDeck.end() && d4 != handDeck.end() && c4 != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && d4 != handDeck.end() && c4 != handDeck.end() && s4 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && d4 != handDeck.end() && c4 != handDeck.end() && s4 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && d4 != handDeck.end() && c4 != handDeck.end() && s4 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && d4 != handDeck.end() && c4 != handDeck.end() && s4 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && d4 != handDeck.end() && c4 != handDeck.end() && s4 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && d4 != handDeck.end() && c4 != handDeck.end() && s4 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && d4 != handDeck.end() && c4 != handDeck.end() && s4 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && d4 != handDeck.end() && c4 != handDeck.end() && s4 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && d4 != handDeck.end() && c4 != handDeck.end() && s4 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && d4 != handDeck.end() && c4 != handDeck.end() && s4 != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && c4 != handDeck.end() && s4 != handDeck.end() && q4 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && c4 != handDeck.end() && s4 != handDeck.end() && q4 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && c4 != handDeck.end() && s4 != handDeck.end() && q4 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && c4 != handDeck.end() && s4 != handDeck.end() && q4 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && c4 != handDeck.end() && s4 != handDeck.end() && q4 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && c4 != handDeck.end() && s4 != handDeck.end() && q4 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && c4 != handDeck.end() && s4 != handDeck.end() && q4 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && c4 != handDeck.end() && s4 != handDeck.end() && q4 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && c4 != handDeck.end() && s4 != handDeck.end() && q4 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && c4 != handDeck.end() && s4 != handDeck.end() && q4 != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && h4 != handDeck.end() && c4 != handDeck.end() && q4 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && h4 != handDeck.end() && c4 != handDeck.end() && q4 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && h4 != handDeck.end() && c4 != handDeck.end() && q4 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && h4 != handDeck.end() && c4 != handDeck.end() && q4 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && h4 != handDeck.end() && c4 != handDeck.end() && q4 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && h4 != handDeck.end() && c4 != handDeck.end() && q4 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && h4 != handDeck.end() && c4 != handDeck.end() && q4 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && h4 != handDeck.end() && c4 != handDeck.end() && q4 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && h4 != handDeck.end() && c4 != handDeck.end() && q4 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && h4 != handDeck.end() && c4 != handDeck.end() && q4 != handDeck.end() || // 
                            h3 != handDeck.end() && d3 != handDeck.end() && h4 != handDeck.end() && d4 != handDeck.end() && s4 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && h4 != handDeck.end() && d4 != handDeck.end() && s4 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && h4 != handDeck.end() && d4 != handDeck.end() && s4 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && h4 != handDeck.end() && d4 != handDeck.end() && s4 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && h4 != handDeck.end() && d4 != handDeck.end() && s4 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && h4 != handDeck.end() && d4 != handDeck.end() && s4 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && h4 != handDeck.end() && d4 != handDeck.end() && s4 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && h4 != handDeck.end() && d4 != handDeck.end() && s4 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && h4 != handDeck.end() && d4 != handDeck.end() && s4 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && h4 != handDeck.end() && d4 != handDeck.end() && s4 != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && h4 != handDeck.end() && d4 != handDeck.end() && q4 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && h4 != handDeck.end() && d4 != handDeck.end() && q4 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && h4 != handDeck.end() && d4 != handDeck.end() && q4 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && h4 != handDeck.end() && d4 != handDeck.end() && q4 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && h4 != handDeck.end() && d4 != handDeck.end() && q4 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && h4 != handDeck.end() && d4 != handDeck.end() && q4 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && h4 != handDeck.end() && d4 != handDeck.end() && q4 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && h4 != handDeck.end() && d4 != handDeck.end() && q4 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && h4 != handDeck.end() && d4 != handDeck.end() && q4 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && h4 != handDeck.end() && d4 != handDeck.end() && q4 != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && d4 != handDeck.end() && c4 != handDeck.end() && q4 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && d4 != handDeck.end() && c4 != handDeck.end() && q4 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && d4 != handDeck.end() && c4 != handDeck.end() && q4 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && d4 != handDeck.end() && c4 != handDeck.end() && q4 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && d4 != handDeck.end() && c4 != handDeck.end() && q4 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && d4 != handDeck.end() && c4 != handDeck.end() && q4 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && d4 != handDeck.end() && c4 != handDeck.end() && q4 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && d4 != handDeck.end() && c4 != handDeck.end() && q4 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && d4 != handDeck.end() && c4 != handDeck.end() && q4 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && d4 != handDeck.end() && c4 != handDeck.end() && q4 != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && h4 != handDeck.end() && s4 != handDeck.end() && q4 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && h4 != handDeck.end() && s4 != handDeck.end() && q4 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && h4 != handDeck.end() && s4 != handDeck.end() && q4 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && h4 != handDeck.end() && s4 != handDeck.end() && q4 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && h4 != handDeck.end() && s4 != handDeck.end() && q4 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && h4 != handDeck.end() && s4 != handDeck.end() && q4 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && h4 != handDeck.end() && s4 != handDeck.end() && q4 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && h4 != handDeck.end() && s4 != handDeck.end() && q4 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && h4 != handDeck.end() && s4 != handDeck.end() && q4 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && h4 != handDeck.end() && s4 != handDeck.end() && q4 != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && d4 != handDeck.end() && s4 != handDeck.end() && q4 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && d4 != handDeck.end() && s4 != handDeck.end() && q4 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && d4 != handDeck.end() && s4 != handDeck.end() && q4 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && d4 != handDeck.end() && s4 != handDeck.end() && q4 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && d4 != handDeck.end() && s4 != handDeck.end() && q4 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && d4 != handDeck.end() && s4 != handDeck.end() && q4 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && d4 != handDeck.end() && s4 != handDeck.end() && q4 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && d4 != handDeck.end() && s4 != handDeck.end() && q4 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && d4 != handDeck.end() && s4 != handDeck.end() && q4 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && d4 != handDeck.end() && s4 != handDeck.end() && q4 != handDeck.end() || ////
                            h3 != handDeck.end() && d3 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() && q3 != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && h5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && h5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && h5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && h5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && h5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && h5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && h5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && h5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && h5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && h5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() || // 
                            h3 != handDeck.end() && d3 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && q5 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && q5 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && q5 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && q5 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && q5 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && q5 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && q5 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && q5 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && q5 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && q5 != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && h5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && h5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && h5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && h5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && h5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && h5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && h5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && h5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && h5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && h5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() || ////
                            h3 != handDeck.end() && d3 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && h6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && h6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && h6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && h6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && h6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && h6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && h6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && h6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && h6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && h6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() || // 
                            h3 != handDeck.end() && d3 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && q6 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && q6 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && q6 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && q6 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && q6 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && q6 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && q6 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && q6 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && q6 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && q6 != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && h6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && h6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && h6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && h6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && h6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && h6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && h6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && h6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && h6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && h6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() || ////
                            h3 != handDeck.end() && d3 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && h7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && h7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && h7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && h7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && h7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && h7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && h7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && h7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && h7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && h7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() || // 
                            h3 != handDeck.end() && d3 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && q7 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && q7 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && q7 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && q7 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && q7 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && q7 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && q7 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && q7 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && q7 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && q7 != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && h7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && h7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && h7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && h7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && h7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && h7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && h7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && h7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && h7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && h7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() || ////
                            h3 != handDeck.end() && d3 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && h8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && h8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && h8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && h8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && h8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && h8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && h8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && h8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && h8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && h8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() || // 
                            h3 != handDeck.end() && d3 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && q8 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && q8 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && q8 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && q8 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && q8 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && q8 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && q8 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && q8 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && q8 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && q8 != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && h8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && h8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && h8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && h8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && h8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && h8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && h8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && h8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && h8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && h8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() || ////
                            h3 != handDeck.end() && d3 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && h9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && h9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && h9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && h9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && h9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && h9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && h9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && h9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && h9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && h9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() || // 
                            h3 != handDeck.end() && d3 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && q9 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && q9 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && q9 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && q9 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && q9 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && q9 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && q9 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && q9 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && q9 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && q9 != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && h9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && h9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && h9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && h9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && h9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && h9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && h9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && h9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && h9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && h9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() || ////
                            h3 != handDeck.end() && d3 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && h10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && h10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && h10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && h10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && h10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && h10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && h10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && h10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && h10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && h10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() || // 
                            h3 != handDeck.end() && d3 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && q10 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && q10 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && q10 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && q10 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && q10 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && q10 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && q10 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && q10 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && q10 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && q10 != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && h10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && h10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && h10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && h10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && h10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && h10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && h10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && h10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && h10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && h10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() || ////
                            h3 != handDeck.end() && d3 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && hJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && hJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && hJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && hJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && hJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && hJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && hJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && hJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && hJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && hJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() || // 
                            h3 != handDeck.end() && d3 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && qJack != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && qJack != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && qJack != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && qJack != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && qJack != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && qJack != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && qJack != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && qJack != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && qJack != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && qJack != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && hJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && hJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && hJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && hJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && hJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && hJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && hJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && hJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && hJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && hJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() || ////
                            h3 != handDeck.end() && d3 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && hQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && hQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && hQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && hQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && hQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && hQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && hQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && hQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && hQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && hQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() || // 
                            h3 != handDeck.end() && d3 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && qQueen != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && qQueen != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && qQueen != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && qQueen != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && qQueen != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && qQueen != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && qQueen != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && qQueen != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && qQueen != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && qQueen != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && hQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && hQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && hQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && hQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && hQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && hQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && hQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && hQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && hQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && hQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() || ////
                            h3 != handDeck.end() && d3 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && hKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && hKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && hKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && hKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && hKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && hKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && hKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && hKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && hKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && hKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() || // 
                            h3 != handDeck.end() && d3 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && qKing != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && qKing != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && qKing != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && qKing != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && qKing != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && qKing != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && qKing != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && qKing != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && qKing != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && qKing != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && hKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && hKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && hKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && hKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && hKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && hKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && hKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && hKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && hKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && hKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() || ////
                            h3 != handDeck.end() && d3 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && hAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && hAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && hAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && hAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && hAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && hAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && hAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && hAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && hAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && hAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() || // 
                            h3 != handDeck.end() && d3 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && qAce != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && qAce != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && qAce != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && qAce != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && qAce != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && qAce != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && qAce != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && qAce != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && qAce != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && qAce != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && hAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && hAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && hAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && hAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && hAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && hAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && hAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && hAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && hAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && hAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() || //
                            h3 != handDeck.end() && d3 != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            d3 != handDeck.end() && c3 != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            c3 != handDeck.end() && s3 != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            s3 != handDeck.end() && q3 != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            q3 != handDeck.end() && h3 != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            h3 != handDeck.end() && c3 != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            d3 != handDeck.end() && s3 != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            c3 != handDeck.end() && q3 != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            s3 != handDeck.end() && h3 != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            q3 != handDeck.end() && d3 != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() || ////////
                            h4 != handDeck.end() && d4 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() && s2 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() && s2 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() && s2 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() && s2 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() && s2 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() && s2 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() && s2 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() && s2 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() && s2 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() && s2 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && c2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && c2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && c2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && c2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && c2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && c2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && c2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && c2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && c2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && c2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && h2 != handDeck.end() && c2 != handDeck.end() && q2 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h2 != handDeck.end() && c2 != handDeck.end() && q2 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h2 != handDeck.end() && c2 != handDeck.end() && q2 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h2 != handDeck.end() && c2 != handDeck.end() && q2 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h2 != handDeck.end() && c2 != handDeck.end() && q2 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h2 != handDeck.end() && c2 != handDeck.end() && q2 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h2 != handDeck.end() && c2 != handDeck.end() && q2 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h2 != handDeck.end() && c2 != handDeck.end() && q2 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h2 != handDeck.end() && c2 != handDeck.end() && q2 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h2 != handDeck.end() && c2 != handDeck.end() && q2 != handDeck.end() || // 
                            h4 != handDeck.end() && d4 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && s2 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && s2 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && s2 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && s2 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && s2 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && s2 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && s2 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && s2 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && s2 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && s2 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && q2 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && q2 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && q2 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && q2 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && q2 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && q2 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && q2 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && q2 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && q2 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && q2 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() && q2 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() && q2 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() && q2 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() && q2 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() && q2 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() && q2 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() && q2 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() && q2 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() && q2 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() && q2 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && h2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && d2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && d2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && d2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && d2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && d2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && d2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && d2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && d2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && d2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && d2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() || ////
                            h4 != handDeck.end() && d4 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() && s3 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() && s3 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() && s3 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() && s3 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() && s3 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() && s3 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() && s3 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() && s3 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() && s3 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() && s3 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && c3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && c3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && c3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && c3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && c3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && c3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && c3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && c3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && c3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && c3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && h3 != handDeck.end() && c3 != handDeck.end() && q3 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h3 != handDeck.end() && c3 != handDeck.end() && q3 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h3 != handDeck.end() && c3 != handDeck.end() && q3 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h3 != handDeck.end() && c3 != handDeck.end() && q3 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h3 != handDeck.end() && c3 != handDeck.end() && q3 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h3 != handDeck.end() && c3 != handDeck.end() && q3 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h3 != handDeck.end() && c3 != handDeck.end() && q3 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h3 != handDeck.end() && c3 != handDeck.end() && q3 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h3 != handDeck.end() && c3 != handDeck.end() && q3 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h3 != handDeck.end() && c3 != handDeck.end() && q3 != handDeck.end() || // 
                            h4 != handDeck.end() && d4 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && s3 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && s3 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && s3 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && s3 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && s3 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && s3 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && s3 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && s3 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && s3 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && s3 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && q3 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && q3 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && q3 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && q3 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && q3 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && q3 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && q3 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && q3 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && q3 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && q3 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() && q3 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() && q3 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() && q3 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() && q3 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() && q3 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() && q3 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() && q3 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() && q3 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() && q3 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() && q3 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && h3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && d3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && d3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && d3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && d3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && d3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && d3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && d3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && d3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && d3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && d3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() || ////
                            h4 != handDeck.end() && d4 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() && q3 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && h5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() || // 
                            h4 != handDeck.end() && d4 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && q5 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && q5 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && q5 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && q5 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && q5 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && q5 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && q5 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && q5 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && q5 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && q5 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && h5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() || ////
                            h4 != handDeck.end() && d4 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && h6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() || // 
                            h4 != handDeck.end() && d4 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && q6 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && q6 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && q6 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && q6 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && q6 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && q6 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && q6 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && q6 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && q6 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && q6 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && h6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() || ////
                            h4 != handDeck.end() && d4 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() ||
                            q3 != handDeck.end() && h4 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && h7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() || // 
                            h4 != handDeck.end() && d4 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && q7 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && q7 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && q7 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && q7 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && q7 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && q7 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && q7 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && q7 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && q7 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && q7 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && h7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() || ////
                            h4 != handDeck.end() && d4 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && h8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() || // 
                            h4 != handDeck.end() && d4 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && q8 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && q8 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && q8 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && q8 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && q8 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && q8 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && q8 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && q8 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && q8 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && q8 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && h8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() || ////
                            h4 != handDeck.end() && d4 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && h9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() || // 
                            h4 != handDeck.end() && d4 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && q9 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && q9 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && q9 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && q9 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && q9 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && q9 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && q9 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && q9 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && q9 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && q9 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && h9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() || ////
                            h4 != handDeck.end() && d4 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && h10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() || // 
                            h4 != handDeck.end() && d4 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && q10 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && q10 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && q10 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && q10 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && q10 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && q10 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && q10 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && q10 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && q10 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && q10 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && h10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() || ////
                            h4 != handDeck.end() && d4 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && hJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && hJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && hJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && hJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && hJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && hJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && hJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && hJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && hJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && hJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() || // 
                            h4 != handDeck.end() && d4 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && qJack != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && qJack != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && qJack != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && qJack != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && qJack != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && qJack != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && qJack != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && qJack != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && qJack != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && qJack != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && hJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && hJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && hJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && hJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && hJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && hJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && hJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && hJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && hJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && hJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() || ////
                            h4 != handDeck.end() && d4 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && hQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && hQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && hQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && hQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && hQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && hQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && hQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && hQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && hQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && hQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() || // 
                            h4 != handDeck.end() && d4 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && qQueen != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && qQueen != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && qQueen != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && qQueen != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && qQueen != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && qQueen != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && qQueen != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && qQueen != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && qQueen != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && qQueen != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && hQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && hQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && hQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && hQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && hQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && hQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && hQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && hQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && hQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && hQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() || ////
                            h4 != handDeck.end() && d4 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && hKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && hKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && hKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && hKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && hKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && hKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && hKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && hKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && hKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && hKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() || // 
                            h4 != handDeck.end() && d4 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && qKing != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && qKing != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && qKing != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && qKing != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && qKing != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && qKing != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && qKing != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && qKing != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && qKing != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && qKing != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && hKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && hKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && hKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && hKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && hKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && hKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && hKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && hKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && hKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && hKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() || ////
                            h4 != handDeck.end() && d4 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && hAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && hAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && hAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && hAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && hAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && hAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && hAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && hAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && hAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && hAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() || // 
                            h4 != handDeck.end() && d4 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && qAce != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && qAce != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && qAce != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && qAce != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && qAce != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && qAce != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && qAce != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && qAce != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && qAce != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && qAce != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && hAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && hAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && hAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && hAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && hAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && hAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && hAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && hAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && hAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && hAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() || ////////
                            h5 != handDeck.end() && d5 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() ||
                            d5 != handDeck.end() && c5 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() && s2 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() && s2 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() && s2 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() && s2 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() && s2 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() && s2 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() && s2 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() && s2 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() && s2 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() && s2 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && c2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && c2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && c2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && c2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && c2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && c2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && c2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && c2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && c2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && c2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && h2 != handDeck.end() && c2 != handDeck.end() && q2 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h2 != handDeck.end() && c2 != handDeck.end() && q2 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h2 != handDeck.end() && c2 != handDeck.end() && q2 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h2 != handDeck.end() && c2 != handDeck.end() && q2 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h2 != handDeck.end() && c2 != handDeck.end() && q2 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h2 != handDeck.end() && c2 != handDeck.end() && q2 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h2 != handDeck.end() && c2 != handDeck.end() && q2 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h2 != handDeck.end() && c2 != handDeck.end() && q2 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h2 != handDeck.end() && c2 != handDeck.end() && q2 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h2 != handDeck.end() && c2 != handDeck.end() && q2 != handDeck.end() || // 
                            h4 != handDeck.end() && d4 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && s2 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && s2 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && s2 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && s2 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && s2 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && s2 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && s2 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && s2 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && s2 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && s2 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && q2 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && q2 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && q2 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && q2 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && q2 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && q2 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && q2 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && q2 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && q2 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h2 != handDeck.end() && d2 != handDeck.end() && q2 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() && q2 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() && q2 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() && q2 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() && q2 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() && q2 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() && q2 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() && q2 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() && q2 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() && q2 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() && q2 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && h2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && d2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && d2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && d2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && d2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && d2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && d2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && d2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && d2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && d2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && d2 != handDeck.end() && s2 != handDeck.end() && q2 != handDeck.end() || ////
                            h4 != handDeck.end() && d4 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() && s3 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() && s3 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() && s3 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() && s3 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() && s3 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() && s3 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() && s3 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() && s3 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() && s3 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() && s3 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && c3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && c3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && c3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && c3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && c3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && c3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && c3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && c3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && c3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && c3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && h3 != handDeck.end() && c3 != handDeck.end() && q3 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h3 != handDeck.end() && c3 != handDeck.end() && q3 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h3 != handDeck.end() && c3 != handDeck.end() && q3 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h3 != handDeck.end() && c3 != handDeck.end() && q3 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h3 != handDeck.end() && c3 != handDeck.end() && q3 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h3 != handDeck.end() && c3 != handDeck.end() && q3 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h3 != handDeck.end() && c3 != handDeck.end() && q3 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h3 != handDeck.end() && c3 != handDeck.end() && q3 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h3 != handDeck.end() && c3 != handDeck.end() && q3 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h3 != handDeck.end() && c3 != handDeck.end() && q3 != handDeck.end() || // 
                            h4 != handDeck.end() && d4 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && s3 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && s3 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && s3 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && s3 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && s3 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && s3 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && s3 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && s3 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && s3 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && s3 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && q3 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && q3 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && q3 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && q3 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && q3 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && q3 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && q3 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && q3 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && q3 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && q3 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() && q3 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() && q3 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() && q3 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() && q3 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() && q3 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() && q3 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() && q3 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() && q3 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() && q3 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end() && q3 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && h3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && d3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && d3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && d3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && d3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && d3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && d3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && d3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && d3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && d3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && d3 != handDeck.end() && s3 != handDeck.end() && q3 != handDeck.end() || ////
                            h4 != handDeck.end() && d4 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && c5 != handDeck.end() && s5 != handDeck.end() && q3 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && h5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() || // 
                            h4 != handDeck.end() && d4 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && q5 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && q5 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && q5 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && q5 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && q5 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && q5 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && q5 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && q5 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && q5 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h5 != handDeck.end() && d5 != handDeck.end() && q5 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && d5 != handDeck.end() && c5 != handDeck.end() && q5 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && h5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && d5 != handDeck.end() && s5 != handDeck.end() && q5 != handDeck.end() || ////
                            h4 != handDeck.end() && d4 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && c6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && h6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() || // 
                            h4 != handDeck.end() && d4 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && q6 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && q6 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && q6 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && q6 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && q6 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && q6 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && q6 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && q6 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && q6 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h6 != handDeck.end() && d6 != handDeck.end() && q6 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && d6 != handDeck.end() && c6 != handDeck.end() && q6 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && h6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && d6 != handDeck.end() && s6 != handDeck.end() && q6 != handDeck.end() || ////
                            h4 != handDeck.end() && d4 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() ||
                            q3 != handDeck.end() && h4 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && c7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && h7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() || // 
                            h4 != handDeck.end() && d4 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && q7 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && q7 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && q7 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && q7 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && q7 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && q7 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && q7 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && q7 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && q7 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h7 != handDeck.end() && d7 != handDeck.end() && q7 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && d7 != handDeck.end() && c7 != handDeck.end() && q7 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && h7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && d7 != handDeck.end() && s7 != handDeck.end() && q7 != handDeck.end() || ////
                            h4 != handDeck.end() && d4 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && c8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && h8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() || // 
                            h4 != handDeck.end() && d4 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && q8 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && q8 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && q8 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && q8 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && q8 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && q8 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && q8 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && q8 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && q8 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h8 != handDeck.end() && d8 != handDeck.end() && q8 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && d8 != handDeck.end() && c8 != handDeck.end() && q8 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && h8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && d8 != handDeck.end() && s8 != handDeck.end() && q8 != handDeck.end() || ////
                            h4 != handDeck.end() && d4 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && c9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && h9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() || // 
                            h4 != handDeck.end() && d4 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && q9 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && q9 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && q9 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && q9 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && q9 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && q9 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && q9 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && q9 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && q9 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h9 != handDeck.end() && d9 != handDeck.end() && q9 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && d9 != handDeck.end() && c9 != handDeck.end() && q9 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && h9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && d9 != handDeck.end() && s9 != handDeck.end() && q9 != handDeck.end() || ////
                            h4 != handDeck.end() && d4 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && c10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && h10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() || // 
                            h4 != handDeck.end() && d4 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && q10 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && q10 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && q10 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && q10 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && q10 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && q10 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && q10 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && q10 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && q10 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h10 != handDeck.end() && d10 != handDeck.end() && q10 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && d10 != handDeck.end() && c10 != handDeck.end() && q10 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && h10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && h10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && h10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && h10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && h10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && h10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && h10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && h10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && h10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && h10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && d10 != handDeck.end() && s10 != handDeck.end() && q10 != handDeck.end() || ////
                            h4 != handDeck.end() && d4 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && cJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && hJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && hJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && hJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && hJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && hJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && hJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && hJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && hJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && hJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && hJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() || // 
                            h4 != handDeck.end() && d4 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && qJack != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && qJack != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && qJack != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && qJack != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && qJack != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && qJack != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && qJack != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && qJack != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && qJack != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && hJack != handDeck.end() && dJack != handDeck.end() && qJack != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && dJack != handDeck.end() && cJack != handDeck.end() && qJack != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && hJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && hJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && hJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && hJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && hJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && hJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && hJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && hJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && hJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && hJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && dJack != handDeck.end() && sJack != handDeck.end() && qJack != handDeck.end() || ////
                            h4 != handDeck.end() && d4 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && cQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && hQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && hQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && hQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && hQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && hQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && hQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && hQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && hQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && hQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && hQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() || // 
                            h4 != handDeck.end() && d4 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && qQueen != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && qQueen != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && qQueen != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && qQueen != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && qQueen != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && qQueen != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && qQueen != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && qQueen != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && qQueen != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && hQueen != handDeck.end() && dQueen != handDeck.end() && qQueen != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && dQueen != handDeck.end() && cQueen != handDeck.end() && qQueen != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && hQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && hQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && hQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && hQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && hQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && hQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && hQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && hQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && hQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && hQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && dQueen != handDeck.end() && sQueen != handDeck.end() && qQueen != handDeck.end() || ////
                            h4 != handDeck.end() && d4 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && cKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && hKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && hKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && hKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && hKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && hKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && hKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && hKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && hKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && hKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && hKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() || // 
                            h4 != handDeck.end() && d4 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && qKing != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && qKing != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && qKing != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && qKing != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && qKing != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && qKing != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && qKing != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && qKing != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && qKing != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && hKing != handDeck.end() && dKing != handDeck.end() && qKing != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && dKing != handDeck.end() && cKing != handDeck.end() && qKing != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && hKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && hKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && hKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && hKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && hKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && hKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && hKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && hKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && hKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && hKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() || //
                            h4 != handDeck.end() && d4 != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            d4 != handDeck.end() && c4 != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            c4 != handDeck.end() && s4 != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            s4 != handDeck.end() && q4 != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            q4 != handDeck.end() && h4 != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            h4 != handDeck.end() && c4 != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            d4 != handDeck.end() && s4 != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            c4 != handDeck.end() && q4 != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            s4 != handDeck.end() && h4 != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() ||
                            q4 != handDeck.end() && d4 != handDeck.end() && dKing != handDeck.end() && sKing != handDeck.end() && qKing != handDeck.end() || ////
                            h5 != handDeck.end() && d5 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() ||
                            d5 != handDeck.end() && c5 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() ||
                            c5 != handDeck.end() && s5 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() ||
                            s5 != handDeck.end() && q5 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() ||
                            q5 != handDeck.end() && h5 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() ||
                            h5 != handDeck.end() && c5 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() ||
                            d5 != handDeck.end() && s5 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() ||
                            c5 != handDeck.end() && q5 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() ||
                            s5 != handDeck.end() && h5 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() ||
                            q5 != handDeck.end() && d5 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() || //
                            h5 != handDeck.end() && d5 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() ||
                            d5 != handDeck.end() && c5 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() ||
                            c5 != handDeck.end() && s5 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() ||
                            s5 != handDeck.end() && q5 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() ||
                            q5 != handDeck.end() && h5 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() ||
                            h5 != handDeck.end() && c5 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() ||
                            d5 != handDeck.end() && s5 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() ||
                            c5 != handDeck.end() && q5 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() ||
                            s5 != handDeck.end() && h5 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() ||
                            q5 != handDeck.end() && d5 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() || //
                            h5 != handDeck.end() && d5 != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            d5 != handDeck.end() && c5 != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            c5 != handDeck.end() && s5 != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            s5 != handDeck.end() && q5 != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            q5 != handDeck.end() && h5 != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            h5 != handDeck.end() && c5 != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            d5 != handDeck.end() && s5 != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            c5 != handDeck.end() && q5 != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            s5 != handDeck.end() && h5 != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            q5 != handDeck.end() && d5 != handDeck.end() && cAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() || //
                            h5 != handDeck.end() && d5 != handDeck.end() && hAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            d5 != handDeck.end() && c5 != handDeck.end() && hAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            c5 != handDeck.end() && s5 != handDeck.end() && hAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            s5 != handDeck.end() && q5 != handDeck.end() && hAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            q5 != handDeck.end() && h5 != handDeck.end() && hAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            h5 != handDeck.end() && c5 != handDeck.end() && hAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            d5 != handDeck.end() && s5 != handDeck.end() && hAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            c5 != handDeck.end() && q5 != handDeck.end() && hAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            s5 != handDeck.end() && h5 != handDeck.end() && hAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            q5 != handDeck.end() && d5 != handDeck.end() && hAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() || // 
                            h5 != handDeck.end() && d5 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() ||
                            d5 != handDeck.end() && c5 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() ||
                            c5 != handDeck.end() && s5 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() ||
                            s5 != handDeck.end() && q5 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() ||
                            q5 != handDeck.end() && h5 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() ||
                            h5 != handDeck.end() && c5 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() ||
                            d5 != handDeck.end() && s5 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() ||
                            c5 != handDeck.end() && q5 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() ||
                            s5 != handDeck.end() && h5 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() ||
                            q5 != handDeck.end() && d5 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() || //
                            h5 != handDeck.end() && d5 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && qAce != handDeck.end() ||
                            d5 != handDeck.end() && c5 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && qAce != handDeck.end() ||
                            c5 != handDeck.end() && s5 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && qAce != handDeck.end() ||
                            s5 != handDeck.end() && q5 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && qAce != handDeck.end() ||
                            q5 != handDeck.end() && h5 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && qAce != handDeck.end() ||
                            h5 != handDeck.end() && c5 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && qAce != handDeck.end() ||
                            d5 != handDeck.end() && s5 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && qAce != handDeck.end() ||
                            c5 != handDeck.end() && q5 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && qAce != handDeck.end() ||
                            s5 != handDeck.end() && h5 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && qAce != handDeck.end() ||
                            q5 != handDeck.end() && d5 != handDeck.end() && hAce != handDeck.end() && dAce != handDeck.end() && qAce != handDeck.end() || //
                            h5 != handDeck.end() && d5 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            d5 != handDeck.end() && c5 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            c5 != handDeck.end() && s5 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            s5 != handDeck.end() && q5 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            q5 != handDeck.end() && h5 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            h5 != handDeck.end() && c5 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            d5 != handDeck.end() && s5 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            c5 != handDeck.end() && q5 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            s5 != handDeck.end() && h5 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() ||
                            q5 != handDeck.end() && d5 != handDeck.end() && dAce != handDeck.end() && cAce != handDeck.end() && qAce != handDeck.end() || //
                            h5 != handDeck.end() && d5 != handDeck.end() && hAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            d5 != handDeck.end() && c5 != handDeck.end() && hAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            c5 != handDeck.end() && s5 != handDeck.end() && hAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            s5 != handDeck.end() && q5 != handDeck.end() && hAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            q5 != handDeck.end() && h5 != handDeck.end() && hAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            h5 != handDeck.end() && c5 != handDeck.end() && hAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            d5 != handDeck.end() && s5 != handDeck.end() && hAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            c5 != handDeck.end() && q5 != handDeck.end() && hAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            s5 != handDeck.end() && h5 != handDeck.end() && hAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            q5 != handDeck.end() && d5 != handDeck.end() && hAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() || //
                            h5 != handDeck.end() && d5 != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            d5 != handDeck.end() && c5 != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            c5 != handDeck.end() && s5 != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            s5 != handDeck.end() && q5 != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            q5 != handDeck.end() && h5 != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            h5 != handDeck.end() && c5 != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            d5 != handDeck.end() && s5 != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            c5 != handDeck.end() && q5 != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            s5 != handDeck.end() && h5 != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end() ||
                            q5 != handDeck.end() && d5 != handDeck.end() && dAce != handDeck.end() && sAce != handDeck.end() && qAce != handDeck.end()    ////////
                        ) {
                        
                        std::cout << fullHouseCard.first << "\n";
                        
                        creditReward = creditBet * fullHouseCard.second;
                        std::cout << "You have recieved $" << creditReward << "\n";
                        credit += creditReward;
                    }
                    // FLUSH
                    else if () {
                        
                        std::cout << flushCard.first << "\n";
                        
                        creditReward = creditBet * flushCard.second;
                        std::cout << "You have recieved $" << creditReward << "\n";
                        credit += creditReward;
                    }
                    // STRAIGHT
                    else if (h2 != handDeck.end() && d3 != handDeck.end() && c4 != handDeck.end() && s5 != handDeck.end() && q6 != handDeck.end()) {
                        
                        std::cout << straightCard.first << "\n";
                        
                        creditReward = creditBet * straightCard.second;
                        std::cout << "You have recieved $" << creditReward << "\n";
                        credit += creditReward;
                    }
                    // THREE OF A KIND
                    else if (h2 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end()) {
                        
                        std::cout << threeKindCard.first << "\n";
                        
                        creditReward = creditBet * threeKindCard.second;
                        std::cout << "You have recieved $" << creditReward << "\n";
                        credit += creditReward;
                    }
                    // TWO PAIR
                    else if (h2 != handDeck.end() && d2 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end()) {
                        
                        std::cout << twoPairCard.first << "\n";
                        
                        creditReward = creditBet * twoPairCard.second;
                        std::cout << "You have recieved $" << creditReward << "\n";
                        credit += creditReward;
                    }
                    // PAIR
                    else if (h2 != handDeck.end() && d2 != handDeck.end()) {
                        
                        std::cout << pairCard.first << "\n";
                        
                        creditReward = creditBet * pairCard.second;
                        std::cout << "You have recieved $" << creditReward << "\n";
                        credit += creditReward;
                    }
                    // HIGH CARD
                    else {
                        
                        std::cout << highCard.first << "\n";
                        
                        creditReward = creditBet * highCard.second;
                        std::cout << "You have recieved $" << creditReward << "\n";
                        credit += creditReward;
                    }
                    std::cout << "Check your credit balance by pressing '3' as a menu option.\n";
                    break;
                }
                else {
                    std::cout << "That input is not valid. Please select 's' to swap your deck or 'p' if you are satisfy with your deck.\n";
                    std::cin >> swap;
                }
            }
            // If user input less than 100 credits
            else {
                std::cout << "You need to bet at least 100 credits to play poker\n";
                std::cin >> creditBet;
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
        break;
    }
}