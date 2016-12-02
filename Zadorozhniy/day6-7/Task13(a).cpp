#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream file("numbers.txt");
    int n, current;
    cin>>n;
    cout<<endl;
    srand(time(NULL));
    for (int i(0); i < n; i++) {
        file<<rand()%100<<endl;
        
    }
    file.close();
    ifstream file2("numbers.txt");
    for (int i = 0; i < n; i++) {
        file2>>current;
        cout<<current<<endl;
        }
    system("pause");
    return 0;
    }
