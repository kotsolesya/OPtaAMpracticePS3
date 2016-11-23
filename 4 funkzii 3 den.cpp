#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float S1, a, b, c, p;
    float S2, a2, b2, c2, p2;
    cout<<"vedite a b c \n";
    cin>>a>>b>>c;
    p = (a+b+c)/2;
    cout<<"p= "<<p<<endl;
    S1 = (sqrt(p*(p-a)*(p-b)*(p-c)));
    cout<<"S1= "<<S1<<endl;
    cout<<"vedite a2 b2 c2 \n";
    cin>>a2>>b2>>c2;
    p2 = (a2+b+c2)/2;
    cout<<"p2= "<<p2<<endl;
    S2 = (sqrt(p2*(p2-a2)*(p2-b2)*(p2-c2)));
    cout<<"S2= "<<S2<<endl;
    if (S1 < S2) 
    { cout << "Trikutnik S2 mae bilshu ploshu" << endl; } 
    else 
    { cout << "Trikutnik S mae bilshu ploshu" << endl; }
    system("pause");
    return 0;
}

