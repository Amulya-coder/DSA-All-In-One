bool isPalindrome(ListNode* head){

ListNode* slow=head;
ListNode* fastptr=head;

while(fastptr && fastptr->next){
    slow=slow->next;
    fastptr=fastptr->next->next;

}

slow->next=reverseList(slow->next);
slow=slow->next;

while(slow!=NULL){
    if(head->val!=slow->val){
        return false;
    slow=slow->next;
    head=head->next
    }
    

}
 return true;

}

void reverseList(ListNode* head){
 ListNode* prevptr=NULL;
 ListNode* currptr=head;
 ListNode* nextptr;

while(currptr!=NULL){
    nextptr=currptr->next;
    currptr->next=prevptr;

    prevptr=currptr;
    currptr=nextptr;
}
return prevptr;

}