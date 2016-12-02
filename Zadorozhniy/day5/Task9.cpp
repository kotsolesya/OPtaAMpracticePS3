#include <iostream>
#include <string>
using namespace std;

struct Country{
       string name;
       string continent;
       };

int main(){

    Country country[20];
    country[0].name = "Ukraine"; country[0].continent = "Europe";
    country[1].name = "Russia"; country[1].continent = "Asia";
    country[2].name = "America"; country[2].continent = "North America";
    country[3].name = "Brazil"; country[3].continent = "South America";
    country[4].name = "China"; country[4].continent = "Asia";
    country[5].name = "Japan"; country[5].continent = "Asia";
    country[6].name = "France"; country[6].continent = "Europe";
    country[7].name = "Guatemala"; country[7].continent = "North America";
    country[8].name = "Itali"; country[8].continent = "Europe";
    country[9].name = "Egypt"; country[9].continent = "Africa";
    country[10].name = "Vatican"; country[10].continent = "Europe";
    country[11].name = "Kenia"; country[11].continent = "Africa";
    country[12].name = "Uruguai"; country[12].continent = "Africa";
    country[13].name = "India"; country[13].continent = "Asia";
    country[14].name = "Kazahstan"; country[14].continent = "Asia";
    country[15].name = "Namibia"; country[15].continent = "Africa";
    country[16].name = "Portugaly"; country[16].continent = "Europe";
    country[17].name = "Niderlandy"; country[17].continent = "Europe";
    country[18].name = "Luxemburg"; country[18].continent = "Europe";
    country[19].name = "Sudan"; country[19].continent = "Africa";
    
    for (int i = 0 ; i < 20; i++){
        if (country[i].continent == "Asia" || country[i].continent == "Africa") {
           cout<<country[i].continent<<":  "<<country[i].name<<endl;
        }
    }
    
    system("pause");
    return 0;
    }
    


