//1 den $8 ct 107 = 256 zadanie
#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
    setlocale(LC_ALL,"Russian");
    string str;
    cout<<"Vvedite stroku simvolow sodershashie 1 i poslednuu zapyatuu = "<<endl;
    cin>>str;
    cout<<endl;
    cout<<"Chislo mesta gde nahoditsa 1 zapyataia = ";
    cout<<str.find_first_of(',')<<endl;
    cout<<"Chislo mesta gde nahoditsa poslednyaa zapyataia = ";
    cout<<str.find_last_of(',')<<endl;
    system("Pause");
    return 0;
    }
