bool possible(vector<int> &A,int val,int B)
{
long long int sum=0;
for(long long int i=0;i<A.size();i++)
{
if(A[i] > val)
sum+=(A[i]-val);
}
return sum>=B;
}
int Solution::solve(vector<int> &A, int B) {
long long int n=A.size();
if(n==0)
return 0;
if(n==1)
{
return A[0]-B;
}
long long int st=0,end=*max_element(A.begin(),A.end());
long long int ans=-1;
while(st<=end)
{
long long int mid=st+(end-st)/2;
if(possible(A,mid,B))
{
ans=max(ans,mid);
st=mid+1;
}
else
{
end=mid-1;
}
}
return ans;
}
