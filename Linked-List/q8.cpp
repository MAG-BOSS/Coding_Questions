/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
void swap(int* a, int* b) 
{ 
    int temp; 
    temp = *a; 
    *a = *b; 
    *b = temp; 
} 
ListNode* Solution::swapPairs(ListNode* A) {
    if(!A){
        return A;
    }
    ListNode* head=A;
    /* There must be at-least two nodes in the list */
    if (head != NULL && head->next != NULL) { 
  
        /* Swap the node's data with data of next node */
        swap(&head->val, &head->next->val); 
  
        /* Call pairWiseSwap() for rest of the list */
        swapPairs(head->next->next); 
    } 
    return A;
    
}
