#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;
int prec(char c){ if(c=='+'||c=='-') return 1; if(c=='*'||c=='/') return 2; return 0; }
string infixToPrefix(string s){
    reverse(s.begin(),s.end());
    for(char &c:s) if(c=='(') c=')'; else if(c==')') c='(';
    stack<char> st; string res="";
    for(char c:s){
        if(isalnum(c)) res+=c;
        else if(c=='(') st.push(c);
        else if(c==')'){ while(!st.empty()&&st.top()!='('){ res+=st.top(); st.pop(); } st.pop(); }
        else{ while(!st.empty()&&prec(st.top())>=prec(c)){ res+=st.top(); st.pop(); } st.push(c); }
    }
    while(!st.empty()){ res+=st.top(); st.pop(); }
    reverse(res.begin(),res.end());
    return res;
}
int main(){ cout<<infixToPrefix("(A-B/C)*(A/K-L)"); }
