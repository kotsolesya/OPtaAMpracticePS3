#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream file("numbers.txt");
    int n, max, current;
    cin>>n;
    srand(time(NULL));
    for (int i(0); i < n; i++) {
        file<<rand()%100<<endl;
        
    }
    file.close();
    ifstream file2("numbers.txt");
    file2>>max;
    for (int i = 0; i < n; i++) {
        file2>>current;
        if (current > max) {
           max = current;
        }
        }
    cout<<max<<endl;
    system("pause");
    return 0;
    } 
