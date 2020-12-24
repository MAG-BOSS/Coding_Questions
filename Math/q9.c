int* reverse(int x){
    int n=0;
    int a=x;
    while(a>0){
        a=a/10;
        n++;
    }
    int *B=(int *)malloc(n * sizeof(int));
    int i=0;
    while(x>0){
        B[i]=x%10;
        x=x/10;
    }
    return B;
}

int isPalindrome(int A) {
    if(reverse(A)==A){
        return 1;
    }else{
        return 0;
    }
}
