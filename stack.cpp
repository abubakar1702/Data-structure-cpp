#include<iostream>
using namespace std;

#define size 50
int arr[size];
int top = -1;

void push(int x){
    if(top==size-1){
        cout<<"Stack overflow"<<endl;
        return;
    }
    ++top;
    arr[top]=x;
}

void pop(){
    if(top==-1){
        cout<<"Nothing to pop";
    }
    top--;
}

int Top(){
    if(top==-1){
        return -1;
    }
    return arr[top];
}

void Print(){
    for(int i=0; i<=top; i++){
        cout<<arr[i]<<endl;
    }
}

bool isEmpty(){
    if(top==-1){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
}

int main(){
    push(10);
    push(11);
    push(12);
    Print();
    cout<<"<-------->"<<endl;
    Top();
    isEmpty();
    Print();

}
