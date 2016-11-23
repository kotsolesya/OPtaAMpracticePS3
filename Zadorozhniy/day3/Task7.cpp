#include <iostream>
using namespace std;
int fact(int);

int main(){
    int a = fact(6),b= fact(2),c= fact(9),d= fact(3),e= fact(7),f= fact(3),g= fact(3),h= fact(2);
    cout<<((a*b+c*d)/(e*f-g*h));

    system("pause");
    return 0;
    }

int fact(int N){
    if(N < 0) 
        return 0; 
    if (N == 0) 
        return 1; 
    else 
        return N * fact(N - 1);
    }
