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

void makeCycles(node* &head,int pos){
    node* temp=head;
    node* startNode;

    int count=1;

    while(temp->next!=NULL){

        if(count==pos){
            startNode=temp;
        }
        temp=temp->next;
        count++;

    }

    temp->next=startNode;
}

//Detection Cycles in the linked list
//Floyd’s cycle detection

bool detectCycles(node* &head){
    node* slow=head;
    node* fast=head;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return true;
        }
        
    }
    return false;
}

//Removal of Cycles in a linked list
void removeCycle(node* &head){

node* start=head;
node* fast=head;

do{
    start=start->next;
    fast=fast->next->next;
}

while(start!=fast);

fast=head;
while(start->next!=fast->next){
    start=start->next;
    fast=fast->next;
}

start->next=NULL;


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
    makeCycles(head,3);
    cout<<detectCycles(head)<<endl;
    removeCycle(head);
    cout<<detectCycles(head)<<endl;
    display(head);
}