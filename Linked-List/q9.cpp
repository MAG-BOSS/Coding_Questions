/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::rotateRight(ListNode* A, int B) {
    if(B==0 || A->next==NULL){
        return A;
    }
    
    int len=1;
    ListNode* curr=A;
    while(curr->next!=NULL){
        len++;
        curr=curr->next;
    }
    
    int B1=B%len;
    ListNode* temp=A;
    for(int i=0;i<len-B1;i++){
        temp=temp->next;
    }
    ListNode* ans=new ListNode(0);
    ListNode* fin=ans;
    for(int i=1;i<=B1;i++){
        ListNode* t1=new ListNode(temp->val);
        ans->next=t1;
        temp=temp->next;
        ans=ans->next;
    }
    ListNode* kt=A;
    for(int i=0;i<len-B1;i++){
        ListNode* t2=new ListNode(kt->val);
        ans->next=t2;
        kt=kt->next;
        ans=ans->next;
    }
    return fin->next;
    
}
