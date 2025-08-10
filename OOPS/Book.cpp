#include <iostream>
using namespace std;
class Book {
    string title, author;
    public:
    Book(string t, string a) { title = t; author = a; }
    void display() { cout << title << " by " << author; }
};
int main() {
    Book b("1984", "George Orwell");
    b.display();
    return 0;
}
