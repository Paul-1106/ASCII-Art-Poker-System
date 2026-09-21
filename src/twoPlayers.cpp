#include <iostream>
#include <string>
#include <vector>
#include <cmath>

#include <mylib/poker.h>
#include <mylib/pOnePoker.h>
#include <mylib/pTwoPoker.h>

void Poker::twoPlayers(std::size_t& points, std::size_t& points2) {

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

    std::size_t turn1 = 0;
    std::size_t turn2 = 0;

    while (turn1 < 2) {

        points = 0;
        pokerOneLink->player1(points);
    }

    while (turn2 < 2) {

        points2 = 0;
        pokerTwoLink->player2(points2);
    }
}

int PlayerOnePoker::player1(std::size_t& points) {

    char swap;
    char cardChange;
    PlayerTwoPoker* playerTwo;
    
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

    std::vector<std::string> handDeck1{5}; // for player one
    std::vector<std::string> handDeck2{5}; // for player two

    // Comparing each hand deck to points

    /*
    *********************************************
    Each poker hand rank have score sections:

    Five of a Kind = Score Section: 2,000 (20XX)
    Royal Flush = Score Section: 1,800 (18XX)
    Straight Flush = Score Section: 1,500 (15XX)
    Four of a Kind = Score Section: 1,200 (12XX)
    Full House = Score Section: 1,000 (10XX)
    Flush = Score Section: 800 (8XX)
    Straight = Score Section: 500 (5XX)
    Three of a Kind = Score Section: 300 (3XX)
    Two Pairs = Score Section: 200 (2XX)
    Pair = Score Section: 100 (1XX)
    High Card = Score Section: 1 (XX + 1)
    */
    std::pair<std::string, std::size_t> highCard = {"[HIGH CARD]", 1};
    std::pair<std::string, std::size_t> pairCard = {"[PAIR]", 100};
    std::pair<std::string, std::size_t> twoPairCard = {"[TWO PAIRS]", 200};
    std::pair<std::string, std::size_t> threeKindCard = {"[THREE OF A KIND]", 300};
    std::pair<std::string, std::size_t> straightCard = {"[STRAIGHT]", 500};
    std::pair<std::string, std::size_t> flushCard = {"[FLUSH]", 800};
    std::pair<std::string, std::size_t> fullHouseCard = {"[FULL HOUSE]", 1000};
    std::pair<std::string, std::size_t> fourKindCard = {"[FOUR OF A KIND]", 1200};
    std::pair<std::string, std::size_t> straightFlushCard = {"[STRAIGHT FLUSH]", 1500};
    std::pair<std::string, std::size_t> royalFlushCard = {"[ROYAL FLUSH]", 1800};
    std::pair<std::string, std::size_t> fiveKindCard = {"[FIVE OF A KIND]", 2000}; 

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
    std::unordered_map<char, size_t> tenFind;
    std::unordered_map<char, size_t> jackFind;
    std::unordered_map<char, size_t> queenFind;
    std::unordered_map<char, size_t> kingFind;

    std::unordered_map<char, size_t> heartFind;
    std::unordered_map<char, size_t> diamondFind;
    std::unordered_map<char, size_t> clubFind;
    std::unordered_map<char, size_t> spadeFind;
    std::unordered_map<char, size_t> quatrefoilFind;

    // Finds a character of each cards in poker hand to add up the frequency 
    char aceChar = 'A';
    char twoChar = '2';
    char threeChar = '3';
    char fourChar = '4';
    char fiveChar = '5';
    char sixChar = '6';
    char sevenChar = '7';
    char eightChar = '8';
    char nineChar = '9';
    char tenChar = '0';
    char jackChar = 'J';
    char queenChar = 'Q';
    char kingChar = 'K';
    char heartChar = 'H';
    char diamondChar = 'D';
    char clubChar = 'C';
    char spadeChar = 'S';
    char quatrefoilChar = 'U'; 

    // All frequency char variables that are added will be push to integer variable for better code quality
    std::size_t aceFreq = 0;
    std::size_t twoFreq = 0;
    std::size_t threeFreq = 0;
    std::size_t fourFreq = 0;
    std::size_t fiveFreq = 0;
    std::size_t sixFreq = 0;
    std::size_t sevenFreq = 0;
    std::size_t eightFreq = 0;
    std::size_t nineFreq = 0;
    std::size_t tenFreq = 0;
    std::size_t jackFreq = 0;
    std::size_t queenFreq = 0;
    std::size_t kingFreq = 0;
    std::size_t heartFreq = 0;
    std::size_t diamondFreq = 0;
    std::size_t clubFreq = 0;
    std::size_t spadeFreq = 0;
    std::size_t quatrefoilFreq = 0;

    std::cout << "[PLAYER 1]\n";
    std::cout << "Player 1's turn!\n";

    for (int i{0}; i < handDeck1.size(); ++i) {

        std::size_t turn = 0;

        while (turn <= 2) {

            // Random card selector (1/5)
            unsigned random1 = std::chrono::system_clock::now().time_since_epoch().count();
            std::mt19937 mEngine(random1);
            std::uniform_int_distribution<std::size_t> dist(0, pokerCards.size() - 1);
            handDeck1[i] = pokerCards[dist(mEngine)];

            //Random card selector (2/5)
            unsigned random2 = std::chrono::system_clock::now().time_since_epoch().count();
            std::mt19937 mEngine2(random2);
            std::uniform_int_distribution<std::size_t> dist2(0, pokerCards.size() - 1);
            handDeck1[i + 1] = pokerCards[dist2(mEngine2)];

            //Random card selector (3/5)
            unsigned random3 = std::chrono::system_clock::now().time_since_epoch().count();
            std::mt19937 mEngine3(random3);
            std::uniform_int_distribution<std::size_t> dist3(0, pokerCards.size() - 1);
            handDeck1[i + 2] = pokerCards[dist3(mEngine3)];

            //Random card selector (4/5)
            unsigned random4 = std::chrono::system_clock::now().time_since_epoch().count();
            std::mt19937 mEngine4(random4);
            std::uniform_int_distribution<std::size_t> dist4(0, pokerCards.size() - 1);
            handDeck1[i + 3] = pokerCards[dist4(mEngine4)];

            // Random card selector (5/5)
            unsigned random5 = std::chrono::system_clock::now().time_since_epoch().count();
            std::mt19937 mEngine5(random5);
            std::uniform_int_distribution<std::size_t> dist5(0, pokerCards.size() - 1);
            handDeck1[i + 4] = pokerCards[dist5(mEngine5)];   

            std::vector<std::stringstream> horizonLine1, horizonLine2, horizonLine3;
            horizonLine1.reserve(handDeck1.size());

            for (const auto& a : handDeck1) {
                horizonLine1.emplace_back(a);
            }

            bool bashLines1 = true;
            bool bashLines2 = true;
            bool bashLines3 = true;

            while (bashLines1) {

                bashLines1 = false;
                
                for (auto& a : horizonLine1) {
                    std::string line;

                    if (std::getline(a, line)) {

                        std::cout << line << " ";
                        bashLines1 = true;
                    }
                }

                if (bashLines1) {
                    std::cout << "\n";
                }
            }

            // Count the frequency for card #1
            for (char& card : handDeck1[0]) {

                twoFind[card]++;
                threeFind[card]++;
                fourFind[card]++;
                fiveFind[card]++;
                sixFind[card]++;
                sevenFind[card]++;
                eightFind[card]++;
                nineFind[card]++;
                tenFind[card]++;
                jackFind[card]++;
                queenFind[card]++;
                kingFind[card]++;
                aceFind[card]++;
                heartFind[card]++;
                diamondFind[card]++;
                clubFind[card]++;
                spadeFind[card]++;
                quatrefoilFind[card]++;
            }

            // Count the frequency for card #2
            for (char& card : handDeck1[1]) {

                twoFind[card]++;
                threeFind[card]++;
                fourFind[card]++;
                fiveFind[card]++;
                sixFind[card]++;
                sevenFind[card]++;
                eightFind[card]++;
                nineFind[card]++;
                tenFind[card]++;
                jackFind[card]++;
                queenFind[card]++;
                kingFind[card]++;
                aceFind[card]++;
                heartFind[card]++;
                diamondFind[card]++;
                clubFind[card]++;
                spadeFind[card]++;
                quatrefoilFind[card]++;
            }

            // Count the frequency for card #3
            for (char& card : handDeck1[2]) {

                twoFind[card]++;
                threeFind[card]++;
                fourFind[card]++;
                fiveFind[card]++;
                sixFind[card]++;
                sevenFind[card]++;
                eightFind[card]++;
                nineFind[card]++;
                tenFind[card]++;
                jackFind[card]++;
                queenFind[card]++;
                kingFind[card]++;
                aceFind[card]++;
                heartFind[card]++;
                diamondFind[card]++;
                clubFind[card]++;
                spadeFind[card]++;
                quatrefoilFind[card]++;
            }
                    
            // Count the frequency for card #4
            for (char& card : handDeck1[3]) {

                twoFind[card]++;
                threeFind[card]++;
                fourFind[card]++;
                fiveFind[card]++;
                sixFind[card]++;
                sevenFind[card]++;
                eightFind[card]++;
                nineFind[card]++;
                tenFind[card]++;
                jackFind[card]++;
                queenFind[card]++;
                kingFind[card]++;
                aceFind[card]++;
                heartFind[card]++;
                diamondFind[card]++;
                clubFind[card]++;
                spadeFind[card]++;
                quatrefoilFind[card]++;
            }

            // Count the frequency for card #5
            for (char& card : handDeck1[4]) {

                twoFind[card]++;
                threeFind[card]++;
                fourFind[card]++;
                fiveFind[card]++;
                sixFind[card]++;
                sevenFind[card]++;
                eightFind[card]++;
                nineFind[card]++;
                tenFind[card]++;
                jackFind[card]++;
                queenFind[card]++;
                kingFind[card]++;
                aceFind[card]++;
                heartFind[card]++;
                diamondFind[card]++;
                clubFind[card]++;
                spadeFind[card]++;
                quatrefoilFind[card]++;
            }

            // Stores all the frequencies into each integer variable
            twoFreq = twoFind[twoChar];
            threeFreq = threeFind[threeChar];
            fourFreq = fourFind[fourChar];
            fiveFreq = fiveFind[fiveChar];
            sixFreq = sixFind[sixChar];
            sevenFreq = sevenFind[sevenChar];
            eightFreq = eightFind[eightChar];
            nineFreq = nineFind[nineChar];
            tenFreq = tenFind[tenChar];
            jackFreq = jackFind[jackChar];
            queenFreq = queenFind[queenChar];
            kingFreq = kingFind[kingChar];
            aceFreq = aceFind[aceChar];
            heartFreq = heartFind[heartChar];
            diamondFreq = diamondFind[diamondChar];
            clubFreq = clubFind[clubChar];
            spadeFreq = spadeFind[spadeChar];
            quatrefoilFreq = quatrefoilFind[quatrefoilChar];                   

            std::cout << "Swap cards or pass? \nS = Swap \nP = Pass\n\n";
            std::cin >> swap;

            if (swap == 's' || swap == 'S') {

                std::size_t cardNum = 1; // increment continously until it passes the last card number
                handDeck1[i] = handDeck1[0];

                // erase and ignore the poker hand rank that is unmodified when selecting the swap option 
                twoFreq = 0;
                threeFreq = 0;
                fourFreq = 0;
                fiveFreq = 0;
                sixFreq = 0;
                sevenFreq = 0;
                eightFreq = 0;
                nineFreq = 0;
                tenFreq = 0;
                jackFreq = 0;
                queenFreq = 0;
                kingFreq = 0;
                aceFreq = 0;
                heartFreq = 0;
                diamondFreq = 0;
                clubFreq = 0;
                spadeFreq = 0;
                quatrefoilFreq = 0;

                twoFind[twoChar] = 0;
                threeFind[threeChar] = 0;
                fourFind[fourChar] = 0;
                fiveFind[fiveChar] = 0;
                sixFind[sixChar] = 0;
                sevenFind[sevenChar] = 0;
                eightFind[eightChar] = 0;
                nineFind[nineChar] = 0;
                tenFind[tenChar] = 0;
                jackFind[jackChar] = 0;
                queenFind[queenChar] = 0;
                kingFind[kingChar] = 0;
                aceFind[aceChar] = 0;
                heartFind[heartChar] = 0;
                diamondFind[diamondChar] = 0;
                clubFind[clubChar] = 0;
                spadeFind[spadeChar] = 0;
                quatrefoilFind[quatrefoilChar] = 0;   

                // Edit card no.1
                while (cardNum < 2) { 

                    std::cout << "[CARD " << cardNum << "]" << "\n";
                    std::cout << "Change card " << cardNum << "?\n";
                    std::cin >> cardChange;

                    // swap the first card of the poker hand
                    if (cardChange == 'y' || cardChange == 'Y') {

                        std::random_device mEngine6;
                        std::mt19937 shuf(mEngine6());

                        std::uniform_int_distribution<std::size_t> dist6(0, pokerCards.size() - 1);
                        handDeck1[i] = pokerCards[dist6(mEngine6)];
                        cardNum++;
                    }

                    // ignore the first card of the poker hand
                    else if (cardChange == 'n' || cardChange == 'N') {
                        cardNum++;
                    }

                    // repeat the command until the input option is valid
                    else {
                        std::cout << "[INVALID OPTION] Select 'Y' or 'N' as an option.\n";
                    }
                
                }

                // Edit card no.2 
                while (cardNum < 3) {

                    std::cout << "[CARD " << cardNum << "]" << "\n";
                    std::cout << "Change card " << cardNum << "?\n";
                    std::cin >> cardChange;

                    if (cardChange == 'y' || cardChange == 'Y') {

                        std::random_device mEngine7;
                        std::mt19937 shuf(mEngine7());

                        std::uniform_int_distribution<std::size_t> dist7(0, pokerCards.size() - 1);
                        handDeck1[i + 1] = pokerCards[dist7(mEngine7)];
                        cardNum++;
                    }

                    else if (cardChange == 'n' || cardChange == 'N') {
                        cardNum++;
                    }

                    else {
                        std::cout << "[INVALID OPTION] Select 'Y' or 'N' as an option.\n";
                    }                                
                }

                // Edit card no.3
                while (cardNum < 4) {

                    std::cout << "[CARD " << cardNum << "]" << "\n";
                    std::cout << "Change card " << cardNum << "?\n";
                    std::cin >> cardChange;                                

                    if (cardChange == 'y' || cardChange == 'Y') {

                        std::random_device mEngine8;
                        std::mt19937 shuf(mEngine8());

                        std::uniform_int_distribution<std::size_t> dist8(0, pokerCards.size() - 1);
                        handDeck1[i + 2] = pokerCards[dist8(mEngine8)];
                        cardNum++;
                    }

                    else if (cardChange == 'n' || cardChange == 'N') {
                        cardNum++;
                    }

                    else {
                        std::cout << "[INVALID OPTION] Select 'Y' or 'N' as an option.\n";
                    }     
                }

                // Edit card no.4
                while (cardNum < 5) {

                    std::cout << "[CARD " << cardNum << "]" << "\n";
                    std::cout << "Change card " << cardNum << "?\n";
                    std::cin >> cardChange;

                    if (cardChange == 'y' || cardChange == 'Y') {

                        std::random_device mEngine9;
                        std::mt19937 shuf(mEngine9());

                        std::uniform_int_distribution<std::size_t> dist9(0, pokerCards.size() - 1);
                        handDeck1[i + 3] = pokerCards[dist9(mEngine9)];
                        cardNum++;
                    }

                    else if (cardChange == 'n' || cardChange == 'N') {
                        cardNum++;
                    }

                    else {
                        std::cout << "[INVALID OPTION] Select 'Y' or 'N' as an option.\n";
                    }                                 
                }

                // Edit card no.5
                while (cardNum < 6) {

                    std::cout << "[CARD " << cardNum << "]" << "\n";
                    std::cout << "Change card " << cardNum << "?\n";
                    std::cin >> cardChange;

                    if (cardChange == 'y' || cardChange == 'Y') {

                        std::random_device mEngine10;
                        std::mt19937 shuf(mEngine10());

                        std::uniform_int_distribution<std::size_t> dist10(0, pokerCards.size() - 1);
                        handDeck1[i + 4] = pokerCards[dist10(mEngine10)];
                        cardNum++;
                    }

                    else if (cardChange == 'n' || cardChange == 'N') {
                        cardNum++;
                    }

                    else {
                        std::cout << "[INVALID OPTION] Select 'Y' or 'N' as an option.\n";
                    }  
            
                }

                for (char& card : handDeck1[0]) {

                    twoFind[card]++;
                    threeFind[card]++;
                    fourFind[card]++;
                    fiveFind[card]++;
                    sixFind[card]++;
                    sevenFind[card]++;
                    eightFind[card]++;
                    nineFind[card]++;
                    tenFind[card]++;
                    jackFind[card]++;
                    queenFind[card]++;
                    kingFind[card]++;
                    aceFind[card]++;
                    heartFind[card]++;
                    diamondFind[card]++;
                    clubFind[card]++;
                    spadeFind[card]++;
                    quatrefoilFind[card]++;                           
                }

                for (char& card : handDeck1[1]) {

                    twoFind[card]++;
                    threeFind[card]++;
                    fourFind[card]++;
                    fiveFind[card]++;
                    sixFind[card]++;
                    sevenFind[card]++;
                    eightFind[card]++;
                    nineFind[card]++;
                    tenFind[card]++;
                    jackFind[card]++;
                    queenFind[card]++;
                    kingFind[card]++;
                    aceFind[card]++;
                    heartFind[card]++;
                    diamondFind[card]++;
                    clubFind[card]++;
                    spadeFind[card]++;
                    quatrefoilFind[card]++;                           
                }

                for (char& card : handDeck1[2]) {

                    twoFind[card]++;
                    threeFind[card]++;
                    fourFind[card]++;
                    fiveFind[card]++;
                    sixFind[card]++;
                    sevenFind[card]++;
                    eightFind[card]++;
                    nineFind[card]++;
                    tenFind[card]++;
                    jackFind[card]++;
                    queenFind[card]++;
                    kingFind[card]++;
                    aceFind[card]++;
                    heartFind[card]++;
                    diamondFind[card]++;
                    clubFind[card]++;
                    spadeFind[card]++;
                    quatrefoilFind[card]++;  
                }

                for (char& card : handDeck1[3]) {

                    twoFind[card]++;
                    threeFind[card]++;
                    fourFind[card]++;
                    fiveFind[card]++;
                    sixFind[card]++;
                    sevenFind[card]++;
                    eightFind[card]++;
                    nineFind[card]++;
                    tenFind[card]++;
                    jackFind[card]++;
                    queenFind[card]++;
                    kingFind[card]++;
                    aceFind[card]++;
                    heartFind[card]++;
                    diamondFind[card]++;
                    clubFind[card]++;
                    spadeFind[card]++;
                    quatrefoilFind[card]++; 
                }

                for (char& card : handDeck1[4]) {

                    twoFind[card]++;
                    threeFind[card]++;
                    fourFind[card]++;
                    fiveFind[card]++;
                    sixFind[card]++;
                    sevenFind[card]++;
                    eightFind[card]++;
                    nineFind[card]++;
                    tenFind[card]++;
                    jackFind[card]++;
                    queenFind[card]++;
                    kingFind[card]++;
                    aceFind[card]++;
                    heartFind[card]++;
                    diamondFind[card]++;
                    clubFind[card]++;
                    spadeFind[card]++;
                    quatrefoilFind[card]++; 
                }

                twoFreq = twoFind[twoChar];
                threeFreq = threeFind[threeChar];
                fourFreq = fourFind[fourChar];
                fiveFreq = fiveFind[fiveChar];
                sixFreq = sixFind[sixChar];
                sevenFreq = sevenFind[sevenChar];
                eightFreq = eightFind[eightChar];
                nineFreq = nineFind[nineChar];
                tenFreq = tenFind[tenChar];
                jackFreq = jackFind[jackChar];
                queenFreq = queenFind[queenChar];
                kingFreq = kingFind[kingChar];
                aceFreq = aceFind[aceChar];
                heartFreq = heartFind[heartChar];
                diamondFreq = diamondFind[diamondChar];
                clubFreq = clubFind[clubChar];
                spadeFreq = spadeFind[spadeChar];
                quatrefoilFreq = quatrefoilFind[quatrefoilChar];

                // Determine a poker hand rank based on user's poker hand

                // FIVE OF A KIND
                if (aceFreq == 5 || twoFreq == 5 || threeFreq == 5 || fourFreq == 5 || fiveFreq == 5 || sixFreq == 5 || sevenFreq == 5 || eightFreq == 5 ||
                    nineFreq == 5 || tenFreq == 5 || jackFreq == 5 || queenFreq == 5 || kingFreq == 5) {

                    std::cout << fiveKindCard.first << "\n";

                    points += fiveKindCard.second;
                    std::cout << "Your score section: " << points << "\n";
                    std::cout << "Your highest card: " << "___";

                }

                // ROYAL FLUSH
                else if (tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && kingFreq == 1 && aceFreq == 1 && heartFreq == 5 ||
                    tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && kingFreq == 1 && aceFreq == 1 && diamondFreq == 5 ||
                    tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && kingFreq == 1 && aceFreq == 1 && clubFreq == 5 ||
                    tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && kingFreq == 1 && aceFreq == 1 && spadeFreq == 5 ||
                    tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && kingFreq == 1 && aceFreq == 1 && quatrefoilFreq == 5) {

                    std::cout << royalFlushCard.first << "\n";

                    points += royalFlushCard.second;
                    std::cout << "Your score section: " << points << "\n";
                    std::cout << "Your highest card: " << "___";

                }

                // STRAIGHT FLUSH
                else if (aceFreq == 1 && twoFreq == 1 && threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 && heartFreq == 5 ||
                    aceFreq == 1 && twoFreq == 1 && threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 && diamondFreq == 5 ||
                    aceFreq == 1 && twoFreq == 1 && threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 && clubFreq == 5 ||
                    aceFreq == 1 && twoFreq == 1 && threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 && spadeFreq == 5 ||
                    aceFreq == 1 && twoFreq == 1 && threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 && quatrefoilFreq == 5 ||     
                    twoFreq == 1 && threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && heartFreq == 5 ||
                    twoFreq == 1 && threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && diamondFreq == 5 ||
                    twoFreq == 1 && threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && clubFreq == 5 ||
                    twoFreq == 1 && threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && spadeFreq == 5 ||
                    twoFreq == 1 && threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && quatrefoilFreq == 5 || 
                    threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 && heartFreq == 5 ||
                    threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 && diamondFreq == 5 ||
                    threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 && clubFreq == 5 ||
                    threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 && spadeFreq == 5 ||
                    threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 && quatrefoilFreq == 5 ||
                    fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 && heartFreq == 5 ||
                    fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 && diamondFreq == 5 ||
                    fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 && clubFreq == 5 ||
                    fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 && spadeFreq == 5 ||
                    fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 && quatrefoilFreq == 5 ||     
                    fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && heartFreq == 5 ||
                    fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && diamondFreq == 5 ||
                    fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && clubFreq == 5 ||
                    fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && spadeFreq == 5 ||
                    fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && quatrefoilFreq == 5 || 
                    sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && tenFreq == 1 && heartFreq == 5 ||
                    sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && tenFreq == 1 && diamondFreq == 5 ||
                    sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && tenFreq == 1 && clubFreq == 5 ||
                    sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && tenFreq == 1 && spadeFreq == 5 ||
                    sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && tenFreq == 1 && quatrefoilFreq == 5 ||
                    sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && tenFreq == 1 && jackFreq == 1 && heartFreq == 5 ||
                    sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && tenFreq == 1 && jackFreq == 1 && diamondFreq == 5 ||
                    sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && tenFreq == 1 && jackFreq == 1 && clubFreq == 5 ||
                    sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && tenFreq == 1 && jackFreq == 1 && spadeFreq == 5 ||
                    sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && tenFreq == 1 && jackFreq == 1 && quatrefoilFreq == 5 || 
                    eightFreq == 1 && nineFreq == 1 && tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && heartFreq == 5 ||
                    eightFreq == 1 && nineFreq == 1 && tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && diamondFreq == 5 ||
                    eightFreq == 1 && nineFreq == 1 && tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && clubFreq == 5 ||
                    eightFreq == 1 && nineFreq == 1 && tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && spadeFreq == 5 ||
                    eightFreq == 1 && nineFreq == 1 && tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && quatrefoilFreq == 5 || 
                    nineFreq == 1 && tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && kingFreq == 1 && heartFreq == 5 ||
                    nineFreq == 1 && tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && kingFreq == 1 && diamondFreq == 5 ||
                    nineFreq == 1 && tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && kingFreq == 1 && clubFreq == 5 ||
                    nineFreq == 1 && tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && kingFreq == 1 && spadeFreq == 5 ||
                    nineFreq == 1 && tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && kingFreq == 1 && quatrefoilFreq == 5) {

                    std::cout << straightFlushCard.first << "\n";

                    points += straightFlushCard.second;
                    std::cout << "Your score section: " << points << "\n";
                    std::cout << "Your highest card: " << "___";

                }

                // FOUR OF A KIND
                else if (aceFreq == 4 || twoFreq == 4 || threeFreq == 4 || fourFreq == 4 || fiveFreq == 4 || sixFreq == 4 || sevenFreq == 4 || eightFreq == 4 ||
                    nineFreq == 4 || tenFreq == 4 || jackFreq == 4 || queenFreq == 4 || kingFreq == 4) {

                    std::cout << fourKindCard.first << "\n";

                    points += fourKindCard.second;
                    std::cout << "Your score section: " << points << "\n";
                    std::cout << "Your highest card: " << "___";
                }

                // FULL HOUSE
                else if (twoFreq == 2 && threeFreq == 3 || twoFreq == 2 && fourFreq == 3 || twoFreq == 2 && fiveFreq == 3 || twoFreq == 2 && sixFreq == 3 || // 1
                    twoFreq == 3 && threeFreq == 2 || twoFreq == 3 && fourFreq == 2 || twoFreq == 3 && fiveFreq == 2 || twoFreq == 3 && sixFreq == 2 || // 2
                    twoFreq == 2 && sevenFreq == 3 || twoFreq == 2 && eightFreq == 3 || twoFreq == 2 && nineFreq == 3 || twoFreq == 2 && tenFreq == 3 ||
                    twoFreq == 3 && sevenFreq == 2 || twoFreq == 3 && eightFreq == 2 || twoFreq == 3 && nineFreq == 2 || twoFreq == 3 && tenFreq == 2 ||
                    twoFreq == 2 && jackFreq == 3 || twoFreq == 2 && queenFreq == 3 || twoFreq == 2 && kingFreq == 3 || twoFreq == 2 && aceFreq == 3 ||
                    twoFreq == 3 && jackFreq == 2 || twoFreq == 3 && queenFreq == 2 || twoFreq == 3 && kingFreq == 2 || twoFreq == 3 && aceFreq == 2 ||
                    threeFreq == 2 && fourFreq == 3 || threeFreq == 2 && fiveFreq == 3 || threeFreq == 2 && sixFreq == 3 || threeFreq == 2 && sevenFreq == 3 ||
                    threeFreq == 3 && fourFreq == 2 || threeFreq == 3 && fiveFreq == 2 || threeFreq == 3 && sixFreq == 2 || threeFreq == 3 && sevenFreq == 2 ||
                    threeFreq == 2 && eightFreq == 3 || threeFreq == 2 && nineFreq == 3 || threeFreq == 2 && tenFreq == 3 || threeFreq == 2 && jackFreq == 3 ||
                    threeFreq == 3 && eightFreq == 2 || threeFreq == 3 && nineFreq == 2 || threeFreq == 3 && tenFreq == 2 || threeFreq == 3 && jackFreq == 2 || 
                    threeFreq == 2 && queenFreq == 3 || threeFreq == 2 && kingFreq == 3 || threeFreq == 2 && aceFreq == 3 || fourFreq == 2 && fiveFreq == 3 ||
                    threeFreq == 3 && queenFreq == 2 || threeFreq == 3 && kingFreq == 2 || threeFreq == 3 && aceFreq == 2 || fourFreq == 3 && fiveFreq == 2 ||
                    fourFreq == 2 && sixFreq == 3 || fourFreq == 2 && sevenFreq == 3 || fourFreq == 2 && eightFreq == 3 || fourFreq == 2 && nineFreq == 3 ||
                    fourFreq == 3 && sixFreq == 2 || fourFreq == 3 && sevenFreq == 2 || fourFreq == 3 && eightFreq == 2 || fourFreq == 3 && nineFreq == 2 ||
                    fourFreq == 2 && tenFreq == 3 || fourFreq == 2 && jackFreq == 3 || fourFreq == 2 && queenFreq == 3 || fourFreq == 2 && kingFreq == 3 ||
                    fourFreq == 3 && tenFreq == 2 || fourFreq == 3 && jackFreq == 2 || fourFreq == 3 && queenFreq == 2 || fourFreq == 3 && kingFreq == 2 ||
                    fourFreq == 2 && aceFreq == 3 || fiveFreq == 2 && sixFreq == 3 || fiveFreq == 2 && sevenFreq == 3 || fiveFreq == 2 && eightFreq == 3 ||
                    fourFreq == 3 && aceFreq == 2 || fiveFreq == 3 && sixFreq == 2 || fiveFreq == 3 && sevenFreq == 2 || fiveFreq == 3 && eightFreq == 2 ||
                    fiveFreq == 2 && nineFreq == 3 || fiveFreq == 2 && tenFreq == 3 || fiveFreq == 2 && jackFreq == 3 || fiveFreq == 2 && queenFreq == 3 ||
                    fiveFreq == 3 && nineFreq == 2 || fiveFreq == 3 && tenFreq == 2 || fiveFreq == 3 && jackFreq == 2 || fiveFreq == 3 && queenFreq == 2 ||
                    fiveFreq == 2 && kingFreq == 3 || fiveFreq == 2 && aceFreq == 3 || sixFreq == 2 && sevenFreq == 3 || sixFreq == 2 && eightFreq == 3 ||
                    fiveFreq == 3 && kingFreq == 2 || fiveFreq == 3 && aceFreq == 2 || sixFreq == 3 && sevenFreq == 2 || sixFreq == 3 && eightFreq == 2 ||
                    sixFreq == 2 && nineFreq == 3 || sixFreq == 2 && tenFreq == 3 || sixFreq == 2 && jackFreq == 3 || sixFreq == 2 && queenFreq == 3 ||
                    sixFreq == 3 && nineFreq == 2 || sixFreq == 3 && tenFreq == 2 || sixFreq == 3 && jackFreq == 2 || sixFreq == 3 && queenFreq == 2 ||
                    sixFreq == 2 && kingFreq == 3 || sixFreq == 2 && aceFreq == 3 || sevenFreq == 2 && eightFreq == 3 || sevenFreq == 2 && nineFreq == 3 ||
                    sixFreq == 3 && kingFreq == 2 || sixFreq == 3 && aceFreq == 2 || sevenFreq == 3 && eightFreq == 2 || sevenFreq == 3 && nineFreq == 2 ||
                    sevenFreq == 2 && tenFreq == 3 || sevenFreq == 2 && jackFreq == 3 || sevenFreq == 2 && queenFreq == 3 || sevenFreq == 2 && kingFreq == 3 ||
                    sevenFreq == 3 && tenFreq == 2 || sevenFreq == 3 && jackFreq == 2 || sevenFreq == 3 && queenFreq == 2 || sevenFreq == 3 && kingFreq == 2 ||
                    sevenFreq == 2 && aceFreq == 3 || eightFreq == 2 && nineFreq == 3 || eightFreq == 2 && tenFreq == 3 || eightFreq == 2 && jackFreq == 3 ||
                    sevenFreq == 3 && aceFreq == 2 || eightFreq == 3 && nineFreq == 2 || eightFreq == 3 && tenFreq == 2 || eightFreq == 3 && jackFreq == 2 ||
                    eightFreq == 2 && queenFreq == 3 || eightFreq == 2 && kingFreq == 3 || eightFreq == 2 && aceFreq == 3 || nineFreq == 2 && tenFreq == 3 ||
                    eightFreq == 3 && queenFreq == 2 || eightFreq == 3 && kingFreq == 2 || eightFreq == 3 && aceFreq == 2 || nineFreq == 3 && tenFreq == 2 ||
                    nineFreq == 2 && jackFreq == 3 || nineFreq == 2 && queenFreq == 3 || nineFreq == 2 && kingFreq == 3 || nineFreq == 2 && aceFreq == 3 ||
                    nineFreq == 3 && jackFreq == 2 || nineFreq == 3 && queenFreq == 2 || nineFreq == 3 && kingFreq == 2 || nineFreq == 3 && aceFreq == 2 ||
                    tenFreq == 2 && jackFreq == 3 || tenFreq == 2 && queenFreq == 3 || tenFreq == 2 && kingFreq == 3 || tenFreq == 2 && aceFreq == 3 ||
                    tenFreq == 3 && jackFreq == 2 || tenFreq == 3 && queenFreq == 2 || tenFreq == 3 && kingFreq == 2 || tenFreq == 3 && aceFreq == 2 ||
                    jackFreq == 2 && queenFreq == 3 || jackFreq == 2 && kingFreq == 3 || jackFreq == 2 && aceFreq == 3 || queenFreq == 2 && kingFreq == 3 ||
                    jackFreq == 3 && queenFreq == 2 || jackFreq == 3 && kingFreq == 2 || jackFreq == 3 && aceFreq == 2 || queenFreq == 3 && kingFreq == 2 || 
                    queenFreq == 2 && aceFreq == 3 || kingFreq == 2 && aceFreq == 3 || queenFreq == 3 && aceFreq == 2 || kingFreq == 3 && aceFreq == 2) {

                    std::cout << fullHouseCard.first << "\n";

                    points += fullHouseCard.second;
                    std::cout << "Your score section: " << points << "\n";
                    std::cout << "Your highest card: " << "___";

                }

                // FLUSH
                else if (heartFreq == 5 || diamondFreq == 5 || clubFreq == 5 || spadeFreq == 5 || quatrefoilFreq == 5) {

                    std::cout << flushCard.first << "\n";

                    points += flushCard.second;
                    std::cout << "Your score section: " << points << "\n";
                    std::cout << "Your highest card: " << "___";
                }

                // STRAIGHT
                else if (aceFreq == 1 && twoFreq == 1 && threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 || twoFreq == 1 && threeFreq == 1 && fourFreq == 1 && 
                    fiveFreq == 1 && sixFreq == 1 || threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 ||
                    fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 || fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 &&
                    eightFreq == 1 && nineFreq == 1 || sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && tenFreq == 1 ||
                    sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && tenFreq == 1 && jackFreq == 1 || eightFreq == 1 && nineFreq == 1 && tenFreq == 1 &&
                    jackFreq == 1 && queenFreq == 1 || nineFreq == 1 && tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && kingFreq == 1 || 
                    tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && kingFreq == 1 && aceFreq == 1) {

                    std::cout << straightCard.first << "\n";

                    points += straightCard.second;
                    std::cout << "Your score section: " << points << "\n";
                    std::cout << "Your highest card: " << "___";
                }

                // THREE OF A KIND
                else if (twoFreq == 3 || threeFreq == 3 || fourFreq == 3 || fiveFreq == 3 || sixFreq == 3 || sevenFreq == 3 || eightFreq == 3 || 
                    nineFreq == 3 || tenFreq == 3 || jackFreq == 3 || queenFreq == 3 || kingFreq == 3 || aceFreq == 3) {

                    std::cout << threeKindCard.first << "\n";

                    points += threeKindCard.second;
                    std::cout << "Your score section: " << points << "\n";
                    std::cout << "Your highest card: " << "___";
                }

                // TWO PAIRS
                else if (twoFreq == 2 && threeFreq == 2 || twoFreq == 2 && fourFreq == 2 || twoFreq == 2 && fiveFreq == 2 || twoFreq == 2 && sixFreq == 2 ||
                    twoFreq == 2 && sevenFreq == 2 || twoFreq == 2 && eightFreq == 2 || twoFreq == 2 && nineFreq == 2 || twoFreq == 2 && tenFreq == 2 ||
                    twoFreq == 2 && jackFreq == 2 || twoFreq == 2 && queenFreq == 2 || twoFreq == 2 && kingFreq == 2 || twoFreq == 2 && aceFreq == 2 ||
                    threeFreq == 2 && fourFreq == 2 || threeFreq == 2 && fiveFreq == 2 || threeFreq == 2 && sixFreq == 2 || threeFreq == 2 && sevenFreq == 2 ||
                    threeFreq == 2 && eightFreq == 2 || threeFreq == 2 && nineFreq == 2 || threeFreq == 2 && tenFreq == 2 || threeFreq == 2 && jackFreq == 2 || 
                    threeFreq == 2 && queenFreq == 2 || threeFreq == 2 && kingFreq == 2 || threeFreq == 2 && aceFreq == 2 || fourFreq == 2 && fiveFreq == 2 ||
                    fourFreq == 2 && sixFreq == 2 || fourFreq == 2 && sevenFreq == 2 || fourFreq == 2 && eightFreq == 2 || fourFreq == 2 && nineFreq == 2 ||
                    fourFreq == 2 && tenFreq == 2 || fourFreq == 2 && jackFreq == 2 || fourFreq == 2 && queenFreq == 2 || fourFreq == 2 && kingFreq == 2 ||
                    fourFreq == 2 && aceFreq == 2 || fiveFreq == 2 && sixFreq == 2 || fiveFreq == 2 && sevenFreq == 2 || fiveFreq == 2 && eightFreq == 2 ||
                    fiveFreq == 2 && nineFreq == 2 || fiveFreq == 2 && tenFreq == 2 || fiveFreq == 2 && jackFreq == 2 || fiveFreq == 2 && queenFreq == 2 ||
                    fiveFreq == 2 && kingFreq == 2 || fiveFreq == 2 && aceFreq == 2 || sixFreq == 2 && sevenFreq == 2 || sixFreq == 2 && eightFreq == 2 ||
                    sixFreq == 2 && nineFreq == 2 || sixFreq == 2 && tenFreq == 2 || sixFreq == 2 && jackFreq == 2 || sixFreq == 2 && queenFreq == 2 ||
                    sixFreq == 2 && kingFreq == 2 || sixFreq == 2 && aceFreq == 2 || sevenFreq == 2 && eightFreq == 2 || sevenFreq == 2 && nineFreq == 2 ||
                    sevenFreq == 2 && tenFreq == 2 || sevenFreq == 2 && jackFreq == 2 || sevenFreq == 2 && queenFreq == 2 || sevenFreq == 2 && kingFreq == 2 ||
                    sevenFreq == 2 && aceFreq == 2 || eightFreq == 2 && nineFreq == 2 || eightFreq == 2 && tenFreq == 2 || eightFreq == 2 && jackFreq == 2 ||
                    eightFreq == 2 && queenFreq == 2 || eightFreq == 2 && kingFreq == 2 || eightFreq == 2 && aceFreq == 2 || nineFreq == 2 && tenFreq == 2 ||
                    nineFreq == 2 && jackFreq == 2 || nineFreq == 2 && queenFreq == 2 || nineFreq == 2 && kingFreq == 2 || nineFreq == 2 && aceFreq == 2 ||
                    tenFreq == 2 && jackFreq == 2 || tenFreq == 2 && queenFreq == 2 || tenFreq == 2 && kingFreq == 2 || tenFreq == 2 && aceFreq == 2 ||
                    jackFreq == 2 && queenFreq == 2 || jackFreq == 2 && kingFreq == 2 || jackFreq == 2 && aceFreq == 2 || queenFreq == 2 && kingFreq == 2 || 
                    queenFreq == 2 && aceFreq == 2 || kingFreq == 2 && aceFreq == 2) {

                    std::cout << twoPairCard.first << "\n";

                    points += twoPairCard.second;
                    std::cout << "Your score section: " << points << "\n";
                    std::cout << "Your highest card: " << "___";
                }

                // PAIR
                else if (twoFreq == 2 || threeFreq == 2 || fourFreq == 2 || fiveFreq == 2 || sixFreq == 2 || sevenFreq == 2 || eightFreq == 2 || 
                        nineFreq == 2 || tenFreq == 2 || jackFreq == 2 || queenFreq == 2 || kingFreq == 2 || aceFreq == 2) {

                    std::cout << pairCard.first << "\n";
                
                    points += twoPairCard.second;
                    std::cout << "Your score section: " << points << "\n";
                    std::cout << "Your highest card: " << "___";
                }

                // HIGH CARD
                else {
                    
                    std::cout << highCard.first << "\n";

                    points += highCard.second;
                    std::cout << "Your score section: " << points << "\n";
                    std::cout << "Your highest card: " << "___";
                }

                handDeck1 = {handDeck1[0], handDeck1[1], handDeck1[2], handDeck1[3], handDeck1[4]};
                horizonLine3.reserve(handDeck1.size());

                for (const auto& a : handDeck1) {
                    horizonLine3.emplace_back(a);
                }

                while (bashLines3) {

                    bashLines3 = false;

                    for (auto& a : horizonLine3) {
                        std::string line;

                        if (std::getline(a, line)) {
                            std::cout << line << " ";
                            
                            bashLines3 = true;
                        }
                    }
                    
                    if (bashLines3) {
                        std::cout << "\n";
                    }   
                }
                
                std::cout << "Check your credit balance by pressing '3' as a menu option.\n";
                std::cout << "Press '6' to open the menu.\n";
                turn++;
                break;
            }

            else if (swap == 'p' || swap == 'P') {

                // Determine a poker hand rank based on user's poker hand

                // FIVE OF A KIND
                if (aceFreq == 5 || twoFreq == 5 || threeFreq == 5 || fourFreq == 5 || fiveFreq == 5 || sixFreq == 5 || sevenFreq == 5 || eightFreq == 5 ||
                    nineFreq == 5 || tenFreq == 5 || jackFreq == 5 || queenFreq == 5 || kingFreq == 5) {

                    std::cout << fiveKindCard.first << "\n";

                    points += fiveKindCard.second;
                    std::cout << "Your score section: " << points << "\n";
                    std::cout << "Your highest card: " << "___" << "\n";

                }

                // ROYAL FLUSH
                else if (tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && kingFreq == 1 && aceFreq == 1 && heartFreq == 5 ||
                    tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && kingFreq == 1 && aceFreq == 1 && diamondFreq == 5 ||
                    tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && kingFreq == 1 && aceFreq == 1 && clubFreq == 5 ||
                    tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && kingFreq == 1 && aceFreq == 1 && spadeFreq == 5 ||
                    tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && kingFreq == 1 && aceFreq == 1 && quatrefoilFreq == 5) {

                    std::cout << royalFlushCard.first << "\n";

                    points += royalFlushCard.second;
                    std::cout << "Your score section: " << points << "\n";
                    std::cout << "Your highest card: " << "___";

                }

                // STRAIGHT FLUSH
                else if (aceFreq == 1 && twoFreq == 1 && threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 && heartFreq == 5 ||
                    aceFreq == 1 && twoFreq == 1 && threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 && diamondFreq == 5 ||
                    aceFreq == 1 && twoFreq == 1 && threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 && clubFreq == 5 ||
                    aceFreq == 1 && twoFreq == 1 && threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 && spadeFreq == 5 ||
                    aceFreq == 1 && twoFreq == 1 && threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 && quatrefoilFreq == 5 ||     
                    twoFreq == 1 && threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && heartFreq == 5 ||
                    twoFreq == 1 && threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && diamondFreq == 5 ||
                    twoFreq == 1 && threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && clubFreq == 5 ||
                    twoFreq == 1 && threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && spadeFreq == 5 ||
                    twoFreq == 1 && threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && quatrefoilFreq == 5 || 
                    threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 && heartFreq == 5 ||
                    threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 && diamondFreq == 5 ||
                    threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 && clubFreq == 5 ||
                    threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 && spadeFreq == 5 ||
                    threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 && quatrefoilFreq == 5 ||
                    fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 && heartFreq == 5 ||
                    fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 && diamondFreq == 5 ||
                    fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 && clubFreq == 5 ||
                    fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 && spadeFreq == 5 ||
                    fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 && quatrefoilFreq == 5 ||     
                    fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && heartFreq == 5 ||
                    fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && diamondFreq == 5 ||
                    fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && clubFreq == 5 ||
                    fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && spadeFreq == 5 ||
                    fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && quatrefoilFreq == 5 || 
                    sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && tenFreq == 1 && heartFreq == 5 ||
                    sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && tenFreq == 1 && diamondFreq == 5 ||
                    sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && tenFreq == 1 && clubFreq == 5 ||
                    sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && tenFreq == 1 && spadeFreq == 5 ||
                    sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && tenFreq == 1 && quatrefoilFreq == 5 ||
                    sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && tenFreq == 1 && jackFreq == 1 && heartFreq == 5 ||
                    sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && tenFreq == 1 && jackFreq == 1 && diamondFreq == 5 ||
                    sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && tenFreq == 1 && jackFreq == 1 && clubFreq == 5 ||
                    sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && tenFreq == 1 && jackFreq == 1 && spadeFreq == 5 ||
                    sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && tenFreq == 1 && jackFreq == 1 && quatrefoilFreq == 5 || 
                    eightFreq == 1 && nineFreq == 1 && tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && heartFreq == 5 ||
                    eightFreq == 1 && nineFreq == 1 && tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && diamondFreq == 5 ||
                    eightFreq == 1 && nineFreq == 1 && tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && clubFreq == 5 ||
                    eightFreq == 1 && nineFreq == 1 && tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && spadeFreq == 5 ||
                    eightFreq == 1 && nineFreq == 1 && tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && quatrefoilFreq == 5 || 
                    nineFreq == 1 && tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && kingFreq == 1 && heartFreq == 5 ||
                    nineFreq == 1 && tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && kingFreq == 1 && diamondFreq == 5 ||
                    nineFreq == 1 && tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && kingFreq == 1 && clubFreq == 5 ||
                    nineFreq == 1 && tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && kingFreq == 1 && spadeFreq == 5 ||
                    nineFreq == 1 && tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && kingFreq == 1 && quatrefoilFreq == 5) {

                    std::cout << straightFlushCard.first << "\n";

                    points += straightFlushCard.second;
                    std::cout << "Your score section: " << points << "\n";
                    std::cout << "Your highest card: " << "___" << "\n";

                }

                // FOUR OF A KIND
                else if (aceFreq == 4 || twoFreq == 4 || threeFreq == 4 || fourFreq == 4 || fiveFreq == 4 || sixFreq == 4 || sevenFreq == 4 || eightFreq == 4 ||
                    nineFreq == 4 || tenFreq == 4 || jackFreq == 4 || queenFreq == 4 || kingFreq == 4) {

                    std::cout << fourKindCard.first << "\n";

                    points += fourKindCard.second;
                    std::cout << "Your score section: " << points << "\n";
                    std::cout << "Your highest card: " << "___" << "\n"; 
                }

                // FULL HOUSE
                else if (twoFreq == 2 && threeFreq == 3 || twoFreq == 2 && fourFreq == 3 || twoFreq == 2 && fiveFreq == 3 || twoFreq == 2 && sixFreq == 3 || // 1
                    twoFreq == 3 && threeFreq == 2 || twoFreq == 3 && fourFreq == 2 || twoFreq == 3 && fiveFreq == 2 || twoFreq == 3 && sixFreq == 2 || // 2
                    twoFreq == 2 && sevenFreq == 3 || twoFreq == 2 && eightFreq == 3 || twoFreq == 2 && nineFreq == 3 || twoFreq == 2 && tenFreq == 3 ||
                    twoFreq == 3 && sevenFreq == 2 || twoFreq == 3 && eightFreq == 2 || twoFreq == 3 && nineFreq == 2 || twoFreq == 3 && tenFreq == 2 ||
                    twoFreq == 2 && jackFreq == 3 || twoFreq == 2 && queenFreq == 3 || twoFreq == 2 && kingFreq == 3 || twoFreq == 2 && aceFreq == 3 ||
                    twoFreq == 3 && jackFreq == 2 || twoFreq == 3 && queenFreq == 2 || twoFreq == 3 && kingFreq == 2 || twoFreq == 3 && aceFreq == 2 ||
                    threeFreq == 2 && fourFreq == 3 || threeFreq == 2 && fiveFreq == 3 || threeFreq == 2 && sixFreq == 3 || threeFreq == 2 && sevenFreq == 3 ||
                    threeFreq == 3 && fourFreq == 2 || threeFreq == 3 && fiveFreq == 2 || threeFreq == 3 && sixFreq == 2 || threeFreq == 3 && sevenFreq == 2 ||
                    threeFreq == 2 && eightFreq == 3 || threeFreq == 2 && nineFreq == 3 || threeFreq == 2 && tenFreq == 3 || threeFreq == 2 && jackFreq == 3 ||
                    threeFreq == 3 && eightFreq == 2 || threeFreq == 3 && nineFreq == 2 || threeFreq == 3 && tenFreq == 2 || threeFreq == 3 && jackFreq == 2 || 
                    threeFreq == 2 && queenFreq == 3 || threeFreq == 2 && kingFreq == 3 || threeFreq == 2 && aceFreq == 3 || fourFreq == 2 && fiveFreq == 3 ||
                    threeFreq == 3 && queenFreq == 2 || threeFreq == 3 && kingFreq == 2 || threeFreq == 3 && aceFreq == 2 || fourFreq == 3 && fiveFreq == 2 ||
                    fourFreq == 2 && sixFreq == 3 || fourFreq == 2 && sevenFreq == 3 || fourFreq == 2 && eightFreq == 3 || fourFreq == 2 && nineFreq == 3 ||
                    fourFreq == 3 && sixFreq == 2 || fourFreq == 3 && sevenFreq == 2 || fourFreq == 3 && eightFreq == 2 || fourFreq == 3 && nineFreq == 2 ||
                    fourFreq == 2 && tenFreq == 3 || fourFreq == 2 && jackFreq == 3 || fourFreq == 2 && queenFreq == 3 || fourFreq == 2 && kingFreq == 3 ||
                    fourFreq == 3 && tenFreq == 2 || fourFreq == 3 && jackFreq == 2 || fourFreq == 3 && queenFreq == 2 || fourFreq == 3 && kingFreq == 2 ||
                    fourFreq == 2 && aceFreq == 3 || fiveFreq == 2 && sixFreq == 3 || fiveFreq == 2 && sevenFreq == 3 || fiveFreq == 2 && eightFreq == 3 ||
                    fourFreq == 3 && aceFreq == 2 || fiveFreq == 3 && sixFreq == 2 || fiveFreq == 3 && sevenFreq == 2 || fiveFreq == 3 && eightFreq == 2 ||
                    fiveFreq == 2 && nineFreq == 3 || fiveFreq == 2 && tenFreq == 3 || fiveFreq == 2 && jackFreq == 3 || fiveFreq == 2 && queenFreq == 3 ||
                    fiveFreq == 3 && nineFreq == 2 || fiveFreq == 3 && tenFreq == 2 || fiveFreq == 3 && jackFreq == 2 || fiveFreq == 3 && queenFreq == 2 ||
                    fiveFreq == 2 && kingFreq == 3 || fiveFreq == 2 && aceFreq == 3 || sixFreq == 2 && sevenFreq == 3 || sixFreq == 2 && eightFreq == 3 ||
                    fiveFreq == 3 && kingFreq == 2 || fiveFreq == 3 && aceFreq == 2 || sixFreq == 3 && sevenFreq == 2 || sixFreq == 3 && eightFreq == 2 ||
                    sixFreq == 2 && nineFreq == 3 || sixFreq == 2 && tenFreq == 3 || sixFreq == 2 && jackFreq == 3 || sixFreq == 2 && queenFreq == 3 ||
                    sixFreq == 3 && nineFreq == 2 || sixFreq == 3 && tenFreq == 2 || sixFreq == 3 && jackFreq == 2 || sixFreq == 3 && queenFreq == 2 ||
                    sixFreq == 2 && kingFreq == 3 || sixFreq == 2 && aceFreq == 3 || sevenFreq == 2 && eightFreq == 3 || sevenFreq == 2 && nineFreq == 3 ||
                    sixFreq == 3 && kingFreq == 2 || sixFreq == 3 && aceFreq == 2 || sevenFreq == 3 && eightFreq == 2 || sevenFreq == 3 && nineFreq == 2 ||
                    sevenFreq == 2 && tenFreq == 3 || sevenFreq == 2 && jackFreq == 3 || sevenFreq == 2 && queenFreq == 3 || sevenFreq == 2 && kingFreq == 3 ||
                    sevenFreq == 3 && tenFreq == 2 || sevenFreq == 3 && jackFreq == 2 || sevenFreq == 3 && queenFreq == 2 || sevenFreq == 3 && kingFreq == 2 ||
                    sevenFreq == 2 && aceFreq == 3 || eightFreq == 2 && nineFreq == 3 || eightFreq == 2 && tenFreq == 3 || eightFreq == 2 && jackFreq == 3 ||
                    sevenFreq == 3 && aceFreq == 2 || eightFreq == 3 && nineFreq == 2 || eightFreq == 3 && tenFreq == 2 || eightFreq == 3 && jackFreq == 2 ||
                    eightFreq == 2 && queenFreq == 3 || eightFreq == 2 && kingFreq == 3 || eightFreq == 2 && aceFreq == 3 || nineFreq == 2 && tenFreq == 3 ||
                    eightFreq == 3 && queenFreq == 2 || eightFreq == 3 && kingFreq == 2 || eightFreq == 3 && aceFreq == 2 || nineFreq == 3 && tenFreq == 2 ||
                    nineFreq == 2 && jackFreq == 3 || nineFreq == 2 && queenFreq == 3 || nineFreq == 2 && kingFreq == 3 || nineFreq == 2 && aceFreq == 3 ||
                    nineFreq == 3 && jackFreq == 2 || nineFreq == 3 && queenFreq == 2 || nineFreq == 3 && kingFreq == 2 || nineFreq == 3 && aceFreq == 2 ||
                    tenFreq == 2 && jackFreq == 3 || tenFreq == 2 && queenFreq == 3 || tenFreq == 2 && kingFreq == 3 || tenFreq == 2 && aceFreq == 3 ||
                    tenFreq == 3 && jackFreq == 2 || tenFreq == 3 && queenFreq == 2 || tenFreq == 3 && kingFreq == 2 || tenFreq == 3 && aceFreq == 2 ||
                    jackFreq == 2 && queenFreq == 3 || jackFreq == 2 && kingFreq == 3 || jackFreq == 2 && aceFreq == 3 || queenFreq == 2 && kingFreq == 3 ||
                    jackFreq == 3 && queenFreq == 2 || jackFreq == 3 && kingFreq == 2 || jackFreq == 3 && aceFreq == 2 || queenFreq == 3 && kingFreq == 2 || 
                    queenFreq == 2 && aceFreq == 3 || kingFreq == 2 && aceFreq == 3 || queenFreq == 3 && aceFreq == 2 || kingFreq == 3 && aceFreq == 2) {

                    std::cout << fullHouseCard.first << "\n";

                    points += fullHouseCard.second;
                    std::cout << "Your score section: " << points << "\n";
                    std::cout << "Your highest card: " << "___" << "\n";
                }

                // FLUSH
                else if (heartFreq == 5 || diamondFreq == 5 || clubFreq == 5 || spadeFreq == 5 || quatrefoilFreq == 5) {

                    std::cout << flushCard.first << "\n";

                    points += flushCard.second;
                    std::cout << "Your score section: " << points << "\n";
                    std::cout << "Your highest card: " << "___" << "\n";
                }

                // STRAIGHT
                else if (aceFreq == 1 && twoFreq == 1 && threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 || twoFreq == 1 && threeFreq == 1 && fourFreq == 1 && 
                    fiveFreq == 1 && sixFreq == 1 || threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 ||
                    fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 || fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 &&
                    eightFreq == 1 && nineFreq == 1 || sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && tenFreq == 1 ||
                    sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && tenFreq == 1 && jackFreq == 1 || eightFreq == 1 && nineFreq == 1 && tenFreq == 1 &&
                    jackFreq == 1 && queenFreq == 1 || nineFreq == 1 && tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && kingFreq == 1 || 
                    tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && kingFreq == 1 && aceFreq == 1) {

                    std::cout << straightCard.first << "\n";

                    points += straightCard.second;
                    std::cout << "Your score section: " << points << "\n";
                    std::cout << "Your highest card: " << "___" << "\n";
                }

                // THREE OF A KIND
                else if (twoFreq == 3 || threeFreq == 3 || fourFreq == 3 || fiveFreq == 3 || sixFreq == 3 || sevenFreq == 3 || eightFreq == 3 || 
                    nineFreq == 3 || tenFreq == 3 || jackFreq == 3 || queenFreq == 3 || kingFreq == 3 || aceFreq == 3) {

                    std::cout << threeKindCard.first << "\n";

                    points += threeKindCard.second;
                    std::cout << "Your score section: " << points << "\n";
                    std::cout << "Your highest card: " << "___" << "\n";
                }

                // TWO PAIRS
                else if (twoFreq == 2 && threeFreq == 2 || twoFreq == 2 && fourFreq == 2 || twoFreq == 2 && fiveFreq == 2 || twoFreq == 2 && sixFreq == 2 ||
                    twoFreq == 2 && sevenFreq == 2 || twoFreq == 2 && eightFreq == 2 || twoFreq == 2 && nineFreq == 2 || twoFreq == 2 && tenFreq == 2 ||
                    twoFreq == 2 && jackFreq == 2 || twoFreq == 2 && queenFreq == 2 || twoFreq == 2 && kingFreq == 2 || twoFreq == 2 && aceFreq == 2 ||
                    threeFreq == 2 && fourFreq == 2 || threeFreq == 2 && fiveFreq == 2 || threeFreq == 2 && sixFreq == 2 || threeFreq == 2 && sevenFreq == 2 ||
                    threeFreq == 2 && eightFreq == 2 || threeFreq == 2 && nineFreq == 2 || threeFreq == 2 && tenFreq == 2 || threeFreq == 2 && jackFreq == 2 || 
                    threeFreq == 2 && queenFreq == 2 || threeFreq == 2 && kingFreq == 2 || threeFreq == 2 && aceFreq == 2 || fourFreq == 2 && fiveFreq == 2 ||
                    fourFreq == 2 && sixFreq == 2 || fourFreq == 2 && sevenFreq == 2 || fourFreq == 2 && eightFreq == 2 || fourFreq == 2 && nineFreq == 2 ||
                    fourFreq == 2 && tenFreq == 2 || fourFreq == 2 && jackFreq == 2 || fourFreq == 2 && queenFreq == 2 || fourFreq == 2 && kingFreq == 2 ||
                    fourFreq == 2 && aceFreq == 2 || fiveFreq == 2 && sixFreq == 2 || fiveFreq == 2 && sevenFreq == 2 || fiveFreq == 2 && eightFreq == 2 ||
                    fiveFreq == 2 && nineFreq == 2 || fiveFreq == 2 && tenFreq == 2 || fiveFreq == 2 && jackFreq == 2 || fiveFreq == 2 && queenFreq == 2 ||
                    fiveFreq == 2 && kingFreq == 2 || fiveFreq == 2 && aceFreq == 2 || sixFreq == 2 && sevenFreq == 2 || sixFreq == 2 && eightFreq == 2 ||
                    sixFreq == 2 && nineFreq == 2 || sixFreq == 2 && tenFreq == 2 || sixFreq == 2 && jackFreq == 2 || sixFreq == 2 && queenFreq == 2 ||
                    sixFreq == 2 && kingFreq == 2 || sixFreq == 2 && aceFreq == 2 || sevenFreq == 2 && eightFreq == 2 || sevenFreq == 2 && nineFreq == 2 ||
                    sevenFreq == 2 && tenFreq == 2 || sevenFreq == 2 && jackFreq == 2 || sevenFreq == 2 && queenFreq == 2 || sevenFreq == 2 && kingFreq == 2 ||
                    sevenFreq == 2 && aceFreq == 2 || eightFreq == 2 && nineFreq == 2 || eightFreq == 2 && tenFreq == 2 || eightFreq == 2 && jackFreq == 2 ||
                    eightFreq == 2 && queenFreq == 2 || eightFreq == 2 && kingFreq == 2 || eightFreq == 2 && aceFreq == 2 || nineFreq == 2 && tenFreq == 2 ||
                    nineFreq == 2 && jackFreq == 2 || nineFreq == 2 && queenFreq == 2 || nineFreq == 2 && kingFreq == 2 || nineFreq == 2 && aceFreq == 2 ||
                    tenFreq == 2 && jackFreq == 2 || tenFreq == 2 && queenFreq == 2 || tenFreq == 2 && kingFreq == 2 || tenFreq == 2 && aceFreq == 2 ||
                    jackFreq == 2 && queenFreq == 2 || jackFreq == 2 && kingFreq == 2 || jackFreq == 2 && aceFreq == 2 || queenFreq == 2 && kingFreq == 2 || 
                    queenFreq == 2 && aceFreq == 2 || kingFreq == 2 && aceFreq == 2) {

                    std::cout << twoPairCard.first << "\n";

                    points += twoPairCard.second;
                    std::cout << "Your score section: " << points << "\n";
                    std::cout << "Your highest card: " << "___" << "\n";
                }

                // PAIR
                else if (twoFreq == 2 || threeFreq == 2 || fourFreq == 2 || fiveFreq == 2 || sixFreq == 2 || sevenFreq == 2 || eightFreq == 2 || 
                        nineFreq == 2 || tenFreq == 2 || jackFreq == 2 || queenFreq == 2 || kingFreq == 2 || aceFreq == 2) {

                    std::cout << pairCard.first << "\n";
                
                    points += pairCard.second;
                    std::cout << "Your score section: " << points << "\n";
                    std::cout << "Your highest card: " << "___" << "\n";
                }

                // HIGH CARD
                else {
                    
                    std::cout << highCard.first << "\n";

                    points += highCard.second;
                    std::cout << "Your score section: " << points << "\n";
                    std::cout << "Your highest card: " << "___" << "\n";
                }

                horizonLine2.reserve(handDeck1.size());

                for (const auto& a : handDeck1) {
                    horizonLine2.emplace_back(a);
                }

                while (bashLines2) {

                    bashLines2 = false;

                    for (auto& a : horizonLine2) {
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

                turn++;
                break;
            }
        }
    }
    playerTwo->player2(points); 
    return points;
};

int PlayerTwoPoker::player2(std::size_t& points2) {

    char swap;
    char cardChange;
    Poker* pokerResult;
    
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

    std::vector<std::string> handDeck2{5}; // for player two

    // Comparing each hand deck to points

    /*
    *********************************************
    Each poker hand rank have score sections:

    Five of a Kind = Score Section: 2,000 (20XX)
    Royal Flush = Score Section: 1,800 (18XX)
    Straight Flush = Score Section: 1,500 (15XX)
    Four of a Kind = Score Section: 1,200 (12XX)
    Full House = Score Section: 1,000 (10XX)
    Flush = Score Section: 800 (8XX)
    Straight = Score Section: 500 (5XX)
    Three of a Kind = Score Section: 300 (3XX)
    Two Pairs = Score Section: 200 (2XX)
    Pair = Score Section: 100 (1XX)
    High Card = Score Section: 1 (XX + 1)
    */
    std::pair<std::string, std::size_t> highCard = {"[HIGH CARD]", 1};
    std::pair<std::string, std::size_t> pairCard = {"[PAIR]", 100};
    std::pair<std::string, std::size_t> twoPairCard = {"[TWO PAIRS]", 200};
    std::pair<std::string, std::size_t> threeKindCard = {"[THREE OF A KIND]", 300};
    std::pair<std::string, std::size_t> straightCard = {"[STRAIGHT]", 500};
    std::pair<std::string, std::size_t> flushCard = {"[FLUSH]", 800};
    std::pair<std::string, std::size_t> fullHouseCard = {"[FULL HOUSE]", 1000};
    std::pair<std::string, std::size_t> fourKindCard = {"[FOUR OF A KIND]", 1200};
    std::pair<std::string, std::size_t> straightFlushCard = {"[STRAIGHT FLUSH]", 1500};
    std::pair<std::string, std::size_t> royalFlushCard = {"[ROYAL FLUSH]", 1800};
    std::pair<std::string, std::size_t> fiveKindCard = {"[FIVE OF A KIND]", 2000}; 

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
    std::unordered_map<char, size_t> tenFind;
    std::unordered_map<char, size_t> jackFind;
    std::unordered_map<char, size_t> queenFind;
    std::unordered_map<char, size_t> kingFind;

    std::unordered_map<char, size_t> heartFind;
    std::unordered_map<char, size_t> diamondFind;
    std::unordered_map<char, size_t> clubFind;
    std::unordered_map<char, size_t> spadeFind;
    std::unordered_map<char, size_t> quatrefoilFind;

    // Finds a character of each cards in poker hand to add up the frequency 
    char aceChar = 'A';
    char twoChar = '2';
    char threeChar = '3';
    char fourChar = '4';
    char fiveChar = '5';
    char sixChar = '6';
    char sevenChar = '7';
    char eightChar = '8';
    char nineChar = '9';
    char tenChar = '0';
    char jackChar = 'J';
    char queenChar = 'Q';
    char kingChar = 'K';
    char heartChar = 'H';
    char diamondChar = 'D';
    char clubChar = 'C';
    char spadeChar = 'S';
    char quatrefoilChar = 'U'; 

    // All frequency char variables that are added will be push to integer variable for better code quality
    std::size_t aceFreq = 0;
    std::size_t twoFreq = 0;
    std::size_t threeFreq = 0;
    std::size_t fourFreq = 0;
    std::size_t fiveFreq = 0;
    std::size_t sixFreq = 0;
    std::size_t sevenFreq = 0;
    std::size_t eightFreq = 0;
    std::size_t nineFreq = 0;
    std::size_t tenFreq = 0;
    std::size_t jackFreq = 0;
    std::size_t queenFreq = 0;
    std::size_t kingFreq = 0;
    std::size_t heartFreq = 0;
    std::size_t diamondFreq = 0;
    std::size_t clubFreq = 0;
    std::size_t spadeFreq = 0;
    std::size_t quatrefoilFreq = 0;

    std::cout << "[PLAYER 1]\n";
    std::cout << "Player 1's turn!\n";

    for (int i{0}; i < handDeck2.size(); ++i) {

        std::size_t turn = 0;

        while (turn <= 2) {

            // Random card selector (1/5)
            unsigned random1 = std::chrono::system_clock::now().time_since_epoch().count();
            std::mt19937 mEngine(random1);
            std::uniform_int_distribution<std::size_t> dist(0, pokerCards.size() - 1);
            handDeck2[i] = pokerCards[dist(mEngine)];

            //Random card selector (2/5)
            unsigned random2 = std::chrono::system_clock::now().time_since_epoch().count();
            std::mt19937 mEngine2(random2);
            std::uniform_int_distribution<std::size_t> dist2(0, pokerCards.size() - 1);
            handDeck2[i + 1] = pokerCards[dist2(mEngine2)];

            //Random card selector (3/5)
            unsigned random3 = std::chrono::system_clock::now().time_since_epoch().count();
            std::mt19937 mEngine3(random3);
            std::uniform_int_distribution<std::size_t> dist3(0, pokerCards.size() - 1);
            handDeck2[i + 2] = pokerCards[dist3(mEngine3)];

            //Random card selector (4/5)
            unsigned random4 = std::chrono::system_clock::now().time_since_epoch().count();
            std::mt19937 mEngine4(random4);
            std::uniform_int_distribution<std::size_t> dist4(0, pokerCards.size() - 1);
            handDeck2[i + 3] = pokerCards[dist4(mEngine4)];

            // Random card selector (5/5)
            unsigned random5 = std::chrono::system_clock::now().time_since_epoch().count();
            std::mt19937 mEngine5(random5);
            std::uniform_int_distribution<std::size_t> dist5(0, pokerCards.size() - 1);
            handDeck2[i + 4] = pokerCards[dist5(mEngine5)];   

            std::vector<std::stringstream> horizonLine1, horizonLine2, horizonLine3;
            horizonLine1.reserve(handDeck2.size());

            for (const auto& a : handDeck2) {
                horizonLine1.emplace_back(a);
            }

            bool bashLines1 = true;
            bool bashLines2 = true;
            bool bashLines3 = true;

            while (bashLines1) {

                bashLines1 = false;
                
                for (auto& a : horizonLine1) {
                    std::string line;

                    if (std::getline(a, line)) {

                        std::cout << line << " ";
                        bashLines1 = true;
                    }
                }

                if (bashLines1) {
                    std::cout << "\n";
                }
            }

            // Count the frequency for card #1
            for (char& card : handDeck2[0]) {

                twoFind[card]++;
                threeFind[card]++;
                fourFind[card]++;
                fiveFind[card]++;
                sixFind[card]++;
                sevenFind[card]++;
                eightFind[card]++;
                nineFind[card]++;
                tenFind[card]++;
                jackFind[card]++;
                queenFind[card]++;
                kingFind[card]++;
                aceFind[card]++;
                heartFind[card]++;
                diamondFind[card]++;
                clubFind[card]++;
                spadeFind[card]++;
                quatrefoilFind[card]++;
            }

            // Count the frequency for card #2
            for (char& card : handDeck2[1]) {

                twoFind[card]++;
                threeFind[card]++;
                fourFind[card]++;
                fiveFind[card]++;
                sixFind[card]++;
                sevenFind[card]++;
                eightFind[card]++;
                nineFind[card]++;
                tenFind[card]++;
                jackFind[card]++;
                queenFind[card]++;
                kingFind[card]++;
                aceFind[card]++;
                heartFind[card]++;
                diamondFind[card]++;
                clubFind[card]++;
                spadeFind[card]++;
                quatrefoilFind[card]++;
            }

            // Count the frequency for card #3
            for (char& card : handDeck2[2]) {

                twoFind[card]++;
                threeFind[card]++;
                fourFind[card]++;
                fiveFind[card]++;
                sixFind[card]++;
                sevenFind[card]++;
                eightFind[card]++;
                nineFind[card]++;
                tenFind[card]++;
                jackFind[card]++;
                queenFind[card]++;
                kingFind[card]++;
                aceFind[card]++;
                heartFind[card]++;
                diamondFind[card]++;
                clubFind[card]++;
                spadeFind[card]++;
                quatrefoilFind[card]++;
            }
                    
            // Count the frequency for card #4
            for (char& card : handDeck2[3]) {

                twoFind[card]++;
                threeFind[card]++;
                fourFind[card]++;
                fiveFind[card]++;
                sixFind[card]++;
                sevenFind[card]++;
                eightFind[card]++;
                nineFind[card]++;
                tenFind[card]++;
                jackFind[card]++;
                queenFind[card]++;
                kingFind[card]++;
                aceFind[card]++;
                heartFind[card]++;
                diamondFind[card]++;
                clubFind[card]++;
                spadeFind[card]++;
                quatrefoilFind[card]++;
            }

            // Count the frequency for card #5
            for (char& card : handDeck2[4]) {

                twoFind[card]++;
                threeFind[card]++;
                fourFind[card]++;
                fiveFind[card]++;
                sixFind[card]++;
                sevenFind[card]++;
                eightFind[card]++;
                nineFind[card]++;
                tenFind[card]++;
                jackFind[card]++;
                queenFind[card]++;
                kingFind[card]++;
                aceFind[card]++;
                heartFind[card]++;
                diamondFind[card]++;
                clubFind[card]++;
                spadeFind[card]++;
                quatrefoilFind[card]++;
            }

            // Stores all the frequencies into each integer variable
            twoFreq = twoFind[twoChar];
            threeFreq = threeFind[threeChar];
            fourFreq = fourFind[fourChar];
            fiveFreq = fiveFind[fiveChar];
            sixFreq = sixFind[sixChar];
            sevenFreq = sevenFind[sevenChar];
            eightFreq = eightFind[eightChar];
            nineFreq = nineFind[nineChar];
            tenFreq = tenFind[tenChar];
            jackFreq = jackFind[jackChar];
            queenFreq = queenFind[queenChar];
            kingFreq = kingFind[kingChar];
            aceFreq = aceFind[aceChar];
            heartFreq = heartFind[heartChar];
            diamondFreq = diamondFind[diamondChar];
            clubFreq = clubFind[clubChar];
            spadeFreq = spadeFind[spadeChar];
            quatrefoilFreq = quatrefoilFind[quatrefoilChar];                   

            std::cout << "Swap cards or pass? \nS = Swap \nP = Pass\n\n";
            std::cin >> swap;

            if (swap == 's' || swap == 'S') {

                std::size_t cardNum = 1; // increment continously until it passes the last card number
                handDeck2[i] = handDeck2[0];

                // erase and ignore the poker hand rank that is unmodified when selecting the swap option 
                twoFreq = 0;
                threeFreq = 0;
                fourFreq = 0;
                fiveFreq = 0;
                sixFreq = 0;
                sevenFreq = 0;
                eightFreq = 0;
                nineFreq = 0;
                tenFreq = 0;
                jackFreq = 0;
                queenFreq = 0;
                kingFreq = 0;
                aceFreq = 0;
                heartFreq = 0;
                diamondFreq = 0;
                clubFreq = 0;
                spadeFreq = 0;
                quatrefoilFreq = 0;

                twoFind[twoChar] = 0;
                threeFind[threeChar] = 0;
                fourFind[fourChar] = 0;
                fiveFind[fiveChar] = 0;
                sixFind[sixChar] = 0;
                sevenFind[sevenChar] = 0;
                eightFind[eightChar] = 0;
                nineFind[nineChar] = 0;
                tenFind[tenChar] = 0;
                jackFind[jackChar] = 0;
                queenFind[queenChar] = 0;
                kingFind[kingChar] = 0;
                aceFind[aceChar] = 0;
                heartFind[heartChar] = 0;
                diamondFind[diamondChar] = 0;
                clubFind[clubChar] = 0;
                spadeFind[spadeChar] = 0;
                quatrefoilFind[quatrefoilChar] = 0;   

                // Edit card no.1
                while (cardNum < 2) { 

                    std::cout << "[CARD " << cardNum << "]" << "\n";
                    std::cout << "Change card " << cardNum << "?\n";
                    std::cin >> cardChange;

                    // swap the first card of the poker hand
                    if (cardChange == 'y' || cardChange == 'Y') {

                        std::random_device mEngine6;
                        std::mt19937 shuf(mEngine6());

                        std::uniform_int_distribution<std::size_t> dist6(0, pokerCards.size() - 1);
                        handDeck2[i] = pokerCards[dist6(mEngine6)];
                        cardNum++;
                    }

                    // ignore the first card of the poker hand
                    else if (cardChange == 'n' || cardChange == 'N') {
                        cardNum++;
                    }

                    // repeat the command until the input option is valid
                    else {
                        std::cout << "[INVALID OPTION] Select 'Y' or 'N' as an option.\n";
                    }
                
                }

                // Edit card no.2 
                while (cardNum < 3) {

                    std::cout << "[CARD " << cardNum << "]" << "\n";
                    std::cout << "Change card " << cardNum << "?\n";
                    std::cin >> cardChange;

                    if (cardChange == 'y' || cardChange == 'Y') {

                        std::random_device mEngine7;
                        std::mt19937 shuf(mEngine7());

                        std::uniform_int_distribution<std::size_t> dist7(0, pokerCards.size() - 1);
                        handDeck2[i + 1] = pokerCards[dist7(mEngine7)];
                        cardNum++;
                    }

                    else if (cardChange == 'n' || cardChange == 'N') {
                        cardNum++;
                    }

                    else {
                        std::cout << "[INVALID OPTION] Select 'Y' or 'N' as an option.\n";
                    }                                
                }

                // Edit card no.3
                while (cardNum < 4) {

                    std::cout << "[CARD " << cardNum << "]" << "\n";
                    std::cout << "Change card " << cardNum << "?\n";
                    std::cin >> cardChange;                                

                    if (cardChange == 'y' || cardChange == 'Y') {

                        std::random_device mEngine8;
                        std::mt19937 shuf(mEngine8());

                        std::uniform_int_distribution<std::size_t> dist8(0, pokerCards.size() - 1);
                        handDeck2[i + 2] = pokerCards[dist8(mEngine8)];
                        cardNum++;
                    }

                    else if (cardChange == 'n' || cardChange == 'N') {
                        cardNum++;
                    }

                    else {
                        std::cout << "[INVALID OPTION] Select 'Y' or 'N' as an option.\n";
                    }     
                }

                // Edit card no.4
                while (cardNum < 5) {

                    std::cout << "[CARD " << cardNum << "]" << "\n";
                    std::cout << "Change card " << cardNum << "?\n";
                    std::cin >> cardChange;

                    if (cardChange == 'y' || cardChange == 'Y') {

                        std::random_device mEngine9;
                        std::mt19937 shuf(mEngine9());

                        std::uniform_int_distribution<std::size_t> dist9(0, pokerCards.size() - 1);
                        handDeck2[i + 3] = pokerCards[dist9(mEngine9)];
                        cardNum++;
                    }

                    else if (cardChange == 'n' || cardChange == 'N') {
                        cardNum++;
                    }

                    else {
                        std::cout << "[INVALID OPTION] Select 'Y' or 'N' as an option.\n";
                    }                                 
                }

                // Edit card no.5
                while (cardNum < 6) {

                    std::cout << "[CARD " << cardNum << "]" << "\n";
                    std::cout << "Change card " << cardNum << "?\n";
                    std::cin >> cardChange;

                    if (cardChange == 'y' || cardChange == 'Y') {

                        std::random_device mEngine10;
                        std::mt19937 shuf(mEngine10());

                        std::uniform_int_distribution<std::size_t> dist10(0, pokerCards.size() - 1);
                        handDeck2[i + 4] = pokerCards[dist10(mEngine10)];
                        cardNum++;
                    }

                    else if (cardChange == 'n' || cardChange == 'N') {
                        cardNum++;
                    }

                    else {
                        std::cout << "[INVALID OPTION] Select 'Y' or 'N' as an option.\n";
                    }  
            
                }

                for (char& card : handDeck2[0]) {

                    twoFind[card]++;
                    threeFind[card]++;
                    fourFind[card]++;
                    fiveFind[card]++;
                    sixFind[card]++;
                    sevenFind[card]++;
                    eightFind[card]++;
                    nineFind[card]++;
                    tenFind[card]++;
                    jackFind[card]++;
                    queenFind[card]++;
                    kingFind[card]++;
                    aceFind[card]++;
                    heartFind[card]++;
                    diamondFind[card]++;
                    clubFind[card]++;
                    spadeFind[card]++;
                    quatrefoilFind[card]++;                           
                }

                for (char& card : handDeck2[1]) {

                    twoFind[card]++;
                    threeFind[card]++;
                    fourFind[card]++;
                    fiveFind[card]++;
                    sixFind[card]++;
                    sevenFind[card]++;
                    eightFind[card]++;
                    nineFind[card]++;
                    tenFind[card]++;
                    jackFind[card]++;
                    queenFind[card]++;
                    kingFind[card]++;
                    aceFind[card]++;
                    heartFind[card]++;
                    diamondFind[card]++;
                    clubFind[card]++;
                    spadeFind[card]++;
                    quatrefoilFind[card]++;                           
                }

                for (char& card : handDeck2[2]) {

                    twoFind[card]++;
                    threeFind[card]++;
                    fourFind[card]++;
                    fiveFind[card]++;
                    sixFind[card]++;
                    sevenFind[card]++;
                    eightFind[card]++;
                    nineFind[card]++;
                    tenFind[card]++;
                    jackFind[card]++;
                    queenFind[card]++;
                    kingFind[card]++;
                    aceFind[card]++;
                    heartFind[card]++;
                    diamondFind[card]++;
                    clubFind[card]++;
                    spadeFind[card]++;
                    quatrefoilFind[card]++;  
                }

                for (char& card : handDeck2[3]) {

                    twoFind[card]++;
                    threeFind[card]++;
                    fourFind[card]++;
                    fiveFind[card]++;
                    sixFind[card]++;
                    sevenFind[card]++;
                    eightFind[card]++;
                    nineFind[card]++;
                    tenFind[card]++;
                    jackFind[card]++;
                    queenFind[card]++;
                    kingFind[card]++;
                    aceFind[card]++;
                    heartFind[card]++;
                    diamondFind[card]++;
                    clubFind[card]++;
                    spadeFind[card]++;
                    quatrefoilFind[card]++; 
                }

                for (char& card : handDeck2[4]) {

                    twoFind[card]++;
                    threeFind[card]++;
                    fourFind[card]++;
                    fiveFind[card]++;
                    sixFind[card]++;
                    sevenFind[card]++;
                    eightFind[card]++;
                    nineFind[card]++;
                    tenFind[card]++;
                    jackFind[card]++;
                    queenFind[card]++;
                    kingFind[card]++;
                    aceFind[card]++;
                    heartFind[card]++;
                    diamondFind[card]++;
                    clubFind[card]++;
                    spadeFind[card]++;
                    quatrefoilFind[card]++; 
                }

                twoFreq = twoFind[twoChar];
                threeFreq = threeFind[threeChar];
                fourFreq = fourFind[fourChar];
                fiveFreq = fiveFind[fiveChar];
                sixFreq = sixFind[sixChar];
                sevenFreq = sevenFind[sevenChar];
                eightFreq = eightFind[eightChar];
                nineFreq = nineFind[nineChar];
                tenFreq = tenFind[tenChar];
                jackFreq = jackFind[jackChar];
                queenFreq = queenFind[queenChar];
                kingFreq = kingFind[kingChar];
                aceFreq = aceFind[aceChar];
                heartFreq = heartFind[heartChar];
                diamondFreq = diamondFind[diamondChar];
                clubFreq = clubFind[clubChar];
                spadeFreq = spadeFind[spadeChar];
                quatrefoilFreq = quatrefoilFind[quatrefoilChar];

                // Determine a poker hand rank based on user's poker hand

                // FIVE OF A KIND
                if (aceFreq == 5 || twoFreq == 5 || threeFreq == 5 || fourFreq == 5 || fiveFreq == 5 || sixFreq == 5 || sevenFreq == 5 || eightFreq == 5 ||
                    nineFreq == 5 || tenFreq == 5 || jackFreq == 5 || queenFreq == 5 || kingFreq == 5) {

                    std::cout << fiveKindCard.first << "\n";

                    points2 += fiveKindCard.second;
                    std::cout << "Your score section: " << points2 << "\n";
                    std::cout << "Your highest card: " << "___";

                }

                // ROYAL FLUSH
                else if (tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && kingFreq == 1 && aceFreq == 1 && heartFreq == 5 ||
                    tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && kingFreq == 1 && aceFreq == 1 && diamondFreq == 5 ||
                    tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && kingFreq == 1 && aceFreq == 1 && clubFreq == 5 ||
                    tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && kingFreq == 1 && aceFreq == 1 && spadeFreq == 5 ||
                    tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && kingFreq == 1 && aceFreq == 1 && quatrefoilFreq == 5) {

                    std::cout << royalFlushCard.first << "\n";

                    points2 += royalFlushCard.second;
                    std::cout << "Your score section: " << points2 << "\n";
                    std::cout << "Your highest card: " << "___";

                }

                // STRAIGHT FLUSH
                else if (aceFreq == 1 && twoFreq == 1 && threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 && heartFreq == 5 ||
                    aceFreq == 1 && twoFreq == 1 && threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 && diamondFreq == 5 ||
                    aceFreq == 1 && twoFreq == 1 && threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 && clubFreq == 5 ||
                    aceFreq == 1 && twoFreq == 1 && threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 && spadeFreq == 5 ||
                    aceFreq == 1 && twoFreq == 1 && threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 && quatrefoilFreq == 5 ||     
                    twoFreq == 1 && threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && heartFreq == 5 ||
                    twoFreq == 1 && threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && diamondFreq == 5 ||
                    twoFreq == 1 && threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && clubFreq == 5 ||
                    twoFreq == 1 && threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && spadeFreq == 5 ||
                    twoFreq == 1 && threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && quatrefoilFreq == 5 || 
                    threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 && heartFreq == 5 ||
                    threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 && diamondFreq == 5 ||
                    threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 && clubFreq == 5 ||
                    threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 && spadeFreq == 5 ||
                    threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 && quatrefoilFreq == 5 ||
                    fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 && heartFreq == 5 ||
                    fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 && diamondFreq == 5 ||
                    fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 && clubFreq == 5 ||
                    fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 && spadeFreq == 5 ||
                    fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 && quatrefoilFreq == 5 ||     
                    fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && heartFreq == 5 ||
                    fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && diamondFreq == 5 ||
                    fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && clubFreq == 5 ||
                    fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && spadeFreq == 5 ||
                    fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && quatrefoilFreq == 5 || 
                    sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && tenFreq == 1 && heartFreq == 5 ||
                    sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && tenFreq == 1 && diamondFreq == 5 ||
                    sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && tenFreq == 1 && clubFreq == 5 ||
                    sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && tenFreq == 1 && spadeFreq == 5 ||
                    sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && tenFreq == 1 && quatrefoilFreq == 5 ||
                    sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && tenFreq == 1 && jackFreq == 1 && heartFreq == 5 ||
                    sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && tenFreq == 1 && jackFreq == 1 && diamondFreq == 5 ||
                    sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && tenFreq == 1 && jackFreq == 1 && clubFreq == 5 ||
                    sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && tenFreq == 1 && jackFreq == 1 && spadeFreq == 5 ||
                    sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && tenFreq == 1 && jackFreq == 1 && quatrefoilFreq == 5 || 
                    eightFreq == 1 && nineFreq == 1 && tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && heartFreq == 5 ||
                    eightFreq == 1 && nineFreq == 1 && tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && diamondFreq == 5 ||
                    eightFreq == 1 && nineFreq == 1 && tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && clubFreq == 5 ||
                    eightFreq == 1 && nineFreq == 1 && tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && spadeFreq == 5 ||
                    eightFreq == 1 && nineFreq == 1 && tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && quatrefoilFreq == 5 || 
                    nineFreq == 1 && tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && kingFreq == 1 && heartFreq == 5 ||
                    nineFreq == 1 && tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && kingFreq == 1 && diamondFreq == 5 ||
                    nineFreq == 1 && tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && kingFreq == 1 && clubFreq == 5 ||
                    nineFreq == 1 && tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && kingFreq == 1 && spadeFreq == 5 ||
                    nineFreq == 1 && tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && kingFreq == 1 && quatrefoilFreq == 5) {

                    std::cout << straightFlushCard.first << "\n";

                    points2 += straightFlushCard.second;
                    std::cout << "Your score section: " << points2 << "\n";
                    std::cout << "Your highest card: " << "___";

                }

                // FOUR OF A KIND
                else if (aceFreq == 4 || twoFreq == 4 || threeFreq == 4 || fourFreq == 4 || fiveFreq == 4 || sixFreq == 4 || sevenFreq == 4 || eightFreq == 4 ||
                    nineFreq == 4 || tenFreq == 4 || jackFreq == 4 || queenFreq == 4 || kingFreq == 4) {

                    std::cout << fourKindCard.first << "\n";

                    points2 += fourKindCard.second;
                    std::cout << "Your score section: " << points2 << "\n";
                    std::cout << "Your highest card: " << "___";
                }

                // FULL HOUSE
                else if (twoFreq == 2 && threeFreq == 3 || twoFreq == 2 && fourFreq == 3 || twoFreq == 2 && fiveFreq == 3 || twoFreq == 2 && sixFreq == 3 || // 1
                    twoFreq == 3 && threeFreq == 2 || twoFreq == 3 && fourFreq == 2 || twoFreq == 3 && fiveFreq == 2 || twoFreq == 3 && sixFreq == 2 || // 2
                    twoFreq == 2 && sevenFreq == 3 || twoFreq == 2 && eightFreq == 3 || twoFreq == 2 && nineFreq == 3 || twoFreq == 2 && tenFreq == 3 ||
                    twoFreq == 3 && sevenFreq == 2 || twoFreq == 3 && eightFreq == 2 || twoFreq == 3 && nineFreq == 2 || twoFreq == 3 && tenFreq == 2 ||
                    twoFreq == 2 && jackFreq == 3 || twoFreq == 2 && queenFreq == 3 || twoFreq == 2 && kingFreq == 3 || twoFreq == 2 && aceFreq == 3 ||
                    twoFreq == 3 && jackFreq == 2 || twoFreq == 3 && queenFreq == 2 || twoFreq == 3 && kingFreq == 2 || twoFreq == 3 && aceFreq == 2 ||
                    threeFreq == 2 && fourFreq == 3 || threeFreq == 2 && fiveFreq == 3 || threeFreq == 2 && sixFreq == 3 || threeFreq == 2 && sevenFreq == 3 ||
                    threeFreq == 3 && fourFreq == 2 || threeFreq == 3 && fiveFreq == 2 || threeFreq == 3 && sixFreq == 2 || threeFreq == 3 && sevenFreq == 2 ||
                    threeFreq == 2 && eightFreq == 3 || threeFreq == 2 && nineFreq == 3 || threeFreq == 2 && tenFreq == 3 || threeFreq == 2 && jackFreq == 3 ||
                    threeFreq == 3 && eightFreq == 2 || threeFreq == 3 && nineFreq == 2 || threeFreq == 3 && tenFreq == 2 || threeFreq == 3 && jackFreq == 2 || 
                    threeFreq == 2 && queenFreq == 3 || threeFreq == 2 && kingFreq == 3 || threeFreq == 2 && aceFreq == 3 || fourFreq == 2 && fiveFreq == 3 ||
                    threeFreq == 3 && queenFreq == 2 || threeFreq == 3 && kingFreq == 2 || threeFreq == 3 && aceFreq == 2 || fourFreq == 3 && fiveFreq == 2 ||
                    fourFreq == 2 && sixFreq == 3 || fourFreq == 2 && sevenFreq == 3 || fourFreq == 2 && eightFreq == 3 || fourFreq == 2 && nineFreq == 3 ||
                    fourFreq == 3 && sixFreq == 2 || fourFreq == 3 && sevenFreq == 2 || fourFreq == 3 && eightFreq == 2 || fourFreq == 3 && nineFreq == 2 ||
                    fourFreq == 2 && tenFreq == 3 || fourFreq == 2 && jackFreq == 3 || fourFreq == 2 && queenFreq == 3 || fourFreq == 2 && kingFreq == 3 ||
                    fourFreq == 3 && tenFreq == 2 || fourFreq == 3 && jackFreq == 2 || fourFreq == 3 && queenFreq == 2 || fourFreq == 3 && kingFreq == 2 ||
                    fourFreq == 2 && aceFreq == 3 || fiveFreq == 2 && sixFreq == 3 || fiveFreq == 2 && sevenFreq == 3 || fiveFreq == 2 && eightFreq == 3 ||
                    fourFreq == 3 && aceFreq == 2 || fiveFreq == 3 && sixFreq == 2 || fiveFreq == 3 && sevenFreq == 2 || fiveFreq == 3 && eightFreq == 2 ||
                    fiveFreq == 2 && nineFreq == 3 || fiveFreq == 2 && tenFreq == 3 || fiveFreq == 2 && jackFreq == 3 || fiveFreq == 2 && queenFreq == 3 ||
                    fiveFreq == 3 && nineFreq == 2 || fiveFreq == 3 && tenFreq == 2 || fiveFreq == 3 && jackFreq == 2 || fiveFreq == 3 && queenFreq == 2 ||
                    fiveFreq == 2 && kingFreq == 3 || fiveFreq == 2 && aceFreq == 3 || sixFreq == 2 && sevenFreq == 3 || sixFreq == 2 && eightFreq == 3 ||
                    fiveFreq == 3 && kingFreq == 2 || fiveFreq == 3 && aceFreq == 2 || sixFreq == 3 && sevenFreq == 2 || sixFreq == 3 && eightFreq == 2 ||
                    sixFreq == 2 && nineFreq == 3 || sixFreq == 2 && tenFreq == 3 || sixFreq == 2 && jackFreq == 3 || sixFreq == 2 && queenFreq == 3 ||
                    sixFreq == 3 && nineFreq == 2 || sixFreq == 3 && tenFreq == 2 || sixFreq == 3 && jackFreq == 2 || sixFreq == 3 && queenFreq == 2 ||
                    sixFreq == 2 && kingFreq == 3 || sixFreq == 2 && aceFreq == 3 || sevenFreq == 2 && eightFreq == 3 || sevenFreq == 2 && nineFreq == 3 ||
                    sixFreq == 3 && kingFreq == 2 || sixFreq == 3 && aceFreq == 2 || sevenFreq == 3 && eightFreq == 2 || sevenFreq == 3 && nineFreq == 2 ||
                    sevenFreq == 2 && tenFreq == 3 || sevenFreq == 2 && jackFreq == 3 || sevenFreq == 2 && queenFreq == 3 || sevenFreq == 2 && kingFreq == 3 ||
                    sevenFreq == 3 && tenFreq == 2 || sevenFreq == 3 && jackFreq == 2 || sevenFreq == 3 && queenFreq == 2 || sevenFreq == 3 && kingFreq == 2 ||
                    sevenFreq == 2 && aceFreq == 3 || eightFreq == 2 && nineFreq == 3 || eightFreq == 2 && tenFreq == 3 || eightFreq == 2 && jackFreq == 3 ||
                    sevenFreq == 3 && aceFreq == 2 || eightFreq == 3 && nineFreq == 2 || eightFreq == 3 && tenFreq == 2 || eightFreq == 3 && jackFreq == 2 ||
                    eightFreq == 2 && queenFreq == 3 || eightFreq == 2 && kingFreq == 3 || eightFreq == 2 && aceFreq == 3 || nineFreq == 2 && tenFreq == 3 ||
                    eightFreq == 3 && queenFreq == 2 || eightFreq == 3 && kingFreq == 2 || eightFreq == 3 && aceFreq == 2 || nineFreq == 3 && tenFreq == 2 ||
                    nineFreq == 2 && jackFreq == 3 || nineFreq == 2 && queenFreq == 3 || nineFreq == 2 && kingFreq == 3 || nineFreq == 2 && aceFreq == 3 ||
                    nineFreq == 3 && jackFreq == 2 || nineFreq == 3 && queenFreq == 2 || nineFreq == 3 && kingFreq == 2 || nineFreq == 3 && aceFreq == 2 ||
                    tenFreq == 2 && jackFreq == 3 || tenFreq == 2 && queenFreq == 3 || tenFreq == 2 && kingFreq == 3 || tenFreq == 2 && aceFreq == 3 ||
                    tenFreq == 3 && jackFreq == 2 || tenFreq == 3 && queenFreq == 2 || tenFreq == 3 && kingFreq == 2 || tenFreq == 3 && aceFreq == 2 ||
                    jackFreq == 2 && queenFreq == 3 || jackFreq == 2 && kingFreq == 3 || jackFreq == 2 && aceFreq == 3 || queenFreq == 2 && kingFreq == 3 ||
                    jackFreq == 3 && queenFreq == 2 || jackFreq == 3 && kingFreq == 2 || jackFreq == 3 && aceFreq == 2 || queenFreq == 3 && kingFreq == 2 || 
                    queenFreq == 2 && aceFreq == 3 || kingFreq == 2 && aceFreq == 3 || queenFreq == 3 && aceFreq == 2 || kingFreq == 3 && aceFreq == 2) {

                    std::cout << fullHouseCard.first << "\n";

                    points2 += fullHouseCard.second;
                    std::cout << "Your score section: " << points2 << "\n";
                    std::cout << "Your highest card: " << "___";

                }

                // FLUSH
                else if (heartFreq == 5 || diamondFreq == 5 || clubFreq == 5 || spadeFreq == 5 || quatrefoilFreq == 5) {

                    std::cout << flushCard.first << "\n";

                    points2 += flushCard.second;
                    std::cout << "Your score section: " << points2 << "\n";
                    std::cout << "Your highest card: " << "___";
                }

                // STRAIGHT
                else if (aceFreq == 1 && twoFreq == 1 && threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 || twoFreq == 1 && threeFreq == 1 && fourFreq == 1 && 
                    fiveFreq == 1 && sixFreq == 1 || threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 ||
                    fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 || fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 &&
                    eightFreq == 1 && nineFreq == 1 || sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && tenFreq == 1 ||
                    sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && tenFreq == 1 && jackFreq == 1 || eightFreq == 1 && nineFreq == 1 && tenFreq == 1 &&
                    jackFreq == 1 && queenFreq == 1 || nineFreq == 1 && tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && kingFreq == 1 || 
                    tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && kingFreq == 1 && aceFreq == 1) {

                    std::cout << straightCard.first << "\n";

                    points2 += straightCard.second;
                    std::cout << "Your score section: " << points2 << "\n";
                    std::cout << "Your highest card: " << "___";
                }

                // THREE OF A KIND
                else if (twoFreq == 3 || threeFreq == 3 || fourFreq == 3 || fiveFreq == 3 || sixFreq == 3 || sevenFreq == 3 || eightFreq == 3 || 
                    nineFreq == 3 || tenFreq == 3 || jackFreq == 3 || queenFreq == 3 || kingFreq == 3 || aceFreq == 3) {

                    std::cout << threeKindCard.first << "\n";

                    points2 += threeKindCard.second;
                    std::cout << "Your score section: " << points2 << "\n";
                    std::cout << "Your highest card: " << "___";
                }

                // TWO PAIRS
                else if (twoFreq == 2 && threeFreq == 2 || twoFreq == 2 && fourFreq == 2 || twoFreq == 2 && fiveFreq == 2 || twoFreq == 2 && sixFreq == 2 ||
                    twoFreq == 2 && sevenFreq == 2 || twoFreq == 2 && eightFreq == 2 || twoFreq == 2 && nineFreq == 2 || twoFreq == 2 && tenFreq == 2 ||
                    twoFreq == 2 && jackFreq == 2 || twoFreq == 2 && queenFreq == 2 || twoFreq == 2 && kingFreq == 2 || twoFreq == 2 && aceFreq == 2 ||
                    threeFreq == 2 && fourFreq == 2 || threeFreq == 2 && fiveFreq == 2 || threeFreq == 2 && sixFreq == 2 || threeFreq == 2 && sevenFreq == 2 ||
                    threeFreq == 2 && eightFreq == 2 || threeFreq == 2 && nineFreq == 2 || threeFreq == 2 && tenFreq == 2 || threeFreq == 2 && jackFreq == 2 || 
                    threeFreq == 2 && queenFreq == 2 || threeFreq == 2 && kingFreq == 2 || threeFreq == 2 && aceFreq == 2 || fourFreq == 2 && fiveFreq == 2 ||
                    fourFreq == 2 && sixFreq == 2 || fourFreq == 2 && sevenFreq == 2 || fourFreq == 2 && eightFreq == 2 || fourFreq == 2 && nineFreq == 2 ||
                    fourFreq == 2 && tenFreq == 2 || fourFreq == 2 && jackFreq == 2 || fourFreq == 2 && queenFreq == 2 || fourFreq == 2 && kingFreq == 2 ||
                    fourFreq == 2 && aceFreq == 2 || fiveFreq == 2 && sixFreq == 2 || fiveFreq == 2 && sevenFreq == 2 || fiveFreq == 2 && eightFreq == 2 ||
                    fiveFreq == 2 && nineFreq == 2 || fiveFreq == 2 && tenFreq == 2 || fiveFreq == 2 && jackFreq == 2 || fiveFreq == 2 && queenFreq == 2 ||
                    fiveFreq == 2 && kingFreq == 2 || fiveFreq == 2 && aceFreq == 2 || sixFreq == 2 && sevenFreq == 2 || sixFreq == 2 && eightFreq == 2 ||
                    sixFreq == 2 && nineFreq == 2 || sixFreq == 2 && tenFreq == 2 || sixFreq == 2 && jackFreq == 2 || sixFreq == 2 && queenFreq == 2 ||
                    sixFreq == 2 && kingFreq == 2 || sixFreq == 2 && aceFreq == 2 || sevenFreq == 2 && eightFreq == 2 || sevenFreq == 2 && nineFreq == 2 ||
                    sevenFreq == 2 && tenFreq == 2 || sevenFreq == 2 && jackFreq == 2 || sevenFreq == 2 && queenFreq == 2 || sevenFreq == 2 && kingFreq == 2 ||
                    sevenFreq == 2 && aceFreq == 2 || eightFreq == 2 && nineFreq == 2 || eightFreq == 2 && tenFreq == 2 || eightFreq == 2 && jackFreq == 2 ||
                    eightFreq == 2 && queenFreq == 2 || eightFreq == 2 && kingFreq == 2 || eightFreq == 2 && aceFreq == 2 || nineFreq == 2 && tenFreq == 2 ||
                    nineFreq == 2 && jackFreq == 2 || nineFreq == 2 && queenFreq == 2 || nineFreq == 2 && kingFreq == 2 || nineFreq == 2 && aceFreq == 2 ||
                    tenFreq == 2 && jackFreq == 2 || tenFreq == 2 && queenFreq == 2 || tenFreq == 2 && kingFreq == 2 || tenFreq == 2 && aceFreq == 2 ||
                    jackFreq == 2 && queenFreq == 2 || jackFreq == 2 && kingFreq == 2 || jackFreq == 2 && aceFreq == 2 || queenFreq == 2 && kingFreq == 2 || 
                    queenFreq == 2 && aceFreq == 2 || kingFreq == 2 && aceFreq == 2) {

                    std::cout << twoPairCard.first << "\n";

                    points2 += twoPairCard.second;
                    std::cout << "Your score section: " << points2 << "\n";
                    std::cout << "Your highest card: " << "___";
                }

                // PAIR
                else if (twoFreq == 2 || threeFreq == 2 || fourFreq == 2 || fiveFreq == 2 || sixFreq == 2 || sevenFreq == 2 || eightFreq == 2 || 
                        nineFreq == 2 || tenFreq == 2 || jackFreq == 2 || queenFreq == 2 || kingFreq == 2 || aceFreq == 2) {

                    std::cout << pairCard.first << "\n";
                
                    points2 += twoPairCard.second;
                    std::cout << "Your score section: " << points2 << "\n";
                    std::cout << "Your highest card: " << "___";
                }

                // HIGH CARD
                else {
                    
                    std::cout << highCard.first << "\n";

                    points2 += highCard.second;
                    std::cout << "Your score section: " << points2 << "\n";
                    std::cout << "Your highest card: " << "___";
                }

                handDeck2 = {handDeck2[0], handDeck2[1], handDeck2[2], handDeck2[3], handDeck2[4]};
                horizonLine3.reserve(handDeck2.size());

                for (const auto& a : handDeck2) {
                    horizonLine3.emplace_back(a);
                }

                while (bashLines3) {

                    bashLines3 = false;

                    for (auto& a : horizonLine3) {
                        std::string line;

                        if (std::getline(a, line)) {
                            std::cout << line << " ";
                            
                            bashLines3 = true;
                        }
                    }
                    
                    if (bashLines3) {
                        std::cout << "\n";
                    }   
                }
                
                std::cout << "Check your credit balance by pressing '3' as a menu option.\n";
                std::cout << "Press '6' to open the menu.\n";
                turn++;
                break;
            }

            else if (swap == 'p' || swap == 'P') {

                // Determine a poker hand rank based on user's poker hand

                // FIVE OF A KIND
                if (aceFreq == 5 || twoFreq == 5 || threeFreq == 5 || fourFreq == 5 || fiveFreq == 5 || sixFreq == 5 || sevenFreq == 5 || eightFreq == 5 ||
                    nineFreq == 5 || tenFreq == 5 || jackFreq == 5 || queenFreq == 5 || kingFreq == 5) {

                    std::cout << fiveKindCard.first << "\n";

                    points2 += fiveKindCard.second;
                    std::cout << "Your score section: " << points2 << "\n";
                    std::cout << "Your highest card: " << "___" << "\n";

                }

                // ROYAL FLUSH
                else if (tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && kingFreq == 1 && aceFreq == 1 && heartFreq == 5 ||
                    tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && kingFreq == 1 && aceFreq == 1 && diamondFreq == 5 ||
                    tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && kingFreq == 1 && aceFreq == 1 && clubFreq == 5 ||
                    tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && kingFreq == 1 && aceFreq == 1 && spadeFreq == 5 ||
                    tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && kingFreq == 1 && aceFreq == 1 && quatrefoilFreq == 5) {

                    std::cout << royalFlushCard.first << "\n";

                    points2 += royalFlushCard.second;
                    std::cout << "Your score section: " << points2 << "\n";
                    std::cout << "Your highest card: " << "___";

                }

                // STRAIGHT FLUSH
                else if (aceFreq == 1 && twoFreq == 1 && threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 && heartFreq == 5 ||
                    aceFreq == 1 && twoFreq == 1 && threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 && diamondFreq == 5 ||
                    aceFreq == 1 && twoFreq == 1 && threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 && clubFreq == 5 ||
                    aceFreq == 1 && twoFreq == 1 && threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 && spadeFreq == 5 ||
                    aceFreq == 1 && twoFreq == 1 && threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 && quatrefoilFreq == 5 ||     
                    twoFreq == 1 && threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && heartFreq == 5 ||
                    twoFreq == 1 && threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && diamondFreq == 5 ||
                    twoFreq == 1 && threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && clubFreq == 5 ||
                    twoFreq == 1 && threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && spadeFreq == 5 ||
                    twoFreq == 1 && threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && quatrefoilFreq == 5 || 
                    threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 && heartFreq == 5 ||
                    threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 && diamondFreq == 5 ||
                    threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 && clubFreq == 5 ||
                    threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 && spadeFreq == 5 ||
                    threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 && quatrefoilFreq == 5 ||
                    fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 && heartFreq == 5 ||
                    fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 && diamondFreq == 5 ||
                    fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 && clubFreq == 5 ||
                    fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 && spadeFreq == 5 ||
                    fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 && quatrefoilFreq == 5 ||     
                    fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && heartFreq == 5 ||
                    fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && diamondFreq == 5 ||
                    fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && clubFreq == 5 ||
                    fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && spadeFreq == 5 ||
                    fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && quatrefoilFreq == 5 || 
                    sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && tenFreq == 1 && heartFreq == 5 ||
                    sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && tenFreq == 1 && diamondFreq == 5 ||
                    sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && tenFreq == 1 && clubFreq == 5 ||
                    sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && tenFreq == 1 && spadeFreq == 5 ||
                    sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && tenFreq == 1 && quatrefoilFreq == 5 ||
                    sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && tenFreq == 1 && jackFreq == 1 && heartFreq == 5 ||
                    sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && tenFreq == 1 && jackFreq == 1 && diamondFreq == 5 ||
                    sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && tenFreq == 1 && jackFreq == 1 && clubFreq == 5 ||
                    sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && tenFreq == 1 && jackFreq == 1 && spadeFreq == 5 ||
                    sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && tenFreq == 1 && jackFreq == 1 && quatrefoilFreq == 5 || 
                    eightFreq == 1 && nineFreq == 1 && tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && heartFreq == 5 ||
                    eightFreq == 1 && nineFreq == 1 && tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && diamondFreq == 5 ||
                    eightFreq == 1 && nineFreq == 1 && tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && clubFreq == 5 ||
                    eightFreq == 1 && nineFreq == 1 && tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && spadeFreq == 5 ||
                    eightFreq == 1 && nineFreq == 1 && tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && quatrefoilFreq == 5 || 
                    nineFreq == 1 && tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && kingFreq == 1 && heartFreq == 5 ||
                    nineFreq == 1 && tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && kingFreq == 1 && diamondFreq == 5 ||
                    nineFreq == 1 && tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && kingFreq == 1 && clubFreq == 5 ||
                    nineFreq == 1 && tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && kingFreq == 1 && spadeFreq == 5 ||
                    nineFreq == 1 && tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && kingFreq == 1 && quatrefoilFreq == 5) {

                    std::cout << straightFlushCard.first << "\n";

                    points2 += straightFlushCard.second;
                    std::cout << "Your score section: " << points2 << "\n";
                    std::cout << "Your highest card: " << "___" << "\n";

                }

                // FOUR OF A KIND
                else if (aceFreq == 4 || twoFreq == 4 || threeFreq == 4 || fourFreq == 4 || fiveFreq == 4 || sixFreq == 4 || sevenFreq == 4 || eightFreq == 4 ||
                    nineFreq == 4 || tenFreq == 4 || jackFreq == 4 || queenFreq == 4 || kingFreq == 4) {

                    std::cout << fourKindCard.first << "\n";

                    points2 += fourKindCard.second;
                    std::cout << "Your score section: " << points2 << "\n";
                    std::cout << "Your highest card: " << "___" << "\n"; 
                }

                // FULL HOUSE
                else if (twoFreq == 2 && threeFreq == 3 || twoFreq == 2 && fourFreq == 3 || twoFreq == 2 && fiveFreq == 3 || twoFreq == 2 && sixFreq == 3 || // 1
                    twoFreq == 3 && threeFreq == 2 || twoFreq == 3 && fourFreq == 2 || twoFreq == 3 && fiveFreq == 2 || twoFreq == 3 && sixFreq == 2 || // 2
                    twoFreq == 2 && sevenFreq == 3 || twoFreq == 2 && eightFreq == 3 || twoFreq == 2 && nineFreq == 3 || twoFreq == 2 && tenFreq == 3 ||
                    twoFreq == 3 && sevenFreq == 2 || twoFreq == 3 && eightFreq == 2 || twoFreq == 3 && nineFreq == 2 || twoFreq == 3 && tenFreq == 2 ||
                    twoFreq == 2 && jackFreq == 3 || twoFreq == 2 && queenFreq == 3 || twoFreq == 2 && kingFreq == 3 || twoFreq == 2 && aceFreq == 3 ||
                    twoFreq == 3 && jackFreq == 2 || twoFreq == 3 && queenFreq == 2 || twoFreq == 3 && kingFreq == 2 || twoFreq == 3 && aceFreq == 2 ||
                    threeFreq == 2 && fourFreq == 3 || threeFreq == 2 && fiveFreq == 3 || threeFreq == 2 && sixFreq == 3 || threeFreq == 2 && sevenFreq == 3 ||
                    threeFreq == 3 && fourFreq == 2 || threeFreq == 3 && fiveFreq == 2 || threeFreq == 3 && sixFreq == 2 || threeFreq == 3 && sevenFreq == 2 ||
                    threeFreq == 2 && eightFreq == 3 || threeFreq == 2 && nineFreq == 3 || threeFreq == 2 && tenFreq == 3 || threeFreq == 2 && jackFreq == 3 ||
                    threeFreq == 3 && eightFreq == 2 || threeFreq == 3 && nineFreq == 2 || threeFreq == 3 && tenFreq == 2 || threeFreq == 3 && jackFreq == 2 || 
                    threeFreq == 2 && queenFreq == 3 || threeFreq == 2 && kingFreq == 3 || threeFreq == 2 && aceFreq == 3 || fourFreq == 2 && fiveFreq == 3 ||
                    threeFreq == 3 && queenFreq == 2 || threeFreq == 3 && kingFreq == 2 || threeFreq == 3 && aceFreq == 2 || fourFreq == 3 && fiveFreq == 2 ||
                    fourFreq == 2 && sixFreq == 3 || fourFreq == 2 && sevenFreq == 3 || fourFreq == 2 && eightFreq == 3 || fourFreq == 2 && nineFreq == 3 ||
                    fourFreq == 3 && sixFreq == 2 || fourFreq == 3 && sevenFreq == 2 || fourFreq == 3 && eightFreq == 2 || fourFreq == 3 && nineFreq == 2 ||
                    fourFreq == 2 && tenFreq == 3 || fourFreq == 2 && jackFreq == 3 || fourFreq == 2 && queenFreq == 3 || fourFreq == 2 && kingFreq == 3 ||
                    fourFreq == 3 && tenFreq == 2 || fourFreq == 3 && jackFreq == 2 || fourFreq == 3 && queenFreq == 2 || fourFreq == 3 && kingFreq == 2 ||
                    fourFreq == 2 && aceFreq == 3 || fiveFreq == 2 && sixFreq == 3 || fiveFreq == 2 && sevenFreq == 3 || fiveFreq == 2 && eightFreq == 3 ||
                    fourFreq == 3 && aceFreq == 2 || fiveFreq == 3 && sixFreq == 2 || fiveFreq == 3 && sevenFreq == 2 || fiveFreq == 3 && eightFreq == 2 ||
                    fiveFreq == 2 && nineFreq == 3 || fiveFreq == 2 && tenFreq == 3 || fiveFreq == 2 && jackFreq == 3 || fiveFreq == 2 && queenFreq == 3 ||
                    fiveFreq == 3 && nineFreq == 2 || fiveFreq == 3 && tenFreq == 2 || fiveFreq == 3 && jackFreq == 2 || fiveFreq == 3 && queenFreq == 2 ||
                    fiveFreq == 2 && kingFreq == 3 || fiveFreq == 2 && aceFreq == 3 || sixFreq == 2 && sevenFreq == 3 || sixFreq == 2 && eightFreq == 3 ||
                    fiveFreq == 3 && kingFreq == 2 || fiveFreq == 3 && aceFreq == 2 || sixFreq == 3 && sevenFreq == 2 || sixFreq == 3 && eightFreq == 2 ||
                    sixFreq == 2 && nineFreq == 3 || sixFreq == 2 && tenFreq == 3 || sixFreq == 2 && jackFreq == 3 || sixFreq == 2 && queenFreq == 3 ||
                    sixFreq == 3 && nineFreq == 2 || sixFreq == 3 && tenFreq == 2 || sixFreq == 3 && jackFreq == 2 || sixFreq == 3 && queenFreq == 2 ||
                    sixFreq == 2 && kingFreq == 3 || sixFreq == 2 && aceFreq == 3 || sevenFreq == 2 && eightFreq == 3 || sevenFreq == 2 && nineFreq == 3 ||
                    sixFreq == 3 && kingFreq == 2 || sixFreq == 3 && aceFreq == 2 || sevenFreq == 3 && eightFreq == 2 || sevenFreq == 3 && nineFreq == 2 ||
                    sevenFreq == 2 && tenFreq == 3 || sevenFreq == 2 && jackFreq == 3 || sevenFreq == 2 && queenFreq == 3 || sevenFreq == 2 && kingFreq == 3 ||
                    sevenFreq == 3 && tenFreq == 2 || sevenFreq == 3 && jackFreq == 2 || sevenFreq == 3 && queenFreq == 2 || sevenFreq == 3 && kingFreq == 2 ||
                    sevenFreq == 2 && aceFreq == 3 || eightFreq == 2 && nineFreq == 3 || eightFreq == 2 && tenFreq == 3 || eightFreq == 2 && jackFreq == 3 ||
                    sevenFreq == 3 && aceFreq == 2 || eightFreq == 3 && nineFreq == 2 || eightFreq == 3 && tenFreq == 2 || eightFreq == 3 && jackFreq == 2 ||
                    eightFreq == 2 && queenFreq == 3 || eightFreq == 2 && kingFreq == 3 || eightFreq == 2 && aceFreq == 3 || nineFreq == 2 && tenFreq == 3 ||
                    eightFreq == 3 && queenFreq == 2 || eightFreq == 3 && kingFreq == 2 || eightFreq == 3 && aceFreq == 2 || nineFreq == 3 && tenFreq == 2 ||
                    nineFreq == 2 && jackFreq == 3 || nineFreq == 2 && queenFreq == 3 || nineFreq == 2 && kingFreq == 3 || nineFreq == 2 && aceFreq == 3 ||
                    nineFreq == 3 && jackFreq == 2 || nineFreq == 3 && queenFreq == 2 || nineFreq == 3 && kingFreq == 2 || nineFreq == 3 && aceFreq == 2 ||
                    tenFreq == 2 && jackFreq == 3 || tenFreq == 2 && queenFreq == 3 || tenFreq == 2 && kingFreq == 3 || tenFreq == 2 && aceFreq == 3 ||
                    tenFreq == 3 && jackFreq == 2 || tenFreq == 3 && queenFreq == 2 || tenFreq == 3 && kingFreq == 2 || tenFreq == 3 && aceFreq == 2 ||
                    jackFreq == 2 && queenFreq == 3 || jackFreq == 2 && kingFreq == 3 || jackFreq == 2 && aceFreq == 3 || queenFreq == 2 && kingFreq == 3 ||
                    jackFreq == 3 && queenFreq == 2 || jackFreq == 3 && kingFreq == 2 || jackFreq == 3 && aceFreq == 2 || queenFreq == 3 && kingFreq == 2 || 
                    queenFreq == 2 && aceFreq == 3 || kingFreq == 2 && aceFreq == 3 || queenFreq == 3 && aceFreq == 2 || kingFreq == 3 && aceFreq == 2) {

                    std::cout << fullHouseCard.first << "\n";

                    points2 += fullHouseCard.second;
                    std::cout << "Your score section: " << points2 << "\n";
                    std::cout << "Your highest card: " << "___" << "\n";
                }

                // FLUSH
                else if (heartFreq == 5 || diamondFreq == 5 || clubFreq == 5 || spadeFreq == 5 || quatrefoilFreq == 5) {

                    std::cout << flushCard.first << "\n";

                    points2 += flushCard.second;
                    std::cout << "Your score section: " << points2 << "\n";
                    std::cout << "Your highest card: " << "___" << "\n";
                }

                // STRAIGHT
                else if (aceFreq == 1 && twoFreq == 1 && threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 || twoFreq == 1 && threeFreq == 1 && fourFreq == 1 && 
                    fiveFreq == 1 && sixFreq == 1 || threeFreq == 1 && fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 ||
                    fourFreq == 1 && fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 || fiveFreq == 1 && sixFreq == 1 && sevenFreq == 1 &&
                    eightFreq == 1 && nineFreq == 1 || sixFreq == 1 && sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && tenFreq == 1 ||
                    sevenFreq == 1 && eightFreq == 1 && nineFreq == 1 && tenFreq == 1 && jackFreq == 1 || eightFreq == 1 && nineFreq == 1 && tenFreq == 1 &&
                    jackFreq == 1 && queenFreq == 1 || nineFreq == 1 && tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && kingFreq == 1 || 
                    tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && kingFreq == 1 && aceFreq == 1) {

                    std::cout << straightCard.first << "\n";

                    points2 += straightCard.second;
                    std::cout << "Your score section: " << points2 << "\n";
                    std::cout << "Your highest card: " << "___" << "\n";
                }

                // THREE OF A KIND
                else if (twoFreq == 3 || threeFreq == 3 || fourFreq == 3 || fiveFreq == 3 || sixFreq == 3 || sevenFreq == 3 || eightFreq == 3 || 
                    nineFreq == 3 || tenFreq == 3 || jackFreq == 3 || queenFreq == 3 || kingFreq == 3 || aceFreq == 3) {

                    std::cout << threeKindCard.first << "\n";

                    points2 += threeKindCard.second;
                    std::cout << "Your score section: " << points2 << "\n";
                    std::cout << "Your highest card: " << "___" << "\n";
                }

                // TWO PAIRS
                else if (twoFreq == 2 && threeFreq == 2 || twoFreq == 2 && fourFreq == 2 || twoFreq == 2 && fiveFreq == 2 || twoFreq == 2 && sixFreq == 2 ||
                    twoFreq == 2 && sevenFreq == 2 || twoFreq == 2 && eightFreq == 2 || twoFreq == 2 && nineFreq == 2 || twoFreq == 2 && tenFreq == 2 ||
                    twoFreq == 2 && jackFreq == 2 || twoFreq == 2 && queenFreq == 2 || twoFreq == 2 && kingFreq == 2 || twoFreq == 2 && aceFreq == 2 ||
                    threeFreq == 2 && fourFreq == 2 || threeFreq == 2 && fiveFreq == 2 || threeFreq == 2 && sixFreq == 2 || threeFreq == 2 && sevenFreq == 2 ||
                    threeFreq == 2 && eightFreq == 2 || threeFreq == 2 && nineFreq == 2 || threeFreq == 2 && tenFreq == 2 || threeFreq == 2 && jackFreq == 2 || 
                    threeFreq == 2 && queenFreq == 2 || threeFreq == 2 && kingFreq == 2 || threeFreq == 2 && aceFreq == 2 || fourFreq == 2 && fiveFreq == 2 ||
                    fourFreq == 2 && sixFreq == 2 || fourFreq == 2 && sevenFreq == 2 || fourFreq == 2 && eightFreq == 2 || fourFreq == 2 && nineFreq == 2 ||
                    fourFreq == 2 && tenFreq == 2 || fourFreq == 2 && jackFreq == 2 || fourFreq == 2 && queenFreq == 2 || fourFreq == 2 && kingFreq == 2 ||
                    fourFreq == 2 && aceFreq == 2 || fiveFreq == 2 && sixFreq == 2 || fiveFreq == 2 && sevenFreq == 2 || fiveFreq == 2 && eightFreq == 2 ||
                    fiveFreq == 2 && nineFreq == 2 || fiveFreq == 2 && tenFreq == 2 || fiveFreq == 2 && jackFreq == 2 || fiveFreq == 2 && queenFreq == 2 ||
                    fiveFreq == 2 && kingFreq == 2 || fiveFreq == 2 && aceFreq == 2 || sixFreq == 2 && sevenFreq == 2 || sixFreq == 2 && eightFreq == 2 ||
                    sixFreq == 2 && nineFreq == 2 || sixFreq == 2 && tenFreq == 2 || sixFreq == 2 && jackFreq == 2 || sixFreq == 2 && queenFreq == 2 ||
                    sixFreq == 2 && kingFreq == 2 || sixFreq == 2 && aceFreq == 2 || sevenFreq == 2 && eightFreq == 2 || sevenFreq == 2 && nineFreq == 2 ||
                    sevenFreq == 2 && tenFreq == 2 || sevenFreq == 2 && jackFreq == 2 || sevenFreq == 2 && queenFreq == 2 || sevenFreq == 2 && kingFreq == 2 ||
                    sevenFreq == 2 && aceFreq == 2 || eightFreq == 2 && nineFreq == 2 || eightFreq == 2 && tenFreq == 2 || eightFreq == 2 && jackFreq == 2 ||
                    eightFreq == 2 && queenFreq == 2 || eightFreq == 2 && kingFreq == 2 || eightFreq == 2 && aceFreq == 2 || nineFreq == 2 && tenFreq == 2 ||
                    nineFreq == 2 && jackFreq == 2 || nineFreq == 2 && queenFreq == 2 || nineFreq == 2 && kingFreq == 2 || nineFreq == 2 && aceFreq == 2 ||
                    tenFreq == 2 && jackFreq == 2 || tenFreq == 2 && queenFreq == 2 || tenFreq == 2 && kingFreq == 2 || tenFreq == 2 && aceFreq == 2 ||
                    jackFreq == 2 && queenFreq == 2 || jackFreq == 2 && kingFreq == 2 || jackFreq == 2 && aceFreq == 2 || queenFreq == 2 && kingFreq == 2 || 
                    queenFreq == 2 && aceFreq == 2 || kingFreq == 2 && aceFreq == 2) {

                    std::cout << twoPairCard.first << "\n";

                    points2 += twoPairCard.second;
                    std::cout << "Your score section: " << points2 << "\n";
                    std::cout << "Your highest card: " << "___" << "\n";
                }

                // PAIR
                else if (twoFreq == 2 || threeFreq == 2 || fourFreq == 2 || fiveFreq == 2 || sixFreq == 2 || sevenFreq == 2 || eightFreq == 2 || 
                        nineFreq == 2 || tenFreq == 2 || jackFreq == 2 || queenFreq == 2 || kingFreq == 2 || aceFreq == 2) {

                    std::cout << pairCard.first << "\n";
                
                    points2 += pairCard.second;
                    std::cout << "Your score section: " << points2 << "\n";
                    std::cout << "Your highest card: " << "___" << "\n";
                }

                // HIGH CARD
                else {
                    
                    std::cout << highCard.first << "\n";

                    points2 += highCard.second;
                    std::cout << "Your score section: " << points2 << "\n";
                    std::cout << "Your highest card: " << "___" << "\n";
                }

                horizonLine2.reserve(handDeck2.size());

                for (const auto& a : handDeck2) {
                    horizonLine2.emplace_back(a);
                }

                while (bashLines2) {

                    bashLines2 = false;

                    for (auto& a : horizonLine2) {
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

                turn++;
                break;
            }
        }
    }
    pokerResult->twoPlayerResults(points2, points2);
    return points2;
}

void Poker::twoPlayerResults(std::size_t& points, std::size_t& points2) {

    if (points > points2) {

        std::cout << "[PLAYER 1 WINS]\n\n";
        std::cout << "Player 1 scores: " << points << "\n";
        std::cout << "Player 2 scores: " << points2 << "\n";
    }
    else if (points < points2) {

        std::cout << "[PLAYER 2 WINS]\n\n";
        std::cout << "Player 1 scores: " << points << "\n";
        std::cout << "Player 2 scores: " << points2 << "\n";
    }
    else {

        std::cout << "[DRAW]\n\n";
        std::cout << "Player 1 scores: " << points << "\n";
        std::cout << "Player 2 scores: " << points2 << "\n";
    }

}

