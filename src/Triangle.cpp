#include "Triangle.h"
#include <iostream>

using namespace std;

int triangle::calcSurface(_hauteur, _base)
{
  int resultat;
    resultat = hauteur * base
      cout << "le resultat est " << resultat <<endl;
    return (resultat);
}

int triangle::calcPerim(_cote1, _cote2, _cote3)
{
  int resultat;
    resultat = _cote1 + _cote2 +_cote3 ;
    cout << "le resultat est " << resultat <<endl;
    return (resultat);
}
