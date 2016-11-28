#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float f(float, float, float);
 
int main()
{
  
    float s, t, result;
  
    printf("Enter s: "); scanf("%f",&s);
    printf("Enter t: "); scanf("%f",&t);
    result=f(t, -2*s, 1.17) + f(2.2, t, s-t);
    printf("result = %8.5f\n", result);
  
    system ("pause");
    return 0;
}
 
float f(float a, float b, float c)
{
    return (2*a-b-sin(c))/(5+abs(c));
    
    
}
