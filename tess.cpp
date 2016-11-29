//6-7 den 6.13.2 - 11 zadanie
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <fstream.h>
#include <iostream.h>
int main()
{
  const int n=81;
  ofstream file("text.txt");
  char text[100], word;
  char s1[n],s2[n];
  char *p;
  puts("vvedite stroku s1?"); 
  gets(text);
  file<<text;
  puts("vvedite stroku s2?"); 
  gets(s2);
  p=strstr(text,s2);
  if(p)
   {
    cout<<"\n podstroka \n nachinaetsa v stroke: \n "<<s2,text;
    cout<<"\n simvolov \n etim nachinaetsa podstroka: \n "<<*p,p;
   }
     else puts("NO");
  getch();
  return 0;
}
