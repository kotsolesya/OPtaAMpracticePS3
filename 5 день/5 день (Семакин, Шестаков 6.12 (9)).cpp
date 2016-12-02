#include <iostream>

using namespace std;

struct deti
{
      string name;
      string group;
      int day;
      int month;
      int year;
};

int main()
{
    
    deti kek [8];
    kek[0].name = "Messi Lionel";     kek[0].group = "ZM 5-6"; kek[0].day = 5;       kek[0].month = 4;          kek[0].year = 2005;
    kek[1].name = "Suarez Luiz";         kek[1].group = "RA 1-1"; kek[1].day = 12;      kek[1].month = 2;          kek[1].year = 2004;
    kek[2].name = "Neymar Jr ";          kek[2].group = "OM 4-2"; kek[2].day = 8;       kek[2].month = 8;          kek[2].year = 2003;
    kek[3].name = "Rakitic Ivan";    kek[3].group = "PS 3-1"; kek[3].day = 25;      kek[3].month = 10;         kek[3].year = 2004;
    kek[4].name = "Busqets Sergio";           kek[4].group = "PS 1-1"; kek[4].day = 12;      kek[4].month = 12;         kek[4].year = 2006;
    kek[5].name = "Iniesta Andres";            kek[5].group = "KK 1-4"; kek[5].day = 3;       kek[5].month = 11;         kek[5].year = 2007;
    kek[6].name = "Jordi Alba";           kek[6].group = "OK 8-8"; kek[6].day = 28;      kek[6].month = 12;         kek[6].year = 2005;
    kek[7].name = "Turan Arda";          kek[7].group = "TT 3-7"; kek[7].day = 30;      kek[7].month = 5;          kek[7].year = 2007;
    
    cout << "Write month that you need : ";
    int i;
     cin >> i;
    
    switch ( i )
    {
           case 1 :
           {
                cout << "Nobody in this month have birthday "<< endl;
               system ("pause");
               break; 
           }     
           case 2 :
           {
                for (int a = 0; a < 8; a++)
                {
                    if (kek[a].month == 2)
                    {
                                     cout <<"In this month birthday have: " << endl<< kek[a].name << " - " << kek[a].year << " Year of birth, " << "Group - "<< kek[a].group << endl;
                    }
           }                     
                system ("pause");
                break; 
                }     
           case 3 : 
           {
                     cout << "Nobody in this month have birthday"<< endl;
               system ("pause");
               return 0; 
           }     
           case 4 : 
           {   
                for (int a = 0; a < 8; a++)
                {
                    if (kek[a].month == 4)
                    {
                                     cout <<"In this month birthday have: " << endl<< kek[a].name << " - " << kek[a].year << " Year of birth, " << "Group - "<< kek[a].group << endl;
                    }
                }              
                system ("pause");
                return 0; 
           }         
           case 5  :
           {    
                for (int a = 0; a < 8; a++)
                {
                    if (kek[a].month == 5)
                    {
                                    cout <<"In this month birthday have: " << endl<< kek[a].name << " - " << kek[a].year << " Year of birth, " << "Group - "<< kek[a].group << endl;
                    }
                }              
                system ("pause");
                return 0; 
           }         
           case 6 :
           {     
                cout << "Nobody in this month have birthday"<< endl;
                system ("pause");
                return 0;  
           }         
           case 7 :
           {
                cout << "Nobody in this month have birthday"<< endl;
                system ("pause");
                return 0; 
           }         
           case 8 :
           {
                cout << "Nobody in this month have birthday"<< endl;
                system ("pause");
                return 0; 
           }          
           case 9 :
           {    
                cout << "Nobody in this month have birthday" << endl;
                system ("pause");
                return 0;
           }         
           case 10 :
           {      
                for (int a = 0; a < 8; a++)
                {
                    if (kek[a].month == 10)
                    {
                                     cout <<"In this month birthday have: " << endl<< kek[a].name << " - " << kek[a].year << " Year of birth, " << "Group - "<< kek[a].group << endl;
                    }
                }              
                system ("pause");
                return 0;  
           }        
           case 11:
           {    
                for (int a = 0; a < 8; a++)
                {
                    if (kek[a].month == 11)
                    {
                                     cout <<"In this month birthday have: " << endl<< kek[a].name << " - " << kek[a].year << " Year of birth, " << "Group - "<< kek[a].group << endl;
                    }
                }              
                system ("pause");
                return 0;  
           }        
           case 12 :
           {     
                for (int a = 0; a < 8; a++)
                {
                    if (kek[a].month == 12)
                    {
                                     cout <<"In this month birthday have: " << endl<< kek[a].name << " - " << kek[a].year << " Year of birth , " << "Group - "<< kek[a].group << endl;
                    }
                }              
                system ("pause");  
                return 0;  
           }  
           case 13 : 
           {
                cout << "Good Bye!"<< endl;
                system ("pause");
                return 0;
                }
                
           default : 
                   {
                        cout << "Wrong number." << endl;
                        system ("pause");
                        return 0;
                   }
                        
 system ("pause");
 return 0;                              
}
}
                
                
                
                
                
                
                
