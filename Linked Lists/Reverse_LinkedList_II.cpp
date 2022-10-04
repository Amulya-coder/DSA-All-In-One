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
    ListNode *reverseBetween(ListNode *head, int left, int right)
    {
        // Time Complexity - O(N)
        // Space Complexity - O(1)
        ListNode *node1 = new ListNode(0);
        node1->next = head;
        ListNode *prev = node1;

        for (int i = 0; i < left - 1; i++)
        {
            prev = prev->next; // 1
        }

        // 1 2 3 4 5 left=2, right=4

        ListNode *curr = prev->next; // 2

        for (int i = 0; i < right - left; i++)
        {
            ListNode *node2 = curr->next; // 3
            curr->next = node2->next;
            node2->next = prev->next;
            prev->next = node2;
        }
        return node1->next;
    }
};