//Даны вещественные числа а, Ь, с, d, e, f, g. Найти  площадь пятиугольника, изображенного на рисунке. 
//(Определить функцию для расчета площади треугольника по трем его  сторонам.)
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;

float sl (float x, float y, float z)
{
 float p;
 p = (x+y+z)/2;
 return sqrt(p*(p-x)*(p-y)*(p-z));
}

main()
{
 float a,b,c,d,e,f,g,m;
 cin>>a;
 cin>>b;
 cin>>c;
 cin>>d;
 cin>>e;
 cin>>f;
 cin>>g;
 cin>>m;
 m = sl(a,b,c) + sl(f,g,c) + sl(e,g,d);
 printf("\nf=%7.3f",m);
 getch();
}
