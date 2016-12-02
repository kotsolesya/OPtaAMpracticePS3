//1 den Faili ryadki = 62 zadanie
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    setlocale(LC_ALL,"Russian");
    int cntr=0;// "is_alnum"
    char a[100];
    cout<<"vvedite proizvolnuy stroku = ";
    gets(a);
    cout<<"Esli simvoli s cifru = 1; esli drugie(*?& i td) = 0\n";
    if(isalnum(a[cntr]))
    {
       cout<<"Vivod = "<<"1";
       }
    else
    {
        cout<<"Vivod = "<<"0";
        }
    system ("Pause");
    return 0;
}
