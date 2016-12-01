#include <iostream>
#include <set>
#include <cassert>
#include <algorithm>
#include <iterator>
using namespace std;
int main(){
cout<<"Vvedite razmer masiva"<<endl;
int SIZE;
cin>>SIZE;
int* p=new int[SIZE];
for(int i=0;i<SIZE;i++)
{
int arr [ SIZE ];
cout << "Vvod masiva..."<<endl;
for (int i = 0; i < SIZE; ++i)
{
cout << "Vvedite " << i << " Element masiva: ";
cin >> arr[i];
cin.sync();
}
cout << "Unsorted: ";
copy(arr, arr + SIZE, ostream_iterator<int>(cout, " "));
cout <<endl;
multiset<int> set;
copy(arr, arr + SIZE, inserter(set, set.begin()));
assert(set.size() == SIZE);
bool flag = true;
int * pHead = arr;
int * pTail = arr + SIZE - 1;
for ( multiset<int>::const_iterator i = set.begin(); i != set.end(); ++i ){
if ( flag )
*pHead++ = *i;
else
*pTail-- = *i;
flag = ! flag;
}
cout << "Sorted:   ";
copy(arr, arr + SIZE, ostream_iterator<int>(cout, " "));
cout << endl;
system ("pause");
return 0;
}
}
