#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
 
using namespace std;
 
struct Team{ 
    
    int position;
    string name;
    int points;
};
 
string IntToStr(int x){
    
    stringstream r; 
    r << x;
    return r.str();
}
 
int main(){
    
    Team a[20], new_team;
    for (int i = 0; i < 19; ++i){ 
        a[i].position = i + 1;
        a[i].name = IntToStr(i + 1);
        a[i].name.append("- команда");
        a[i].points = 20 * 2 - 2 * i;
    }
        
    new_team.name = "20 команда";
    do{
        cout<<"введите количество набраных очков \"" <<new_team.name <<"\": ";
        cin >> new_team.points;
    }while (new_team.points >= a[0].points || a[18].points >= new_team.points);
    
    int i = 18;
    do{
        cout << a[i].name << ' ' << a[i].points << endl;
        a[i + 1].position = a[i].position + 1;
        a[i + 1].name = a[i].name;
        a[i + 1].points = a[i].points;
        --i;
    }while (a[i].points < new_team.points);
    
    new_team.position = i + 2;
    
    cout << "-----------------------------------------------------" << endl;
    
    cout << "\"" << new_team.name << "\" заняла " << i + 2 <<"-e место."<< endl;
    a[i + 1] = new_team;
    
    cout << "-----------------------------------------------------" << endl;
    for (i = 0; i < 20; ++i)
        cout << setw(2) << a[i].position 
             << setw(14) << a[i].name 
             << setw(3) << a[i].points << endl;
     system("pause");}
