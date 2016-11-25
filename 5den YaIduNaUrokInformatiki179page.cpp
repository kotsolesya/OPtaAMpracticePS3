//5den Urok informatiki 179page 13zadacha
#include <iostream>
using namespace std;
struct pupil
{
    char name[20];
    int height;
};
int main()
{
    const int n=25; // a
    pupil a[n], x, min, max, max1, max2;
    int k=0;
    for (int i=0; i<n; i++)
        cin >> a[i].name >> a[i].height;
    min = max = a[0];
    for (int i=0; i<n; i++)
        if (a[i].height > max.height)
            max = a[i];
        else if (a[i].height < min.height)
            min = a[i];
    cout << "\nmin height - " << min.name << "\nmax height - " << max.name << "\n\n";
    
    max1.height = 0; // b
    max2.height = 0;
    for (int i=0; i<n; i++)
        if (a[i].height > max1.height && a[i].height != max.height)
        {
            max1 = a[i];
            k = i;
        }
    for (int i=0 ; i<n; i++)
        if (a[i].height >max2.height && i != k && a[i].height != max.height)
            max2 = a[i];
    cout << "1) " << max1.name << " and " << max2.name << " samie visokie posle samogo visokogo \n";
    max1.height = 0; // c
    max2.height = 0;
    k=0;
    for (int i=0; i<n; i++)
    {
        if (a[i].height != max.height && a[i].height > max1.height)
        {
            max1 = a[i];
            k=i;
        }
        if (a[i].height != max.height && a[i].height > max2.height && k != i)
            max2 = a[i];
    }
    cout << "2) " << max1.name << " and " << max2.name << " bez dvoh operatorov cikla \n\n";
    for (int i=1; i<n; i++) // d
        for (int j=0; j<n-i; j++)
            if (a[j].height > a[j+1].height)
            {
                x = a[j];
                a[j] = a[j+1];
                a[j+1] = x;
            }
    for (int i=0; i<n; i++)
        cout << a[i].name << " " << a[i].height << endl;
        system("pause");
        return 0;
}
