#include <iostream>

using namespace std;

double min(double,double);

int main(){
    double a, b, z;
    cout<<"Input a and b number:";
    cin>>a>>b;
    z = min(a,3*b)*min(2*a-b,2*b);
    cout<<"z = "<<z<<endl;
    system("pause");
    return 0;
    }
    
double min(double a, double b) {
       if (a < b) {
       return a;
       } else {
       return b;
       }
}    
