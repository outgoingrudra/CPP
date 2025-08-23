#include <iostream>
using namespace std;
class TwoStack {
    int* arr, size, top1, top2;
public:
    TwoStack(int n){ size=n; arr=new int[n]; top1=-1; top2=n; }
    void push1(int x){ if(top1<top2-1) arr[++top1]=x; }
    void push2(int x){ if(top1<top2-1) arr[--top2]=x; }
    int pop1(){ return (top1>=0)? arr[top1--] : -1; }
    int pop2(){ return (top2<size)? arr[top2++] : -1; }
};
int main(){ TwoStack ts(10); ts.push1(5); ts.push2(10); cout<<ts.pop1()<<" "<<ts.pop2(); }
