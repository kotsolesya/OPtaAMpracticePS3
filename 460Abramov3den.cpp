//3 den Abramov 460 
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <string.h>
using namespace std;
int j, x, count, sh;
int counter1(int j, int k, int count)
{ count=0;
int y=0;
switch(k)
{ 
   case 1: y=j*1; 
   case 2: y=j*16; 
   case 3: y=j*256;
}
 count=count+y;
 return count;
}
int main()
{ 
setlocale(LC_ALL, "Russian");
int i,z, summ, count;
z=0; i=0; summ=0;
char s[3]; 
char si; 
cout<<"vvedite 0 - 9 ili A - F"<<" ";
cin>>s;
cout<<"\n";
i=strlen(s);
for(x=0;x<=i-1;x++)
{ 
if (0<=s[x] && s[x]<='9') j = s[x] - '0';
else if ('A' <= s[x] && s[x]<='F') j = s[x] - 'A' + 10;
}
z=counter1(j,x,count);
 summ=summ+z;
 cout<<"v 16 sisteme "<<" "<<s<<"\n";
 cout<<"v 10 sisteme "<<" "<<summ-3809<<"\n";
 getch();
 return 0;
}
