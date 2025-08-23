#include <bits/stdc++.h>
using namespace std;
int main() {
    map<int,string> m1 = {{1,"A"},{2,"B"}};
    map<int,string> m2 = {{3,"C"},{4,"D"}};
    m1.insert(m2.begin(), m2.end());
    for (auto &p:m1) cout<<p.first<<" "<<p.second<<endl;
}
