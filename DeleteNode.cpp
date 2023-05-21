#include<iostream>

using namespace std;

class Node{
public:
    int data;
    Node* next;
};

int Size = 0;

void print(Node** head){
    if(*head==NULL){
        cout<<"Linked List is empty!";
    }
    else{
        Node* temp = *head;
        while(temp!=NULL){
            cout<<temp->data<<endl;
            temp= temp->next;
            Size++;
        }
    }
}


void Insert(int poss, int d, Node** head){
    Node* newNode = new Node();
    newNode->data=d;
    newNode->next=NULL;

    /*

    if(poss<1 || poss>Size+1){
        cout<<"Invalid Position!"<<endl;
        return;
    }
    */
    if(poss==1){
        newNode->next=*head;
        *head = newNode;
        //Size++;
        return;

    }

    Node* temp = *head;

    for(int i=1; i<poss-1; i++){
        temp=temp->next;
    }

    newNode->next=temp->next;
    temp->next=newNode;
    Size++;



}

void deleteNode(Node** head, int poss){
    /*
    if(poss>Size || poss<1){
        cout<<"Invalid position to delete"<<endl;
        return;
    }
    */

    Node* temp1 = *head;
    if(poss==1){
        *head=temp1->next;
        delete(temp1);
        return;
    }
    for(int i=1; i<poss-1; i++){
        temp1=temp1->next;
    }
    Node* temp2 = temp1->next;
    temp1->next = temp2->next;
    delete(temp2);


}
/*
void deleteNodeFront(Node** head){
    if(*head==NULL){
        cout<<"Got nothing to delete";
    }
    else{
        Node* temp = *head;
        *head=*head->next;
        cout<<"Node has been deleted"<<endl;
        delete(temp);
    }
}
*/

int main(){


    Node* head = NULL;
    Node* node1= new Node();
    node1->data=10;
    node1->next=NULL;
    head = node1;

    Node* node2= new Node();
    node2->data=20;
    node2->next=NULL;
    node1->next=node2;

    Node* node3= new Node();
    node3->data=30;
    node3->next=NULL;
    node2->next=node3;

    Node* node4 = new Node();
    node4->data=40;
    node4->next=NULL;
    node3->next=node4;


    Insert(4,90,&head);
    //deleteNode(&head,3);
    print(&head);

    cout<<"Total Size is "<<Size<<".";
    //deleteNodeFront(&head);
    //print(&head);
}


