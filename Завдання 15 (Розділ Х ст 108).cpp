#include <iostream.h>
#include <conio.h>
#include <math.h>
 
bool prt(int n)
{
    for (int i = 2; i < sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}
 
int main()
{
    for (int i=100; i < 1000; i++)
        if (prt(i))
            cout<< i << " ";
            getch();
    return 0;
}
