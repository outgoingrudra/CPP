#include <iostream>
#include <stack>
using namespace std;
int eval(string exp){
    stack<int> s;
    for(char c:exp){
        if(isdigit(c)) s.push(c-'0');
        else{
            int b=s.top(); s.pop(); int a=s.top(); s.pop();
            if(c=='+') s.push(a+b);
            if(c=='-') s.push(a-b);
            if(c=='*') s.push(a*b);
            if(c=='/') s.push(a/b);
        }
    }
    return s.top();
}
int main(){ cout<<eval("231*+9-"); }
