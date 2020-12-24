int floor(vector<vector> A,int k){
int ans=-1;
int lo=0,hi=A.size()-1;
int m;
while(lo<=hi){
m=(lo+hi)/2;
if(A[m][0]<=k){
ans=m;
lo=m+1;
}
else{
hi=m-1;
}
}
return ans;
}

bool bs(vector<vector> A,int k, int row){
int lo=0;
int hi=A[row].size()-1;
int m;
while(lo<=hi){
m=(lo+hi)/2;
if(A[row][m]==k)return true;
else if(A[row][m]<k){
lo=m+1;
}
else{
hi=m-1;
}
}
return false;
}

int Solution::searchMatrix(vector<vector > &A, int B) {
int row=floor(A,B);
if(row==-1)return 0;
if(bs(A,B,row)==true)return 1;
return 0;
}