#include<iostream>
#include<conio.h>
 
using namespace std;
 
int main() {
    char string[100];
    cout << "vvedite stroku: ";
    cin >> string;
    int i = 0;
    char flag = false;
    cout << "Ishodnaya stroka : " << string << endl;
    cout << "Podstroka kotoraya nahoditsya mejdy (@#%): ";
    while(string[i] != '\0') {
        if(string[i] == '(') {
            flag = true;
            i++;
        }
        if(string[i] == ')') {
            flag = false;
        }
        if(flag)
            cout << string[i];
        i++;
    }
    cout << endl;
    getch();
}
