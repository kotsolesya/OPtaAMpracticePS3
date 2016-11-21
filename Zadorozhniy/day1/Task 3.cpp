#include <iostream.h>
#include <string.h>

int main(){
    char text[100];
    int length, count;
    gets(text);
    length = strlen(text);
    for ( int i = 0; i < length; i++) {
        if (text[i]>= 'a' && text[i]<='z' ) {
        count++;
        } else {
        continue;
        }
    }
    cout<<"Number of letters: "<<count<<endl;
    system("pause");
    return 0;
    }
