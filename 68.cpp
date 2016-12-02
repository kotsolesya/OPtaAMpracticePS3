#include <stdio.h>
#include <unistd.h>
#include <windows.h>
#include <iostream.h>
 
int main(int argc, const char* argv[])
{
    setlocale(LC_ALL, "Russian");
   const char text[] = "группа ПС 3-1\t\n\n\t";
   size_t i =  0, j;
   while (1)
   {
      system("cls");
       for (j = i; j > 0; --j)
      {
         printf(" ");
      }
      printf("%.*s", 80-i-1, text);
 
      if (80 == ++i)
      {
         i = 0;
      }
      printf("%c", 13);
Sleep(20); 
   }
   return 0;
}
