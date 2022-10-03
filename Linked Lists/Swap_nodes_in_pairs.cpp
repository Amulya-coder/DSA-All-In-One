#include <bits/stdc++.h>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL){};
};
ListNode *swapPairs(ListNode *A)
{
    ListNode *temp = A;
    ListNode *prev = NULL;

    while (temp != NULL && temp->next != NULL)
    {
        ListNode *d1 = temp;       // 1 48
        ListNode *d2 = temp->next; // 2 74
        temp = d2->next;           // 3 42
        d2->next = d1;             // 2->1
        d1->next = temp;           // 1->3

        if (prev == NULL)
        {
            A = d2;
            prev = d1;
        }
        else
        {
            prev->next = d2;
            prev = d1;
        }
    }
    return A;
}