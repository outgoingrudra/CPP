#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int>a={1,2,3}, b={3,4,5};
    map<int,int> freq;
    for(int x:a) freq[x]++;
    for(int x:b) freq[x]++;
    for(auto &p:freq) cout<<p.first<<" ";
}
