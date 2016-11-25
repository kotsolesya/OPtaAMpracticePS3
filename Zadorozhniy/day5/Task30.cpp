#include <iostream>
#include <string>
using namespace std;

struct Institution{
       string type;
       int count;
       };

int main(){
    int count = 0;
    Institution inst[20];
    inst[0].type = "School" ; inst[0].count = 264;
    inst[1].type = "College" ; inst[1].count = 156;
    inst[2].type = "University" ; inst[2].count = 945;
    inst[3].type = "School" ; inst[3].count = 469;
    inst[4].type = "College" ; inst[4].count = 678;
    inst[5].type = "School" ; inst[5].count = 168;
    inst[6].type = "University" ; inst[6].count = 479;
    inst[7].type = "College" ; inst[7].count = 346;
    inst[8].type = "School" ; inst[8].count = 798;
    inst[9].type = "University" ; inst[9].count = 113;
    inst[10].type = "College" ; inst[10].count = 666;
    inst[11].type = "School" ; inst[11].count = 478;
    inst[12].type = "University" ; inst[12].count = 631;
    inst[13].type = "College" ; inst[13].count = 249;
    inst[14].type = "School" ; inst[14].count = 795;    
    
    for (int i = 0 ; i < 20; i++){
        if (inst[i].type == "School" ) {
           count+=inst[i].count;
           
        }
    }
    cout<<"The number of Pupil: "<<count<<endl;
    system("pause");
    return 0;
    }
    


