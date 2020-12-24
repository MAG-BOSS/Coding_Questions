int gcd(int A, int B) {
    int i;
    int j;
    if(A<=B){
        j=A;
    }else{
        j=B;
    }
    int t;
    for(i=j;i>0;i--){
        if(A%i==0 && B%i==0){
            t=i;
            break;
        }
    }
    return t;
}