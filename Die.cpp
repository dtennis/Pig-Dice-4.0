//
// Created by administrator on 2/17/25.
//

#include "Die.h"

using namespace std;

void Die::randSide() {
    srand(time(0));
    rolled =rand() % sides +1;
    cout << "Die: "<< rolled << endl;
}

Die::Die() {
    sides=6;
}

Die::Die(int sides) {
    this->sides=sides;
}

int Die::roll() {
    randSide();
    return rolled;
}