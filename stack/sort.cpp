#include <iostream>
#include <stack>
using namespace std;
void insert(stack<int>&s,int x){
  if(s.empty()||x>s.top()){ 
    s.push(x); return; 
  } 
  int y=s.top();
  s.pop();
  insert(s,x); 
  s.push(y); }
void sortS(stack<int>&s){ if(!s.empty()){ int x=s.top(); s.pop(); sortS(s); insert(s,x); } }
int main(){ stack<int>s; s.push(30);s.push(-5);s.push(18);s.push(14);s.push(-3); sortS(s); while(!s.empty()){ cout<<s.top()<<" "; s.pop(); } }
