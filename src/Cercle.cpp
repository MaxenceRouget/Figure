#include "Cercle.h"
#include <iostream>

using namespace std;

float cercle::calcSurface(float _rayon)
{
  float resultat;
    resultat = 3.14 * _rayon ;
      cout << "le resultat est " << resultat <<endl;
    return (resultat);
}

float cercle::calcPerim(float _rayon)
{
  float resultat;
    resultat =2*3.14*_rayon ;
    cout << "le resultat est " << resultat <<endl;
    return (resultat);
}
