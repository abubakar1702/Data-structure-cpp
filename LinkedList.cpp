#include<iostream>
using std::cout;
using std::endl;
using std::string;
using std::cin;

class Node{
    public:
    int data;
    Node* link;
};

Node* head=NULL;

void insertFront(int x){
    Node* ptr = new Node();
    ptr->data=x;
    ptr->link=NULL;
    if(head!=NULL) ptr->link=head;
    head = ptr;
}

void insertEnd(int y){
    Node* temp2 = new Node();
    temp2->data=y;
    temp2->link= NULL;
    if(head==NULL){
        head= temp2;
    }
    else{
        Node* lastNode = head;
        while(lastNode->link!=NULL){
            lastNode= lastNode->link;
        }
        lastNode->link = temp2;
    }

}

void insertMiddle(int index, int z){
    Node* newNode = new Node();
    newNode->data=z;
    newNode->link=NULL;
    if(z==1){
        newNode->link=head;
        head=newNode;
        return;
    }  
}

void print(){
    if(head==NULL){
        cout<<"LInked list is empty"<<endl;
    }
    else{
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<endl;
            temp=temp->link;
        }
    }
}

int main(){
    int x, n;
    cout<<"How many numbers: ";
    cin>>n;
    for(int i=0;i<n; i++){
        cout<<"Enter data: ";
        cin>>x;
        insertEnd(x);
        print();
    }

}