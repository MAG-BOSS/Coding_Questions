int coverPoints(int* A, int n1, int* B, int n2) {
    int i;
    int sum=0;
    for(i=0;i<n1-1;i++){
        sum=sum+ great(A[i]-A[i+1],B[i]-B[i+1]);
    }
    return sum;
}
int great(int a,int b){
    if(a<0){
        a=-1*a;
    }
    if(b<0){
        b=-1*b;
    }
    int c;
    if(a>=b){
        c=a;
    }else{
        c=b;
    }
    return c;
}