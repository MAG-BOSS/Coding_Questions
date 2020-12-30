ListNode* Solution::detectCycle(ListNode* A) {
ListNode n=A;
while(n!=NULL){
if(n->val<0){
n->val=n->val(-1);
return n;
}
n->val=n->val*(-1);
n=n->next;
}
return NULL;
}