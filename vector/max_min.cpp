#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<int> v={12,45,7,89,23};
    cout<<"Max: "<<*max_element(v.begin(),v.end())<<endl;
    cout<<"Min: "<<*min_element(v.begin(),v.end())<<endl;
}
