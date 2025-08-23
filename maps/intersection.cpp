#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int>a={1,2,3,4}, b={3,4,5,6};
    map<int,int> freq;
    for(int x:a) freq[x]++;
    for(int x:b) if(freq[x]) cout<<x<<" ";
}
