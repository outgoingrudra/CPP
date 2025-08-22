#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v={1,3,5,7,9,11};
    int target=7, l=0, r=v.size()-1, mid, found=-1;
    while(l<=r) {
        mid=(l+r)/2;
        if(v[mid]==target){ found=mid; break; }
        else if(v[mid]<target) l=mid+1;
        else r=mid-1;
    }
    cout<<(found==-1?"Not Found":"Found at index "+to_string(found));
}
