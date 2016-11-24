//1 den 6.9 = 47 zavdanie 
#include <iostream>
#include <string>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    string Str;
    getline(cin, Str);
    for(size_t i=0; i<Str.size(); ++i)
    {
        if(Str[i] == Str[i+1])
        {
            Str.insert(Str.begin()+ ++i, ' ');
        }
    }
    cout<<Str<<'\n';
    system("pause");
    return 0;
}
