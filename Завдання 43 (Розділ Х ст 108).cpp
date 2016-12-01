#include <iostream.h>
#include <math.h>
#include <conio.h>
 
unsigned long int fact( unsigned long int n)
{ 
    if(n==0) return 1;
    return n*fact(n-1);
}
 
main()
{    int s; 
    cout<<"Vvedin s!: ";
    cin>>s;
    cout<<s<<"!="<<fact(s)<<endl;
    getch();
      return 0;
}
