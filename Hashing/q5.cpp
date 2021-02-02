vector<int> Solution::twoSum(const vector<int> &A, int B) {
    vector<int> v;
int n=A.size();
int index2=INT_MAX,index1=INT_MAX;
unordered_map<int,int> mp;
for(int i=0;i<n;i++)
{
    int subsum=B-A[i];
    if(mp.find(subsum)!=mp.end())
    {
        if(mp[subsum]>i)
        {
            if(mp[subsum]<index2)
                index2=mp[subsum];
            if(i<index1)
                index1=i;
        }
        else
        {
            if(i<index2)
                index2=i;
            if(mp[subsum]<index1)
                index1=mp[subsum];
        }
        v.push_back(index1+1);
        v.push_back(index2+1);
        return v;
    }
    if(mp.find(A[i])==mp.end())
        mp[A[i]]=i;
}
return v;
}
