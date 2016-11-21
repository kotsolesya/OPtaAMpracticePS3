#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin>>n;
    char symbol[n];
    cin>>symbol;
    for (int i = 0; i < n ; i++) {
        if (symbol[i] == '.' && symbol[i+1] == '.' ) {
           cout<<"...";
           i++;
        } else if (symbol[i] == '.') {
           cout<<"...";
        } else if (symbol[i] == '!') {
            cout<<".";
        } else {
            cout<<symbol[i];
        }
    }
    system("pause"); 
    return 0;
}
