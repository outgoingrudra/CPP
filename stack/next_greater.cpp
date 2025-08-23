#include <iostream>
#include <stack>
#include <vector>
using namespace std;
vector<int> NGE(vector<int> arr){
    int n=arr.size(); vector<int> res(n,-1); stack<int> s;
    for(int i=0;i<n;i++){ while(!s.empty() && arr[s.top()]<arr[i]){ res[s.top()]=arr[i]; s.pop(); } s.push(i); }
    return res;
}
int main(){ vector<int> a={4,5,2,25}; auto ans=NGE(a); for(int x:ans) cout<<x<<" "; }
