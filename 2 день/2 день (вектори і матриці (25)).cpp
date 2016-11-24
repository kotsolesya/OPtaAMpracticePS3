#include <iostream>
 #include <cstdlib>
 using namespace std;
 
 
 int main()
 {
 int m;
 int a[15][15];
 cout<<"m="; cin>>m;
 
 for (int i=0; i<=m; i++)
 for (int j=0; j<=m; j++)
 { cout<<"a["<<i<<"]["<<j<<"]="; cin>>a[i][j]; }
 cout<<endl;
 for (int i=0; i<=m; i++)
 for(int j=0; j<=m; j++)
 { if (a[i][j]==0) cout<<i<<" "<<j<<endl;
 else cout<<"null"; 
 }
 system("pause");
 return 0;
 }
