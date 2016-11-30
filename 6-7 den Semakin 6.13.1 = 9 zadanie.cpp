//6-7 den Semakin 6.13.1 = 9 zadanie
#include <iostream>
#include <fstream>
using namespace std;
int main() {
ofstream file("numbers.txt");
int number, n, divider;
cout<<"Input the number of digits: ";
cin>>n;
for (int i = 0; i < n; i++) {
    cin>>number;
    file<<number<<endl;
}
file.close();
cout<<"Input divider: ";
cin>>divider;
ifstream file2("numbers.txt");

for( int i = 0; i < n; i++) {
     file2 >> number;
     if ((number % divider) == 0 ) {
        cout<<number<<endl;
     }
}
file2.close();
     
system("pause");
return 0;
}
