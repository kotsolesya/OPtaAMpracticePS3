#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{  
setlocale(LC_ALL, "Russian");
vector<string>maksym;
int c;
cout << "Количество фамилий: ";
cin >> c;
cout << "Введите год рождения и затем Фамилию на English-e:\n";
string * str = new string[c];
cin.get();
for(int i = 0; i < c; ++i){
cout << "#" << i + 1 << ": ";
getline(cin, str[i]);
maksym.push_back(str[i]);
}
sort(maksym.begin(), maksym.end());
cout << "\nСортування за возрастом (от старшего):\n";
for(int i = 0; i < c; ++i)
cout << maksym[i] << endl;
delete [] str;
system("pause");
return 0;
}
