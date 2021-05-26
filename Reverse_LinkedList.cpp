#include<bits/stdc++.h>

using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};

void insertAtTail(node* &head,int val){

node* n=new node(val);

if(head==NULL){
    head=n;
    return;
}

node* temp=head;

while(temp->next!=NULL){
    temp=temp->next;
}

temp->next=n;

}

//Iterative approach of Reverse Linked List 
node* reverse(node* &head){
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;

    while(currptr!=NULL){
        nextptr=currptr->next;
        currptr->next=prevptr;

        prevptr=currptr;
        currptr=nextptr;
    }

    return prevptr;

}

//Recursice Approach of Reverse Linked List
node* reverseRecursive(node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    
    node* newhead=reverseRecursive(head->next);
    head->next->next=head;
    head->next=NULL;

    return newhead;
}

//Reverse a linked list by K nodes
node* reversek(node* &head,int k)
{
node* prevptr=NULL;
node* currptr=head;
node* nextptr;

int count=0;

while(currptr!=NULL && count<k){
    nextptr=currptr->next;
    currptr->next=prevptr;

    prevptr=currptr;
    currptr=nextptr;
    count++;
}

if(nextptr!=NULL){
head->next=reversek(nextptr,k);
}

return prevptr;
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";

        temp=temp->next;
    }
    cout<<endl;
}

int main(){

    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);

    //reverse by K nodes
    int k=2;
    node* newhead=reversek(head,k);
    display(newhead);
    
    // node* newhead= reverseRecursive(head);
    // display(newhead);



    return 0;
}