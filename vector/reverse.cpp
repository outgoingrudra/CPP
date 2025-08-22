#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v={1,2,3,4,5};
    for(int i=0;i<v.size()/2;i++) swap(v[i],v[v.size()-1-i]);
    for(int x:v) cout<<x<<" ";
}
