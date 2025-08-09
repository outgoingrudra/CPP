#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    string s = "level";
    string rev = s;
    reverse(rev.begin(), rev.end());
    cout << (s == rev ? "Yes" : "No");
    return 0;
}
