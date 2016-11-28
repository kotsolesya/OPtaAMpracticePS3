#include <iostream.h>
#include<string.h>

using namespace std;


void function (char * str, int m)
  {     
       for (int i = 0 ;i<m;i++)
 {
   if (str[i]==9)
    cout<<"\t";
   else
    cout<<str[i];
 }
  }


int main () {

   char str[100] ;
    cin.getline(str,100);
    int m;
    m=strlen(str);
  function(str, m);
 
system ("pause");
return 0;

}
