#include <iostream>
#include <stack>
using namespace std;
int main(){
    string s="Hello";
    stack<char> st;
    for(char c:s) st.push(c);
    string rev="";
    while(!st.empty()){ rev+=st.top(); st.pop(); }
    cout<<rev;
}
