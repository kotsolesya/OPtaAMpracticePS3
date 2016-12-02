#include <iostream>
#include <string>
using namespace std;

struct Person{
       string surname;
       string name;
       string object;
       int adress;
       int telephone;
       };

int main(){
    Person person[30];
    string objects[4] = {"TV","Telephone","refrigerator","bicycle"};
    string names[5] = { "John","Martin","Klark","Joe","Steve"};
    string surnames[8] = { "Forter","Larin","Hovanski","Bang","Klark","Luter","Bute","Skywoker"};
    srand(time(NULL));
    for (int i = 0 ; i < 30; i++){
        person[i].name = names[rand()%5];
        person[i].surname = surnames[rand()%8];
        person[i].adress = i;
        person[i].object = objects[rand()%4];
        person[i].telephone = rand()%1000000;
    }
    
    for (int i = 0 ; i < 30; i++){
        if (person[i].object == "TV" ) {
           cout<<person[i].name<<"  ";
           cout<<person[i].surname<<"  ";
           cout<<person[i].adress<<"  ";
           cout<<person[i].telephone<<"  ";
           cout<<endl;
        }
    }
   
    system("pause");
    return 0;
    }
    


