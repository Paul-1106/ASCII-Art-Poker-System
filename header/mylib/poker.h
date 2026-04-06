#ifndef POKER_H
#define POKER_H

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iterator>
#include <random>


class Poker {
public:

    void onePlayer(size_t& credit, size_t creditRequirement);
    void twoPlayers();
    void credits(size_t& credit);
    void instructions();
    void freeCredits(size_t& credit);
    void cards();
    size_t credit;

private:

    int creditRequirement = 100;
    int points = 0;
    const std::string twoH, twoD, twoC, twoS, twoQ, threeH, threeD, threeC, threeS, threeQ, fourH, fourD, fourC, fourS, fourQ, fiveH, fiveD, fiveC, fiveS, 
    fiveQ, sixH, sixD, sixC, sixS, sixQ, sevenH, sevenD, sevenC, sevenS, sevenQ, eightH, eightD, eightC, eightS, eightQ, nineH, nineD, nineC, nineS, nineQ, 
    tenH, tenD, tenC, tenS, tenQ, jackH, jackD, jackC, jackS, jackQ, queenH, queenD, queenC, queenS, queenQ, kingH, kingD, kingC, kingS, kingQ, aceH, aceD, 
    aceC, aceS, aceQ;

};

#endif // POKER_H