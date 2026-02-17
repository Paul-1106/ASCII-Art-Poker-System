#include <iostream>
#include <string>
#include <vector>
#include <cmath>

#include "header/poker.hpp"

void Poker::cards() {

    std::string twoH = "***********\n" // Suit: Heart
                       "*  ooooo H*\n"
                       "*      o  *\n"
                       "*  ooooo  *\n"
                       "*  o      *\n"
                       "*  ooooo  *\n"
                       "***********\n";
    
    std::string twoD = "***********\n" // Suit: Diamond
                       "*  ooooo D*\n"
                       "*      o  *\n"
                       "*  ooooo  *\n"
                       "*  o      *\n"
                       "*  ooooo  *\n"
                       "***********\n";

    std::string twoC = "***********\n" // Suit: Clover
                       "*  ooooo C*\n"
                       "*      o  *\n"
                       "*  ooooo  *\n"
                       "*  o      *\n"
                       "*  ooooo  *\n"
                       "***********\n";

    std::string twoS = "***********\n" // Suit: Spade
                       "*  ooooo S*\n"
                       "*      o  *\n"
                       "*  ooooo  *\n"
                       "*  o      *\n"
                       "*  ooooo  *\n"
                       "***********\n";

    std::string twoQ = "***********\n" // Suit: Quatrefoil
                       "*  ooooo Q*\n"
                       "*      o  *\n"
                       "*  ooooo  *\n"
                       "*  o      *\n"
                       "*  ooooo  *\n"
                       "***********\n";

    std::string threeH = "***********\n" 
                         "*  ooooo H*\n"
                         "*      o  *\n"
                         "*  ooooo  *\n"
                         "*      o  *\n"
                         "*  ooooo  *\n"
                         "***********\n";
    
    std::string threeD = "***********\n" 
                         "*  ooooo D*\n"
                         "*      o  *\n"
                         "*  ooooo  *\n"
                         "*      o  *\n"
                         "*  ooooo  *\n"
                         "***********\n";

    std::string threeC = "***********\n"
                         "*  ooooo C*\n"
                         "*      o  *\n"
                         "*  ooooo  *\n"
                         "*      o  *\n"
                         "*  ooooo  *\n"
                         "***********\n";

    std::string threeS = "***********\n" 
                         "*  ooooo S*\n"
                         "*      o  *\n"
                         "*  ooooo  *\n"
                         "*      o  *\n"
                         "*  ooooo  *\n"
                         "***********\n";

    std::string threeQ = "***********\n" 
                         "*  ooooo Q*\n"
                         "*      o  *\n"
                         "*  ooooo  *\n"
                         "*      o  *\n"
                         "*  ooooo  *\n"
                         "***********\n";

    std::string fourH = "***********\n" 
                        "*  o   o H*\n"
                        "*  o   o  *\n"
                        "*  ooooo  *\n"
                        "*      o  *\n"
                        "*      o  *\n"
                        "***********\n";
    
    std::string fourD = "***********\n" 
                        "*  o   o D*\n"
                        "*  o   o  *\n"
                        "*  ooooo  *\n"
                        "*      o  *\n"
                        "*      o  *\n"
                        "***********\n";

    std::string fourC = "***********\n"
                        "*  o   o C*\n"
                        "*  o   o  *\n"
                        "*  ooooo  *\n"
                        "*      o  *\n"
                        "*      o  *\n"
                        "***********\n";

    std::string fourS = "***********\n" 
                        "*  o   o S*\n"
                        "*  o   o  *\n"
                        "*  ooooo  *\n"
                        "*      o  *\n"
                        "*      o  *\n"
                        "***********\n";

    std::string fourQ = "***********\n" 
                        "*  o   o Q*\n"
                        "*  o   o  *\n"
                        "*  ooooo  *\n"
                        "*      o  *\n"
                        "*      o  *\n"
                        "***********\n";

    std::string fiveH = "***********\n" 
                        "*  ooooo H*\n"
                        "*  o      *\n"
                        "*  ooooo  *\n"
                        "*      o  *\n"
                        "*  ooooo  *\n"
                        "***********\n";
    
    std::string fiveD = "***********\n" 
                        "*  ooooo D*\n"
                        "*  o      *\n"
                        "*  ooooo  *\n"
                        "*      o  *\n"
                        "*  ooooo  *\n"
                        "***********\n";

    std::string fiveC = "***********\n"
                        "*  ooooo C*\n"
                        "*  o      *\n"
                        "*  ooooo  *\n"
                        "*      o  *\n"
                        "*  ooooo  *\n"
                        "***********\n";

    std::string fiveS = "***********\n" 
                        "*  ooooo S*\n"
                        "*  o      *\n"
                        "*  ooooo  *\n"
                        "*      o  *\n"
                        "*  ooooo  *\n"
                        "***********\n";

    std::string fiveQ = "***********\n" 
                        "*  ooooo Q*\n"
                        "*  o      *\n"
                        "*  ooooo  *\n"
                        "*      o  *\n"
                        "*  ooooo  *\n"
                        "***********\n";

    std::string sixH = "***********\n"
                       "*  ooooo H*\n"
                       "*  o      *\n"
                       "*  ooooo  *\n"
                       "*  o   o  *\n"
                       "*  ooooo  *\n"
                       "***********\n";
    
    std::string sixD = "***********\n" 
                       "*  ooooo D*\n"
                       "*  o      *\n"
                       "*  ooooo  *\n"
                       "*  o   o  *\n"
                       "*  ooooo  *\n"
                       "***********\n";

    std::string sixC = "***********\n" 
                       "*  ooooo C*\n"
                       "*  o      *\n"
                       "*  ooooo  *\n"
                       "*  o   o  *\n"
                       "*  ooooo  *\n"
                       "***********\n";

    std::string sixS = "***********\n" 
                       "*  ooooo S*\n"
                       "*  o      *\n"
                       "*  ooooo  *\n"
                       "*  o   o  *\n"
                       "*  ooooo  *\n"
                       "***********\n";

    std::string sixQ = "***********\n" 
                       "*  ooooo Q*\n"
                       "*  o      *\n"
                       "*  ooooo  *\n"
                       "*  o   o  *\n"
                       "*  ooooo  *\n"
                       "***********\n";
}