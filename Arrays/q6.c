void setZeroes(int** A, int n11, int n12) {
    int i;
    int j;
    int k;
    int **B=(int **)malloc(n11 * sizeof(int *));
    for(i=0;i<n11;i++){
        B[i]=(int *)malloc(n12 * sizeof(int));
    }
    for(i=0;i<n11;i++){
        for(j=0;j<n12;j++){
            B[i][j]=1;
        }
    }
    for(i=0;i<n11;i++){
        for(j=0;j<n12;j++){
            if(A[i][j]==0){
                for(k=0;k<n12;k++){
                    B[i][k]=0;
                }
                for(k=0;k<n11;k++){
                    B[k][j]=0;
                }
            }
        }
    }
    for(i=0;i<n11;i++){
        for(j=0;j<n12;j++){
            A[i][j]=B[i][j];
        }
    }
}