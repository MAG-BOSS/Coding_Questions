/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::lPalin(ListNode* A) {
    ListNode* slow= A; 
  
        // Declare a stack  
        stack <int> s; 
   
  
        // Push all elements of the list  
        // to the stack  
        while(slow != NULL){ 
                s.push(slow->val); 
  
                // Move ahead  
                slow = slow->next; 
        } 
  
        // Iterate in the list again and  
        // check by popping from the stack 
        while(A != NULL ){ 
              
            // Get the top most element  
             int i=s.top(); 
  
             // Pop the element  
             s.pop(); 
  
             // Check if data is not 
             // same as popped element  
            if(A -> val != i){ 
                return false; 
            } 
  
            // Move ahead  
           A=A->next; 
        } 
  
return true; 
}
