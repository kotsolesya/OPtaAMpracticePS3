#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream file("numbers.txt");
    int n, current;
    srand(time(NULL));
    n = rand()%20;
    for (int i(0); i < n; i++) {
        file<<rand()%100<<endl;
        
    }
    file.close();
    ifstream file2("numbers.txt");
    do {
        file2>>current;
        cout<<current<<endl;
    } while (!file2.eof());
    system("pause");
    return 0;
    }
