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

        twoH =  "***********\n" // H = Heart
                "*  ooooo H*\n"
                "*      o  *\n"
                "*  ooooo  *\n"
                "*  o      *\n"
                "*2 ooooo  *\n"
                "***********";
        
        twoD =  "***********\n" // D = Diamond
                "*  ooooo D*\n"
                "*      o  *\n"
                "*  ooooo  *\n"
                "*  o      *\n"
                "*2 ooooo  *\n"
                "***********";

        twoC =  "***********\n" // C = Club
                "*  ooooo C*\n"
                "*      o  *\n"
                "*  ooooo  *\n"
                "*  o      *\n"
                "*2 ooooo  *\n"
                "***********";

        twoS =  "***********\n" // S = Spade
                "*  ooooo S*\n"
                "*      o  *\n"
                "*  ooooo  *\n"
                "*  o      *\n"
                "*2 ooooo  *\n"
                "***********";

        twoQ =  "***********\n" // U = Quatrefoil
                "*  ooooo U*\n"
                "*      o  *\n"
                "*  ooooo  *\n"
                "*  o      *\n"
                "*2 ooooo  *\n"
                "***********";

        threeH = "***********\n" 
                 "*  ooooo H*\n"
                 "*      o  *\n"
                 "*  ooooo  *\n"
                 "*      o  *\n"
                 "*3 ooooo  *\n"
                 "***********";
        
        threeD = "***********\n" 
                 "*  ooooo D*\n"
                 "*      o  *\n"
                 "*  ooooo  *\n"
                 "*      o  *\n"
                 "*3 ooooo  *\n"
                 "***********";

        threeC = "***********\n"
                 "*  ooooo C*\n"
                 "*      o  *\n"
                 "*  ooooo  *\n"
                 "*      o  *\n"
                 "*3 ooooo  *\n"
                 "***********";

        threeS = "***********\n" 
                 "*  ooooo S*\n"
                 "*      o  *\n"
                 "*  ooooo  *\n"
                 "*      o  *\n"
                 "*3 ooooo  *\n"
                 "***********";

        threeQ = "***********\n" 
                 "*  ooooo U*\n"
                 "*      o  *\n"
                 "*  ooooo  *\n"
                 "*      o  *\n"
                 "*3 ooooo  *\n"
                 "***********";

        fourH = "***********\n" 
                "*  o   o H*\n"
                "*  o   o  *\n"
                "*  ooooo  *\n"
                "*      o  *\n"
                "*4     o  *\n"
                "***********";
        
        fourD = "***********\n" 
                "*  o   o D*\n"
                "*  o   o  *\n"
                "*  ooooo  *\n"
                "*      o  *\n"
                "*4     o  *\n"
                "***********";

        fourC = "***********\n"
                "*  o   o C*\n"
                "*  o   o  *\n"
                "*  ooooo  *\n"
                "*      o  *\n"
                "*4     o  *\n"
                "***********";

        fourS = "***********\n" 
                "*  o   o S*\n"
                "*  o   o  *\n"
                "*  ooooo  *\n"
                "*      o  *\n"
                "*4     o  *\n"
                "***********";

        fourQ = "***********\n" 
                "*  o   o U*\n"
                "*  o   o  *\n"
                "*  ooooo  *\n"
                "*      o  *\n"
                "*4     o  *\n"
                "***********";

        fiveH = "***********\n" 
                "*  ooooo H*\n"
                "*  o      *\n"
                "*  ooooo  *\n"
                "*      o  *\n"
                "*5 ooooo  *\n"
                "***********";
        
        fiveD = "***********\n" 
                "*  ooooo D*\n"
                "*  o      *\n"
                "*  ooooo  *\n"
                "*      o  *\n"
                "*5 ooooo  *\n"
                "***********";

        fiveC = "***********\n"
                "*  ooooo C*\n"
                "*  o      *\n"
                "*  ooooo  *\n"
                "*      o  *\n"
                "*5 ooooo  *\n"
                "***********";

        fiveS = "***********\n" 
                "*  ooooo S*\n"
                "*  o      *\n"
                "*  ooooo  *\n"
                "*      o  *\n"
                "*5 ooooo  *\n"
                "***********";

        fiveQ = "***********\n" 
                "*  ooooo U*\n"
                "*  o      *\n"
                "*  ooooo  *\n"
                "*      o  *\n"
                "*5 ooooo  *\n"
                "***********";

        sixH = "***********\n"
               "*  ooooo H*\n"
               "*  o      *\n"
               "*  ooooo  *\n"
               "*  o   o  *\n"
               "*6 ooooo  *\n"
               "***********";
        
        sixD = "***********\n" 
               "*  ooooo D*\n"
               "*  o      *\n"
               "*  ooooo  *\n"
               "*  o   o  *\n"
               "*6 ooooo  *\n"
               "***********";

        sixC = "***********\n" 
               "*  ooooo C*\n"
               "*  o      *\n"
               "*  ooooo  *\n"
               "*  o   o  *\n"
               "*6 ooooo  *\n"
               "***********";

        sixS = "***********\n" 
               "*  ooooo S*\n"
               "*  o      *\n"
               "*  ooooo  *\n"
               "*  o   o  *\n"
               "*6 ooooo  *\n"
               "***********";

        sixQ = "***********\n" 
               "*  ooooo U*\n"
               "*  o      *\n"
               "*  ooooo  *\n"
               "*  o   o  *\n"
               "*6 ooooo  *\n"
               "***********";

        sevenH = "***********\n" 
                 "*  ooooo H*\n"
                 "*      o  *\n"
                 "*     o   *\n"
                 "*     o   *\n"
                 "*7    o   *\n"
                 "***********";
        
        sevenD = "***********\n" 
                 "*  ooooo D*\n"
                 "*      o  *\n"
                 "*     o   *\n"
                 "*     o   *\n"
                 "*7    o   *\n"
                 "***********";

        sevenC = "***********\n"
                 "*  ooooo C*\n"
                 "*      o  *\n"
                 "*     o   *\n"
                 "*     o   *\n"
                 "*7    o   *\n"
                 "***********";

        sevenS = "***********\n" 
                 "*  ooooo S*\n"
                 "*      o  *\n"
                 "*     o   *\n"
                 "*     o   *\n"
                 "*7    o   *\n"
                 "***********";

        sevenQ = "***********\n"
                 "*  ooooo U*\n"
                 "*      o  *\n"
                 "*     o   *\n"
                 "*     o   *\n"
                 "*7    o   *\n"
                 "***********";

        eightH = "***********\n" 
                 "*  ooooo H*\n"
                 "*  o   o  *\n"
                 "*  ooooo  *\n"
                 "*  o   o  *\n"
                 "*8 ooooo  *\n"
                 "***********";
        
        eightD = "***********\n" 
                 "*  ooooo D*\n"
                 "*  o   o  *\n"
                 "*  ooooo  *\n"
                 "*  o   o  *\n"
                 "*8 ooooo  *\n"
                 "***********";

        eightC = "***********\n"
                 "*  ooooo C*\n"
                 "*  o   o  *\n"
                 "*  ooooo  *\n"
                 "*  o   o  *\n"
                 "*8 ooooo  *\n"
                 "***********";

        eightS = "***********\n" 
                 "*  ooooo S*\n"
                 "*  o   o  *\n"
                 "*  ooooo  *\n"
                 "*  o   o  *\n"
                 "*8 ooooo  *\n"
                 "***********";

        eightQ = "***********\n" 
                 "*  ooooo U*\n"
                 "*  o   o  *\n"
                 "*  ooooo  *\n"
                 "*  o   o  *\n"
                 "*8 ooooo  *\n"
                 "***********";

        nineH = "***********\n" 
                "*  ooooo H*\n"
                "*  o   o  *\n"
                "*  ooooo  *\n"
                "*      o  *\n"
                "*9 ooooo  *\n"
                "***********";
        
        nineD = "***********\n" 
                "*  ooooo D*\n"
                "*  o   o  *\n"
                "*  ooooo  *\n"
                "*      o  *\n"
                "*9 ooooo  *\n"
                "***********";

        nineC = "***********\n"
                "*  ooooo C*\n"
                "*  o   o  *\n"
                "*  ooooo  *\n"
                "*      o  *\n"
                "*9 ooooo  *\n"
                "***********";

        nineS = "***********\n" 
                "*  ooooo S*\n"
                "*  o   o  *\n"
                "*  ooooo  *\n"
                "*      o  *\n"
                "*9 ooooo  *\n"
                "***********";

        nineQ = "***********\n" 
                "*  ooooo U*\n"
                "*  o   o  *\n"
                "*  ooooo  *\n"
                "*      o  *\n"
                "*9 ooooo  *\n"
                "***********";

        tenH = "***********\n"
               "*  ooooo H*\n"
               "*    o    *\n"
               "*    o    *\n"
               "*    o    *\n"
               "*10  o    *\n"
               "***********";
        
        tenD = "***********\n" 
               "*  ooooo D*\n"
               "*    o    *\n"
               "*    o    *\n"
               "*    o    *\n"
               "*10  o    *\n"
               "***********";

        tenC = "***********\n" 
               "*  ooooo C*\n"
               "*    o    *\n"
               "*    o    *\n"
               "*    o    *\n"
               "*10  o    *\n"
               "***********";

        tenS = "***********\n"
               "*  ooooo S*\n"
               "*    o    *\n"
               "*    o    *\n"
               "*    o    *\n"
               "*10  o    *\n"
               "***********";

        tenQ = "***********\n" 
               "*  ooooo U*\n"
               "*    o    *\n"
               "*    o    *\n"
               "*    o    *\n"
               "*10  o    *\n"
               "***********";

        jackH = "***********\n"
                "*  ooooo H*\n"
                "*    o    *\n"
                "*    o    *\n"
                "*  o o    *\n"
                "*J ooo    *\n"
                "***********";
        
        jackD = "***********\n" 
                "*  ooooo D*\n"
                "*    o    *\n"
                "*    o    *\n"
                "*  o o    *\n"
                "*J ooo    *\n"
                "***********";

        jackC = "***********\n"
                "*  ooooo C*\n"
                "*    o    *\n"
                "*    o    *\n"
                "*  o o    *\n"
                "*J ooo    *\n"
                "***********";

        jackS = "***********\n" 
                "*  ooooo S*\n"
                "*    o    *\n"
                "*    o    *\n"
                "*  o o    *\n"
                "*J ooo    *\n"
                "***********";

        jackQ = "***********\n" 
                "*  ooooo U*\n"
                "*    o    *\n"
                "*    o    *\n"
                "*  o o    *\n"
                "*J ooo    *\n"
                "***********";

        queenH = "***********\n" 
                 "* oooooo H*\n"
                 "* o    o  *\n"
                 "* oooooo  *\n"
                 "*  o      *\n"
                 "*Q  ooo   *\n"
                 "***********";
        
        queenD = "***********\n" 
                 "* oooooo D*\n"
                 "* o    o  *\n"
                 "* oooooo  *\n"
                 "*  o      *\n"
                 "*Q  ooo   *\n"
                 "***********";

        queenC = "***********\n"
                 "* oooooo C*\n"
                 "* o    o  *\n"
                 "* oooooo  *\n"
                 "*  o      *\n"
                 "*Q  ooo   *\n"
                 "***********";

        queenS = "***********\n" 
                 "* oooooo S*\n"
                 "* o    o  *\n"
                 "* oooooo  *\n"
                 "*  o      *\n"
                 "*Q  ooo   *\n"
                 "***********";

        queenQ = "***********\n" 
                 "* oooooo U*\n"
                 "* o    o  *\n"
                 "* oooooo  *\n"
                 "*  o      *\n"
                 "*Q  ooo   *\n"
                 "***********";

        kingH = "***********\n" 
                "*  o  oo H*\n"
                "*  o o    *\n"
                "*  oo     *\n"
                "*  o o    *\n"
                "*K o  oo  *\n"
                "***********";
        
        kingD = "***********\n" 
                "*  o  oo D*\n"
                "*  o o    *\n"
                "*  oo     *\n"
                "*  o o    *\n"
                "*K o  oo  *\n"
                "***********";

        kingC = "***********\n"
                "*  o  oo C*\n"
                "*  o o    *\n"
                "*  oo     *\n"
                "*  o o    *\n"
                "*K o  oo  *\n"
                "***********";

        kingS = "***********\n" 
                "*  o  oo S*\n"
                "*  o o    *\n"
                "*  oo     *\n"
                "*  o o    *\n"
                "*K o  oo  *\n"
                "***********";

        kingQ = "***********\n"
                "*  o  oo U*\n"
                "*  o o    *\n"
                "*  oo     *\n"
                "*  o o    *\n"
                "*K o  oo  *\n"
                "***********";

        aceH = "***********\n"
               "*  ooooo H*\n"
               "*  o   o  *\n"
               "*  ooooo  *\n"
               "*  o   o  *\n"
               "*A o   o  *\n"
               "***********";
        
        aceD = "***********\n"
               "*  ooooo D*\n"
               "*  o   o  *\n"
               "*  ooooo  *\n"
               "*  o   o  *\n"
               "*A o   o  *\n"
               "***********";

        aceC = "***********\n" 
               "*  ooooo C*\n"
               "*  o   o  *\n"
               "*  ooooo  *\n"
               "*  o   o  *\n"
               "*A o   o  *\n"
               "***********";

        aceS = "***********\n"
               "*  ooooo S*\n"
               "*  o   o  *\n"
               "*  ooooo  *\n"
               "*  o   o  *\n"
               "*A o   o  *\n"
               "***********";

        aceQ = "***********\n" 
               "*  ooooo U*\n"
               "*  o   o  *\n"
               "*  ooooo  *\n"
               "*  o   o  *\n"
               "*A o   o  *\n"
               "***********";
}