#include <iostream>
 
using namespace std;
 
int main(void)
{
    char str[4096]={0}, *word =NULL;
    int kol = 0;
    cout << "Enter string" << endl;
    cin.getline(str,4096,'.');
    word = strtok(str, "- .?!,:;");
    cout << word << endl;
    while(word)
    {
        kol++;
        word = strtok(NULL, "- .?!,:;");
       
    }
 
    cout << "Kol slov = " << kol << endl;
    system("pause");
    return 0;
}
