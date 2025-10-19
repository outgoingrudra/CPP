#include <iostream>
#include <stdexcept>

template<typename T>
class LinkedList {
    struct Node {
        T value;
        Node* next;
        Node(const T& v) : value(v), next(nullptr) {}
    };

    Node* head;
    Node* tail;
    size_t count;

public:
    LinkedList() : head(nullptr), tail(nullptr), count(0) {}
    ~LinkedList() { clear(); }

    void push_front(const T& v) {
        Node* n = new Node(v);
        if (!head) head = tail = n;
        else { n->next = head; head = n; }
        ++count;
    }

    void push_back(const T& v) {
        Node* n = new Node(v);
        if (!tail) head = tail = n;
        else { tail->next = n; tail = n; }
        ++count;
    }

    void insert_at(size_t pos, const T& v) {
        if (pos == 0) { push_front(v); return; }
        if (pos >= count) { push_back(v); return; }
        Node* cur = head;
        for (size_t i = 1; i < pos; ++i) cur = cur->next;
        Node* n = new Node(v);
        n->next = cur->next;
        cur->next = n;
        ++count;
    }

    T pop_front() {
        if (!head) throw std::runtime_error("pop from empty list");
        Node* n = head;
        T val = n->value;
        head = head->next;
        if (!head) tail = nullptr;
        delete n;
        --count;
        return val;
    }

    T pop_back() {
        if (!head) throw std::runtime_error("pop from empty list");
        if (head == tail) return pop_front();
        Node* cur = head;
        while (cur->next != tail) cur = cur->next;
        T val = tail->value;
        delete tail;
        tail = cur;
        tail->next = nullptr;
        --count;
        return val;
    }

    bool remove_first(const T& v) {
        if (!head) return false;
        if (head->value == v) { pop_front(); return true; }
        Node* cur = head;
        while (cur->next && cur->next->value != v) cur = cur->next;
        if (!cur->next) return false;
        Node* toDelete = cur->next;
        cur->next = toDelete->next;
        if (toDelete == tail) tail = cur;
        delete toDelete;
        --count;
        return true;
    }

    bool contains(const T& v) const {
        Node* cur = head;
        while (cur) { if (cur->value == v) return true; cur = cur->next; }
        return false;
    }

    void reverse() {
        Node* prev = nullptr;
        Node* cur = head;
        tail = head;
        while (cur) {
            Node* nx = cur->next;
            cur->next = prev;
            prev = cur;
            cur = nx;
        }
        head = prev;
    }

    void clear() {
        while (head) {
            Node* n = head;
            head = head->next;
            delete n;
        }
        tail = nullptr;
        count = 0;
    }

    size_t size() const { return count; }
    bool empty() const { return count == 0; }

    void print() const {
        Node* cur = head;
        while (cur) {
            std::cout << cur->value;
            if (cur->next) std::cout << " -> ";
            cur = cur->next;
        }
        std::cout << '\n';
    }
};

int main() {
    LinkedList<int> a;
    a.push_back(10);
    a.push_front(5);
    a.push_back(20);
    a.insert_at(1, 7);
    std::cout << "list: ";
    a.print();

    std::cout << "contains 7? " << (a.contains(7) ? "yes" : "no") << '\n';
    std::cout << "pop front: " << a.pop_front() << '\n';
    std::cout << "pop back: " << a.pop_back() << '\n';

    a.push_back(30);
    a.push_back(40);
    std::cout << "before reverse: ";
    a.print();
    a.reverse();
    std::cout << "after reverse:  ";
    a.print();

    a.remove_first(30);
    std::cout << "after remove 30: ";
    a.print();

    std::cout << "size: " << a.size() << '\n';
    a.clear();
    std::cout << "empty? " << (a.empty() ? "yes" : "no") << '\n';
    return 0;
}
