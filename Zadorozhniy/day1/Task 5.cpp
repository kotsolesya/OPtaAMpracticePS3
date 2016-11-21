#include <iostream.h>
#include <string.h>

int main(int argc, char*argv[])
{

char text[500];    
    gets(text); 
    int countw=0, max=0, min=0, temp=0, maxw=0, minw=0;
    min = strlen(text);
    for (int i=0; i<strlen(text); i++) {
        if (text[i]!=' ' && text[i]!='\0') {
            countw++;                   
        } else {
            if(text[i+1]==' ' )
                i++;
            if(countw>max)
            {   
                max=countw;     
                maxw=i;        
            }
            else if(countw<min)
            {
                min=countw;  
                minw=i;    
            }
            countw=0;                       
        }               
    }
    cout<<endl; 
             cout<<"max :"<<max<<endl;
             cout<<"min :"<<min<<endl;
   system("pause");
   return 0;
}

