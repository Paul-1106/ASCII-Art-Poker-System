#include <iostream>
#include <string>
#include <vector>
#include <cmath>

#include <mylib/poker.h>
#include <mylib/pOnePoker.h>
#include <mylib/pTwoPoker.h>

void Poker::twoPlayers(std::size_t& points, std::size_t& points2) {

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

    // All the frequency char variables that are added will be push to integer variable for better code quality
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

    return points;
}

int PlayerTwoPoker::player2(std::size_t& points2) {

    return points2;
}

