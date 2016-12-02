#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
using namespace std;
float max (float a, float b){
if (a>b)
return a;
else return b;
}
int main () {
setlocale(LC_ALL, "Russian");
float a, b, c, d, eq;
cout << "Vvedite chislo a= ";
cin >> a;
cout << "\nVvedite chislo b= ";
cin >> b;
cout << "\nVvedite chislo c= ";
cin >> c;
eq = ((max(a,a+b)+max(a,b+c))/(1+max(a+b*c,1.15)));
cout << "Rezultat: " << eq << endl;
system ("pause");
return 0;
}
