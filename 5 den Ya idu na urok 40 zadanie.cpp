//5 den Ya idu na urok 40 zadanie
#include <iostream.h>
#include <conio.h>
 struct ucheniki
  {
char name[20];
char klas[10];
char ocenka[10];
   int h;
  };
int main()
   {
int n = 2;
int m;           
    ucheniki a[n];
    int i;
    cout<<" Enter:\n";
     for(i=0;i<n;i++)
      {
       cout<<"\n imya "<<i+1<<" uchenika : ";
       cin>>a[i].name;
       cout<<"\n  "<<" klas: ";
       cin>>a[i].klas;
       cout<<"\n ocenka=";
       cin>>a[i].h;
      }
    cout<<"\n\n Ocenka 5:\n";
     for(i=0;i<n;i++)
      if(a[i].h>=5) cout<<a[i].name<<a[i].klas<<"klas"<<"\n";
    system("pause");
    return 0;
   }
