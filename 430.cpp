#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void MAX(int *X, int *Y, int *Z)
{ 
  int  t, maxX, maxY, maxZ,;
     for (int i=0; i<5; i++)
      {   
         if(maxX<X[i])
           maxX=X[i];
         
         if(maxY<Y[i])
           maxY=Y[i];
         
         if(maxZ<Z[i])
           maxZ=Z[i];
      }
      
     if(maxX>=0)  
         t=(maxY+maxZ)/2;
     else
         t=1+(maxX*maxX);
         
      cout<<"Max X:  "<<maxX<<endl;
      cout<<"Max Y:  "<<maxY<<endl;
      cout<<"Max Z:  "<<maxZ<<endl;
      cout<<endl;
         cout<<"t="<<t<<endl;
}
main()
{
   srand(time(NULL));
     int  X[5], Y[5], Z[5];
     float t, maxX, maxY, maxZ;

for (int i=0; i<5; i++)
   {
    
     X[i]=rand()%100;
     Y[i]=rand()%100;
     Z[i]=rand()%100;   
   }   

for (int i=0; i<5; i++){
    cout<<X[i]<<"\t"<< Y[i]<<"\t"<<Z[i]<<endl;
    cout<<endl;
 } 
  MAX(X,Y,Z);

getch();
}                  
