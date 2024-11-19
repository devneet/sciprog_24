// Method For Matrix Multiplication: C = A X B 
void matmult(int n, int p, int q, double A[n][p], double B[p][q], double C[n][q]){
    
    // Declaring Loop Indices:
    int i, j, k;
    
    //Matrix Multiplication
    for(int i = 0; i < n; i++){
        for(int j = 0; j < q; j++){
            for(int k = 0; k <= p-1; k++){
                C[i][j] += A[i][k] * B[k][j];
                }
        }
    }
}