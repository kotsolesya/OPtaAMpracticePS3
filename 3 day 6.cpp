#include <iostream>
#include <math.h>
#include <stdio.h>


using namespace std;

int equation () {
    setlocale(LC_ALL, "Russian");
    float a, b, c, d, eq;
    cout << "������� ����� a= ";
    cin >> a;
    cout << "\n������� ����� b= ";
    cin >> b;
    cout << "\n������� ����� c= ";
    cin >> c;
    cout << "\n������� ����� d= ";
    cin >> d;
    eq = (sqrt(a/b)) + (sqrt(c/d)) - (sqrt((a*b)/(c*d)));
    cout << "��������� ���������: " << eq << endl;
}

int main () {
    equation ();
    
    
    
    
    
    system ("pause");
    return 0;
}
    
    
    
