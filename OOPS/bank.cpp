#include <iostream>
using namespace std;
class Bank {
    string holder;
    float balance;
    public:
    Bank(string h, float b) {
        holder = h;
        balance = b;
    }
    void deposit(float amt) { balance += amt; }
    void withdraw(float amt) { if(balance >= amt) balance -= amt; }
    void display() { cout << holder << " Balance: " << balance; }
};
int main() {
    Bank b("Rudra", 5000);
    b.deposit(2000);
    b.withdraw(1000);
    b.display();
    return 0;
}
