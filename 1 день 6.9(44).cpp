#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char stroka[255];
	unsigned char gamma = 200;
	cout<<"Vvedit stoky= ";
	cin >> stroka;
	cout<<"Zashufrovana stroka= ";
   	for (int i = 0; i != strlen(stroka); i++)
	{	
        stroka[i] = stroka[i]^gamma; 
	    cout<<stroka[i];
        	};
	for (int i = 0; i != strlen(stroka); i++)
	{
        stroka[i] = stroka[i] ^ gamma;
        }
	system("pause");	
    return 0;
    }
