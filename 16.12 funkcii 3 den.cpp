//3 день Функції = 16(12) завдання
#include <iostream>
#include <cmath>
using namespace std;
float y(float);
int main()
{
    float i, x, f, a, b, h;
    for (x = -7; x <=7; x += 0.75 )
   { 
        cout << " y = "<<y(x)<<endl;
   }
        system("pause");
        return 0;
   }
float y(float x){
return (abs(3*x-cos(x))/((x*x)-9));  
}  
