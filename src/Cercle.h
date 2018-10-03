/*!\file Cercle.h
*\brief C'est la classe cercle
*\author Maxence
*\version 1.0
*/
#pragma once
#include <iostream>
#include "Figure.h"
using namespace std;
/*!\class cercle
*\brief la class permet d'instancier l'objet ainsi que ses méthodes
*/
class cercle:public figure
{
public:
  float Rayon;

  /*!\brief calcSurface
  *\param _rayon -> ce qu'on donne en param pour les calculs(le rayon du cercle)
  *\return ça retourne la Surface du cercle
    */
    float calcSurface(float _rayon);
    /*!\brief calcPerim
    *\param _rayon -> ce qu'on donne en param pour les calculs(le rayon du cercle)
    *\return ça retourne le perimetre du cercle
      */
    float calcPerim(float _rayon);
};
