#include<stdio.h>
#include<iostream.h>

 
int main()
{
    char *s="abcabcabc abc abcabc";
    int cn;
    for(cn=0; s=strstr(s, "abc"); ++cn, s+=3);
    printf("%d\n", cn);
    system("pause");
    return 0; 
}

