#include <iostream>
#include <cmath>
using namespace std;
class Triangle {
    float a, b, c;
    public:
    Triangle(float x, float y, float z) {
        a = x;
        b = y;
        c = z;
    }
    void setter(float x, float y, float z) {
        a = x;
        b = y;
        c = z;
    }
    float perimeter() { return a + b + c; }
    float area() {
        float s = (a + b + c) / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }
};
int main() {
    Triangle t(3, 4, 5);
    cout << "Perimeter: " << t.perimeter() << endl;
    cout << "Area: " << t.area();
    return 0;
}
