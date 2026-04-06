#include <iostream>
#include <string>
#include <vector>
#include <cmath>

#include <mylib/poker.h>

void Poker::cards() {

    const std::string twoH = "***********\n" // Suit: Heart
                       "*  ooooo H*\n"
                       "*      o  *\n"
                       "*  ooooo  *\n"
                       "*  o      *\n"
                       "*  ooooo  *\n"
                       "***********\n";
    
    const std::string twoD = "***********\n" // Suit: Diamond
                       "*  ooooo D*\n"
                       "*      o  *\n"
                       "*  ooooo  *\n"
                       "*  o      *\n"
                       "*  ooooo  *\n"
                       "***********\n";

    const std::string twoC = "***********\n" // Suit: Clover
                       "*  ooooo C*\n"
                       "*      o  *\n"
                       "*  ooooo  *\n"
                       "*  o      *\n"
                       "*  ooooo  *\n"
                       "***********\n";

    const std::string twoS = "***********\n" // Suit: Spade
                       "*  ooooo S*\n"
                       "*      o  *\n"
                       "*  ooooo  *\n"
                       "*  o      *\n"
                       "*  ooooo  *\n"
                       "***********\n";

    const std::string twoQ = "***********\n" // Suit: Quatrefoil
                       "*  ooooo Q*\n"
                       "*      o  *\n"
                       "*  ooooo  *\n"
                       "*  o      *\n"
                       "*  ooooo  *\n"
                       "***********\n";

    const std::string threeH = "***********\n" 
                         "*  ooooo H*\n"
                         "*      o  *\n"
                         "*  ooooo  *\n"
                         "*      o  *\n"
                         "*  ooooo  *\n"
                         "***********\n";
    
    const std::string threeD = "***********\n" 
                         "*  ooooo D*\n"
                         "*      o  *\n"
                         "*  ooooo  *\n"
                         "*      o  *\n"
                         "*  ooooo  *\n"
                         "***********\n";

    const std::string threeC = "***********\n"
                         "*  ooooo C*\n"
                         "*      o  *\n"
                         "*  ooooo  *\n"
                         "*      o  *\n"
                         "*  ooooo  *\n"
                         "***********\n";

    const std::string threeS = "***********\n" 
                         "*  ooooo S*\n"
                         "*      o  *\n"
                         "*  ooooo  *\n"
                         "*      o  *\n"
                         "*  ooooo  *\n"
                         "***********\n";

    const std::string threeQ = "***********\n" 
                         "*  ooooo Q*\n"
                         "*      o  *\n"
                         "*  ooooo  *\n"
                         "*      o  *\n"
                         "*  ooooo  *\n"
                         "***********\n";

    const std::string fourH = "***********\n" 
                        "*  o   o H*\n"
                        "*  o   o  *\n"
                        "*  ooooo  *\n"
                        "*      o  *\n"
                        "*      o  *\n"
                        "***********\n";
    
    const std::string fourD = "***********\n" 
                        "*  o   o D*\n"
                        "*  o   o  *\n"
                        "*  ooooo  *\n"
                        "*      o  *\n"
                        "*      o  *\n"
                        "***********\n";

    const std::string fourC = "***********\n"
                        "*  o   o C*\n"
                        "*  o   o  *\n"
                        "*  ooooo  *\n"
                        "*      o  *\n"
                        "*      o  *\n"
                        "***********\n";

    const std::string fourS = "***********\n" 
                        "*  o   o S*\n"
                        "*  o   o  *\n"
                        "*  ooooo  *\n"
                        "*      o  *\n"
                        "*      o  *\n"
                        "***********\n";

    const std::string fourQ = "***********\n" 
                        "*  o   o Q*\n"
                        "*  o   o  *\n"
                        "*  ooooo  *\n"
                        "*      o  *\n"
                        "*      o  *\n"
                        "***********\n";

    const std::string fiveH = "***********\n" 
                        "*  ooooo H*\n"
                        "*  o      *\n"
                        "*  ooooo  *\n"
                        "*      o  *\n"
                        "*  ooooo  *\n"
                        "***********\n";
    
    const std::string fiveD = "***********\n" 
                        "*  ooooo D*\n"
                        "*  o      *\n"
                        "*  ooooo  *\n"
                        "*      o  *\n"
                        "*  ooooo  *\n"
                        "***********\n";

    const std::string fiveC = "***********\n"
                        "*  ooooo C*\n"
                        "*  o      *\n"
                        "*  ooooo  *\n"
                        "*      o  *\n"
                        "*  ooooo  *\n"
                        "***********\n";

    const std::string fiveS = "***********\n" 
                        "*  ooooo S*\n"
                        "*  o      *\n"
                        "*  ooooo  *\n"
                        "*      o  *\n"
                        "*  ooooo  *\n"
                        "***********\n";

    const std::string fiveQ = "***********\n" 
                        "*  ooooo Q*\n"
                        "*  o      *\n"
                        "*  ooooo  *\n"
                        "*      o  *\n"
                        "*  ooooo  *\n"
                        "***********\n";

    const std::string sixH = "***********\n"
                       "*  ooooo H*\n"
                       "*  o      *\n"
                       "*  ooooo  *\n"
                       "*  o   o  *\n"
                       "*  ooooo  *\n"
                       "***********\n";
    
    const std::string sixD = "***********\n" 
                       "*  ooooo D*\n"
                       "*  o      *\n"
                       "*  ooooo  *\n"
                       "*  o   o  *\n"
                       "*  ooooo  *\n"
                       "***********\n";

    const std::string sixC = "***********\n" 
                       "*  ooooo C*\n"
                       "*  o      *\n"
                       "*  ooooo  *\n"
                       "*  o   o  *\n"
                       "*  ooooo  *\n"
                       "***********\n";

    const std::string sixS = "***********\n" 
                       "*  ooooo S*\n"
                       "*  o      *\n"
                       "*  ooooo  *\n"
                       "*  o   o  *\n"
                       "*  ooooo  *\n"
                       "***********\n";

    const std::string sixQ = "***********\n" 
                       "*  ooooo Q*\n"
                       "*  o      *\n"
                       "*  ooooo  *\n"
                       "*  o   o  *\n"
                       "*  ooooo  *\n"
                       "***********\n";

    const std::string sevenH = "***********\n" 
                         "*  ooooo H*\n"
                         "*      o  *\n"
                         "*     o   *\n"
                         "*     o   *\n"
                         "*     o   *\n"
                         "***********\n";
    
    const std::string sevenD = "***********\n" 
                         "*  ooooo D*\n"
                         "*      o  *\n"
                         "*     o   *\n"
                         "*     o   *\n"
                         "*     o   *\n"
                         "***********\n";

    const std::string sevenC = "***********\n"
                         "*  ooooo C*\n"
                         "*      o  *\n"
                         "*     o   *\n"
                         "*     o   *\n"
                         "*     o   *\n"
                         "***********\n";

    const std::string sevenS = "***********\n" 
                         "*  ooooo S*\n"
                         "*      o  *\n"
                         "*     o   *\n"
                         "*     o   *\n"
                         "*     o   *\n"
                         "***********\n";

    const std::string sevenQ = "***********\n" 
                         "*  ooooo Q*\n"
                         "*      o  *\n"
                         "*     o   *\n"
                         "*     o   *\n"
                         "*     o   *\n"
                         "***********\n";

    const std::string eightH = "***********\n" 
                         "*  ooooo H*\n"
                         "*  o   o  *\n"
                         "*  ooooo  *\n"
                         "*  o   o  *\n"
                         "*  ooooo  *\n"
                         "***********\n";
    
    const std::string eightD = "***********\n" 
                         "*  ooooo D*\n"
                         "*  o   o  *\n"
                         "*  ooooo  *\n"
                         "*  o   o  *\n"
                         "*  ooooo  *\n"
                         "***********\n";

    const std::string eightC = "***********\n"
                         "*  ooooo C*\n"
                         "*  o   o  *\n"
                         "*  ooooo  *\n"
                         "*  o   o  *\n"
                         "*  ooooo  *\n"
                         "***********\n";

    const std::string eightS = "***********\n" 
                         "*  ooooo S*\n"
                         "*  o   o  *\n"
                         "*  ooooo  *\n"
                         "*  o   o  *\n"
                         "*  ooooo  *\n"
                         "***********\n";

    const std::string eightQ = "***********\n" 
                         "*  ooooo Q*\n"
                         "*  o   o  *\n"
                         "*  ooooo  *\n"
                         "*  o   o  *\n"
                         "*  ooooo  *\n"
                         "***********\n";

    const std::string nineH = "***********\n" 
                        "*  ooooo H*\n"
                        "*  o   o  *\n"
                        "*  ooooo  *\n"
                        "*      o  *\n"
                        "*  ooooo  *\n"
                        "***********\n";
    
    const std::string nineD = "***********\n" 
                        "*  ooooo D*\n"
                        "*  o   o  *\n"
                        "*  ooooo  *\n"
                        "*      o  *\n"
                        "*  ooooo  *\n"
                        "***********\n";

    const std::string nineC = "***********\n"
                        "*  ooooo C*\n"
                        "*  o   o  *\n"
                        "*  ooooo  *\n"
                        "*      o  *\n"
                        "*  ooooo  *\n"
                        "***********\n";

    const std::string nineS = "***********\n" 
                        "*  ooooo S*\n"
                        "*  o   o  *\n"
                        "*  ooooo  *\n"
                        "*      o  *\n"
                        "*  ooooo  *\n"
                        "***********\n";

    const std::string nineQ = "***********\n" 
                        "*  ooooo Q*\n"
                        "*  o   o  *\n"
                        "*  ooooo  *\n"
                        "*      o  *\n"
                        "*  ooooo  *\n"
                        "***********\n";

    const std::string tenH = "***********\n"
                       "*  ooooo H*\n"
                       "*    o    *\n"
                       "*    o    *\n"
                       "*    o    *\n"
                       "*    o    *\n"
                       "***********\n";
    
    const std::string tenD = "***********\n" 
                       "*  ooooo D*\n"
                       "*    o    *\n"
                       "*    o    *\n"
                       "*    o    *\n"
                       "*    o    *\n"
                       "***********\n";

    const std::string tenC = "***********\n" 
                       "*  ooooo C*\n"
                       "*    o    *\n"
                       "*    o    *\n"
                       "*    o    *\n"
                       "*    o    *\n"
                       "***********\n";

    const std::string tenS = "***********\n" 
                       "*  ooooo S*\n"
                       "*    o    *\n"
                       "*    o    *\n"
                       "*    o    *\n"
                       "*    o    *\n"
                       "***********\n";

    const std::string tenQ = "***********\n" 
                       "*  ooooo Q*\n"
                       "*    o    *\n"
                       "*    o    *\n"
                       "*    o    *\n"
                       "*    o    *\n"
                       "***********\n";

    const std::string jackH = "***********\n" 
                        "*  ooooo H*\n"
                        "*    o    *\n"
                        "*    o    *\n"
                        "*  o o    *\n"
                        "*  ooo    *\n"
                        "***********\n";
    
    const std::string jackD = "***********\n" 
                        "*  ooooo D*\n"
                        "*    o    *\n"
                        "*    o    *\n"
                        "*  o o    *\n"
                        "*  ooo    *\n"
                        "***********\n";

    const std::string jackC = "***********\n"
                        "*  ooooo C*\n"
                        "*    o    *\n"
                        "*    o    *\n"
                        "*  o o    *\n"
                        "*  ooo    *\n"
                        "***********\n";

    const std::string jackS = "***********\n" 
                        "*  ooooo S*\n"
                        "*    o    *\n"
                        "*    o    *\n"
                        "*  o o    *\n"
                        "*  ooo    *\n"
                        "***********\n";

    const std::string jackQ = "***********\n" 
                        "*  ooooo Q*\n"
                        "*    o    *\n"
                        "*    o    *\n"
                        "*  o o    *\n"
                        "*  ooo    *\n"
                        "***********\n";

    const std::string queenH = "***********\n" 
                         "* oooooo H*\n"
                         "* o    o  *\n"
                         "* oooooo  *\n"
                         "*  o      *\n"
                         "*  ooo    *\n"
                         "***********\n";
    
    const std::string queenD = "***********\n" 
                         "* oooooo D*\n"
                         "* o    o  *\n"
                         "* oooooo  *\n"
                         "*  o      *\n"
                         "*  ooo    *\n"
                         "***********\n";

    const std::string queenC = "***********\n"
                         "* oooooo C*\n"
                         "* o    o  *\n"
                         "* oooooo  *\n"
                         "*  o      *\n"
                         "*  ooo    *\n"
                         "***********\n";

    const std::string queenS = "***********\n" 
                         "* oooooo  S*\n"
                         "* o    o  *\n"
                         "* oooooo  *\n"
                         "*  o      *\n"
                         "*  ooo    *\n"
                         "***********\n";

    const std::string queenQ = "***********\n" 
                         "* oooooo Q*\n"
                         "* o    o  *\n"
                         "* oooooo  *\n"
                         "*  o      *\n"
                         "*  ooo    *\n"
                         "***********\n";

    const std::string kingH = "***********\n" 
                        "*  o  oo H*\n"
                        "*  o o    *\n"
                        "*  oo     *\n"
                        "*  o o    *\n"
                        "*  o  oo  *\n"
                        "***********\n";
    
    const std::string kingD = "***********\n" 
                        "*  o  oo D*\n"
                        "*  o o    *\n"
                        "*  oo     *\n"
                        "*  o o    *\n"
                        "*  o  oo  *\n"
                        "***********\n";

    const std::string kingC = "***********\n"
                        "*  o  oo C*\n"
                        "*  o o    *\n"
                        "*  oo     *\n"
                        "*  o o    *\n"
                        "*  o  oo  *\n"
                        "***********\n";

    const std::string kingS = "***********\n" 
                        "*  o  oo S*\n"
                        "*  o o    *\n"
                        "*  oo     *\n"
                        "*  o o    *\n"
                        "*  o  oo  *\n"
                        "***********\n";

    const std::string kingQ = "***********\n" 
                        "*  o  oo  Q*\n"
                        "*  o o    *\n"
                        "*  oo     *\n"
                        "*  o o    *\n"
                        "*  o  oo  *\n"
                        "***********\n";

    const std::string aceH = "***********\n"
                       "*  ooooo H*\n"
                       "*  o   o  *\n"
                       "*  ooooo  *\n"
                       "*  o   o  *\n"
                       "*  o   o  *\n"
                       "***********\n";
    
    const std::string aceD = "***********\n" 
                       "*  ooooo D*\n"
                       "*  o   o  *\n"
                       "*  ooooo  *\n"
                       "*  o   o  *\n"
                       "*  o   o  *\n"
                       "***********\n";

    const std::string aceC = "***********\n" 
                       "*  ooooo C*\n"
                       "*  o   o  *\n"
                       "*  ooooo  *\n"
                       "*  o   o  *\n"
                       "*  o   o  *\n"
                       "***********\n";

    const std::string aceS = "***********\n" 
                       "*  ooooo S*\n"
                       "*  o   o  *\n"
                       "*  ooooo  *\n"
                       "*  o   o  *\n"
                       "*  o   o  *\n"
                       "***********\n";

    const std::string aceQ = "***********\n" 
                       "*  ooooo Q*\n"
                       "*  o   o  *\n"
                       "*  ooooo  *\n"
                       "*  o   o  *\n"
                       "*  o   o  *\n"
                       "***********\n";
}