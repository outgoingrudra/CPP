#include <iostream>
using namespace std;
class Student {
    string name;
    int age;
    public:
    Student(string n, int a) {
        name = n;
        age = a;
    }
    void display() {
        cout << "Name: " << name << "\nAge: " << age;
    }
};
int main() {
    Student s("Rudra", 20);
    s.display();
    return 0;
}
