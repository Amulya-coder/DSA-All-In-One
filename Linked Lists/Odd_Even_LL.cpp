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
    ListNode *oddEvenList(ListNode *head)
    {

        // Time Complexity O(n) and Space Complexity O(1)
        if (!head or !head->next or !head->next->next)
        {
            return head;
        }

        ListNode *odd = head;
        ListNode *even = head->next;
        ListNode *even_strt = head->next;

        while (even and even->next)
        {
            odd->next = even->next;
            even->next = even->next->next;
            odd = odd->next;
            even = even->next;
        }

        odd->next = even_strt;

        return head;
    }
};