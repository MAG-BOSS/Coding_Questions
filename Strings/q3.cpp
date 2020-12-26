int Solution::solve(string A) {
    int ctr=0;
    int i;
    for(i=0;i<A.size();i++){
        if(A[i]=='a'||A[i]=='e'||A[i]=='i'||A[i]=='o'||A[i]=='u'||A[i]=='A'||A[i]=='E'||A[i]=='I'||A[i]=='O'||A[i]=='U'){
            ctr=ctr+A.size()-i;
        }
    }
    return ctr%10003;
}