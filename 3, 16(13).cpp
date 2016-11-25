#include <iostream.h>
#include <math.h>
using namespace std;
 
      float Prt(int x1, int y1, int x2, int y2)
{
      return sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
      }
   int main()
   {
  int n = 10;
  float x[10];
  float y[10];
  float p=0;
cout<<"Vvedit vershunu 10-kytnuka :)"<<endl;
      for (int i=0;i<n;i++)
      {  
  
  cout<<"[x"<<i+1<<"]"<<"=";
  cin>>x[i];
  cout<<"[y"<<i+1<<"]"<<"=";
  cin>>y[i];
  cout<<"-------------"<<endl;
 
  }
    for (int i=0;i<n-1;i++)
    { 
    p+=Prt(x[i],y[i],x[i+1],y[i+1]);
    }
    p+= Prt(x[0],y[0],x[n-1],y[n-1]);
 
 cout<<"Perumetr: "<<p<<endl;
 system("pause");
 return 0 ;
}
