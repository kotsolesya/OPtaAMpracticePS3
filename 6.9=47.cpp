//1 день 6.9 = 47 завдання
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
        if(Str[i] == '.')
        {
            Str.insert(Str.begin()+ ++i, ' ');
        }
    }
    cout<<Str<<'\n';
    system("pause");
    return 0;
}
