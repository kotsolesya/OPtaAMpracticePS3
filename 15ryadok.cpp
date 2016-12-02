//1 den ryadok = 15 zavdanie 
#include <iostream> 
using namespace std;
int main()
{
    int ctr = 0; 
    char str[100]; 
    cin>>str;
    while ( str[ctr] )  
    {
      if ( isalpha(str[ctr]) ) 
          cout << "" << str[ctr] << "";
      else
          cout << "";
      ctr++;
    }
 system("pause");
    return 0;
}
