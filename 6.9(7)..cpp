#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int main()
{
setlocale(LC_ALL, "Russian");
 char str[20],*p; 
 cin.getline(str,20,'.'); 
 puts(" "); 
 p = strtok(str," ");
 {cout<<"????? ?????????? ??? ?????=\n";
  if(p && strlen(p)==3) puts(p); 
  while(p=strtok(NULL," "))
  if(strlen(p)==3) puts(p);} 
  getch();
  return 0;
}
