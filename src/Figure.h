/*!\file Figure.h
*\brief classe mère
*\author Maxence
*\version 1.0
*/
#pragma once
#include <iostream>
/*!\class figure
*\brief la classe permet d'initialisé les constructeurs
*/
using namespace std;

class figure{
public:

  /*!\brief calcul de la surface
  *\param aucun paramètres car c'est la classe parent que l'on instancie jamais
  *\return ça ne retourne rien
    */
  virtual int calcSurface();
  
  /*!\brief calcul du perimetre
  *\param aucun paramètres car c'est la classe parent que l'on instancie jamais
  *\return ça ne retourne rien
    */
    virtual int calcPerim();
};
