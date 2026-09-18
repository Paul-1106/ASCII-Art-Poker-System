#ifndef PTWOPOKER_H
#define PTWOPOKER_H

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iterator>
#include <random>
#include <variant>
#include <unordered_set>
#include <unordered_map>
#include <chrono>
#include <sstream>

#include <mylib/poker.h>
#include <mylib/pOnePoker.h>

class Poker;
class PlayerOnePoker;

class PlayerTwoPoker : public Poker {
public:
    Poker* pokerLink;
    PlayerOnePoker* pokerOneLink; 
    
    void setLink(Poker* pokerGame) {
        pokerLink = pokerGame;
    }

    void setLink(PlayerOnePoker* playerOne) {
        pokerOneLink = playerOne;
    }

    // main player 2 function in twoPlayer.cpp file
    int player2(std::size_t& points2);

private:
    std::vector<std::string> handDeck2;
    std::size_t& points2;
};

#endif // PTWOPOKER_H