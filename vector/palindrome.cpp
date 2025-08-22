#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v={1,2,3,2,1};
    bool pal=true;
    for(int i=0;i<v.size()/2;i++)
        if(v[i]!=v[v.size()-1-i]) pal=false;
    cout<<(pal?"Palindrome":"Not Palindrome");
}
