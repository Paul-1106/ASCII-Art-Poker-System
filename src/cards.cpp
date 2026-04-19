#include <iostream>
#include <string>
#include <vector>
#include <cmath>

#include <mylib/poker.h>

void Poker::cards(std::string& twoH, std::string& twoD, std::string& twoC, std::string& twoS, std::string& twoQ, std::string& threeH,
         std::string& threeD, std::string& threeC, std::string& threeS, std::string& threeQ, std::string& fourH, std::string& fourD,
         std::string& fourC, std::string& fourS, std::string& fourQ, std::string& fiveH, std::string& fiveD, std::string& fiveC,
         std::string& fiveS, std::string& fiveQ, std::string& sixH, std::string& sixD, std::string& sixC, std::string& sixS, 
         std::string& sixQ, std::string& sevenH, std::string& sevenD, std::string& sevenC, std::string& sevenS, std::string& sevenQ,
         std::string& eightH, std::string& eightD, std::string& eightC, std::string& eightS, std::string& eightQ, std::string& nineH,
         std::string& nineD, std::string& nineC, std::string& nineS, std::string& nineQ, std::string& tenH, std::string& tenD,
         std::string& tenC, std::string& tenS, std::string& tenQ, std::string& jackH, std::string& jackD, std::string& jackC, std::string& jackS,
         std::string& jackQ, std::string& queenH, std::string& queenD, std::string& queenC, std::string& queenS, std::string& queenQ,
         std::string& kingH, std::string& kingD, std::string& kingC, std::string& kingS, std::string& kingQ, std::string aceH, 
         std::string& aceD, std::string& aceC, std::string& aceS, std::string& aceQ) {

    twoH = "***********\n" // Suit: Heart
           "*  ooooo H*\n"
           "*      o  *\n"
           "*  ooooo  *\n"
           "*  o      *\n"
           "*  ooooo  *\n"
           "***********\n";
    
    twoD = "***********\n" // Suit: Diamond
           "*  ooooo D*\n"
           "*      o  *\n"
           "*  ooooo  *\n"
           "*  o      *\n"
           "*  ooooo  *\n"
           "***********\n";

    twoC = "***********\n" // Suit: Clover
           "*  ooooo C*\n"
           "*      o  *\n"
           "*  ooooo  *\n"
           "*  o      *\n"
           "*  ooooo  *\n"
           "***********\n";

    twoS = "***********\n" // Suit: Spade
           "*  ooooo S*\n"
           "*      o  *\n"
           "*  ooooo  *\n"
           "*  o      *\n"
           "*  ooooo  *\n"
           "***********\n";

    twoQ = "***********\n" // Suit: Quatrefoil
           "*  ooooo Q*\n"
           "*      o  *\n"
           "*  ooooo  *\n"
           "*  o      *\n"
           "*  ooooo  *\n"
           "***********\n";

    threeH = "***********\n" 
             "*  ooooo H*\n"
             "*      o  *\n"
             "*  ooooo  *\n"
             "*      o  *\n"
             "*  ooooo  *\n"
             "***********\n";
    
    threeD = "***********\n" 
             "*  ooooo D*\n"
             "*      o  *\n"
             "*  ooooo  *\n"
             "*      o  *\n"
             "*  ooooo  *\n"
             "***********\n";

    threeC = "***********\n"
             "*  ooooo C*\n"
             "*      o  *\n"
             "*  ooooo  *\n"
             "*      o  *\n"
             "*  ooooo  *\n"
            "***********\n";

    threeS = "***********\n" 
             "*  ooooo S*\n"
             "*      o  *\n"
             "*  ooooo  *\n"
             "*      o  *\n"
             "*  ooooo  *\n"
             "***********\n";

    threeQ = "***********\n" 
             "*  ooooo Q*\n"
             "*      o  *\n"
             "*  ooooo  *\n"
             "*      o  *\n"
             "*  ooooo  *\n"
             "***********\n";

    fourH = "***********\n" 
            "*  o   o H*\n"
            "*  o   o  *\n"
            "*  ooooo  *\n"
            "*      o  *\n"
            "*      o  *\n"
            "***********\n";
    
    fourD = "***********\n" 
            "*  o   o D*\n"
            "*  o   o  *\n"
            "*  ooooo  *\n"
            "*      o  *\n"
            "*      o  *\n"
            "***********\n";

    fourC = "***********\n"
            "*  o   o C*\n"
            "*  o   o  *\n"
            "*  ooooo  *\n"
            "*      o  *\n"
            "*      o  *\n"
            "***********\n";

    fourS = "***********\n" 
            "*  o   o S*\n"
            "*  o   o  *\n"
            "*  ooooo  *\n"
            "*      o  *\n"
            "*      o  *\n"
            "***********\n";

    fourQ = "***********\n" 
            "*  o   o Q*\n"
            "*  o   o  *\n"
            "*  ooooo  *\n"
            "*      o  *\n"
            "*      o  *\n"
            "***********\n";

    fiveH = "***********\n" 
            "*  ooooo H*\n"
            "*  o      *\n"
            "*  ooooo  *\n"
            "*      o  *\n"
            "*  ooooo  *\n"
            "***********\n";
    
    fiveD = "***********\n" 
            "*  ooooo D*\n"
            "*  o      *\n"
            "*  ooooo  *\n"
            "*      o  *\n"
            "*  ooooo  *\n"
            "***********\n";

    fiveC = "***********\n"
            "*  ooooo C*\n"
            "*  o      *\n"
            "*  ooooo  *\n"
            "*      o  *\n"
            "*  ooooo  *\n"
            "***********\n";

    fiveS = "***********\n" 
            "*  ooooo S*\n"
            "*  o      *\n"
            "*  ooooo  *\n"
            "*      o  *\n"
            "*  ooooo  *\n"
            "***********\n";

    fiveQ = "***********\n" 
            "*  ooooo Q*\n"
            "*  o      *\n"
            "*  ooooo  *\n"
            "*      o  *\n"
            "*  ooooo  *\n"
            "***********\n";

    sixH = "***********\n"
           "*  ooooo H*\n"
           "*  o      *\n"
           "*  ooooo  *\n"
           "*  o   o  *\n"
           "*  ooooo  *\n"
           "***********\n";
    
    sixD = "***********\n" 
           "*  ooooo D*\n"
           "*  o      *\n"
           "*  ooooo  *\n"
           "*  o   o  *\n"
           "*  ooooo  *\n"
           "***********\n";

    sixC = "***********\n" 
           "*  ooooo C*\n"
           "*  o      *\n"
           "*  ooooo  *\n"
           "*  o   o  *\n"
           "*  ooooo  *\n"
           "***********\n";

    sixS = "***********\n" 
           "*  ooooo S*\n"
           "*  o      *\n"
           "*  ooooo  *\n"
           "*  o   o  *\n"
           "*  ooooo  *\n"
           "***********\n";

    sixQ = "***********\n" 
           "*  ooooo Q*\n"
           "*  o      *\n"
           "*  ooooo  *\n"
           "*  o   o  *\n"
           "*  ooooo  *\n"
           "***********\n";

    sevenH = "***********\n" 
             "*  ooooo H*\n"
             "*      o  *\n"
             "*     o   *\n"
             "*     o   *\n"
             "*     o   *\n"
             "***********\n";
    
    sevenD = "***********\n" 
             "*  ooooo D*\n"
             "*      o  *\n"
             "*     o   *\n"
             "*     o   *\n"
             "*     o   *\n"
             "***********\n";

    sevenC = "***********\n"
             "*  ooooo C*\n"
             "*      o  *\n"
             "*     o   *\n"
             "*     o   *\n"
             "*     o   *\n"
             "***********\n";

    sevenS = "***********\n" 
             "*  ooooo S*\n"
             "*      o  *\n"
             "*     o   *\n"
             "*     o   *\n"
             "*     o   *\n"
             "***********\n";

    sevenQ = "***********\n" 
             "*  ooooo Q*\n"
             "*      o  *\n"
             "*     o   *\n"
             "*     o   *\n"
             "*     o   *\n"
             "***********\n";

    eightH = "***********\n" 
             "*  ooooo H*\n"
             "*  o   o  *\n"
             "*  ooooo  *\n"
             "*  o   o  *\n"
             "*  ooooo  *\n"
             "***********\n";
    
    eightD = "***********\n" 
             "*  ooooo D*\n"
             "*  o   o  *\n"
             "*  ooooo  *\n"
             "*  o   o  *\n"
             "*  ooooo  *\n"
             "***********\n";

    eightC = "***********\n"
             "*  ooooo C*\n"
             "*  o   o  *\n"
             "*  ooooo  *\n"
             "*  o   o  *\n"
             "*  ooooo  *\n"
             "***********\n";

    eightS = "***********\n" 
             "*  ooooo S*\n"
             "*  o   o  *\n"
             "*  ooooo  *\n"
             "*  o   o  *\n"
             "*  ooooo  *\n"
             "***********\n";

    eightQ = "***********\n" 
             "*  ooooo Q*\n"
             "*  o   o  *\n"
             "*  ooooo  *\n"
             "*  o   o  *\n"
             "*  ooooo  *\n"
             "***********\n";

    nineH = "***********\n" 
            "*  ooooo H*\n"
            "*  o   o  *\n"
            "*  ooooo  *\n"
            "*      o  *\n"
            "*  ooooo  *\n"
            "***********\n";
    
    nineD = "***********\n" 
            "*  ooooo D*\n"
            "*  o   o  *\n"
            "*  ooooo  *\n"
            "*      o  *\n"
            "*  ooooo  *\n"
            "***********\n";

    nineC = "***********\n"
            "*  ooooo C*\n"
            "*  o   o  *\n"
            "*  ooooo  *\n"
            "*      o  *\n"
            "*  ooooo  *\n"
            "***********\n";

    nineS = "***********\n" 
            "*  ooooo S*\n"
            "*  o   o  *\n"
            "*  ooooo  *\n"
            "*      o  *\n"
            "*  ooooo  *\n"
            "***********\n";

    nineQ = "***********\n" 
            "*  ooooo Q*\n"
            "*  o   o  *\n"
            "*  ooooo  *\n"
            "*      o  *\n"
            "*  ooooo  *\n"
            "***********\n";

    tenH = "***********\n"
           "*  ooooo H*\n"
           "*    o    *\n"
           "*    o    *\n"
           "*    o    *\n"
           "*    o    *\n"
           "***********\n";
    
    tenD = "***********\n" 
           "*  ooooo D*\n"
           "*    o    *\n"
           "*    o    *\n"
           "*    o    *\n"
           "*    o    *\n"
           "***********\n";

    tenC = "***********\n" 
           "*  ooooo C*\n"
           "*    o    *\n"
           "*    o    *\n"
           "*    o    *\n"
           "*    o    *\n"
           "***********\n";

    tenS = "***********\n" 
           "*  ooooo S*\n"
           "*    o    *\n"
           "*    o    *\n"
           "*    o    *\n"
           "*    o    *\n"
           "***********\n";

    tenQ = "***********\n" 
           "*  ooooo Q*\n"
           "*    o    *\n"
           "*    o    *\n"
           "*    o    *\n"
           "*    o    *\n"
           "***********\n";

    jackH = "***********\n" 
            "*  ooooo H*\n"
            "*    o    *\n"
            "*    o    *\n"
            "*  o o    *\n"
            "*  ooo    *\n"
            "***********\n";
    
    jackD = "***********\n" 
            "*  ooooo D*\n"
            "*    o    *\n"
            "*    o    *\n"
            "*  o o    *\n"
            "*  ooo    *\n"
            "***********\n";

    jackC = "***********\n"
            "*  ooooo C*\n"
            "*    o    *\n"
            "*    o    *\n"
            "*  o o    *\n"
            "*  ooo    *\n"
            "***********\n";

    jackS = "***********\n" 
            "*  ooooo S*\n"
            "*    o    *\n"
            "*    o    *\n"
            "*  o o    *\n"
            "*  ooo    *\n"
            "***********\n";

    jackQ = "***********\n" 
            "*  ooooo Q*\n"
            "*    o    *\n"
            "*    o    *\n"
            "*  o o    *\n"
            "*  ooo    *\n"
            "***********\n";

    queenH = "***********\n" 
             "* oooooo H*\n"
             "* o    o  *\n"
             "* oooooo  *\n"
             "*  o      *\n"
             "*  ooo    *\n"
             "***********\n";
    
    queenD = "***********\n" 
             "* oooooo D*\n"
             "* o    o  *\n"
             "* oooooo  *\n"
             "*  o      *\n"
             "*  ooo    *\n"
             "***********\n";

    queenC = "***********\n"
             "* oooooo C*\n"
             "* o    o  *\n"
             "* oooooo  *\n"
             "*  o      *\n"
             "*  ooo    *\n"
             "***********\n";

    queenS = "***********\n" 
             "* oooooo S*\n"
             "* o    o  *\n"
             "* oooooo  *\n"
             "*  o      *\n"
             "*  ooo    *\n"
             "***********\n";

    queenQ = "***********\n" 
             "* oooooo Q*\n"
             "* o    o  *\n"
             "* oooooo  *\n"
             "*  o      *\n"
             "*  ooo    *\n"
             "***********\n";

    kingH = "***********\n" 
            "*  o  oo H*\n"
            "*  o o    *\n"
            "*  oo     *\n"
            "*  o o    *\n"
            "*  o  oo  *\n"
            "***********\n";
    
    kingD = "***********\n" 
            "*  o  oo D*\n"
            "*  o o    *\n"
            "*  oo     *\n"
            "*  o o    *\n"
            "*  o  oo  *\n"
            "***********\n";

    kingC = "***********\n"
            "*  o  oo C*\n"
            "*  o o    *\n"
            "*  oo     *\n"
            "*  o o    *\n"
            "*  o  oo  *\n"
            "***********\n";

    kingS = "***********\n" 
            "*  o  oo S*\n"
            "*  o o    *\n"
            "*  oo     *\n"
            "*  o o    *\n"
            "*  o  oo  *\n"
            "***********\n";

    kingQ = "***********\n" 
            "*  o  oo Q*\n"
            "*  o o    *\n"
            "*  oo     *\n"
            "*  o o    *\n"
            "*  o  oo  *\n"
            "***********\n";

    aceH = "***********\n"
           "*  ooooo H*\n"
           "*  o   o  *\n"
           "*  ooooo  *\n"
           "*  o   o  *\n"
           "*  o   o  *\n"
           "***********\n";
    
    aceD = "***********\n" 
           "*  ooooo D*\n"
           "*  o   o  *\n"
           "*  ooooo  *\n"
           "*  o   o  *\n"
           "*  o   o  *\n"
           "***********\n";

    aceC = "***********\n" 
           "*  ooooo C*\n"
           "*  o   o  *\n"
           "*  ooooo  *\n"
           "*  o   o  *\n"
           "*  o   o  *\n"
           "***********\n";

    aceS = "***********\n" 
           "*  ooooo S*\n"
           "*  o   o  *\n"
           "*  ooooo  *\n"
           "*  o   o  *\n"
           "*  o   o  *\n"
           "***********\n";

    aceQ = "***********\n" 
           "*  ooooo Q*\n"
           "*  o   o  *\n"
           "*  ooooo  *\n"
           "*  o   o  *\n"
           "*  o   o  *\n"
           "***********\n";
}