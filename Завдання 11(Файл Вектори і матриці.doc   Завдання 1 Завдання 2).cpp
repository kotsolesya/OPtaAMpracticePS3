#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
 
int main()


 {  {
      int a,b,c,d,e;
      cout<<"Vvedit 5 chusel:"<<endl;
          
          cin>>a>>b>>c>>d>>e;
          ofstream numbers;
          numbers.open("D:\\numbers.txt");
          numbers<<a<<'\n'<<b<<'\n'<<c<<'\n'<<d<<'\n'<<e<<'\n';
          numbers<<endl;
          numbers.close();               
       }
/*************************************************/
{
      ifstream file("D:\\numbers.txt");;
    string ss;
    vector <string> vs;
    while( getline(file,ss) )
        vs.push_back(ss);
    sort(vs.begin(),vs.end());
    for(size_t i=0;i<vs.size();i++)
        cout<<vs[i]<<endl;
     }
    system("Pause");
    return 0;
    }
