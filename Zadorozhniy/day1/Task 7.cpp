#include <iostream.h>
#include <string.h>

template< class T >
void bubbleSort(T* arr, int size) {
    T tmp;
    for (int i = 0; i < size - 1; ++i) {            
        for(int j = 0; j < size - 1; ++j) {     
            if (arr[j + 1] < arr[j]) {
                tmp = arr[j + 1]; 
                arr[j + 1] = arr[j]; 
                arr[j] = tmp;
            }
        }
    }
}


int main(){
    char text[100];
    int length;
    gets(text);
    length = strlen(text);
    bubbleSort(text,length);
    cout<<text<<endl;
    system("pause");
    return 0;
    }
