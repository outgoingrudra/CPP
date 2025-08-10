#include <iostream>
using namespace std;
class Employee {
    string name;
    float salary;
    public:
    Employee(string n, float s) { name = n; salary = s; }
    void increase(float p) { salary += salary * p / 100; }
    void display() { cout << name << " Salary: " << salary; }
};
int main() {
    Employee e("Rudra", 30000);
    e.increase(10);
    e.display();
    return 0;
}
