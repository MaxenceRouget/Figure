#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"
using namespace std;

int main()
{
  int choose, choose2;
  int a , b, c, rez;
 cout << "choisisez ce que vous voulez faire :"<<endl;
 cout << "1--- rectangle"<<endl;
 cout << "2--- triangle"<<endl;
 cin>> choose;
 switch (choose)
 {
  case 1 :
      rectangle rectangle1;
        cout << "1---Calcul de perimetre : "<<endl;
        cout << "2---Calcul de surface : "<<endl;
        cin >> choose2;
          if(choose2 == 1)
          {
              rectangle1.calcPerim(15, 10);
          }
          else
          {
            rectangle1.calcSurface(15, 10);
          }
      break;
/*
  case 2 :
  triangle triangle1;
  cout << "1---Calcul de perimetre : "<<endl;
  cout << "2---Calcul de surface : "<<endl;
  cin >> choose2;
      if(chosse2 == 1)
      {

          triangle1.calcPerim(10,12,5);
      }
      else
      {
        rectangle1.calcSurface(10,15);
      }
  break;
*/}

}
