#include <iostream.h>
using namespace std;

struct Cars{
       string model;
       float price;
       string type;
};
int main () {
    
   
   Cars fifa [15];
   fifa[0].model = "���"; fifa[0].price = 15000; fifa[0].type = "��������";
   fifa[1].model = "����"; fifa[1].price = 25000; fifa[1].type = "��������";
   fifa[2].model = "����"; fifa[2].price = 11000; fifa[2].type = "��������";
   fifa[3].model = "�����"; fifa[3].price = 17000; fifa[3].type = "��������";
   fifa[4].model = "�����"; fifa[4].price = 12000; fifa[4].type = "��������";
   fifa[5].model = "������"; fifa[5].price = 18000; fifa[5].type = "��������";
   fifa[6].model = "����"; fifa[6].price = 10000; fifa[6].type = "��������";
   fifa[7].model = "�����"; fifa[7].price = 15000; fifa[7].type = "��������";
   fifa[8].model = "����� ������"; fifa[8].price = 100000; fifa[8].type = "��������";
   fifa[9].model = "������"; fifa[9].price = 30000; fifa[9].type = "��������";
   fifa[10].model = "��������"; fifa[10].price = 120000; fifa[10].type = "��������";
   fifa[11].model = "������"; fifa[11].price = 300000; fifa[11].type = "��������";
   fifa[12].model = "�����������"; fifa[12].price = 400000; fifa[12].type = "��������";
   fifa[13].model = "���� ����"; fifa[13].price = 270000; fifa[13].type = "��������";
   fifa[14].model = "��������"; fifa[14].price = 200000; fifa[14].type = "��������";
   
   int sum=0, count=0;
   for(int i = 0 ; i < 15; i++)
     {
       if (fifa[i].type=="��������") 
          {
          sum=sum+fifa[i].price;
          count++;
          }
     }
      cout<<"sum = "<<sum<<endl;  
      cout<<"count = "<<count<<endl;  
      
      cout<<"avg = "<<sum/count<<endl;
      
system ("pause");
return 0;
}
