#include <bits/stdc++.h>
using namespace std;
int main() {
    map<int,string> m={{1,"A"},{2,"B"},{3,"C"}};
    for(auto it=m.rbegin(); it!=m.rend(); it++)
        cout<<it->first<<" "<<it->second<<endl;
}
