/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::removeNthFromEnd(ListNode* head, int B) {
    int len = 0; 
    ListNode* tmp = head; 
    while (tmp != NULL) { 
        len++; 
        tmp = tmp->next;  
    } 
      
    // B > length, then we can't remove node 
    if (B > len)  
    { 
        
        return head->next;  
    } 
      
    // We need to remove head node 
    else if (B == len) { 
          
        // Return head->next 
        return head->next;  
          
    } 
    else 
    { 
        // Remove len - B th node from starting 
        int diff = len - B;           
        ListNode* prev= NULL;        
        ListNode* curr = head;          
        for(int i = 0;i < diff;i++){ 
            prev = curr;             
            curr = curr->next;       
        } 
        prev->next = curr->next; 
        return head;
    }
            
        
    
}
