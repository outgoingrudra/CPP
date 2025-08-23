#include <bits/stdc++.h>
using namespace std;
int main() {
    string s = "this is a test this is code";
    stringstream ss(s); string word;
    map<string,int> freq;
    while (ss >> word) freq[word]++;
    for (auto &p : freq) cout << p.first << " -> " << p.second << endl;
}
