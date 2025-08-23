#include <bits/stdc++.h>
using namespace std;
int main() {
    map<string,int> marks={{"Ravi",90},{"Amit",85},{"Riya",92},{"Arun",88}};
    vector<pair<string,int>> v(marks.begin(),marks.end());
    sort(v.begin(),v.end(),[](auto&a,auto&b){return a.second>b.second;});
    for(int i=0;i<3;i++) cout<<v[i].first<<" "<<v[i].second<<endl;
}
