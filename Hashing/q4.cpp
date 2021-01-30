int Solution::colorful(int A) {
    unordered_map<int,int> um;
    while(A>0){
        int t=A,r=0,p=1;
        while(t>0){
            r=t%10;
            p=p*r;
            t=t/10;
            um[p]++;
            if(um[p]>1) return 0;
        }
        A=A/10;
    }
    return 1;
}
