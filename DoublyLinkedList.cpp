#include<iostream>

using namespace std;

class Node{
public:
    Node* prev;
    int data;
    Node* next;
};

void Print(Node** head){
    if(*head==NULL){
        cout<<"Linked list is empty!";
        return;
    }
    else{
        Node* temp = *head;
        while(temp!=NULL){
            cout<<temp->data<<endl;
            temp=temp->next;
        }
    }
}

void insertHead(Node** head,int d){
    //Node* new_Node = newNode(*head,10);
    Node* new_Node= new Node();
    new_Node->prev=NULL;
    new_Node->data=d;
    new_Node->next=NULL;

    if(head==NULL){
        *head=new_Node;
        return;

    }
    (*head)->prev=new_Node;
    new_Node->next=*head;
    *head=new_Node;

}


void insertAt(Node**  head, int pos,int d){
    Node* new_Node= new Node();
    new_Node->prev=NULL;
    new_Node->data=d;
    new_Node->next=NULL;


    if(pos==1){
        (*head)->prev=new_Node;
         new_Node->next=*head;
         *head=new_Node;
    }
    else{
            Node* temp = *head;
            for(int i=1; i<pos-1; i++){
                temp=temp->next;
            }
            new_Node->next=temp->next;
            temp->next=new_Node;

        }
}


int main(){
    Node* head = NULL;

    Node* node1 = new Node();
    node1->data= 10;
    node1->next=NULL;
    node1->prev=head;;
    head=node1;

    Node* node2 = new Node();
    node2->data=20;
    node2->next=NULL;
    node2->prev=node1;
    node1->next=node2;

    insertHead(&head,5);
    insertAt(&head,2,33);
    Print(&head);
}
