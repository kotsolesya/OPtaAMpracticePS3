#include <string.h>
 
#include <iostream>
 
using namespace std;
 
int main()
{
    setlocale(0,"");
    char str[80]; int z=0;
    
    cout<<"������� ������"<<endl;
    gets(str);
    int len=strlen(str);
    for (int i=0; i<len; i++)
    {
        if (str[i] == ',' && str[i + 1] == '-')
        {
            z++;
        }
    }
    cout << "� ������������������ "<< z <<" ���������� <,->" << endl;
    
    system("pause");
    return 0;
}
