#include <iostream.h>
#include <math.h>
#include <iomanip.h>

double f(float x)
{  
    return (M_PI/2-atan(x))/(x*x-5*x+6);
}
 
int main(){
   float a; 
   float b;
   float h;
   cout<<"Vvedit chuslo a: "<<endl;
   cin>>a;
   cout<<"Vvedit chuslo b: "<<endl;
   cin>>b;
   cout<<"Vvedit krok h: "<<endl;
   cin>>h;
   if(h==0)
     {cout<<"Error"<<endl;}
     else
   for (float x=a; x<(b+h/2); x+=h)
   cout<<setw(10)<<left<<x<<"  --->  "<<f(x)<<endl;

    system("pause");   
}
