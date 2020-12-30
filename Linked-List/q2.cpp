/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
void reverselist(ListNode** head) 
{ 
    // Initialize prev and current pointers 
    ListNode *prev = NULL, *curr = *head, *nextt; 
  
    while (curr) { 
        nextt = curr->next; 
        curr->next = prev; 
        prev = curr; 
        curr = nextt; 
    } 
  
    *head = prev; 
} 
ListNode* Solution::reorderList(ListNode* A) {
    ListNode *slow = A, *fast = slow->next; 
    while (fast && fast->next) { 
        slow = slow->next; 
        fast = fast->next->next; 
    } 
  
    // 2) Split the linked list in two halves 
    // head1, head of first half    1 -> 2 
    // head2, head of second half   3 -> 4 
    ListNode* head1 = A; 
    ListNode* head2 = slow->next; 
    slow->next = NULL; 
  
    // 3) Reverse the second half, i.e.,  4 -> 3 
    reverselist(&head2); 
  
    // 4) Merge alternate nodes 
    A = new ListNode(0); // Assign dummy Node 
  
    // curr is the pointer to this dummy Node, which will 
    // be used to form the new list 
    ListNode* curr = A; 
    while (head1 || head2) { 
        // First add the element from list 
        if (head1) { 
            curr->next = head1; 
            curr = curr->next; 
            head1 = head1->next; 
        } 
  
        // Then add the element from the second list 
        if (head2) { 
            curr->next = head2; 
            curr = curr->next; 
            head2 = head2->next; 
        } 
    } 
  
    // Assign the head of the new list to head pointer 
    A= A->next; 
    return A;
}
