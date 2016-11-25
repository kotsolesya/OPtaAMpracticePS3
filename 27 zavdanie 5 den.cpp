#include <iostream.h>
#include <conio.h>
 struct mountain
  {
char name[10];
   int h;
  };
int main()
   {
int n = 15;
int m;           
    mountain a[n];
    int i;
    cout<<" Enter:\n";
     for(i=0;i<n;i++)
      {
       cout<<"\n Name of "<<i+1<<" mountain: ";
       cin>>a[i].name;
       cout<<"\n H=";
       cin>>a[i].h;
      }
    cout<<"\n\n H>3000:\n";
     for(i=0;i<n;i++)
      if(a[i].h>3000) cout<<a[i].name<<"\n";
    system("pause");
    return 0;
   }
