//
// Created by administrator on 2/18/25.
//

#ifndef FINALGAME_H
#define FINALGAME_H
#include "Turn.h"
#include "Die.h"
using namespace std;

class FinalGame {
    void showRules();
    Turn turn;
    bool gameOver;
public:
    FinalGame();
};

#endif //FINALGAME_H