bool isPrime(int a){
if (a==1) return false;
int i = 2;
while (i<=sqrt(a)){
if (a%i==0) return false;
i++;
}
return true;
}

vector<int> Solution::primesum(int A) {
if (A==2) return {};
for (int i=0; i<=A/2; i++){
if (isPrime(i) && isPrime(A-i)){
return {i, A-i};
}
}
}