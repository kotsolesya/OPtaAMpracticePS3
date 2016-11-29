#include <iostream>

using namespace std;

struct goroda
{
  string strana;
  string gorod;
};

int main()
{
    setlocale (0,"");
    
    goroda fifa[26];
    fifa[0].gorod = "Неаполь";  fifa[0].strana = "Италия";
    fifa[1].gorod = "Париж";  fifa[1].strana = "Франция";
    fifa[2].gorod = "Амстердам";  fifa[2].strana = "Нидерланды";
    fifa[3].gorod = "Крен";  fifa[3].strana = "Австрия";
    fifa[4].gorod = "Эйндховен";  fifa[4].strana = "Голландия";
    fifa[5].gorod = "Москва";  fifa[5].strana = "Россия";
    fifa[6].gorod = "Турин";  fifa[6].strana = "Италия";
    fifa[7].gorod = "Вашингтон";  fifa[7].strana = "США";
     fifa[8].gorod = "Манчестер";  fifa[8].strana = "Англия";
     fifa[9].gorod = "Лисабон";  fifa[9].strana = "Португалия";
     fifa[10].gorod = "Киев";  fifa[10].strana = "Украина";
     fifa[11].gorod = "Минск";  fifa[11].strana = "Беларусия";
     fifa[12].gorod = "Венеция";  fifa[12].strana = "Италия";
     fifa[13].gorod = "Милан";  fifa[13].strana = "Италия";
     fifa[14].gorod = "Лондон";  fifa[14].strana = "Англия";
     fifa[15].gorod = "Мадрид";  fifa[15].strana = "Испания";
     fifa[16].gorod = "Барселона";  fifa[16].strana = "Испания";
     fifa[17].gorod = "Верона";  fifa[17].strana = "Италия";
     fifa[18].gorod = "Ливерпуль";  fifa[18].strana = "Англия";
     fifa[19].gorod = "Роттердам";  fifa[19].strana = "Нидерланды";
     fifa[20].gorod = "Токио";  fifa[20].strana = "Япония";
     fifa[21].gorod = "Пекин";  fifa[21].strana = "Китай";
     fifa[22].gorod = "Утрехт";  fifa[22].strana = "Нидерланды";
     fifa[23].gorod = "Питтсбург";  fifa[23].strana = "США";
     fifa[24].gorod = "Нью-Йорк";  fifa[24].strana = "США";
     fifa[25].gorod = "Оттава";  fifa[25].strana = "Канада";
    
    for (int i = 0 ; i <26; i++)
    {
        if (fifa[i].strana == "Италия")
        {
           cout <<  fifa[i].strana << ": "<<  fifa[i].gorod<<endl;
        }
    }
    
    system ("pause");
    return 0;
}
    
