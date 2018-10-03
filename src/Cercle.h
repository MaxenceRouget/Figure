#pragma once
#include <iostream>
#include "Figure.h"
using namespace std;

class cercle:public figure
{
public:
  int Rayon;

    int calcSurface(int _rayon);
    int calcPerim(int _rayon);
};
