#include <iostream.h>
#include <iomanip>
#include <conio.h>
using namespace std;
 
unsigned akk(int m, int n)
{
    int akkv=0;
    if(m==0)
        return n+1;
    else if (m>0 && n==0)
        return akk(m-1,1);
    else 
    {
        if (akkv == 0)
        {
            int v=akk(m-1, akk(m,n-1));
            akkv=v;
            return v;
        } else
            return akkv;
    }
}
main() {
            int m, n;
            cout << "\nTablucya funkcii Akkermana(m, n):" << endl;
            cout << "-----+----------------------------------------" << endl;
            cout << " n\\m |";
                 for (int i=0; i<4; ++i) {
                 cout << setw(10) << i; 
                 }
          cout << endl << "-----+------------------------" << endl;
                      for (int i=0; i<15; ++i) {
                      cout << setw(3) << i << "  |";
                           for (int j=0; j<4; ++j){
                           cout << setw(10) << akk(j, i);
                           }
            cout << endl;
            getch();
            }
        }     
