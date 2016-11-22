#include <iostream.h>

struct Student {
char name[10];
int year;

     };
int main () {
    int n;
    cout<<"Enter number of student";
    cin>>n;
    Student student[n];
  //  min = 100;
  
    
    for (int i = 0 ; i < n ; i++) {
        cin>>student[i].name;
        cin>>student[i].year; }
    
    for (int i = 0; i < n ; i++) {
    for (int j = i+1 ; j < n ; j++){
        if((student[i].year == student[j].year) && (i != j )){    
        cout <<student[i].name<<"   "<<student[i].year<<endl; 
        cout <<student[j].name<<"   "<<student[j].year<<endl; 
        }
        }}
       system("pause");
    return 0;
}
    
