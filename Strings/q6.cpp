int Solution::power(string B) {
    long double A=stold(B);
if(A==0|| A==1) return 0;
return floor(log2(A))==ceil(log2(A))?1:0;
}
