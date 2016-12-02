#include <iostream>
#include <iomanip>
using namespace std;
int nod(int, int);
int main() {
int a, b, c;
cin >>a>>b>>c;
cout << "Nod of " << setw(3) << a << setw(3) << b << setw(3) << c << " is "<< nod(nod(a, b), c);
system("pause");
return 0;
}
int nod(int a, int b) {
while (a != b)
a > b ? a -= b : b -= a;
return a;
}
