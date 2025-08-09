#include <iostream>
using namespace std;
int main() {
    string s = "OpenAI";
    int count = 0;
    for(char c : s) {
        char ch = tolower(c);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') count++;
    }
    cout << count;
    return 0;
}
