#include <iostream>
using namespace std;
struct Node { int data; Node* next; };
class Stack {
    Node* top;
public:
    Stack(){ top=NULL; }
    void push(int x){ Node* t=new Node(); t->data=x; t->next=top; top=t; }
    int pop(){ if(!top) return -1; int x=top->data; Node* t=top; top=top->next; delete t; return x; }
};
int main(){ Stack s; s.push(5); s.push(10); cout<<s.pop(); }
