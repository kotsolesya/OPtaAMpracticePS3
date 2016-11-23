//2 день Вектори і матриці.doc = 6 завдання
#include <iostream>
#include <algorithm>  // для функції merge
#include <iterator> // використовуєм його для вказання 2 масивів
int main ()
{
    const int size=5;
    int MAS_one[size]={1,3,5,7,9};
    int MAS_two[size]={2,4,6,8,10};
    int MAS_rez[size*2];
    std::merge (MAS_one, MAS_one+size, MAS_two, MAS_two+size, MAS_rez); // використовуєм для преміщення 2 масивів в третій
    std::copy (MAS_rez, MAS_rez+size*2, std::ostream_iterator<int> (std::cout, " "));
    std::cout << std::endl;
    system ("pause");
    return 0;
}
