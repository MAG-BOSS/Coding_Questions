void arrange(int* A, int n1) {
    int *B=(int *)malloc((n1 ) * sizeof(int));
    int i;
    for(i=0;i<n1;i++){
        B[i]=A[i];
    }
    for(i=0;i<n1;i++){
        A[i]=B[B[i]];
    }
}