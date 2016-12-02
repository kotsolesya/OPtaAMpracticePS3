#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
double pi=3.14;
double f(float x)
{  
return(cos(cos(x+pi))/sin(x+pi))/(x-1);
}
int main(){
double a=-3.14; 
double b=3.14;
double h=0.5;
double x=0;
for ( x=a; x<=b; x+=h)
cout<<setw(10)<<left<<x<<"  --->  "<<f(x)<<endl;
system("pause");   
}
