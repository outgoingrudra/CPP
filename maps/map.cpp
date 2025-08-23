#include <bits/stdc++.h>
using namespace std;
int main() {
    map<int, string> students;
    students[1] = "Ravi";
    students[2] = "Amit";
    students[3] = "Riya";
    for (auto &p : students) cout << p.first << " -> " << p.second << endl;
}
