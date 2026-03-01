#include <iostream>
#include <vector>
#include <string>

#include "poker.h"

int main() {

    int option;
    int credit;
    Poker obj;

    std::cout << "**************************\n";
    std::cout << "*         MENU           *\n";
    std::cout << "**************************\n";
    std::cout << "* 1. One Player ($100+)  *\n";
    std::cout << "* 2. Two Players         *\n";
    std::cout << "* 3. Your Credit Balance *\n";
    std::cout << "* 4. Instruction         *\n";
    std::cout << "* 5. Free Credits        *\n";
    std::cout << "* 9. Exit                *\n";
    std::cout << "**************************\n\n";
    std::cout << "Input an option to start...\n";

    while (option != 9) {

        std::cin >> option;

        switch (option) {

            case 1:
                obj.onePlayer(credit);
                break;
            case 2:
                obj.twoPlayers();
                break;
            case 3:
                obj.credits();
                break;
            case 4:
                obj.instructions();
                break;
            case 5:
                obj.freeCredits();
                break;
            case 9:
                std::cout << "[EXIT] Thanks for playing!\n";
                break;
            default:
                std::cout << "[ERROR] Incorrect output\n";
                break;
        }
    }
    
    return 0;
}