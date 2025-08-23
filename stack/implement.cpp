#include <iostream>
using namespace std;
#define MAX 100
class Stack {
    int arr[MAX], top;
public:
    Stack() { top = -1; }
    void push(int x) {
        if(top == MAX-1) { cout<<"Overflow\n"; return; }
        arr[++top] = x;
    }
    int pop() {
        if(top==-1){ cout<<"Underflow\n"; return -1; }
        return arr[top--];
    }
    int peek() { return (top==-1)? -1 : arr[top]; }
};
int main(){
    Stack s; s.push(10); s.push(20);
    cout<<s.pop()<<endl;
}
