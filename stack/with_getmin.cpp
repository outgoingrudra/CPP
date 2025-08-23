#include <iostream>
#include <stack>
using namespace std;
class MinStack{
    stack<int> s, mn;
public:
    void push(int x){ s.push(x); if(mn.empty()||x<=mn.top()) mn.push(x); }
    void pop(){ if(s.top()==mn.top()) mn.pop(); s.pop(); }
    int top(){ return s.top(); }
    int getMin(){ return mn.top(); }
};
int main(){ MinStack st; st.push(3); st.push(5); st.push(2); cout<<st.getMin(); }
