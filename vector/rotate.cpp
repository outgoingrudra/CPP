#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<int> v={1,2,3,4,5};
    int k=2;
    rotate(v.begin(),v.begin()+k,v.end());
    for(int x:v) cout<<x<<" ";
}
