#include <iostream>
#include <time.h>
using namespace std;
int main()

{
    const int n=3, m=3;
    int i, j, k, temp, diff, K[m][n];
    srand(time(0));   
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            K[i][j]=rand()%10;
            cout<<K[i][j]<<" ";
        }
        cout<<std::endl;
    }
    for (k=0; k<m-1; k++)
        for (i=k+1; i<m; i++)
        {
            diff=0;
            for (j=0; j<n; j++)
                diff+=(K[k][j]-K[i][j]);
            if (diff>0)
                for (j=0; j<n; j++)
                {
                    temp=K[i][j];
                    K[i][j]=K[k][j];
                    K[k][j]=temp;
                }
        }
    cout<<"modified array:";
    for (i=0; i<m; i++)
    {
        cout<<std::endl;
        for (j=0; j<n; j++)
        cout<<K[i][j]<<" ";
    }
    system ("pause");
}
