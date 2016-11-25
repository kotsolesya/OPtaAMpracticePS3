#include <iostream>
#include <string>
using namespace std;
int main()
{
    char s[200];
    int m=0;
    cout<<"Vvesti stroku=";
    cin.getline(s,200); 
    for(int i=0;s[i];i++)
   { m+=s[i]==' '; }
    cout<<"Kolicestvo probelov= "<<m<<endl;
system ("pause");
}

