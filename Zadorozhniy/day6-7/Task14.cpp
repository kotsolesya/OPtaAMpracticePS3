#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    char symbol;
    cin>>symbol;
    int counter = 0;
    char text[100];
    string temp;
    ifstream file("text.txt");
    
    while (!file.eof()) {
          file>>text;
          if (tolower(text[0]) == tolower(symbol)) {
             counter++;
             cout<<text<<endl;
          }
    }
    cout<<"The number  of words, starting on "<<symbol<<": " << counter<<endl;
    system("pause");
    return 0;
    }
