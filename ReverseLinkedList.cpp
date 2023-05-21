#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

};

void print(Node** head){
    if(*head==NULL){
        cout<<"Linked List is Empty!";
    }
    else{
        Node* temp = *head;
        while(temp!=NULL){
            cout<<temp->data<<endl;
            temp=temp->next;
        }
    }

}

void Reverse(Node** head){
    Node *current, *next, *prev;
    prev=NULL;
    current=*head;

    while(current!=NULL){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    *head= prev;

}


int main(){
    Node* head = NULL;

    Node* node1 = new Node();
    node1->data= 10;
    node1->next=NULL;
    head= node1;

    Node* node2 = new Node();
    node2->data= 20;
    node2->next=NULL;
    node1->next=node2;

    Node* node3 = new Node();
    node3->data= 30;
    node3->next=NULL;
    node2->next=node3;

    Reverse(&head);
    print(&head);
}
