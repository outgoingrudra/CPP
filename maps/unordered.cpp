#include <bits/stdc++.h>
using namespace std;
int main() {
    string s="this is test this";
    unordered_map<string,int> um;
    map<string,int> m;
    stringstream ss(s); string word;
    while(ss>>word){um[word]++; m[word]++;}
    cout<<"Unordered:\n"; for(auto&p:um) cout<<p.first<<" "<<p.second<<endl;
    cout<<"Ordered:\n"; for(auto&p:m) cout<<p.first<<" "<<p.second<<endl;
}
