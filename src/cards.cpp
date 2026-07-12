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

        twoH = R"(***********
*  ooooo H*
*      o  *
*  ooooo  *
*  o      *
*2 ooooo  *
***********)";
        
        twoD = R"(***********
*  ooooo D*
*      o  *
*  ooooo  *
*  o      *
*2 ooooo  *
***********)";

        twoC = R"(***********
*  ooooo C*
*      o  *
*  ooooo  *
*  o      *
*2 ooooo  *
***********)";

        twoS = R"(***********
*  ooooo S*
*      o  *
*  ooooo  *
*  o      *
*2 ooooo  *
***********)";

        twoQ = R"(***********
*  ooooo Q*
*      o  *
*  ooooo  *
*  o      *
*2 ooooo  *
***********)";

        threeH = R"(*********** 
                        *  ooooo H*
                        *      o  *
                        *  ooooo  *
                        *      o  *
                        *3 ooooo  *
                        ***********)";
        
        threeD = R"(*********** 
                        *  ooooo D*
                        *      o  *
                        *  ooooo  *
                        *      o  *
                        *3 ooooo  *
                        ***********)";

        threeC = R"(***********
                        *  ooooo C*
                        *      o  *
                        *  ooooo  *
                        *      o  *
                        *3 ooooo  *
                        ***********)";

        threeS = R"(*********** 
                        *  ooooo S*
                        *      o  *
                        *  ooooo  *
                        *      o  *
                        *3 ooooo  *
                        ***********)";

        threeQ = R"(*********** 
                        *  ooooo Q*
                        *      o  *
                        *  ooooo  *
                        *      o  *
                        *3 ooooo  *
                        ***********)";

        fourH = R"(*********** 
                *  o   o H*
                *  o   o  *
                *  ooooo  *
                *      o  *
                *4     o  *
                ***********)";
        
        fourD = R"(*********** 
                *  o   o D*
                *  o   o  *
                *  ooooo  *
                *      o  *
                *4     o  *
                ***********)";

        fourC = R"(***********
                *  o   o C*
                *  o   o  *
                *  ooooo  *
                *      o  *
                *4     o  *
                ***********)";

        fourS = R"(*********** 
                *  o   o S*
                *  o   o  *
                *  ooooo  *
                *      o  *
                *4     o  *
                ***********)";

        fourQ = R"(*********** 
                *  o   o Q*
                *  o   o  *
                *  ooooo  *
                *      o  *
                *4     o  *
                ***********)";

        fiveH = R"(*********** 
                *  ooooo H*
                *  o      *
                *  ooooo  *
                *      o  *
                *5 ooooo  *
                ***********)";
        
        fiveD = R"(*********** 
                *  ooooo D*
                *  o      *
                *  ooooo  *
                *      o  *
                *5 ooooo  *
                ***********)";

        fiveC = R"(***********
                *  ooooo C*
                *  o      *
                *  ooooo  *
                *      o  *
                *5 ooooo  *
                ***********)";

        fiveS = R"(*********** 
                *  ooooo S*
                *  o      *
                *  ooooo  *
                *      o  *
                *5 ooooo  *
                ***********)";

        fiveQ = R"(*********** 
                *  ooooo Q*
                *  o      *
                *  ooooo  *
                *      o  *
                *5 ooooo  *
                ***********)";

        sixH = R"(***********
                *  ooooo H*
                *  o      *
                *  ooooo  *
                *  o   o  *
                *6 ooooo  *
                ***********)";
        
        sixD = R"(*********** 
                *  ooooo D*
                *  o      *
                *  ooooo  *
                *  o   o  *
                *6 ooooo  *
                ***********)";

        sixC = R"(*********** 
                *  ooooo C*
                *  o      *
                *  ooooo  *
                *  o   o  *
                *6 ooooo  *
                ***********)";

        sixS = R"(*********** 
                *  ooooo S*
                *  o      *
                *  ooooo  *
                *  o   o  *
                *6 ooooo  *
                ***********)";

        sixQ = R"(*********** 
                *  ooooo Q*
                *  o      *
                *  ooooo  *
                *  o   o  *
                *6 ooooo  *
                ***********)";

        sevenH = R"(*********** 
                        *  ooooo H*
                        *      o  *
                        *     o   *
                        *     o   *
                        *7    o   *
                        ***********)";
        
        sevenD = R"(*********** 
                        *  ooooo D*
                        *      o  *
                        *     o   *
                        *     o   *
                        *7    o   *
                        ***********)";

        sevenC = R"(***********
                        *  ooooo C*
                        *      o  *
                        *     o   *
                        *     o   *
                        *7    o   *
                        ***********)";

        sevenS = R"(*********** 
                        *  ooooo S*
                        *      o  *
                        *     o   *
                        *     o   *
                        *7    o   *
                        ***********)";

        sevenQ = R"(*********** 
                        *  ooooo Q*
                        *      o  *
                        *     o   *
                        *     o   *
                        *7    o   *
                        ***********)";

        eightH = R"(*********** 
                        *  ooooo H*
                        *  o   o  *
                        *  ooooo  *
                        *  o   o  *
                        *8 ooooo  *
                        ***********)";
        
        eightD = R"(*********** 
                        *  ooooo D*
                        *  o   o  *
                        *  ooooo  *
                        *  o   o  *
                        *8 ooooo  *
                        ***********)";

        eightC = R"(***********
                        *  ooooo C*
                        *  o   o  *
                        *  ooooo  *
                        *  o   o  *
                        *8 ooooo  *
                        ***********)";

        eightS = R"(*********** 
                        *  ooooo S*
                        *  o   o  *
                        *  ooooo  *
                        *  o   o  *
                        *8 ooooo  *
                        ***********)";

        eightQ = R"(*********** 
                        *  ooooo Q*
                        *  o   o  *
                        *  ooooo  *
                        *  o   o  *
                        *8 ooooo  *
                        ***********)";

        nineH = R"(*********** 
                *  ooooo H*
                *  o   o  *
                *  ooooo  *
                *      o  *
                *9 ooooo  *
                ***********)";
        
        nineD = R"(*********** 
                *  ooooo D*
                *  o   o  *
                *  ooooo  *
                *      o  *
                *9 ooooo  *
                ***********)";

        nineC = R"(***********
                *  ooooo C*
                *  o   o  *
                *  ooooo  *
                *      o  *
                *9 ooooo  *
                ***********)";

        nineS = R"(*********** 
                *  ooooo S*
                *  o   o  *
                *  ooooo  *
                *      o  *
                *9 ooooo  *
                ***********)";

        nineQ = R"(*********** 
                *  ooooo Q*
                *  o   o  *
                *  ooooo  *
                *      o  *
                *9 ooooo  *
                ***********)";

        tenH = R"(***********
                *  ooooo H*
                *    o    *
                *    o    *
                *    o    *
                *10  o    *
                ***********)";
        
        tenD = R"(*********** 
                *  ooooo D*
                *    o    *
                *    o    *
                *    o    *
                *10  o    *
                ***********)";

        tenC = R"(*********** 
                *  ooooo C*
                *    o    *
                *    o    *
                *    o    *
                *10  o    *
                ***********)";

        tenS = R"(*********** 
                *  ooooo S*
                *    o    *
                *    o    *
                *    o    *
                *10  o    *
                ***********)";

        tenQ = R"(*********** 
                *  ooooo Q*
                *    o    *
                *    o    *
                *    o    *
                *10  o    *
                ***********)";

        jackH = R"(*********** 
                *  ooooo H*
                *    o    *
                *    o    *
                *  o o    *
                *J ooo    *
                ***********)";
        
        jackD = R"(*********** 
                *  ooooo D*
                *    o    *
                *    o    *
                *  o o    *
                *J ooo    *
                ***********)";

        jackC = R"(***********
                *  ooooo C*
                *    o    *
                *    o    *
                *  o o    *
                *J ooo    *
                ***********)";

        jackS = R"(*********** 
                *  ooooo S*
                *    o    *
                *    o    *
                *  o o    *
                *J ooo    *
                ***********)";

        jackQ = R"(*********** 
                *  ooooo Q*
                *    o    *
                *    o    *
                *  o o    *
                *J ooo    *
                ***********)";

        queenH = R"(*********** 
                        * oooooo H*
                        * o    o  *
                        * oooooo  *
                        *  o      *
                        *QU ooo   *
                        ***********)";
        
        queenD = R"(*********** 
                        * oooooo D*
                        * o    o  *
                        * oooooo  *
                        *  o      *
                        *QU ooo   *
                        ***********)";

        queenC = R"(***********
                        * oooooo C*
                        * o    o  *
                        * oooooo  *
                        *  o      *
                        *QU ooo   *
                        ***********)";

        queenS = R"(*********** 
                        * oooooo S*
                        * o    o  *
                        * oooooo  *
                        *  o      *
                        *QU ooo   *
                        ***********)";

        queenQ = R"(*********** 
                        * oooooo Q*
                        * o    o  *
                        * oooooo  *
                        *  o      *
                        *QU ooo   *
                        ***********)";

        kingH = R"(*********** 
                *  o  oo H*
                *  o o    *
                *  oo     *
                *  o o    *
                *K o  oo  *
                ***********)";
        
        kingD = R"(*********** 
                *  o  oo D*
                *  o o    *
                *  oo     *
                *  o o    *
                *K o  oo  *
                ***********)";

        kingC = R"(***********
                *  o  oo C*
                *  o o    *
                *  oo     *
                *  o o    *
                *K o  oo  *
                ***********)";

        kingS = R"(*********** 
                *  o  oo S*
                *  o o    *
                *  oo     *
                *  o o    *
                *K o  oo  *
                ***********)";

        kingQ = R"(*********** 
                *  o  oo Q*
                *  o o    *
                *  oo     *
                *  o o    *
                *K o  oo  *
                ***********)";

        aceH = R"(***********
*  ooooo H*
*  o   o  *
*  ooooo  *
*  o   o  *
*A o   o  *
***********)";
        
        aceD = R"(*********** 
*  ooooo D*
*  o   o  *
*  ooooo  *
*  o   o  *
*A o   o  *
***********)";

        aceC = R"(*********** 
*  ooooo C*
*  o   o  *
*  ooooo  *
*  o   o  *
*A o   o  *
***********)";

        aceS = R"(*********** 
*  ooooo S*
*  o   o  *
*  ooooo  *
*  o   o  *
*A o   o  *
***********)";

        aceQ = R"(*********** 
*  ooooo Q*
*  o   o  *
*  ooooo  *
*  o   o  *
*A o   o  *
***********)";
}