#include <iostream>

using namespace std;

int main () {
    
    char s[100];
    cin.getline(s, 100);
      char x;
      cin>>x;
    int length, k=0;
      
    length = strlen(s);

for(int i = 0; i < length; i++)
{
        if ( s[i] == x) 
             k++;    
}
cout<<"k="<<k;
    system ("pause");
    return 0; }
