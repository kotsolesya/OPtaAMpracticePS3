//1 ���� ����� = 15 ��������
#include <iostream> 
#include <cctype> 
int main()
{
    int ctr = 0; 
    char str[] = "321312sad213213213''''''' " ; 
    cin>>str>>endl
    while ( str[ctr] )  
    {
      if ( isalpha(str[ctr]) ) 
          std::cout << "" << str[ctr] << "";
      else
          std::cout << "";
      ctr++;
    }
 system("pause");
    return 0;
}
