#include <bits/stdc++.h>
using namespace std;
int main() {
    string s = "programming";
    map<char,int> freq;
    for (char c : s) freq[c]++;
    for (auto &p : freq) cout << p.first << " : " << p.second << endl;
}
