//� ���������������� ��������� ������ A(m) �������� ������������� �� ���������� ����� D(n) 
//��������� �����. ������� � � ��������� ������� � ��������� ���� � D, ���� - ��������� � ���, 
//�� ���������� � �.�. ��������, �� ������������ ��������� ���� ���; ����� � ��������.
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
#include <numeric>
#include <string.h>
using namespace std;
 main()
{   srand(time(NULL)); 
    int n, i, max,j;
    cout<<"vvedit rozmirnist matruci: ";
    cin>>n; 
    int a[n], d[n];
    for (int i=0; i<n;i++) 
    {a[i]=rand()%10;  
    cout<<a[i]<<"  ";}  
    cout<<endl; 
cout<<"----------"<<endl;
   int temp;
   for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
cout<<endl;
   for (int i=0; i<n;i++)
   cout<<a[i]<<"  ";
   

getch();
}
