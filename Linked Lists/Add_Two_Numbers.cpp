#include <bits/stdc++.h>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {

        // Time Complexity O(n+m) max of the two linked list length
        ListNode *dummynode = new ListNode(0);
        ListNode *temp = dummynode;

        int sum = 0;
        int c = 0;

        while (l1 != NULL or l2 != NULL or c != 0)
        {

            if (l1 != NULL)
            {
                sum = l1->val;
                l1 = l1->next;
            }

            if (l2 != NULL)
            {
                sum += l2->val;
                l2 = l2->next;
            }

            sum = sum + c;
            c = sum / 10;
            ListNode *node1 = new ListNode(sum % 10);
            temp->next = node1;
            temp = temp->next;
            sum = 0;
        }

        return dummynode->next;
    }
};