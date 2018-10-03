#pragma once
#include <iostream>
#include "Figure.h"
using namespace std;

class cercle:public figure
{
public:
  float Rayon;

    float calcSurface(float _rayon);
    float calcPerim(float _rayon);
};
