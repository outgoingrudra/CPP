#include <iostream>

using namespace std;

int main() {
    int a;
    cout << "Enter a Number :";
    cin>>a;
    int val = 1;
    for(int i=1;i<=a;i++)
        val *= i;
    
    cout <<"Factorial :"<<val;
    

    return 0;
}