#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<int> a={1,2,3}, b={3,4,5}, c;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    set_union(a.begin(),a.end(),b.begin(),b.end(),back_inserter(c));
    for(int x:c) cout<<x<<" ";
}
