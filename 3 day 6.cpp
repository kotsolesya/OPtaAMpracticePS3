#include <iostream>
#include <math.h>
#include <stdio.h>


using namespace std;

int equation () {
    setlocale(LC_ALL, "Russian");
    float a, b, c, d, eq;
    cout << "¬ведите число a= ";
    cin >> a;
    cout << "\n¬ведите число b= ";
    cin >> b;
    cout << "\n¬ведите число c= ";
    cin >> c;
    cout << "\n¬ведите число d= ";
    cin >> d;
    eq = (sqrt(a/b)) + (sqrt(c/d)) - (sqrt((a*b)/(c*d)));
    cout << "–езультат уровнени€: " << eq << endl;
}

int main () {
    equation ();
    
    
    
    
    
    system ("pause");
    return 0;
}
    
    
    
