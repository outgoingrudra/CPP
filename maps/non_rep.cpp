#include <bits/stdc++.h>
using namespace std;
int main() {
    string s = "swiss";
    map<char,int> freq;
    for (char c : s) freq[c]++;
    for (char c : s) if (freq[c]==1) { cout<<c; break; }
}
