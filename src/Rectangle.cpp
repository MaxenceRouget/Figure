#include "Rectangle.h"
#include <iostream>

using namespace std;

  int rectangle::calcSurface(int _Longeur, int _Largeur)
  {
    int resultat;
      resultat = Longeur * Largeur;
      cout << "le resultat est " << resultat <<endl;
    return (resultat);
  }

  int rectangle::calcPerim(int _Longeur, int _Largeur)
  {
    int resultat;
      int resultat1;
      resultat= _Longeur + _Largeur;
      resultat1 = 2 * resultat;

      cout << "le resultat est " << resultat1 <<endl;
    return (resultat);
  }
