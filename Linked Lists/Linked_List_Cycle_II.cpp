#include <bits/stdc++.h>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution
{
public:
    ListNode *detectCycle(ListNode *head)
    {

        /* TC-O(n) and Space Complexity-O(n)
        ListNode* temp=head;
        set<ListNode*> s;

        ListNode* ret=NULL;

        while(temp!=NULL){

            if(s.find(temp)!=s.end()){
                ret=temp;
                break;
            }
            s.insert(temp);
            temp=temp->next;
        }

        return ret;
        */

        // Using Floyd's Cycle Detection Algorithm
        // Time Complexity - O(N)
        // Space Complexity - O(1
        ListNode *slow = head;
        ListNode *fast = head;

        bool flag = false;
        while (fast != NULL and fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast)
            {
                slow = head;
                flag = true;
                break;
            }
        }

        if (flag == true)
        {

            while (slow != fast)
            {

                slow = slow->next;
                fast = fast->next;
            }
            return slow;
        }

        return NULL;
    }
};