#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"
#include "Cercle.h"
#include <stdlib.h>
using namespace std;

int main()
{
  int choose, choose2;
  int a, b, c;

  debut:

   cout << "choisisez ce que vous voulez faire :"<<endl;
   cout << "___________________________________"<<endl;
   cout << "1--- rectangle"<<endl;
   cout << "___________________________________"<<endl;
   cout << "2--- triangle"<<endl;
   cout << "___________________________________"<<endl;
   cout << "3--- cercle"<<endl;
   cout << "___________________________________"<<endl;
   cout << "4--- Partir"<<endl;
   cout << "___________________________________"<<endl;

   cin>> choose;

   switch (choose)
   {
    case 1 :{
        rectangle rectangle1;
          cout << "1---Calcul de perimetre : "<<endl;
          cout << "2---Calcul de surface : "<<endl;
            cin >> choose2;
              if(choose2 == 1)
                {
                  cout << "saisir la Longeur "<<endl;
                    cin >>a;
                  cout << "saisir la Largeur "<<endl;
                    cin>>b;
                    rectangle1.calcPerim(a,b);
                    goto debut;
                }
              else
                {
                  cout << "saisir la Longeur1 "<<endl;
                    cin >> a;
                  cout << "saisir la Largeur1 "<<endl;
                    cin >> b ;
                  rectangle1.calcSurface(a, b);
                  goto debut;
                }
        break;}

  case 2 :{
  triangle triangle1;
  cout << "1---Calcul de perimetre : "<<endl;
  cout << "2---Calcul de surface : "<<endl;
  cin >> choose2;
      if(choose2 == 1)
      {
        cout << "saisir la hauteur "<<endl;
          cin >> a;
        cout << "saisir la base "<<endl;
          cin>> b;
        triangle1.calcPerim(a,b);
        goto debut;
      }
      else
      {
        cout << "saisir la valeur du côté n°1 "<<endl;
          cin >>a;
        cout << "saisir la valeur du côté n°2 "<<endl;
          cin>>b;
        cout << "saisir la valeur du côté n°3"<<endl;
          cin>>c;
        triangle1.calcSurface(a,b,c);
        goto debut;
      }
  break;}

  case 3 :{
  cercle cercle1;
  cout << "1---Calcul de perimetre : "<<endl;
  cout << "2---Calcul de surface : "<<endl;
  cin >> choose2;
      if(choose2 == 1)
      {
        cout << "saisir le rayon "<<endl;
          cin >> a ;
        cercle1.calcPerim(a);
        goto debut;
      }
      else
      {
        cout << "saisir le rayon "<<endl;
          cin >>a;
          cercle1.calcSurface(a);
          goto debut;
      }

  break;}
  case 4 :
    goto fin;
      fin: ;
      system("clear");
  }
}
