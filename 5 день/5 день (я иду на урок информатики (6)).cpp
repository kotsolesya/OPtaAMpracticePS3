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
    fifa[0].gorod = "�������";  fifa[0].strana = "������";
    fifa[1].gorod = "�����";  fifa[1].strana = "�������";
    fifa[2].gorod = "���������";  fifa[2].strana = "����������";
    fifa[3].gorod = "����";  fifa[3].strana = "�������";
    fifa[4].gorod = "���������";  fifa[4].strana = "���������";
    fifa[5].gorod = "������";  fifa[5].strana = "������";
    fifa[6].gorod = "�����";  fifa[6].strana = "������";
    fifa[7].gorod = "���������";  fifa[7].strana = "���";
     fifa[8].gorod = "���������";  fifa[8].strana = "������";
     fifa[9].gorod = "�������";  fifa[9].strana = "����������";
     fifa[10].gorod = "����";  fifa[10].strana = "�������";
     fifa[11].gorod = "�����";  fifa[11].strana = "���������";
     fifa[12].gorod = "�������";  fifa[12].strana = "������";
     fifa[13].gorod = "�����";  fifa[13].strana = "������";
     fifa[14].gorod = "������";  fifa[14].strana = "������";
     fifa[15].gorod = "������";  fifa[15].strana = "�������";
     fifa[16].gorod = "���������";  fifa[16].strana = "�������";
     fifa[17].gorod = "������";  fifa[17].strana = "������";
     fifa[18].gorod = "���������";  fifa[18].strana = "������";
     fifa[19].gorod = "���������";  fifa[19].strana = "����������";
     fifa[20].gorod = "�����";  fifa[20].strana = "������";
     fifa[21].gorod = "�����";  fifa[21].strana = "�����";
     fifa[22].gorod = "������";  fifa[22].strana = "����������";
     fifa[23].gorod = "���������";  fifa[23].strana = "���";
     fifa[24].gorod = "���-����";  fifa[24].strana = "���";
     fifa[25].gorod = "������";  fifa[25].strana = "������";
    
    for (int i = 0 ; i <26; i++)
    {
        if (fifa[i].strana == "������")
        {
           cout <<  fifa[i].strana << ": "<<  fifa[i].gorod<<endl;
        }
    }
    
    system ("pause");
    return 0;
}
    
