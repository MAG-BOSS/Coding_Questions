int Solution::searchInsert(vector<int> &A, int B) {
    int* l = upper_bound(A.begin(),A.end(),B);
    return *l;
}