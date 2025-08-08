#include <iostream>
using namespace std;
class Square {
    float side;
    public:
    Square(float s) {
        side = s;
    }
    void setter(float s) {
        side = s;
    }
    float getter() { return side; }
    float area() { return side * side; }
    float perimeter() { return 4 * side; }
};
int main() {
    Square s(6);
    cout << "Side: " << s.getter() << endl;
    cout << "Area: " << s.area() << endl;
    cout << "Perimeter: " << s.perimeter();
    return 0;
}
