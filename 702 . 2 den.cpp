//2 den Abramov = 702 zavdanie 
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL,"Russian");
	int n;
	cout<<" vedite chislo kvadratroi matrici = ";
	cin>>n;
	double b[n];
	for (int i=0; i<n; i++)
	{
            if((i+1)%2==0) b[i]=1.0/((i+1)*(i+1) + 2);
	    else b[i]=1.0/(i+1);
        }
	double A[n][n];
	cout<<" vedite 2 elementa matrici v [] [] = ";
	for (int i=0; i<n; i++)
	    for (int j=0; j<n; j++)
	        cin>>A[i][j];
        double Ab[n];
        for (int i=0; i<n; i++)
        {   
    	   Ab[i]=0;
    	   for (int j=0; j<n; j++)
    	   {
    		Ab[i]+=A[i][j]*b[j];
    	   }
        }
        for (int i=0; i<n; i++)
        cout<<Ab[i]<<" ";
    system("Pause");
	return 0;
}
