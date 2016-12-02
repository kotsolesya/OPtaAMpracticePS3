//1 den 6.9 = 6 zavdanie 
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
   string str;
   int i;
   cin>>str;
   for (i=0;str[i]!=':'&&i<str.length();i++); 
   cout<<i<<endl;
   system("pause"); 
   return 0;
}
