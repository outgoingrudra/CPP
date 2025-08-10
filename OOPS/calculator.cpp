#include <iostream>
using namespace std;
class Calc {
    public:
    float add(float a, float b) { return a+b; }
    float sub(float a, float b) { return a-b; }
    float mul(float a, float b) { return a*b; }
    float div(float a, float b) { return b!=0 ? a/b : 0; }
};
int main() {
    Calc c;
    cout << c.add(5,3) << " " << c.mul(4,2);
    return 0;
}
