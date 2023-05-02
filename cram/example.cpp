#include <iostream>
using namespace std;

class Base {
public:
    Base() { cout << "Base::Base()" << endl; }
    ~Base() { cout << "Base::~Base()" << endl; }
};

class Derived : public Base {
public:
    Derived() { cout << "Derived::Derived()" << endl; }
    ~Derived() { cout << "Derived::~Derived()" << endl; }
};

int main() {
    Base* b = new Derived;
    delete b;
    return 0;
}
