#include<iostream>

using namespace std;

class Node{
public:
    int data;
    Node* next;
};

Node* head = NULL;

void print(){
    if(head==NULL){
        cout<<"Linked List is empty!";
    }
    else{
        while(head!=NULL){
            cout<<head->data<<endl;
            head=head->next;
        }
    }
}

void addAfter(Node* p, int n){
    if(p==NULL){
        cout<<"No previous node found!";
        return;
    }
    Node* newNode = new Node();
    newNode->data=n;
    newNode->next=NULL;
    while(head->data==n){
            head=head->next;

    }
    newNode->next=p->next;
    p->next=newNode;
}


void addBefore(Node* nodeNum, int n){
    Node* temp = head;
    Node* prev = head;

    Node* newNode = new Node();
    newNode->data=n;
    newNode->next=NULL;

    if(temp==NULL){
        cout<<"Invalid";
        return;
    }
    if(temp==nodeNum){
        newNode->next=head;
        head=newNode;
        return;
    }

    while(temp->next!=NULL){
            prev=temp;
            temp=temp->next;
    }

    prev->next=newNode;
    newNode->next=temp;


}

void deleteNodeFront(){
    if(head==NULL){
        cout<<"Got nothing to delete";
    }
    else{
        Node* ptr = head;
        head = head->next;
        cout<<"Node has been deleted"<<endl;
        delete(ptr);
    }
}

void deleteAt(Node* nodeName){
    Node* temp = head;
    Node* prev = head;

    if(nodeName==head){
        head= temp->next;
        delete(temp);
        temp = NULL;
        return;
    }
    while(temp->next!=NULL){
        prev = temp;
        temp=temp->next;
    }
    prev->next=NULL;
    delete(temp);
    temp=NULL;

    while(temp!=nodeName){
        prev = temp;
        temp=temp->next;
    }
    prev->next=temp->next;


}



void addFront(int n){
    Node* new_node= new Node();
    new_node->data=n;
    new_node->next=NULL;
    if(head!=NULL) new_node->next=head; //here we can access head because head is a global variable.
    head = new_node;

}

void addEnd(int x){
    Node* new_node = new Node();
    new_node->data = x;
    new_node->next = NULL;
    if(head==NULL){
        head=new_node;
    }
    else{
        Node* lastNode = head;
        while(lastNode->next!=NULL){
            lastNode=lastNode->next;
        }
        lastNode->next=new_node;
    }
}

int main(){

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

    //addAfter(node3, 11);


    //addBefore(node1,25);

    //deleteAt(node4);

    print();
}
