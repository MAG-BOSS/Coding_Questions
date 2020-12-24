int power(int x,int n){
    if(n==0){
        return 1;
    }
    int temp=power(x,n/2);
    if(n%2==0){
        return temp*temp;
    }else{
        return x*temp*temp;
    }
}
int powmod(int x, int n, int d) {
    int temp;
    long long a = x%d;
    long long res=1;
    if(x==0)
        return 0;
    if (n == 0) return 1 % d;
    while(n>0)
    {
        if (n % 2 == 1) {
                    res = (res * a) % d;
                    n--;
                } else {
                    a = (a * a) % d;
                   n = n>>1;
                }
    }
    
    if(res < 0)
    {
        res = (res + d) % d;
    }
    
    return (int)res;
}