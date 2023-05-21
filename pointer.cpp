#include<iostream>

int main(){
    int a =10;
    int *p;
    p = &a;

    std::cout<<p<<std::endl;
    std::cout<<*p;
}