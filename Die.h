//
// Created by administrator on 2/17/25.
//

#ifndef DIE_H
#define DIE_H

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Die {
   int rolled;
   int sides;
   void randSide();
public:
   Die();
   Die(int sides);
   int roll();
};

#endif //DIE_H