void helper(vector<int> &A, int B,vector<int> &temp,vector<vector<int>> &ans,int depth,int sum){
    if(sum>B){
        return;
    }
    if(sum==B){
        sort(temp.begin(),temp.end());
        if(find(ans.begin(),ans.end(),temp)==ans.end()){
            ans.push_back(temp);
            return;
        }
    }
    for(int i=depth;i<A.size();i++){
        sum=sum+A[i];
        temp.push_back(A[i]);
        helper(A,B,temp,ans,depth,sum);
        sum=sum-A[i];
        temp.pop_back();
        depth++;
    }
}
vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
    vector<vector<int>> ans;
    sort(A.begin(),A.end());
    vector<int> temp;
    helper(A,B,temp,ans,0,0);
    sort(ans.begin(),ans.end());
    return ans;
}
