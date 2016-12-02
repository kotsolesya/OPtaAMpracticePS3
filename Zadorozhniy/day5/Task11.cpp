#include <iostream>
#include <string>
using namespace std;

struct Person{
       string surname;
       string name;
       int mark;
       };

int main(){
    Person person[50];
    string names[5] = { "John","Martin","Klark","Joe","Steve"};
    string surnames[8] = { "Forter","Larin","Hovanski","Bang","Klark","Luter","Bute","Skywoker"};
    srand(time(NULL));
    for (int i = 0 ; i < 30; i++){
        person[i].name = names[rand()%5];
        person[i].surname = surnames[rand()%8];
        person[i].mark = rand()%100;
    }
    
    for (int i = 0 ; i < 30; i++){
        if (person[i].mark > 30 ) {
           cout<<person[i].name<<"  ";
           cout<<person[i].surname<<"  ";
           cout<<person[i].mark;
           cout<<endl;
        }
    }
   
    system("pause");
    return 0;
    }
    


