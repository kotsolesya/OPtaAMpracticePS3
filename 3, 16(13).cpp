#include <iostream>
#include <string>
int main()
{
std::string str = "gfhghfgk, ppp" ;
int r=0,k=0,t=0;
 
for(int i=0; i<(int)str.size();i++)
{
if(str[i]=='?')
r++;
else if(str[i]=='?')
k++;
else if(str[i]=='?')
t++;
}
std::cout<< "r: " <<r<<" k: "<<k<<" t: "<<t<<std::endl;
system("pause");
return 0;
}
