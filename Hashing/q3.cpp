int maxLengthSubArray(vector<int> A, int k){
    int n=A.size();
    unordered_map<int, int> m;
    int sum=0;
    int l=0;
    for(int i=0; i<n; i++){
        sum+=A[i];
        if(sum==k) l=i+1;
        if(m.find(sum)==m.end()) m[sum]=i;
        if(m.find(sum-k)!=m.end()){
            l=max(l, i-m[sum-k]);
        }
    }
    return l;
}

int Solution::solve(vector<int> &A){
    int n=A.size();
    for(int i=0; i<n; i++){
        if(A[i]==0) A[i]=-1;
    }
    return maxLengthSubArray(A, 1);
}