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

    cout << "saisir la Longeur "<<endl;
      cin >> Longeur;
    cout << "saisir la Largeur "<<endl;
      cin >> Largeur;

      resultat = 2* (Longeur+ Largeur);

      cout << "le resultat est " << resultat <<endl;
    return (resultat);
  }
