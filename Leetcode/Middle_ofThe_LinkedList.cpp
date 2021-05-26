class Solution {
public:
    ListNode* middleNode(ListNode* head) {

        ListNode* hare=head;
        ListNode* tortoise=head;

        while(hare && hare->next){
            tortoise=tortoise->next;
            hare=hare->next->next;
        }
            return tortoise;
    }
};