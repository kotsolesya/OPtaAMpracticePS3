#include <iostream>
#include <string.h>
using namespace std;

struct Student{
       char name[15];
       int  age;
       };

int main(){
    int n, min, current = 0,i;
    cout<<"Enter number of student: ";
    cin>>n;
    Student student[n];
    min = 100;
    
    for ( i = 0 ; i < n ; i++) {
        cin>>student[i].name;
        cin>>student[i].age;
        
        if (student[i].age < min) {
            min = student[i].age;
           current = i;
        } else {
        continue;
        }
    }
    cout<<student[current].name<<endl;
    system("pause"); 
    return 0;
}
