#include <iostream>

using namespace std;

struct classmates
{
       string secname;
       string name;
       string fath;
       int day_bday;
       int month_bday;
       int year_bday;
};

int main ()
{
 classmates kek[11];
 kek[0].secname = "Huskov";      kek[0].name = "Serhii";     kek[0].day_bday = 6;   kek[0].month_bday = 11; kek[0].year_bday = 1998;
 kek[1].secname = "Churchill";    kek[1].name = "Winston";       kek[1].day_bday = 29;  kek[1].month_bday = 11; kek[1].year_bday = 1998;
 kek[2].secname = "Bonaparte";   kek[2].name = "Napoleon";     kek[2].day_bday = 5;   kek[2].month_bday = 4;  kek[2].year_bday = 1998;
 kek[3].secname = "Caesar";      kek[3].name = "Julius";      kek[3].day_bday = 12;  kek[3].month_bday = 8;  kek[3].year_bday = 1998;
 kek[4].secname = "Macedon"; kek[4].name = "Alexander";  kek[4].day_bday = 29;  kek[4].month_bday = 11; kek[4].year_bday = 1998;
 kek[5].secname = "Khmelnytsky";       kek[5].name = "Bohdan";    kek[5].day_bday = 12;  kek[5].month_bday = 11; kek[5].year_bday = 1998;
 kek[6].secname = "Augustus";      kek[6].name = "Octavian";      kek[6].day_bday = 11;  kek[6].month_bday = 11; kek[6].year_bday = 1998;
 kek[7].secname = "Franklin";       kek[7].name = "Benjamin";    kek[7].day_bday = 5;   kek[7].month_bday = 12; kek[7].year_bday = 1998;
 kek[8].secname = "Washington";     kek[8].name = "George";      kek[8].day_bday = 3;   kek[8].month_bday = 2;  kek[8].year_bday = 1998;
 kek[9].secname = "Cortes";     kek[9].name = "Hernan";      kek[9].day_bday = 29;  kek[9].month_bday = 11; kek[9].year_bday = 1998;
 kek[10].secname = "Hannibal";     kek[10].name = "Barca";    kek[10].day_bday = 28; kek[10].month_bday = 11;kek[10].year_bday = 1998;
 
 
 cout << "today's birthdays :" << endl;

 for (int i = 0; i < 10; i++)
 {
     if ((kek[i].day_bday == 29)&&(kek[i].month_bday == 11)&&(kek[i].year_bday == 1998))
     {
         cout << kek[i].secname << " " << kek[i].name << " " << kek[i].fath << endl;
     }
 }
 
 system ("pause");
 return 0;
}

 
