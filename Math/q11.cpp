int Solution::cpFact(int A, int B) {
    int gcd_val = __gcd(A,B);
    if(gcd_val==1) return A;
    while(gcd_val!=1){
        A /= gcd_val;
        gcd_val = __gcd(A,B);
    }
    return A;
}