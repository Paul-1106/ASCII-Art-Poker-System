#ifndef PONEPOKER_H
#define PONEPOKER_H

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
#include <mylib/pTwoPoker.h>

class Poker;
class PlayerTwoPoker;

class PlayerOnePoker : public Poker {
public:
    Poker* pokerLink;
    PlayerTwoPoker* pokerTwoLink;

    void setLink(Poker* pokerGame) {
        pokerLink = pokerGame;
    }

    void setLink(PlayerTwoPoker* playerTwo) {
        pokerTwoLink = playerTwo;
    }

    // Main player 1 function in onePlayer.cpp file
    int player1(std::size_t& points);

private:
    std::vector<std::string> handDeck1;
    std::size_t& points;
};

#endif // PONEPOKER_H