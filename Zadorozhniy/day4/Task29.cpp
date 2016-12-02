#include <iostream>
#include <string>

using namespace std;

int symbolCount(char*,char);

int main(){
    int total;
    char sent1[100];
    char sent2[100];
    char sent3[100];
    char s;
    cout<<"Input symbol: ";
    cin>>s;
    cout<<"Input first sentences:"<<endl;
    cin.get();
    gets(sent1);
    cout<<"Input second sentences:"<<endl;
    cin.get();
    gets(sent2);
    cout<<"Input third sentences:"<<endl;
    cin.get();
    gets(sent3);
    total = symbolCount(sent1,s) + symbolCount(sent2,s) + symbolCount(sent3,s) ;
    cout<<"the number of letters "<<s<< " in three sentences : "<<total<<endl;
    system("pause");
    return 0;
    }
    
int symbolCount(char *text, char s) {
    int len = strlen(text), counter = 0;
    for (int i = 0; i < len; i++){
        if (text[i] == s) {
           counter++;
        } else {
           continue;   
        }
    }
    return counter;
}
