#include<iostream>

using namespace std;

class node{

public:

int data;

node*next;

node(int d){

data=d;

next=NULL;

}

};

void insertAtHead(node*&head,int d){

if(head==NULL){

head=new node(d);

return;

}

node*n=new node(d);

n->next=head;

head=n;

}

void print(node*head){

while(head!=NULL){

cout<<head->data;

head=head->next;

cout<<"->";

}

}

int length(node*head){

int cnt=0;

while(head!=NULL){

cnt++;

head=head->next;

}

return cnt;

}

void insertAtTail(node*&head,int data){

if(head==NULL){

head=new node(data);

return;

}

node*tail=head;

while(tail->next!=NULL){

tail=tail->next;

}

tail->next=new node(data);

return;

}

void insertAtMiddle(node*&head,int data,int p){

if(head==NULL or p==0){

insertAtHead(head,data);

}

else if(p>length(head)){

insertAtTail(head,data);

}

else{

int jump=1;

node*temp=head;

while(jump<=p-1){

temp=temp->next;

jump++;

}

node*n=new node(data);

n->next=temp->next;

temp->next=n;

}

}

void deleteAtBegin(node*&head){

if(head==NULL){

return;

}

node*temp=head->next;

delete head;

head=temp;

}

void deleteAtTail(node*&head){

if(head==NULL){

return;

}

node*slast=head;

node*tail=head;

while(tail->next!=NULL){

tail=tail->next;

}

while(slast->next->next != NULL){

slast=slast->next;

}

slast->next=NULL;

delete tail;

}

int main(){

node*head=NULL;

int count;cin>>count;

for(int i=0;i<count;i++){

int d;cin>>d;

insertAtHead(head,d);

}

//insertAtHead(head,3);

//insertAtHead(head,2);

//insertAtHead(head,1);

//insertAtHead(head,0);

print(head);

//cout<<"\n";

//insertAtMiddle(head,4,2);

//insertAtTail(head,7);

//print(head);

//cout<<"\n";

//

//deleteAtBegin(head);

//print(head);

//

//cout<<"\n";

//deleteAtTail(head);

//print(head);

return 0;

}
