/*
------------------------------------------

ASCII ART POKER SYSTEM GAME by Paul Harriott

------------------------------------------
*/

#include <iostream>
#include <vector>
#include <string>

#include <mylib/poker.h>
#include <mylib/pOnePoker.h>
#include <mylib/pTwoPoker.h>

int main() {

    int option;
    double credit = 100.00;
    std::size_t creditRequirement = 100;
    std::size_t points = 0;
    std::size_t points2 = 0;
    Poker obj;

    // Display the menu when running the project
    std::cout << "********************************\n";
    std::cout << "*             MENU             *\n";
    std::cout << "********************************\n";
    std::cout << "* 1. One Player ($100+)        *\n";
    std::cout << "* 2. Two Players (Coming Soon) *\n";
    std::cout << "* 3. Your Credit Balance       *\n";
    std::cout << "* 4. Instruction               *\n";
    std::cout << "* 5. Free Credits              *\n";
    std::cout << "* 6. Menu Page                 *\n";
    std::cout << "* 9. Exit                      *\n";
    std::cout << "********************************\n\n";
    std::cout << "Input an option to start...\n";

    while (option != 9) {

        std::cin >> option;

        switch (option) {

            case 1: // One Player mode
                obj.onePlayer(credit, creditRequirement);
                break;
            case 2: // Two Player mode
                obj.twoPlayers(points, points2);
                break;
            case 3: // Display Credit Balance
                obj.credits(credit);
                break;
            case 4: // Project Instructions
                obj.instructions();
                break;
            case 5: // Free credits from 5 to 100
                obj.freeCredits(credit);
                break;
            case 6: // Display the entire menu page again
                std::cout << "**************************\n";
                std::cout << "*         MENU           *\n";
                std::cout << "**************************\n";
                std::cout << "* 1. One Player ($100+)  *\n";
                std::cout << "* 2. Two Players         *\n";
                std::cout << "* 3. Your Credit Balance *\n";
                std::cout << "* 4. Instruction         *\n";
                std::cout << "* 5. Free Credits        *\n";
                std::cout << "* 6. Menu Page           *\n";
                std::cout << "* 9. Exit                *\n";
                std::cout << "**************************\n\n";
                std::cout << "Input an option to start...\n";
                break;
            case 9: // EXIT the terminal
                std::cout << "[EXIT] Thanks for playing!\n";
                break;
            default: // If case number is not listed
                std::cout << "[ERROR] Incorrect output\n";
                break;
        }
    }
    
    return 0;
}