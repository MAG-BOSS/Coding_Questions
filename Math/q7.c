int MOD;
 int comp(const void *a, const void *b){
     return *((int*)a)-*((int*)b);
 }
 #define ll long long
 
ll modPow(ll a, ll x, ll p) {
// return a^x mod p
ll res = 1;
while(x>0) {
if(x & 1) res = (res*a) % p;
a=(a*a)%p;
x >>= 1;
}
 
return res;
}
 
ll modInverse(ll a, ll p) {
// return modular multiplicative of: a mod p, assuming p is prime
return modPow(a, p-2, p);
}
 
ll modBinomial(ll n, ll k, ll p) {
// return C(n,k) mod p, assuming p is prime
ll numerator = 1; // n*(n-1)* ... * (n-k+1)
int i;
for(i=0;i<k;i++) numerator = (numerator*(n-i))%p;
 
ll denominator = 1; // k!
for(i=1;i<=k;i++) denominator = (denominator*i) %p;
 
ll res = modInverse(denominator,p);
res = (res*numerator)%p;
return res;
}
int comb(int a, int b){
     int i;
     unsigned long long out = 1;
     for(i=1;i<=b;i++){
         out = ((out*(a-i+1))/i);
     }
     return out%MOD;
 }
 int getTimes(int a){
     unsigned long long out = 1;
     int i;
     for(i=1;i<a;i++){
         out *=2;
         out%=MOD;
     }
     return out;
 }
int solve(int A, int* B, int n2) {
    if(!n2)return 0;
    qsort(B,n2,sizeof(int),comp);
    int i,N=A-n2,L=1,times,com;
    unsigned long long tot=1;
    MOD = pow(10,9)+7;
    for(i=0;i<n2;i++){
        if(L<=(B[i]-1)){
            if(i){
                times = getTimes((B[i]-L));
            }else times = 1;
            tot = (tot*times)%MOD;
            com = modBinomial(N,B[i]-L,MOD);
            tot = (tot * com)%MOD;
            N-=(B[i]-L);
        }
        L = B[i]+1;
    }
    return tot;
}
  
