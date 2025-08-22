#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<int> v={9,4,7,1,3};
    sort(v.begin(),v.end());
    for(int x:v) cout<<x<<" ";
    cout<<endl;
    sort(v.rbegin(),v.rend());
    for(int x:v) cout<<x<<" ";
}
