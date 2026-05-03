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
    void onePlayer(double& credit, size_t creditRequirement);
    void twoPlayers();
    void credits(double& credit);
    void instructions();
    void freeCredits(double& credit);
    void cards(std::string& twoH, std::string& twoD, std::string& twoC, std::string& twoS, std::string& twoQ, std::string& threeH,
         std::string& threeD, std::string& threeC, std::string& threeS, std::string& threeQ, std::string& fourH, std::string& fourD,
         std::string& fourC, std::string& fourS, std::string& fourQ, std::string& fiveH, std::string& fiveD, std::string& fiveC,
         std::string& fiveS, std::string& fiveQ, std::string& sixH, std::string& sixD, std::string& sixC, std::string& sixS, 
         std::string& sixQ, std::string& sevenH, std::string& sevenD, std::string& sevenC, std::string& sevenS, std::string& sevenQ,
         std::string& eightH, std::string& eightD, std::string& eightC, std::string& eightS, std::string& eightQ, std::string& nineH,
         std::string& nineD, std::string& nineC, std::string& nineS, std::string& nineQ, std::string& tenH, std::string& tenD,
         std::string& tenC, std::string& tenS, std::string& tenQ, std::string& jackH, std::string& jackD, std::string& jackC, std::string& jackS,
         std::string& jackQ, std::string& queenH, std::string& queenD, std::string& queenC, std::string& queenS, std::string& queenQ,
         std::string& kingH, std::string& kingD, std::string& kingC, std::string& kingS, std::string& kingQ, std::string aceH, 
         std::string& aceD, std::string& aceC, std::string& aceS, std::string& aceQ);
    
private:
    double credit;
    size_t creditRequirement;
    int points = 0;
};

#endif // POKER_H