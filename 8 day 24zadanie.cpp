//8 day 24zadanie
#include <iostream.h>
#include <conio.h>
 struct armia
  {
char obmund[200];
int kilkist;
int novobra;
  };
int main()
   {
char obmund[200];
int kilkist;
int novobra;
    cout<<" Enter:\n";
      {
       cout<<"\n nazvanie "<<"obmundirovania : ";
       cin>>obmund;
       cout<<"\n  "<<" Kilkist obmundirovania: ";
       cin>>kilkist;
       cout<<"\n Kilkist novobra: ";
       cin>>novobra;
      }
    cout<<"\n\n Vidpovid: \n";
      if(kilkist<novobra)
      {
      cout<<"Nedostachia"<<"\n"<<novobra-kilkist<<" nestacha \n";
      }
      else
      {
      cout<<"Vse hvatae"<<"\n";
      }
system("pause");
return 0;
}
