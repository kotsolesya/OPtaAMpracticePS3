#include <iostream>
#include <locale>
  using namespace std;
  int main() {
   for (char ch; cin.get(ch) && ch != '\n'; ) {
    if (!isalpha(ch)) {
         cout << ch;
      }
      }
   cout << endl;
   system("pause");
}
