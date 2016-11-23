#include <iostream>
#include <cmath>
using namespace std;
float f(float);
int fact(int N);

int main(){
  
  for (float i = -4; i<4; i += 0.75) {
   cout<<f(i)<<endl;    

   }
   system("pause");
   return 0;
    }

float f(float x){
        return (x*x-2*x+1)/log(x-1);
    }
    
