#include <iostream>
#include "Figure.h"
using namespace std;

class triangle:public figure
{
public:
    int cote1;
    int cote2;
    int cote3;
    int hauteur;
    int base; 

    int calcSurface(int _cote1, int _cote2, int _cote3);
    int calcPerim(int _hauteur, int _base);
};
