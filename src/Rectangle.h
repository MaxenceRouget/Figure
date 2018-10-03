#pragma once
#include <iostream>
#include "Figure.h"
using namespace std;

class rectangle:public figure
{
public:
    int Longeur;
    int Largeur;

    int calcSurface(int _Longeur, int _Largeur) ;
    int calcPerim(int _Longeur, int _Largeur) ;
};
