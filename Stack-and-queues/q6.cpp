vector<int> Solution::prevSmaller(vector<int> &A) {
    stack<int> S; 
    vector<int> K;
  
    // Traverse all array elements 
    for (int i=0; i<A.size(); i++) 
    { 
        // Keep removing top element from S while the top 
        // element is greater than or equal to arr[i] 
        while (!S.empty() && S.top() >= A[i]) 
            S.pop(); 
  
        // If all elements in S were greater than arr[i] 
        if (S.empty()) 
            K.push_back(-1); 
        else  //Else print the nearest smaller element 
            K.push_back(S.top()); 
  
        // Push this element 
        S.push(A[i]); 
    } 
    return K;
}
