#include "Triangle.h"
#include <iostream>

using namespace std;

int triangle::calcPerim(int _hauteur,int _base)
{
  int resultat1 = 0;
    resultat1 = _hauteur*_base;
      cout << "le resultat est " << resultat1 <<endl;
    return (resultat1);
}

int triangle::calcSurface(int _cote1,int  _cote2, int _cote3)
{
  int resultat = 0;
    resultat = _cote1 + _cote2 +_cote3 ;
    cout << "le resultat est " << resultat <<endl;
    return (resultat);
}
