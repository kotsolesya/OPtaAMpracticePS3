#include <iostream>

using namespace std;
 
int main()
{
    int N;
    int a[N];
   // int a[N]={5,-5,-4,4,-1,-2,-3,1,2,3};
    sort(a,a+N);
    int b[N];
    for(int i=0;i<N;i+=2)
    {
        b[i/2]=a[i];
        b[N-1-i/2]=a[i+1];
    }
    for(int i=0;i<N;i++)
        cout<<b[i]<<' ';
    system("pause");
    return 0;
}
