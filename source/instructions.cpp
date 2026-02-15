#include <iostream>
#include <string>
#include <vector>
#include <cmath>

#include "header/poker.hpp"

void Poker::instructions() {

    std::cout << "***********************************\n";
    std::cout << "*          INSTRUCTIONS           *\n";
    std::cout << "***********************************\n\n";
    
    std::cout << "1. One Player / Two Player mode\n";
    std::cout << "----------------------------------\n\n";
    std::cout << "When choosing a mode either one or two players, you will be handed out five cards.\n";
    std::cout << "One player mode - 100 credits requirement. Enter free credit mode to get free credits.\n";
    std::cout << "Two player mode - Free to play and no credit involved.\n\n";
    std::cout << "+++++++++++\n";
    std::cout << "+  ooooo  +\n";
    std::cout << "+    o    +\n";
    std::cout << "+    o    +\n";
    std::cout << "+  o o    +\n";
    std::cout << "+  ooo   H+\n";
    std::cout << "+++++++++++\n\n";
    std::cout << "Face Card\n";
    std::cout << "J = Jack\n\n";
    std::cout << "+++++++++++" << "+++++++++++\n";
    std::cout << "+  ooooo  +" << "+  o   o  +\n";
    std::cout << "+    o    +" << "+  o   o  +\n";
    std::cout << "+    o    +" << "+  ooooo  +\n";
    std::cout << "+    o    +" << "+      o  +\n";
    std::cout << "+    o   S+" << "+      o H+\n";
    std::cout << "+++++++++++" << "+++++++++++\n\n";
    std::cout << "Number Cards\n";
    std::cout << "T = Ten\n";
    std::cout << "4 = Four\n\n";
    std::cout << "+++++++++++\n";
    std::cout << "+  ooooo  +\n";
    std::cout << "+  o   o  +\n";
    std::cout << "+  ooooo  +\n";
    std::cout << "+  o   o  +\n";
    std::cout << "+  o   o D+\n";
    std::cout << "+++++++++++\n\n";
    std::cout << "A = Ace Card (Wild Card)\n\n";
    std::cout << "There are 5 suits in poker instead for 4 suits\n";
    std::cout << "For more infomation about this project, check the README file from github.\n";
}