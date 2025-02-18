//
// Created by administrator on 2/17/25.
//

#ifndef TURN_H
#define TURN_H
#include "Die.h"

class Turn {
    Die die;
    bool turn_over = false;
    int turnNum = 1;
    int score_turn = 0;
    int gameScore =0;
    void addTurn();
    void roll(int ts);
    int getTurnScore();
    void hold();
public:
    void R_or_H();
    int getGameScore();
};

#endif //TURN_H