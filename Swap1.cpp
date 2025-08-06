
#include <iostream>

using namespace std;
int main() {
    int a = 10;
    int b = 20;
    
    int t= a;
    a=b;
    b=t;
    
    cout<<a<<","<<b<<endl;
    

    return 0;
}