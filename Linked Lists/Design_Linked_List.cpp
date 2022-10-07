#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        next = NULL;
    }
};

class MyLinkedList
{
public:
    int size = 0;
    Node *head = new Node(0);

    MyLinkedList()
    {
    }

    int get(int index)
    {

        if (index >= size)
        {
            return -1;
        }

        Node *temp = head->next;

        for (int i = 0; i < index; i++)
        {
            temp = temp->next;
        }

        return temp->val;
    }

    void addAtHead(int val)
    {

        Node *temp = new Node(val);

        Node *temp2 = head->next;
        head->next = temp;
        head->next->next = temp2;

        size++;
    }

    void addAtTail(int val)
    {

        Node *temp = new Node(val);

        if (head == NULL)
        {
            head = temp;
        }

        else
        {
            Node *temp2 = head;
            while (temp2->next != NULL)
            {
                temp2 = temp2->next;
            }

            Node *temp3 = temp2->next;
            temp2->next = temp;
            temp2->next->next = temp3;

            // temp2->next=temp;
            // temp->next=NULL;
        }
        size++;
    }

    void addAtIndex(int index, int val)
    {
        if (index > size)
        {
            return;
        }

        Node *temp = head;

        for (int i = 0; i < index; i++)
        {
            temp = temp->next;
        }

        Node *temp2 = temp->next;
        temp->next = new Node(val);
        temp->next->next = temp2;

        size++;
    }

    void deleteAtIndex(int index)
    {

        if (index >= size)
        {
            return;
        }
        Node *temp = head;

        if (index == 0)
        {
            Node *temp2 = temp->next;
            temp->next = temp2->next;
            temp2->next = NULL;
            head = temp;
            delete (temp2);
        }

        else
        {
            for (int i = 0; i < index; i++)
            {
                temp = temp->next;
            }

            Node *temp2 = temp->next;

            temp->next = temp2->next;
            temp2->next = NULL;
            delete (temp2);
        }
        size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */