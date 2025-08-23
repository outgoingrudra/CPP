#include <iostream>
#include <stack>
using namespace std;
bool isSorted(stack<int>&s,int prev=1e9){
    if(s.empty()) return true;
    int x=s.top(); s.pop();
    bool res=isSorted(s,x)&&x<=prev;
    s.push(x);
    return res;
}
int main(){ stack<int>s; s.push(1);s.push(2);s.push(3); cout<<(isSorted(s)?"Yes":"No"); }
