#ifndef POKER_H
#define POKER_H

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iterator>


class Poker {

public:

    void onePlayer(size_t creditRequirement);
    void twoPlayers();
    void credits(size_t credit);
    void instructions();
    void freeCredits();
    void cards();

private:

    size_t credit = 100;
    int creditRequirement = 100;
    int points = 0;
};

#endif // POKER_H