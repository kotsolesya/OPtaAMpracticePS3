#include <iostream.h>
#include <Windows.h>

using namespace std;
 
struct people
{
char name[12];
int wife;
int child;
//people():wife(0),child(0){}
};
int main(int argc, char* argv[])
{
 SetConsoleCP(1251);
 SetConsoleOutputCP(1251);
 setlocale(LC_ALL,"Russian");
 system("color b");

int i,n;
cout<<"??????? ?????????? ???????: ";
cin>>n;
people p[n];
cout << "---------------------------------------------------------------"<<endl;
for(i=0;i<n;i++)
{
cout << "??????? #" << i+1 << endl;
cout << " ??????? ???: " ; cin >> p[i].name ;
cout << " ??????(??????? 1=?????,0=?? ?????): " ; cin >> p[i].wife ;
cout << " ????: " ; cin >> p[i].child;
}
for (i=0;i<n;i++)
{
if (p[i].wife != 0 && p[i].child != 0)
{         cout << "---------------------------------------------------------------"<<endl;
              cout<<"???????:";
cout << p[i].name << endl;}}
system("pause");
return 0;
}
