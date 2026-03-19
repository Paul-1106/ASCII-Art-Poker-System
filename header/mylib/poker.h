#ifndef POKER_H
#define POKER_H

#include <iostream>
#include <string>
#include <vector>
#include <cmath>


class Poker {

public:

    void onePlayer(int creditRequirement);
    void twoPlayers();
    void credits();
    void instructions();
    void freeCredits();
    void cards();

private:

    int credit = 100;
    // int creditRequirement;
};

#endif // POKER_H