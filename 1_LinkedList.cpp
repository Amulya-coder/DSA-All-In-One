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

//To insert at the end of the Linked List, iterate to the last node. In the below code
//temp is the last node. So temp -> next = new node(val).
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

//Inserting at the head
void insertAtHead(node* &head, int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}

//Corner Case--->Delete at head
void deletehead(node* &head){
    node* todelete=head;
    head=head->next;
    delete todelete;
}

//Deletion
void deletion(node* &head,int val){

//If linked list is empty
if(head==NULL){
    return;
}

//If there is only one element in a linked list
if(head->next==NULL){
    deletehead(head);
    return;
}

node* temp=head;
while(temp->next->data!=val){
    temp=temp->next;
}

//We have to delete temp->next
node* todelete=temp->next;
temp->next=temp->next->next;

delete todelete;
}

//Linear Search in a Linked list
bool search(node* &head,int key){
    node* temp=head;
    while(temp->next!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
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
    deletion(head,1);
    // deletehead(head);
    display(head);
    // cout<<search(head,4)<<endl;
    return 0;
}