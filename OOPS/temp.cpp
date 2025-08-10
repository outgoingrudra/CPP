#include <iostream>
using namespace std;
class Temp {
    float celsius;
    public:
    Temp(float c) { celsius = c; }
    float toFahrenheit() { return (celsius * 9/5) + 32; }
};
int main() {
    Temp t(37);
    cout << t.toFahrenheit();
    return 0;
}
