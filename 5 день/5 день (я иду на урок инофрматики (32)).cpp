#include <iostream.h>
using namespace std;

struct Cars{
       string model;
       float price;
       string type;
};
int main () {
    
   
   Cars fifa [15];
   fifa[0].model = "БМВ"; fifa[0].price = 15000; fifa[0].type = "Грузовой";
   fifa[1].model = "Ауди"; fifa[1].price = 25000; fifa[1].type = "Легковой";
   fifa[2].model = "Рено"; fifa[2].price = 11000; fifa[2].type = "Грузовой";
   fifa[3].model = "Нисан"; fifa[3].price = 17000; fifa[3].type = "Легковой";
   fifa[4].model = "Хонда"; fifa[4].price = 12000; fifa[4].type = "Легковой";
   fifa[5].model = "Хюндай"; fifa[5].price = 18000; fifa[5].type = "Легковой";
   fifa[6].model = "Пежо"; fifa[6].price = 10000; fifa[6].type = "Легковой";
   fifa[7].model = "Порше"; fifa[7].price = 15000; fifa[7].type = "Грузовой";
   fifa[8].model = "Астон Мартин"; fifa[8].price = 100000; fifa[8].type = "Легковой";
   fifa[9].model = "Тойота"; fifa[9].price = 30000; fifa[9].type = "Грузовой";
   fifa[10].model = "Мазерати"; fifa[10].price = 120000; fifa[10].type = "Легковой";
   fifa[11].model = "Ферари"; fifa[11].price = 300000; fifa[11].type = "Легковой";
   fifa[12].model = "Ламборджини"; fifa[12].price = 400000; fifa[12].type = "Легковой";
   fifa[13].model = "Ролс Ройс"; fifa[13].price = 270000; fifa[13].type = "Грузовой";
   fifa[14].model = "Мерседес"; fifa[14].price = 200000; fifa[14].type = "Грузовой";
   
   int sum=0, count=0;
   for(int i = 0 ; i < 15; i++)
     {
       if (fifa[i].type=="Легковой") 
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
