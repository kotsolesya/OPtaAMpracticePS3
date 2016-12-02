#include <iostream>
#include <fstream>

using namespace std;

int main(){
    char s;
    fstream file;
file.open("Algoritm.txt", fstream::in |fstream::out );
    file.seekp(0, ios::beg);
    file<<'A';
    file.seekp(3, ios::beg);
    file<<'o';
    cout<<"File Algoritm.txt was changed"<<endl;
    system("pause");
    return 0;
    } 
