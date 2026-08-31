#include <iostream>
#include <string>
#include <vector>
#include <cmath>

#include <mylib/poker.h>

void Poker::onePlayer(double& credit, std::size_t creditRequirement) {

    char quit = 'q';
    std::size_t turn = 0;
    double creditBet;
    double creditReward;
    std::size_t points = 0;
    char cardChange;
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
    std::pair<std::string, double> twoPairCard = {"[TWO PAIRS]", 2.5};
    std::pair<std::string, double> threeKindCard = {"[THREE OF A KIND]", 5.0};
    std::pair<std::string, double> straightCard = {"[STRAIGHT]", 8.5};
    std::pair<std::string, double> flushCard = {"[FLUSH]", 10.0};
    std::pair<std::string, double> fullHouseCard = {"[FULL HOUSE]", 13.5};
    std::pair<std::string, double> fourKindCard = {"[FOUR OF A KIND]", 20.0};
    std::pair<std::string, double> straightFlushCard = {"[STRAIGHT FLUSH]", 35.5};
    std::pair<std::string, double> royalFlushCard = {"[ROYAL FLUSH]", 50.0};
    std::pair<std::string, double> fiveKindCard = {"[FIVE OF A KIND]", 100.0}; 

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

                for (int i{0}; i < handDeck.size(); ++i) {

                    turn++;

                    std::cout << "You have bet $" << creditBet << " credits\n\n";
                    credit -= creditBet;

                    // Random card selector (1/5)
                    unsigned random1 = std::chrono::system_clock::now().time_since_epoch().count();
                    std::mt19937 mEngine(random1);
                    std::uniform_int_distribution<std::size_t> dist(0, pokerCards.size() - 1);
                    handDeck[i] = pokerCards[dist(mEngine)];

                    //Random card selector (2/5)
                    unsigned random2 = std::chrono::system_clock::now().time_since_epoch().count();
                    std::mt19937 mEngine2(random2);
                    std::uniform_int_distribution<std::size_t> dist2(0, pokerCards.size() - 1);
                    handDeck[i + 1] = pokerCards[dist2(mEngine2)];

                    //Random card selector (3/5)
                    unsigned random3 = std::chrono::system_clock::now().time_since_epoch().count();
                    std::mt19937 mEngine3(random3);
                    std::uniform_int_distribution<std::size_t> dist3(0, pokerCards.size() - 1);
                    handDeck[i + 2] = pokerCards[dist3(mEngine3)];

                    //Random card selector (4/5)
                    unsigned random4 = std::chrono::system_clock::now().time_since_epoch().count();
                    std::mt19937 mEngine4(random4);
                    std::uniform_int_distribution<std::size_t> dist4(0, pokerCards.size() - 1);
                    handDeck[i + 3] = pokerCards[dist4(mEngine4)];

                    // Random card selector (5/5)
                    unsigned random5 = std::chrono::system_clock::now().time_since_epoch().count();
                    std::mt19937 mEngine5(random5);
                    std::uniform_int_distribution<std::size_t> dist5(0, pokerCards.size() - 1);
                    handDeck[i + 4] = pokerCards[dist5(mEngine5)];                

                    handDeck = {handDeck[i], handDeck[i + 1], handDeck[i + 2], handDeck[i + 3], handDeck[i + 4]};
                    std::vector<std::stringstream> buffers, buffers2, buffers3;
                    buffers.reserve(handDeck.size());

                    // Poker hand from 1-5 will move to stringstream vector for line break
                    for (const auto& a : handDeck) {
                        buffers.emplace_back(a);
                    }

                    bool bashLines = true;
                    bool bashLines2 = true;
                    bool bashLines3 = true;

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

                    // Count the frequency for card #1
                    for (char& card : handDeck[i]) {

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
                    for (char& card : handDeck[i + 1]) {

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
                    for (char& card : handDeck[i + 2]) {

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
                    for (char& card : handDeck[i + 3]) {

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
                    for (char& card : handDeck[i + 4]) {

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

                    std::cout << "Swap cards or pass? \nS = Swap \nP = Pass\n\n";
                    std::cin >> swap;

                    if (swap == 's' || swap == 'S') {

                        std::size_t cardNum = 1;
                        std::size_t newRand1 = dist(mEngine);
                        std::size_t newRand2 = dist2(mEngine2);
                        std::size_t newRand3 = dist3(mEngine3);
                        std::size_t newRand4 = dist4(mEngine4);
                        std::size_t newRand5 = dist5(mEngine5);
                        // handDeck[i] = pokerCards[dist(mEngine)];
                        // handDeck[i + 1] = pokerCards[dist2(mEngine2)];
                        // handDeck[i + 2] = pokerCards[dist3(mEngine3)];
                        // handDeck[i + 3] = pokerCards[dist4(mEngine4)];
                        // handDeck[i + 4] = pokerCards[dist5(mEngine5)];

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

                        while (cardNum <= 5) { 

                            std::cout << "[CARD " << cardNum << "]" << "\n";
                            std::cout << "Change card " << cardNum << "?\n\n";
                            std::cin >> cardChange;

                            if (cardChange == 'y' || cardChange == 'Y') {

                                std::uniform_int_distribution<std::size_t> dist(0, pokerCards.size() - 1);
                                pokerCards[newRand1] = newRand1;
                                handDeck[i] = pokerCards[newRand1];
                                i++;
                                cardNum++;
                            }

                            if (cardChange == 'n' || cardChange == 'N') {
                                i++;
                                cardNum++;
                            }

                            if (cardChange != 'y' && cardChange != 'Y' && cardChange != 'n' && cardChange != 'N') {
                                std::cout << "[INVALID OPTION] Select 'Y' or 'N' as an option.\n";
                            }

                        }

                        for (char& card : handDeck[i]) {

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

                        for (char& card : handDeck[i + 1]) {

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

                        for (char& card : handDeck[i + 2]) {

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

                        for (char& card : handDeck[i + 3]) {

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

                        for (char& card : handDeck[i + 4]) {

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

                            creditReward = creditBet * fiveKindCard.second;
                            std::cout << "You have recieved $" << creditReward << "\n";
                            credit += creditReward;

                        }

                        // ROYAL FLUSH
                        else if (tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && kingFreq == 1 && aceFreq == 1 && heartFreq == 5 ||
                            tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && kingFreq == 1 && aceFreq == 1 && diamondFreq == 5 ||
                            tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && kingFreq == 1 && aceFreq == 1 && clubFreq == 5 ||
                            tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && kingFreq == 1 && aceFreq == 1 && spadeFreq == 5 ||
                            tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && kingFreq == 1 && aceFreq == 1 && quatrefoilFreq == 5) {

                            std::cout << royalFlushCard.first << "\n";

                            creditReward = creditBet * royalFlushCard.second;
                            std::cout << "You have recieved $" << creditReward << "\n";
                            credit += creditReward;

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

                            creditReward = creditBet * straightFlushCard.second;
                            std::cout << "You have recieved $" << creditReward << "\n";
                            credit += creditReward;

                        }

                        // FOUR OF A KIND
                        else if (aceFreq == 4 || twoFreq == 4 || threeFreq == 4 || fourFreq == 4 || fiveFreq == 4 || sixFreq == 4 || sevenFreq == 4 || eightFreq == 4 ||
                            nineFreq == 4 || tenFreq == 4 || jackFreq == 4 || queenFreq == 4 || kingFreq == 4) {

                            std::cout << fourKindCard.first << "\n";

                            creditReward = creditBet * fourKindCard.second;
                            std::cout << "You have received $" << creditReward << "\n";
                            credit += creditReward;
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

                            creditReward = creditBet * fullHouseCard.second;
                            std::cout << "You have recieved $" << creditReward << "\n";
                            credit += creditReward;

                        }

                        // FLUSH
                        else if (heartFreq == 5 || diamondFreq == 5 || clubFreq == 5 || spadeFreq == 5 || quatrefoilFreq == 5) {

                            std::cout << flushCard.first << "\n";

                            creditReward = creditBet * flushCard.second;
                            std::cout << "You have received $" << creditReward << "\n";
                            credit += creditReward;
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

                            creditReward = creditBet * straightCard.second;
                            std::cout << "You have recieved $" << creditReward << "\n";
                            credit += creditReward;

                        }

                        // THREE OF A KIND
                        else if (twoFreq == 3 || threeFreq == 3 || fourFreq == 3 || fiveFreq == 3 || sixFreq == 3 || sevenFreq == 3 || eightFreq == 3 || 
                            nineFreq == 3 || tenFreq == 3 || jackFreq == 3 || queenFreq == 3 || kingFreq == 3 || aceFreq == 3) {

                            std::cout << threeKindCard.first << "\n";

                            creditReward = creditBet * threeKindCard.second;
                            std::cout << "You have recieved $" << creditReward << "\n";
                            credit += creditReward;
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

                            creditReward = creditBet * twoPairCard.second;
                            std::cout << "You have recieved $" << creditReward << "\n";
                            credit += creditReward;
                        }

                        // PAIR
                        else if (twoFreq == 2 || threeFreq == 2 || fourFreq == 2 || fiveFreq == 2 || sixFreq == 2 || sevenFreq == 2 || eightFreq == 2 || 
                                nineFreq == 2 || tenFreq == 2 || jackFreq == 2 || queenFreq == 2 || kingFreq == 2 || aceFreq == 2) {

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

                        buffers3.reserve(handDeck.size());

                        for (const auto& a : handDeck) {
                            buffers3.emplace_back(a);
                        }

                        while (bashLines3) {

                            bashLines3 = false;

                            for (auto& a : buffers3) {
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

                            creditReward = creditBet * fiveKindCard.second;
                            std::cout << "You have recieved $" << creditReward << "\n";
                            credit += creditReward;

                        }

                        // ROYAL FLUSH
                        else if (tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && kingFreq == 1 && aceFreq == 1 && heartFreq == 5 ||
                            tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && kingFreq == 1 && aceFreq == 1 && diamondFreq == 5 ||
                            tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && kingFreq == 1 && aceFreq == 1 && clubFreq == 5 ||
                            tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && kingFreq == 1 && aceFreq == 1 && spadeFreq == 5 ||
                            tenFreq == 1 && jackFreq == 1 && queenFreq == 1 && kingFreq == 1 && aceFreq == 1 && quatrefoilFreq == 5) {

                            std::cout << royalFlushCard.first << "\n";

                            creditReward = creditBet * royalFlushCard.second;
                            std::cout << "You have recieved $" << creditReward << "\n";
                            credit += creditReward;

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

                            creditReward = creditBet * straightFlushCard.second;
                            std::cout << "You have recieved $" << creditReward << "\n";
                            credit += creditReward;

                        }

                        // FOUR OF A KIND
                        else if (aceFreq == 4 || twoFreq == 4 || threeFreq == 4 || fourFreq == 4 || fiveFreq == 4 || sixFreq == 4 || sevenFreq == 4 || eightFreq == 4 ||
                            nineFreq == 4 || tenFreq == 4 || jackFreq == 4 || queenFreq == 4 || kingFreq == 4) {

                            std::cout << fourKindCard.first << "\n";

                            creditReward = creditBet * fourKindCard.second;
                            std::cout << "You have received $" << creditReward << "\n";
                            credit += creditReward;
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

                            creditReward = creditBet * fullHouseCard.second;
                            std::cout << "You have recieved $" << creditReward << "\n";
                            credit += creditReward;

                        }

                        // FLUSH
                        else if (heartFreq == 5 || diamondFreq == 5 || clubFreq == 5 || spadeFreq == 5 || quatrefoilFreq == 5) {

                            std::cout << flushCard.first << "\n";

                            creditReward = creditBet * flushCard.second;
                            std::cout << "You have received $" << creditReward << "\n";
                            credit += creditReward;
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

                            creditReward = creditBet * straightCard.second;
                            std::cout << "You have recieved $" << creditReward << "\n";
                            credit += creditReward;

                        }

                        // THREE OF A KIND
                        else if (twoFreq == 3 || threeFreq == 3 || fourFreq == 3 || fiveFreq == 3 || sixFreq == 3 || sevenFreq == 3 || eightFreq == 3 || 
                            nineFreq == 3 || tenFreq == 3 || jackFreq == 3 || queenFreq == 3 || kingFreq == 3 || aceFreq == 3) {

                            std::cout << threeKindCard.first << "\n";

                            creditReward = creditBet * threeKindCard.second;
                            std::cout << "You have recieved $" << creditReward << "\n";
                            credit += creditReward;
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

                            creditReward = creditBet * twoPairCard.second;
                            std::cout << "You have recieved $" << creditReward << "\n";
                            credit += creditReward;
                        }

                        // PAIR
                        else if (twoFreq == 2 || threeFreq == 2 || fourFreq == 2 || fiveFreq == 2 || sixFreq == 2 || sevenFreq == 2 || eightFreq == 2 || 
                                nineFreq == 2 || tenFreq == 2 || jackFreq == 2 || queenFreq == 2 || kingFreq == 2 || aceFreq == 2) {

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
                        turn++;
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
    }
}