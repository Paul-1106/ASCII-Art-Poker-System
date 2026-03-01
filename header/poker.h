#ifndef POKER_H
#define POKER_H

#include <iostream>
#include <string>
#include <vector>
#include <cmath>


struct Poker {

    void onePlayer(int creditRequirement);
    void twoPlayers();
    void credits();
    void instructions();
    void information();
    void freeCredits();
    void cards();

private:

    int credit;
    int creditRequirement;
};

#endif // POKER_H