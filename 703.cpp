#include <iostream.h>
int main()
{
    size_t size;
    cout << "Input size: ";
    cin >> size;
    int** A = new int*[size];
    for(int i=0; i<size; ++i)
    {
        A[i]=new int[size];
        for(int j=0; j<size; ++j)
        {
            cout << "Input A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }
    int* x=new int[size];
    for(int i=0; i<size; ++i)
    {
        cout << "Input x[" << i << "]: ";
        cin >> x[i];
    }
    int* y=new int[size];
    for(int i=0; i<size; ++i)
    {
        cout << "Input y[" << i << "]: ";
        cin >> y[i];
        x[i]+=y[i];
    }
    cout << "Result:" << std::endl;
    for(int i=0; i<size; ++i)
    {
        int sum(0);
        for(int j=0; j<size; ++j)
            sum+=A[i][j]*x[j];
     cout << sum << endl;
    }
    for(int i=0; i<size; ++i)
        delete[] A[i];
    delete[] A;
    delete[] x;
    delete[] y;
    system("pause");
    return EXIT_SUCCESS;
}
