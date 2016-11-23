#include <iostream>
#include <cmath>
using namespace std;
int fact(int N);
double f1(double);
double f2(double);
double t(double);


int main(){
   double f, y;
   cout<<"Input y :";
   cin>>y;
   f = (7*t(0.25)+2*t(y+1))/(6-t(y*y-1));
   cout<<"f = "<<f<<endl;
   system("pause");
   return 0;
    }

double f1(double x){
      double f=0;
      for (int i = 0; i < 10; i++){
          f+=pow(x,2*i+1)/fact(2*i+1);
      }
        return f;
}
    
double f2(double x){
      double f=0;
      for (int i = 0; i < 10; i++){
          f+=pow(x,2*i)/fact(2*i);
      }
        return f;
}

double t(double x) {
       return f1(x)/f2(x);
}

    
int fact(int N){
    if(N < 0) 
        return 0; 
    if (N == 0) 
        return 1; 
    else 
        return N * fact(N - 1);
    }
