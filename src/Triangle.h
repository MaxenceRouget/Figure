/*!\file Triangle.h
*\brief C'est la classe triangle
*\author Maxence
*\version 1.0
*/
#pragma once
#include <iostream>
#include "Figure.h"
using namespace std;
/*!\class triangle
*\brief la class permet d'instancier l'objet ainsi que ses méthodes
*/
class triangle:public figure
{
public:
    int cote1;
    int cote2;
    int cote3;
    int hauteur;
    int base;

    /*!\brief calcSurface
    *\param _cote1 -> ce qu'on donne en param pour les calculs
    *\param _cote2 -> ce qu'on donne en param pour les calculs
    *\param _cote3 -> ce qu'on donne en param pour les calculs
    *\return ça retourne la Surface
      */
    int calcSurface(int _cote1, int _cote2, int _cote3);
    /*!\brief calcSurface
    *\param _hauteur -> ce qu'on donne en param pour les calculs
    *\param _base -> ce qu'on donne en param pour les calculs
    *\return ça retourne le calcul du perimètre
      */
    int calcPerim(int _hauteur, int _base);
};
