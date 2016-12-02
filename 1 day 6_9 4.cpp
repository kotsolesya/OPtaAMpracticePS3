#include <stdio.h>
#include <conio.h>
#include <string.h>
#define SIZE 250
int main(){
int count1 = 0;
int count2 = 0;
int count3 = 0;
char str[] = ";;; * :";
unsigned int i;
for(i=0;i<strlen(str);i++){
if(str[i]==';')count1++; 
if(str[i]=='*')count2++;
if(str[i]==':')count3++;
} 
printf("count 1 line: %d ",count1);
printf("\n");
printf("count 2 line: %d ",count2);
printf("\n");
printf("count 3 line: %d ",count3);
printf("\n");
getch();
return 0;
}
