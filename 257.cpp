#include <iostream>
#include <string>
using namespace std;
int main()
{
    char s[200];
    int m=0;
    cout<<"ввести строки=";
    cin.getline(s,200); 
    for(int i=0;s[i];i++)
   { m+=s[i]==' '; }
    cout<<"Количество пробелов= "<<m<<endl;
system ("pause");
}
