#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<int> v={10,20,4,45,99};
    sort(v.begin(),v.end());
    cout<<"Second Smallest: "<<v[1]<<endl;
    cout<<"Second Largest: "<<v[v.size()-2]<<endl;
}
