#include <iostream.h>
#include <conio.h>

using namespace std;
struct VYZ
{
       char shufr [15];
       char prizvushe[20];
       char imya[20];
       char po_batkovi[20]; 
       float serednii_bal;
       int language;
       int za_fahom;
}
;
int main(){
int n;
 cout<<"Dobavte abiturienta v BD:\n";
 cout<<"Kilkist abiturientiv :";
 cin>>n;        
VYZ s[n];
for (int i=0;i<n;i++)
   { 
       cout<<"\n Shufr "<<i+1<<" : ";
       cin>>s[i].shufr;
       cout<<"\n Prizvushe "<<i+1<<": ";
       cin>>s[i].prizvushe;          
       cout<<"\n Imya "<<i+1<<" : ";
       cin>>s[i].imya;
       cout<<"\n Po batkovi "<<i+1<<" : ";
       cin>>s[i].po_batkovi;
       cout<<"\n Serednii bal "<<i+1<<" : ";
       cin>>s[i].serednii_bal;
       cout<<"\n Language "<<i+1<<" : ";
       cin>>s[i].language;
       cout<<"\n Za fahom "<<i+1<<" : ";
       cin>>s[i].za_fahom;
       
       cout<<endl;          
    }   
   cout<<"Shufr\tPriz\tImya\tpo bat\t\Ser bal\tLang\tZa fahom"<<endl;
   for (int i=0;i<n;i++)
   { 
         cout<<s[i].shufr<<"\t"<<s[i].prizvushe<<"\t"<<s[i].imya<<"\t"<<s[i].po_batkovi<<"\t"<<s[i].serednii_bal<<"\t"<<s[i].language<<"\t"<<s[i].za_fahom<<endl;
          }
          system("pause");
          return 0;
          }
