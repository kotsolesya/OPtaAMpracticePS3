//2 ���� ������� � �������.doc = 6 ��������
#include <iostream>
#include <algorithm>  // ��� ������� merge
#include <iterator> // ������������ ���� ��� �������� 2 ������
int main ()
{
    const int size=5;
    int MAS_one[size]={1,3,5,7,9};
    int MAS_two[size]={2,4,6,8,10};
    int MAS_rez[size*2];
    std::merge (MAS_one, MAS_one+size, MAS_two, MAS_two+size, MAS_rez); // ������������ ��� ��������� 2 ������ � �����
    std::copy (MAS_rez, MAS_rez+size*2, std::ostream_iterator<int> (std::cout, " "));
    std::cout << std::endl;
    system ("pause");
    return 0;
}
