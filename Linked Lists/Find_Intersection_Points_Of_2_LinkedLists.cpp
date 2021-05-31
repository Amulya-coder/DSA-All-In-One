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

node* n = new node(val);
node* temp=head;

if(head==NULL){
    head=n;
    return;
}

while(temp->next!=NULL){
    temp=temp->next;

    }
   temp->next=n; 

}

//Counting the (numer of nodes or length) in a linked list
int length(node* head){

node* temp=head;
int l=0;
while(temp!=NULL){
    l++;
    temp=temp->next;
}

return l;

}

//Finding the ontersection of the Linked List
int intersection(node* &head1,node* &head2){

node* ptr1;
node* ptr2;

int l1=length(head1);
int l2=length(head2);
int d=0;
if(l1>l2){
    d=l1-l2;
    ptr1=head1;
    ptr2=head2;
}

else{
    d=l2-l1;
    ptr1=head2;
    ptr2=head1;
}

//Traversing in the first ll till d distance;
while(d){

    ptr1=ptr1->next;
    d--;


    if(ptr1==NULL){
        return -1;
    }

}

while(ptr1 !=NULL && ptr2 !=NULL){

//In this case we will return the intersectiong node when ptr1 and ptr2 will be same
if(ptr1==ptr2){
    return ptr1->data;
}

//Paralley traverse in both the linked list
ptr1=ptr1->next;
ptr2=ptr2->next;
}
//If there is no intersecting node then we will return  -1
return -1;

}

//Forming the nodes in both of the linked linst for intersection 
void intersect(node* &head1,node* &head2,int pos){

node* temp1=head1;
pos--;
while(pos){
    temp1=temp1->next;
}
node* temp2=head2;
while(temp2->next!=NULL){
    temp2=temp2->next;
}
temp2->next=temp1;


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
node* head1=NULL;
node* head2=NULL;

insertAtTail(head1,1);
insertAtTail(head1,2);
insertAtTail(head1,3);
insertAtTail(head1,4);
insertAtTail(head1,5);
insertAtTail(head2,9);
insertAtTail(head2,10);
intersect(head1,head2,4);
display(head1);
display(head2);
cout<<intersection(head1,head2)<<endl;
// display(head);


}















