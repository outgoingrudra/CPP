#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<int> a={1,3,5}, b={2,4,6}, c;
    merge(a.begin(),a.end(),b.begin(),b.end(),back_inserter(c));
    for(int x:c) cout<<x<<" ";
}
