/*!\file Rectangle.h
*\brief C'est la classe Rectangle
*\author Maxence
*\version 1.0
*/
#pragma once
#include <iostream>
#include "Figure.h"
using namespace std;
/*!\class rectangle
*\brief la class permet d'instancier l'objet ainsi que ses méthodes
*/
class rectangle:public figure
{
public:
    int Longeur;
    int Largeur;

    /*!\brief calcSurface
    *\param _Longeur -> ce qu'on donne en param pour les calculs
    *\param _Largeur -> ce qu'on donne en param pour les calculs
    *\return ça retourne la Surface de deux int
      */
    int calcSurface(int _Longeur, int _Largeur) ;

    /*!\brief calcPerim
    *\param _Longeur -> ce qu'on donne en param pour les calculs
    *\param _Largeur -> ce qu'on donne en param pour les calculs
    *\return ça retourne le calcul du perimetre des deux int
      */
    int calcPerim(int _Longeur, int _Largeur) ;
};
