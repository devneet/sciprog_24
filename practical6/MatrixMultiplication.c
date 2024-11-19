#include<stdio.h>

int main(){

    int n=5, p=3, q=4;
    double A[n][p], B[p][q], C[n][q];

    //Intialising Matrix A
    for(int i = 0 ; i < n ; i++){
        for(int j = 0; j < p; j++){
            A[i][j] = i + j;
        }
    }

    //Intialising Matrix B
    for(int i = 0; i < p ; i++){
        for(int j=0; j < q; j++){
            B[i][j] = i - j;
        }
    }

    //Intialising Matrix C
    for(int i = 0; i < n; i++){
        for(int j = 0; j < q ;j++){
            C[i][j] = 0.0;
        }
    }

    //Matrix Multiplication
    for(int i = 0; i < n; i++){
        for(int j = 0; j < q; j++){
            for(int k = 0; k <= p-1; k++){
                C[i][j] += A[i][k] * B[k][j];
                }
        }
    }

    //Printing Matrix A
    printf("Matrix A:\n\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<p; j++){
            printf("%3.0lf\t", A[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    //Printing Matrix B
    printf("Matrix B:\n\n");
    for(int i = 0; i < p; i++){
        for(int j = 0; j < q; j++){
            printf("%3.0lf\t",B[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    //Printing Matrix C
    printf("Resulting Matrix C post multiplication:\n\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < q; j++){
            printf("%3.0lf\t",C[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    
    return 0;

}