#include <bits/stdc++.h>
using namespace std;
int main() {
    map<int,string> m = {{1,"Banana"},{2,"Apple"},{3,"Cherry"}};
    vector<pair<int,string>> v(m.begin(), m.end());
    sort(v.begin(), v.end(), [](auto &a, auto &b){return a.second < b.second;});
    for (auto &p:v) cout<<p.first<<" "<<p.second<<endl;
}
