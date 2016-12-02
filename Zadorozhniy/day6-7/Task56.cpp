#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void Dump(string const& to, string const& from)
{
    ofstream ofs(to.c_str(), ios::binary);
    ifstream ifs(from.c_str(), ios::binary);
    if(ifs.is_open() && ofs.is_open()) {
        ofs << ifs.rdbuf();
    } else {
        cerr << "Can't open file(s)\n";
        exit(EXIT_FAILURE);
    }
}
 
int main() {
    string fp1("First.txt"), fp2("Second.txt"), tfp("Temp.txt");
    Dump(tfp, fp1);
    Dump(fp1, fp2);
    Dump(fp2, tfp);
    remove(tfp.c_str());
    cout<<"Files were changed."<<endl;
    system("pause");
    return 0;
}
