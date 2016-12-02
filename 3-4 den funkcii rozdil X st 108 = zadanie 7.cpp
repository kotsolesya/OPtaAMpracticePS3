//3-4 den funkcii rozdil X st 108 = zadanie 7
#include <iostream>
#include <math.h>
using namespace std;
double perimetr(double a,double b,double h)
{
return (a+b+2.0*sqrt(h*h+(a-b)*(a-b)/4.0));
}
int main()
{
double a1,a2,b1,b2,h1,h2,p;
cout<<"a1="; 
cin>>a1;
cout<<"b1="; 
cin>>b1;
cout<<"h1=";
cin>>h1;
cout<<"a2="; 
cin>>a2;
cout<<"b2="; 
cin>>b2;
cout<<"h2=";
cin>>h2;
cout<<"suma ih perimetrov ="<<perimetr(a1,b1,h1)+perimetr(a2,b2,h2)<<endl;
system("pause");
return 0;
}

