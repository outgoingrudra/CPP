#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> arr = {1,2,2,3,3,3,4,5,5};
    map<int,int> freq;
    for (int x : arr) freq[x]++;
    int mx = 0, ans;
    for (auto &p : freq) if (p.second > mx) { mx = p.second; ans = p.first; }
    cout << ans;
}
