#include <bits/stdc++.h>
using namespace std;
int main() {
    string s1="listen", s2="silent";
    map<char,int> m1,m2;
    for(char c:s1) m1[c]++;
    for(char c:s2) m2[c]++;
    cout<<(m1==m2 ? "Anagram":"Not Anagram");
}
