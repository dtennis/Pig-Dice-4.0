//
    // Created by administrator on 2/17/25.
    //

#include "FinalGame.h"

    void FinalGame::showRules() {
    cout << "Let's Play PIG Dice!" << endl;
    cout << "* See how many turns it takes you to get to 20." << endl;
    cout << "*Turn ends when you hold or roll a 1." << endl;
    cout << "*If you roll a 1, you lose all points for the turn." << endl;
    cout << "*If you hold, you save all points for the turn" << endl;
    cout << endl;

    cout << "Turn number: 1"<< endl;
}
FinalGame::FinalGame() {
    gameOver = false;
    showRules();
    while (gameOver != true) {
        turn.R_or_H();

        if (turn.getGameScore() >= 20) {
            gameOver = true;
        }
    }
}
