#include <iostream>
#include <stack>
#include <vector>
using namespace std;
vector<int> stockSpan(vector<int> price){
    int n=price.size(); vector<int> span(n); stack<int> s;
    for(int i=0;i<n;i++){ while(!s.empty() && price[s.top()]<=price[i]) s.pop(); span[i]=(s.empty())? i+1 : i-s.top(); s.push(i); }
    return span;
}
int main(){ vector<int> p={100,80,60,70,60,75,85}; auto ans=stockSpan(p); for(int x:ans) cout<<x<<" "; }
