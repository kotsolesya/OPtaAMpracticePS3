#include <iostream>
using namespace std;
int main()
{
    int mass[] = { 5000, 1000, 500, 200, 100, 50, 20, 10, 5, 2, 1 };
    int sum;
    cout << "vedite sumu k vidachi:\n";
    cin >> sum;
    cout << "Vudayu...\n";
    int i = 0;
    while (sum != 0)
    {
        while (sum >= mass[i])
        {
            cout << mass[i] << endl;
            sum -= mass[i] ;
        }
        i++;
    }
    cout << "Konets vidachi\n";
    system ("pause");
    return 0;
}
