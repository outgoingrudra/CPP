#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> arr={1,2,2,3,4,4,5};
    map<int,int> freq;
    for(int x:arr) freq[x]++;
    for(auto &p:freq) if(p.second>1) cout<<p.first<<" ";
}
