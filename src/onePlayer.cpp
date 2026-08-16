#include <iostream>
#include <string>
#include <vector>
#include <cmath>

#include <mylib/poker.h>

void Poker::onePlayer(double& credit, size_t creditRequirement) {

    char quit = 'q';
    size_t turn = 0;
    double creditBet;
    double creditReward;
    size_t points = 0;
    char cardChange1, cardChange2, cardChange3, cardChange4, cardChange5;
    char swap = ' ';

    // Automactically incrementing one of the variables once poker card matched with cards in hash-set array
    bool pairFound = false;

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
    std::unordered_map<char, size_t> aceFind;
    std::unordered_map<char, size_t> twoFind;
    std::unordered_map<char, size_t> threeFind;
    std::unordered_map<char, size_t> fourFind;
    std::unordered_map<char, size_t> fiveFind;
    std::unordered_map<char, size_t> sixFind;
    std::unordered_map<char, size_t> sevenFind;
    std::unordered_map<char, size_t> eightFind;
    std::unordered_map<char, size_t> nineFind;
    std::unordered_map<std::string, size_t> tenFind;
    std::unordered_map<char, size_t> jackFind;
    std::unordered_map<std::string, size_t> queenFind;
    std::unordered_map<char, size_t> kingFind;

    std::unordered_map<char, size_t> heartFind;
    std::unordered_map<char, size_t> diamondFind;
    std::unordered_map<char, size_t> clubFind;
    std::unordered_map<char, size_t> spadeFind;
    std::unordered_map<char, size_t> quatrefoilFind;

    
    std::unordered_map<std::string, size_t> cardFind;

    size_t twoSum = 0;
    size_t threeSum = 0;
    size_t fourSum = 0;
    size_t fiveSum = 0;
    size_t sixSum = 0;
    size_t sevenSum = 0;
    size_t eightSum = 0;
    size_t nineSum = 0;
    size_t tenSum = 0;
    size_t jackSum = 0;
    size_t queenSum = 0;
    size_t kingSum = 0;
    size_t aceSum = 0;
    size_t heartSum = 0;
    size_t diamondSum = 0;
    size_t clubSum = 0;
    size_t spadeSum = 0;
    size_t quatrefoilSum = 0;

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

                    std::vector<std::stringstream> buffers, buffers2;
                    buffers.reserve(handDeck.size());

                    // Poker hand from 1-5 will move to stringstream vector for line break
                    for (const auto& a : handDeck) {
                        buffers.emplace_back(a);
                    }

                    bool bashLines = true;
                    bool bashLines2 = true;

                    // Displaying poker hand horizontally instead of vertically
                    while (bashLines) {

                        bashLines = false;

                        for (auto& a : buffers) {
                            std::string line;

                            if (std::getline(a, line)) {
                                // Print poker hand from 1-5
                                std::cout << line << " ";
                                bashLines = true;
                            }
                        }
                        // A new line will start over to the top of ACSII art poker card to the right
                        if (bashLines) {
                            std::cout << "\n";
                        }
                    }


                    turn++;
                    std::cout << "Swap cards or pass? \nS = Swap \nP = Pass\n\n";
                    std::cin >> swap;

                    if (swap == 's' || swap == 'S') {

                        std::cout << "example: (card1, card2, card3, card4, card5) in lowercase\n";
                        std::cout << "Change 'card1'? (Y/N)\n";
                        std::cin >> cardChange1; 
                        turn++;

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

                        handDeck = {handDeck[0], handDeck[1], handDeck[2], handDeck[3], handDeck[4]};

                        for (const char& card : handDeck[0]) {

                            if (twoFind.find('2') != twoFind.end()) {
                                twoFind[card]++;

                                twoSum += twoFind[card];
                            }

                            if (threeFind.find('3') != threeFind.end()) {
                                threeFind[card]++;

                                threeSum += threeFind[card];
                            }

                            if (fourFind.find('4') != fourFind.end()) {
                                fourFind[card]++;

                                fourSum += fourFind[card];
                            }

                            if (fiveFind.find('5') != fiveFind.end()) {
                                fiveFind[card]++;

                                fiveSum += fiveFind[card];
                            }

                            if (sixFind.find('6') != sixFind.end()) {
                                sixFind[card]++;

                                sixSum += sixFind[card];
                            }

                            if (sevenFind.find('7') != sevenFind.end()) {
                                sevenFind[card]++;

                                sevenSum += sevenFind[card];
                            }

                            if (eightFind.find('8') != eightFind.end()) {
                                eightFind[card]++;

                                eightSum += eightFind[card];
                            }

                            if (nineFind.find('9') != nineFind.end()) {
                                nineFind[card]++;

                                nineSum += nineFind[card];
                            }

                            if (jackFind.find('J') != jackFind.end()) {
                                jackFind[card]++;

                                jackSum += jackFind[card];
                            }

                            if (kingFind.find('K') != kingFind.end()) {
                                kingFind[card]++;

                                kingSum += kingFind[card];
                            }

                            if (aceFind.find('A') != aceFind.end()) {
                                aceFind[card]++;

                                aceSum += aceFind[card];
                            }

                            if (heartFind.find('H') != heartFind.end()) {
                                heartFind[card]++;

                                heartSum += heartFind[card];
                            }

                            if (diamondFind.find('D') != diamondFind.end()) {
                                diamondFind[card]++;

                                diamondSum += diamondFind[card];
                            }

                            if (clubFind.find('C') != clubFind.end()) {
                                clubFind[card]++;

                                clubSum += clubFind[card];
                            }

                            if (spadeFind.find('S') != spadeFind.end()) {
                                spadeFind[card]++;

                                spadeSum += spadeFind[card];
                            }

                            if (quatrefoilFind.find('Q') != quatrefoilFind.end()) {
                                quatrefoilFind[card]++;

                                quatrefoilSum += quatrefoilFind[card];
                            }

                        }

                        for (const std::string& card : handDeck) {

                            if (tenFind.find("10") != tenFind.end()) {
                                tenFind[card]++;

                                tenSum += tenFind[card];
                            }

                            if (queenFind.find("QU") != queenFind.end()) {
                                queenFind[card]++;

                                queenSum += queenFind[card];
                            }

                        }

                        // PAIR
                        if (twoSum == 2 || threeSum == 2 || fourSum == 2 || fiveSum == 2 || sixSum == 2 || sevenSum == 2 || eightSum == 2 ||
                            nineSum == 2 || tenSum == 2 || jackSum == 2 || queenSum == 2 || kingSum == 2 || aceSum == 2) {

                            std::cout << pairCard.first << "\n";
                        
                            creditReward = creditBet * pairCard.second;
                            std::cout << "You have recieved $" << creditReward << "\n";
                            credit += creditReward;
                        }

                        // HIGH CARD
                        else {
                            
                            // testing...
                            std::cout << "2 " << twoSum << "\n";
                            std::cout << "3 " << threeSum << "\n";
                            std::cout << "4 " << fourSum << "\n";
                            std::cout << "5 " << fiveSum << "\n";
                            std::cout << "6 " << sixSum << "\n";
                            std::cout << "7 " << sevenSum << "\n";
                            std::cout << "8 " << eightSum << "\n";
                            std::cout << "9 " << nineSum << "\n";
                            std::cout << "10 " << tenSum << "\n";
                            std::cout << "J " << jackSum << "\n";
                            std::cout << "Q " << queenSum << "\n";
                            std::cout << "K " << kingSum << "\n";
                            std::cout << "A " << aceSum << "\n";
                            std::cout << highCard.first << "\n";

                            creditReward = creditBet * highCard.second;
                            std::cout << "You have recieved $" << creditReward << "\n";
                            credit += creditReward;
                        }
                        buffers2.reserve(handDeck.size());

                        for (const auto& a : handDeck) {
                            buffers2.emplace_back(a);
                        }

                        while (bashLines2) {

                            bashLines2 = false;

                            for (auto& a : buffers2) {
                                std::string line;

                                if (std::getline(a, line)) {
                                    std::cout << line << " ";
                                    
                                    bashLines2 = true;
                                }
                            }
                            
                            if (bashLines2) {
                                std::cout << "\n";
                            }

                            
                        }
                        
                        std::cout << "Check your credit balance by pressing '3' as a menu option.\n";
                        std::cout << "Press '6' to open the menu.\n";
                        break;
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
        // if (h2 != handDeck.end()) {

        //     std::cout << fiveKindCard.first << "\n"; // 'Pair.first' will write the KEY of the pair function
            
        //     creditReward = creditBet * fiveKindCard.second; // 'Pair.second' will write the VALUE of the pair function
        //     std::cout << "You have recieved $" << creditReward << "\n";
        //     credit += creditReward; // Total amount of rewards will add to the user's balance
        // }
        // // ROYAL FLUSH
        // else if (h10 != handDeck.end() && hJack != handDeck.end() && hQueen != handDeck.end() && hKing != handDeck.end() && hAce != handDeck.end()) {

        //     std::cout << royalFlushCard.first << "\n";

        //     creditReward = creditBet * royalFlushCard.second;
        //     std::cout << "You have recieved $" << creditReward << "\n";
        //     credit += creditReward;
        // }
        // // STRAIGHT FLUSH
        // else if (hAce != handDeck.end() && h2 != handDeck.end() && h3 != handDeck.end() && h4 != handDeck.end() && h5 != handDeck.end()) {

        //     std::cout << straightFlushCard.first << "\n";
            
        //     creditReward = creditBet * straightFlushCard.second;
        //     std::cout << "You have recieved $" << creditReward << "\n";
        //     credit += creditReward;
        // }
        // // FOUR OF A KIND
        // else if (h2 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end() && s2 != handDeck.end()) {

        //     std::cout << fourKindCard.first << "\n";
            
        //     creditReward = creditBet * fourKindCard.second;
        //     std::cout << "You have recieved $" << creditReward << "\n";
        //     credit += creditReward;
        // }
        // // FULL HOUSE
        // else if (h2 != handDeck.end() && d2 != handDeck.end() && h3 != handDeck.end() && d3 != handDeck.end() && c3 != handDeck.end()) {
            
        //     std::cout << fullHouseCard.first << "\n";
            
        //     creditReward = creditBet * fullHouseCard.second;
        //     std::cout << "You have recieved $" << creditReward << "\n";
        //     credit += creditReward;
        // }
        // // FLUSH
        // else if (h2 != handDeck.end() && h4 != handDeck.end() && h5 != handDeck.end() && h7 != handDeck.end() && h8 != handDeck.end()) {
            
        //     std::cout << flushCard.first << "\n";
            
        //     creditReward = creditBet * flushCard.second;
        //     std::cout << "You have recieved $" << creditReward << "\n";
        //     credit += creditReward;
        // }
        // // STRAIGHT
        // else if (h2 != handDeck.end() && d3 != handDeck.end() && c4 != handDeck.end() && s5 != handDeck.end() && q6 != handDeck.end()) {
            
        //     std::cout << straightCard.first << "\n";
            
        //     creditReward = creditBet * straightCard.second;
        //     std::cout << "You have recieved $" << creditReward << "\n";
        //     credit += creditReward;
        // }
        // // THREE OF A KIND
        // else if (h2 != handDeck.end() && d2 != handDeck.end() && c2 != handDeck.end()) {
            
        //     std::cout << threeKindCard.first << "\n";
            
        //     creditReward = creditBet * threeKindCard.second;
        //     std::cout << "You have recieved $" << creditReward << "\n";
        //     credit += creditReward;
        // }
    }
}