#include <iostream>
#include <string>
#include <vector>
#include <cmath>

#include <mylib/poker.h>

std::vector<std::string> Poker::lineSplitting(const std::string s) {

    std::vector<std::string> lines;
    std::stringstream ss(s);
    std::string line;

    while (std::getline(ss, line)) {
        lines.push_back(line);
    }

    return lines;
}

void Poker::onePlayer(double& credit, size_t creditRequirement) {

    char quit = 'q';
    size_t turn = 0;
    double creditBet;
    double creditReward;
    size_t points = 0;
    char cardChange1, cardChange2, cardChange3, cardChange4, cardChange5;
    char swap = ' ';

    // Automactically incrementing one of the variables once poker card matched with cards in hash-set array
    size_t twoFound, threeFound, fourFound, fiveFound, sixFound, sevenFound, eightFound, nineFound, tenFound, jackFound, queenFound, kingFound,
           aceFound, heartFound, diamondFound, clubFound, spadeFound, quatrefoilFound = 0;

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

/*
------------------------------
ALL POKER CARDS (Line 46 - 52)
------------------------------
*/ 

    // A random selector will pick an element from a 'pokerHand' vector
    std::vector<std::string> pokerCards = {twoHeart, twoDiamond, twoClub, twoSpade, twoQuatrefoil, threeHeart, threeDiamond, threeClub, threeSpade,
            threeQuatrefoil, fourHeart, fourDiamond, fourClub, fourSpade, fourQuatrefoil, fiveHeart, fiveDiamond, fiveClub, fiveSpade, fiveQuatrefoil,
            sixHeart, sixDiamond, sixClub, sixSpade, sixQuatrefoil, sevenHeart, sevenDiamond, sevenClub, sevenSpade, sevenQuatrefoil,
            eightHeart, eightDiamond, eightClub, eightSpade, eightQuatrefoil, nineHeart, nineDiamond, nineClub, nineSpade, nineQuatrefoil,
            tenHeart, tenDiamond, tenClub, tenSpade, tenQuatrefoil, jackHeart, jackDiamond, jackClub, jackSpade, jackQuatrefoil,
            queenHeart, queenDiamond, queenClub, queenSpade, queenQuatrefoil, kingHeart, kingDiamond, kingClub, kingSpade, kingQuatrefoil,
            aceHeart, aceDiamond, aceClub, aceSpade, aceQuatrefoil};

    // All updated poker cards will be in the 'handDeck' container
    std::vector<std::string> handDeck(5);

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
    std::pair<std::string, double> threeKindCard = {"[THREE OF A KIND]", 3.0};
    std::pair<std::string, double> straightCard = {"[STRAIGHT]", 4.5};
    std::pair<std::string, double> flushCard = {"[FLUSH]", 7.5};
    std::pair<std::string, double> fullHouseCard = {"[FULL HOUSE]", 12.0};
    std::pair<std::string, double> fourKindCard = {"[FOUR OF A KIND]", 20.0};
    std::pair<std::string, double> straightFlushCard = {"[STRAIGHT FLUSH]", 35.5};
    std::pair<std::string, double> royalFlushCard = {"[ROYAL FLUSH]", 50.0};
    std::pair<std::string, double> fiveKindCard = {"[FIVE OF A KIND]", 100.0}; 

    // Row of number cards inside of the array
    std::vector<std::string> aceCards = {aceHeart, aceDiamond, aceClub, aceSpade, aceQuatrefoil};
    std::vector<std::string> twoCards = {twoHeart, twoDiamond, twoClub, twoSpade, twoQuatrefoil};
    std::vector<std::string> threeCards = {threeHeart, threeDiamond, threeClub, threeSpade, threeQuatrefoil};
    std::vector<std::string> fourCards = {fourHeart, fourDiamond, fourClub, fourSpade, fourQuatrefoil};
    std::vector<std::string> fiveCards = {fiveHeart, fiveDiamond, fiveClub, fiveSpade, fiveQuatrefoil};
    std::vector<std::string> sixCards = {sixHeart, sixDiamond, sixClub, sixSpade, sixQuatrefoil};
    std::vector<std::string> sevenCards = {sevenHeart, sevenDiamond, sevenClub, sevenSpade, sevenQuatrefoil};
    std::vector<std::string> eightCards = {eightHeart, eightDiamond, eightClub, eightSpade, eightQuatrefoil};
    std::vector<std::string> nineCards = {nineHeart, nineDiamond, nineClub, nineSpade, nineQuatrefoil};
    std::vector<std::string> tenCards = {tenHeart, tenDiamond, tenClub, tenSpade, tenQuatrefoil};

    // Row of face cards inside of the array
    std::vector<std::string> jackCards = {jackHeart, jackDiamond, jackClub, jackSpade, jackQuatrefoil};
    std::vector<std::string> queenCards = {queenHeart, queenDiamond, queenClub, queenSpade, queenQuatrefoil};
    std::vector<std::string> kingCards = {kingHeart, kingDiamond, kingClub, kingSpade, kingQuatrefoil};

    // Row of suit cards inside of the array
    std::vector<std::string> heartCards = {aceHeart, twoHeart, threeHeart, fourHeart, fiveHeart, sixHeart, sevenHeart, eightHeart, nineHeart,
        tenHeart, jackHeart, queenHeart, kingHeart};
    std::vector<std::string> diamondCards = {aceDiamond, twoDiamond, threeDiamond, fourDiamond, fiveDiamond, sixDiamond, sevenDiamond, eightDiamond,
        nineDiamond, tenDiamond, jackDiamond, queenDiamond, kingDiamond};
    std::vector<std::string> clubCards = {aceClub, twoClub, threeClub, fourClub, fiveClub, sixClub, sevenClub, eightClub, nineClub, tenClub,
        jackClub, queenClub, kingClub};
    std::vector<std::string> spadeCards = {aceSpade, twoSpade, threeSpade, fourSpade, fiveSpade, sixSpade, sevenSpade, eightSpade, nineSpade,
        tenSpade, jackSpade, queenSpade, kingSpade};
    std::vector<std::string> quatrefoilCards = {aceQuatrefoil, twoQuatrefoil, threeQuatrefoil, fourQuatrefoil, fiveQuatrefoil, sixQuatrefoil,
        sevenQuatrefoil, eightQuatrefoil, nineQuatrefoil, tenQuatrefoil, jackQuatrefoil, queenQuatrefoil, kingQuatrefoil};


    // Check if one of the elements in sub-array is included in global poker cards array
    std::unordered_set<std::string> aceFind(aceCards.begin(), aceCards.end());
    std::unordered_set<std::string> twoFind(twoCards.begin(), twoCards.end());
    std::unordered_set<std::string> threeFind(threeCards.begin(), threeCards.end());
    std::unordered_set<std::string> fourFind(fourCards.begin(), fourCards.end());
    std::unordered_set<std::string> fiveFind(fiveCards.begin(), fiveCards.end());
    std::unordered_set<std::string> sixFind(sixCards.begin(), sixCards.end());
    std::unordered_set<std::string> sevenFind(sevenCards.begin(), sevenCards.end());
    std::unordered_set<std::string> eightFind(eightCards.begin(), eightCards.end());
    std::unordered_set<std::string> nineFind(nineCards.begin(), nineCards.end());
    std::unordered_set<std::string> tenFind(tenCards.begin(), tenCards.end());
    std::unordered_set<std::string> jackFind(jackCards.begin(), jackCards.end());
    std::unordered_set<std::string> queenFind(queenCards.begin(), queenCards.end());
    std::unordered_set<std::string> kingFind(kingCards.begin(), kingCards.end());

    // std::unordered_set<std::string> heartFind(heartCards.begin(), heartCards.end());
    // std::unordered_set<std::string> diamondFind(diamondCards.begin(), diamondCards.end());
    // std::unordered_set<std::string> clubFind(clubCards.begin(), clubCards.end());
    // std::unordered_set<std::string> spadeFind(spadeCards.begin(), spadeCards.end());
    // std::unordered_set<std::string> quatrefoil(quatrefoilCards.begin(), quatrefoilCards.end());

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

                for (int i{0}; i < handDeck.size(); ++i) {

                    // Random card selector (1/5)
                    unsigned random1 = std::chrono::system_clock::now().time_since_epoch().count();
                    std::mt19937 mEngine(random1);
                    std::uniform_int_distribution<std::size_t> dist(0, pokerCards.size() - 1);
                    handDeck[0] = pokerCards[dist(mEngine)];

                    //Random card selector (2/5)
                    unsigned random2 = std::chrono::system_clock::now().time_since_epoch().count();
                    std::mt19937 mEngine2(random2);
                    std::uniform_int_distribution<std::size_t> dist2(0, pokerCards.size() - 1);
                    handDeck[1] = pokerCards[dist2(mEngine2)];

                    //Random card selector (3/5)
                    unsigned random3 = std::chrono::system_clock::now().time_since_epoch().count();
                    std::mt19937 mEngine3(random3);
                    std::uniform_int_distribution<std::size_t> dist3(0, pokerCards.size() - 1);
                    handDeck[2] = pokerCards[dist3(mEngine3)];

                    //Random card selector (4/5)
                    unsigned random4 = std::chrono::system_clock::now().time_since_epoch().count();
                    std::mt19937 mEngine4(random4);
                    std::uniform_int_distribution<std::size_t> dist4(0, pokerCards.size() - 1);
                    handDeck[3] = pokerCards[dist4(mEngine4)];

                    // Random card selector (5/5)
                    unsigned random5 = std::chrono::system_clock::now().time_since_epoch().count();
                    std::mt19937 mEngine5(random5);
                    std::uniform_int_distribution<std::size_t> dist5(0, pokerCards.size() - 1);
                    handDeck[4] = pokerCards[dist5(mEngine5)];

                    std::vector<std::vector<std::string>> blockBreak;
                    size_t max_height = 0;

                    // Split all the block into lines
                    for (const auto& block : handDeck) {

                        auto lines = lineSplitting(block);

                        if (lines.size() > max_height) {
                            max_height = lines.size();
                        }
                        blockBreak.push_back(lines);
                    }

                    // Displayed poker hand
                    for (size_t i{0}; i < max_height; ++i) {
                        for (const auto& lines : blockBreak) {

                            if (i < lines.size()) {
                                std::cout << lines[0] << lines[1] << lines[2] << lines[3] << lines[4] << " ";
                            }
                            else {
                                std::cout << "      ";
                            }
                        }
                        std::cout << "\n";
                    }

                    turn += 1;
                    std::cout << "Swap cards or pass? \nS = Swap \nP = Pass\n\n";
                    std::cin >> swap;

                    if (swap == 's' || swap == 'S') {

                        std::cout << "example: (card1, card2, card3, card4, card5) in lowercase\n";
                        std::cout << "Change 'card1'? (Y/N)\n";
                        std::cin >> cardChange1; 
                        turn += 1;

                        if (cardChange1 == 'y' || cardChange1 == 'Y') {
                            // Change cards ('mEngine' is a specific card that will shuffle)
                            std::shuffle(handDeck.begin(), handDeck.end(), mEngine);
                        }
                        else if (cardChange1 != 'n' && cardChange1 != 'y' && cardChange1 != 'N' && cardChange1 != 'Y') {
                            std::cout << "Not a valid option! (Y/N)\n";
                            std::cin >> cardChange1;
                        }
                        else {
                            std::cout << "Change 'card2'? (Y/N)\n";
                            std::cin >> cardChange2;

                            if (cardChange2 == 'y' || cardChange2 == 'Y') {
                                std::shuffle(handDeck.begin(), handDeck.end(), mEngine2);
                            }
                            else if (cardChange2 != 'n' && cardChange2 != 'y' && cardChange2 != 'N' && cardChange2 != 'Y') {
                                std::cout << "Not a valid option! (Y/N)\n";
                                std::cin >> cardChange2;
                            }
                            else {
                                std::cout << "Change 'card3'? (Y/N)\n";
                                std::cin >> cardChange3;

                                if (cardChange3 == 'y' && cardChange3 == 'Y') {
                                    std::shuffle(handDeck.begin(), handDeck.end(), mEngine3);
                                }
                                else if (cardChange3 != 'n' && cardChange3 != 'y' && cardChange3 != 'N' && cardChange3 != 'Y') {
                                    std::cout << "Not a valid option! (Y/N)\n";
                                    std::cin >> cardChange3;
                                }
                                else {
                                    std::cout << "Change 'card4'? (Y/N)\n";
                                    std::cin >> cardChange4;

                                    if (cardChange4 == 'y' || cardChange4 == 'Y') {
                                        std::shuffle(handDeck.begin(), handDeck.end(), mEngine4);                          
                                    }
                                    else if (cardChange4 != 'n' && cardChange4 != 'y') {
                                        std::cout << "Not a valid option! (Y/N)\n";
                                        std::cin >> cardChange4;
                                    }
                                    else {
                                        std::cout << "Change 'card5'? (Y/N)\n";
                                        std::cin >> cardChange5;

                                        if (cardChange5 == 'y' || cardChange5 == 'Y') {
                                            std::shuffle(handDeck.begin(), handDeck.end(), mEngine5);
                                        }
                                        else if (cardChange5 != 'n' && cardChange5 != 'y' && cardChange5 != 'N' && cardChange5 != 'Y') {
                                            std::cout << "Not a valid option! (Y/N)\n";
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
                    else if (swap == 'p' || swap == 'P') {

                        turn++;

                        for (const std::string& card : handDeck) {

                            // TWO PAIRS
                            if (twoFind.count(card)) {

                                twoFound++;

                                if (threeFind.count(card)) {

                                    threeFound++;
                                }

                                if (twoFound == 2 && threeFound == 2) {

                                    std::cout << twoPairCard.first << "\n";
                                    creditReward = creditBet * twoPairCard.second;
                                    std::cout << "You have recieved $" << creditReward << "\n";
                                    credit += creditReward;

                                    // testing...
                                    std::cout << "twoFound: " << twoFound << "\n";
                                    std::cout << "threeFound: " << threeFound << "\n";
                                }
                            }

                            // PAIR 
                            else if (twoFind.count(card)) {

                                twoFound++;

                                if (twoFound == 2) {

                                    std::cout << pairCard.first << "\n";
                                
                                    creditReward = creditBet * pairCard.second;
                                    std::cout << "You have recieved $" << creditReward << "\n";
                                    credit += creditReward;

                                    // testing...
                                    std::cout << "twoFound: " << twoFound << "\n";
                                }
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

                    }

                    else {
                        std::cout << "That input is not valid. Please select 's' to swap your deck or 'p' if you are satisfy with your deck.\n";
                        std::cin >> swap;
                    }

                    break;
                }
            }
            // If user input less than 100 credits
            else {
                std::cout << "You need to bet at least 100 credits to play poker\n";
                std::cin >> creditBet;
            }
        }

        // Determine a poker hand rank based on user's cards
        // FIVE OF A KIND
        if (h2 != handDeck.end()) {

            std::cout << fiveKindCard.first << "\n"; // 'Pair.first' will write the KEY of the pair function
            
            creditReward = creditBet * fiveKindCard.second; // 'Pair.second' will write the VALUE of the pair function
            std::cout << "You have recieved $" << creditReward << "\n";
            credit += creditReward; // Total amount of rewards will add to the user's balance
        }
        // ROYAL FLUSH
        else if (h10 != handDeck.end() && hJack != handDeck.end() && hQueen != handDeck.end() && hKing != handDeck.end() && hAce != handDeck.end()) {

            std::cout << royalFlushCard.first << "\n";

            creditReward = creditBet * royalFlushCard.second;
            std::cout << "You have recieved $" << creditReward << "\n";
            credit += creditReward;
        }
        // STRAIGHT FLUSH
        else if (hAce != handDeck.end() && h2 != handDeck.end() && h3 != handDeck.end() && h4 != handDeck.end() && h5 != handDeck.end()) {

            std::cout << straightFlushCard.first << "\n";
            
            creditReward = creditBet * straightFlushCard.second;
            std::cout << "You have recieved $" << creditReward << "\n";
            credit += creditReward;
        }
        // FOUR OF A KIND
        else if (h2 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() && s2 != handDeck.end()) {

            std::cout << fourKindCard.first << "\n";
            
            creditReward = creditBet * fourKindCard.second;
            std::cout << "You have recieved $" << creditReward << "\n";
            credit += creditReward;
        }
        // FULL HOUSE
        else if (h2 != handDeck.end() && d2 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end()) {
            
            std::cout << fullHouseCard.first << "\n";
            
            creditReward = creditBet * fullHouseCard.second;
            std::cout << "You have recieved $" << creditReward << "\n";
            credit += creditReward;
        }
        // FLUSH
        else if (h2 != handDeck.end() && h4 != handDeck.end() && h5 != handDeck.end() && h7 != handDeck.end() && h8 != handDeck.end()) {
            
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
    }
}