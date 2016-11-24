#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main () {
    int N=3,A[3][3],B[3][3],C[3][3],i,j,k,sum;
    
    for (int i = 0; i < N; i++){
    for (int j = 0; j < N; j++){
    A[i][j] = rand()%10;
    
    B[i][j] = rand()%10 ;
}}

    for (i = 0; i < N; ++i) for (j = 0; j < N; ++j) {
    sum = 0; 
    for (k = 0; k < N; ++k) {  
    sum += A[i][k] * B[k][j];       
    C[i][j] = sum;
    }}
    
    for (int i = 0; i < N; i++){
    for (int j = 0; j < N; j++){
    cout<<C[i][j]<<" ";
}   cout<<endl;
}
            system ("pause");
            return 0;
}
            
