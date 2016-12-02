#include <iostream.h>
#include <conio.h>
#include <cmath>
using namespace std;
void Metod(double a1, double b1, double c1)
{
        int kol=0;
        double D,D1,D2;
        double x1;
        double x2;
        D=pow(b1,2)-4*a1*c1;
        D1=pow(a1,2)-4*b1*c1;
        D2=pow(a1,2)-4*c1*b1;
            if (D>=0)
            {
                x1=(-b1+sqrt(D))/(2*a1);
                x2=(-b1-sqrt(D))/(2*a1);     
                if (x1-(int)x1 !=0 || x2-(int)x2 !=0);
                {
                    cout<<"Rivnyannya "<<a1<<"x^2+"<<b1<<"x+"<<c1<<" mae rechovi korni "<<endl;
                    kol++;
                }
            }else{cout<<"Rivnyannya ax^2+bx+c=0 ne maye koreniv\n";}
            if (D1>=0)
            {
                x1=(-a1+sqrt(D))/(2*b1); 
                x2=(-a1-sqrt(D))/(2*b1);
                if (x1-(int)x1 !=0 || x2-(int)x2 !=0);
                {
                    cout<<"Rivnyannya "<<b1<<"x^2+"<<a1<<"x+"<<c1<<" mae rechovi korni "<<endl;
                    kol++;
                }
            }else{cout<<"Rivnyannya bx^2+ax+c=0 ne maye koreniv\n";}
            if (D2>=0)
            {
                x1=(-a1+sqrt(D))/(2*c1);
                x2=(-a1-sqrt(D))/(2*c1);
                if (x1-(int)x1 !=0 || x2-(int)x2 !=0);
                {
                    cout<<"Rivnyannya "<<c1<<"x^2+"<<a1<<"x+"<<b1<<" mae rechovi korni "<<endl;
                    kol++;
                }
            }else{cout<<"Rivnyannya cx^2+ax+b=0 ne maye koreniv\n";}
}
int main()
{
    int f,s,t;
    cout<<"Vvedit znachennya a: ";
    cin>>f;
    cout<<"Vvedit znachennya b: ";
    cin>>s;
    cout<<"Vvedit znachennya c: ";
    cin>>t;
    Metod(f,s,t);
    getch();
    return 0;
}
