#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void changer(char*,int);

int main(){
   char text[500];
   int n;
   puts("Input text and number of begining symbol");
   gets(text);
   cin>>n;
   changer(text,n);
   cout<<text<<endl;
   system("pause");
   return 0;
    }

void changer(char *text, int n) {
     int len = strlen(text);
          for ( int i = n; i < len; i++ ) {
              if (text[i] == '0') {
                 text[i] = '1';
              } else if (text[i] == '1') {
                 text[i] = '0';
              } else {
                continue;
              }
          }
}
