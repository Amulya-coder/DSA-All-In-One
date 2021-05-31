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

int length(node* head){

node* temp=head;
int l=0;

while(temp!=NULL){
    temp=temp->next;
    l++;
}

return l;
}

//Append K last nodes function
node* kappend(node* &head,int k){

node* newHead;
node* newTail;
node* tail=head;

int count=1;
int l=length(head);
k=k%l;
while(tail->next!=NULL){
    if(count==l-k){
        newTail=tail;
    }
    if(count==l-k+1){
        newHead=tail;
    }

    tail=tail->next;
    count++;
}

newTail->next=NULL;
tail->next=head;

return newHead;


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
insertAtTail(head,5);
display(head);
cout<<"After Append"<<endl;
node* newHead=kappend(head,3);
display(newHead);

}