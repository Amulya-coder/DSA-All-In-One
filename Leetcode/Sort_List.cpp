
class Solution {
public:
    ListNode* sortList(ListNode* head) {
     
        if(head->next==NULL || head==NULL){
            return head ;
        } 
        

        ListNode* middle=middleNode(head);
        ListNode* left=sortList(head);
        ListNode* right=sortList(middle);
        return mergeList(left,right);
    }

    private: ListNode* middleNode(ListNode* head){

        ListNode* slow=head;
        ListNode* fast=head;

        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;

        }

        
        return slow->next; 
    }

    private: ListNode* mergeList(ListNode* h1,ListNode* h2){

        if(h1==NULL)return h2;
        if(h2==NULL)return h1;
        ListNode* p1=h1;
        ListNode* p2=h2;

        ListNode* dummyNode=new ListNode(-1);
        ListNode* p3=dummnyNode;
        
        while(p1!=NULL && p2!=NULL){
        if(p1->data<p2->data){
            p3->next=p1;
            p1=p1->next;
        }

        if(p2->data<p1->data){
            p3->next=p2;
            p2=p2->next;
        }

        p3=p3->next;
        }

        while(p1!=NULL){
            p3->next=p1;
            p1=p1->next;
            p3=p3->next;
        }

        while(p2!=NULL){
            p3->next=p2;
            p2=p2->next;
            p3=p3->next;
        }

        return dummyNode->next;
    }

};