#include<iostream>
#include<stack>

using namespace std;

void printStack(stack<int> Stack){
    while (!Stack.empty()){
        cout<<Stack.top()<<endl;
        Stack.pop();
    }
}

int main(){
    stack<int>numbersStack;
    numbersStack.push(1);
    numbersStack.push(2);
    numbersStack.push(3);
    numbersStack.push(4);
    numbersStack.pop();
    if(numbersStack.empty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Not empty"<<endl;
    }
    cout<<"Stack size is "<<numbersStack.size()<<endl;
    printStack(numbersStack);

}

